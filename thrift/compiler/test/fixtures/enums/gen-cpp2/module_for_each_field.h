/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/enums/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/visitation/for_each.h>

namespace apache {
namespace thrift {
namespace detail {

template <>
struct ForEachField<::test::fixtures::enums::SomeStruct> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).reasonable_ref()...);
    f(1, static_cast<T&&>(t).fine_ref()...);
    f(2, static_cast<T&&>(t).questionable_ref()...);
    f(3, static_cast<T&&>(t).tags_ref()...);
  }
};

template <>
struct ForEachField<::test::fixtures::enums::MyStruct> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).me2_3_ref()...);
    f(1, static_cast<T&&>(t).me3_n3_ref()...);
    f(2, static_cast<T&&>(t).me1_t1_ref()...);
    f(3, static_cast<T&&>(t).me1_t2_ref()...);
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
