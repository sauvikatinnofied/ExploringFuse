// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Scripting.JavaScriptCore.ExceptionHandler.h>
#include <Fuse.Scripting.JavaScriptCore.ExceptionHandlerDelegate.h>
#include <iOS.JavaScriptCore.JSContext.h>
#include <JavaScriptCore/JavaScriptCore.h>
#include <uObjC.UnoObject.h>

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScriptCore{

// internal static extern class ExceptionHandler :335
// {
uClassType* ExceptionHandler_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.JavaScriptCore.ExceptionHandler", options);
    return type;
}

// public static extern void Set(iOS.JavaScriptCore.JSContext context, Fuse.Scripting.JavaScriptCore.ExceptionHandlerDelegate handler) :338
void ExceptionHandler__Set_fn(::g::iOS::JavaScriptCore::JSContext* context_, uDelegate* handler_)
{
    ExceptionHandler::Set(context_, handler_);
}

// public static extern void Set(iOS.JavaScriptCore.JSContext context, Fuse.Scripting.JavaScriptCore.ExceptionHandlerDelegate handler) [static] :338
void ExceptionHandler::Set(::g::iOS::JavaScriptCore::JSContext* context_, uDelegate* handler_)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.ExceptionHandler", "Set(iOS.JavaScriptCore.JSContext,Fuse.Scripting.JavaScriptCore.ExceptionHandlerDelegate)");
    JSContext *objcContext = uObjC::Lifetime::GetNativeHandle((uObject*)context_);
    StrongUnoObject *objcHandler = [[StrongUnoObject alloc] initWithUnoObject:handler_];
    [objcContext setExceptionHandler:Block_copy(^(JSContext* context, JSValue* value) {
        uDelegate* unoHandler =
            (uDelegate*)[objcHandler unoObject];
        ::g::iOS::JavaScriptCore::JSContext* unoContext =
            (::g::iOS::JavaScriptCore::JSContext*) uObjC::Lifetime::GetUnoObject(context, ::g::iOS::JavaScriptCore::JSContext_typeof());
        ::g::iOS::JavaScriptCore::JSValue* unoValue =
            (::g::iOS::JavaScriptCore::JSValue*) uObjC::Lifetime::GetUnoObject(value, ::g::iOS::JavaScriptCore::JSValue_typeof());
        uUnbox<void>(unoHandler->Invoke(2, unoContext, unoValue));
    })];
}
// }

}}}} // ::g::Fuse::Scripting::JavaScriptCore
