// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIScrollView
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIScrollView*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIScrollView_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSCoder.h>
#include <iOS.UIKit.IUIScrollViewDelegate.h>
#include <iOS.UIKit.UIScrollView.h>
#include <Uno.Bool.h>
#include <iOS.CoreGraphics.CGPoint.h>
#include <iOS.CoreGraphics.CGSize.h>

namespace g{
namespace iOS{
namespace UIKit{

// public extern class UIScrollView :80634
// {
::g::iOS::UIKit::UIView_type* UIScrollView_typeof()
{
    static uSStrong< ::g::iOS::UIKit::UIView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(UIScrollView);
    options.TypeSize = sizeof(::g::iOS::UIKit::UIView_type);
    type = (::g::iOS::UIKit::UIView_type*)uClassType::New("iOS.UIKit.UIScrollView", options);
    type->SetBase(::g::iOS::UIKit::UIView_typeof());
    type->fp_ctor_ = (void*)UIScrollView__New9_fn;
    type->fp_encodeWithCoder = (void(*)(::g::iOS::UIKit::UIView*, ::g::iOS::Foundation::NSCoder*))UIScrollView__encodeWithCoder_fn;
    type->fp_initWithCoder = (void(*)(::g::iOS::UIKit::UIView*, ::g::iOS::Foundation::NSCoder*))UIScrollView__initWithCoder_fn;
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
    type->Reflection.SetFunctions(18,
        new uFunction("contentOffset", NULL, (void*)UIScrollView__contentOffset_fn, 0, false, ::g::iOS::CoreGraphics::CGPoint_typeof(), 0),
        new uFunction("get_ContentOffset", NULL, (void*)UIScrollView__get_ContentOffset_fn, 0, false, ::g::iOS::CoreGraphics::CGPoint_typeof(), 0),
        new uFunction("set_ContentOffset", NULL, (void*)UIScrollView__set_ContentOffset_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGPoint_typeof()),
        new uFunction("contentSize", NULL, (void*)UIScrollView__contentSize_fn, 0, false, ::g::iOS::CoreGraphics::CGSize_typeof(), 0),
        new uFunction("get_ContentSize", NULL, (void*)UIScrollView__get_ContentSize_fn, 0, false, ::g::iOS::CoreGraphics::CGSize_typeof(), 0),
        new uFunction("set_ContentSize", NULL, (void*)UIScrollView__set_ContentSize_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGSize_typeof()),
        new uFunction("get_Delegate", NULL, (void*)UIScrollView__get_Delegate_fn, 0, false, ::g::iOS::UIKit::IUIScrollViewDelegate_typeof(), 0),
        new uFunction("set_Delegate", NULL, (void*)UIScrollView__set_Delegate_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::IUIScrollViewDelegate_typeof()),
        new uFunction("delegate_", NULL, (void*)UIScrollView__delegate__fn, 0, false, ::g::iOS::UIKit::IUIScrollViewDelegate_typeof(), 0),
        new uFunction("isScrollEnabled", NULL, (void*)UIScrollView__isScrollEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)UIScrollView__New9_fn, 0, true, UIScrollView_typeof(), 0),
        new uFunction("get_ScrollEnabled", NULL, (void*)UIScrollView__get_ScrollEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ScrollEnabled", NULL, (void*)UIScrollView__set_ScrollEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setContentOffset", NULL, (void*)UIScrollView__setContentOffset_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGPoint_typeof()),
        new uFunction("setContentOffsetAnimated", NULL, (void*)UIScrollView__setContentOffsetAnimated_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::CoreGraphics::CGPoint_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("setContentSize", NULL, (void*)UIScrollView__setContentSize_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGSize_typeof()),
        new uFunction("setDelegate", NULL, (void*)UIScrollView__setDelegate_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::IUIScrollViewDelegate_typeof()),
        new uFunction("setScrollEnabled", NULL, (void*)UIScrollView__setScrollEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public UIScrollView() :80637
void UIScrollView__ctor_8_fn(UIScrollView* __this)
{
    __this->ctor_8();
}

// public extern iOS.CoreGraphics.CGPoint contentOffset() :80839
void UIScrollView__contentOffset_fn(UIScrollView* __this, ::g::iOS::CoreGraphics::CGPoint* __retval)
{
    *__retval = __this->contentOffset();
}

// public iOS.CoreGraphics.CGPoint get_ContentOffset() :80646
void UIScrollView__get_ContentOffset_fn(UIScrollView* __this, ::g::iOS::CoreGraphics::CGPoint* __retval)
{
    *__retval = __this->ContentOffset();
}

// public void set_ContentOffset(iOS.CoreGraphics.CGPoint value) :80647
void UIScrollView__set_ContentOffset_fn(UIScrollView* __this, ::g::iOS::CoreGraphics::CGPoint* value)
{
    __this->ContentOffset(*value);
}

// public extern iOS.CoreGraphics.CGSize contentSize() :80845
void UIScrollView__contentSize_fn(UIScrollView* __this, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = __this->contentSize();
}

// public iOS.CoreGraphics.CGSize get_ContentSize() :80652
void UIScrollView__get_ContentSize_fn(UIScrollView* __this, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = __this->ContentSize();
}

// public void set_ContentSize(iOS.CoreGraphics.CGSize value) :80653
void UIScrollView__set_ContentSize_fn(UIScrollView* __this, ::g::iOS::CoreGraphics::CGSize* value)
{
    __this->ContentSize(*value);
}

// public iOS.UIKit.IUIScrollViewDelegate get_Delegate() :80664
void UIScrollView__get_Delegate_fn(UIScrollView* __this, uObject** __retval)
{
    *__retval = __this->Delegate();
}

// public void set_Delegate(iOS.UIKit.IUIScrollViewDelegate value) :80665
void UIScrollView__set_Delegate_fn(UIScrollView* __this, uObject* value)
{
    __this->Delegate(value);
}

// public extern iOS.UIKit.IUIScrollViewDelegate delegate_() :80857
void UIScrollView__delegate__fn(UIScrollView* __this, uObject** __retval)
{
    *__retval = __this->delegate_();
}

// public override sealed extern void encodeWithCoder(iOS.Foundation.NSCoder aCoder) :80998
void UIScrollView__encodeWithCoder_fn(UIScrollView* __this, ::g::iOS::Foundation::NSCoder* aCoder_)
{
    uStackFrame __("iOS.UIKit.UIScrollView", "encodeWithCoder(iOS.Foundation.NSCoder)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(encodeWithCoder:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)aCoder_));
}

// public override sealed extern void initWithCoder(iOS.Foundation.NSCoder aDecoder) :81001
void UIScrollView__initWithCoder_fn(UIScrollView* __this, ::g::iOS::Foundation::NSCoder* aDecoder_)
{
    uStackFrame __("iOS.UIKit.UIScrollView", "initWithCoder(iOS.Foundation.NSCoder)");
    uObjC_DO_INIT(__this, @selector(initWithCoder:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)aDecoder_));
}

// public extern bool isScrollEnabled() :80893
void UIScrollView__isScrollEnabled_fn(UIScrollView* __this, bool* __retval)
{
    *__retval = __this->isScrollEnabled();
}

// public UIScrollView New() :80637
void UIScrollView__New9_fn(UIScrollView** __retval)
{
    *__retval = UIScrollView::New9();
}

// public bool get_ScrollEnabled() :80700
void UIScrollView__get_ScrollEnabled_fn(UIScrollView* __this, bool* __retval)
{
    *__retval = __this->ScrollEnabled();
}

// public void set_ScrollEnabled(bool value) :80701
void UIScrollView__set_ScrollEnabled_fn(UIScrollView* __this, bool* value)
{
    __this->ScrollEnabled(*value);
}

// public extern void setContentOffset(iOS.CoreGraphics.CGPoint contentOffset) :80842
void UIScrollView__setContentOffset_fn(UIScrollView* __this, ::g::iOS::CoreGraphics::CGPoint* contentOffset_)
{
    __this->setContentOffset(*contentOffset_);
}

// public extern void setContentOffsetAnimated(iOS.CoreGraphics.CGPoint contentOffset, bool animated) :80818
void UIScrollView__setContentOffsetAnimated_fn(UIScrollView* __this, ::g::iOS::CoreGraphics::CGPoint* contentOffset_, bool* animated_)
{
    __this->setContentOffsetAnimated(*contentOffset_, *animated_);
}

// public extern void setContentSize(iOS.CoreGraphics.CGSize contentSize) :80848
void UIScrollView__setContentSize_fn(UIScrollView* __this, ::g::iOS::CoreGraphics::CGSize* contentSize_)
{
    __this->setContentSize(*contentSize_);
}

// public extern void setDelegate(iOS.UIKit.IUIScrollViewDelegate delegate_) :80860
void UIScrollView__setDelegate_fn(UIScrollView* __this, uObject* delegate__)
{
    __this->setDelegate(delegate__);
}

// public extern void setScrollEnabled(bool scrollEnabled) :80896
void UIScrollView__setScrollEnabled_fn(UIScrollView* __this, bool* scrollEnabled_)
{
    __this->setScrollEnabled(*scrollEnabled_);
}

// public UIScrollView() [instance] :80637
void UIScrollView::ctor_8()
{
    uStackFrame __("iOS.UIKit.UIScrollView", ".ctor()");
    ctor_6();
}

// public extern iOS.CoreGraphics.CGPoint contentOffset() [instance] :80839
::g::iOS::CoreGraphics::CGPoint UIScrollView::contentOffset()
{
    uStackFrame __("iOS.UIKit.UIScrollView", "contentOffset()");
    ::CGPoint __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGPoint, @selector(contentOffset));
    return uObjC::Struct::ToUno_CGPoint(__return, ::g::iOS::CoreGraphics::CGPoint());
}

// public iOS.CoreGraphics.CGPoint get_ContentOffset() [instance] :80646
::g::iOS::CoreGraphics::CGPoint UIScrollView::ContentOffset()
{
    uStackFrame __("iOS.UIKit.UIScrollView", "get_ContentOffset()");
    return contentOffset();
}

// public void set_ContentOffset(iOS.CoreGraphics.CGPoint value) [instance] :80647
void UIScrollView::ContentOffset(::g::iOS::CoreGraphics::CGPoint value)
{
    uStackFrame __("iOS.UIKit.UIScrollView", "set_ContentOffset(iOS.CoreGraphics.CGPoint)");
    setContentOffset(value);
}

// public extern iOS.CoreGraphics.CGSize contentSize() [instance] :80845
::g::iOS::CoreGraphics::CGSize UIScrollView::contentSize()
{
    uStackFrame __("iOS.UIKit.UIScrollView", "contentSize()");
    ::CGSize __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGSize, @selector(contentSize));
    return uObjC::Struct::ToUno_CGSize(__return, ::g::iOS::CoreGraphics::CGSize());
}

// public iOS.CoreGraphics.CGSize get_ContentSize() [instance] :80652
::g::iOS::CoreGraphics::CGSize UIScrollView::ContentSize()
{
    uStackFrame __("iOS.UIKit.UIScrollView", "get_ContentSize()");
    return contentSize();
}

// public void set_ContentSize(iOS.CoreGraphics.CGSize value) [instance] :80653
void UIScrollView::ContentSize(::g::iOS::CoreGraphics::CGSize value)
{
    uStackFrame __("iOS.UIKit.UIScrollView", "set_ContentSize(iOS.CoreGraphics.CGSize)");
    setContentSize(value);
}

// public iOS.UIKit.IUIScrollViewDelegate get_Delegate() [instance] :80664
uObject* UIScrollView::Delegate()
{
    uStackFrame __("iOS.UIKit.UIScrollView", "get_Delegate()");
    return delegate_();
}

// public void set_Delegate(iOS.UIKit.IUIScrollViewDelegate value) [instance] :80665
void UIScrollView::Delegate(uObject* value)
{
    uStackFrame __("iOS.UIKit.UIScrollView", "set_Delegate(iOS.UIKit.IUIScrollViewDelegate)");
    setDelegate(value);
}

// public extern iOS.UIKit.IUIScrollViewDelegate delegate_() [instance] :80857
uObject* UIScrollView::delegate_()
{
    uStackFrame __("iOS.UIKit.UIScrollView", "delegate_()");
    id<UIScrollViewDelegate> __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, id<UIScrollViewDelegate>, @selector(delegate));
    return uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::Interop::IUIScrollViewDelegate_typeof());
}

// public extern bool isScrollEnabled() [instance] :80893
bool UIScrollView::isScrollEnabled()
{
    uStackFrame __("iOS.UIKit.UIScrollView", "isScrollEnabled()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isScrollEnabled));
    return (bool)__return;
}

// public bool get_ScrollEnabled() [instance] :80700
bool UIScrollView::ScrollEnabled()
{
    uStackFrame __("iOS.UIKit.UIScrollView", "get_ScrollEnabled()");
    return isScrollEnabled();
}

// public void set_ScrollEnabled(bool value) [instance] :80701
void UIScrollView::ScrollEnabled(bool value)
{
    uStackFrame __("iOS.UIKit.UIScrollView", "set_ScrollEnabled(bool)");
    setScrollEnabled(value);
}

// public extern void setContentOffset(iOS.CoreGraphics.CGPoint contentOffset) [instance] :80842
void UIScrollView::setContentOffset(::g::iOS::CoreGraphics::CGPoint contentOffset_)
{
    uStackFrame __("iOS.UIKit.UIScrollView", "setContentOffset(iOS.CoreGraphics.CGPoint)");
    ::g::iOS::CoreGraphics::CGPoint contentOffset__ = contentOffset_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setContentOffset:),
        uObjC::Struct::FromUno_CGPoint(contentOffset__, ::CGPoint()));
}

// public extern void setContentOffsetAnimated(iOS.CoreGraphics.CGPoint contentOffset, bool animated) [instance] :80818
void UIScrollView::setContentOffsetAnimated(::g::iOS::CoreGraphics::CGPoint contentOffset_, bool animated_)
{
    uStackFrame __("iOS.UIKit.UIScrollView", "setContentOffsetAnimated(iOS.CoreGraphics.CGPoint,bool)");
    ::g::iOS::CoreGraphics::CGPoint contentOffset__ = contentOffset_;
    bool animated__ = animated_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setContentOffset:animated:),
        uObjC::Struct::FromUno_CGPoint(contentOffset__, ::CGPoint()),
        (BOOL)animated__);
}

// public extern void setContentSize(iOS.CoreGraphics.CGSize contentSize) [instance] :80848
void UIScrollView::setContentSize(::g::iOS::CoreGraphics::CGSize contentSize_)
{
    uStackFrame __("iOS.UIKit.UIScrollView", "setContentSize(iOS.CoreGraphics.CGSize)");
    ::g::iOS::CoreGraphics::CGSize contentSize__ = contentSize_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setContentSize:),
        uObjC::Struct::FromUno_CGSize(contentSize__, ::CGSize()));
}

// public extern void setDelegate(iOS.UIKit.IUIScrollViewDelegate delegate_) [instance] :80860
void UIScrollView::setDelegate(uObject* delegate__)
{
    uStackFrame __("iOS.UIKit.UIScrollView", "setDelegate(iOS.UIKit.IUIScrollViewDelegate)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setDelegate:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)delegate__, ::g::iOS::UIKit::IUIScrollViewDelegate_typeof()));
}

// public extern void setScrollEnabled(bool scrollEnabled) [instance] :80896
void UIScrollView::setScrollEnabled(bool scrollEnabled_)
{
    uStackFrame __("iOS.UIKit.UIScrollView", "setScrollEnabled(bool)");
    bool scrollEnabled__ = scrollEnabled_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setScrollEnabled:),
        (BOOL)scrollEnabled__);
}

// public UIScrollView New() [static] :80637
UIScrollView* UIScrollView::New9()
{
    UIScrollView* obj1 = (UIScrollView*)uNew(UIScrollView_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

}}} // ::g::iOS::UIKit
