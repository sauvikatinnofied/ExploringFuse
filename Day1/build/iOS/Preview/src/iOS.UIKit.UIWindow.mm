// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIWindow
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIWindow*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIWindow_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.UIViewController.h>
#include <iOS.UIKit.UIWindow.h>

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class UIWindow :88428
// {
::g::iOS::UIKit::UIView_type* UIWindow_typeof()
{
    static uSStrong< ::g::iOS::UIKit::UIView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(UIWindow);
    options.TypeSize = sizeof(::g::iOS::UIKit::UIView_type);
    type = (::g::iOS::UIKit::UIView_type*)uClassType::New("iOS.UIKit.UIWindow", options);
    type->SetBase(::g::iOS::UIKit::UIView_typeof());
    type->interface1.fp_convertPointToCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGPoint*, uObject*, ::g::iOS::CoreGraphics::CGPoint*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertPointToCoordinateSpace_fn;
    type->interface1.fp_convertPointFromCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGPoint*, uObject*, ::g::iOS::CoreGraphics::CGPoint*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertPointFromCoordinateSpace_fn;
    type->interface1.fp_convertRectToCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*, uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertRectToCoordinateSpace_fn;
    type->interface1.fp_convertRectFromCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*, uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertRectFromCoordinateSpace_fn;
    type->interface1.fp_bounds = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__bounds_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::UIKit::UIView_type, interface0),
        ::g::iOS::UIKit::IUICoordinateSpace_typeof(), offsetof(::g::iOS::UIKit::UIView_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(4,
        new uFunction("rootViewController", NULL, (void*)UIWindow__rootViewController_fn, 0, false, ::g::iOS::UIKit::UIViewController_typeof(), 0),
        new uFunction("get_RootViewController", NULL, (void*)UIWindow__get_RootViewController_fn, 0, false, ::g::iOS::UIKit::UIViewController_typeof(), 0),
        new uFunction("set_RootViewController", NULL, (void*)UIWindow__set_RootViewController_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIViewController_typeof()),
        new uFunction("setRootViewController", NULL, (void*)UIWindow__setRootViewController_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIViewController_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public extern iOS.UIKit.UIViewController rootViewController() :88504
void UIWindow__rootViewController_fn(UIWindow* __this, ::g::iOS::UIKit::UIViewController** __retval)
{
    *__retval = __this->rootViewController();
}

// public iOS.UIKit.UIViewController get_RootViewController() :88457
void UIWindow__get_RootViewController_fn(UIWindow* __this, ::g::iOS::UIKit::UIViewController** __retval)
{
    *__retval = __this->RootViewController();
}

// public void set_RootViewController(iOS.UIKit.UIViewController value) :88458
void UIWindow__set_RootViewController_fn(UIWindow* __this, ::g::iOS::UIKit::UIViewController* value)
{
    __this->RootViewController(value);
}

// public extern void setRootViewController(iOS.UIKit.UIViewController rootViewController) :88507
void UIWindow__setRootViewController_fn(UIWindow* __this, ::g::iOS::UIKit::UIViewController* rootViewController_)
{
    __this->setRootViewController(rootViewController_);
}

// public extern iOS.UIKit.UIViewController rootViewController() [instance] :88504
::g::iOS::UIKit::UIViewController* UIWindow::rootViewController()
{
    uStackFrame __("iOS.UIKit.UIWindow", "rootViewController()");
    ::UIViewController* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIViewController*, @selector(rootViewController));
    return (::g::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIViewController_typeof());
}

// public iOS.UIKit.UIViewController get_RootViewController() [instance] :88457
::g::iOS::UIKit::UIViewController* UIWindow::RootViewController()
{
    uStackFrame __("iOS.UIKit.UIWindow", "get_RootViewController()");
    return rootViewController();
}

// public void set_RootViewController(iOS.UIKit.UIViewController value) [instance] :88458
void UIWindow::RootViewController(::g::iOS::UIKit::UIViewController* value)
{
    uStackFrame __("iOS.UIKit.UIWindow", "set_RootViewController(iOS.UIKit.UIViewController)");
    setRootViewController(value);
}

// public extern void setRootViewController(iOS.UIKit.UIViewController rootViewController) [instance] :88507
void UIWindow::setRootViewController(::g::iOS::UIKit::UIViewController* rootViewController_)
{
    uStackFrame __("iOS.UIKit.UIWindow", "setRootViewController(iOS.UIKit.UIViewController)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setRootViewController:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)rootViewController_));
}
// }

}}} // ::g::iOS::UIKit
