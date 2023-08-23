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

/*!
 * @file OwnershipStrength.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "OwnershipStrength.h"
#include <fastcdr/Cdr.h>


#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>


ExampleMessage::ExampleMessage()
{

}

ExampleMessage::~ExampleMessage()
{
}

ExampleMessage::ExampleMessage(
        const ExampleMessage& x)
{
    m_index = x.m_index;


    m_ownershipStrength = x.m_ownershipStrength;


    m_message = x.m_message;

}

ExampleMessage::ExampleMessage(
        ExampleMessage&& x) noexcept
{
    m_index = x.m_index;


    m_ownershipStrength = x.m_ownershipStrength;


    m_message = std::move(x.m_message);

}

ExampleMessage& ExampleMessage::operator =(
        const ExampleMessage& x)
{

    m_index = x.m_index;


    m_ownershipStrength = x.m_ownershipStrength;


    m_message = x.m_message;


    return *this;
}

ExampleMessage& ExampleMessage::operator =(
        ExampleMessage&& x) noexcept
{

    m_index = x.m_index;


    m_ownershipStrength = x.m_ownershipStrength;


    m_message = std::move(x.m_message);


    return *this;
}

bool ExampleMessage::operator ==(
        const ExampleMessage& x) const
{

    return (m_index == x.m_index && m_ownershipStrength == x.m_ownershipStrength && m_message == x.m_message);
}

bool ExampleMessage::operator !=(
        const ExampleMessage& x) const
{
    return !(*this == x);
}

/*!
 * @brief This function sets a value in member index
 * @param _index New value for member index
 */
void ExampleMessage::index(
        uint32_t _index)
{
        m_index = _index;
}

/*!
 * @brief This function returns the value of member index
 * @return Value of member index
 */
uint32_t ExampleMessage::index() const
{
    return m_index;
}

/*!
 * @brief This function returns a reference to member index
 * @return Reference to member index
 */
uint32_t& ExampleMessage::index()
{
    return m_index;
}


/*!
 * @brief This function sets a value in member ownershipStrength
 * @param _ownershipStrength New value for member ownershipStrength
 */
void ExampleMessage::ownershipStrength(
        uint32_t _ownershipStrength)
{
        m_ownershipStrength = _ownershipStrength;
}

/*!
 * @brief This function returns the value of member ownershipStrength
 * @return Value of member ownershipStrength
 */
uint32_t ExampleMessage::ownershipStrength() const
{
    return m_ownershipStrength;
}

/*!
 * @brief This function returns a reference to member ownershipStrength
 * @return Reference to member ownershipStrength
 */
uint32_t& ExampleMessage::ownershipStrength()
{
    return m_ownershipStrength;
}


/*!
 * @brief This function copies the value in member message
 * @param _message New value to be copied in member message
 */
void ExampleMessage::message(
        const std::string& _message)
{
        m_message = _message;
}

/*!
 * @brief This function moves the value in member message
 * @param _message New value to be moved in member message
 */
void ExampleMessage::message(
        std::string&& _message)
{
        m_message = std::move(_message);
}

/*!
 * @brief This function returns a constant reference to member message
 * @return Constant reference to member message
 */
const std::string& ExampleMessage::message() const
{
    return m_message;
}

/*!
 * @brief This function returns a reference to member message
 * @return Reference to member message
 */
std::string& ExampleMessage::message()
{
    return m_message;
}




#include "OwnershipStrengthCdrAux.ipp"
