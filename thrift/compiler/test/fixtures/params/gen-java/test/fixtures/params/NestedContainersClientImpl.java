/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.params;

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
public class NestedContainersClientImpl extends AbstractThriftClient implements NestedContainers {

    // Method Handlers
    private ThriftMethodHandler mapListMethodHandler;
    private ThriftMethodHandler mapSetMethodHandler;
    private ThriftMethodHandler listMapMethodHandler;
    private ThriftMethodHandler listSetMethodHandler;
    private ThriftMethodHandler turtlesMethodHandler;

    // Method Exceptions
    private static final Class[] mapListExceptions = new Class[] {
        org.apache.thrift.TException.class};
    private static final Class[] mapSetExceptions = new Class[] {
        org.apache.thrift.TException.class};
    private static final Class[] listMapExceptions = new Class[] {
        org.apache.thrift.TException.class};
    private static final Class[] listSetExceptions = new Class[] {
        org.apache.thrift.TException.class};
    private static final Class[] turtlesExceptions = new Class[] {
        org.apache.thrift.TException.class};

    public NestedContainersClientImpl(
        RequestChannel channel,
        Map<Method, ThriftMethodHandler> methods,
        Map<String, String> headers,
        Map<String, String> persistentHeaders,
        List<? extends ThriftClientEventHandler> eventHandlers) {
      this("NestedContainers", channel, methods, headers, persistentHeaders, eventHandlers);
    }

    protected NestedContainersClientImpl(
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
      mapListMethodHandler = methodHandlerMap.get("mapList");
      mapSetMethodHandler = methodHandlerMap.get("mapSet");
      listMapMethodHandler = methodHandlerMap.get("listMap");
      listSetMethodHandler = methodHandlerMap.get("listSet");
      turtlesMethodHandler = methodHandlerMap.get("turtles");
    }

    public NestedContainersClientImpl(
        Map<String, String> headers,
        Map<String, String> persistentHeaders,
        Mono<? extends RpcClient> rpcClient,
        ThriftServiceMetadata serviceMetadata,
        ThriftCodecManager codecManager,
        ProtocolId protocolId,
        Map<Method, ThriftMethodHandler> methods) {
      this("NestedContainers", headers, persistentHeaders, rpcClient, serviceMetadata, codecManager, protocolId, methods);
    }

    protected NestedContainersClientImpl(
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
      mapListMethodHandler = methodHandlerMap.get("mapList");
      mapSetMethodHandler = methodHandlerMap.get("mapSet");
      listMapMethodHandler = methodHandlerMap.get("listMap");
      listSetMethodHandler = methodHandlerMap.get("listSet");
      turtlesMethodHandler = methodHandlerMap.get("turtles");
    }

    @java.lang.Override
    public void close() {
        super.close();
    }


    @java.lang.Override
    public void mapList(
        Map<Integer, List<Integer>> foo) throws org.apache.thrift.TException {
      mapListWrapper(foo, RpcOptions.EMPTY).getData();
    }

    @java.lang.Override
    public void mapList(
        Map<Integer, List<Integer>> foo,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
      mapListWrapper(foo, rpcOptions).getData();
    }

    @java.lang.Override
    public ResponseWrapper<Void> mapListWrapper(
        Map<Integer, List<Integer>> foo,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
      try {
        return FutureUtil.get(executeWrapperWithOptions(mapListMethodHandler, mapListExceptions, rpcOptions, foo));
      } catch (Throwable t) {
        if (t instanceof org.apache.thrift.TException) {
          throw (org.apache.thrift.TException) t;
        }
        throw new org.apache.thrift.TException(t);
      }
    }

    @java.lang.Override
    public void mapSet(
        Map<Integer, Set<Integer>> foo) throws org.apache.thrift.TException {
      mapSetWrapper(foo, RpcOptions.EMPTY).getData();
    }

    @java.lang.Override
    public void mapSet(
        Map<Integer, Set<Integer>> foo,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
      mapSetWrapper(foo, rpcOptions).getData();
    }

    @java.lang.Override
    public ResponseWrapper<Void> mapSetWrapper(
        Map<Integer, Set<Integer>> foo,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
      try {
        return FutureUtil.get(executeWrapperWithOptions(mapSetMethodHandler, mapSetExceptions, rpcOptions, foo));
      } catch (Throwable t) {
        if (t instanceof org.apache.thrift.TException) {
          throw (org.apache.thrift.TException) t;
        }
        throw new org.apache.thrift.TException(t);
      }
    }

    @java.lang.Override
    public void listMap(
        List<Map<Integer, Integer>> foo) throws org.apache.thrift.TException {
      listMapWrapper(foo, RpcOptions.EMPTY).getData();
    }

    @java.lang.Override
    public void listMap(
        List<Map<Integer, Integer>> foo,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
      listMapWrapper(foo, rpcOptions).getData();
    }

    @java.lang.Override
    public ResponseWrapper<Void> listMapWrapper(
        List<Map<Integer, Integer>> foo,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
      try {
        return FutureUtil.get(executeWrapperWithOptions(listMapMethodHandler, listMapExceptions, rpcOptions, foo));
      } catch (Throwable t) {
        if (t instanceof org.apache.thrift.TException) {
          throw (org.apache.thrift.TException) t;
        }
        throw new org.apache.thrift.TException(t);
      }
    }

    @java.lang.Override
    public void listSet(
        List<Set<Integer>> foo) throws org.apache.thrift.TException {
      listSetWrapper(foo, RpcOptions.EMPTY).getData();
    }

    @java.lang.Override
    public void listSet(
        List<Set<Integer>> foo,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
      listSetWrapper(foo, rpcOptions).getData();
    }

    @java.lang.Override
    public ResponseWrapper<Void> listSetWrapper(
        List<Set<Integer>> foo,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
      try {
        return FutureUtil.get(executeWrapperWithOptions(listSetMethodHandler, listSetExceptions, rpcOptions, foo));
      } catch (Throwable t) {
        if (t instanceof org.apache.thrift.TException) {
          throw (org.apache.thrift.TException) t;
        }
        throw new org.apache.thrift.TException(t);
      }
    }

    @java.lang.Override
    public void turtles(
        List<List<Map<Integer, Map<Integer, Set<Integer>>>>> foo) throws org.apache.thrift.TException {
      turtlesWrapper(foo, RpcOptions.EMPTY).getData();
    }

    @java.lang.Override
    public void turtles(
        List<List<Map<Integer, Map<Integer, Set<Integer>>>>> foo,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
      turtlesWrapper(foo, rpcOptions).getData();
    }

    @java.lang.Override
    public ResponseWrapper<Void> turtlesWrapper(
        List<List<Map<Integer, Map<Integer, Set<Integer>>>>> foo,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
      try {
        return FutureUtil.get(executeWrapperWithOptions(turtlesMethodHandler, turtlesExceptions, rpcOptions, foo));
      } catch (Throwable t) {
        if (t instanceof org.apache.thrift.TException) {
          throw (org.apache.thrift.TException) t;
        }
        throw new org.apache.thrift.TException(t);
      }
    }
}
