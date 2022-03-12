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
public class I16Patch implements TBase, java.io.Serializable, Cloneable {
  private static final TStruct STRUCT_DESC = new TStruct("I16Patch");
  private static final TField ASSIGN_FIELD_DESC = new TField("assign", TType.I16, (short)1);
  private static final TField ADD_FIELD_DESC = new TField("add", TType.I16, (short)2);

  public final Short assign;
  public final Short add;
  public static final int ASSIGN = 1;
  public static final int ADD = 2;

  public I16Patch(
      Short assign,
      Short add) {
    this.assign = assign;
    this.add = add;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public I16Patch(I16Patch other) {
    if (other.isSetAssign()) {
      this.assign = TBaseHelper.deepCopy(other.assign);
    } else {
      this.assign = null;
    }
    if (other.isSetAdd()) {
      this.add = TBaseHelper.deepCopy(other.add);
    } else {
      this.add = null;
    }
  }

  public I16Patch deepCopy() {
    return new I16Patch(this);
  }

  public Short getAssign() {
    return this.assign;
  }

  // Returns true if field assign is set (has been assigned a value) and false otherwise
  public boolean isSetAssign() {
    return this.assign != null;
  }

  public Short getAdd() {
    return this.add;
  }

  // Returns true if field add is set (has been assigned a value) and false otherwise
  public boolean isSetAdd() {
    return this.add != null;
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

    if (!TBaseHelper.equalsNobinary(this.isSetAdd(), that.isSetAdd(), this.add, that.add)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {assign, add});
  }

  // This is required to satisfy the TBase interface, but can't be implemented on immutable struture.
  public void read(TProtocol iprot) throws TException {
    throw new TException("unimplemented in android immutable structure");
  }

  public static I16Patch deserialize(TProtocol iprot) throws TException {
    Short tmp_assign = null;
    Short tmp_add = null;
    TField __field;
    iprot.readStructBegin();
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
            tmp_assign = iprot.readI16();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case ADD:
          if (__field.type == TType.I16) {
            tmp_add = iprot.readI16();
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

    I16Patch _that;
    _that = new I16Patch(
      tmp_assign
      ,tmp_add
    );
    _that.validate();
    return _that;
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.assign != null) {
      if (isSetAssign()) {
        oprot.writeFieldBegin(ASSIGN_FIELD_DESC);
        oprot.writeI16(this.assign);
        oprot.writeFieldEnd();
      }
    }
    if (this.add != null) {
      oprot.writeFieldBegin(ADD_FIELD_DESC);
      oprot.writeI16(this.add);
      oprot.writeFieldEnd();
    }
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(1, true);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    return TBaseHelper.toStringHelper(this, indent, prettyPrint);
  }

  public void validate() throws TException {
    // check for required fields
  }

}

