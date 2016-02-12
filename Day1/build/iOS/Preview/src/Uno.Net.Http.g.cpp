// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Action-4.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IDictionary-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Exception.h>
#include <Uno.GC.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Net.Http.AbsolutePathParser.h>
#include <Uno.Net.Http.HashParser.h>
#include <Uno.Net.Http.HostInfo.h>
#include <Uno.Net.Http.HostInfoParser.h>
#include <Uno.Net.Http.HttpDefaultDispatcher.h>
#include <Uno.Net.Http.HttpMessageCache.h>
#include <Uno.Net.Http.HttpMessageHandler.h>
#include <Uno.Net.Http.HttpMessageHandler.StaticData.h>
#include <Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure.h>
#include <Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure-1.h>
#include <Uno.Net.Http.HttpMessageHandlerRequest.h>
#include <Uno.Net.Http.HttpRequestState.h>
#include <Uno.Net.Http.HttpResponseType.h>
#include <Uno.Net.Http.HttpStatusReasonPhrase.h>
#include <Uno.Net.Http.Implementation.IHttpRequest.h>
#include <Uno.Net.Http.Implementation.iOSHttpRequest.h>
#include <Uno.Net.Http.Implementation.iOSHttpSharedCache.h>
#include <Uno.Net.Http.InvalidResponseTypeException.h>
#include <Uno.Net.Http.InvalidStateException.h>
#include <Uno.Net.Http.QueryParser.h>
#include <Uno.Net.Http.SchemeParser.h>
#include <Uno.Net.Http.SchemeParserResult.h>
#include <Uno.Net.Http.Uri.h>
#include <Uno.Net.Http.UriFormatException.h>
#include <Uno.Net.Http.UriScheme.h>
#include <Uno.Net.Http.UriSchemeType.h>
#include <Uno.Net.Http.UserInfoParser.h>
#include <Uno.NotSupportedException.h>
#include <Uno.ObjectDisposedException.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Platform2.ApplicationState.h>
#include <Uno.Platform2.ApplicationStateTransitionHandler.h>
#include <Uno.String.h>
#include <Uno.Text.Utf8.h>
#include <Uno.Threading.IDispatcher.h>
static uString* STRINGS[103];
static uType* TYPES[29];

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// ../../../../../../../usr/local/share/uno/Packages/Uno.Net.Http/0.24.3/UriParsers/$.uno(8)
// -----------------------------------------------------------------------------------------

// public sealed class AbsolutePathParser :8
// {
uType* AbsolutePathParser_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(AbsolutePathParser);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.AbsolutePathParser", options);
    type->fp_ctor_ = (void*)AbsolutePathParser__New1_fn;
    ::STRINGS[0] = uString::Const("/");
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)AbsolutePathParser__New1_fn, 0, true, AbsolutePathParser_typeof(), 0),
        new uFunction("Parse", NULL, (void*)AbsolutePathParser__Parse_fn, 0, true, ::g::Uno::String_typeof(), 4, ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()->ByRef()));
    return type;
}

// public generated AbsolutePathParser() :8
void AbsolutePathParser__ctor__fn(AbsolutePathParser* __this)
{
    __this->ctor_();
}

// public generated AbsolutePathParser New() :8
void AbsolutePathParser__New1_fn(AbsolutePathParser** __retval)
{
    *__retval = AbsolutePathParser::New1();
}

// public static string Parse(string uriString, int idx, int endIdx, int& startPartIdx) :10
void AbsolutePathParser__Parse_fn(uString* uriString, int* idx, int* endIdx, int* startPartIdx, uString** __retval)
{
    *__retval = AbsolutePathParser::Parse(uriString, *idx, *endIdx, startPartIdx);
}

// public generated AbsolutePathParser() [instance] :8
void AbsolutePathParser::ctor_()
{
}

// public generated AbsolutePathParser New() [static] :8
AbsolutePathParser* AbsolutePathParser::New1()
{
    AbsolutePathParser* obj1 = (AbsolutePathParser*)uNew(AbsolutePathParser_typeof());
    obj1->ctor_();
    return obj1;
}

// public static string Parse(string uriString, int idx, int endIdx, int& startPartIdx) [static] :10
uString* AbsolutePathParser::Parse(uString* uriString, int idx, int endIdx, int* startPartIdx)
{
    uStackFrame __("Uno.Net.Http.AbsolutePathParser", "Parse(string,int,int,int&)");
    int start = ::g::Uno::String::IndexOf1(uPtr(uriString), ::STRINGS[0/*"/"*/], idx);

    if ((start < 0) || (start >= endIdx))
    {
        *startPartIdx = endIdx;
        return ::STRINGS[0/*"/"*/];
    }

    *startPartIdx = start;
    return ::g::Uno::String::Substring1(uriString, start, endIdx - start);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Uno.Net.Http/0.24.3/$.uno(336)
// --------------------------------------------------------------------------------

// private sealed class HttpMessageHandlerRequest.DispatchClosure :336
// {
uType* HttpMessageHandlerRequest__DispatchClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(HttpMessageHandlerRequest__DispatchClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure", options);
    ::STRINGS[1] = uString::Const("Invalid state: The request has already completed.");
    ::TYPES[0] = ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof();
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof());
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof()), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest__DispatchClosure, _action), 0,
        ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest__DispatchClosure, _arg), 0,
        ::g::Uno::Net::Http::HttpRequestState_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest__DispatchClosure, _state), 0);
    return type;
}

// public DispatchClosure(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> action, Uno.Net.Http.HttpMessageHandlerRequest arg) :342
void HttpMessageHandlerRequest__DispatchClosure__ctor__fn(HttpMessageHandlerRequest__DispatchClosure* __this, int* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg)
{
    __this->ctor_(*state, action, arg);
}

// public DispatchClosure New(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> action, Uno.Net.Http.HttpMessageHandlerRequest arg) :342
void HttpMessageHandlerRequest__DispatchClosure__New1_fn(int* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg, HttpMessageHandlerRequest__DispatchClosure** __retval)
{
    *__retval = HttpMessageHandlerRequest__DispatchClosure::New1(*state, action, arg);
}

// public void Run() :349
void HttpMessageHandlerRequest__DispatchClosure__Run_fn(HttpMessageHandlerRequest__DispatchClosure* __this)
{
    __this->Run();
}

// public DispatchClosure(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> action, Uno.Net.Http.HttpMessageHandlerRequest arg) [instance] :342
void HttpMessageHandlerRequest__DispatchClosure::ctor_(int state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure", ".ctor(Uno.Net.Http.HttpRequestState,Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>,Uno.Net.Http.HttpMessageHandlerRequest)");
    _action = action;
    _arg = arg;
    _state = state;
}

// public void Run() [instance] :349
void HttpMessageHandlerRequest__DispatchClosure::Run()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure", "Run()");

    if (uPtr(_arg)->IsComplete())
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New5(::STRINGS[1/*"Invalid sta...*/]));

    uPtr(_arg)->State(_state);
    uPtr(_action)->InvokeVoid(_arg);
    uPtr(_arg)->CompleteRequest();
}

// public DispatchClosure New(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> action, Uno.Net.Http.HttpMessageHandlerRequest arg) [static] :342
HttpMessageHandlerRequest__DispatchClosure* HttpMessageHandlerRequest__DispatchClosure::New1(int state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg)
{
    HttpMessageHandlerRequest__DispatchClosure* obj1 = (HttpMessageHandlerRequest__DispatchClosure*)uNew(HttpMessageHandlerRequest__DispatchClosure_typeof());
    obj1->ctor_(state, action, arg);
    return obj1;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Uno.Net.Http/0.24.3/$.uno(359)
// --------------------------------------------------------------------------------

// private sealed class HttpMessageHandlerRequest.DispatchClosure<TArg1> :359
// {
uType* HttpMessageHandlerRequest__DispatchClosure1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(HttpMessageHandlerRequest__DispatchClosure1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure`1", options);
    ::STRINGS[1] = uString::Const("Invalid state: The request has already completed.");
    ::TYPES[0] = ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof();
    ::TYPES[2] = ::g::Uno::Action2_typeof();
    type->SetPrecalc(
        ::TYPES[2/*Uno.Action`2*/]->MakeType(::TYPES[0/*Uno.Net.Http.HttpMessageHandlerRequest*/], type->T(0)));
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), type->T(0)), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest__DispatchClosure1, _action), 0,
        ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest__DispatchClosure1, _arg0), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Net::Http::HttpRequestState_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest__DispatchClosure1, _state), 0);
    return type;
}

// public DispatchClosure(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, TArg1> action, Uno.Net.Http.HttpMessageHandlerRequest arg0, TArg1 arg1) :366
void HttpMessageHandlerRequest__DispatchClosure1__ctor__fn(HttpMessageHandlerRequest__DispatchClosure1* __this, int* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg0, void* arg1)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure`1", ".ctor(Uno.Net.Http.HttpRequestState,Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, TArg1>,Uno.Net.Http.HttpMessageHandlerRequest,TArg1)");
    int state_ = *state;
    __this->_action = action;
    __this->_arg0 = arg0;
    __this->_arg1() = arg1;
    __this->_state = state_;
}

// public DispatchClosure New(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, TArg1> action, Uno.Net.Http.HttpMessageHandlerRequest arg0, TArg1 arg1) :366
void HttpMessageHandlerRequest__DispatchClosure1__New1_fn(uType* __type, int* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg0, void* arg1, HttpMessageHandlerRequest__DispatchClosure1** __retval)
{
    uType* __types[] = {
        __type->T(0),
    };
    int state_ = *state;
    HttpMessageHandlerRequest__DispatchClosure1* obj1 = (HttpMessageHandlerRequest__DispatchClosure1*)uNew(__type);
    HttpMessageHandlerRequest__DispatchClosure1__ctor__fn(obj1, uCRef<int>(state_), action, arg0, arg1);
    return *__retval = obj1, void();
}

// public void Run() :374
void HttpMessageHandlerRequest__DispatchClosure1__Run_fn(HttpMessageHandlerRequest__DispatchClosure1* __this)
{
    __this->Run();
}

// public void Run() [instance] :374
void HttpMessageHandlerRequest__DispatchClosure1::Run()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, TArg1>*/),
        __type->T(0),
    };
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure`1", "Run()");

    if (uPtr(_arg0)->IsComplete())
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New5(::STRINGS[1/*"Invalid sta...*/]));

    uPtr(_arg0)->State(_state);
    uPtr(_action)->Invoke(2, (::g::Uno::Net::Http::HttpMessageHandlerRequest*)_arg0, (void*)_arg1());
    uPtr(_arg0)->CompleteRequest();
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Uno.Net.Http/0.24.3/UriParsers/$.uno(32)
// ------------------------------------------------------------------------------------------

// public sealed class HashParser :32
// {
uType* HashParser_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(HashParser);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.HashParser", options);
    type->fp_ctor_ = (void*)HashParser__New1_fn;
    ::TYPES[3] = ::g::Uno::String_typeof();
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)HashParser__New1_fn, 0, true, HashParser_typeof(), 0),
        new uFunction("Parse", NULL, (void*)HashParser__Parse_fn, 0, true, ::g::Uno::String_typeof(), 3, ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()->ByRef()));
    return type;
}

// public generated HashParser() :32
void HashParser__ctor__fn(HashParser* __this)
{
    __this->ctor_();
}

// public generated HashParser New() :32
void HashParser__New1_fn(HashParser** __retval)
{
    *__retval = HashParser::New1();
}

// public static string Parse(string uriString, int idx, int& startPartIdx) :34
void HashParser__Parse_fn(uString* uriString, int* idx, int* startPartIdx, uString** __retval)
{
    *__retval = HashParser::Parse(uriString, *idx, startPartIdx);
}

// public generated HashParser() [instance] :32
void HashParser::ctor_()
{
}

// public generated HashParser New() [static] :32
HashParser* HashParser::New1()
{
    HashParser* obj1 = (HashParser*)uNew(HashParser_typeof());
    obj1->ctor_();
    return obj1;
}

// public static string Parse(string uriString, int idx, int& startPartIdx) [static] :34
uString* HashParser::Parse(uString* uriString, int idx, int* startPartIdx)
{
    uStackFrame __("Uno.Net.Http.HashParser", "Parse(string,int,int&)");

    if (idx >= uPtr(uriString)->Length())
        return ::g::Uno::String::Empty();

    int start = ::g::Uno::String::IndexOf(uPtr(uriString), '#', idx);

    if (start >= 0)
    {
        *startPartIdx = start;
        return ::g::Uno::String::Substring(uPtr(uriString), *startPartIdx);
    }

    return ::g::Uno::String::Empty();
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Uno.Net.Http/0.24.3/UriParsers/$.uno(60)
// ------------------------------------------------------------------------------------------

// public sealed class HostInfo :60
// {
uType* HostInfo_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(HostInfo);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.HostInfo", options);
    type->fp_ctor_ = (void*)HostInfo__New1_fn;
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::HostInfo, _Authority), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::HostInfo, _Host), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Net::Http::HostInfo, _Port), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Authority", NULL, (void*)HostInfo__get_Authority_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Authority", NULL, (void*)HostInfo__set_Authority_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Host", NULL, (void*)HostInfo__get_Host_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Host", NULL, (void*)HostInfo__set_Host_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)HostInfo__New1_fn, 0, true, HostInfo_typeof(), 0),
        new uFunction("get_Port", NULL, (void*)HostInfo__get_Port_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Port", NULL, (void*)HostInfo__set_Port_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()));
    return type;
}

// public generated HostInfo() :60
void HostInfo__ctor__fn(HostInfo* __this)
{
    __this->ctor_();
}

// public generated string get_Authority() :62
void HostInfo__get_Authority_fn(HostInfo* __this, uString** __retval)
{
    *__retval = __this->Authority();
}

// public generated void set_Authority(string value) :62
void HostInfo__set_Authority_fn(HostInfo* __this, uString* value)
{
    __this->Authority(value);
}

// public generated string get_Host() :64
void HostInfo__get_Host_fn(HostInfo* __this, uString** __retval)
{
    *__retval = __this->Host();
}

// public generated void set_Host(string value) :64
void HostInfo__set_Host_fn(HostInfo* __this, uString* value)
{
    __this->Host(value);
}

// public generated HostInfo New() :60
void HostInfo__New1_fn(HostInfo** __retval)
{
    *__retval = HostInfo::New1();
}

// public generated int get_Port() :66
void HostInfo__get_Port_fn(HostInfo* __this, int* __retval)
{
    *__retval = __this->Port();
}

// public generated void set_Port(int value) :66
void HostInfo__set_Port_fn(HostInfo* __this, int* value)
{
    __this->Port(*value);
}

// public generated HostInfo() [instance] :60
void HostInfo::ctor_()
{
}

// public generated string get_Authority() [instance] :62
uString* HostInfo::Authority()
{
    uStackFrame __("Uno.Net.Http.HostInfo", "get_Authority()");
    return _Authority;
}

// public generated void set_Authority(string value) [instance] :62
void HostInfo::Authority(uString* value)
{
    uStackFrame __("Uno.Net.Http.HostInfo", "set_Authority(string)");
    _Authority = value;
}

// public generated string get_Host() [instance] :64
uString* HostInfo::Host()
{
    uStackFrame __("Uno.Net.Http.HostInfo", "get_Host()");
    return _Host;
}

// public generated void set_Host(string value) [instance] :64
void HostInfo::Host(uString* value)
{
    uStackFrame __("Uno.Net.Http.HostInfo", "set_Host(string)");
    _Host = value;
}

// public generated int get_Port() [instance] :66
int HostInfo::Port()
{
    uStackFrame __("Uno.Net.Http.HostInfo", "get_Port()");
    return _Port;
}

// public generated void set_Port(int value) [instance] :66
void HostInfo::Port(int value)
{
    uStackFrame __("Uno.Net.Http.HostInfo", "set_Port(int)");
    _Port = value;
}

// public generated HostInfo New() [static] :60
HostInfo* HostInfo::New1()
{
    HostInfo* obj1 = (HostInfo*)uNew(HostInfo_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Uno.Net.Http/0.24.3/UriParsers/$.uno(69)
// ------------------------------------------------------------------------------------------

// public sealed class HostInfoParser :69
// {
// static HostInfoParser() :69
static void HostInfoParser__cctor__fn(uType* __type)
{
    ::g::Uno::Collections::List* collection1;
    HostInfoParser::_invalidChars_ = (collection1 = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<string>*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[2/*".."*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[3/*","*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[4/*"\\"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[5/*"|"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[6/*"<"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[7/*">"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[8/*"'"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[9/*";"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[10/*":"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[11/*"["*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[12/*"]"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[13/*"{"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[14/*"}"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[15/*"("*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[16/*")"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[17/*"="*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[18/*"+"*/]), collection1);
}

uType* HostInfoParser_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(HostInfoParser);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.HostInfoParser", options);
    type->fp_ctor_ = (void*)HostInfoParser__New1_fn;
    type->fp_cctor_ = HostInfoParser__cctor__fn;
    ::STRINGS[2] = uString::Const("..");
    ::STRINGS[3] = uString::Const(",");
    ::STRINGS[4] = uString::Const("\\");
    ::STRINGS[5] = uString::Const("|");
    ::STRINGS[6] = uString::Const("<");
    ::STRINGS[7] = uString::Const(">");
    ::STRINGS[8] = uString::Const("'");
    ::STRINGS[9] = uString::Const(";");
    ::STRINGS[10] = uString::Const(":");
    ::STRINGS[11] = uString::Const("[");
    ::STRINGS[12] = uString::Const("]");
    ::STRINGS[13] = uString::Const("{");
    ::STRINGS[14] = uString::Const("}");
    ::STRINGS[15] = uString::Const("(");
    ::STRINGS[16] = uString::Const(")");
    ::STRINGS[17] = uString::Const("=");
    ::STRINGS[18] = uString::Const("+");
    ::STRINGS[19] = uString::Const("The port number specified in uriString is not valid or cannot be parsed.");
    ::STRINGS[20] = uString::Const(".");
    ::STRINGS[21] = uString::Const("There is an invalid character sequence in uriString.");
    ::STRINGS[0] = uString::Const("/");
    ::STRINGS[22] = uString::Const("The host specified in uriString is not valid or cannot be parsed.");
    ::TYPES[4] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[6] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[7] = ::g::Uno::Net::Http::UriScheme_typeof();
    ::TYPES[8] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[9] = ::g::Uno::Net::Http::HostInfo_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof()), (uintptr_t)&::g::Uno::Net::Http::HostInfoParser::_invalidChars_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)HostInfoParser__New1_fn, 0, true, HostInfoParser_typeof(), 0),
        new uFunction("Parse", NULL, (void*)HostInfoParser__Parse_fn, 0, true, ::g::Uno::Net::Http::HostInfo_typeof(), 4, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()->ByRef()));
    return type;
}

// public generated HostInfoParser() :69
void HostInfoParser__ctor__fn(HostInfoParser* __this)
{
    __this->ctor_();
}

// private static int ExtractPort(string portString, int defaultPort) :129
void HostInfoParser__ExtractPort_fn(uString* portString, int* defaultPort, int* __retval)
{
    *__retval = HostInfoParser::ExtractPort(portString, *defaultPort);
}

// private static int GetDafaultPort(string scheme) :147
void HostInfoParser__GetDafaultPort_fn(uString* scheme, int* __retval)
{
    *__retval = HostInfoParser::GetDafaultPort(scheme);
}

// private static bool IsHostValid(string userInfo) :118
void HostInfoParser__IsHostValid_fn(uString* userInfo, bool* __retval)
{
    *__retval = HostInfoParser::IsHostValid(userInfo);
}

// public generated HostInfoParser New() :69
void HostInfoParser__New1_fn(HostInfoParser** __retval)
{
    *__retval = HostInfoParser::New1();
}

// public static Uno.Net.Http.HostInfo Parse(string uriString, string scheme, int endIdx, int& idx) :73
void HostInfoParser__Parse_fn(uString* uriString, uString* scheme, int* endIdx, int* idx, ::g::Uno::Net::Http::HostInfo** __retval)
{
    *__retval = HostInfoParser::Parse(uriString, scheme, *endIdx, idx);
}

uSStrong< ::g::Uno::Collections::List*> HostInfoParser::_invalidChars_;

// public generated HostInfoParser() [instance] :69
void HostInfoParser::ctor_()
{
}

// private static int ExtractPort(string portString, int defaultPort) [static] :129
int HostInfoParser::ExtractPort(uString* portString, int defaultPort)
{
    uStackFrame __("Uno.Net.Http.HostInfoParser", "ExtractPort(string,int)");
    HostInfoParser_typeof()->Init();
    int port = 0;

    if (::g::Uno::String::IsNullOrEmpty(portString))
        port = defaultPort;
    else
    {
        if (!::g::Uno::Int::TryParse(portString, &port))
            U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[19/*"The port nu...*/]));
    }

    return port;
}

// private static int GetDafaultPort(string scheme) [static] :147
int HostInfoParser::GetDafaultPort(uString* scheme)
{
    uStackFrame __("Uno.Net.Http.HostInfoParser", "GetDafaultPort(string)");
    HostInfoParser_typeof()->Init();
    int ret5;
    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(::g::Uno::Net::Http::UriScheme::DefaultPorts()), ::g::Uno::String::ToLower(uPtr(scheme)), &ret5), ret5);
}

// private static bool IsHostValid(string userInfo) [static] :118
bool HostInfoParser::IsHostValid(uString* userInfo)
{
    uStackFrame __("Uno.Net.Http.HostInfoParser", "IsHostValid(string)");
    HostInfoParser_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > ret6;

    for (::g::Uno::Collections::List__Enumerator<uStrong<uString*> > enum3 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(HostInfoParser::_invalidChars()), &ret6), ret6); enum3.MoveNext(::TYPES[8/*Uno.Collections.List<string>.Enumerator*/]); )
    {
        uString* chars = enum3.Current(::TYPES[8/*Uno.Collections.List<string>.Enumerator*/]);

        if (::g::Uno::String::IndexOf1(uPtr(userInfo), chars, 0) >= 0)
            return false;
    }

    return !::g::Uno::String::StartsWith(uPtr(userInfo), ::STRINGS[20/*"."*/]);
}

// public generated HostInfoParser New() [static] :69
HostInfoParser* HostInfoParser::New1()
{
    HostInfoParser* obj4 = (HostInfoParser*)uNew(HostInfoParser_typeof());
    obj4->ctor_();
    return obj4;
}

// public static Uno.Net.Http.HostInfo Parse(string uriString, string scheme, int endIdx, int& idx) [static] :73
::g::Uno::Net::Http::HostInfo* HostInfoParser::Parse(uString* uriString, uString* scheme, int endIdx, int* idx)
{
    uStackFrame __("Uno.Net.Http.HostInfoParser", "Parse(string,string,int,int&)");
    HostInfoParser_typeof()->Init();
    ::g::Uno::Net::Http::HostInfo* collection2;

    if (*idx >= endIdx)
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[21/*"There is an...*/]));

    int end = ::g::Uno::String::IndexOf1(uPtr(uriString), ::STRINGS[0/*"/"*/], *idx);

    if ((end < 0) || (end >= endIdx))
        end = endIdx;

    uString* hostInfoString = ::g::Uno::String::Substring1(uriString, *idx, end - *idx);
    *idx = end;

    if (::g::Uno::String::IsNullOrEmpty(hostInfoString))
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[22/*"The host sp...*/]));

    int delim = ::g::Uno::String::IndexOf1(uPtr(hostInfoString), ::STRINGS[10/*":"*/], 0);
    collection2 = ::g::Uno::Net::Http::HostInfo::New1();
    uPtr(collection2)->Authority(hostInfoString);
    hostInfoString;
    ::g::Uno::Net::Http::HostInfo* hostInfo = collection2;

    if (delim > 0)
    {
        uString* portString = ::g::Uno::String::Substring(uPtr(hostInfoString), delim + 1);
        uPtr(hostInfo)->Host(::g::Uno::String::Substring1(hostInfoString, 0, delim));
        hostInfo->Port(HostInfoParser::ExtractPort(portString, HostInfoParser::GetDafaultPort(scheme)));
    }
    else
    {
        uPtr(hostInfo)->Host(hostInfoString);
        hostInfo->Port(HostInfoParser::GetDafaultPort(scheme));
    }

    if (!HostInfoParser::IsHostValid(uPtr(hostInfo)->Host()))
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[22/*"The host sp...*/]));

    return hostInfo;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Uno.Net.Http/0.24.3/$.uno(849)
// --------------------------------------------------------------------------------

// internal sealed class HttpDefaultDispatcher :849
// {
HttpDefaultDispatcher_type* HttpDefaultDispatcher_typeof()
{
    static uSStrong<HttpDefaultDispatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(HttpDefaultDispatcher);
    options.TypeSize = sizeof(HttpDefaultDispatcher_type);
    type = (HttpDefaultDispatcher_type*)uClassType::New("Uno.Net.Http.HttpDefaultDispatcher", options);
    type->fp_ctor_ = (void*)HttpDefaultDispatcher__New1_fn;
    type->interface0.fp_Invoke = (void(*)(uObject*, uDelegate*))HttpDefaultDispatcher__Invoke_fn;
    ::TYPES[10] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(HttpDefaultDispatcher_type, interface0));
    return type;
}

// public HttpDefaultDispatcher() :851
void HttpDefaultDispatcher__ctor__fn(HttpDefaultDispatcher* __this)
{
    __this->ctor_();
}

// public void Invoke(Uno.Action action) :856
void HttpDefaultDispatcher__Invoke_fn(HttpDefaultDispatcher* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public HttpDefaultDispatcher New() :851
void HttpDefaultDispatcher__New1_fn(HttpDefaultDispatcher** __retval)
{
    *__retval = HttpDefaultDispatcher::New1();
}

// public HttpDefaultDispatcher() [instance] :851
void HttpDefaultDispatcher::ctor_()
{
}

// public void Invoke(Uno.Action action) [instance] :856
void HttpDefaultDispatcher::Invoke(uDelegate* action)
{
    uStackFrame __("Uno.Net.Http.HttpDefaultDispatcher", "Invoke(Uno.Action)");
    uPtr(action)->InvokeVoid();
}

// public HttpDefaultDispatcher New() [static] :851
HttpDefaultDispatcher* HttpDefaultDispatcher::New1()
{
    HttpDefaultDispatcher* obj1 = (HttpDefaultDispatcher*)uNew(HttpDefaultDispatcher_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Uno.Net.Http/0.24.3/$.uno(5)
// ------------------------------------------------------------------------------

// public static class HttpMessageCache :5
// {
// static HttpMessageCache() :36
static void HttpMessageCache__cctor__fn(uType* __type)
{
    ::g::Uno::Platform2::Application::add_Started(uDelegate::New(::TYPES[12/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)HttpMessageCache__OnApplicationStarted_fn));
}

uClassType* HttpMessageCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Net.Http.HttpMessageCache", options);
    type->fp_cctor_ = HttpMessageCache__cctor__fn;
    ::STRINGS[23] = uString::Const("Uno.Net.Http.HttpMessageCache: Changes to IsCacheEnabled are ignored after initialization.");
    ::STRINGS[24] = uString::Const("/usr/local/share/uno/Packages/Uno.Net.Http/0.24.3/$.uno");
    ::STRINGS[25] = uString::Const("Uno.Net.Http.HttpMessageCache: Changes to MaxCacheSizeInBytes are ignored after initialization.");
    ::TYPES[11] = ::g::Uno::Platform2::Application_typeof();
    ::TYPES[12] = ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof();
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Uno::Net::Http::HttpMessageCache::_isCacheDisabled_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Uno::Net::Http::HttpMessageCache::_isInitialized_, uFieldFlagsStatic,
        ::g::Uno::Long_typeof(), (uintptr_t)&::g::Uno::Net::Http::HttpMessageCache::_maxCacheSizeInBytes_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(5,
        new uFunction("Init", NULL, (void*)HttpMessageCache__Init_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("get_IsCacheEnabled", NULL, (void*)HttpMessageCache__get_IsCacheEnabled_fn, 0, true, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsCacheEnabled", NULL, (void*)HttpMessageCache__set_IsCacheEnabled_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_MaxCacheSizeInBytes", NULL, (void*)HttpMessageCache__get_MaxCacheSizeInBytes_fn, 0, true, ::g::Uno::Long_typeof(), 0),
        new uFunction("set_MaxCacheSizeInBytes", NULL, (void*)HttpMessageCache__set_MaxCacheSizeInBytes_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Long_typeof()));
    return type;
}

// public static void Init() :47
void HttpMessageCache__Init_fn()
{
    HttpMessageCache::Init();
}

// public static bool get_IsCacheEnabled() :13
void HttpMessageCache__get_IsCacheEnabled_fn(bool* __retval)
{
    *__retval = HttpMessageCache::IsCacheEnabled();
}

// public static void set_IsCacheEnabled(bool value) :14
void HttpMessageCache__set_IsCacheEnabled_fn(bool* value)
{
    HttpMessageCache::IsCacheEnabled(*value);
}

// public static long get_MaxCacheSizeInBytes() :26
void HttpMessageCache__get_MaxCacheSizeInBytes_fn(int64_t* __retval)
{
    *__retval = HttpMessageCache::MaxCacheSizeInBytes();
}

// public static void set_MaxCacheSizeInBytes(long value) :27
void HttpMessageCache__set_MaxCacheSizeInBytes_fn(int64_t* value)
{
    HttpMessageCache::MaxCacheSizeInBytes(*value);
}

// private static void OnApplicationStarted(Uno.Platform2.ApplicationState state) :42
void HttpMessageCache__OnApplicationStarted_fn(int* state)
{
    HttpMessageCache::OnApplicationStarted(*state);
}

bool HttpMessageCache::_isCacheDisabled_;
bool HttpMessageCache::_isInitialized_;
int64_t HttpMessageCache::_maxCacheSizeInBytes_;

// public static void Init() [static] :47
void HttpMessageCache::Init()
{
    uStackFrame __("Uno.Net.Http.HttpMessageCache", "Init()");
    HttpMessageCache_typeof()->Init();

    if (HttpMessageCache::_isInitialized())
        return;

    HttpMessageCache::_isInitialized() = true;
    ::g::Uno::Platform2::Application::remove_Started(uDelegate::New(::TYPES[12/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)HttpMessageCache__OnApplicationStarted_fn));
    ::g::Uno::Net::Http::Implementation::iOSHttpSharedCache::SetupSharedCache(HttpMessageCache::IsCacheEnabled(), HttpMessageCache::MaxCacheSizeInBytes());
}

// private static void OnApplicationStarted(Uno.Platform2.ApplicationState state) [static] :42
void HttpMessageCache::OnApplicationStarted(int state)
{
    uStackFrame __("Uno.Net.Http.HttpMessageCache", "OnApplicationStarted(Uno.Platform2.ApplicationState)");
    HttpMessageCache_typeof()->Init();
    HttpMessageCache::Init();
}

// public static bool get_IsCacheEnabled() [static] :13
bool HttpMessageCache::IsCacheEnabled()
{
    uStackFrame __("Uno.Net.Http.HttpMessageCache", "get_IsCacheEnabled()");
    HttpMessageCache_typeof()->Init();
    return !HttpMessageCache::_isCacheDisabled();
}

// public static void set_IsCacheEnabled(bool value) [static] :14
void HttpMessageCache::IsCacheEnabled(bool value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageCache", "set_IsCacheEnabled(bool)");
    HttpMessageCache_typeof()->Init();

    if (HttpMessageCache::_isInitialized())
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[23/*"Uno.Net.Htt...*/], 1, ::STRINGS[24/*"/usr/local/...*/], 17);
    else
        HttpMessageCache::_isCacheDisabled() = !value;
}

// public static long get_MaxCacheSizeInBytes() [static] :26
int64_t HttpMessageCache::MaxCacheSizeInBytes()
{
    uStackFrame __("Uno.Net.Http.HttpMessageCache", "get_MaxCacheSizeInBytes()");
    HttpMessageCache_typeof()->Init();
    return HttpMessageCache::_maxCacheSizeInBytes();
}

// public static void set_MaxCacheSizeInBytes(long value) [static] :27
void HttpMessageCache::MaxCacheSizeInBytes(int64_t value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageCache", "set_MaxCacheSizeInBytes(long)");
    HttpMessageCache_typeof()->Init();

    if (HttpMessageCache::_isInitialized())
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[25/*"Uno.Net.Htt...*/], 1, ::STRINGS[24/*"/usr/local/...*/], 30);
    else
        HttpMessageCache::_maxCacheSizeInBytes() = value;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Uno.Net.Http/0.24.3/$.uno(92)
// -------------------------------------------------------------------------------

// public sealed class HttpMessageHandler :92
// {
HttpMessageHandler_type* HttpMessageHandler_typeof()
{
    static uSStrong<HttpMessageHandler_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(HttpMessageHandler);
    options.TypeSize = sizeof(HttpMessageHandler_type);
    type = (HttpMessageHandler_type*)uClassType::New("Uno.Net.Http.HttpMessageHandler", options);
    type->fp_ctor_ = (void*)HttpMessageHandler__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))HttpMessageHandler__Dispose_fn;
    ::TYPES[13] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof());
    ::TYPES[14] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[15] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(HttpMessageHandler_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandler, _defaultDispatcher), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof()), offsetof(::g::Uno::Net::Http::HttpMessageHandler, _pendingRequests), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("AbortPendingRequests", NULL, (void*)HttpMessageHandler__AbortPendingRequests_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("CreateRequest", NULL, (void*)HttpMessageHandler__CreateRequest_fn, 0, false, ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("CreateRequest", NULL, (void*)HttpMessageHandler__CreateRequest1_fn, 0, false, ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), 3, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Threading::IDispatcher_typeof()),
        new uFunction("Dispose", NULL, (void*)HttpMessageHandler__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)HttpMessageHandler__New1_fn, 0, true, HttpMessageHandler_typeof(), 0));
    return type;
}

// public HttpMessageHandler() :124
void HttpMessageHandler__ctor__fn(HttpMessageHandler* __this)
{
    __this->ctor_();
}

// public void AbortPendingRequests() :144
void HttpMessageHandler__AbortPendingRequests_fn(HttpMessageHandler* __this)
{
    __this->AbortPendingRequests();
}

// internal void CompleteRequest(Uno.Net.Http.HttpMessageHandlerRequest request) :175
void HttpMessageHandler__CompleteRequest_fn(HttpMessageHandler* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request)
{
    __this->CompleteRequest(request);
}

// public Uno.Net.Http.HttpMessageHandlerRequest CreateRequest(string method, string url) :151
void HttpMessageHandler__CreateRequest_fn(HttpMessageHandler* __this, uString* method, uString* url, ::g::Uno::Net::Http::HttpMessageHandlerRequest** __retval)
{
    *__retval = __this->CreateRequest(method, url);
}

// public Uno.Net.Http.HttpMessageHandlerRequest CreateRequest(string method, string url, Uno.Threading.IDispatcher dispatcher) :156
void HttpMessageHandler__CreateRequest1_fn(HttpMessageHandler* __this, uString* method, uString* url, uObject* dispatcher, ::g::Uno::Net::Http::HttpMessageHandlerRequest** __retval)
{
    *__retval = __this->CreateRequest1(method, url, dispatcher);
}

// public void Dispose() :135
void HttpMessageHandler__Dispose_fn(HttpMessageHandler* __this)
{
    __this->Dispose();
}

// public HttpMessageHandler New() :124
void HttpMessageHandler__New1_fn(HttpMessageHandler** __retval)
{
    *__retval = HttpMessageHandler::New1();
}

// public HttpMessageHandler() [instance] :124
void HttpMessageHandler::ctor_()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandler", ".ctor()");
    ::g::Uno::Net::Http::HttpMessageCache::Init();
    _pendingRequests = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[13/*Uno.Collections.List<Uno.Net.Http.HttpMessageHandlerRequest>*/]));
    _defaultDispatcher = (uObject*)::g::Uno::Net::Http::HttpDefaultDispatcher::New1();
}

// public void AbortPendingRequests() [instance] :144
void HttpMessageHandler::AbortPendingRequests()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandler", "AbortPendingRequests()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Net::Http::HttpMessageHandlerRequest*> > ret4;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Net::Http::HttpMessageHandlerRequest*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_pendingRequests), &ret4), ret4); enum2.MoveNext(::TYPES[15/*Uno.Collections.List<Uno.Net.Http.HttpMessageHandlerRequest>.Enumerator*/]); )
    {
        ::g::Uno::Net::Http::HttpMessageHandlerRequest* request = enum2.Current(::TYPES[15/*Uno.Collections.List<Uno.Net.Http.HttpMessageHandlerRequest>.Enumerator*/]);

        if (request != NULL)
            uPtr(request)->Abort();
    }
}

// internal void CompleteRequest(Uno.Net.Http.HttpMessageHandlerRequest request) [instance] :175
void HttpMessageHandler::CompleteRequest(::g::Uno::Net::Http::HttpMessageHandlerRequest* request)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandler", "CompleteRequest(Uno.Net.Http.HttpMessageHandlerRequest)");
    ::g::Uno::Net::Http::HttpMessageHandlerRequest* ret5;

    for (int i = 0; i < uPtr(_pendingRequests)->Count(); ++i)
        if ((::g::Uno::Collections::List__get_Item_fn(uPtr(_pendingRequests), uCRef<int>(i), &ret5), ret5) == request)
        {
            ::g::Uno::Collections::List__set_Item_fn(uPtr(_pendingRequests), uCRef<int>(i), NULL);
            HttpMessageHandler__StaticData::DecrementPendingRequests();
            break;
        }
}

// public Uno.Net.Http.HttpMessageHandlerRequest CreateRequest(string method, string url) [instance] :151
::g::Uno::Net::Http::HttpMessageHandlerRequest* HttpMessageHandler::CreateRequest(uString* method, uString* url)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandler", "CreateRequest(string,string)");
    return CreateRequest1(method, url, _defaultDispatcher);
}

// public Uno.Net.Http.HttpMessageHandlerRequest CreateRequest(string method, string url, Uno.Threading.IDispatcher dispatcher) [instance] :156
::g::Uno::Net::Http::HttpMessageHandlerRequest* HttpMessageHandler::CreateRequest1(uString* method, uString* url, uObject* dispatcher)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandler", "CreateRequest(string,string,Uno.Threading.IDispatcher)");
    ::g::Uno::Net::Http::HttpMessageHandlerRequest* ret6;
    HttpMessageHandler__StaticData::IncrementPendingRequests();
    ::g::Uno::Net::Http::HttpMessageHandlerRequest* request = ::g::Uno::Net::Http::HttpMessageHandlerRequest::New1(this, method, url, dispatcher);

    for (int i = 0; i < uPtr(_pendingRequests)->Count(); ++i)
        if ((::g::Uno::Collections::List__get_Item_fn(uPtr(_pendingRequests), uCRef<int>(i), &ret6), ret6) == NULL)
        {
            ::g::Uno::Collections::List__set_Item_fn(uPtr(_pendingRequests), uCRef<int>(i), request);
            return request;
        }

    ::g::Uno::Collections::List__Add_fn(uPtr(_pendingRequests), request);
    return request;
}

// public void Dispose() [instance] :135
void HttpMessageHandler::Dispose()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandler", "Dispose()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Net::Http::HttpMessageHandlerRequest*> > ret7;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Net::Http::HttpMessageHandlerRequest*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_pendingRequests), &ret7), ret7); enum1.MoveNext(::TYPES[15/*Uno.Collections.List<Uno.Net.Http.HttpMessageHandlerRequest>.Enumerator*/]); )
    {
        ::g::Uno::Net::Http::HttpMessageHandlerRequest* request = enum1.Current(::TYPES[15/*Uno.Collections.List<Uno.Net.Http.HttpMessageHandlerRequest>.Enumerator*/]);

        if (request != NULL)
            uPtr(request)->Dispose();
    }

    _pendingRequests = NULL;
}

// public HttpMessageHandler New() [static] :124
HttpMessageHandler* HttpMessageHandler::New1()
{
    HttpMessageHandler* obj3 = (HttpMessageHandler*)uNew(HttpMessageHandler_typeof());
    obj3->ctor_();
    return obj3;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Uno.Net.Http/0.24.3/$.uno(202)
// --------------------------------------------------------------------------------

// public sealed class HttpMessageHandlerRequest :202
// {
//  ~HttpMessageHandlerRequest() :263
static void HttpMessageHandlerRequest__Finalize_fn(HttpMessageHandlerRequest* __this)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "Finalize()");

    if (__this->_httpRequest == NULL)
        return;

    __this->Dispose();
}

HttpMessageHandlerRequest_type* HttpMessageHandlerRequest_typeof()
{
    static uSStrong<HttpMessageHandlerRequest_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(HttpMessageHandlerRequest);
    options.TypeSize = sizeof(HttpMessageHandlerRequest_type);
    type = (HttpMessageHandlerRequest_type*)uClassType::New("Uno.Net.Http.HttpMessageHandlerRequest", options);
    type->fp_Finalize = (void(*)(uObject*))HttpMessageHandlerRequest__Finalize_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))HttpMessageHandlerRequest__Dispose_fn;
    ::STRINGS[26] = uString::Const("handler");
    ::STRINGS[27] = uString::Const("method");
    ::STRINGS[28] = uString::Const("url");
    ::STRINGS[29] = uString::Const("dispatcher");
    ::STRINGS[30] = uString::Const("DELETE");
    ::STRINGS[31] = uString::Const("GET");
    ::STRINGS[32] = uString::Const("HEAD");
    ::STRINGS[33] = uString::Const("POST");
    ::STRINGS[34] = uString::Const("PUT");
    ::STRINGS[35] = uString::Const("OPTIONS");
    ::STRINGS[36] = uString::Const("HTTP method not supported.");
    ::STRINGS[37] = uString::Const("HttpMessageHandlerRequest");
    ::STRINGS[38] = uString::Const("");
    ::STRINGS[39] = uString::Const("Not allowed to set header \"");
    ::STRINGS[40] = uString::Const("\" on this target.");
    ::TYPES[16] = ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof();
    ::TYPES[17] = ::g::Uno::Int_typeof();
    ::TYPES[18] = uObject_typeof();
    ::TYPES[19] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[20] = ::g::Uno::Delegate_typeof();
    ::TYPES[10] = ::g::Uno::Action_typeof();
    ::TYPES[21] = HttpMessageHandlerRequest__DispatchClosure1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(HttpMessageHandlerRequest_typeof());
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[22] = ::g::Uno::Action2_typeof()->MakeType(HttpMessageHandlerRequest_typeof(), ::g::Uno::String_typeof());
    ::TYPES[23] = ::g::Uno::Action4_typeof()->MakeType(HttpMessageHandlerRequest_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(HttpMessageHandlerRequest_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, _dispatcher), 0,
        ::g::Uno::Net::Http::HttpMessageHandler_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, _httpMessageHandler), 0,
        ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, _httpRequest), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, _method), 0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, _optionalPayloadCache), 0,
        ::g::Uno::Net::Http::HttpResponseType_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, _responseType), 0,
        ::g::Uno::Net::Http::HttpRequestState_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, _state), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, _url), 0,
        ::g::Uno::Action1_typeof()->MakeType(HttpMessageHandlerRequest_typeof()), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, Aborted1), 0,
        ::g::Uno::Action1_typeof()->MakeType(HttpMessageHandlerRequest_typeof()), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, Done1), 0,
        ::g::Uno::Action2_typeof()->MakeType(HttpMessageHandlerRequest_typeof(), ::g::Uno::String_typeof()), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, Error1), 0,
        ::g::Uno::Action4_typeof()->MakeType(HttpMessageHandlerRequest_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof()), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, Progress1), 0,
        ::g::Uno::Action1_typeof()->MakeType(HttpMessageHandlerRequest_typeof()), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, StateChanged1), 0,
        ::g::Uno::Action1_typeof()->MakeType(HttpMessageHandlerRequest_typeof()), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, Timeout1), 0);
    type->Reflection.SetFunctions(29,
        new uFunction("Abort", NULL, (void*)HttpMessageHandlerRequest__Abort_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("add_Aborted", NULL, (void*)HttpMessageHandlerRequest__add_Aborted_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(HttpMessageHandlerRequest_typeof())),
        new uFunction("remove_Aborted", NULL, (void*)HttpMessageHandlerRequest__remove_Aborted_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(HttpMessageHandlerRequest_typeof())),
        new uFunction("Dispose", NULL, (void*)HttpMessageHandlerRequest__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("add_Done", NULL, (void*)HttpMessageHandlerRequest__add_Done_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(HttpMessageHandlerRequest_typeof())),
        new uFunction("remove_Done", NULL, (void*)HttpMessageHandlerRequest__remove_Done_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(HttpMessageHandlerRequest_typeof())),
        new uFunction("add_Error", NULL, (void*)HttpMessageHandlerRequest__add_Error_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action2_typeof()->MakeType(HttpMessageHandlerRequest_typeof(), ::g::Uno::String_typeof())),
        new uFunction("remove_Error", NULL, (void*)HttpMessageHandlerRequest__remove_Error_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action2_typeof()->MakeType(HttpMessageHandlerRequest_typeof(), ::g::Uno::String_typeof())),
        new uFunction("GetResponseContentByteArray", NULL, (void*)HttpMessageHandlerRequest__GetResponseContentByteArray_fn, 0, false, ::g::Uno::Byte_typeof()->Array(), 0),
        new uFunction("GetResponseContentString", NULL, (void*)HttpMessageHandlerRequest__GetResponseContentString_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("GetResponseHeader", NULL, (void*)HttpMessageHandlerRequest__GetResponseHeader_fn, 0, false, ::g::Uno::String_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("GetResponseHeaders", NULL, (void*)HttpMessageHandlerRequest__GetResponseHeaders_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("GetResponseStatus", NULL, (void*)HttpMessageHandlerRequest__GetResponseStatus_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_HttpResponseType", NULL, (void*)HttpMessageHandlerRequest__get_HttpResponseType_fn, 0, false, ::g::Uno::Net::Http::HttpResponseType_typeof(), 0),
        new uFunction("set_HttpResponseType", NULL, (void*)HttpMessageHandlerRequest__set_HttpResponseType_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Net::Http::HttpResponseType_typeof()),
        new uFunction("get_Method", NULL, (void*)HttpMessageHandlerRequest__get_Method_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("add_Progress", NULL, (void*)HttpMessageHandlerRequest__add_Progress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action4_typeof()->MakeType(HttpMessageHandlerRequest_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof())),
        new uFunction("remove_Progress", NULL, (void*)HttpMessageHandlerRequest__remove_Progress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action4_typeof()->MakeType(HttpMessageHandlerRequest_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof())),
        new uFunction("SendAsync", NULL, (void*)HttpMessageHandlerRequest__SendAsync_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("SendAsync", NULL, (void*)HttpMessageHandlerRequest__SendAsync2_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("SetHeader", NULL, (void*)HttpMessageHandlerRequest__SetHeader_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("SetResponseType", NULL, (void*)HttpMessageHandlerRequest__SetResponseType_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Net::Http::HttpResponseType_typeof()),
        new uFunction("SetTimeout", NULL, (void*)HttpMessageHandlerRequest__SetTimeout_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_State", NULL, (void*)HttpMessageHandlerRequest__get_State_fn, 0, false, ::g::Uno::Net::Http::HttpRequestState_typeof(), 0),
        new uFunction("add_StateChanged", NULL, (void*)HttpMessageHandlerRequest__add_StateChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(HttpMessageHandlerRequest_typeof())),
        new uFunction("remove_StateChanged", NULL, (void*)HttpMessageHandlerRequest__remove_StateChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(HttpMessageHandlerRequest_typeof())),
        new uFunction("add_Timeout", NULL, (void*)HttpMessageHandlerRequest__add_Timeout_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(HttpMessageHandlerRequest_typeof())),
        new uFunction("remove_Timeout", NULL, (void*)HttpMessageHandlerRequest__remove_Timeout_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(HttpMessageHandlerRequest_typeof())),
        new uFunction("get_Url", NULL, (void*)HttpMessageHandlerRequest__get_Url_fn, 0, false, ::g::Uno::String_typeof(), 0));
    return type;
}

// internal HttpMessageHandlerRequest(Uno.Net.Http.HttpMessageHandler handler, string method, string url, Uno.Threading.IDispatcher dispatcher) :216
void HttpMessageHandlerRequest__ctor__fn(HttpMessageHandlerRequest* __this, ::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher)
{
    __this->ctor_(handler, method, url, dispatcher);
}

// public void Abort() :570
void HttpMessageHandlerRequest__Abort_fn(HttpMessageHandlerRequest* __this)
{
    __this->Abort();
}

// public generated void add_Aborted(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :329
void HttpMessageHandlerRequest__add_Aborted_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_Aborted(value);
}

// public generated void remove_Aborted(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :329
void HttpMessageHandlerRequest__remove_Aborted_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_Aborted(value);
}

// private void CheckDisposed() :271
void HttpMessageHandlerRequest__CheckDisposed_fn(HttpMessageHandlerRequest* __this)
{
    __this->CheckDisposed();
}

// internal void CompleteRequest() :288
void HttpMessageHandlerRequest__CompleteRequest_fn(HttpMessageHandlerRequest* __this)
{
    __this->CompleteRequest();
}

// public void Dispose() :277
void HttpMessageHandlerRequest__Dispose_fn(HttpMessageHandlerRequest* __this)
{
    __this->Dispose();
}

// public generated void add_Done(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :332
void HttpMessageHandlerRequest__add_Done_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_Done(value);
}

// public generated void remove_Done(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :332
void HttpMessageHandlerRequest__remove_Done_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_Done(value);
}

// public generated void add_Error(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string> value) :330
void HttpMessageHandlerRequest__add_Error_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_Error(value);
}

// public generated void remove_Error(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string> value) :330
void HttpMessageHandlerRequest__remove_Error_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_Error(value);
}

// public byte[] GetResponseContentByteArray() :632
void HttpMessageHandlerRequest__GetResponseContentByteArray_fn(HttpMessageHandlerRequest* __this, uArray** __retval)
{
    *__retval = __this->GetResponseContentByteArray();
}

// public string GetResponseContentString() :618
void HttpMessageHandlerRequest__GetResponseContentString_fn(HttpMessageHandlerRequest* __this, uString** __retval)
{
    *__retval = __this->GetResponseContentString();
}

// public string GetResponseHeader(string name) :595
void HttpMessageHandlerRequest__GetResponseHeader_fn(HttpMessageHandlerRequest* __this, uString* name, uString** __retval)
{
    *__retval = __this->GetResponseHeader(name);
}

// public string GetResponseHeaders() :606
void HttpMessageHandlerRequest__GetResponseHeaders_fn(HttpMessageHandlerRequest* __this, uString** __retval)
{
    *__retval = __this->GetResponseHeaders();
}

// public int GetResponseStatus() :584
void HttpMessageHandlerRequest__GetResponseStatus_fn(HttpMessageHandlerRequest* __this, int* __retval)
{
    *__retval = __this->GetResponseStatus();
}

// public Uno.Net.Http.HttpResponseType get_HttpResponseType() :299
void HttpMessageHandlerRequest__get_HttpResponseType_fn(HttpMessageHandlerRequest* __this, int* __retval)
{
    *__retval = __this->HttpResponseType();
}

// public void set_HttpResponseType(Uno.Net.Http.HttpResponseType value) :300
void HttpMessageHandlerRequest__set_HttpResponseType_fn(HttpMessageHandlerRequest* __this, int* value)
{
    __this->HttpResponseType(*value);
}

// private bool IsComplete() :412
void HttpMessageHandlerRequest__IsComplete_fn(HttpMessageHandlerRequest* __this, bool* __retval)
{
    *__retval = __this->IsComplete();
}

// private static bool IsHeaderValid(string name, string value) :647
void HttpMessageHandlerRequest__IsHeaderValid_fn(uString* name, uString* value, bool* __retval)
{
    *__retval = HttpMessageHandlerRequest::IsHeaderValid(name, value);
}

// public string get_Method() :294
void HttpMessageHandlerRequest__get_Method_fn(HttpMessageHandlerRequest* __this, uString** __retval)
{
    *__retval = __this->Method();
}

// internal HttpMessageHandlerRequest New(Uno.Net.Http.HttpMessageHandler handler, string method, string url, Uno.Threading.IDispatcher dispatcher) :216
void HttpMessageHandlerRequest__New1_fn(::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher, HttpMessageHandlerRequest** __retval)
{
    *__retval = HttpMessageHandlerRequest::New1(handler, method, url, dispatcher);
}

// internal void OnAborted() :417
void HttpMessageHandlerRequest__OnAborted_fn(HttpMessageHandlerRequest* __this)
{
    __this->OnAborted();
}

// internal void OnDone() :438
void HttpMessageHandlerRequest__OnDone_fn(HttpMessageHandlerRequest* __this)
{
    __this->OnDone();
}

// internal void OnError(string platformspesificErrorMessage) :424
void HttpMessageHandlerRequest__OnError_fn(HttpMessageHandlerRequest* __this, uString* platformspesificErrorMessage)
{
    __this->OnError(platformspesificErrorMessage);
}

// internal void OnStateChanged() :316
void HttpMessageHandlerRequest__OnStateChanged_fn(HttpMessageHandlerRequest* __this)
{
    __this->OnStateChanged();
}

// internal void OnTimeout() :431
void HttpMessageHandlerRequest__OnTimeout_fn(HttpMessageHandlerRequest* __this)
{
    __this->OnTimeout();
}

// public generated void add_Progress(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> value) :334
void HttpMessageHandlerRequest__add_Progress_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_Progress(value);
}

// public generated void remove_Progress(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> value) :334
void HttpMessageHandlerRequest__remove_Progress_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_Progress(value);
}

// public void SendAsync() :557
void HttpMessageHandlerRequest__SendAsync_fn(HttpMessageHandlerRequest* __this)
{
    __this->SendAsync();
}

// public void SendAsync(string data) :539
void HttpMessageHandlerRequest__SendAsync2_fn(HttpMessageHandlerRequest* __this, uString* data)
{
    __this->SendAsync2(data);
}

// public void SetHeader(string name, string value) :473
void HttpMessageHandlerRequest__SetHeader_fn(HttpMessageHandlerRequest* __this, uString* name, uString* value)
{
    __this->SetHeader(name, value);
}

// public void SetResponseType(Uno.Net.Http.HttpResponseType responseType) :496
void HttpMessageHandlerRequest__SetResponseType_fn(HttpMessageHandlerRequest* __this, int* responseType)
{
    __this->SetResponseType(*responseType);
}

// public void SetTimeout(int timeoutInMilliseconds) :486
void HttpMessageHandlerRequest__SetTimeout_fn(HttpMessageHandlerRequest* __this, int* timeoutInMilliseconds)
{
    __this->SetTimeout(*timeoutInMilliseconds);
}

// public Uno.Net.Http.HttpRequestState get_State() :305
void HttpMessageHandlerRequest__get_State_fn(HttpMessageHandlerRequest* __this, int* __retval)
{
    *__retval = __this->State();
}

// private void set_State(Uno.Net.Http.HttpRequestState value) :306
void HttpMessageHandlerRequest__set_State_fn(HttpMessageHandlerRequest* __this, int* value)
{
    __this->State(*value);
}

// public generated void add_StateChanged(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :333
void HttpMessageHandlerRequest__add_StateChanged_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_StateChanged(value);
}

// public generated void remove_StateChanged(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :333
void HttpMessageHandlerRequest__remove_StateChanged_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_StateChanged(value);
}

// public generated void add_Timeout(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :331
void HttpMessageHandlerRequest__add_Timeout_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_Timeout(value);
}

// public generated void remove_Timeout(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :331
void HttpMessageHandlerRequest__remove_Timeout_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_Timeout(value);
}

// public string get_Url() :295
void HttpMessageHandlerRequest__get_Url_fn(HttpMessageHandlerRequest* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// internal HttpMessageHandlerRequest(Uno.Net.Http.HttpMessageHandler handler, string method, string url, Uno.Threading.IDispatcher dispatcher) [instance] :216
void HttpMessageHandlerRequest::ctor_(::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", ".ctor(Uno.Net.Http.HttpMessageHandler,string,string,Uno.Threading.IDispatcher)");

    if (handler == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[26/*"handler"*/]));

    if (::g::Uno::String::op_Equality(method, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[27/*"method"*/]));

    if (::g::Uno::String::op_Equality(url, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[28/*"url"*/]));

    if (dispatcher == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[29/*"dispatcher"*/]));

    method = ::g::Uno::String::ToUpper(uPtr(method));

    if (((((::g::Uno::String::op_Inequality(method, ::STRINGS[30/*"DELETE"*/]) && ::g::Uno::String::op_Inequality(method, ::STRINGS[31/*"GET"*/])) && ::g::Uno::String::op_Inequality(method, ::STRINGS[32/*"HEAD"*/])) && ::g::Uno::String::op_Inequality(method, ::STRINGS[33/*"POST"*/])) && ::g::Uno::String::op_Inequality(method, ::STRINGS[34/*"PUT"*/])) && ::g::Uno::String::op_Inequality(method, ::STRINGS[35/*"OPTIONS"*/]))
        U_THROW(::g::Uno::NotSupportedException::New5(::STRINGS[36/*"HTTP method...*/]));

    _httpRequest = (uObject*)::g::Uno::Net::Http::Implementation::iOSHttpRequest::New1(this, method, url);
    _httpMessageHandler = handler;
    _method = method;
    _url = url;
    _dispatcher = dispatcher;
    State(1);
}

// public void Abort() [instance] :570
void HttpMessageHandlerRequest::Abort()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "Abort()");
    CheckDisposed();

    if (State() >= 5)
        return;

    ::g::Uno::Net::Http::Implementation::IHttpRequest::Abort(uInterface(uPtr(_httpRequest), ::TYPES[16/*Uno.Net.Http.Implementation.IHttpRequest*/]));
    OnAborted();
}

// public generated void add_Aborted(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :329
void HttpMessageHandlerRequest::add_Aborted(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "add_Aborted(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>)");
    Aborted1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Aborted1, value), ::TYPES[1/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/]);
}

// public generated void remove_Aborted(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :329
void HttpMessageHandlerRequest::remove_Aborted(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "remove_Aborted(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>)");
    Aborted1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Aborted1, value), ::TYPES[1/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/]);
}

// private void CheckDisposed() [instance] :271
void HttpMessageHandlerRequest::CheckDisposed()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "CheckDisposed()");

    if (_httpRequest == NULL)
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[37/*"HttpMessage...*/]));
}

// internal void CompleteRequest() [instance] :288
void HttpMessageHandlerRequest::CompleteRequest()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "CompleteRequest()");
    uPtr(_httpMessageHandler)->CompleteRequest(this);
    _httpMessageHandler = NULL;
}

// public void Dispose() [instance] :277
void HttpMessageHandlerRequest::Dispose()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "Dispose()");
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_httpRequest), ::g::Uno::IDisposable_typeof()));
    _httpRequest = NULL;
    _optionalPayloadCache = NULL;
    ::g::Uno::GC::SuppressFinalize(this);
}

// public generated void add_Done(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :332
void HttpMessageHandlerRequest::add_Done(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "add_Done(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>)");
    Done1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Done1, value), ::TYPES[1/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/]);
}

// public generated void remove_Done(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :332
void HttpMessageHandlerRequest::remove_Done(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "remove_Done(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>)");
    Done1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Done1, value), ::TYPES[1/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/]);
}

// public generated void add_Error(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string> value) [instance] :330
void HttpMessageHandlerRequest::add_Error(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "add_Error(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string>)");
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Error1, value), ::TYPES[22/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string>*/]);
}

// public generated void remove_Error(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string> value) [instance] :330
void HttpMessageHandlerRequest::remove_Error(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "remove_Error(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string>)");
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Error1, value), ::TYPES[22/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string>*/]);
}

// public byte[] GetResponseContentByteArray() [instance] :632
uArray* HttpMessageHandlerRequest::GetResponseContentByteArray()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "GetResponseContentByteArray()");
    CheckDisposed();

    if (HttpResponseType() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidResponseTypeException::New4());

    if ((State() < 4) || (State() > 5))
        return uArray::New(::TYPES[19/*byte[]*/], 0);

    uArray* ind2 = ::g::Uno::Net::Http::Implementation::IHttpRequest::GetResponseContentByteArray(uInterface(uPtr(_httpRequest), ::TYPES[16/*Uno.Net.Http.Implementation.IHttpRequest*/]));
    return (ind2 != NULL) ? ind2 : uArray::New(::TYPES[19/*byte[]*/], 0);
}

// public string GetResponseContentString() [instance] :618
uString* HttpMessageHandlerRequest::GetResponseContentString()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "GetResponseContentString()");
    CheckDisposed();

    if (HttpResponseType() != 0)
        U_THROW(::g::Uno::Net::Http::InvalidResponseTypeException::New4());

    if ((State() < 4) || (State() > 5))
        return ::STRINGS[38/*""*/];

    uString* ind1 = ::g::Uno::Net::Http::Implementation::IHttpRequest::GetResponseContentString(uInterface(uPtr(_httpRequest), ::TYPES[16/*Uno.Net.Http.Implementation.IHttpRequest*/]));
    return (ind1 != NULL) ? ind1 : ::STRINGS[38/*""*/];
}

// public string GetResponseHeader(string name) [instance] :595
uString* HttpMessageHandlerRequest::GetResponseHeader(uString* name)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "GetResponseHeader(string)");
    CheckDisposed();

    if ((State() < 3) || (State() > 5))
        return ::STRINGS[38/*""*/];

    return ::g::Uno::Net::Http::Implementation::IHttpRequest::GetResponseHeader(uInterface(uPtr(_httpRequest), ::TYPES[16/*Uno.Net.Http.Implementation.IHttpRequest*/]), name);
}

// public string GetResponseHeaders() [instance] :606
uString* HttpMessageHandlerRequest::GetResponseHeaders()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "GetResponseHeaders()");
    CheckDisposed();

    if ((State() < 3) || (State() > 5))
        return ::STRINGS[38/*""*/];

    return ::g::Uno::Net::Http::Implementation::IHttpRequest::GetResponseHeaders(uInterface(uPtr(_httpRequest), ::TYPES[16/*Uno.Net.Http.Implementation.IHttpRequest*/]));
}

// public int GetResponseStatus() [instance] :584
int HttpMessageHandlerRequest::GetResponseStatus()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "GetResponseStatus()");
    CheckDisposed();

    if ((State() < 3) || (State() > 5))
        return 0;

    return ::g::Uno::Net::Http::Implementation::IHttpRequest::GetResponseStatus(uInterface(uPtr(_httpRequest), ::TYPES[16/*Uno.Net.Http.Implementation.IHttpRequest*/]));
}

// public Uno.Net.Http.HttpResponseType get_HttpResponseType() [instance] :299
int HttpMessageHandlerRequest::HttpResponseType()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "get_HttpResponseType()");
    return _responseType;
}

// public void set_HttpResponseType(Uno.Net.Http.HttpResponseType value) [instance] :300
void HttpMessageHandlerRequest::HttpResponseType(int value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "set_HttpResponseType(Uno.Net.Http.HttpResponseType)");
    SetResponseType(value);
}

// private bool IsComplete() [instance] :412
bool HttpMessageHandlerRequest::IsComplete()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "IsComplete()");
    return State() >= 5;
}

// public string get_Method() [instance] :294
uString* HttpMessageHandlerRequest::Method()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "get_Method()");
    return _method;
}

// internal void OnAborted() [instance] :417
void HttpMessageHandlerRequest::OnAborted()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "OnAborted()");
    uDelegate* handler = Aborted1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_dispatcher), ::TYPES[14/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)HttpMessageHandlerRequest__DispatchClosure__Run_fn, HttpMessageHandlerRequest__DispatchClosure::New1(6, handler, this)));
}

// internal void OnDone() [instance] :438
void HttpMessageHandlerRequest::OnDone()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "OnDone()");
    uDelegate* handler = Done1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_dispatcher), ::TYPES[14/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)HttpMessageHandlerRequest__DispatchClosure__Run_fn, HttpMessageHandlerRequest__DispatchClosure::New1(5, handler, this)));
}

// internal void OnError(string platformspesificErrorMessage) [instance] :424
void HttpMessageHandlerRequest::OnError(uString* platformspesificErrorMessage)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "OnError(string)");
    HttpMessageHandlerRequest__DispatchClosure1* ret4;
    uDelegate* handler = Error1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_dispatcher), ::TYPES[14/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)HttpMessageHandlerRequest__DispatchClosure1__Run_fn, (HttpMessageHandlerRequest__DispatchClosure1__New1_fn(::TYPES[21/*Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure<string>*/], uCRef<int>(7), handler, this, platformspesificErrorMessage, &ret4), ret4)));
}

// internal void OnStateChanged() [instance] :316
void HttpMessageHandlerRequest::OnStateChanged()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "OnStateChanged()");

    if (State() > 5)
        return;

    uDelegate* handler = StateChanged1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(this);
}

// internal void OnTimeout() [instance] :431
void HttpMessageHandlerRequest::OnTimeout()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "OnTimeout()");
    uDelegate* handler = Timeout1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_dispatcher), ::TYPES[14/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)HttpMessageHandlerRequest__DispatchClosure__Run_fn, HttpMessageHandlerRequest__DispatchClosure::New1(8, handler, this)));
}

// public generated void add_Progress(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> value) [instance] :334
void HttpMessageHandlerRequest::add_Progress(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "add_Progress(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool>)");
    Progress1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Progress1, value), ::TYPES[23/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool>*/]);
}

// public generated void remove_Progress(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> value) [instance] :334
void HttpMessageHandlerRequest::remove_Progress(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "remove_Progress(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool>)");
    Progress1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Progress1, value), ::TYPES[23/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool>*/]);
}

// public void SendAsync() [instance] :557
void HttpMessageHandlerRequest::SendAsync()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "SendAsync()");
    CheckDisposed();

    if (State() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    _state = 2;
    ::g::Uno::Net::Http::Implementation::IHttpRequest::SendAsync(uInterface(uPtr(_httpRequest), ::TYPES[16/*Uno.Net.Http.Implementation.IHttpRequest*/]));
    OnStateChanged();
}

// public void SendAsync(string data) [instance] :539
void HttpMessageHandlerRequest::SendAsync2(uString* data)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "SendAsync(string)");
    CheckDisposed();

    if (State() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    _state = 2;

    if (((::g::Uno::String::op_Equality(Method(), ::STRINGS[31/*"GET"*/]) || ::g::Uno::String::op_Equality(Method(), ::STRINGS[32/*"HEAD"*/])) || ::g::Uno::String::op_Equality(data, NULL)) || ::g::Uno::String::op_Equality(data, ::STRINGS[38/*""*/]))
        ::g::Uno::Net::Http::Implementation::IHttpRequest::SendAsync(uInterface(uPtr(_httpRequest), ::TYPES[16/*Uno.Net.Http.Implementation.IHttpRequest*/]));
    else
        ::g::Uno::Net::Http::Implementation::IHttpRequest::SendAsync2(uInterface(uPtr(_httpRequest), ::TYPES[16/*Uno.Net.Http.Implementation.IHttpRequest*/]), data);

    OnStateChanged();
}

// public void SetHeader(string name, string value) [instance] :473
void HttpMessageHandlerRequest::SetHeader(uString* name, uString* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "SetHeader(string,string)");
    CheckDisposed();

    if (State() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    if (!HttpMessageHandlerRequest::IsHeaderValid(name, value))
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[39/*"Not allowed...*/], name), ::STRINGS[40/*"\" on this ...*/])));

    ::g::Uno::Net::Http::Implementation::IHttpRequest::SetHeader(uInterface(uPtr(_httpRequest), ::TYPES[16/*Uno.Net.Http.Implementation.IHttpRequest*/]), name, value);
}

// public void SetResponseType(Uno.Net.Http.HttpResponseType responseType) [instance] :496
void HttpMessageHandlerRequest::SetResponseType(int responseType)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "SetResponseType(Uno.Net.Http.HttpResponseType)");
    CheckDisposed();

    if (State() >= 4)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    _responseType = responseType;
}

// public void SetTimeout(int timeoutInMilliseconds) [instance] :486
void HttpMessageHandlerRequest::SetTimeout(int timeoutInMilliseconds)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "SetTimeout(int)");
    CheckDisposed();

    if (State() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    ::g::Uno::Net::Http::Implementation::IHttpRequest::SetTimeout(uInterface(uPtr(_httpRequest), ::TYPES[16/*Uno.Net.Http.Implementation.IHttpRequest*/]), timeoutInMilliseconds);
}

// public Uno.Net.Http.HttpRequestState get_State() [instance] :305
int HttpMessageHandlerRequest::State()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "get_State()");
    return _state;
}

// private void set_State(Uno.Net.Http.HttpRequestState value) [instance] :306
void HttpMessageHandlerRequest::State(int value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "set_State(Uno.Net.Http.HttpRequestState)");

    if (_state == value)
        return;

    _state = value;
    OnStateChanged();
}

// public generated void add_StateChanged(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :333
void HttpMessageHandlerRequest::add_StateChanged(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "add_StateChanged(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>)");
    StateChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(StateChanged1, value), ::TYPES[1/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/]);
}

// public generated void remove_StateChanged(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :333
void HttpMessageHandlerRequest::remove_StateChanged(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "remove_StateChanged(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>)");
    StateChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(StateChanged1, value), ::TYPES[1/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/]);
}

// public generated void add_Timeout(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :331
void HttpMessageHandlerRequest::add_Timeout(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "add_Timeout(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>)");
    Timeout1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Timeout1, value), ::TYPES[1/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/]);
}

// public generated void remove_Timeout(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :331
void HttpMessageHandlerRequest::remove_Timeout(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "remove_Timeout(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>)");
    Timeout1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Timeout1, value), ::TYPES[1/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/]);
}

// public string get_Url() [instance] :295
uString* HttpMessageHandlerRequest::Url()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "get_Url()");
    return _url;
}

// private static bool IsHeaderValid(string name, string value) [static] :647
bool HttpMessageHandlerRequest::IsHeaderValid(uString* name, uString* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "IsHeaderValid(string,string)");
    return true;
}

// internal HttpMessageHandlerRequest New(Uno.Net.Http.HttpMessageHandler handler, string method, string url, Uno.Threading.IDispatcher dispatcher) [static] :216
HttpMessageHandlerRequest* HttpMessageHandlerRequest::New1(::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher)
{
    HttpMessageHandlerRequest* obj3 = (HttpMessageHandlerRequest*)uNew(HttpMessageHandlerRequest_typeof());
    obj3->ctor_(handler, method, url, dispatcher);
    return obj3;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Uno.Net.Http/0.24.3/$.uno(714)
// --------------------------------------------------------------------------------

// public enum HttpRequestState :714
uEnumType* HttpRequestState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Http.HttpRequestState", ::g::Uno::Int_typeof(), 10);
    type->SetLiterals(
        "Uninitialized", 0LL,
        "Opened", 1LL,
        "Sent", 2LL,
        "HeadersReceived", 3LL,
        "Loading", 4LL,
        "Done", 5LL,
        "Aborted", 6LL,
        "Errored", 7LL,
        "TimedOut", 8LL,
        "Unsent", 0LL);
    return type;
}

// ../../../../../../../usr/local/share/uno/Packages/Uno.Net.Http/0.24.3/$.uno(738)
// --------------------------------------------------------------------------------

// public enum HttpResponseType :738
uEnumType* HttpResponseType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Http.HttpResponseType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", -1LL,
        "String", 0LL,
        "ByteArray", 1LL);
    return type;
}

// ../../../../../../../usr/local/share/uno/Packages/Uno.Net.Http/0.24.3/$.uno(752)
// --------------------------------------------------------------------------------

// public static class HttpStatusReasonPhrase :752
// {
// static HttpStatusReasonPhrase() :752
static void HttpStatusReasonPhrase__cctor__fn(uType* __type)
{
    ::g::Uno::Collections::Dictionary* collection5;
    ::g::Uno::Collections::Dictionary* collection4;
    ::g::Uno::Collections::Dictionary* collection3;
    ::g::Uno::Collections::Dictionary* collection2;
    ::g::Uno::Collections::Dictionary* collection1;
    HttpStatusReasonPhrase::Informational_ = (uObject*)(collection5 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[25/*Uno.Collections.Dictionary<int, string>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection5), uCRef<int>(100), ::STRINGS[41/*"Continue"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection5), uCRef<int>(101), ::STRINGS[42/*"Switching P...*/]), collection5);
    HttpStatusReasonPhrase::Success_ = (uObject*)(collection4 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[25/*Uno.Collections.Dictionary<int, string>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int>(200), ::STRINGS[43/*"OK"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int>(201), ::STRINGS[44/*"Created"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int>(202), ::STRINGS[45/*"Accepted"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int>(203), ::STRINGS[46/*"Non-Authori...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int>(204), ::STRINGS[47/*"No Content"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int>(205), ::STRINGS[48/*"Reset Content"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int>(206), ::STRINGS[49/*"Partial Con...*/]), collection4);
    HttpStatusReasonPhrase::Redirection_ = (uObject*)(collection3 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[25/*Uno.Collections.Dictionary<int, string>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int>(300), ::STRINGS[50/*"Multiple Ch...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int>(301), ::STRINGS[51/*"Moved Perma...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int>(302), ::STRINGS[52/*"Found"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int>(303), ::STRINGS[53/*"See Other"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int>(304), ::STRINGS[54/*"Not Modified"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int>(305), ::STRINGS[55/*"Use Proxy"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int>(307), ::STRINGS[56/*"Temporary R...*/]), collection3);
    HttpStatusReasonPhrase::ClientErrors_ = (uObject*)(collection2 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[25/*Uno.Collections.Dictionary<int, string>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(400), ::STRINGS[57/*"Bad Request"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(401), ::STRINGS[58/*"Unauthorized"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(402), ::STRINGS[59/*"Payment Req...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(403), ::STRINGS[60/*"Forbidden"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(404), ::STRINGS[61/*"Not Found"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(405), ::STRINGS[62/*"Method Not ...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(406), ::STRINGS[63/*"Not Accepta...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(407), ::STRINGS[64/*"Proxy Authe...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(408), ::STRINGS[65/*"Request Tim...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(409), ::STRINGS[66/*"Conflict"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(410), ::STRINGS[67/*"Gone"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(411), ::STRINGS[68/*"Length Requ...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(412), ::STRINGS[69/*"Preconditio...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(413), ::STRINGS[70/*"Request Ent...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(414), ::STRINGS[71/*"Request-URI...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(415), ::STRINGS[72/*"Unsupported...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(416), ::STRINGS[73/*"Requested r...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(417), ::STRINGS[74/*"Expectation...*/]), collection2);
    HttpStatusReasonPhrase::ServerErrors_ = (uObject*)(collection1 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[25/*Uno.Collections.Dictionary<int, string>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), uCRef<int>(500), ::STRINGS[75/*"Internal Se...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), uCRef<int>(501), ::STRINGS[76/*"Not Impleme...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), uCRef<int>(502), ::STRINGS[77/*"Bad Gateway"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), uCRef<int>(503), ::STRINGS[78/*"Service Una...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), uCRef<int>(504), ::STRINGS[79/*"Gateway Tim...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), uCRef<int>(505), ::STRINGS[80/*"HTTP Versio...*/]), collection1);
}

uClassType* HttpStatusReasonPhrase_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Net.Http.HttpStatusReasonPhrase", options);
    type->fp_cctor_ = HttpStatusReasonPhrase__cctor__fn;
    ::STRINGS[41] = uString::Const("Continue");
    ::STRINGS[42] = uString::Const("Switching Protocols");
    ::STRINGS[43] = uString::Const("OK");
    ::STRINGS[44] = uString::Const("Created");
    ::STRINGS[45] = uString::Const("Accepted");
    ::STRINGS[46] = uString::Const("Non-Authoritative Information");
    ::STRINGS[47] = uString::Const("No Content");
    ::STRINGS[48] = uString::Const("Reset Content");
    ::STRINGS[49] = uString::Const("Partial Content");
    ::STRINGS[50] = uString::Const("Multiple Choices");
    ::STRINGS[51] = uString::Const("Moved Permanently");
    ::STRINGS[52] = uString::Const("Found");
    ::STRINGS[53] = uString::Const("See Other");
    ::STRINGS[54] = uString::Const("Not Modified");
    ::STRINGS[55] = uString::Const("Use Proxy");
    ::STRINGS[56] = uString::Const("Temporary Redirect");
    ::STRINGS[57] = uString::Const("Bad Request");
    ::STRINGS[58] = uString::Const("Unauthorized");
    ::STRINGS[59] = uString::Const("Payment Required");
    ::STRINGS[60] = uString::Const("Forbidden");
    ::STRINGS[61] = uString::Const("Not Found");
    ::STRINGS[62] = uString::Const("Method Not Allowed");
    ::STRINGS[63] = uString::Const("Not Acceptable");
    ::STRINGS[64] = uString::Const("Proxy Authentication Required");
    ::STRINGS[65] = uString::Const("Request Time-out");
    ::STRINGS[66] = uString::Const("Conflict");
    ::STRINGS[67] = uString::Const("Gone");
    ::STRINGS[68] = uString::Const("Length Required");
    ::STRINGS[69] = uString::Const("Precondition Failed");
    ::STRINGS[70] = uString::Const("Request Entity Too Large");
    ::STRINGS[71] = uString::Const("Request-URI Too Large");
    ::STRINGS[72] = uString::Const("Unsupported Media Type");
    ::STRINGS[73] = uString::Const("Requested range not satisfiable");
    ::STRINGS[74] = uString::Const("Expectation Failed");
    ::STRINGS[75] = uString::Const("Internal Server Error");
    ::STRINGS[76] = uString::Const("Not Implemented");
    ::STRINGS[77] = uString::Const("Bad Gateway");
    ::STRINGS[78] = uString::Const("Service Unavailable");
    ::STRINGS[79] = uString::Const("Gateway Time-out");
    ::STRINGS[80] = uString::Const("HTTP Version not supported");
    ::TYPES[24] = ::g::Uno::Collections::IDictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::String_typeof());
    ::TYPES[25] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::String_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::IDictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::String_typeof()), (uintptr_t)&::g::Uno::Net::Http::HttpStatusReasonPhrase::ClientErrors_, uFieldFlagsStatic,
        ::g::Uno::Collections::IDictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::String_typeof()), (uintptr_t)&::g::Uno::Net::Http::HttpStatusReasonPhrase::Informational_, uFieldFlagsStatic,
        ::g::Uno::Collections::IDictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::String_typeof()), (uintptr_t)&::g::Uno::Net::Http::HttpStatusReasonPhrase::Redirection_, uFieldFlagsStatic,
        ::g::Uno::Collections::IDictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::String_typeof()), (uintptr_t)&::g::Uno::Net::Http::HttpStatusReasonPhrase::ServerErrors_, uFieldFlagsStatic,
        ::g::Uno::Collections::IDictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::String_typeof()), (uintptr_t)&::g::Uno::Net::Http::HttpStatusReasonPhrase::Success_, uFieldFlagsStatic);
    type->Reflection.SetFields(5,
        new uField("ClientErrors", 0),
        new uField("Informational", 1),
        new uField("Redirection", 2),
        new uField("ServerErrors", 3),
        new uField("Success", 4));
    type->Reflection.SetFunctions(1,
        new uFunction("GetFromStatusCode", NULL, (void*)HttpStatusReasonPhrase__GetFromStatusCode_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Uno::Int_typeof()));
    return type;
}

// public static string GetFromStatusCode(int statusCode) :819
void HttpStatusReasonPhrase__GetFromStatusCode_fn(int* statusCode, uString** __retval)
{
    *__retval = HttpStatusReasonPhrase::GetFromStatusCode(*statusCode);
}

uSStrong<uObject*> HttpStatusReasonPhrase::ClientErrors_;
uSStrong<uObject*> HttpStatusReasonPhrase::Informational_;
uSStrong<uObject*> HttpStatusReasonPhrase::Redirection_;
uSStrong<uObject*> HttpStatusReasonPhrase::ServerErrors_;
uSStrong<uObject*> HttpStatusReasonPhrase::Success_;

// public static string GetFromStatusCode(int statusCode) [static] :819
uString* HttpStatusReasonPhrase::GetFromStatusCode(int statusCode)
{
    uStackFrame __("Uno.Net.Http.HttpStatusReasonPhrase", "GetFromStatusCode(int)");
    HttpStatusReasonPhrase_typeof()->Init();
    bool ret6;
    bool ret7;
    bool ret8;
    bool ret9;
    bool ret10;
    uString* description;

    if ((::g::Uno::Collections::IDictionary::TryGetValue_ex(uInterface(uPtr(HttpStatusReasonPhrase::Informational()), ::TYPES[24/*Uno.Collections.IDictionary<int, string>*/]), uCRef<int>(statusCode), (void**)(&description), &ret6), ret6))
        return description;

    if ((::g::Uno::Collections::IDictionary::TryGetValue_ex(uInterface(uPtr(HttpStatusReasonPhrase::Success()), ::TYPES[24/*Uno.Collections.IDictionary<int, string>*/]), uCRef<int>(statusCode), (void**)(&description), &ret7), ret7))
        return description;

    if ((::g::Uno::Collections::IDictionary::TryGetValue_ex(uInterface(uPtr(HttpStatusReasonPhrase::Redirection()), ::TYPES[24/*Uno.Collections.IDictionary<int, string>*/]), uCRef<int>(statusCode), (void**)(&description), &ret8), ret8))
        return description;

    if ((::g::Uno::Collections::IDictionary::TryGetValue_ex(uInterface(uPtr(HttpStatusReasonPhrase::ClientErrors()), ::TYPES[24/*Uno.Collections.IDictionary<int, string>*/]), uCRef<int>(statusCode), (void**)(&description), &ret9), ret9))
        return description;

    if ((::g::Uno::Collections::IDictionary::TryGetValue_ex(uInterface(uPtr(HttpStatusReasonPhrase::ServerErrors()), ::TYPES[24/*Uno.Collections.IDictionary<int, string>*/]), uCRef<int>(statusCode), (void**)(&description), &ret10), ret10))
        return description;

    return NULL;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Uno.Net.Http/0.24.3/$.uno(693)
// --------------------------------------------------------------------------------

// public sealed class InvalidResponseTypeException :693
// {
::g::Uno::Exception_type* InvalidResponseTypeException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(InvalidResponseTypeException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.Net.Http.InvalidResponseTypeException", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->fp_ctor_ = (void*)InvalidResponseTypeException__New4_fn;
    ::STRINGS[81] = uString::Const("Response type is invalid.");
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)InvalidResponseTypeException__New4_fn, 0, true, InvalidResponseTypeException_typeof(), 0));
    return type;
}

// public InvalidResponseTypeException() :695
void InvalidResponseTypeException__ctor_3_fn(InvalidResponseTypeException* __this)
{
    __this->ctor_3();
}

// public InvalidResponseTypeException New() :695
void InvalidResponseTypeException__New4_fn(InvalidResponseTypeException** __retval)
{
    *__retval = InvalidResponseTypeException::New4();
}

// public InvalidResponseTypeException() [instance] :695
void InvalidResponseTypeException::ctor_3()
{
    ctor_1(::STRINGS[81/*"Response ty...*/]);
}

// public InvalidResponseTypeException New() [static] :695
InvalidResponseTypeException* InvalidResponseTypeException::New4()
{
    InvalidResponseTypeException* obj1 = (InvalidResponseTypeException*)uNew(InvalidResponseTypeException_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Uno.Net.Http/0.24.3/$.uno(699)
// --------------------------------------------------------------------------------

// public sealed class InvalidStateException :699
// {
::g::Uno::Exception_type* InvalidStateException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(InvalidStateException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.Net.Http.InvalidStateException", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->fp_ctor_ = (void*)InvalidStateException__New4_fn;
    ::STRINGS[82] = uString::Const("The object is in an invalid state.");
    type->SetFields(3);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)InvalidStateException__New4_fn, 0, true, InvalidStateException_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)InvalidStateException__New5_fn, 0, true, InvalidStateException_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}

// public InvalidStateException() :701
void InvalidStateException__ctor_3_fn(InvalidStateException* __this)
{
    __this->ctor_3();
}

// public InvalidStateException(string message) :704
void InvalidStateException__ctor_4_fn(InvalidStateException* __this, uString* message)
{
    __this->ctor_4(message);
}

// public InvalidStateException New() :701
void InvalidStateException__New4_fn(InvalidStateException** __retval)
{
    *__retval = InvalidStateException::New4();
}

// public InvalidStateException New(string message) :704
void InvalidStateException__New5_fn(uString* message, InvalidStateException** __retval)
{
    *__retval = InvalidStateException::New5(message);
}

// public InvalidStateException() [instance] :701
void InvalidStateException::ctor_3()
{
    ctor_1(::STRINGS[82/*"The object ...*/]);
}

// public InvalidStateException(string message) [instance] :704
void InvalidStateException::ctor_4(uString* message)
{
    ctor_1(message);
}

// public InvalidStateException New() [static] :701
InvalidStateException* InvalidStateException::New4()
{
    InvalidStateException* obj1 = (InvalidStateException*)uNew(InvalidStateException_typeof());
    obj1->ctor_3();
    return obj1;
}

// public InvalidStateException New(string message) [static] :704
InvalidStateException* InvalidStateException::New5(uString* message)
{
    InvalidStateException* obj2 = (InvalidStateException*)uNew(InvalidStateException_typeof());
    obj2->ctor_4(message);
    return obj2;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Uno.Net.Http/0.24.3/UriParsers/$.uno(161)
// -------------------------------------------------------------------------------------------

// public sealed class QueryParser :161
// {
uType* QueryParser_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(QueryParser);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.QueryParser", options);
    type->fp_ctor_ = (void*)QueryParser__New1_fn;
    ::TYPES[3] = ::g::Uno::String_typeof();
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)QueryParser__New1_fn, 0, true, QueryParser_typeof(), 0),
        new uFunction("Parse", NULL, (void*)QueryParser__Parse_fn, 0, true, ::g::Uno::String_typeof(), 4, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()->ByRef()));
    return type;
}

// public generated QueryParser() :161
void QueryParser__ctor__fn(QueryParser* __this)
{
    __this->ctor_();
}

// public generated QueryParser New() :161
void QueryParser__New1_fn(QueryParser** __retval)
{
    *__retval = QueryParser::New1();
}

// public static string Parse(string uriString, string scheme, int idx, int& startPartIdx) :163
void QueryParser__Parse_fn(uString* uriString, uString* scheme, int* idx, int* startPartIdx, uString** __retval)
{
    *__retval = QueryParser::Parse(uriString, scheme, *idx, startPartIdx);
}

// public generated QueryParser() [instance] :161
void QueryParser::ctor_()
{
}

// public generated QueryParser New() [static] :161
QueryParser* QueryParser::New1()
{
    QueryParser* obj1 = (QueryParser*)uNew(QueryParser_typeof());
    obj1->ctor_();
    return obj1;
}

// public static string Parse(string uriString, string scheme, int idx, int& startPartIdx) [static] :163
uString* QueryParser::Parse(uString* uriString, uString* scheme, int idx, int* startPartIdx)
{
    uStackFrame __("Uno.Net.Http.QueryParser", "Parse(string,string,int,int&)");

    if ((idx >= uPtr(uriString)->Length()) || !::g::Uno::Net::Http::UriScheme::IsHttpScheme(scheme))
        return ::g::Uno::String::Empty();

    int startQuery = ::g::Uno::String::IndexOf(uPtr(uriString), '?', idx);
    int startHash = ::g::Uno::String::IndexOf(uriString, '#', idx);

    if (startHash < 0)
        startHash = uPtr(uriString)->Length();

    if ((startQuery >= 0) && (startQuery < startHash))
    {
        *startPartIdx = startQuery;
        return ::g::Uno::String::Substring1(uPtr(uriString), *startPartIdx, startHash - *startPartIdx);
    }

    return ::g::Uno::String::Empty();
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Uno.Net.Http/0.24.3/UriParsers/$.uno(201)
// -------------------------------------------------------------------------------------------

// public sealed class SchemeParser :201
// {
uType* SchemeParser_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(SchemeParser);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.SchemeParser", options);
    type->fp_ctor_ = (void*)SchemeParser__New1_fn;
    ::STRINGS[10] = uString::Const(":");
    ::STRINGS[83] = uString::Const("The scheme isn't specified in uriString.");
    ::STRINGS[84] = uString::Const("The scheme specified in uriString is not correctly formed.");
    ::STRINGS[85] = uString::Const("The length of the scheme specified in uriString exceeds 1023 characters.");
    ::STRINGS[21] = uString::Const("There is an invalid character sequence in uriString.");
    ::TYPES[3] = ::g::Uno::String_typeof();
    ::TYPES[26] = ::g::Uno::Net::Http::SchemeParserResult_typeof();
    ::TYPES[17] = ::g::Uno::Int_typeof();
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)SchemeParser__New1_fn, 0, true, SchemeParser_typeof(), 0),
        new uFunction("Parse", NULL, (void*)SchemeParser__Parse_fn, 0, true, ::g::Uno::Net::Http::SchemeParserResult_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Int_typeof()->ByRef()));
    return type;
}

// public generated SchemeParser() :201
void SchemeParser__ctor__fn(SchemeParser* __this)
{
    __this->ctor_();
}

// public generated SchemeParser New() :201
void SchemeParser__New1_fn(SchemeParser** __retval)
{
    *__retval = SchemeParser::New1();
}

// public static Uno.Net.Http.SchemeParserResult Parse(string uriString, int& idx) :204
void SchemeParser__Parse_fn(uString* uriString, int* idx, ::g::Uno::Net::Http::SchemeParserResult* __retval)
{
    *__retval = SchemeParser::Parse(uriString, idx);
}

// public generated SchemeParser() [instance] :201
void SchemeParser::ctor_()
{
}

// public generated SchemeParser New() [static] :201
SchemeParser* SchemeParser::New1()
{
    SchemeParser* obj1 = (SchemeParser*)uNew(SchemeParser_typeof());
    obj1->ctor_();
    return obj1;
}

// public static Uno.Net.Http.SchemeParserResult Parse(string uriString, int& idx) [static] :204
::g::Uno::Net::Http::SchemeParserResult SchemeParser::Parse(uString* uriString, int* idx)
{
    uStackFrame __("Uno.Net.Http.SchemeParser", "Parse(string,int&)");
    ::g::Uno::Net::Http::SchemeParserResult result;
    int end = ::g::Uno::String::IndexOf1(uPtr(uriString), ::STRINGS[10/*":"*/], *idx);

    if (end < 0)
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[83/*"The scheme ...*/]));

    if (((*idx + 2) >= uriString->Length()) || (end == *idx))
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[84/*"The scheme ...*/]));

    if ((end - *idx) > 1023)
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[85/*"The length ...*/]));

    result.Scheme = ::g::Uno::String::Substring1(uriString, *idx, end - *idx);
    result.Type = ::g::Uno::Net::Http::UriScheme::GetSchemeType(result.Scheme);

    if (result.Type == 2)
        return result;

    *idx = end + 1;

    if (result.Type == 0)
    {
        if ((((*idx + 1) >= uPtr(uriString)->Length()) || (uPtr(uriString)->Item(*idx) != '/')) || (uPtr(uriString)->Item(*idx + 1) != '/'))
            U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[21/*"There is an...*/]));

        *idx = *idx + 2;
    }

    return result;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Uno.Net.Http/0.24.3/UriParsers/$.uno(195)
// -------------------------------------------------------------------------------------------

// public struct SchemeParserResult :195
// {
uStructType* SchemeParserResult_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(SchemeParserResult);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Net.Http.SchemeParserResult", options);
    type->SetFields(0,
        ::g::Uno::Net::Http::UriSchemeType_typeof(), offsetof(::g::Uno::Net::Http::SchemeParserResult, Type), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::SchemeParserResult, Scheme), 0);
    type->Reflection.SetFields(2,
        new uField("Scheme", 1),
        new uField("Type", 0));
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Uno.Net.Http/0.24.3/$.uno(94)
// -------------------------------------------------------------------------------

// internal static class HttpMessageHandler.StaticData :94
// {
uClassType* HttpMessageHandler__StaticData_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Net.Http.HttpMessageHandler.StaticData", options);
    return type;
}

// internal static void DecrementPendingRequests() :105
void HttpMessageHandler__StaticData__DecrementPendingRequests_fn()
{
    HttpMessageHandler__StaticData::DecrementPendingRequests();
}

// internal static void IncrementPendingRequests() :98
void HttpMessageHandler__StaticData__IncrementPendingRequests_fn()
{
    HttpMessageHandler__StaticData::IncrementPendingRequests();
}

// internal static void DecrementPendingRequests() [static] :105
void HttpMessageHandler__StaticData::DecrementPendingRequests()
{
}

// internal static void IncrementPendingRequests() [static] :98
void HttpMessageHandler__StaticData::IncrementPendingRequests()
{
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Uno.Net.Http/0.24.3/$.uno(871)
// --------------------------------------------------------------------------------

// public sealed class Uri :871
// {
uType* Uri_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.ObjectSize = sizeof(Uri);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.Uri", options);
    ::STRINGS[86] = uString::Const("uriString");
    ::STRINGS[87] = uString::Const("The length of uriString exceeds 65519 characters.");
    ::TYPES[3] = ::g::Uno::String_typeof();
    ::TYPES[26] = ::g::Uno::Net::Http::SchemeParserResult_typeof();
    ::TYPES[17] = ::g::Uno::Int_typeof();
    ::TYPES[9] = ::g::Uno::Net::Http::HostInfo_typeof();
    ::TYPES[19] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[27] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[28] = ::g::Uno::Char_typeof();
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::Uri, _AbsolutePath), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::Uri, _AbsoluteUri), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::Uri, _Authority), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::Uri, _Hash), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::Uri, _Host), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::Uri, _OriginalString), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::Uri, _PathAndQuery), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Net::Http::Uri, _Port), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::Uri, _Query), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::Uri, _Scheme), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::Uri, _UserInfo), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("get_AbsolutePath", NULL, (void*)Uri__get_AbsolutePath_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_AbsoluteUri", NULL, (void*)Uri__get_AbsoluteUri_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_Authority", NULL, (void*)Uri__get_Authority_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("Encode", NULL, (void*)Uri__Encode_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Hash", NULL, (void*)Uri__get_Hash_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_Host", NULL, (void*)Uri__get_Host_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Uri__New1_fn, 0, true, Uri_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_OriginalString", NULL, (void*)Uri__get_OriginalString_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_PathAndQuery", NULL, (void*)Uri__get_PathAndQuery_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_Port", NULL, (void*)Uri__get_Port_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Query", NULL, (void*)Uri__get_Query_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_Scheme", NULL, (void*)Uri__get_Scheme_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_UserInfo", NULL, (void*)Uri__get_UserInfo_fn, 0, false, ::g::Uno::String_typeof(), 0));
    return type;
}

// public Uri(string uriString) :895
void Uri__ctor__fn(Uri* __this, uString* uriString)
{
    __this->ctor_(uriString);
}

// public generated string get_AbsolutePath() :873
void Uri__get_AbsolutePath_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->AbsolutePath();
}

// private generated void set_AbsolutePath(string value) :873
void Uri__set_AbsolutePath_fn(Uri* __this, uString* value)
{
    __this->AbsolutePath(value);
}

// public generated string get_AbsoluteUri() :875
void Uri__get_AbsoluteUri_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->AbsoluteUri();
}

// private generated void set_AbsoluteUri(string value) :875
void Uri__set_AbsoluteUri_fn(Uri* __this, uString* value)
{
    __this->AbsoluteUri(value);
}

// public generated string get_Authority() :877
void Uri__get_Authority_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->Authority();
}

// private generated void set_Authority(string value) :877
void Uri__set_Authority_fn(Uri* __this, uString* value)
{
    __this->Authority(value);
}

// private void CreateThis(string uriString) :931
void Uri__CreateThis_fn(Uri* __this, uString* uriString)
{
    __this->CreateThis(uriString);
}

// public static string Encode(string value) :978
void Uri__Encode_fn(uString* value, uString** __retval)
{
    *__retval = Uri::Encode(value);
}

// private static bool EscapeSymbol(byte symbol) :1056
void Uri__EscapeSymbol_fn(uint8_t* symbol, bool* __retval)
{
    *__retval = Uri::EscapeSymbol(*symbol);
}

// private static char GetHexFromNumber(int value) :1037
void Uri__GetHexFromNumber_fn(int* value, uChar* __retval)
{
    *__retval = Uri::GetHexFromNumber(*value);
}

// public generated string get_Hash() :889
void Uri__get_Hash_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->Hash();
}

// private generated void set_Hash(string value) :889
void Uri__set_Hash_fn(Uri* __this, uString* value)
{
    __this->Hash(value);
}

// public generated string get_Host() :879
void Uri__get_Host_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->Host();
}

// private generated void set_Host(string value) :879
void Uri__set_Host_fn(Uri* __this, uString* value)
{
    __this->Host(value);
}

// public Uri New(string uriString) :895
void Uri__New1_fn(uString* uriString, Uri** __retval)
{
    *__retval = Uri::New1(uriString);
}

// public generated string get_OriginalString() :881
void Uri__get_OriginalString_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->OriginalString();
}

// private generated void set_OriginalString(string value) :881
void Uri__set_OriginalString_fn(Uri* __this, uString* value)
{
    __this->OriginalString(value);
}

// public generated string get_PathAndQuery() :883
void Uri__get_PathAndQuery_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->PathAndQuery();
}

// private generated void set_PathAndQuery(string value) :883
void Uri__set_PathAndQuery_fn(Uri* __this, uString* value)
{
    __this->PathAndQuery(value);
}

// public generated int get_Port() :885
void Uri__get_Port_fn(Uri* __this, int* __retval)
{
    *__retval = __this->Port();
}

// private generated void set_Port(int value) :885
void Uri__set_Port_fn(Uri* __this, int* value)
{
    __this->Port(*value);
}

// public generated string get_Query() :887
void Uri__get_Query_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->Query();
}

// private generated void set_Query(string value) :887
void Uri__set_Query_fn(Uri* __this, uString* value)
{
    __this->Query(value);
}

// public generated string get_Scheme() :891
void Uri__get_Scheme_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->Scheme();
}

// private generated void set_Scheme(string value) :891
void Uri__set_Scheme_fn(Uri* __this, uString* value)
{
    __this->Scheme(value);
}

// public generated string get_UserInfo() :893
void Uri__get_UserInfo_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->UserInfo();
}

// private generated void set_UserInfo(string value) :893
void Uri__set_UserInfo_fn(Uri* __this, uString* value)
{
    __this->UserInfo(value);
}

// public Uri(string uriString) [instance] :895
void Uri::ctor_(uString* uriString)
{
    uStackFrame __("Uno.Net.Http.Uri", ".ctor(string)");

    if (::g::Uno::String::IsNullOrEmpty(uriString))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[86/*"uriString"*/]));

    uriString = ::g::Uno::String::Trim(uPtr(uriString));

    if (uriString->Length() > 65519)
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[87/*"The length ...*/]));

    CreateThis(uriString);
}

// public generated string get_AbsolutePath() [instance] :873
uString* Uri::AbsolutePath()
{
    uStackFrame __("Uno.Net.Http.Uri", "get_AbsolutePath()");
    return _AbsolutePath;
}

// private generated void set_AbsolutePath(string value) [instance] :873
void Uri::AbsolutePath(uString* value)
{
    uStackFrame __("Uno.Net.Http.Uri", "set_AbsolutePath(string)");
    _AbsolutePath = value;
}

// public generated string get_AbsoluteUri() [instance] :875
uString* Uri::AbsoluteUri()
{
    uStackFrame __("Uno.Net.Http.Uri", "get_AbsoluteUri()");
    return _AbsoluteUri;
}

// private generated void set_AbsoluteUri(string value) [instance] :875
void Uri::AbsoluteUri(uString* value)
{
    uStackFrame __("Uno.Net.Http.Uri", "set_AbsoluteUri(string)");
    _AbsoluteUri = value;
}

// public generated string get_Authority() [instance] :877
uString* Uri::Authority()
{
    uStackFrame __("Uno.Net.Http.Uri", "get_Authority()");
    return _Authority;
}

// private generated void set_Authority(string value) [instance] :877
void Uri::Authority(uString* value)
{
    uStackFrame __("Uno.Net.Http.Uri", "set_Authority(string)");
    _Authority = value;
}

// private void CreateThis(string uriString) [instance] :931
void Uri::CreateThis(uString* uriString)
{
    uStackFrame __("Uno.Net.Http.Uri", "CreateThis(string)");
    int idx = 0;
    OriginalString((AbsoluteUri(uriString), uriString));
    ::g::Uno::Net::Http::SchemeParserResult schemeResult = ::g::Uno::Net::Http::SchemeParser::Parse(uriString, &idx);
    Scheme(schemeResult.Scheme);
    int queryOrHashPartIdx = uPtr(uriString)->Length();
    int partStartIdx = uriString->Length();
    int absolutePathPartIdx = 0;

    if (schemeResult.Type == 2)
        return;

    Query(::g::Uno::Net::Http::QueryParser::Parse(uriString, Scheme(), idx, &partStartIdx));
    queryOrHashPartIdx = (partStartIdx < queryOrHashPartIdx) ? partStartIdx : queryOrHashPartIdx;
    Hash(::g::Uno::Net::Http::HashParser::Parse(uriString, idx, &partStartIdx));
    queryOrHashPartIdx = (partStartIdx < queryOrHashPartIdx) ? partStartIdx : queryOrHashPartIdx;
    AbsolutePath(::g::Uno::Net::Http::AbsolutePathParser::Parse(uriString, idx, queryOrHashPartIdx, &absolutePathPartIdx));
    PathAndQuery(::g::Uno::String::op_Addition2(AbsolutePath(), Query()));
    UserInfo(::g::Uno::Net::Http::UserInfoParser::Parse(uriString, absolutePathPartIdx, &idx));
    ::g::Uno::Net::Http::HostInfo* hostInfo = ::g::Uno::Net::Http::HostInfoParser::Parse(uriString, Scheme(), absolutePathPartIdx, &idx);
    Host(uPtr(hostInfo)->Host());
    Port(hostInfo->Port());
    Authority(hostInfo->Authority());
}

// public generated string get_Hash() [instance] :889
uString* Uri::Hash()
{
    uStackFrame __("Uno.Net.Http.Uri", "get_Hash()");
    return _Hash;
}

// private generated void set_Hash(string value) [instance] :889
void Uri::Hash(uString* value)
{
    uStackFrame __("Uno.Net.Http.Uri", "set_Hash(string)");
    _Hash = value;
}

// public generated string get_Host() [instance] :879
uString* Uri::Host()
{
    uStackFrame __("Uno.Net.Http.Uri", "get_Host()");
    return _Host;
}

// private generated void set_Host(string value) [instance] :879
void Uri::Host(uString* value)
{
    uStackFrame __("Uno.Net.Http.Uri", "set_Host(string)");
    _Host = value;
}

// public generated string get_OriginalString() [instance] :881
uString* Uri::OriginalString()
{
    uStackFrame __("Uno.Net.Http.Uri", "get_OriginalString()");
    return _OriginalString;
}

// private generated void set_OriginalString(string value) [instance] :881
void Uri::OriginalString(uString* value)
{
    uStackFrame __("Uno.Net.Http.Uri", "set_OriginalString(string)");
    _OriginalString = value;
}

// public generated string get_PathAndQuery() [instance] :883
uString* Uri::PathAndQuery()
{
    uStackFrame __("Uno.Net.Http.Uri", "get_PathAndQuery()");
    return _PathAndQuery;
}

// private generated void set_PathAndQuery(string value) [instance] :883
void Uri::PathAndQuery(uString* value)
{
    uStackFrame __("Uno.Net.Http.Uri", "set_PathAndQuery(string)");
    _PathAndQuery = value;
}

// public generated int get_Port() [instance] :885
int Uri::Port()
{
    uStackFrame __("Uno.Net.Http.Uri", "get_Port()");
    return _Port;
}

// private generated void set_Port(int value) [instance] :885
void Uri::Port(int value)
{
    uStackFrame __("Uno.Net.Http.Uri", "set_Port(int)");
    _Port = value;
}

// public generated string get_Query() [instance] :887
uString* Uri::Query()
{
    uStackFrame __("Uno.Net.Http.Uri", "get_Query()");
    return _Query;
}

// private generated void set_Query(string value) [instance] :887
void Uri::Query(uString* value)
{
    uStackFrame __("Uno.Net.Http.Uri", "set_Query(string)");
    _Query = value;
}

// public generated string get_Scheme() [instance] :891
uString* Uri::Scheme()
{
    uStackFrame __("Uno.Net.Http.Uri", "get_Scheme()");
    return _Scheme;
}

// private generated void set_Scheme(string value) [instance] :891
void Uri::Scheme(uString* value)
{
    uStackFrame __("Uno.Net.Http.Uri", "set_Scheme(string)");
    _Scheme = value;
}

// public generated string get_UserInfo() [instance] :893
uString* Uri::UserInfo()
{
    uStackFrame __("Uno.Net.Http.Uri", "get_UserInfo()");
    return _UserInfo;
}

// private generated void set_UserInfo(string value) [instance] :893
void Uri::UserInfo(uString* value)
{
    uStackFrame __("Uno.Net.Http.Uri", "set_UserInfo(string)");
    _UserInfo = value;
}

// public static string Encode(string value) [static] :978
uString* Uri::Encode(uString* value)
{
    uStackFrame __("Uno.Net.Http.Uri", "Encode(string)");
    uArray* bytes = ::g::Uno::Text::Utf8::GetBytes(value);
    int count = 0;

    for (int i = 0; i < uPtr(bytes)->Length(); i++)
    {
        count++;

        if (Uri::EscapeSymbol(uPtr(bytes)->Item<uint8_t>(i)))
            count = count + 2;
    }

    uArray* result = uArray::New(::TYPES[27/*char[]*/], count);
    int index = 0;

    for (int i1 = 0; i1 < uPtr(bytes)->Length(); i1++)
    {
        uint8_t symbol = uPtr(bytes)->Item<uint8_t>(i1);

        if (Uri::EscapeSymbol(symbol))
        {
            uPtr(result)->Item<uChar>(index++) = '%';
            result->Item<uChar>(index++) = Uri::GetHexFromNumber((symbol >> 4) & 15);
            result->Item<uChar>(index++) = Uri::GetHexFromNumber((int)(symbol & 15));
        }
        else
            uPtr(result)->Item<uChar>(index++) = (uChar)symbol;
    }

    return uString::CharArray(result);
}

// private static bool EscapeSymbol(byte symbol) [static] :1056
bool Uri::EscapeSymbol(uint8_t symbol)
{
    uStackFrame __("Uno.Net.Http.Uri", "EscapeSymbol(byte)");

    if (symbol >= 128)
        return true;

    if (::g::Uno::Char::IsLetter((uChar)symbol) || ::g::Uno::Char::IsDigit((uChar)symbol))
        return false;

    switch ((uChar)symbol)
    {
        case '-':
        case '_':
        case '.':
        case '!':
        case '~':
        case '*':
        case '\'':
        case '(':
        case ')':
            return false;
    }

    return true;
}

// private static char GetHexFromNumber(int value) [static] :1037
uChar Uri::GetHexFromNumber(int value)
{
    uStackFrame __("Uno.Net.Http.Uri", "GetHexFromNumber(int)");

    if (value > 9)
        return (uChar)((97 + value) - 10);

    return (uChar)(48 + value);
}

// public Uri New(string uriString) [static] :895
Uri* Uri::New1(uString* uriString)
{
    Uri* obj4 = (Uri*)uNew(Uri_typeof());
    obj4->ctor_(uriString);
    return obj4;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Uno.Net.Http/0.24.3/$.uno(1089)
// ---------------------------------------------------------------------------------

// public sealed class UriFormatException :1089
// {
::g::Uno::Exception_type* UriFormatException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(UriFormatException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.Net.Http.UriFormatException", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UriFormatException__New4_fn, 0, true, UriFormatException_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}

// public UriFormatException(string message) :1091
void UriFormatException__ctor_3_fn(UriFormatException* __this, uString* message)
{
    __this->ctor_3(message);
}

// public UriFormatException New(string message) :1091
void UriFormatException__New4_fn(uString* message, UriFormatException** __retval)
{
    *__retval = UriFormatException::New4(message);
}

// public UriFormatException(string message) [instance] :1091
void UriFormatException::ctor_3(uString* message)
{
    ctor_1(message);
}

// public UriFormatException New(string message) [static] :1091
UriFormatException* UriFormatException::New4(uString* message)
{
    UriFormatException* obj1 = (UriFormatException*)uNew(UriFormatException_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Uno.Net.Http/0.24.3/$.uno(1112)
// ---------------------------------------------------------------------------------

// public sealed class UriScheme :1112
// {
// static UriScheme() :1112
static void UriScheme__cctor__fn(uType* __type)
{
    ::g::Uno::Collections::List* collection2;
    ::g::Uno::Collections::List* collection1;
    UriScheme::KnownInternetSchemes_ = (collection2 = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<string>*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[88/*"http"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[89/*"https"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[90/*"ftp"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[91/*"gopher"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[92/*"nntp"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[93/*"telnet"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[94/*"wais"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[95/*"file"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[96/*"prospero"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[97/*"ws"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[98/*"wss"*/]), collection2);
    UriScheme::KnownNonInternetSchemes_ = (collection1 = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<string>*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[99/*"mailto"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[100/*"news"*/]), collection1);
}

uType* UriScheme_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(UriScheme);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.UriScheme", options);
    type->fp_ctor_ = (void*)UriScheme__New1_fn;
    type->fp_cctor_ = UriScheme__cctor__fn;
    ::STRINGS[88] = uString::Const("http");
    ::STRINGS[89] = uString::Const("https");
    ::STRINGS[90] = uString::Const("ftp");
    ::STRINGS[91] = uString::Const("gopher");
    ::STRINGS[92] = uString::Const("nntp");
    ::STRINGS[93] = uString::Const("telnet");
    ::STRINGS[94] = uString::Const("wais");
    ::STRINGS[95] = uString::Const("file");
    ::STRINGS[96] = uString::Const("prospero");
    ::STRINGS[97] = uString::Const("ws");
    ::STRINGS[98] = uString::Const("wss");
    ::STRINGS[99] = uString::Const("mailto");
    ::STRINGS[100] = uString::Const("news");
    ::TYPES[4] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[6] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Int_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Int_typeof()), (uintptr_t)&::g::Uno::Net::Http::UriScheme::_defaultPorts_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof()), (uintptr_t)&::g::Uno::Net::Http::UriScheme::KnownInternetSchemes_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof()), (uintptr_t)&::g::Uno::Net::Http::UriScheme::KnownNonInternetSchemes_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("KnownInternetSchemes", 1),
        new uField("KnownNonInternetSchemes", 2));
    type->Reflection.SetFunctions(4,
        new uFunction("get_DefaultPorts", NULL, (void*)UriScheme__get_DefaultPorts_fn, 0, true, ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Int_typeof()), 0),
        new uFunction("GetSchemeType", NULL, (void*)UriScheme__GetSchemeType_fn, 0, true, ::g::Uno::Net::Http::UriSchemeType_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("IsHttpScheme", NULL, (void*)UriScheme__IsHttpScheme_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)UriScheme__New1_fn, 0, true, UriScheme_typeof(), 0));
    return type;
}

// public generated UriScheme() :1112
void UriScheme__ctor__fn(UriScheme* __this)
{
    __this->ctor_();
}

// public static Uno.Collections.Dictionary<string, int> get_DefaultPorts() :1122
void UriScheme__get_DefaultPorts_fn(::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = UriScheme::DefaultPorts();
}

// public static Uno.Net.Http.UriSchemeType GetSchemeType(string scheme) :1145
void UriScheme__GetSchemeType_fn(uString* scheme, int* __retval)
{
    *__retval = UriScheme::GetSchemeType(scheme);
}

// public static bool IsHttpScheme(string scheme) :1159
void UriScheme__IsHttpScheme_fn(uString* scheme, bool* __retval)
{
    *__retval = UriScheme::IsHttpScheme(scheme);
}

// public generated UriScheme New() :1112
void UriScheme__New1_fn(UriScheme** __retval)
{
    *__retval = UriScheme::New1();
}

uSStrong< ::g::Uno::Collections::Dictionary*> UriScheme::_defaultPorts_;
uSStrong< ::g::Uno::Collections::List*> UriScheme::KnownInternetSchemes_;
uSStrong< ::g::Uno::Collections::List*> UriScheme::KnownNonInternetSchemes_;

// public generated UriScheme() [instance] :1112
void UriScheme::ctor_()
{
}

// public static Uno.Net.Http.UriSchemeType GetSchemeType(string scheme) [static] :1145
int UriScheme::GetSchemeType(uString* scheme)
{
    uStackFrame __("Uno.Net.Http.UriScheme", "GetSchemeType(string)");
    UriScheme_typeof()->Init();
    bool ret4;
    bool ret5;
    uString* s = ::g::Uno::String::ToLower(uPtr(scheme));

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(UriScheme::KnownInternetSchemes()), s, &ret4), ret4))
        return 0;

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(UriScheme::KnownNonInternetSchemes()), s, &ret5), ret5))
        return 1;

    return 2;
}

// public static bool IsHttpScheme(string scheme) [static] :1159
bool UriScheme::IsHttpScheme(uString* scheme)
{
    uStackFrame __("Uno.Net.Http.UriScheme", "IsHttpScheme(string)");
    UriScheme_typeof()->Init();
    uString* s = ::g::Uno::String::ToLower(uPtr(scheme));
    return ::g::Uno::String::op_Equality(s, ::STRINGS[88/*"http"*/]) || ::g::Uno::String::op_Equality(s, ::STRINGS[89/*"https"*/]);
}

// public generated UriScheme New() [static] :1112
UriScheme* UriScheme::New1()
{
    UriScheme* obj3 = (UriScheme*)uNew(UriScheme_typeof());
    obj3->ctor_();
    return obj3;
}

// public static Uno.Collections.Dictionary<string, int> get_DefaultPorts() [static] :1122
::g::Uno::Collections::Dictionary* UriScheme::DefaultPorts()
{
    uStackFrame __("Uno.Net.Http.UriScheme", "get_DefaultPorts()");
    UriScheme_typeof()->Init();

    if (UriScheme::_defaultPorts() == NULL)
    {
        UriScheme::_defaultPorts() = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[6/*Uno.Collections.Dictionary<string, int>*/]));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts()), ::STRINGS[88/*"http"*/], uCRef<int>(80));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts()), ::STRINGS[89/*"https"*/], uCRef<int>(443));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts()), ::STRINGS[90/*"ftp"*/], uCRef<int>(21));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts()), ::STRINGS[91/*"gopher"*/], uCRef<int>(70));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts()), ::STRINGS[93/*"telnet"*/], uCRef<int>(119));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts()), ::STRINGS[94/*"wais"*/], uCRef<int>(-1));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts()), ::STRINGS[95/*"file"*/], uCRef<int>(-1));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts()), ::STRINGS[96/*"prospero"*/], uCRef<int>(-1));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts()), ::STRINGS[99/*"mailto"*/], uCRef<int>(25));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts()), ::STRINGS[100/*"news"*/], uCRef<int>(-1));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts()), ::STRINGS[97/*"ws"*/], uCRef<int>(80));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts()), ::STRINGS[98/*"wss"*/], uCRef<int>(443));
    }

    return UriScheme::_defaultPorts();
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Uno.Net.Http/0.24.3/$.uno(1105)
// ---------------------------------------------------------------------------------

// public enum UriSchemeType :1105
uEnumType* UriSchemeType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Http.UriSchemeType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Internet", 0LL,
        "NonInternet", 1LL,
        "Unknown", 2LL);
    return type;
}

// ../../../../../../../usr/local/share/uno/Packages/Uno.Net.Http/0.24.3/UriParsers/$.uno(257)
// -------------------------------------------------------------------------------------------

// public sealed class UserInfoParser :257
// {
uType* UserInfoParser_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UserInfoParser);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.UserInfoParser", options);
    type->fp_ctor_ = (void*)UserInfoParser__New1_fn;
    ::STRINGS[4] = uString::Const("\\");
    ::STRINGS[10] = uString::Const(":");
    ::STRINGS[21] = uString::Const("There is an invalid character sequence in uriString.");
    ::STRINGS[101] = uString::Const("@");
    ::STRINGS[102] = uString::Const("The user name or password specified in uriString is not valid.");
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[3] = ::g::Uno::String_typeof();
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)UserInfoParser__New1_fn, 0, true, UserInfoParser_typeof(), 0),
        new uFunction("Parse", NULL, (void*)UserInfoParser__Parse_fn, 0, true, ::g::Uno::String_typeof(), 3, ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()->ByRef()));
    return type;
}

// public generated UserInfoParser() :257
void UserInfoParser__ctor__fn(UserInfoParser* __this)
{
    __this->ctor_();
}

// private static bool IsValid(string userInfo) :282
void UserInfoParser__IsValid_fn(uString* userInfo, bool* __retval)
{
    *__retval = UserInfoParser::IsValid(userInfo);
}

// public generated UserInfoParser New() :257
void UserInfoParser__New1_fn(UserInfoParser** __retval)
{
    *__retval = UserInfoParser::New1();
}

// public static string Parse(string uriString, int endIdx, int& idx) :259
void UserInfoParser__Parse_fn(uString* uriString, int* endIdx, int* idx, uString** __retval)
{
    *__retval = UserInfoParser::Parse(uriString, *endIdx, idx);
}

// public generated UserInfoParser() [instance] :257
void UserInfoParser::ctor_()
{
}

// private static bool IsValid(string userInfo) [static] :282
bool UserInfoParser::IsValid(uString* userInfo)
{
    uStackFrame __("Uno.Net.Http.UserInfoParser", "IsValid(string)");
    return (((::g::Uno::String::IndexOf1(uPtr(userInfo), ::STRINGS[4/*"\\"*/], 0) < 0) && !::g::Uno::String::EndsWith(uPtr(userInfo), ::STRINGS[10/*":"*/])) && !::g::Uno::String::StartsWith(uPtr(userInfo), ::STRINGS[10/*":"*/])) && !::g::Uno::String::IsNullOrEmpty(userInfo);
}

// public generated UserInfoParser New() [static] :257
UserInfoParser* UserInfoParser::New1()
{
    UserInfoParser* obj1 = (UserInfoParser*)uNew(UserInfoParser_typeof());
    obj1->ctor_();
    return obj1;
}

// public static string Parse(string uriString, int endIdx, int& idx) [static] :259
uString* UserInfoParser::Parse(uString* uriString, int endIdx, int* idx)
{
    uStackFrame __("Uno.Net.Http.UserInfoParser", "Parse(string,int,int&)");

    if (*idx >= endIdx)
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[21/*"There is an...*/]));

    int end = ::g::Uno::String::IndexOf1(uPtr(uriString), ::STRINGS[101/*"@"*/], *idx);

    if ((end < 0) || (end >= endIdx))
        return ::g::Uno::String::Empty();

    uString* userInfo = ::g::Uno::String::Substring1(uriString, *idx, end - *idx);

    if (!UserInfoParser::IsValid(userInfo))
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[102/*"The user na...*/]));

    *idx = end + 1;
    return userInfo;
}
// }

}}}} // ::g::Uno::Net::Http
