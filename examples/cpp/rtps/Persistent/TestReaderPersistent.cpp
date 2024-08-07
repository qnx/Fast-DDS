// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/**
 * @file TestReaderPersistent.cpp
 *
 */

#include "TestReaderPersistent.h"

#include <fastdds/dds/subscriber/qos/ReaderQos.hpp>
#include <fastdds/rtps/attributes/HistoryAttributes.hpp>
#include <fastdds/rtps/attributes/ReaderAttributes.hpp>
#include <fastdds/rtps/attributes/RTPSParticipantAttributes.hpp>
#include <fastdds/rtps/attributes/TopicAttributes.hpp>
#include <fastdds/rtps/history/ReaderHistory.hpp>
#include <fastdds/rtps/participant/RTPSParticipant.hpp>
#include <fastdds/rtps/reader/RTPSReader.hpp>
#include <fastdds/rtps/RTPSDomain.hpp>

using namespace eprosima::fastdds;
using namespace eprosima::fastdds::rtps;

TestReaderPersistent::TestReaderPersistent()
    : mp_participant(nullptr)
    , mp_reader(nullptr)
    , mp_history(nullptr)
{


}

TestReaderPersistent::~TestReaderPersistent()
{
    RTPSDomain::removeRTPSParticipant(mp_participant);
    delete(mp_history);
}

bool TestReaderPersistent::init()
{
    //CREATE PARTICIPANT
    RTPSParticipantAttributes PParam;
    PParam.builtin.discovery_config.discoveryProtocol = DiscoveryProtocol::SIMPLE;
    PParam.builtin.use_WriterLivelinessProtocol = true;
    mp_participant = RTPSDomain::createParticipant(0, PParam);
    if (mp_participant == nullptr)
    {
        return false;
    }
    //CREATE READERHISTORY
    HistoryAttributes hatt;
    hatt.payloadMaxSize = 255;
    mp_history = new ReaderHistory(hatt);

    PropertyPolicy property_policy;
    property_policy.properties().emplace_back("dds.persistence.plugin", "builtin.SQLITE3");
    property_policy.properties().emplace_back("dds.persistence.sqlite3.filename", "test.db");

    //CREATE READER
    ReaderAttributes ratt;
    Locator_t loc(22222);
    ratt.endpoint.unicastLocatorList.push_back(loc);
    ratt.endpoint.durabilityKind = TRANSIENT;
    ratt.endpoint.persistence_guid.guidPrefix.value[11] = 2;
    ratt.endpoint.persistence_guid.entityId.value[3] = 1;
    ratt.endpoint.properties = property_policy;
    mp_reader = RTPSDomain::createRTPSReader(mp_participant, ratt, mp_history, &m_listener);
    if (mp_reader == nullptr)
    {
        return false;
    }

    return true;
}

bool TestReaderPersistent::reg()
{
    std::cout << "Registering Reader" << std::endl;
    TopicAttributes Tatt;
    Tatt.topicKind = NO_KEY;
    Tatt.topicDataType = "string";
    Tatt.topicName = "exampleTopic";
    eprosima::fastdds::dds::ReaderQos Rqos;
    return mp_participant->registerReader(mp_reader, Tatt, Rqos);
}

void TestReaderPersistent::run()
{
    printf("Press Enter to stop the Reader.\n");
    std::cin.ignore();
}

void TestReaderPersistent::MyListener::on_new_cache_change_added(
        RTPSReader* reader,
        const CacheChange_t* const change)
{
    printf("Received: %s\n", change->serializedPayload.data);
    reader->get_history()->remove_change((CacheChange_t*)change);
    n_received++;
}
