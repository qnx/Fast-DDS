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
 * @file TestRegression3361TypeObjectSupport.cxx
 * Source file containing the implementation to register the TypeObject representation of the described types in the IDL file
 *
 * This file was generated by the tool fastddsgen.
 */

#include "TestRegression3361TypeObjectSupport.hpp"

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

#include "TestRegression3361.hpp"

#include "TestIncludeRegression3361.hpp"

using namespace eprosima::fastdds::dds::xtypes;

void register_TestRegression3361_type_objects()
{
    static std::once_flag once_flag;
    std::call_once(once_flag, []()
            {
                register_TestRegression3361_type_identifier();

            });
}

void register_TestRegression3361_type_identifier()
{
    {
        StructTypeFlag struct_flags_TestRegression3361 = TypeObjectUtils::build_struct_type_flag(eprosima::fastdds::dds::xtypes::ExtensibilityKind::NOT_APPLIED,
                false, false);
        ReturnCode_t return_code_TestRegression3361;
        TypeIdentifierPair type_ids_TestRegression3361;
        QualifiedTypeName type_name_TestRegression3361 = "TestRegression3361";
        eprosima::fastcdr::optional<AppliedBuiltinTypeAnnotations> type_ann_builtin_TestRegression3361;
        eprosima::fastcdr::optional<AppliedAnnotationSeq> ann_custom_TestRegression3361;
        CompleteTypeDetail detail_TestRegression3361 = TypeObjectUtils::build_complete_type_detail(type_ann_builtin_TestRegression3361, ann_custom_TestRegression3361, type_name_TestRegression3361.to_string());
        CompleteStructHeader header_TestRegression3361;
        header_TestRegression3361 = TypeObjectUtils::build_complete_struct_header(TypeIdentifier(), detail_TestRegression3361);
        CompleteStructMemberSeq member_seq_TestRegression3361;
        {
            return_code_TestRegression3361 =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "TestModule::MACHINEID", type_ids_TestRegression3361);

            if (return_code_TestRegression3361 != eprosima::fastdds::dds::RETCODE_OK)
            {
                AliasTypeFlag alias_flags_MACHINEID = 0;
                QualifiedTypeName type_name_MACHINEID = "TestModule::MACHINEID";
                eprosima::fastcdr::optional<AppliedBuiltinTypeAnnotations> type_ann_builtin_MACHINEID;
                eprosima::fastcdr::optional<AppliedAnnotationSeq> ann_custom_MACHINEID;
                CompleteTypeDetail detail_MACHINEID = TypeObjectUtils::build_complete_type_detail(type_ann_builtin_MACHINEID, ann_custom_MACHINEID, type_name_MACHINEID.to_string());
                CompleteAliasHeader header_MACHINEID = TypeObjectUtils::build_complete_alias_header(detail_MACHINEID);
                AliasMemberFlag related_flags_MACHINEID = 0;
                return_code_TestRegression3361 =
                    eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                    "anonymous_string_unbounded", type_ids_TestRegression3361);

                if (return_code_TestRegression3361 != eprosima::fastdds::dds::RETCODE_OK)
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
                    return_code_TestRegression3361 =
                        eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                        "anonymous_string_unbounded", type_ids_TestRegression3361);
                    if (return_code_TestRegression3361 != eprosima::fastdds::dds::RETCODE_OK)
                    {
                        EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                                    "anonymous_string_unbounded: Given String TypeIdentifier unknown to TypeObjectRegistry.");
                        return;
                    }
                }
                CommonAliasBody common_MACHINEID;
                if (EK_COMPLETE == type_ids_TestRegression3361.type_identifier1()._d() || TK_NONE == type_ids_TestRegression3361.type_identifier2()._d() ||
                        (TI_PLAIN_SEQUENCE_SMALL == type_ids_TestRegression3361.type_identifier1()._d() &&
                        EK_COMPLETE == type_ids_TestRegression3361.type_identifier1().seq_sdefn().header().equiv_kind()) ||
                        (TI_PLAIN_SEQUENCE_LARGE == type_ids_TestRegression3361.type_identifier1()._d() &&
                        EK_COMPLETE == type_ids_TestRegression3361.type_identifier1().seq_ldefn().header().equiv_kind()) ||
                        (TI_PLAIN_ARRAY_SMALL == type_ids_TestRegression3361.type_identifier1()._d() &&
                        EK_COMPLETE == type_ids_TestRegression3361.type_identifier1().array_sdefn().header().equiv_kind()) ||
                        (TI_PLAIN_ARRAY_LARGE == type_ids_TestRegression3361.type_identifier1()._d() &&
                        EK_COMPLETE == type_ids_TestRegression3361.type_identifier1().array_ldefn().header().equiv_kind()) ||
                        (TI_PLAIN_MAP_SMALL == type_ids_TestRegression3361.type_identifier1()._d() &&
                        (EK_COMPLETE == type_ids_TestRegression3361.type_identifier1().map_sdefn().header().equiv_kind() ||
                        EK_COMPLETE == type_ids_TestRegression3361.type_identifier1().map_sdefn().key_identifier()->_d())) ||
                        (TI_PLAIN_MAP_LARGE == type_ids_TestRegression3361.type_identifier1()._d() &&
                        (EK_COMPLETE == type_ids_TestRegression3361.type_identifier1().map_ldefn().header().equiv_kind() ||
                        EK_COMPLETE == type_ids_TestRegression3361.type_identifier1().map_ldefn().key_identifier()->_d())))
                {
                    common_MACHINEID = TypeObjectUtils::build_common_alias_body(related_flags_MACHINEID, type_ids_TestRegression3361.type_identifier1());
                }
                else if (EK_COMPLETE == type_ids_TestRegression3361.type_identifier2()._d() ||
                        (TI_PLAIN_SEQUENCE_SMALL == type_ids_TestRegression3361.type_identifier2()._d() &&
                        EK_COMPLETE == type_ids_TestRegression3361.type_identifier2().seq_sdefn().header().equiv_kind()) ||
                        (TI_PLAIN_SEQUENCE_LARGE == type_ids_TestRegression3361.type_identifier2()._d() &&
                        EK_COMPLETE == type_ids_TestRegression3361.type_identifier2().seq_ldefn().header().equiv_kind()) ||
                        (TI_PLAIN_ARRAY_SMALL == type_ids_TestRegression3361.type_identifier2()._d() &&
                        EK_COMPLETE == type_ids_TestRegression3361.type_identifier2().array_sdefn().header().equiv_kind()) ||
                        (TI_PLAIN_ARRAY_LARGE == type_ids_TestRegression3361.type_identifier2()._d() &&
                        EK_COMPLETE == type_ids_TestRegression3361.type_identifier2().array_ldefn().header().equiv_kind()) ||
                        (TI_PLAIN_MAP_SMALL == type_ids_TestRegression3361.type_identifier2()._d() &&
                        (EK_COMPLETE == type_ids_TestRegression3361.type_identifier2().map_sdefn().header().equiv_kind() ||
                        EK_COMPLETE == type_ids_TestRegression3361.type_identifier2().map_sdefn().key_identifier()->_d())) ||
                        (TI_PLAIN_MAP_LARGE == type_ids_TestRegression3361.type_identifier2()._d() &&
                        (EK_COMPLETE == type_ids_TestRegression3361.type_identifier2().map_ldefn().header().equiv_kind() ||
                        EK_COMPLETE == type_ids_TestRegression3361.type_identifier2().map_ldefn().key_identifier()->_d())))
                {
                    common_MACHINEID = TypeObjectUtils::build_common_alias_body(related_flags_MACHINEID, type_ids_TestRegression3361.type_identifier2());
                }
                else
                {
                    EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                            "TestModule::MACHINEID related TypeIdentifier inconsistent.");
                    return;
                }
                eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_MACHINEID;
                ann_custom_MACHINEID.reset();
                CompleteAliasBody body_MACHINEID = TypeObjectUtils::build_complete_alias_body(common_MACHINEID, member_ann_builtin_MACHINEID, ann_custom_MACHINEID);
                CompleteAliasType alias_type_MACHINEID = TypeObjectUtils::build_complete_alias_type(alias_flags_MACHINEID, header_MACHINEID, body_MACHINEID);
                if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                        TypeObjectUtils::build_and_register_alias_type_object(alias_type_MACHINEID, type_name_MACHINEID.to_string()))
                {
                    EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "TestModule::MACHINEID already registered in TypeObjectRegistry for a different type.");
                }
                return_code_TestRegression3361 =
                    eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                    "TestModule::MACHINEID", type_ids_TestRegression3361);
                if (return_code_TestRegression3361 != eprosima::fastdds::dds::RETCODE_OK)
                {
                    EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                                "TestModule::MACHINEID: Given Alias TypeIdentifier unknown to TypeObjectRegistry.");
                    return;
                }
            }
            StructMemberFlag member_flags_uuid = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructKind::NOT_APPLIED,
                    false, false, false, false);
            CommonStructMember common_uuid;
            MemberId member_id_uuid = 0x00000000;
            if (EK_COMPLETE == type_ids_TestRegression3361.type_identifier1()._d() || TK_NONE == type_ids_TestRegression3361.type_identifier2()._d() ||
                    (TI_PLAIN_SEQUENCE_SMALL == type_ids_TestRegression3361.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_TestRegression3361.type_identifier1().seq_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_SEQUENCE_LARGE == type_ids_TestRegression3361.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_TestRegression3361.type_identifier1().seq_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_SMALL == type_ids_TestRegression3361.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_TestRegression3361.type_identifier1().array_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_LARGE == type_ids_TestRegression3361.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_TestRegression3361.type_identifier1().array_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_MAP_SMALL == type_ids_TestRegression3361.type_identifier1()._d() &&
                    (EK_COMPLETE == type_ids_TestRegression3361.type_identifier1().map_sdefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_TestRegression3361.type_identifier1().map_sdefn().key_identifier()->_d())) ||
                    (TI_PLAIN_MAP_LARGE == type_ids_TestRegression3361.type_identifier1()._d() &&
                    (EK_COMPLETE == type_ids_TestRegression3361.type_identifier1().map_ldefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_TestRegression3361.type_identifier1().map_ldefn().key_identifier()->_d())))
            {
                common_uuid = TypeObjectUtils::build_common_struct_member(member_id_uuid, member_flags_uuid, type_ids_TestRegression3361.type_identifier1());
            }
            else if (EK_COMPLETE == type_ids_TestRegression3361.type_identifier2()._d() ||
                    (TI_PLAIN_SEQUENCE_SMALL == type_ids_TestRegression3361.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_TestRegression3361.type_identifier2().seq_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_SEQUENCE_LARGE == type_ids_TestRegression3361.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_TestRegression3361.type_identifier2().seq_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_SMALL == type_ids_TestRegression3361.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_TestRegression3361.type_identifier2().array_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_LARGE == type_ids_TestRegression3361.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_TestRegression3361.type_identifier2().array_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_MAP_SMALL == type_ids_TestRegression3361.type_identifier2()._d() &&
                    (EK_COMPLETE == type_ids_TestRegression3361.type_identifier2().map_sdefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_TestRegression3361.type_identifier2().map_sdefn().key_identifier()->_d())) ||
                    (TI_PLAIN_MAP_LARGE == type_ids_TestRegression3361.type_identifier2()._d() &&
                    (EK_COMPLETE == type_ids_TestRegression3361.type_identifier2().map_ldefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_TestRegression3361.type_identifier2().map_ldefn().key_identifier()->_d())))
            {
                common_uuid = TypeObjectUtils::build_common_struct_member(member_id_uuid, member_flags_uuid, type_ids_TestRegression3361.type_identifier2());
            }
            else
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "Structure uuid member TypeIdentifier inconsistent.");
                return;
            }
            MemberName name_uuid = "uuid";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_uuid;
            ann_custom_TestRegression3361.reset();
            CompleteMemberDetail detail_uuid = TypeObjectUtils::build_complete_member_detail(name_uuid, member_ann_builtin_uuid, ann_custom_TestRegression3361);
            CompleteStructMember member_uuid = TypeObjectUtils::build_complete_struct_member(common_uuid, detail_uuid);
            TypeObjectUtils::add_complete_struct_member(member_seq_TestRegression3361, member_uuid);
        }
        CompleteStructType struct_type_TestRegression3361 = TypeObjectUtils::build_complete_struct_type(struct_flags_TestRegression3361, header_TestRegression3361, member_seq_TestRegression3361);
        if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                TypeObjectUtils::build_and_register_struct_type_object(struct_type_TestRegression3361, type_name_TestRegression3361.to_string()))
        {
            EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                    "TestRegression3361 already registered in TypeObjectRegistry for a different type.");
        }
        return_code_TestRegression3361 =
            eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
            "TestRegression3361", type_ids_TestRegression3361);
        if (return_code_TestRegression3361 != eprosima::fastdds::dds::RETCODE_OK)
        {
            EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "TestRegression3361: Given Struct TypeIdentifier unknown to TypeObjectRegistry.");
            return;
        }
    }
}

