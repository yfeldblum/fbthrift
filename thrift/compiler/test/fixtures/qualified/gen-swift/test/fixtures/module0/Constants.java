/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.module0;

import com.facebook.swift.codec.*;
import com.google.common.collect.*;
import java.util.*;

@SwiftGenerated
public final class Constants {
    private Constants() {}

    public static final test.fixtures.module0.Struct C0 = new test.fixtures.module0.Struct.Builder().set(101).set("module0_str").build();

    public static final List<test.fixtures.module0.Enum> E0S = ImmutableList.<test.fixtures.module0.Enum>builder()
        .add(test.fixtures.module0.Enum.fromInteger(1))
        .add(test.fixtures.module0.Enum.fromInteger(3))
        .build();
}
