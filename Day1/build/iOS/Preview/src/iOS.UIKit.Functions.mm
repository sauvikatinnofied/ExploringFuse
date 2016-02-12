// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/functions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <iOS.CoreGraphics.CGContextRef.h>
#include <iOS.UIKit.Functions.h>
#include <iOS.UIKit.UIImage.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <iOS.CoreGraphics.CGSize.h>

namespace g{
namespace iOS{
namespace UIKit{

// public static class Functions :10191
// {
uClassType* Functions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("iOS.UIKit.Functions", options);
    type->Reflection.SetFunctions(5,
        new uFunction("UIGraphicsBeginImageContextWithOptions", NULL, (void*)Functions__UIGraphicsBeginImageContextWithOptions_fn, 0, true, uVoid_typeof(), 3, ::g::iOS::CoreGraphics::CGSize_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("UIGraphicsEndImageContext", NULL, (void*)Functions__UIGraphicsEndImageContext_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("UIGraphicsGetImageFromCurrentImageContext", NULL, (void*)Functions__UIGraphicsGetImageFromCurrentImageContext_fn, 0, true, ::g::iOS::UIKit::UIImage_typeof(), 0),
        new uFunction("UIGraphicsPopContext", NULL, (void*)Functions__UIGraphicsPopContext_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("UIGraphicsPushContext", NULL, (void*)Functions__UIGraphicsPushContext_fn, 0, true, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGContextRef_typeof()));
    return type;
}

// public static void UIGraphicsBeginImageContextWithOptions(iOS.CoreGraphics.CGSize size, bool opaque, double scale) :10462
void Functions__UIGraphicsBeginImageContextWithOptions_fn(::g::iOS::CoreGraphics::CGSize* size, bool* opaque, double* scale)
{
    Functions::UIGraphicsBeginImageContextWithOptions(*size, *opaque, *scale);
}

// public static void UIGraphicsEndImageContext() :10471
void Functions__UIGraphicsEndImageContext_fn()
{
    Functions::UIGraphicsEndImageContext();
}

// public static iOS.UIKit.UIImage UIGraphicsGetImageFromCurrentImageContext() :10466
void Functions__UIGraphicsGetImageFromCurrentImageContext_fn(::g::iOS::UIKit::UIImage** __retval)
{
    *__retval = Functions::UIGraphicsGetImageFromCurrentImageContext();
}

// public static void UIGraphicsPopContext() :10434
void Functions__UIGraphicsPopContext_fn()
{
    Functions::UIGraphicsPopContext();
}

// public static void UIGraphicsPushContext(iOS.CoreGraphics.CGContextRef context) :10430
void Functions__UIGraphicsPushContext_fn(app::CGContextRef** context)
{
    Functions::UIGraphicsPushContext(*context);
}

// public static void UIGraphicsBeginImageContextWithOptions(iOS.CoreGraphics.CGSize size, bool opaque, double scale) [static] :10462
void Functions::UIGraphicsBeginImageContextWithOptions(::g::iOS::CoreGraphics::CGSize size, bool opaque, double scale)
{
    uStackFrame __("iOS.UIKit.Functions", "UIGraphicsBeginImageContextWithOptions(iOS.CoreGraphics.CGSize,bool,double)");
    ::UIGraphicsBeginImageContextWithOptions(uObjC::Struct::FromUno_CGSize(size, ::CGSize()), (BOOL)opaque, (CGFloat)scale);
}

// public static void UIGraphicsEndImageContext() [static] :10471
void Functions::UIGraphicsEndImageContext()
{
    uStackFrame __("iOS.UIKit.Functions", "UIGraphicsEndImageContext()");
    ::UIGraphicsEndImageContext();
}

// public static iOS.UIKit.UIImage UIGraphicsGetImageFromCurrentImageContext() [static] :10466
::g::iOS::UIKit::UIImage* Functions::UIGraphicsGetImageFromCurrentImageContext()
{
    uStackFrame __("iOS.UIKit.Functions", "UIGraphicsGetImageFromCurrentImageContext()");
    ::g::iOS::UIKit::UIImage* __return1 = (::g::iOS::UIKit::UIImage*)uObjC::Lifetime::GetUnoObject(::UIGraphicsGetImageFromCurrentImageContext(), ::g::iOS::UIKit::UIImage_typeof());
    return __return1;
}

// public static void UIGraphicsPopContext() [static] :10434
void Functions::UIGraphicsPopContext()
{
    uStackFrame __("iOS.UIKit.Functions", "UIGraphicsPopContext()");
    ::UIGraphicsPopContext();
}

// public static void UIGraphicsPushContext(iOS.CoreGraphics.CGContextRef context) [static] :10430
void Functions::UIGraphicsPushContext(app::CGContextRef* context)
{
    uStackFrame __("iOS.UIKit.Functions", "UIGraphicsPushContext(iOS.CoreGraphics.CGContextRef)");
    ::UIGraphicsPushContext((::CGContextRef)(size_t) context);
}
// }

}}} // ::g::iOS::UIKit
