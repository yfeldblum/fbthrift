// @generated by Thrift for [[[ program path ]]]
// This file is probably not the place you want to edit!

package module // [[[ program thrift source path ]]]


import (
    "context"
    "fmt"


    "thrift/lib/go/thrift"
)


// (needed to ensure safety because of naive import list construction)
var _ = context.Background
var _ = fmt.Printf
var _ = thrift.ZERO



type C interface {
    F(ctx context.Context) error

    Thing(ctx context.Context, a int32, b string, c []int32) (string, error)
}

// Deprecated: Use C instead.
type CClientInterface interface {
  thrift.ClientInterface
  F() error

  Thing(a int32, b string, c []int32) (string, error)
}

type CChannelClient struct {
    ch thrift.RequestChannel
}
// Compile time interface enforcer
var _ C = &CChannelClient{}

func NewCChannelClient(channel thrift.RequestChannel) *CChannelClient {
    return &CChannelClient{
        ch: channel,
    }
}

func (c *CChannelClient) Close() error {
    return c.ch.Close()
}

func (c *CChannelClient) IsOpen() bool {
    return c.ch.IsOpen()
}

func (c *CChannelClient) Open() error {
    return c.ch.Open()
}

// Deprecated: Use CChannelClient instead.
type CClient struct {
    chClient *CChannelClient
}
// Compile time interface enforcer
var _ CClientInterface = &CClient{}

// Deprecated: Use NewCChannelClient() instead.
func NewCClient(t thrift.Transport, iprot thrift.Protocol, oprot thrift.Protocol) *CClient {
    return &CClient{
        chClient: NewCChannelClient(
            thrift.NewSerialChannel(iprot),
        ),
    }
}

func (c *CClient) Close() error {
    return c.chClient.Close()
}

func (c *CClient) IsOpen() bool {
    return c.chClient.IsOpen()
}

func (c *CClient) Open() error {
    return c.chClient.Open()
}

// Deprecated: Use CChannelClient instead.
type CThreadsafeClient = CClient

// Deprecated: Use NewCChannelClient() instead.
func NewCThreadsafeClient(t thrift.Transport, iprot thrift.Protocol, oprot thrift.Protocol) *CThreadsafeClient {
    return NewCClient(t, iprot, oprot)
}


func (c *CChannelClient) F(ctx context.Context) error {
    in := &reqCF{
    }
    out := newRespCF()
    err := c.ch.Call(ctx, "f", in, out)
    return err
}

func (c *CClient) F() error {
    return c.chClient.F(nil)
}


func (c *CChannelClient) Thing(ctx context.Context, a int32, b string, c []int32) (string, error) {
    in := &reqCThing{
        A: a,
        B: b,
        C: c,
    }
    out := newRespCThing()
    err := c.ch.Call(ctx, "thing", in, out)
    return out.Value, err
}

func (c *CClient) Thing(a int32, b string, c []int32) (string, error) {
    return c.chClient.Thing(nil, a, b, c)
}


type reqCF struct {
}
// Compile time interface enforcer
var _ thrift.Struct = &reqCF{}

func newReqCF() *reqCF {
    return (&reqCF{})
}

// Deprecated: Use reqCF.Set* methods instead or set the fields directly.
type reqCFBuilder struct {
    obj *reqCF
}

func newReqCFBuilder() *reqCFBuilder {
    return &reqCFBuilder{
        obj: newReqCF(),
    }
}

func (x *reqCFBuilder) Emit() *reqCF {
    var objCopy reqCF = *x.obj
    return &objCopy
}

func (x *reqCF) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("req_C_f"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *reqCF) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}
type respCF struct {
}
// Compile time interface enforcer
var _ thrift.Struct = &respCF{}

func newRespCF() *respCF {
    return (&respCF{})
}

// Deprecated: Use respCF.Set* methods instead or set the fields directly.
type respCFBuilder struct {
    obj *respCF
}

func newRespCFBuilder() *respCFBuilder {
    return &respCFBuilder{
        obj: newRespCF(),
    }
}

func (x *respCFBuilder) Emit() *respCF {
    var objCopy respCF = *x.obj
    return &objCopy
}

func (x *respCF) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("resp_C_f"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *respCF) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}
type reqCThing struct {
    A int32 `thrift:"a,1" json:"a" db:"a"`
    B string `thrift:"b,2" json:"b" db:"b"`
    C []int32 `thrift:"c,3" json:"c" db:"c"`
}
// Compile time interface enforcer
var _ thrift.Struct = &reqCThing{}

func newReqCThing() *reqCThing {
    return (&reqCThing{})
}
func (x *reqCThing) GetA() int32 {
    return x.A
}

func (x *reqCThing) GetB() string {
    return x.B
}

func (x *reqCThing) GetC() []int32 {
    return x.C
}

func (x *reqCThing) SetA(a int32) *reqCThing {
    x.A = a
    return x
}

func (x *reqCThing) SetB(b string) *reqCThing {
    x.B = b
    return x
}

func (x *reqCThing) SetC(c []int32) *reqCThing {
    x.C = c
    return x
}



func (x *reqCThing) IsSetC() bool {
    return x.C != nil
}

func (x *reqCThing) writeField1(p thrift.Protocol) error {  // A
    if err := p.WriteFieldBegin("a", thrift.I32, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetA()
    if err := p.WriteI32(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *reqCThing) writeField2(p thrift.Protocol) error {  // B
    if err := p.WriteFieldBegin("b", thrift.STRING, 2); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetB()
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *reqCThing) writeField3(p thrift.Protocol) error {  // C
    if !x.IsSetC() {
        return nil
    }

    if err := p.WriteFieldBegin("c", thrift.SET, 3); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetC()
    if err := p.WriteSetBegin(thrift.I32, len(item)); err != nil {
    return thrift.PrependError("error writing set begin: ", err)
}
for _, v := range item {
    {
        item := v
        if err := p.WriteI32(item); err != nil {
    return err
}
    }
}
if err := p.WriteSetEnd(); err != nil {
    return thrift.PrependError("error writing set end: ", err)
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *reqCThing) readField1(p thrift.Protocol) error {  // A
    result, err := p.ReadI32()
if err != nil {
    return err
}

    x.SetA(result)
    return nil
}

func (x *reqCThing) readField2(p thrift.Protocol) error {  // B
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetB(result)
    return nil
}

func (x *reqCThing) readField3(p thrift.Protocol) error {  // C
    _ /* elemType */, size, err := p.ReadSetBegin()
if err != nil {
    return thrift.PrependError("error reading set begin: ", err)
}

setResult := make([]int32, 0, size)
for i := 0; i < size; i++ {
    var elem int32
    {
        result, err := p.ReadI32()
if err != nil {
    return err
}
        elem = result
    }
    setResult = append(setResult, elem)
}

if err := p.ReadSetEnd(); err != nil {
    return thrift.PrependError("error reading set end: ", err)
}
result := setResult

    x.SetC(result)
    return nil
}


// Deprecated: Use reqCThing.Set* methods instead or set the fields directly.
type reqCThingBuilder struct {
    obj *reqCThing
}

func newReqCThingBuilder() *reqCThingBuilder {
    return &reqCThingBuilder{
        obj: newReqCThing(),
    }
}

func (x *reqCThingBuilder) A(a int32) *reqCThingBuilder {
    x.obj.A = a
    return x
}

func (x *reqCThingBuilder) B(b string) *reqCThingBuilder {
    x.obj.B = b
    return x
}

func (x *reqCThingBuilder) C(c []int32) *reqCThingBuilder {
    x.obj.C = c
    return x
}

func (x *reqCThingBuilder) Emit() *reqCThing {
    var objCopy reqCThing = *x.obj
    return &objCopy
}

func (x *reqCThing) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("req_C_thing"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := x.writeField2(p); err != nil {
        return err
    }

    if err := x.writeField3(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *reqCThing) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        case 1:  // a
            if err := x.readField1(p); err != nil {
                return err
            }
        case 2:  // b
            if err := x.readField2(p); err != nil {
                return err
            }
        case 3:  // c
            if err := x.readField3(p); err != nil {
                return err
            }
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}
type respCThing struct {
    Value string `thrift:"value,0,required" json:"value" db:"value"`
}
// Compile time interface enforcer
var _ thrift.Struct = &respCThing{}

func newRespCThing() *respCThing {
    return (&respCThing{})
}
func (x *respCThing) GetValue() string {
    return x.Value
}

func (x *respCThing) SetValue(value string) *respCThing {
    x.Value = value
    return x
}


func (x *respCThing) writeField0(p thrift.Protocol) error {  // Value
    if err := p.WriteFieldBegin("value", thrift.STRING, 0); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetValue()
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *respCThing) readField0(p thrift.Protocol) error {  // Value
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetValue(result)
    return nil
}


// Deprecated: Use respCThing.Set* methods instead or set the fields directly.
type respCThingBuilder struct {
    obj *respCThing
}

func newRespCThingBuilder() *respCThingBuilder {
    return &respCThingBuilder{
        obj: newRespCThing(),
    }
}

func (x *respCThingBuilder) Value(value string) *respCThingBuilder {
    x.obj.Value = value
    return x
}

func (x *respCThingBuilder) Emit() *respCThing {
    var objCopy respCThing = *x.obj
    return &objCopy
}

func (x *respCThing) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("resp_C_thing"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField0(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *respCThing) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        case 0:  // value
            if err := x.readField0(p); err != nil {
                return err
            }
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}


type CProcessor struct {
    processorMap       map[string]thrift.ProcessorFunction
    functionServiceMap map[string]string
    handler            C
}
// Compile time interface enforcer
var _ thrift.Processor = &CProcessor{}

func (p *CProcessor) AddToProcessorMap(key string, processor thrift.ProcessorFunction) {
    p.processorMap[key] = processor
}

func (p *CProcessor) AddToFunctionServiceMap(key, service string) {
    p.functionServiceMap[key] = service
}

func (p *CProcessor) GetProcessorFunction(key string) (processor thrift.ProcessorFunction, err error) {
    if processor, ok := p.processorMap[key]; ok {
        return processor, nil
    }
    return nil, nil
}

func (p *CProcessor) ProcessorMap() map[string]thrift.ProcessorFunction {
    return p.processorMap
}

func (p *CProcessor) FunctionServiceMap() map[string]string {
    return p.functionServiceMap
}

func NewCProcessor(handler C) *CProcessor {
    p := &CProcessor{
        handler:            handler,
        processorMap:       make(map[string]thrift.ProcessorFunction),
        functionServiceMap: make(map[string]string),
    }
    p.AddToProcessorMap("f", &procFuncCF{handler: handler})
    p.AddToProcessorMap("thing", &procFuncCThing{handler: handler})
    p.AddToFunctionServiceMap("f", "C")
    p.AddToFunctionServiceMap("thing", "C")

    return p
}


type procFuncCF struct {
    handler C
}
// Compile time interface enforcer
var _ thrift.ProcessorFunction = &procFuncCF{}

func (p *procFuncCF) Read(iprot thrift.Protocol) (thrift.Struct, thrift.Exception) {
    args := newReqCF()
    if err := args.Read(iprot); err != nil {
        return nil, err
    }
    iprot.ReadMessageEnd()
    return args, nil
}

func (p *procFuncCF) Write(seqId int32, result thrift.WritableStruct, oprot thrift.Protocol) (err thrift.Exception) {
    var err2 error
    messageType := thrift.REPLY
    if _, ok := result.(thrift.ApplicationException); ok {
        messageType = thrift.EXCEPTION
    }
    if err2 = oprot.WriteMessageBegin("F", messageType, seqId); err2 != nil {
        err = err2
    }
    if err2 = result.Write(oprot); err == nil && err2 != nil {
        err = err2
    }
    if err2 = oprot.WriteMessageEnd(); err == nil && err2 != nil {
        err = err2
    }
    if err2 = oprot.Flush(); err == nil && err2 != nil {
        err = err2
    }
    return err
}

func (p *procFuncCF) Run(reqStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
    result := newRespCF()
    if err := p.handler.F(); err != nil {
        x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing F: " + err.Error(), err)
        return x, x
    }
    return result, nil
}


type procFuncCThing struct {
    handler C
}
// Compile time interface enforcer
var _ thrift.ProcessorFunction = &procFuncCThing{}

func (p *procFuncCThing) Read(iprot thrift.Protocol) (thrift.Struct, thrift.Exception) {
    args := newReqCThing()
    if err := args.Read(iprot); err != nil {
        return nil, err
    }
    iprot.ReadMessageEnd()
    return args, nil
}

func (p *procFuncCThing) Write(seqId int32, result thrift.WritableStruct, oprot thrift.Protocol) (err thrift.Exception) {
    var err2 error
    messageType := thrift.REPLY
    if _, ok := result.(thrift.ApplicationException); ok {
        messageType = thrift.EXCEPTION
    }
    if err2 = oprot.WriteMessageBegin("Thing", messageType, seqId); err2 != nil {
        err = err2
    }
    if err2 = result.Write(oprot); err == nil && err2 != nil {
        err = err2
    }
    if err2 = oprot.WriteMessageEnd(); err == nil && err2 != nil {
        err = err2
    }
    if err2 = oprot.Flush(); err == nil && err2 != nil {
        err = err2
    }
    return err
}

func (p *procFuncCThing) Run(reqStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
    args := reqStruct.(*reqCThing)
    result := newRespCThing()
    if retval, err := p.handler.Thing(args.A, args.B, args.C); err != nil {
        x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing Thing: " + err.Error(), err)
        return x, x
    } else {
        result.Value = retval
    }

    return result, nil
}


