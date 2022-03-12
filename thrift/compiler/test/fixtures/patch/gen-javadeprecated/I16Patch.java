/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import com.facebook.thrift.*;
import com.facebook.thrift.annotations.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial" })
public class I16Patch implements TBase, java.io.Serializable, Cloneable, Comparable<I16Patch> {
  private static final TStruct STRUCT_DESC = new TStruct("I16Patch");
  private static final TField ASSIGN_FIELD_DESC = new TField("assign", TType.I16, (short)1);
  private static final TField ADD_FIELD_DESC = new TField("add", TType.I16, (short)2);

  public short assign;
  public short add;
  public static final int ASSIGN = 1;
  public static final int ADD = 2;

  // isset id assignments
  private static final int __ASSIGN_ISSET_ID = 0;
  private static final int __ADD_ISSET_ID = 1;
  private BitSet __isset_bit_vector = new BitSet(2);

  public static final Map<Integer, FieldMetaData> metaDataMap;

  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    tmpMetaDataMap.put(ASSIGN, new FieldMetaData("assign", TFieldRequirementType.OPTIONAL, 
        new FieldValueMetaData(TType.I16)));
    tmpMetaDataMap.put(ADD, new FieldMetaData("add", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.I16)));
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  static {
    FieldMetaData.addStructMetaDataMap(I16Patch.class, metaDataMap);
  }

  public I16Patch() {
  }

  public I16Patch(
      short add) {
    this();
    this.add = add;
    setAddIsSet(true);
  }

  public I16Patch(
      short assign,
      short add) {
    this();
    this.assign = assign;
    setAssignIsSet(true);
    this.add = add;
    setAddIsSet(true);
  }

  public static class Builder {
    private short assign;
    private short add;

    BitSet __optional_isset = new BitSet(2);

    public Builder() {
    }

    public Builder setAssign(final short assign) {
      this.assign = assign;
      __optional_isset.set(__ASSIGN_ISSET_ID, true);
      return this;
    }

    public Builder setAdd(final short add) {
      this.add = add;
      __optional_isset.set(__ADD_ISSET_ID, true);
      return this;
    }

    public I16Patch build() {
      I16Patch result = new I16Patch();
      if (__optional_isset.get(__ASSIGN_ISSET_ID)) {
        result.setAssign(this.assign);
      }
      if (__optional_isset.get(__ADD_ISSET_ID)) {
        result.setAdd(this.add);
      }
      return result;
    }
  }

  public static Builder builder() {
    return new Builder();
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public I16Patch(I16Patch other) {
    __isset_bit_vector.clear();
    __isset_bit_vector.or(other.__isset_bit_vector);
    this.assign = TBaseHelper.deepCopy(other.assign);
    this.add = TBaseHelper.deepCopy(other.add);
  }

  public I16Patch deepCopy() {
    return new I16Patch(this);
  }

  public short getAssign() {
    return this.assign;
  }

  public I16Patch setAssign(short assign) {
    this.assign = assign;
    setAssignIsSet(true);
    return this;
  }

  public void unsetAssign() {
    __isset_bit_vector.clear(__ASSIGN_ISSET_ID);
  }

  // Returns true if field assign is set (has been assigned a value) and false otherwise
  public boolean isSetAssign() {
    return __isset_bit_vector.get(__ASSIGN_ISSET_ID);
  }

  public void setAssignIsSet(boolean __value) {
    __isset_bit_vector.set(__ASSIGN_ISSET_ID, __value);
  }

  public short getAdd() {
    return this.add;
  }

  public I16Patch setAdd(short add) {
    this.add = add;
    setAddIsSet(true);
    return this;
  }

  public void unsetAdd() {
    __isset_bit_vector.clear(__ADD_ISSET_ID);
  }

  // Returns true if field add is set (has been assigned a value) and false otherwise
  public boolean isSetAdd() {
    return __isset_bit_vector.get(__ADD_ISSET_ID);
  }

  public void setAddIsSet(boolean __value) {
    __isset_bit_vector.set(__ADD_ISSET_ID, __value);
  }

  public void setFieldValue(int fieldID, Object __value) {
    switch (fieldID) {
    case ASSIGN:
      if (__value == null) {
        unsetAssign();
      } else {
        setAssign((Short)__value);
      }
      break;

    case ADD:
      if (__value == null) {
        unsetAdd();
      } else {
        setAdd((Short)__value);
      }
      break;

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  public Object getFieldValue(int fieldID) {
    switch (fieldID) {
    case ASSIGN:
      return new Short(getAssign());

    case ADD:
      return new Short(getAdd());

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof I16Patch))
      return false;
    I16Patch that = (I16Patch)_that;

    if (!TBaseHelper.equalsNobinary(this.isSetAssign(), that.isSetAssign(), this.assign, that.assign)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.add, that.add)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {assign, add});
  }

  @Override
  public int compareTo(I16Patch other) {
    if (other == null) {
      // See java.lang.Comparable docs
      throw new NullPointerException();
    }

    if (other == this) {
      return 0;
    }
    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetAssign()).compareTo(other.isSetAssign());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(assign, other.assign);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetAdd()).compareTo(other.isSetAdd());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(add, other.add);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    return 0;
  }

  public void read(TProtocol iprot) throws TException {
    TField __field;
    iprot.readStructBegin(metaDataMap);
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) {
        break;
      }
      switch (__field.id)
      {
        case ASSIGN:
          if (__field.type == TType.I16) {
            this.assign = iprot.readI16();
            setAssignIsSet(true);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case ADD:
          if (__field.type == TType.I16) {
            this.add = iprot.readI16();
            setAddIsSet(true);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, __field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();


    // check for required fields of primitive type, which can't be checked in the validate method
    validate();
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (isSetAssign()) {
      oprot.writeFieldBegin(ASSIGN_FIELD_DESC);
      oprot.writeI16(this.assign);
      oprot.writeFieldEnd();
    }
    oprot.writeFieldBegin(ADD_FIELD_DESC);
    oprot.writeI16(this.add);
    oprot.writeFieldEnd();
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(1, true);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    String indentStr = prettyPrint ? TBaseHelper.getIndentedString(indent) : "";
    String newLine = prettyPrint ? "\n" : "";
    String space = prettyPrint ? " " : "";
    StringBuilder sb = new StringBuilder("I16Patch");
    sb.append(space);
    sb.append("(");
    sb.append(newLine);
    boolean first = true;

    if (isSetAssign())
    {
      sb.append(indentStr);
      sb.append("assign");
      sb.append(space);
      sb.append(":").append(space);
      sb.append(TBaseHelper.toString(this.getAssign(), indent + 1, prettyPrint));
      first = false;
    }
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("add");
    sb.append(space);
    sb.append(":").append(space);
    sb.append(TBaseHelper.toString(this.getAdd(), indent + 1, prettyPrint));
    first = false;
    sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws TException {
    // check for required fields
  }

}

