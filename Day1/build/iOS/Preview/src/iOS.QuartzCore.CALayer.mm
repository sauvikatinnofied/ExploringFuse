// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE CALayer
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::QuartzCore::CALayer*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::QuartzCore::CALayer_typeof()

#include <QuartzCore/QuartzCore.h>
#include <uObjC.Wrapper.h>
#include <iOS.CoreGraphics.CGColorRef.h>
#include <iOS.QuartzCore.CALayer.h>
#include <iOS.CoreGraphics.CGPoint.h>
#include <iOS.CoreGraphics.CGRect.h>
#include <iOS.QuartzCore.CATransform3D.h>

namespace g{
namespace iOS{
namespace QuartzCore{

// public extern class CALayer :13458
// {
::g::iOS::Foundation::NSObject_type* CALayer_typeof()
{
    static uSStrong< ::g::iOS::Foundation::NSObject_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CALayer);
    options.TypeSize = sizeof(::g::iOS::Foundation::NSObject_type);
    type = (::g::iOS::Foundation::NSObject_type*)uClassType::New("iOS.QuartzCore.CALayer", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_ctor_ = (void*)CALayer__New5_fn;
    type->fp_init = (void(*)(::g::iOS::Foundation::NSObject*))CALayer__init_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::Foundation::NSObject_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(23,
        new uFunction("addSublayer", NULL, (void*)CALayer__addSublayer_fn, 0, false, uVoid_typeof(), 1, CALayer_typeof()),
        new uFunction("anchorPoint", NULL, (void*)CALayer__anchorPoint_fn, 0, false, ::g::iOS::CoreGraphics::CGPoint_typeof(), 0),
        new uFunction("get_AnchorPoint", NULL, (void*)CALayer__get_AnchorPoint_fn, 0, false, ::g::iOS::CoreGraphics::CGPoint_typeof(), 0),
        new uFunction("set_AnchorPoint", NULL, (void*)CALayer__set_AnchorPoint_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGPoint_typeof()),
        new uFunction("backgroundColor", NULL, (void*)CALayer__backgroundColor_fn, 0, false, ::g::iOS::CoreGraphics::CGColorRef_typeof(), 0),
        new uFunction("get_BackgroundColor", NULL, (void*)CALayer__get_BackgroundColor_fn, 0, false, ::g::iOS::CoreGraphics::CGColorRef_typeof(), 0),
        new uFunction("set_BackgroundColor", NULL, (void*)CALayer__set_BackgroundColor_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGColorRef_typeof()),
        new uFunction("bounds", NULL, (void*)CALayer__bounds_fn, 0, false, ::g::iOS::CoreGraphics::CGRect_typeof(), 0),
        new uFunction("get_Bounds", NULL, (void*)CALayer__get_Bounds_fn, 0, false, ::g::iOS::CoreGraphics::CGRect_typeof(), 0),
        new uFunction("set_Bounds", NULL, (void*)CALayer__set_Bounds_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGRect_typeof()),
        new uFunction(".ctor", NULL, (void*)CALayer__New5_fn, 0, true, CALayer_typeof(), 0),
        new uFunction("position", NULL, (void*)CALayer__position_fn, 0, false, ::g::iOS::CoreGraphics::CGPoint_typeof(), 0),
        new uFunction("get_Position", NULL, (void*)CALayer__get_Position_fn, 0, false, ::g::iOS::CoreGraphics::CGPoint_typeof(), 0),
        new uFunction("set_Position", NULL, (void*)CALayer__set_Position_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGPoint_typeof()),
        new uFunction("removeFromSuperlayer", NULL, (void*)CALayer__removeFromSuperlayer_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("setAnchorPoint", NULL, (void*)CALayer__setAnchorPoint_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGPoint_typeof()),
        new uFunction("setBackgroundColor", NULL, (void*)CALayer__setBackgroundColor_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGColorRef_typeof()),
        new uFunction("setBounds", NULL, (void*)CALayer__setBounds_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGRect_typeof()),
        new uFunction("setPosition", NULL, (void*)CALayer__setPosition_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGPoint_typeof()),
        new uFunction("setTransform", NULL, (void*)CALayer__setTransform_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::QuartzCore::CATransform3D_typeof()),
        new uFunction("transform", NULL, (void*)CALayer__transform_fn, 0, false, ::g::iOS::QuartzCore::CATransform3D_typeof(), 0),
        new uFunction("get_Transform", NULL, (void*)CALayer__get_Transform_fn, 0, false, ::g::iOS::QuartzCore::CATransform3D_typeof(), 0),
        new uFunction("set_Transform", NULL, (void*)CALayer__set_Transform_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::QuartzCore::CATransform3D_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public CALayer() :13461
void CALayer__ctor_4_fn(CALayer* __this)
{
    __this->ctor_4();
}

// public extern void addSublayer(iOS.QuartzCore.CALayer layer) :13845
void CALayer__addSublayer_fn(CALayer* __this, CALayer* layer_)
{
    __this->addSublayer(layer_);
}

// public extern iOS.CoreGraphics.CGPoint anchorPoint() :13959
void CALayer__anchorPoint_fn(CALayer* __this, ::g::iOS::CoreGraphics::CGPoint* __retval)
{
    *__retval = __this->anchorPoint();
}

// public iOS.CoreGraphics.CGPoint get_AnchorPoint() :13488
void CALayer__get_AnchorPoint_fn(CALayer* __this, ::g::iOS::CoreGraphics::CGPoint* __retval)
{
    *__retval = __this->AnchorPoint();
}

// public void set_AnchorPoint(iOS.CoreGraphics.CGPoint value) :13489
void CALayer__set_AnchorPoint_fn(CALayer* __this, ::g::iOS::CoreGraphics::CGPoint* value)
{
    __this->AnchorPoint(*value);
}

// public extern iOS.CoreGraphics.CGColorRef backgroundColor() :14106
void CALayer__backgroundColor_fn(CALayer* __this, app::CGColorRef** __retval)
{
    *__retval = __this->backgroundColor();
}

// public iOS.CoreGraphics.CGColorRef get_BackgroundColor() :13637
void CALayer__get_BackgroundColor_fn(CALayer* __this, app::CGColorRef** __retval)
{
    *__retval = __this->BackgroundColor();
}

// public void set_BackgroundColor(iOS.CoreGraphics.CGColorRef value) :13638
void CALayer__set_BackgroundColor_fn(CALayer* __this, app::CGColorRef** value)
{
    __this->BackgroundColor(*value);
}

// public extern iOS.CoreGraphics.CGRect bounds() :13941
void CALayer__bounds_fn(CALayer* __this, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = __this->bounds();
}

// public iOS.CoreGraphics.CGRect get_Bounds() :13470
void CALayer__get_Bounds_fn(CALayer* __this, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = __this->Bounds();
}

// public void set_Bounds(iOS.CoreGraphics.CGRect value) :13471
void CALayer__set_Bounds_fn(CALayer* __this, ::g::iOS::CoreGraphics::CGRect* value)
{
    __this->Bounds(*value);
}

// public override sealed extern void init() :13812
void CALayer__init_fn(CALayer* __this)
{
    uStackFrame __("iOS.QuartzCore.CALayer", "init()");
    uObjC_DO_INIT(__this, @selector(init));
}

// public CALayer New() :13461
void CALayer__New5_fn(CALayer** __retval)
{
    *__retval = CALayer::New5();
}

// public extern iOS.CoreGraphics.CGPoint position() :13947
void CALayer__position_fn(CALayer* __this, ::g::iOS::CoreGraphics::CGPoint* __retval)
{
    *__retval = __this->position();
}

// public iOS.CoreGraphics.CGPoint get_Position() :13476
void CALayer__get_Position_fn(CALayer* __this, ::g::iOS::CoreGraphics::CGPoint* __retval)
{
    *__retval = __this->Position();
}

// public void set_Position(iOS.CoreGraphics.CGPoint value) :13477
void CALayer__set_Position_fn(CALayer* __this, ::g::iOS::CoreGraphics::CGPoint* value)
{
    __this->Position(*value);
}

// public extern void removeFromSuperlayer() :13842
void CALayer__removeFromSuperlayer_fn(CALayer* __this)
{
    __this->removeFromSuperlayer();
}

// public extern void setAnchorPoint(iOS.CoreGraphics.CGPoint anchorPoint) :13962
void CALayer__setAnchorPoint_fn(CALayer* __this, ::g::iOS::CoreGraphics::CGPoint* anchorPoint_)
{
    __this->setAnchorPoint(*anchorPoint_);
}

// public extern void setBackgroundColor(iOS.CoreGraphics.CGColorRef backgroundColor) :14109
void CALayer__setBackgroundColor_fn(CALayer* __this, app::CGColorRef** backgroundColor_)
{
    __this->setBackgroundColor(*backgroundColor_);
}

// public extern void setBounds(iOS.CoreGraphics.CGRect bounds) :13944
void CALayer__setBounds_fn(CALayer* __this, ::g::iOS::CoreGraphics::CGRect* bounds_)
{
    __this->setBounds(*bounds_);
}

// public extern void setPosition(iOS.CoreGraphics.CGPoint position) :13950
void CALayer__setPosition_fn(CALayer* __this, ::g::iOS::CoreGraphics::CGPoint* position_)
{
    __this->setPosition(*position_);
}

// public extern void setTransform(iOS.QuartzCore.CATransform3D transform) :13974
void CALayer__setTransform_fn(CALayer* __this, ::g::iOS::QuartzCore::CATransform3D* transform_)
{
    __this->setTransform(*transform_);
}

// public extern iOS.QuartzCore.CATransform3D transform() :13971
void CALayer__transform_fn(CALayer* __this, ::g::iOS::QuartzCore::CATransform3D* __retval)
{
    *__retval = __this->transform();
}

// public iOS.QuartzCore.CATransform3D get_Transform() :13500
void CALayer__get_Transform_fn(CALayer* __this, ::g::iOS::QuartzCore::CATransform3D* __retval)
{
    *__retval = __this->Transform();
}

// public void set_Transform(iOS.QuartzCore.CATransform3D value) :13501
void CALayer__set_Transform_fn(CALayer* __this, ::g::iOS::QuartzCore::CATransform3D* value)
{
    __this->Transform(*value);
}

// public CALayer() [instance] :13461
void CALayer::ctor_4()
{
    uStackFrame __("iOS.QuartzCore.CALayer", ".ctor()");
    ctor_2();
}

// public extern void addSublayer(iOS.QuartzCore.CALayer layer) [instance] :13845
void CALayer::addSublayer(CALayer* layer_)
{
    uStackFrame __("iOS.QuartzCore.CALayer", "addSublayer(iOS.QuartzCore.CALayer)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(addSublayer:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)layer_));
}

// public extern iOS.CoreGraphics.CGPoint anchorPoint() [instance] :13959
::g::iOS::CoreGraphics::CGPoint CALayer::anchorPoint()
{
    uStackFrame __("iOS.QuartzCore.CALayer", "anchorPoint()");
    ::CGPoint __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGPoint, @selector(anchorPoint));
    return uObjC::Struct::ToUno_CGPoint(__return, ::g::iOS::CoreGraphics::CGPoint());
}

// public iOS.CoreGraphics.CGPoint get_AnchorPoint() [instance] :13488
::g::iOS::CoreGraphics::CGPoint CALayer::AnchorPoint()
{
    uStackFrame __("iOS.QuartzCore.CALayer", "get_AnchorPoint()");
    return anchorPoint();
}

// public void set_AnchorPoint(iOS.CoreGraphics.CGPoint value) [instance] :13489
void CALayer::AnchorPoint(::g::iOS::CoreGraphics::CGPoint value)
{
    uStackFrame __("iOS.QuartzCore.CALayer", "set_AnchorPoint(iOS.CoreGraphics.CGPoint)");
    setAnchorPoint(value);
}

// public extern iOS.CoreGraphics.CGColorRef backgroundColor() [instance] :14106
app::CGColorRef* CALayer::backgroundColor()
{
    uStackFrame __("iOS.QuartzCore.CALayer", "backgroundColor()");
    ::CGColorRef __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGColorRef, @selector(backgroundColor));
    return (app::CGColorRef*)(size_t) __return;
}

// public iOS.CoreGraphics.CGColorRef get_BackgroundColor() [instance] :13637
app::CGColorRef* CALayer::BackgroundColor()
{
    uStackFrame __("iOS.QuartzCore.CALayer", "get_BackgroundColor()");
    return backgroundColor();
}

// public void set_BackgroundColor(iOS.CoreGraphics.CGColorRef value) [instance] :13638
void CALayer::BackgroundColor(app::CGColorRef* value)
{
    uStackFrame __("iOS.QuartzCore.CALayer", "set_BackgroundColor(iOS.CoreGraphics.CGColorRef)");
    setBackgroundColor(value);
}

// public extern iOS.CoreGraphics.CGRect bounds() [instance] :13941
::g::iOS::CoreGraphics::CGRect CALayer::bounds()
{
    uStackFrame __("iOS.QuartzCore.CALayer", "bounds()");
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGRect, @selector(bounds));
    return uObjC::Struct::ToUno_CGRect(__return, ::g::iOS::CoreGraphics::CGRect());
}

// public iOS.CoreGraphics.CGRect get_Bounds() [instance] :13470
::g::iOS::CoreGraphics::CGRect CALayer::Bounds()
{
    uStackFrame __("iOS.QuartzCore.CALayer", "get_Bounds()");
    return bounds();
}

// public void set_Bounds(iOS.CoreGraphics.CGRect value) [instance] :13471
void CALayer::Bounds(::g::iOS::CoreGraphics::CGRect value)
{
    uStackFrame __("iOS.QuartzCore.CALayer", "set_Bounds(iOS.CoreGraphics.CGRect)");
    setBounds(value);
}

// public extern iOS.CoreGraphics.CGPoint position() [instance] :13947
::g::iOS::CoreGraphics::CGPoint CALayer::position()
{
    uStackFrame __("iOS.QuartzCore.CALayer", "position()");
    ::CGPoint __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGPoint, @selector(position));
    return uObjC::Struct::ToUno_CGPoint(__return, ::g::iOS::CoreGraphics::CGPoint());
}

// public iOS.CoreGraphics.CGPoint get_Position() [instance] :13476
::g::iOS::CoreGraphics::CGPoint CALayer::Position()
{
    uStackFrame __("iOS.QuartzCore.CALayer", "get_Position()");
    return position();
}

// public void set_Position(iOS.CoreGraphics.CGPoint value) [instance] :13477
void CALayer::Position(::g::iOS::CoreGraphics::CGPoint value)
{
    uStackFrame __("iOS.QuartzCore.CALayer", "set_Position(iOS.CoreGraphics.CGPoint)");
    setPosition(value);
}

// public extern void removeFromSuperlayer() [instance] :13842
void CALayer::removeFromSuperlayer()
{
    uStackFrame __("iOS.QuartzCore.CALayer", "removeFromSuperlayer()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(removeFromSuperlayer));
}

// public extern void setAnchorPoint(iOS.CoreGraphics.CGPoint anchorPoint) [instance] :13962
void CALayer::setAnchorPoint(::g::iOS::CoreGraphics::CGPoint anchorPoint_)
{
    uStackFrame __("iOS.QuartzCore.CALayer", "setAnchorPoint(iOS.CoreGraphics.CGPoint)");
    ::g::iOS::CoreGraphics::CGPoint anchorPoint__ = anchorPoint_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setAnchorPoint:),
        uObjC::Struct::FromUno_CGPoint(anchorPoint__, ::CGPoint()));
}

// public extern void setBackgroundColor(iOS.CoreGraphics.CGColorRef backgroundColor) [instance] :14109
void CALayer::setBackgroundColor(app::CGColorRef* backgroundColor_)
{
    uStackFrame __("iOS.QuartzCore.CALayer", "setBackgroundColor(iOS.CoreGraphics.CGColorRef)");
    app::CGColorRef* backgroundColor__ = backgroundColor_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setBackgroundColor:),
        (::CGColorRef)(size_t) backgroundColor__);
}

// public extern void setBounds(iOS.CoreGraphics.CGRect bounds) [instance] :13944
void CALayer::setBounds(::g::iOS::CoreGraphics::CGRect bounds_)
{
    uStackFrame __("iOS.QuartzCore.CALayer", "setBounds(iOS.CoreGraphics.CGRect)");
    ::g::iOS::CoreGraphics::CGRect bounds__ = bounds_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setBounds:),
        uObjC::Struct::FromUno_CGRect(bounds__, ::CGRect()));
}

// public extern void setPosition(iOS.CoreGraphics.CGPoint position) [instance] :13950
void CALayer::setPosition(::g::iOS::CoreGraphics::CGPoint position_)
{
    uStackFrame __("iOS.QuartzCore.CALayer", "setPosition(iOS.CoreGraphics.CGPoint)");
    ::g::iOS::CoreGraphics::CGPoint position__ = position_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setPosition:),
        uObjC::Struct::FromUno_CGPoint(position__, ::CGPoint()));
}

// public extern void setTransform(iOS.QuartzCore.CATransform3D transform) [instance] :13974
void CALayer::setTransform(::g::iOS::QuartzCore::CATransform3D transform_)
{
    uStackFrame __("iOS.QuartzCore.CALayer", "setTransform(iOS.QuartzCore.CATransform3D)");
    ::g::iOS::QuartzCore::CATransform3D transform__ = transform_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setTransform:),
        uObjC::Struct::FromUno_CATransform3D(transform__, ::CATransform3D()));
}

// public extern iOS.QuartzCore.CATransform3D transform() [instance] :13971
::g::iOS::QuartzCore::CATransform3D CALayer::transform()
{
    uStackFrame __("iOS.QuartzCore.CALayer", "transform()");
    ::CATransform3D __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CATransform3D, @selector(transform));
    return uObjC::Struct::ToUno_CATransform3D(__return, ::g::iOS::QuartzCore::CATransform3D());
}

// public iOS.QuartzCore.CATransform3D get_Transform() [instance] :13500
::g::iOS::QuartzCore::CATransform3D CALayer::Transform()
{
    uStackFrame __("iOS.QuartzCore.CALayer", "get_Transform()");
    return transform();
}

// public void set_Transform(iOS.QuartzCore.CATransform3D value) [instance] :13501
void CALayer::Transform(::g::iOS::QuartzCore::CATransform3D value)
{
    uStackFrame __("iOS.QuartzCore.CALayer", "set_Transform(iOS.QuartzCore.CATransform3D)");
    setTransform(value);
}

// public CALayer New() [static] :13461
CALayer* CALayer::New5()
{
    CALayer* obj1 = (CALayer*)uNew(CALayer_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

}}} // ::g::iOS::QuartzCore
