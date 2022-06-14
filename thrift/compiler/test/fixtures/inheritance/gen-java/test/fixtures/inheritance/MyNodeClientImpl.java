/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.inheritance;

import com.facebook.nifty.client.RequestChannel;
import com.facebook.swift.codec.*;
import com.facebook.swift.service.*;
import com.facebook.swift.service.metadata.*;
import com.facebook.thrift.client.*;
import com.facebook.thrift.util.FutureUtil;
import java.io.*;
import java.lang.reflect.Method;
import java.util.*;
import org.apache.thrift.ProtocolId;
import reactor.core.publisher.Mono;

@SwiftGenerated
@Deprecated
public class MyNodeClientImpl extends test.fixtures.inheritance.MyRootClientImpl implements MyNode {

    // Method Handlers
    private ThriftMethodHandler doMidMethodHandler;

    // Method Exceptions
    private static final Class[] doMidExceptions = new Class[] {
        org.apache.thrift.TException.class};

    public MyNodeClientImpl(
        RequestChannel channel,
        Map<Method, ThriftMethodHandler> methods,
        Map<String, String> headers,
        Map<String, String> persistentHeaders,
        List<? extends ThriftClientEventHandler> eventHandlers) {
      this("MyNode", channel, methods, headers, persistentHeaders, eventHandlers);
    }

    protected MyNodeClientImpl(
        String serviceName,
        RequestChannel channel,
        Map<Method, ThriftMethodHandler> methods,
        Map<String, String> headers,
        Map<String, String> persistentHeaders,
        List<? extends ThriftClientEventHandler> eventHandlers) {
      super(serviceName, channel, methods, headers, persistentHeaders, eventHandlers);

      Map<String, ThriftMethodHandler> methodHandlerMap = new HashMap<>();
      methods.forEach(
          (key, value) -> {
            methodHandlerMap.put(key.getName(), value);
          });

      // Set method handlers
      doMidMethodHandler = methodHandlerMap.get("doMid");
    }

    public MyNodeClientImpl(
        Map<String, String> headers,
        Map<String, String> persistentHeaders,
        Mono<? extends RpcClient> rpcClient,
        ThriftServiceMetadata serviceMetadata,
        ThriftCodecManager codecManager,
        ProtocolId protocolId,
        Map<Method, ThriftMethodHandler> methods) {
      this("MyNode", headers, persistentHeaders, rpcClient, serviceMetadata, codecManager, protocolId, methods);
    }

    protected MyNodeClientImpl(
        String serviceName,
        Map<String, String> headers,
        Map<String, String> persistentHeaders,
        Mono<? extends RpcClient> rpcClient,
        ThriftServiceMetadata serviceMetadata,
        ThriftCodecManager codecManager,
        ProtocolId protocolId,
        Map<Method, ThriftMethodHandler> methods) {
      super(serviceName, headers, persistentHeaders, rpcClient, serviceMetadata, codecManager, protocolId, methods);

      Map<String, ThriftMethodHandler> methodHandlerMap = new HashMap<>();
      methods.forEach(
          (key, value) -> {
            methodHandlerMap.put(key.getName(), value);
          });

      // Set method handlers
      doMidMethodHandler = methodHandlerMap.get("doMid");
    }

    @java.lang.Override
    public void close() {
        super.close();
    }


    @java.lang.Override
    public void doMid() throws org.apache.thrift.TException {
      doMidWrapper(RpcOptions.EMPTY).getData();
    }

    @java.lang.Override
    public void doMid(
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
      doMidWrapper(rpcOptions).getData();
    }

    @java.lang.Override
    public ResponseWrapper<Void> doMidWrapper(
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
      try {
        return FutureUtil.get(executeWrapperWithOptions(doMidMethodHandler, doMidExceptions, rpcOptions));
      } catch (Throwable t) {
        if (t instanceof org.apache.thrift.TException) {
          throw (org.apache.thrift.TException) t;
        }
        throw new org.apache.thrift.TException(t);
      }
    }
}
