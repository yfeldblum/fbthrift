/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.basicannotations;

import com.facebook.nifty.client.RequestChannel;
import com.facebook.swift.codec.*;
import com.facebook.swift.service.*;
import com.facebook.swift.service.metadata.*;
import com.facebook.thrift.client.*;
import com.facebook.thrift.util.FutureUtil;
import com.google.common.util.concurrent.ListenableFuture;
import java.io.*;
import java.lang.reflect.Method;
import java.util.*;
import org.apache.thrift.ProtocolId;
import reactor.core.publisher.Mono;

@SwiftGenerated
@Deprecated
public class BadServiceAsyncClientImpl extends AbstractThriftClient implements BadService.Async {

    // Method Handlers
    private ThriftMethodHandler barMethodHandler;
    // Interaction Handlers
    private ThriftMethodHandler fooIMethodHandler;

    // Method Exceptions
    private static final Class[] barExceptions = new Class[] {
        org.apache.thrift.TException.class};
    // Interaction Exceptions
    private static final Class[] fooIExceptions = new Class[] {
        org.apache.thrift.TException.class};

    public BadServiceAsyncClientImpl(
        RequestChannel channel,
        Map<Method, ThriftMethodHandler> methods,
        Map<String, String> headers,
        Map<String, String> persistentHeaders,
        List<? extends ThriftClientEventHandler> eventHandlers) {
      this("BadService", channel, methods, headers, persistentHeaders, eventHandlers);
    }

    public BadServiceAsyncClientImpl(
        String serviceName,
        RequestChannel channel,
        Map<Method, ThriftMethodHandler> methods,
        Map<String, String> headers,
        Map<String, String> persistentHeaders,
        List<? extends ThriftClientEventHandler> eventHandlers) {
      super(serviceName, channel, headers, persistentHeaders, eventHandlers);

      Map<String, ThriftMethodHandler> methodHandlerMap = new HashMap<>();
      methods.forEach(
          (key, value) -> {
            methodHandlerMap.put(key.getName(), value);
          });

      // Set method handlers
      barMethodHandler = methodHandlerMap.get("bar");
      // Set interaction handlers
      fooIMethodHandler = methodHandlerMap.get("foo");
    }

    public BadServiceAsyncClientImpl(
        Map<String, String> headers,
        Map<String, String> persistentHeaders,
        Mono<? extends RpcClient> rpcClient,
        ThriftServiceMetadata serviceMetadata,
        ThriftCodecManager codecManager,
        ProtocolId protocolId,
        Map<Method, ThriftMethodHandler> methods) {
      this("BadService", headers, persistentHeaders, rpcClient, serviceMetadata, codecManager, protocolId, methods);
    }

    public BadServiceAsyncClientImpl(
        String serviceName,
        Map<String, String> headers,
        Map<String, String> persistentHeaders,
        Mono<? extends RpcClient> rpcClient,
        ThriftServiceMetadata serviceMetadata,
        ThriftCodecManager codecManager,
        ProtocolId protocolId,
        Map<Method, ThriftMethodHandler> methods) {
      super(serviceName, headers, persistentHeaders, rpcClient, serviceMetadata, codecManager, protocolId);

      Map<String, ThriftMethodHandler> methodHandlerMap = new HashMap<>();
      methods.forEach(
          (key, value) -> {
            methodHandlerMap.put(key.getName(), value);
          });

      // Set method handlers
      barMethodHandler = methodHandlerMap.get("bar");
      // Set interaction handlers
      fooIMethodHandler = methodHandlerMap.get("foo");
    }

    @java.lang.Override
    public void close() {
        super.close();
    }


    @java.lang.Override
    public ListenableFuture<Integer> bar() {
        return bar(RpcOptions.EMPTY);
    }

    @java.lang.Override
    public ListenableFuture<Integer> bar(
        RpcOptions rpcOptions) {
        return FutureUtil.transform(barWrapper(rpcOptions));
    }

    @java.lang.Override
    public ListenableFuture<ResponseWrapper<Integer>> barWrapper(
        RpcOptions rpcOptions) {
        try {
          return executeWrapperWithOptions(barMethodHandler, barExceptions, rpcOptions);
        } catch (Throwable t) {
          throw new RuntimeTException(t.getMessage(), t);
        }
    }

    public class BadInteractionImpl implements BadInteraction {
      private final long interactionId;

      BadInteractionImpl(long interactionId) {
        this.interactionId = interactionId;
      }

      @java.lang.Override
      public ListenableFuture<Void> foo(
          RpcOptions rpcOptions) {
          return FutureUtil.transform(fooWrapper(rpcOptions));
      }

      @java.lang.Override
      public ListenableFuture<Void> foo() {
        return FutureUtil.transform(fooWrapper(RpcOptions.EMPTY));
      }

      @java.lang.Override
      public ListenableFuture<ResponseWrapper<Void>> fooWrapper(
        RpcOptions _rpcOptions) {
        try {
          RpcOptions rpcOptions = updateRpcOptions(_rpcOptions);
          return executeWrapperWithOptions(fooIMethodHandler, fooIExceptions, rpcOptions);
        } catch (Throwable t) {
          throw new RuntimeTException(t.getMessage(), t);
        }
      }

      @java.lang.Override
      public void close() {
        activeInteractions.remove(interactionId);
      }

      private RpcOptions updateRpcOptions(RpcOptions _rpcOptions) {
        RpcOptions.Builder builder = new RpcOptions.Builder(_rpcOptions);
        if (activeInteractions.contains(interactionId)) {
          builder.setInteractionId(interactionId);
        } else {
          builder.setCreateInteractionId(interactionId).setInteractionId(0L);
          activeInteractions.add(interactionId);
        }
        return builder.build();
      }
    }

    public BadInteraction createBadInteraction() {
        return new BadInteractionImpl(interactionCounter.incrementAndGet());
    }
}
