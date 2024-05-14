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
 * @file OwnershipStrengthTypeObjectSupport.cxx
 * Source file containing the implementation to register the TypeObject representation of the described types in the IDL file
 *
 * This file was generated by the tool fastddsgen.
 */

#include "OwnershipStrengthTypeObjectSupport.hpp"

#include <mutex>
#include <string>

#include <fastcdr/xcdr/external.hpp>
#include <fastcdr/xcdr/optional.hpp>
#include <fastdds/dds/domain/DomainParticipantFactory.hpp>
#include <fastdds/dds/log/Log.hpp>
#include <fastdds/dds/xtypes/common.hpp>
#include <fastdds/dds/xtypes/type_representation/ITypeObjectRegistry.hpp>
#include <fastdds/dds/xtypes/type_representation/TypeObject.hpp>
#include <fastdds/dds/xtypes/type_representation/TypeObjectUtils.hpp>

#include "OwnershipStrength.hpp"


using namespace eprosima::fastdds::dds::xtypes;

void register_OwnershipStrength_type_objects()
{
    static std::once_flag once_flag;
    std::call_once(once_flag, []()
            {
                register_ExampleMessage_type_identifier();

            });
}

void register_ExampleMessage_type_identifier()
{
    {
        StructTypeFlag struct_flags_ExampleMessage = TypeObjectUtils::build_struct_type_flag(eprosima::fastdds::dds::xtypes::ExtensibilityKind::NOT_APPLIED,
                false, false);
        ReturnCode_t return_code_ExampleMessage;
        TypeIdentifierPair type_ids_ExampleMessage;
        QualifiedTypeName type_name_ExampleMessage = "ExampleMessage";
        eprosima::fastcdr::optional<AppliedBuiltinTypeAnnotations> type_ann_builtin_ExampleMessage;
        eprosima::fastcdr::optional<AppliedAnnotationSeq> ann_custom_ExampleMessage;
        CompleteTypeDetail detail_ExampleMessage = TypeObjectUtils::build_complete_type_detail(type_ann_builtin_ExampleMessage, ann_custom_ExampleMessage, type_name_ExampleMessage.to_string());
        CompleteStructHeader header_ExampleMessage;
        header_ExampleMessage = TypeObjectUtils::build_complete_struct_header(TypeIdentifier(), detail_ExampleMessage);
        CompleteStructMemberSeq member_seq_ExampleMessage;
        {
            return_code_ExampleMessage =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "_uint32_t", type_ids_ExampleMessage);

            if (return_code_ExampleMessage != eprosima::fastdds::dds::RETCODE_OK)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "index Structure member TypeIdentifier unknown to TypeObjectRegistry.");
                return;
            }
            StructMemberFlag member_flags_index = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructKind::NOT_APPLIED,
                    false, false, false, false);
            CommonStructMember common_index;
            MemberId member_id_index = 0x00000000;
            if (EK_COMPLETE == type_ids_ExampleMessage.type_identifier1()._d() || TK_NONE == type_ids_ExampleMessage.type_identifier2()._d() ||
                    (TI_PLAIN_SEQUENCE_SMALL == type_ids_ExampleMessage.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier1().seq_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_SEQUENCE_LARGE == type_ids_ExampleMessage.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier1().seq_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_SMALL == type_ids_ExampleMessage.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier1().array_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_LARGE == type_ids_ExampleMessage.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier1().array_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_MAP_SMALL == type_ids_ExampleMessage.type_identifier1()._d() &&
                    (EK_COMPLETE == type_ids_ExampleMessage.type_identifier1().map_sdefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier1().map_sdefn().key_identifier()->_d())) ||
                    (TI_PLAIN_MAP_LARGE == type_ids_ExampleMessage.type_identifier1()._d() &&
                    (EK_COMPLETE == type_ids_ExampleMessage.type_identifier1().map_ldefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier1().map_ldefn().key_identifier()->_d())))
            {
                common_index = TypeObjectUtils::build_common_struct_member(member_id_index, member_flags_index, type_ids_ExampleMessage.type_identifier1());
            }
            else if (EK_COMPLETE == type_ids_ExampleMessage.type_identifier2()._d() ||
                    (TI_PLAIN_SEQUENCE_SMALL == type_ids_ExampleMessage.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier2().seq_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_SEQUENCE_LARGE == type_ids_ExampleMessage.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier2().seq_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_SMALL == type_ids_ExampleMessage.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier2().array_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_LARGE == type_ids_ExampleMessage.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier2().array_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_MAP_SMALL == type_ids_ExampleMessage.type_identifier2()._d() &&
                    (EK_COMPLETE == type_ids_ExampleMessage.type_identifier2().map_sdefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier2().map_sdefn().key_identifier()->_d())) ||
                    (TI_PLAIN_MAP_LARGE == type_ids_ExampleMessage.type_identifier2()._d() &&
                    (EK_COMPLETE == type_ids_ExampleMessage.type_identifier2().map_ldefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier2().map_ldefn().key_identifier()->_d())))
            {
                common_index = TypeObjectUtils::build_common_struct_member(member_id_index, member_flags_index, type_ids_ExampleMessage.type_identifier2());
            }
            else
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "Structure index member TypeIdentifier inconsistent.");
                return;
            }
            MemberName name_index = "index";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_index;
            ann_custom_ExampleMessage.reset();
            CompleteMemberDetail detail_index = TypeObjectUtils::build_complete_member_detail(name_index, member_ann_builtin_index, ann_custom_ExampleMessage);
            CompleteStructMember member_index = TypeObjectUtils::build_complete_struct_member(common_index, detail_index);
            TypeObjectUtils::add_complete_struct_member(member_seq_ExampleMessage, member_index);
        }
        {
            return_code_ExampleMessage =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "_uint32_t", type_ids_ExampleMessage);

            if (return_code_ExampleMessage != eprosima::fastdds::dds::RETCODE_OK)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "ownershipStrength Structure member TypeIdentifier unknown to TypeObjectRegistry.");
                return;
            }
            StructMemberFlag member_flags_ownershipStrength = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructKind::NOT_APPLIED,
                    false, false, false, false);
            CommonStructMember common_ownershipStrength;
            MemberId member_id_ownershipStrength = 0x00000001;
            if (EK_COMPLETE == type_ids_ExampleMessage.type_identifier1()._d() || TK_NONE == type_ids_ExampleMessage.type_identifier2()._d() ||
                    (TI_PLAIN_SEQUENCE_SMALL == type_ids_ExampleMessage.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier1().seq_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_SEQUENCE_LARGE == type_ids_ExampleMessage.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier1().seq_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_SMALL == type_ids_ExampleMessage.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier1().array_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_LARGE == type_ids_ExampleMessage.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier1().array_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_MAP_SMALL == type_ids_ExampleMessage.type_identifier1()._d() &&
                    (EK_COMPLETE == type_ids_ExampleMessage.type_identifier1().map_sdefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier1().map_sdefn().key_identifier()->_d())) ||
                    (TI_PLAIN_MAP_LARGE == type_ids_ExampleMessage.type_identifier1()._d() &&
                    (EK_COMPLETE == type_ids_ExampleMessage.type_identifier1().map_ldefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier1().map_ldefn().key_identifier()->_d())))
            {
                common_ownershipStrength = TypeObjectUtils::build_common_struct_member(member_id_ownershipStrength, member_flags_ownershipStrength, type_ids_ExampleMessage.type_identifier1());
            }
            else if (EK_COMPLETE == type_ids_ExampleMessage.type_identifier2()._d() ||
                    (TI_PLAIN_SEQUENCE_SMALL == type_ids_ExampleMessage.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier2().seq_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_SEQUENCE_LARGE == type_ids_ExampleMessage.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier2().seq_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_SMALL == type_ids_ExampleMessage.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier2().array_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_LARGE == type_ids_ExampleMessage.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier2().array_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_MAP_SMALL == type_ids_ExampleMessage.type_identifier2()._d() &&
                    (EK_COMPLETE == type_ids_ExampleMessage.type_identifier2().map_sdefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier2().map_sdefn().key_identifier()->_d())) ||
                    (TI_PLAIN_MAP_LARGE == type_ids_ExampleMessage.type_identifier2()._d() &&
                    (EK_COMPLETE == type_ids_ExampleMessage.type_identifier2().map_ldefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier2().map_ldefn().key_identifier()->_d())))
            {
                common_ownershipStrength = TypeObjectUtils::build_common_struct_member(member_id_ownershipStrength, member_flags_ownershipStrength, type_ids_ExampleMessage.type_identifier2());
            }
            else
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "Structure ownershipStrength member TypeIdentifier inconsistent.");
                return;
            }
            MemberName name_ownershipStrength = "ownershipStrength";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_ownershipStrength;
            ann_custom_ExampleMessage.reset();
            CompleteMemberDetail detail_ownershipStrength = TypeObjectUtils::build_complete_member_detail(name_ownershipStrength, member_ann_builtin_ownershipStrength, ann_custom_ExampleMessage);
            CompleteStructMember member_ownershipStrength = TypeObjectUtils::build_complete_struct_member(common_ownershipStrength, detail_ownershipStrength);
            TypeObjectUtils::add_complete_struct_member(member_seq_ExampleMessage, member_ownershipStrength);
        }
        {
            return_code_ExampleMessage =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "anonymous_string_unbounded", type_ids_ExampleMessage);

            if (return_code_ExampleMessage != eprosima::fastdds::dds::RETCODE_OK)
            {
                {
                    SBound bound = 0;
                    StringSTypeDefn string_sdefn = TypeObjectUtils::build_string_s_type_defn(bound);
                    if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                            TypeObjectUtils::build_and_register_s_string_type_identifier(string_sdefn,
                            "anonymous_string_unbounded"))
                    {
                        EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                            "anonymous_string_unbounded already registered in TypeObjectRegistry for a different type.");
                    }
                }
                return_code_ExampleMessage =
                    eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                    "anonymous_string_unbounded", type_ids_ExampleMessage);
                if (return_code_ExampleMessage != eprosima::fastdds::dds::RETCODE_OK)
                {
                    EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                                "anonymous_string_unbounded: Given String TypeIdentifier unknown to TypeObjectRegistry.");
                    return;
                }
            }
            StructMemberFlag member_flags_message = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructKind::NOT_APPLIED,
                    false, false, false, false);
            CommonStructMember common_message;
            MemberId member_id_message = 0x00000002;
            if (EK_COMPLETE == type_ids_ExampleMessage.type_identifier1()._d() || TK_NONE == type_ids_ExampleMessage.type_identifier2()._d() ||
                    (TI_PLAIN_SEQUENCE_SMALL == type_ids_ExampleMessage.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier1().seq_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_SEQUENCE_LARGE == type_ids_ExampleMessage.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier1().seq_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_SMALL == type_ids_ExampleMessage.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier1().array_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_LARGE == type_ids_ExampleMessage.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier1().array_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_MAP_SMALL == type_ids_ExampleMessage.type_identifier1()._d() &&
                    (EK_COMPLETE == type_ids_ExampleMessage.type_identifier1().map_sdefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier1().map_sdefn().key_identifier()->_d())) ||
                    (TI_PLAIN_MAP_LARGE == type_ids_ExampleMessage.type_identifier1()._d() &&
                    (EK_COMPLETE == type_ids_ExampleMessage.type_identifier1().map_ldefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier1().map_ldefn().key_identifier()->_d())))
            {
                common_message = TypeObjectUtils::build_common_struct_member(member_id_message, member_flags_message, type_ids_ExampleMessage.type_identifier1());
            }
            else if (EK_COMPLETE == type_ids_ExampleMessage.type_identifier2()._d() ||
                    (TI_PLAIN_SEQUENCE_SMALL == type_ids_ExampleMessage.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier2().seq_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_SEQUENCE_LARGE == type_ids_ExampleMessage.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier2().seq_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_SMALL == type_ids_ExampleMessage.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier2().array_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_LARGE == type_ids_ExampleMessage.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier2().array_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_MAP_SMALL == type_ids_ExampleMessage.type_identifier2()._d() &&
                    (EK_COMPLETE == type_ids_ExampleMessage.type_identifier2().map_sdefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier2().map_sdefn().key_identifier()->_d())) ||
                    (TI_PLAIN_MAP_LARGE == type_ids_ExampleMessage.type_identifier2()._d() &&
                    (EK_COMPLETE == type_ids_ExampleMessage.type_identifier2().map_ldefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_ExampleMessage.type_identifier2().map_ldefn().key_identifier()->_d())))
            {
                common_message = TypeObjectUtils::build_common_struct_member(member_id_message, member_flags_message, type_ids_ExampleMessage.type_identifier2());
            }
            else
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "Structure message member TypeIdentifier inconsistent.");
                return;
            }
            MemberName name_message = "message";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_message;
            ann_custom_ExampleMessage.reset();
            CompleteMemberDetail detail_message = TypeObjectUtils::build_complete_member_detail(name_message, member_ann_builtin_message, ann_custom_ExampleMessage);
            CompleteStructMember member_message = TypeObjectUtils::build_complete_struct_member(common_message, detail_message);
            TypeObjectUtils::add_complete_struct_member(member_seq_ExampleMessage, member_message);
        }
        CompleteStructType struct_type_ExampleMessage = TypeObjectUtils::build_complete_struct_type(struct_flags_ExampleMessage, header_ExampleMessage, member_seq_ExampleMessage);
        if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                TypeObjectUtils::build_and_register_struct_type_object(struct_type_ExampleMessage, type_name_ExampleMessage.to_string()))
        {
            EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                    "ExampleMessage already registered in TypeObjectRegistry for a different type.");
        }
        return_code_ExampleMessage =
            eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
            "ExampleMessage", type_ids_ExampleMessage);
        if (return_code_ExampleMessage != eprosima::fastdds::dds::RETCODE_OK)
        {
            EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "ExampleMessage: Given Struct TypeIdentifier unknown to TypeObjectRegistry.");
            return;
        }
    }
}

