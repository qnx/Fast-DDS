// Copyright 2019 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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
 * @file PDPListener.h
 *
 */

#ifndef _FASTDDS_RTPS_PDPLISTENER_H_
#define _FASTDDS_RTPS_PDPLISTENER_H_
#ifndef DOXYGEN_SHOULD_SKIP_THIS_PUBLIC

#include <fastdds/rtps/reader/ReaderListener.hpp>
#include <fastdds/rtps/builtin/data/ParticipantProxyData.hpp>

#include <mutex>

namespace eprosima {
namespace fastdds {
namespace rtps {

class PDP;

/**
 * Class PDPListener, specification used by the PDP to perform the History check when a new message is received.
 * This class is implemented in order to use the same structure than with any other RTPSReader.
 * @ingroup DISCOVERY_MODULE
 */
class PDPListener : public ReaderListener
{

public:

    /**
     * @param parent Pointer to object creating this object
     */
    PDPListener(
            PDP* parent);

    virtual ~PDPListener() override = default;

    /**
     * New added cache
     * @param reader
     * @param change
     */
    void on_new_cache_change_added(
            RTPSReader* reader,
            const CacheChange_t* const change) override;

protected:

    /**
     * Process an incoming DATA(p).
     * This method is called from PDPListener::on_new_cache_change_added() when an alive DATA(p) is received.
     * Both the reader lock and the PDP lock are held when this method is called.
     *
     * @param  old_data     Pointer to the ParticipantProxyData currently stored in the database. May be nullptr, for a
     *                      recently discovered participant.
     * @param  new_data     ParticipantProxyData from the DATA(p) message.
     * @param  writer_guid  GUID of the writer that sent the DATA(p) message.
     * @param  reader       RTPSReader that received the DATA(p) message.
     * @param  lock         Lock on the PDP database. Passed so it can be released before invoking callbacks.
     */
    virtual void process_alive_data(
            ParticipantProxyData* old_data,
            ParticipantProxyData& new_data,
            GUID_t& writer_guid,
            RTPSReader* reader,
            std::unique_lock<std::recursive_mutex>& lock);

    /**
     * Checks discovery conditions of an incoming DATA(p).
     * This method is called from PDPListener::onNewCacheChangeAdded() just right after
     * having deserialized the DATA(p) message.
     *
     * @param [in]      pdata      ParticipantProxyData from the DATA(p) message.
     * @remarks Whether discovery routine should continue or discard the participant.
     */
    virtual bool check_discovery_conditions(
            ParticipantProxyData& participant_data);

    /**
     * Get the key of a CacheChange_t
     * @param change Pointer to the CacheChange_t
     * @return True on success
     */
    bool get_key(
            CacheChange_t* change);

    //!Pointer to the associated mp_SPDP;
    PDP* parent_pdp_;

    /**
     * @brief Temporary data to avoid reallocations.
     *
     * @remarks This should be always accessed with the pdp_reader lock taken
     */
    ParticipantProxyData temp_participant_data_;
};


} /* namespace rtps */
} /* namespace fastdds */
} /* namespace eprosima */

#endif // ifndef DOXYGEN_SHOULD_SKIP_THIS_PUBLIC
#endif /* _FASTDDS_RTPS_PDPLISTENER_H_ */
