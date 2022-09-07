/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/visitation/visit_by_thrift_field_metadata.h>
#include "thrift/compiler/test/fixtures/encode/gen-cpp2/module_metadata.h"

namespace apache {
namespace thrift {
namespace detail {

template <>
struct VisitByFieldId<::facebook::thrift::test::Foo> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).field_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::Foo");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::Bar> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).list_field_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::Bar");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::OpEncodeStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).int_field_ref());
    case 2:
      return f(1, static_cast<T&&>(t).enum_field_ref());
    case 3:
      return f(2, static_cast<T&&>(t).foo_field_ref());
    case 4:
      return f(3, static_cast<T&&>(t).adapted_field_ref());
    case 5:
      return f(4, static_cast<T&&>(t).list_field_ref());
    case 6:
      return f(5, static_cast<T&&>(t).list_shared_ptr_field_ref());
    case 7:
      return f(6, static_cast<T&&>(t).list_cpp_type_field_ref());
    case 8:
      return f(7, static_cast<T&&>(t).set_field_ref());
    case 9:
      return f(8, static_cast<T&&>(t).map_field_ref());
    case 10:
      return f(9, static_cast<T&&>(t).nested_field_ref());
    case 11:
      return f(10, static_cast<T&&>(t).bar_field_ref());
    case 12:
      return f(11, static_cast<T&&>(t).adapted_list_field_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::OpEncodeStruct");
    }
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache