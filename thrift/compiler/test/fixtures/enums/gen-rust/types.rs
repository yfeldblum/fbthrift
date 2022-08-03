// @generated by Thrift for src/module.thrift
// This file is probably not the place you want to edit!

//! Thrift type definitions for `module`.

#![allow(clippy::redundant_closure)]


#[derive(Clone, PartialEq)]
pub struct SomeStruct {
    pub reasonable: crate::types::Metasyntactic,
    pub fine: crate::types::Metasyntactic,
    pub questionable: crate::types::Metasyntactic,
    pub tags: ::std::collections::BTreeSet<::std::primitive::i32>,
    // This field forces `..Default::default()` when instantiating this
    // struct, to make code future-proof against new fields added later to
    // the definition in Thrift. If you don't want this, add the annotation
    // `(rust.exhaustive)` to the Thrift struct to eliminate this field.
    #[doc(hidden)]
    pub _dot_dot_Default_default: self::dot_dot::OtherFields,
}

#[derive(Clone, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct MyStruct {
    pub me2_3: crate::types::MyEnum2,
    pub me3_n3: crate::types::MyEnum3,
    pub me1_t1: crate::types::MyEnum1,
    pub me1_t2: crate::types::MyEnum1,
    // This field forces `..Default::default()` when instantiating this
    // struct, to make code future-proof against new fields added later to
    // the definition in Thrift. If you don't want this, add the annotation
    // `(rust.exhaustive)` to the Thrift struct to eliminate this field.
    #[doc(hidden)]
    pub _dot_dot_Default_default: self::dot_dot::OtherFields,
}

#[derive(Copy, Clone, Eq, PartialEq, Ord, PartialOrd, Hash)]
pub struct Metasyntactic(pub ::std::primitive::i32);

impl Metasyntactic {
    pub const FOO: Self = Metasyntactic(1i32);
    pub const BAR: Self = Metasyntactic(2i32);
    pub const BAZ: Self = Metasyntactic(3i32);
    pub const BAX: Self = Metasyntactic(4i32);
    pub const Unspecified: Self = Metasyntactic(0i32);
}

impl ::fbthrift::ThriftEnum for Metasyntactic {
    fn enumerate() -> &'static [(Metasyntactic, &'static str)] {
        &[
            (Metasyntactic::FOO, "FOO"),
            (Metasyntactic::BAR, "BAR"),
            (Metasyntactic::BAZ, "BAZ"),
            (Metasyntactic::BAX, "BAX"),
            (Metasyntactic::Unspecified, "Unspecified"),
        ]
    }

    fn variants() -> &'static [&'static str] {
        &[
            "FOO",
            "BAR",
            "BAZ",
            "BAX",
            "Unspecified",
        ]
    }

    fn variant_values() -> &'static [Metasyntactic] {
        &[
            Metasyntactic::FOO,
            Metasyntactic::BAR,
            Metasyntactic::BAZ,
            Metasyntactic::BAX,
            Metasyntactic::Unspecified,
        ]
    }
}

impl ::std::default::Default for Metasyntactic {
    fn default() -> Self {
        Metasyntactic(::fbthrift::__UNKNOWN_ID)
    }
}

impl<'a> ::std::convert::From<&'a Metasyntactic> for ::std::primitive::i32 {
    #[inline]
    fn from(x: &'a Metasyntactic) -> Self {
        x.0
    }
}

impl ::std::convert::From<Metasyntactic> for ::std::primitive::i32 {
    #[inline]
    fn from(x: Metasyntactic) -> Self {
        x.0
    }
}

impl ::std::convert::From<::std::primitive::i32> for Metasyntactic {
    #[inline]
    fn from(x: ::std::primitive::i32) -> Self {
        Self(x)
    }
}

impl ::std::fmt::Display for Metasyntactic {
    fn fmt(&self, fmt: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        static VARIANTS_BY_NUMBER: &[(&::std::primitive::str, ::std::primitive::i32)] = &[
            ("Unspecified", 0),
            ("FOO", 1),
            ("BAR", 2),
            ("BAZ", 3),
            ("BAX", 4),
        ];
        ::fbthrift::help::enum_display(VARIANTS_BY_NUMBER, fmt, self.0)
    }
}

impl ::std::fmt::Debug for Metasyntactic {
    fn fmt(&self, fmt: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        write!(fmt, "Metasyntactic::{}", self)
    }
}

impl ::std::str::FromStr for Metasyntactic {
    type Err = ::anyhow::Error;

    fn from_str(string: &::std::primitive::str) -> ::std::result::Result<Self, Self::Err> {
        static VARIANTS_BY_NAME: &[(&::std::primitive::str, ::std::primitive::i32)] = &[
            ("BAR", 2),
            ("BAX", 4),
            ("BAZ", 3),
            ("FOO", 1),
            ("Unspecified", 0),
        ];
        ::fbthrift::help::enum_from_str(VARIANTS_BY_NAME, string, "Metasyntactic").map(Metasyntactic)
    }
}

impl ::fbthrift::GetTType for Metasyntactic {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::I32;
}

impl<P> ::fbthrift::Serialize<P> for Metasyntactic
where
    P: ::fbthrift::ProtocolWriter,
{
    #[inline]
    fn write(&self, p: &mut P) {
        p.write_i32(self.into())
    }
}

impl<P> ::fbthrift::Deserialize<P> for Metasyntactic
where
    P: ::fbthrift::ProtocolReader,
{
    #[inline]
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        ::std::result::Result::Ok(Metasyntactic::from(p.read_i32()?))
    }
}

#[derive(Copy, Clone, Eq, PartialEq, Ord, PartialOrd, Hash)]
pub struct MyEnum1(pub ::std::primitive::i32);

impl MyEnum1 {
    pub const ME1_1: Self = MyEnum1(1i32);
    pub const ME1_2: Self = MyEnum1(2i32);
    pub const ME1_3: Self = MyEnum1(3i32);
    pub const ME1_5: Self = MyEnum1(5i32);
    pub const ME1_6: Self = MyEnum1(6i32);
    pub const ME1_0: Self = MyEnum1(0i32);
}

impl ::fbthrift::ThriftEnum for MyEnum1 {
    fn enumerate() -> &'static [(MyEnum1, &'static str)] {
        &[
            (MyEnum1::ME1_1, "ME1_1"),
            (MyEnum1::ME1_2, "ME1_2"),
            (MyEnum1::ME1_3, "ME1_3"),
            (MyEnum1::ME1_5, "ME1_5"),
            (MyEnum1::ME1_6, "ME1_6"),
            (MyEnum1::ME1_0, "ME1_0"),
        ]
    }

    fn variants() -> &'static [&'static str] {
        &[
            "ME1_1",
            "ME1_2",
            "ME1_3",
            "ME1_5",
            "ME1_6",
            "ME1_0",
        ]
    }

    fn variant_values() -> &'static [MyEnum1] {
        &[
            MyEnum1::ME1_1,
            MyEnum1::ME1_2,
            MyEnum1::ME1_3,
            MyEnum1::ME1_5,
            MyEnum1::ME1_6,
            MyEnum1::ME1_0,
        ]
    }
}

impl ::std::default::Default for MyEnum1 {
    fn default() -> Self {
        MyEnum1(::fbthrift::__UNKNOWN_ID)
    }
}

impl<'a> ::std::convert::From<&'a MyEnum1> for ::std::primitive::i32 {
    #[inline]
    fn from(x: &'a MyEnum1) -> Self {
        x.0
    }
}

impl ::std::convert::From<MyEnum1> for ::std::primitive::i32 {
    #[inline]
    fn from(x: MyEnum1) -> Self {
        x.0
    }
}

impl ::std::convert::From<::std::primitive::i32> for MyEnum1 {
    #[inline]
    fn from(x: ::std::primitive::i32) -> Self {
        Self(x)
    }
}

impl ::std::fmt::Display for MyEnum1 {
    fn fmt(&self, fmt: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        static VARIANTS_BY_NUMBER: &[(&::std::primitive::str, ::std::primitive::i32)] = &[
            ("ME1_0", 0),
            ("ME1_1", 1),
            ("ME1_2", 2),
            ("ME1_3", 3),
            ("ME1_5", 5),
            ("ME1_6", 6),
        ];
        ::fbthrift::help::enum_display(VARIANTS_BY_NUMBER, fmt, self.0)
    }
}

impl ::std::fmt::Debug for MyEnum1 {
    fn fmt(&self, fmt: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        write!(fmt, "MyEnum1::{}", self)
    }
}

impl ::std::str::FromStr for MyEnum1 {
    type Err = ::anyhow::Error;

    fn from_str(string: &::std::primitive::str) -> ::std::result::Result<Self, Self::Err> {
        static VARIANTS_BY_NAME: &[(&::std::primitive::str, ::std::primitive::i32)] = &[
            ("ME1_0", 0),
            ("ME1_1", 1),
            ("ME1_2", 2),
            ("ME1_3", 3),
            ("ME1_5", 5),
            ("ME1_6", 6),
        ];
        ::fbthrift::help::enum_from_str(VARIANTS_BY_NAME, string, "MyEnum1").map(MyEnum1)
    }
}

impl ::fbthrift::GetTType for MyEnum1 {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::I32;
}

impl<P> ::fbthrift::Serialize<P> for MyEnum1
where
    P: ::fbthrift::ProtocolWriter,
{
    #[inline]
    fn write(&self, p: &mut P) {
        p.write_i32(self.into())
    }
}

impl<P> ::fbthrift::Deserialize<P> for MyEnum1
where
    P: ::fbthrift::ProtocolReader,
{
    #[inline]
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        ::std::result::Result::Ok(MyEnum1::from(p.read_i32()?))
    }
}

#[derive(Copy, Clone, Eq, PartialEq, Ord, PartialOrd, Hash)]
pub struct MyEnum2(pub ::std::primitive::i32);

impl MyEnum2 {
    pub const ME2_0: Self = MyEnum2(0i32);
    pub const ME2_1: Self = MyEnum2(1i32);
    pub const ME2_2: Self = MyEnum2(2i32);
}

impl ::fbthrift::ThriftEnum for MyEnum2 {
    fn enumerate() -> &'static [(MyEnum2, &'static str)] {
        &[
            (MyEnum2::ME2_0, "ME2_0"),
            (MyEnum2::ME2_1, "ME2_1"),
            (MyEnum2::ME2_2, "ME2_2"),
        ]
    }

    fn variants() -> &'static [&'static str] {
        &[
            "ME2_0",
            "ME2_1",
            "ME2_2",
        ]
    }

    fn variant_values() -> &'static [MyEnum2] {
        &[
            MyEnum2::ME2_0,
            MyEnum2::ME2_1,
            MyEnum2::ME2_2,
        ]
    }
}

impl ::std::default::Default for MyEnum2 {
    fn default() -> Self {
        MyEnum2(::fbthrift::__UNKNOWN_ID)
    }
}

impl<'a> ::std::convert::From<&'a MyEnum2> for ::std::primitive::i32 {
    #[inline]
    fn from(x: &'a MyEnum2) -> Self {
        x.0
    }
}

impl ::std::convert::From<MyEnum2> for ::std::primitive::i32 {
    #[inline]
    fn from(x: MyEnum2) -> Self {
        x.0
    }
}

impl ::std::convert::From<::std::primitive::i32> for MyEnum2 {
    #[inline]
    fn from(x: ::std::primitive::i32) -> Self {
        Self(x)
    }
}

impl ::std::fmt::Display for MyEnum2 {
    fn fmt(&self, fmt: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        static VARIANTS_BY_NUMBER: &[(&::std::primitive::str, ::std::primitive::i32)] = &[
            ("ME2_0", 0),
            ("ME2_1", 1),
            ("ME2_2", 2),
        ];
        ::fbthrift::help::enum_display(VARIANTS_BY_NUMBER, fmt, self.0)
    }
}

impl ::std::fmt::Debug for MyEnum2 {
    fn fmt(&self, fmt: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        write!(fmt, "MyEnum2::{}", self)
    }
}

impl ::std::str::FromStr for MyEnum2 {
    type Err = ::anyhow::Error;

    fn from_str(string: &::std::primitive::str) -> ::std::result::Result<Self, Self::Err> {
        static VARIANTS_BY_NAME: &[(&::std::primitive::str, ::std::primitive::i32)] = &[
            ("ME2_0", 0),
            ("ME2_1", 1),
            ("ME2_2", 2),
        ];
        ::fbthrift::help::enum_from_str(VARIANTS_BY_NAME, string, "MyEnum2").map(MyEnum2)
    }
}

impl ::fbthrift::GetTType for MyEnum2 {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::I32;
}

impl<P> ::fbthrift::Serialize<P> for MyEnum2
where
    P: ::fbthrift::ProtocolWriter,
{
    #[inline]
    fn write(&self, p: &mut P) {
        p.write_i32(self.into())
    }
}

impl<P> ::fbthrift::Deserialize<P> for MyEnum2
where
    P: ::fbthrift::ProtocolReader,
{
    #[inline]
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        ::std::result::Result::Ok(MyEnum2::from(p.read_i32()?))
    }
}

#[derive(Copy, Clone, Eq, PartialEq, Ord, PartialOrd, Hash)]
pub struct MyEnum3(pub ::std::primitive::i32);

impl MyEnum3 {
    pub const ME3_0: Self = MyEnum3(0i32);
    pub const ME3_1: Self = MyEnum3(1i32);
    pub const ME3_N2: Self = MyEnum3(-2i32);
    pub const ME3_N1: Self = MyEnum3(-1i32);
    pub const ME3_9: Self = MyEnum3(9i32);
    pub const ME3_10: Self = MyEnum3(10i32);
}

impl ::fbthrift::ThriftEnum for MyEnum3 {
    fn enumerate() -> &'static [(MyEnum3, &'static str)] {
        &[
            (MyEnum3::ME3_0, "ME3_0"),
            (MyEnum3::ME3_1, "ME3_1"),
            (MyEnum3::ME3_N2, "ME3_N2"),
            (MyEnum3::ME3_N1, "ME3_N1"),
            (MyEnum3::ME3_9, "ME3_9"),
            (MyEnum3::ME3_10, "ME3_10"),
        ]
    }

    fn variants() -> &'static [&'static str] {
        &[
            "ME3_0",
            "ME3_1",
            "ME3_N2",
            "ME3_N1",
            "ME3_9",
            "ME3_10",
        ]
    }

    fn variant_values() -> &'static [MyEnum3] {
        &[
            MyEnum3::ME3_0,
            MyEnum3::ME3_1,
            MyEnum3::ME3_N2,
            MyEnum3::ME3_N1,
            MyEnum3::ME3_9,
            MyEnum3::ME3_10,
        ]
    }
}

impl ::std::default::Default for MyEnum3 {
    fn default() -> Self {
        MyEnum3(::fbthrift::__UNKNOWN_ID)
    }
}

impl<'a> ::std::convert::From<&'a MyEnum3> for ::std::primitive::i32 {
    #[inline]
    fn from(x: &'a MyEnum3) -> Self {
        x.0
    }
}

impl ::std::convert::From<MyEnum3> for ::std::primitive::i32 {
    #[inline]
    fn from(x: MyEnum3) -> Self {
        x.0
    }
}

impl ::std::convert::From<::std::primitive::i32> for MyEnum3 {
    #[inline]
    fn from(x: ::std::primitive::i32) -> Self {
        Self(x)
    }
}

impl ::std::fmt::Display for MyEnum3 {
    fn fmt(&self, fmt: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        static VARIANTS_BY_NUMBER: &[(&::std::primitive::str, ::std::primitive::i32)] = &[
            ("ME3_N2", -2),
            ("ME3_N1", -1),
            ("ME3_0", 0),
            ("ME3_1", 1),
            ("ME3_9", 9),
            ("ME3_10", 10),
        ];
        ::fbthrift::help::enum_display(VARIANTS_BY_NUMBER, fmt, self.0)
    }
}

impl ::std::fmt::Debug for MyEnum3 {
    fn fmt(&self, fmt: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        write!(fmt, "MyEnum3::{}", self)
    }
}

impl ::std::str::FromStr for MyEnum3 {
    type Err = ::anyhow::Error;

    fn from_str(string: &::std::primitive::str) -> ::std::result::Result<Self, Self::Err> {
        static VARIANTS_BY_NAME: &[(&::std::primitive::str, ::std::primitive::i32)] = &[
            ("ME3_0", 0),
            ("ME3_1", 1),
            ("ME3_10", 10),
            ("ME3_9", 9),
            ("ME3_N1", -1),
            ("ME3_N2", -2),
        ];
        ::fbthrift::help::enum_from_str(VARIANTS_BY_NAME, string, "MyEnum3").map(MyEnum3)
    }
}

impl ::fbthrift::GetTType for MyEnum3 {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::I32;
}

impl<P> ::fbthrift::Serialize<P> for MyEnum3
where
    P: ::fbthrift::ProtocolWriter,
{
    #[inline]
    fn write(&self, p: &mut P) {
        p.write_i32(self.into())
    }
}

impl<P> ::fbthrift::Deserialize<P> for MyEnum3
where
    P: ::fbthrift::ProtocolReader,
{
    #[inline]
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        ::std::result::Result::Ok(MyEnum3::from(p.read_i32()?))
    }
}

#[derive(Copy, Clone, Eq, PartialEq, Ord, PartialOrd, Hash)]
pub struct MyEnum4(pub ::std::primitive::i32);

impl MyEnum4 {
    pub const ME4_A: Self = MyEnum4(2147483645i32);
    pub const ME4_B: Self = MyEnum4(2147483646i32);
    pub const ME4_C: Self = MyEnum4(2147483647i32);
    pub const ME4_D: Self = MyEnum4(-2147483648i32);
    pub const Unspecified: Self = MyEnum4(0i32);
}

impl ::fbthrift::ThriftEnum for MyEnum4 {
    fn enumerate() -> &'static [(MyEnum4, &'static str)] {
        &[
            (MyEnum4::ME4_A, "ME4_A"),
            (MyEnum4::ME4_B, "ME4_B"),
            (MyEnum4::ME4_C, "ME4_C"),
            (MyEnum4::ME4_D, "ME4_D"),
            (MyEnum4::Unspecified, "Unspecified"),
        ]
    }

    fn variants() -> &'static [&'static str] {
        &[
            "ME4_A",
            "ME4_B",
            "ME4_C",
            "ME4_D",
            "Unspecified",
        ]
    }

    fn variant_values() -> &'static [MyEnum4] {
        &[
            MyEnum4::ME4_A,
            MyEnum4::ME4_B,
            MyEnum4::ME4_C,
            MyEnum4::ME4_D,
            MyEnum4::Unspecified,
        ]
    }
}

impl ::std::default::Default for MyEnum4 {
    fn default() -> Self {
        MyEnum4(::fbthrift::__UNKNOWN_ID)
    }
}

impl<'a> ::std::convert::From<&'a MyEnum4> for ::std::primitive::i32 {
    #[inline]
    fn from(x: &'a MyEnum4) -> Self {
        x.0
    }
}

impl ::std::convert::From<MyEnum4> for ::std::primitive::i32 {
    #[inline]
    fn from(x: MyEnum4) -> Self {
        x.0
    }
}

impl ::std::convert::From<::std::primitive::i32> for MyEnum4 {
    #[inline]
    fn from(x: ::std::primitive::i32) -> Self {
        Self(x)
    }
}

impl ::std::fmt::Display for MyEnum4 {
    fn fmt(&self, fmt: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        static VARIANTS_BY_NUMBER: &[(&::std::primitive::str, ::std::primitive::i32)] = &[
            ("ME4_D", -2147483648),
            ("Unspecified", 0),
            ("ME4_A", 2147483645),
            ("ME4_B", 2147483646),
            ("ME4_C", 2147483647),
        ];
        ::fbthrift::help::enum_display(VARIANTS_BY_NUMBER, fmt, self.0)
    }
}

impl ::std::fmt::Debug for MyEnum4 {
    fn fmt(&self, fmt: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        write!(fmt, "MyEnum4::{}", self)
    }
}

impl ::std::str::FromStr for MyEnum4 {
    type Err = ::anyhow::Error;

    fn from_str(string: &::std::primitive::str) -> ::std::result::Result<Self, Self::Err> {
        static VARIANTS_BY_NAME: &[(&::std::primitive::str, ::std::primitive::i32)] = &[
            ("ME4_A", 2147483645),
            ("ME4_B", 2147483646),
            ("ME4_C", 2147483647),
            ("ME4_D", -2147483648),
            ("Unspecified", 0),
        ];
        ::fbthrift::help::enum_from_str(VARIANTS_BY_NAME, string, "MyEnum4").map(MyEnum4)
    }
}

impl ::fbthrift::GetTType for MyEnum4 {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::I32;
}

impl<P> ::fbthrift::Serialize<P> for MyEnum4
where
    P: ::fbthrift::ProtocolWriter,
{
    #[inline]
    fn write(&self, p: &mut P) {
        p.write_i32(self.into())
    }
}

impl<P> ::fbthrift::Deserialize<P> for MyEnum4
where
    P: ::fbthrift::ProtocolReader,
{
    #[inline]
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        ::std::result::Result::Ok(MyEnum4::from(p.read_i32()?))
    }
}

#[allow(clippy::derivable_impls)]
impl ::std::default::Default for self::SomeStruct {
    fn default() -> Self {
        Self {
            reasonable: crate::types::Metasyntactic::FOO,
            fine: crate::types::Metasyntactic::BAR,
            questionable: crate::types::Metasyntactic(-1),
            tags: ::std::collections::BTreeSet::new(),
            _dot_dot_Default_default: self::dot_dot::OtherFields(()),
        }
    }
}

impl ::std::fmt::Debug for self::SomeStruct {
    fn fmt(&self, formatter: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        formatter
            .debug_struct("SomeStruct")
            .field("reasonable", &self.reasonable)
            .field("fine", &self.fine)
            .field("questionable", &self.questionable)
            .field("tags", &self.tags)
            .finish()
    }
}

unsafe impl ::std::marker::Send for self::SomeStruct {}
unsafe impl ::std::marker::Sync for self::SomeStruct {}

impl ::fbthrift::GetTType for self::SomeStruct {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
}

impl ::fbthrift::GetUri for self::SomeStruct {
    fn uri() -> &'static str {
        "test.dev/fixtures/enums/SomeStruct"
    }
}

impl<P> ::fbthrift::Serialize<P> for self::SomeStruct
where
    P: ::fbthrift::ProtocolWriter,
{
    fn write(&self, p: &mut P) {
        p.write_struct_begin("SomeStruct");
        p.write_field_begin("reasonable", ::fbthrift::TType::I32, 1);
        ::fbthrift::Serialize::write(&self.reasonable, p);
        p.write_field_end();
        p.write_field_begin("fine", ::fbthrift::TType::I32, 2);
        ::fbthrift::Serialize::write(&self.fine, p);
        p.write_field_end();
        p.write_field_begin("questionable", ::fbthrift::TType::I32, 3);
        ::fbthrift::Serialize::write(&self.questionable, p);
        p.write_field_end();
        p.write_field_begin("tags", ::fbthrift::TType::Set, 4);
        ::fbthrift::Serialize::write(&self.tags, p);
        p.write_field_end();
        p.write_field_stop();
        p.write_struct_end();
    }
}

impl<P> ::fbthrift::Deserialize<P> for self::SomeStruct
where
    P: ::fbthrift::ProtocolReader,
{
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        static FIELDS: &[::fbthrift::Field] = &[
            ::fbthrift::Field::new("fine", ::fbthrift::TType::I32, 2),
            ::fbthrift::Field::new("questionable", ::fbthrift::TType::I32, 3),
            ::fbthrift::Field::new("reasonable", ::fbthrift::TType::I32, 1),
            ::fbthrift::Field::new("tags", ::fbthrift::TType::Set, 4),
        ];
        let mut field_reasonable = ::std::option::Option::None;
        let mut field_fine = ::std::option::Option::None;
        let mut field_questionable = ::std::option::Option::None;
        let mut field_tags = ::std::option::Option::None;
        let _ = p.read_struct_begin(|_| ())?;
        loop {
            let (_, fty, fid) = p.read_field_begin(|_| (), FIELDS)?;
            match (fty, fid as ::std::primitive::i32) {
                (::fbthrift::TType::Stop, _) => break,
                (::fbthrift::TType::I32, 1) => field_reasonable = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (::fbthrift::TType::I32, 2) => field_fine = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (::fbthrift::TType::I32, 3) => field_questionable = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (::fbthrift::TType::Set, 4) => field_tags = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (fty, _) => p.skip(fty)?,
            }
            p.read_field_end()?;
        }
        p.read_struct_end()?;
        ::std::result::Result::Ok(Self {
            reasonable: field_reasonable.unwrap_or(crate::types::Metasyntactic::FOO),
            fine: field_fine.unwrap_or(crate::types::Metasyntactic::BAR),
            questionable: field_questionable.unwrap_or_else(|| crate::types::Metasyntactic(-1)),
            tags: field_tags.unwrap_or_else(|| ::std::collections::BTreeSet::new()),
            _dot_dot_Default_default: self::dot_dot::OtherFields(()),
        })
    }
}


#[allow(clippy::derivable_impls)]
impl ::std::default::Default for self::MyStruct {
    fn default() -> Self {
        Self {
            me2_3: crate::types::MyEnum2(3),
            me3_n3: crate::types::MyEnum3(-3),
            me1_t1: crate::types::MyEnum1::ME1_1,
            me1_t2: crate::types::MyEnum1::ME1_1,
            _dot_dot_Default_default: self::dot_dot::OtherFields(()),
        }
    }
}

impl ::std::fmt::Debug for self::MyStruct {
    fn fmt(&self, formatter: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        formatter
            .debug_struct("MyStruct")
            .field("me2_3", &self.me2_3)
            .field("me3_n3", &self.me3_n3)
            .field("me1_t1", &self.me1_t1)
            .field("me1_t2", &self.me1_t2)
            .finish()
    }
}

unsafe impl ::std::marker::Send for self::MyStruct {}
unsafe impl ::std::marker::Sync for self::MyStruct {}

impl ::fbthrift::GetTType for self::MyStruct {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
}

impl ::fbthrift::GetUri for self::MyStruct {
    fn uri() -> &'static str {
        "test.dev/fixtures/enums/MyStruct"
    }
}

impl<P> ::fbthrift::Serialize<P> for self::MyStruct
where
    P: ::fbthrift::ProtocolWriter,
{
    fn write(&self, p: &mut P) {
        p.write_struct_begin("MyStruct");
        p.write_field_begin("me2_3", ::fbthrift::TType::I32, 1);
        ::fbthrift::Serialize::write(&self.me2_3, p);
        p.write_field_end();
        p.write_field_begin("me3_n3", ::fbthrift::TType::I32, 2);
        ::fbthrift::Serialize::write(&self.me3_n3, p);
        p.write_field_end();
        p.write_field_begin("me1_t1", ::fbthrift::TType::I32, 4);
        ::fbthrift::Serialize::write(&self.me1_t1, p);
        p.write_field_end();
        p.write_field_begin("me1_t2", ::fbthrift::TType::I32, 6);
        ::fbthrift::Serialize::write(&self.me1_t2, p);
        p.write_field_end();
        p.write_field_stop();
        p.write_struct_end();
    }
}

impl<P> ::fbthrift::Deserialize<P> for self::MyStruct
where
    P: ::fbthrift::ProtocolReader,
{
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        static FIELDS: &[::fbthrift::Field] = &[
            ::fbthrift::Field::new("me1_t1", ::fbthrift::TType::I32, 4),
            ::fbthrift::Field::new("me1_t2", ::fbthrift::TType::I32, 6),
            ::fbthrift::Field::new("me2_3", ::fbthrift::TType::I32, 1),
            ::fbthrift::Field::new("me3_n3", ::fbthrift::TType::I32, 2),
        ];
        let mut field_me2_3 = ::std::option::Option::None;
        let mut field_me3_n3 = ::std::option::Option::None;
        let mut field_me1_t1 = ::std::option::Option::None;
        let mut field_me1_t2 = ::std::option::Option::None;
        let _ = p.read_struct_begin(|_| ())?;
        loop {
            let (_, fty, fid) = p.read_field_begin(|_| (), FIELDS)?;
            match (fty, fid as ::std::primitive::i32) {
                (::fbthrift::TType::Stop, _) => break,
                (::fbthrift::TType::I32, 1) => field_me2_3 = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (::fbthrift::TType::I32, 2) => field_me3_n3 = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (::fbthrift::TType::I32, 4) => field_me1_t1 = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (::fbthrift::TType::I32, 6) => field_me1_t2 = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (fty, _) => p.skip(fty)?,
            }
            p.read_field_end()?;
        }
        p.read_struct_end()?;
        ::std::result::Result::Ok(Self {
            me2_3: field_me2_3.unwrap_or_else(|| crate::types::MyEnum2(3)),
            me3_n3: field_me3_n3.unwrap_or_else(|| crate::types::MyEnum3(-3)),
            me1_t1: field_me1_t1.unwrap_or(crate::types::MyEnum1::ME1_1),
            me1_t2: field_me1_t2.unwrap_or(crate::types::MyEnum1::ME1_1),
            _dot_dot_Default_default: self::dot_dot::OtherFields(()),
        })
    }
}


mod dot_dot {
    #[derive(Copy, Clone, PartialEq, Eq, PartialOrd, Ord, Hash)]
    pub struct OtherFields(pub(crate) ());

    #[allow(dead_code)] // if serde isn't being used
    pub(super) fn default_for_serde_deserialize() -> OtherFields {
        OtherFields(())
    }
}
