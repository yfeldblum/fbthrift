/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/basic-structured-annotations/gen-cpp2/module_metadata.h"

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
  enum_metadata.structured_annotations()->push_back(*cvStruct("module.structured_annotation_inline", {{"count", cvInteger(4)}}).cv_struct_ref());
}

const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::structured_annotation_inline>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.structured_annotation_inline", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_structured_annotation_inline = res.first->second;
  module_structured_annotation_inline.name() = "module.structured_annotation_inline";
  module_structured_annotation_inline.is_union() = false;
  static const EncodedThriftField
  module_structured_annotation_inline_fields[] = {
    {1, "count", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "name", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_structured_annotation_inline_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_structured_annotation_inline.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::structured_annotation_with_default>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.structured_annotation_with_default", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_structured_annotation_with_default = res.first->second;
  module_structured_annotation_with_default.name() = "module.structured_annotation_with_default";
  module_structured_annotation_with_default.is_union() = false;
  static const EncodedThriftField
  module_structured_annotation_with_default_fields[] = {
    {1, "name", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_structured_annotation_with_default_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_structured_annotation_with_default.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::structured_annotation_forward>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.structured_annotation_forward", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_structured_annotation_forward = res.first->second;
  module_structured_annotation_forward.name() = "module.structured_annotation_forward";
  module_structured_annotation_forward.is_union() = false;
  static const EncodedThriftField
  module_structured_annotation_forward_fields[] = {
    {1, "count", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_structured_annotation_forward_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_structured_annotation_forward.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::structured_annotation_recursive>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.structured_annotation_recursive", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_structured_annotation_recursive = res.first->second;
  module_structured_annotation_recursive.name() = "module.structured_annotation_recursive";
  module_structured_annotation_recursive.is_union() = false;
  static const EncodedThriftField
  module_structured_annotation_recursive_fields[] = {
    {1, "name", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "recurse", false, std::make_unique<Typedef>("module.structured_annotation_recursive", std::make_unique<Struct<::cpp2::structured_annotation_recursive>>("module.structured_annotation_recursive"), std::vector<ThriftConstStruct>{}), std::vector<ThriftConstStruct>{}},
    {3, "forward", false, std::make_unique<Typedef>("module.structured_annotation_forward", std::make_unique<Struct<::cpp2::structured_annotation_forward>>("module.structured_annotation_forward"), std::vector<ThriftConstStruct>{}), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_structured_annotation_recursive_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_structured_annotation_recursive.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::structured_annotation_nested>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.structured_annotation_nested", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_structured_annotation_nested = res.first->second;
  module_structured_annotation_nested.name() = "module.structured_annotation_nested";
  module_structured_annotation_nested.is_union() = false;
  static const EncodedThriftField
  module_structured_annotation_nested_fields[] = {
    {1, "name", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "nest", false, std::make_unique<Struct<::cpp2::structured_annotation_with_default>>("module.structured_annotation_with_default"), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_structured_annotation_nested_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_structured_annotation_nested.fields()->push_back(std::move(field));
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
    {1, "annotated_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{*cvStruct("module.structured_annotation_inline", {{"count", cvInteger(1)}, {"name", cvString(R"(counter)")}}).cv_struct_ref(), }},
    {2, "annotated_type", false, std::make_unique<Typedef>("module.annotated_inline_string", std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{*cvStruct("module.structured_annotation_inline", {{"count", cvInteger(1)}}).cv_struct_ref(), *cvStruct("module.structured_annotation_with_default", {{"name", cvString(R"(abc)")}}).cv_struct_ref(), }), std::vector<ThriftConstStruct>{}},
    {3, "annotated_recursive", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{*cvStruct("module.structured_annotation_recursive", {{"name", cvString(R"(abc)")}, {"recurse", cvStruct("module.structured_annotation_recursive", {{"name", cvString(R"(cba)")}})}, {"forward", cvStruct("module.structured_annotation_forward", {{"count", cvInteger(3)}})}}).cv_struct_ref(), }},
    {4, "annotated_nested", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{*cvStruct("module.structured_annotation_nested", {{"name", cvString(R"(nesty)")}}).cv_struct_ref(), }},
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
  module_MyStruct.structured_annotations()->push_back(*cvStruct("module.structured_annotation_inline", {{"count", cvInteger(2)}}).cv_struct_ref());
  module_MyStruct.structured_annotations()->push_back(*cvStruct("module.structured_annotation_with_default", {}).cv_struct_ref());
  module_MyStruct.structured_annotations()->push_back(*cvStruct("module.structured_annotation_nested", {{"name", cvString(R"(nesty2)")}, {"nest", cvStruct("module.structured_annotation_with_default", {{"name", cvString(R"(dcdbdcdadcdbdcd)")}})}}).cv_struct_ref());
  module_MyStruct.structured_annotations()->push_back(*cvStruct("included.structured_annotation_included", {{"name", cvString(R"(aba)")}}).cv_struct_ref());
  module_MyStruct.structured_annotations()->push_back(*cvStruct("namespaced.structured_annotation_with_namespace", {{"name", cvString(R"(bac)")}}).cv_struct_ref());
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::MyException>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.MyException", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyException = res.first->second;
  module_MyException.name() = "module.MyException";
  module_MyException.is_union() = false;
  static const EncodedThriftField
  module_MyException_fields[] = {
    {1, "context", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{*cvStruct("module.structured_annotation_with_default", {}).cv_struct_ref(), }},
  };
  for (const auto& f : module_MyException_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_MyException.fields()->push_back(std::move(field));
  }
  module_MyException.structured_annotations()->push_back(*cvStruct("module.structured_annotation_nested", {{"name", cvString(R"(nesty)")}}).cv_struct_ref());
  return res.first->second;
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
    {1, "first", false, std::make_unique<Typedef>("module.annotated_inline_string", std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{*cvStruct("module.structured_annotation_inline", {{"count", cvInteger(1)}}).cv_struct_ref(), *cvStruct("module.structured_annotation_with_default", {{"name", cvString(R"(abc)")}}).cv_struct_ref(), }), std::vector<ThriftConstStruct>{*cvStruct("module.structured_annotation_with_default", {}).cv_struct_ref(), }},
    {2, "second", false, std::make_unique<Typedef>("module.annotated_inline_i64", std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{*cvStruct("module.structured_annotation_inline", {{"count", cvInteger(2)}}).cv_struct_ref(), }), std::vector<ThriftConstStruct>{*cvStruct("module.structured_annotation_with_default", {{"name", cvString(R"(aba)")}}).cv_struct_ref(), }},
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
  module_MyUnion.structured_annotations()->push_back(*cvStruct("module.structured_annotation_nested", {{"name", cvString(R"(nesty)")}, {"nest", cvStruct("module.structured_annotation_with_default", {})}}).cv_struct_ref());
  return res.first->second;
}

void ExceptionMetadata<::cpp2::MyException>::gen(ThriftMetadata& metadata) {
  auto res = metadata.exceptions()->emplace("module.MyException", ::apache::thrift::metadata::ThriftException{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftException& module_MyException = res.first->second;
  module_MyException.name() = "module.MyException";
  static const EncodedThriftField
  module_MyException_fields[] = {
    {1, "context", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{*cvStruct("module.structured_annotation_with_default", {}).cv_struct_ref(), }},
  };
  for (const auto& f : module_MyException_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    module_MyException.fields()->push_back(std::move(field));
  }
  module_MyException.structured_annotations()->push_back(*cvStruct("module.structured_annotation_nested", {{"name", cvString(R"(nesty)")}}).cv_struct_ref());
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_first(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name() = "first";
  auto func_ret_type = std::make_unique<Typedef>("module.annotated_inline_string", std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{*cvStruct("module.structured_annotation_inline", {{"count", cvInteger(1)}}).cv_struct_ref(), *cvStruct("module.structured_annotation_with_default", {{"name", cvString(R"(abc)")}}).cv_struct_ref(), });
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  func.is_oneway() = false;
  func.structured_annotations()->push_back(*cvStruct("module.structured_annotation_with_default", {}).cv_struct_ref());
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_second(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name() = "second";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_second_count_1;
  module_MyService_second_count_1.id() = 1;
  module_MyService_second_count_1.name() = "count";
  module_MyService_second_count_1.is_optional() = false;
  module_MyService_second_count_1.structured_annotations() = {
      *cvStruct("module.structured_annotation_inline", {{"count", cvInteger(4)}}).cv_struct_ref(),
  };
  auto module_MyService_second_count_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_second_count_1_type->writeAndGenType(*module_MyService_second_count_1.type(), metadata);
  func.arguments()->push_back(std::move(module_MyService_second_count_1));
  func.is_oneway() = false;
  func.structured_annotations()->push_back(*cvStruct("module.structured_annotation_inline", {{"count", cvInteger(2)}}).cv_struct_ref());
  service.functions()->push_back(std::move(func));
}

void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen(::apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  const ::apache::thrift::metadata::ThriftServiceContextRef* self = genRecurse(*response.metadata(), *response.services());
  DCHECK(self != nullptr);
  // TODO(praihan): Remove ThriftServiceContext from response. But in the meantime, we need to fill the field with the result of looking up in ThriftMetadata.
  ::apache::thrift::metadata::ThriftServiceContext context;
  context.module() = *self->module();
  context.service_info() = response.metadata()->services()->at(*self->service_name());
  response.context() = std::move(context);
}

const ThriftServiceContextRef* ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::genRecurse(ThriftMetadata& metadata, std::vector<ThriftServiceContextRef>& services) {
  (void) metadata;
  ::apache::thrift::metadata::ThriftService module_MyService;
  module_MyService.name() = "module.MyService";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_first,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_second,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_MyService);
  }
  // We need to keep the index around because a reference or iterator could be invalidated.
  auto selfIndex = services.size();
  services.emplace_back();
  module_MyService.structured_annotations()->push_back(*cvStruct("module.structured_annotation_inline", {{"count", cvInteger(3)}}).cv_struct_ref());
  ThriftServiceContextRef& context = services[selfIndex];
  metadata.services()->emplace("module.MyService", std::move(module_MyService));
  context.service_name() = "module.MyService";
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.name() = "module";
  context.module() = std::move(module);
  return &context;
}
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
