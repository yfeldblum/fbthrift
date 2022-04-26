/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/refs/gen-cpp2/module_metadata.h"

// some of these functions can be so large that the compiler gives up optimizing
// them - and issues a warning which may be treated as an error!
//
// these functions are so rarely called that it is probably okay for them not to
// be optimized in practice
FOLLY_CLANG_DISABLE_WARNING("-Wignored-optimization-argument")

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;
using ThriftService = ::apache::thrift::metadata::ThriftService;
using ThriftServiceContext = ::apache::thrift::metadata::ThriftServiceContext;
using ThriftFunctionGenerator = void (*)(ThriftMetadata&, ThriftService&);

void EnumMetadata<::cpp2::MyEnum>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums()->emplace("module.MyEnum", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name() = "module.MyEnum";
  using EnumTraits = TEnumTraits<::cpp2::MyEnum>;
  for (std::size_t i = 0; i != EnumTraits::size; ++i) {
    enum_metadata.elements()->emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i].str());
  }
}
void EnumMetadata<::cpp2::TypedEnum>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums()->emplace("module.TypedEnum", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name() = "module.TypedEnum";
  using EnumTraits = TEnumTraits<::cpp2::TypedEnum>;
  for (std::size_t i = 0; i != EnumTraits::size; ++i) {
    enum_metadata.elements()->emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i].str());
  }
}

const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::MyUnion>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.MyUnion", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyUnion = res.first->second;
  module_MyUnion.name() = "module.MyUnion";
  module_MyUnion.is_union() = true;
  static const EncodedThriftField
  module_MyUnion_fields[] = {
    {1, "anInteger", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "aString", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_MyUnion_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_MyUnion.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::MyField>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.MyField", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyField = res.first->second;
  module_MyField.name() = "module.MyField";
  module_MyField.is_union() = false;
  static const EncodedThriftField
  module_MyField_fields[] = {
    {1, "opt_value", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "value", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "req_value", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{}},
    {4, "opt_enum_value", true, std::make_unique<Enum<::cpp2::MyEnum>>("module.MyEnum"), std::vector<ThriftConstStruct>{}},
    {5, "enum_value", false, std::make_unique<Enum<::cpp2::MyEnum>>("module.MyEnum"), std::vector<ThriftConstStruct>{}},
    {6, "req_enum_value", false, std::make_unique<Enum<::cpp2::MyEnum>>("module.MyEnum"), std::vector<ThriftConstStruct>{}},
    {7, "opt_str_value", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {8, "str_value", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {9, "req_str_value", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_MyField_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_MyField.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::MyStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.MyStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyStruct = res.first->second;
  module_MyStruct.name() = "module.MyStruct";
  module_MyStruct.is_union() = false;
  static const EncodedThriftField
  module_MyStruct_fields[] = {
    {1, "opt_ref", true, std::make_unique<Struct<::cpp2::MyField>>("module.MyField"), std::vector<ThriftConstStruct>{}},
    {2, "ref", false, std::make_unique<Struct<::cpp2::MyField>>("module.MyField"), std::vector<ThriftConstStruct>{}},
    {3, "req_ref", false, std::make_unique<Struct<::cpp2::MyField>>("module.MyField"), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_MyStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_MyStruct.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::StructWithUnion>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.StructWithUnion", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_StructWithUnion = res.first->second;
  module_StructWithUnion.name() = "module.StructWithUnion";
  module_StructWithUnion.is_union() = false;
  static const EncodedThriftField
  module_StructWithUnion_fields[] = {
    {1, "u", false, std::make_unique<Union<::cpp2::MyUnion>>("module.MyUnion"), std::vector<ThriftConstStruct>{}},
    {2, "aDouble", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_DOUBLE_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "f", false, std::make_unique<Struct<::cpp2::MyField>>("module.MyField"), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_StructWithUnion_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_StructWithUnion.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::RecursiveStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.RecursiveStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_RecursiveStruct = res.first->second;
  module_RecursiveStruct.name() = "module.RecursiveStruct";
  module_RecursiveStruct.is_union() = false;
  static const EncodedThriftField
  module_RecursiveStruct_fields[] = {
    {1, "mes", true, std::make_unique<List>(std::make_unique<Typedef>("module.RecursiveStruct", std::make_unique<Struct<::cpp2::RecursiveStruct>>("module.RecursiveStruct"), std::vector<ThriftConstStruct>{})), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_RecursiveStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_RecursiveStruct.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::StructWithContainers>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.StructWithContainers", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_StructWithContainers = res.first->second;
  module_StructWithContainers.name() = "module.StructWithContainers";
  module_StructWithContainers.is_union() = false;
  static const EncodedThriftField
  module_StructWithContainers_fields[] = {
    {1, "list_ref", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)), std::vector<ThriftConstStruct>{}},
    {2, "set_ref", false, std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)), std::vector<ThriftConstStruct>{}},
    {3, "map_ref", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)), std::vector<ThriftConstStruct>{}},
    {4, "list_ref_unique", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)), std::vector<ThriftConstStruct>{}},
    {5, "set_ref_shared", false, std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)), std::vector<ThriftConstStruct>{}},
    {6, "list_ref_shared_const", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_StructWithContainers_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_StructWithContainers.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::StructWithSharedConst>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.StructWithSharedConst", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_StructWithSharedConst = res.first->second;
  module_StructWithSharedConst.name() = "module.StructWithSharedConst";
  module_StructWithSharedConst.is_union() = false;
  static const EncodedThriftField
  module_StructWithSharedConst_fields[] = {
    {1, "opt_shared_const", true, std::make_unique<Struct<::cpp2::MyField>>("module.MyField"), std::vector<ThriftConstStruct>{}},
    {2, "shared_const", false, std::make_unique<Struct<::cpp2::MyField>>("module.MyField"), std::vector<ThriftConstStruct>{}},
    {3, "req_shared_const", false, std::make_unique<Struct<::cpp2::MyField>>("module.MyField"), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_StructWithSharedConst_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_StructWithSharedConst.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::Empty>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.Empty", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_Empty = res.first->second;
  module_Empty.name() = "module.Empty";
  module_Empty.is_union() = false;
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::StructWithRef>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.StructWithRef", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_StructWithRef = res.first->second;
  module_StructWithRef.name() = "module.StructWithRef";
  module_StructWithRef.is_union() = false;
  static const EncodedThriftField
  module_StructWithRef_fields[] = {
    {1, "def_field", false, std::make_unique<Struct<::cpp2::Empty>>("module.Empty"), std::vector<ThriftConstStruct>{}},
    {2, "opt_field", true, std::make_unique<Struct<::cpp2::Empty>>("module.Empty"), std::vector<ThriftConstStruct>{}},
    {3, "req_field", false, std::make_unique<Struct<::cpp2::Empty>>("module.Empty"), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_StructWithRef_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_StructWithRef.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::StructWithBox>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.StructWithBox", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_StructWithBox = res.first->second;
  module_StructWithBox.name() = "module.StructWithBox";
  module_StructWithBox.is_union() = false;
  static const EncodedThriftField
  module_StructWithBox_fields[] = {
    {1, "a", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "b", true, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE)), std::vector<ThriftConstStruct>{}},
    {3, "c", true, std::make_unique<Struct<::cpp2::StructWithRef>>("module.StructWithRef"), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_StructWithBox_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_StructWithBox.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::StructWithRefTypeUnique>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.StructWithRefTypeUnique", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_StructWithRefTypeUnique = res.first->second;
  module_StructWithRefTypeUnique.name() = "module.StructWithRefTypeUnique";
  module_StructWithRefTypeUnique.is_union() = false;
  static const EncodedThriftField
  module_StructWithRefTypeUnique_fields[] = {
    {1, "def_field", false, std::make_unique<Struct<::cpp2::Empty>>("module.Empty"), std::vector<ThriftConstStruct>{}},
    {2, "opt_field", true, std::make_unique<Struct<::cpp2::Empty>>("module.Empty"), std::vector<ThriftConstStruct>{}},
    {3, "req_field", false, std::make_unique<Struct<::cpp2::Empty>>("module.Empty"), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_StructWithRefTypeUnique_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_StructWithRefTypeUnique.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::StructWithRefTypeShared>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.StructWithRefTypeShared", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_StructWithRefTypeShared = res.first->second;
  module_StructWithRefTypeShared.name() = "module.StructWithRefTypeShared";
  module_StructWithRefTypeShared.is_union() = false;
  static const EncodedThriftField
  module_StructWithRefTypeShared_fields[] = {
    {1, "def_field", false, std::make_unique<Struct<::cpp2::Empty>>("module.Empty"), std::vector<ThriftConstStruct>{}},
    {2, "opt_field", true, std::make_unique<Struct<::cpp2::Empty>>("module.Empty"), std::vector<ThriftConstStruct>{}},
    {3, "req_field", false, std::make_unique<Struct<::cpp2::Empty>>("module.Empty"), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_StructWithRefTypeShared_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_StructWithRefTypeShared.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::StructWithRefTypeSharedConst>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.StructWithRefTypeSharedConst", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_StructWithRefTypeSharedConst = res.first->second;
  module_StructWithRefTypeSharedConst.name() = "module.StructWithRefTypeSharedConst";
  module_StructWithRefTypeSharedConst.is_union() = false;
  static const EncodedThriftField
  module_StructWithRefTypeSharedConst_fields[] = {
    {1, "def_field", false, std::make_unique<Struct<::cpp2::Empty>>("module.Empty"), std::vector<ThriftConstStruct>{}},
    {2, "opt_field", true, std::make_unique<Struct<::cpp2::Empty>>("module.Empty"), std::vector<ThriftConstStruct>{}},
    {3, "req_field", false, std::make_unique<Struct<::cpp2::Empty>>("module.Empty"), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_StructWithRefTypeSharedConst_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_StructWithRefTypeSharedConst.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::StructWithRefAndAnnotCppNoexceptMoveCtor>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.StructWithRefAndAnnotCppNoexceptMoveCtor", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_StructWithRefAndAnnotCppNoexceptMoveCtor = res.first->second;
  module_StructWithRefAndAnnotCppNoexceptMoveCtor.name() = "module.StructWithRefAndAnnotCppNoexceptMoveCtor";
  module_StructWithRefAndAnnotCppNoexceptMoveCtor.is_union() = false;
  static const EncodedThriftField
  module_StructWithRefAndAnnotCppNoexceptMoveCtor_fields[] = {
    {1, "def_field", false, std::make_unique<Struct<::cpp2::Empty>>("module.Empty"), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_StructWithRefAndAnnotCppNoexceptMoveCtor_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_StructWithRefAndAnnotCppNoexceptMoveCtor.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::StructWithString>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.StructWithString", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_StructWithString = res.first->second;
  module_StructWithString.name() = "module.StructWithString";
  module_StructWithString.is_union() = false;
  static const EncodedThriftField
  module_StructWithString_fields[] = {
    {1, "def_unique_string_ref", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "def_shared_string_ref", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "def_shared_string_const_ref", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {4, "unique_string_ref", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {5, "shared_string_ref", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_StructWithString_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_StructWithString.fields()->push_back(std::move(field));
  }
  return res.first->second;
}

} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
