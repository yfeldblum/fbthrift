/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/visitation/for_each.h>

namespace apache {
namespace thrift {
namespace detail {

template <>
struct ForEachField<::cpp2::MyStructNestedAnnotation> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).name_ref()...);
  }
};

template <>
struct ForEachField<::cpp2::MyStruct> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).majorVer_ref()...);
    f(1, static_cast<T&&>(t).package_ref()...);
    f(2, static_cast<T&&>(t).annotation_with_quote_ref()...);
    f(3, static_cast<T&&>(t).class__ref()...);
    f(4, static_cast<T&&>(t).annotation_with_trailing_comma_ref()...);
    f(5, static_cast<T&&>(t).empty_annotations_ref()...);
    f(6, static_cast<T&&>(t).my_enum_ref()...);
    f(7, static_cast<T&&>(t).cpp_type_annotation_ref()...);
  }
};

template <>
struct ForEachField<::cpp2::SecretStruct> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).id_ref()...);
    f(1, static_cast<T&&>(t).password_ref()...);
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
