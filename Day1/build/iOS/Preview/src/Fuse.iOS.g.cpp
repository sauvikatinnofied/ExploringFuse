// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseiOS_bundle.h>
#include <Fuse.AppBase.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.ContentControl.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.GraphicsView.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.NativeViewHost.h>
#include <Fuse.Controls.ParentControl.h>
#include <Fuse.Controls.PlainTextEdit.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Slider.h>
#include <Fuse.Controls.Switch.h>
#include <Fuse.Controls.TextBlock.h>
#include <Fuse.Controls.TextEdit.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.GradientStop.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.TextAlignment.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventData.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.iOS.Blitter.h>
#include <Fuse.iOS.ControlEvent.h>
#include <Fuse.iOS.Controls.Button.h>
#include <Fuse.iOS.Controls.Circle.h>
#include <Fuse.iOS.Controls.Image.h>
#include <Fuse.iOS.Controls.Rectangle.h>
#include <Fuse.iOS.Controls.Slider.h>
#include <Fuse.iOS.Controls.Switch.h>
#include <Fuse.iOS.Controls.TextBlock.h>
#include <Fuse.iOS.Controls.TextInput.h>
#include <Fuse.iOS.Controls.WebView.h>
#include <Fuse.iOS.InputDispatch.h>
#include <Fuse.iOS.InputDispatch.TouchEvents.h>
#include <Fuse.iOS.iOSBindingView.h>
#include <Fuse.iOS.iOSDeviceInterop.h>
#include <Fuse.iOS.iOSExtensions.h>
#include <Fuse.iOS.iOSInterop.h>
#include <Fuse.iOS.NativeStyle.h>
#include <Fuse.iOS.NativeStyle.Template.h>
#include <Fuse.iOS.NativeStyle.Template.Template1.h>
#include <Fuse.iOS.NativeStyle.Template.Template2.Factory.h>
#include <Fuse.iOS.NativeStyle.Template.Template2.Factory1.h>
#include <Fuse.iOS.NativeStyle.Template.Template2.h>
#include <Fuse.iOS.NativeTemplate.h>
#include <Fuse.iOS.NativeViews.ContentControl.h>
#include <Fuse.iOS.NativeViews.GenericNativeView.h>
#include <Fuse.iOS.NativeViews.GraphicsView.h>
#include <Fuse.iOS.NativeViews.NativeView.h>
#include <Fuse.iOS.NativeViews.NativeViewHost.h>
#include <Fuse.iOS.NativeViews.ParentControl.h>
#include <Fuse.iOS.NativeViews.ScrollView.h>
#include <Fuse.iOS.RootView.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.iOS.TextRenderer.h>
#include <Fuse.iOS.Transform.h>
#include <Fuse.iOS.UIControlCallback.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Node.h>
#include <Fuse.Style.h>
#include <Fuse.StyleProperty-2.h>
#include <Fuse.Themes.GraphicsStyle.h>
#include <iOS.CoreGraphics.CGColorRef.h>
#include <iOS.CoreGraphics.CGPoint.h>
#include <iOS.CoreGraphics.CGRect.h>
#include <iOS.CoreGraphics.CGSize.h>
#include <iOS.Foundation.INSCopying.h>
#include <iOS.Foundation.NSArray.h>
#include <iOS.Foundation.NSDictionary.h>
#include <iOS.Foundation.NSMutableArray.h>
#include <iOS.Foundation.NSMutableDictionary.h>
#include <iOS.Foundation.NSNumber.h>
#include <iOS.Foundation.NSObject.h>
#include <iOS.Foundation.NSSet.h>
#include <iOS.QuartzCore.CAGradientLayer.h>
#include <iOS.QuartzCore.CALayer.h>
#include <iOS.QuartzCore.CATransform3D.h>
#include <iOS.UIKit.NSTextAlignment.h>
#include <iOS.UIKit.UIColor.h>
#include <iOS.UIKit.UIControl.h>
#include <iOS.UIKit.UIControlEvents.h>
#include <iOS.UIKit.UIEvent.h>
#include <iOS.UIKit.UITouch.h>
#include <iOS.UIKit.UITouchPhase.h>
#include <iOS.UIKit.UIView.h>
#include <ObjC.Bindings.Object.h>
#include <ObjC.Class.h>
#include <ObjC.ID.h>
#include <ObjC.Selector.h>
#include <Uno.Action.h>
#include <Uno.Action-2.h>
#include <Uno.ArgumentException.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.iOS.StatusBar.h>
#include <Uno.Platform.iOS.StatusBarAnimation.h>
#include <Uno.Platform.iOS.StatusBarStyle.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.Platform.ViewNativeHandle.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Platform2.Display.h>
#include <Uno.Rect.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.ULong.h>
#include <Uno.UX.Factory.h>
#include <Uno.UX.Template-1.h>
static uString* STRINGS[6];
static uType* TYPES[75];

namespace g{
namespace Fuse{
namespace iOS{

// ../../../../../../../usr/local/share/uno/Packages/Fuse.iOS/0.24.6/$.uno(1301)
// -----------------------------------------------------------------------------

// internal sealed class Blitter :1301
// {
// static Blitter() :1301
static void Blitter__cctor__fn(uType* __type)
{
    Blitter::Singleton_ = Blitter::New1();
}

uType* Blitter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Blitter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.iOS.Blitter", options);
    type->fp_ctor_ = (void*)Blitter__New1_fn;
    type->fp_cctor_ = Blitter__cctor__fn;
    ::TYPES[0] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[1] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[2] = ::g::FuseiOS_bundle_typeof();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::iOS::Blitter, _draw_baea6daf), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::iOS::Blitter, Blit_v_baea6daf_1_7_1), 0,
        ::g::Uno::Float2_typeof()->Array(), offsetof(::g::Fuse::iOS::Blitter, Blit_verts_baea6daf_1_6_6), 0,
        Blitter_typeof(), (uintptr_t)&::g::Fuse::iOS::Blitter::Singleton_, uFieldFlagsStatic);
    return type;
}

// public generated Blitter() :1301
void Blitter__ctor__fn(Blitter* __this)
{
    __this->ctor_();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) :1305
void Blitter__Blit_fn(Blitter* __this, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2* pos, ::g::Uno::Float2* size, ::g::Uno::Float4x4* localToClipTransform)
{
    __this->Blit(vt, *pos, *size, *localToClipTransform);
}

// private generated void init_DrawCalls() :1301
void Blitter__init_DrawCalls_fn(Blitter* __this)
{
    __this->init_DrawCalls();
}

// public generated Blitter New() :1301
void Blitter__New1_fn(Blitter** __retval)
{
    *__retval = Blitter::New1();
}

uSStrong<Blitter*> Blitter::Singleton_;

// public generated Blitter() [instance] :1301
void Blitter::ctor_()
{
    uStackFrame __("Fuse.iOS.Blitter", ".ctor()");
    init_DrawCalls();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) [instance] :1305
void Blitter::Blit(::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2 pos, ::g::Uno::Float2 size, ::g::Uno::Float4x4 localToClipTransform)
{
    uStackFrame __("Fuse.iOS.Blitter", "Blit(texture2D,float2,float2,float4x4)");
    _draw_baea6daf.BlendEnabled(true);
    _draw_baea6daf.CullFace(0);
    _draw_baea6daf.BlendSrcAlpha(7);
    _draw_baea6daf.BlendDstRgb(3);
    _draw_baea6daf.Use();
    _draw_baea6daf.Attrib1(0, 2, Blit_v_baea6daf_1_7_1, 8, 0);
    _draw_baea6daf.Uniform2(1, size);
    _draw_baea6daf.Uniform2(2, pos);
    _draw_baea6daf.Uniform12(3, localToClipTransform);
    _draw_baea6daf.Sampler2(4, vt);
    _draw_baea6daf.DrawArrays(uPtr(Blit_verts_baea6daf_1_6_6)->Length());
}

// private generated void init_DrawCalls() [instance] :1301
void Blitter::init_DrawCalls()
{
    uStackFrame __("Fuse.iOS.Blitter", "init_DrawCalls()");
    uArray* verts_baea6daf_1_6_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[1/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f));
    Blit_v_baea6daf_1_7_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(verts_baea6daf_1_6_0), 0);
    Blit_verts_baea6daf_1_6_6 = verts_baea6daf_1_6_0;
    _draw_baea6daf = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseiOS_bundle::Blittera700cac2());
}

// public generated Blitter New() [static] :1301
Blitter* Blitter::New1()
{
    Blitter* obj1 = (Blitter*)uNew(Blitter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.iOS/0.24.6/UIControlEvents/$.uno(12)
// -------------------------------------------------------------------------------------------

// internal sealed extern class ControlEvent :12
// {
ControlEvent_type* ControlEvent_typeof()
{
    static uSStrong<ControlEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ControlEvent);
    options.TypeSize = sizeof(ControlEvent_type);
    type = (ControlEvent_type*)uClassType::New("Fuse.iOS.ControlEvent", options);
    type->SetBase(::g::Fuse::iOS::UIControlCallback_typeof());
    type->fp_callbackForEvent = (void(*)(::g::Fuse::iOS::UIControlCallback*, ::g::iOS::Foundation::NSObject*, ::g::iOS::Foundation::NSObject*))ControlEvent__callbackForEvent_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ControlEvent__Dispose_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    ::TYPES[3] = ::g::ObjC::Bindings::Object_typeof();
    ::TYPES[4] = ::g::Fuse::iOS::UIControlCallback_typeof();
    ::TYPES[5] = ::g::Uno::Delegate_typeof();
    ::TYPES[6] = ::g::Uno::Action2_typeof()->MakeType(::g::iOS::Foundation::NSObject_typeof(), ::g::iOS::Foundation::NSObject_typeof());
    ::TYPES[7] = ::g::Uno::Bool_typeof();
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(ControlEvent_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ControlEvent_type, interface1));
    type->SetFields(1,
        ::g::iOS::UIKit::UIControl_typeof(), offsetof(::g::Fuse::iOS::ControlEvent, _control), 0,
        ::g::iOS::UIKit::UIControlEvents_typeof(), offsetof(::g::Fuse::iOS::ControlEvent, _events), 0,
        ::g::Uno::Action2_typeof()->MakeType(::g::iOS::Foundation::NSObject_typeof(), ::g::iOS::Foundation::NSObject_typeof()), offsetof(::g::Fuse::iOS::ControlEvent, _handler), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::ControlEvent, _isDisposed), 0);
    return type;
}

// private ControlEvent(iOS.UIKit.UIControl control, Uno.Action<iOS.Foundation.NSObject, iOS.Foundation.NSObject> handler, iOS.UIKit.UIControlEvents events) :35
void ControlEvent__ctor_6_fn(ControlEvent* __this, ::g::iOS::UIKit::UIControl* control, uDelegate* handler, uint32_t* events)
{
    __this->ctor_6(control, handler, *events);
}

// public static Fuse.iOS.ControlEvent AddHandler(iOS.UIKit.UIControl control, Uno.Action<iOS.Foundation.NSObject, iOS.Foundation.NSObject> handler, iOS.UIKit.UIControlEvents events) :15
void ControlEvent__AddHandler_fn(::g::iOS::UIKit::UIControl* control, uDelegate* handler, uint32_t* events, ControlEvent** __retval)
{
    *__retval = ControlEvent::AddHandler(control, handler, *events);
}

// public override sealed void callbackForEvent(iOS.Foundation.NSObject sender, iOS.Foundation.NSObject theEvent) :42
void ControlEvent__callbackForEvent_fn(ControlEvent* __this, ::g::iOS::Foundation::NSObject* sender, ::g::iOS::Foundation::NSObject* theEvent)
{
    uStackFrame __("Fuse.iOS.ControlEvent", "callbackForEvent(iOS.Foundation.NSObject,iOS.Foundation.NSObject)");

    if (::g::Uno::Delegate::op_Inequality(__this->_handler, NULL))
        uPtr(__this->_handler)->Invoke(2, sender, theEvent);
}

// public void Dispose() :49
void ControlEvent__Dispose_fn(ControlEvent* __this)
{
    __this->Dispose();
}

// private ControlEvent New(iOS.UIKit.UIControl control, Uno.Action<iOS.Foundation.NSObject, iOS.Foundation.NSObject> handler, iOS.UIKit.UIControlEvents events) :35
void ControlEvent__New7_fn(::g::iOS::UIKit::UIControl* control, uDelegate* handler, uint32_t* events, ControlEvent** __retval)
{
    *__retval = ControlEvent::New7(control, handler, *events);
}

// private ControlEvent(iOS.UIKit.UIControl control, Uno.Action<iOS.Foundation.NSObject, iOS.Foundation.NSObject> handler, iOS.UIKit.UIControlEvents events) [instance] :35
void ControlEvent::ctor_6(::g::iOS::UIKit::UIControl* control, uDelegate* handler, uint32_t events)
{
    uStackFrame __("Fuse.iOS.ControlEvent", ".ctor(iOS.UIKit.UIControl,Uno.Action<iOS.Foundation.NSObject, iOS.Foundation.NSObject>,iOS.UIKit.UIControlEvents)");
    ctor_4();
    _control = control;
    _handler = handler;
    _events = events;
}

// public void Dispose() [instance] :49
void ControlEvent::Dispose()
{
    uStackFrame __("Fuse.iOS.ControlEvent", "Dispose()");

    if (!_isDisposed)
    {
        uPtr(_control)->removeTargetActionForControlEvents(Handle(), CallbackSelector(), _events);
        _isDisposed = true;
    }
}

// public static Fuse.iOS.ControlEvent AddHandler(iOS.UIKit.UIControl control, Uno.Action<iOS.Foundation.NSObject, iOS.Foundation.NSObject> handler, iOS.UIKit.UIControlEvents events) [static] :15
ControlEvent* ControlEvent::AddHandler(::g::iOS::UIKit::UIControl* control, uDelegate* handler, uint32_t events)
{
    uStackFrame __("Fuse.iOS.ControlEvent", "AddHandler(iOS.UIKit.UIControl,Uno.Action<iOS.Foundation.NSObject, iOS.Foundation.NSObject>,iOS.UIKit.UIControlEvents)");
    ControlEvent* controlEvent = ControlEvent::New7(control, handler, events);
    controlEvent->init();
    uPtr(control)->addTargetActionForControlEvents(controlEvent->Handle(), controlEvent->CallbackSelector(), events);
    return controlEvent;
}

// private ControlEvent New(iOS.UIKit.UIControl control, Uno.Action<iOS.Foundation.NSObject, iOS.Foundation.NSObject> handler, iOS.UIKit.UIControlEvents events) [static] :35
ControlEvent* ControlEvent::New7(::g::iOS::UIKit::UIControl* control, uDelegate* handler, uint32_t events)
{
    ControlEvent* obj1 = (ControlEvent*)uNew(ControlEvent_typeof());
    obj1->ctor_6(control, handler, events);
    return obj1;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.iOS/0.24.6/.uno/$.uno(37)
// --------------------------------------------------------------------------------

// public partial sealed class NativeStyle.Template.Template2.Factory :37
// {
// static Factory() :44
static void NativeStyle__Template__Template2__Factory__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Factory_type* NativeStyle__Template__Template2__Factory_typeof()
{
    static uSStrong< ::g::Uno::UX::Factory_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NativeStyle__Template__Template2__Factory);
    options.TypeSize = sizeof(::g::Uno::UX::Factory_type);
    type = (::g::Uno::UX::Factory_type*)uClassType::New("Fuse.iOS.NativeStyle.Template.Template2.Factory", options);
    type->SetBase(::g::Uno::UX::Factory_typeof());
    type->fp_cctor_ = NativeStyle__Template__Template2__Factory__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Factory*, uObject**))NativeStyle__Template__Template2__Factory__New1_fn;
    ::TYPES[8] = uObject_typeof();
    type->SetFields(2,
        ::g::Fuse::iOS::NativeStyle__Template__Template2_typeof(), offsetof(::g::Fuse::iOS::NativeStyle__Template__Template2__Factory, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeStyle__Template__Template2__Factory__New2_fn, 0, true, NativeStyle__Template__Template2__Factory_typeof(), 1, ::g::Fuse::iOS::NativeStyle__Template__Template2_typeof()));
    return type;
}

// public Factory(Fuse.iOS.NativeStyle.Template.Template2 parent) :40
void NativeStyle__Template__Template2__Factory__ctor_1_fn(NativeStyle__Template__Template2__Factory* __this, ::g::Fuse::iOS::NativeStyle__Template__Template2* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :47
void NativeStyle__Template__Template2__Factory__New1_fn(NativeStyle__Template__Template2__Factory* __this, uObject** __retval)
{
    uStackFrame __("Fuse.iOS.NativeStyle.Template.Template2.Factory", "New()");
    ::g::Fuse::iOS::Controls::TextInput* self = ::g::Fuse::iOS::Controls::TextInput::New1();
    return *__retval = self, void();
}

// public Factory New(Fuse.iOS.NativeStyle.Template.Template2 parent) :40
void NativeStyle__Template__Template2__Factory__New2_fn(::g::Fuse::iOS::NativeStyle__Template__Template2* parent, NativeStyle__Template__Template2__Factory** __retval)
{
    *__retval = NativeStyle__Template__Template2__Factory::New2(parent);
}

// public Factory(Fuse.iOS.NativeStyle.Template.Template2 parent) [instance] :40
void NativeStyle__Template__Template2__Factory::ctor_1(::g::Fuse::iOS::NativeStyle__Template__Template2* parent)
{
    uStackFrame __("Fuse.iOS.NativeStyle.Template.Template2.Factory", ".ctor(Fuse.iOS.NativeStyle.Template.Template2)");
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Factory New(Fuse.iOS.NativeStyle.Template.Template2 parent) [static] :40
NativeStyle__Template__Template2__Factory* NativeStyle__Template__Template2__Factory::New2(::g::Fuse::iOS::NativeStyle__Template__Template2* parent)
{
    NativeStyle__Template__Template2__Factory* obj1 = (NativeStyle__Template__Template2__Factory*)uNew(NativeStyle__Template__Template2__Factory_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.iOS/0.24.6/.uno/$.uno(53)
// --------------------------------------------------------------------------------

// public partial sealed class NativeStyle.Template.Template2.Factory1 :53
// {
// static Factory1() :60
static void NativeStyle__Template__Template2__Factory1__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Factory_type* NativeStyle__Template__Template2__Factory1_typeof()
{
    static uSStrong< ::g::Uno::UX::Factory_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NativeStyle__Template__Template2__Factory1);
    options.TypeSize = sizeof(::g::Uno::UX::Factory_type);
    type = (::g::Uno::UX::Factory_type*)uClassType::New("Fuse.iOS.NativeStyle.Template.Template2.Factory1", options);
    type->SetBase(::g::Uno::UX::Factory_typeof());
    type->fp_cctor_ = NativeStyle__Template__Template2__Factory1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Factory*, uObject**))NativeStyle__Template__Template2__Factory1__New1_fn;
    ::TYPES[8] = uObject_typeof();
    type->SetFields(2,
        ::g::Fuse::iOS::NativeStyle__Template__Template2_typeof(), offsetof(::g::Fuse::iOS::NativeStyle__Template__Template2__Factory1, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeStyle__Template__Template2__Factory1__New2_fn, 0, true, NativeStyle__Template__Template2__Factory1_typeof(), 1, ::g::Fuse::iOS::NativeStyle__Template__Template2_typeof()));
    return type;
}

// public Factory1(Fuse.iOS.NativeStyle.Template.Template2 parent) :56
void NativeStyle__Template__Template2__Factory1__ctor_1_fn(NativeStyle__Template__Template2__Factory1* __this, ::g::Fuse::iOS::NativeStyle__Template__Template2* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :63
void NativeStyle__Template__Template2__Factory1__New1_fn(NativeStyle__Template__Template2__Factory1* __this, uObject** __retval)
{
    uStackFrame __("Fuse.iOS.NativeStyle.Template.Template2.Factory1", "New()");
    ::g::Fuse::iOS::TextRenderer* self = ::g::Fuse::iOS::TextRenderer::New1();
    return *__retval = self, void();
}

// public Factory1 New(Fuse.iOS.NativeStyle.Template.Template2 parent) :56
void NativeStyle__Template__Template2__Factory1__New2_fn(::g::Fuse::iOS::NativeStyle__Template__Template2* parent, NativeStyle__Template__Template2__Factory1** __retval)
{
    *__retval = NativeStyle__Template__Template2__Factory1::New2(parent);
}

// public Factory1(Fuse.iOS.NativeStyle.Template.Template2 parent) [instance] :56
void NativeStyle__Template__Template2__Factory1::ctor_1(::g::Fuse::iOS::NativeStyle__Template__Template2* parent)
{
    uStackFrame __("Fuse.iOS.NativeStyle.Template.Template2.Factory1", ".ctor(Fuse.iOS.NativeStyle.Template.Template2)");
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Factory1 New(Fuse.iOS.NativeStyle.Template.Template2 parent) [static] :56
NativeStyle__Template__Template2__Factory1* NativeStyle__Template__Template2__Factory1::New2(::g::Fuse::iOS::NativeStyle__Template__Template2* parent)
{
    NativeStyle__Template__Template2__Factory1* obj1 = (NativeStyle__Template__Template2__Factory1*)uNew(NativeStyle__Template__Template2__Factory1_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.iOS/0.24.6/$.uno(17)
// ---------------------------------------------------------------------------

// internal static extern class InputDispatch :17
// {
// static InputDispatch() :195
static void InputDispatch__cctor__fn(uType* __type)
{
    InputDispatch::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[9/*Uno.Collections.Dictionary<iOS.UIKit.UIControl, Fuse.Node>*/]));
    InputDispatch::_touchEvents_ = InputDispatch__TouchEvents::New7();
    uPtr(InputDispatch::_touchEvents_)->init();
}

uClassType* InputDispatch_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.InputDispatch", options);
    type->fp_cctor_ = InputDispatch__cctor__fn;
    ::TYPES[9] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::iOS::UIKit::UIControl_typeof(), ::g::Fuse::Node_typeof());
    ::TYPES[10] = ::g::iOS::UIKit::UIControl_typeof();
    ::TYPES[11] = ::g::Fuse::iOS::NativeViews::NativeView_typeof();
    ::TYPES[3] = ::g::ObjC::Bindings::Object_typeof();
    ::TYPES[4] = ::g::Fuse::iOS::UIControlCallback_typeof();
    ::TYPES[12] = ::g::Fuse::Node_typeof();
    ::TYPES[13] = ::g::Uno::Float_typeof();
    ::TYPES[14] = ::g::iOS::CoreGraphics::CGPoint_typeof();
    ::TYPES[15] = ::g::Fuse::Input::PointerEventData_typeof();
    ::TYPES[16] = ::g::iOS::UIKit::UITouch_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::iOS::UIKit::UIControl_typeof(), ::g::Fuse::Node_typeof()), (uintptr_t)&::g::Fuse::iOS::InputDispatch::_listeners_, uFieldFlagsStatic,
        InputDispatch__TouchEvents_typeof(), (uintptr_t)&::g::Fuse::iOS::InputDispatch::_touchEvents_, uFieldFlagsStatic);
    return type;
}

// public static void AddListener(Fuse.iOS.NativeViews.NativeView nativeView) :202
void InputDispatch__AddListener_fn(::g::Fuse::iOS::NativeViews::NativeView* nativeView)
{
    InputDispatch::AddListener(nativeView);
}

// private static Fuse.Node FindRoot(Fuse.Node n) :151
void InputDispatch__FindRoot_fn(::g::Fuse::Node* n, ::g::Fuse::Node** __retval)
{
    *__retval = InputDispatch::FindRoot(n);
}

// private static Fuse.Input.PointerEventData MakePointerEventData(iOS.UIKit.UITouch touch, iOS.UIKit.UIView rootView, int pointIndex) :177
void InputDispatch__MakePointerEventData_fn(::g::iOS::UIKit::UITouch* touch, ::g::iOS::UIKit::UIView* rootView, int* pointIndex, ::g::Fuse::Input::PointerEventData** __retval)
{
    *__retval = InputDispatch::MakePointerEventData(touch, rootView, *pointIndex);
}

// public static void RemoveListener(Fuse.iOS.NativeViews.NativeView nativeView) :215
void InputDispatch__RemoveListener_fn(::g::Fuse::iOS::NativeViews::NativeView* nativeView)
{
    InputDispatch::RemoveListener(nativeView);
}

uSStrong< ::g::Uno::Collections::Dictionary*> InputDispatch::_listeners_;
uSStrong<InputDispatch__TouchEvents*> InputDispatch::_touchEvents_;

// public static void AddListener(Fuse.iOS.NativeViews.NativeView nativeView) [static] :202
void InputDispatch::AddListener(::g::Fuse::iOS::NativeViews::NativeView* nativeView)
{
    uStackFrame __("Fuse.iOS.InputDispatch", "AddListener(Fuse.iOS.NativeViews.NativeView)");
    InputDispatch_typeof()->Init();
    ::g::iOS::UIKit::UIControl* control = uAs< ::g::iOS::UIKit::UIControl*>(uPtr(nativeView)->HitTestHandle(), ::TYPES[10/*iOS.UIKit.UIControl*/]);

    if (::g::ObjC::ID::op_Inequality(::g::ObjC::Bindings::Object::op_Implicit(control), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
    {
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(InputDispatch::_listeners()), control, uPtr(nativeView)->Node());
        uPtr(control)->addTargetActionForControlEvents(uPtr(InputDispatch::_touchEvents())->Handle(), uPtr(InputDispatch::_touchEvents())->CallbackSelector(), 4095);
    }
}

// private static Fuse.Node FindRoot(Fuse.Node n) [static] :151
::g::Fuse::Node* InputDispatch::FindRoot(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.iOS.InputDispatch", "FindRoot(Fuse.Node)");
    InputDispatch_typeof()->Init();

    if (uPtr(n)->Parent() == NULL)
        return n;

    return InputDispatch::FindRoot(uPtr(n)->Parent());
}

// private static Fuse.Input.PointerEventData MakePointerEventData(iOS.UIKit.UITouch touch, iOS.UIKit.UIView rootView, int pointIndex) [static] :177
::g::Fuse::Input::PointerEventData* InputDispatch::MakePointerEventData(::g::iOS::UIKit::UITouch* touch, ::g::iOS::UIKit::UIView* rootView, int pointIndex)
{
    uStackFrame __("Fuse.iOS.InputDispatch", "MakePointerEventData(iOS.UIKit.UITouch,iOS.UIKit.UIView,int)");
    InputDispatch_typeof()->Init();
    ::g::Fuse::Input::PointerEventData* collection1;
    ::g::iOS::CoreGraphics::CGPoint position = uPtr(touch)->locationInView(rootView);
    ::g::Uno::Float2 windowPoint = ::g::Uno::Float2__New2((float)position.X, (float)position.Y);
    collection1 = ::g::Fuse::Input::PointerEventData::New1();
    uPtr(collection1)->PointIndex = pointIndex;
    uPtr(collection1)->WindowPoint = windowPoint;
    uPtr(collection1)->Timestamp = (touch->Timestamp() / 1000.0);
    uPtr(collection1)->PointerType = 2;
    uPtr(collection1)->IsPrimary = (pointIndex == 0);
    return collection1;
}

// public static void RemoveListener(Fuse.iOS.NativeViews.NativeView nativeView) [static] :215
void InputDispatch::RemoveListener(::g::Fuse::iOS::NativeViews::NativeView* nativeView)
{
    uStackFrame __("Fuse.iOS.InputDispatch", "RemoveListener(Fuse.iOS.NativeViews.NativeView)");
    InputDispatch_typeof()->Init();
    bool ret4;
    bool ret5;
    ::g::iOS::UIKit::UIControl* control = uAs< ::g::iOS::UIKit::UIControl*>(uPtr(nativeView)->HitTestHandle(), ::TYPES[10/*iOS.UIKit.UIControl*/]);

    if (::g::ObjC::ID::op_Equality(::g::ObjC::Bindings::Object::op_Implicit(control), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
        return;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(InputDispatch::_listeners()), control, &ret4), ret4))
    {
        uPtr(control)->removeTargetActionForControlEvents(uPtr(InputDispatch::_touchEvents())->Handle(), uPtr(InputDispatch::_touchEvents())->CallbackSelector(), 4095);
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(InputDispatch::_listeners()), control, &ret5);
    }
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.iOS/0.24.6/$.uno(521)
// ----------------------------------------------------------------------------

// internal static extern class iOSExtensions :521
// {
uClassType* iOSExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.iOSExtensions", options);
    ::STRINGS[0] = uString::Const("unsupported CALayer brush");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.iOS/0.24.6/$.uno");
    ::STRINGS[2] = uString::Const("ToCALayer");
    ::TYPES[17] = ::g::iOS::QuartzCore::CALayer_typeof();
    ::TYPES[18] = ::g::iOS::UIKit::UIColor_typeof();
    ::TYPES[19] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[20] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[21] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[8] = uObject_typeof();
    ::TYPES[22] = ::g::iOS::QuartzCore::CAGradientLayer_typeof();
    ::TYPES[23] = ::g::Uno::ULong_typeof();
    ::TYPES[24] = ::g::Uno::UInt_typeof();
    ::TYPES[25] = ::g::Fuse::Drawing::GradientStop_typeof()->Array();
    ::TYPES[26] = ::g::Fuse::Drawing::GradientStop_typeof();
    ::TYPES[3] = ::g::ObjC::Bindings::Object_typeof();
    ::TYPES[27] = ::g::iOS::Foundation::NSArray_typeof();
    ::TYPES[28] = ::g::Uno::Double_typeof();
    ::TYPES[29] = ::g::Uno::Float2_typeof();
    ::TYPES[30] = ::g::Uno::Rect_typeof();
    ::TYPES[13] = ::g::Uno::Float_typeof();
    ::TYPES[14] = ::g::iOS::CoreGraphics::CGPoint_typeof();
    ::TYPES[31] = ::g::Uno::Float4_typeof();
    return type;
}

// public static iOS.QuartzCore.CALayer ToCALayer(float4 color) :576
void iOSExtensions__ToCALayer_fn(::g::Uno::Float4* color, ::g::iOS::QuartzCore::CALayer** __retval)
{
    *__retval = iOSExtensions::ToCALayer(*color);
}

// public static iOS.QuartzCore.CALayer ToCALayer(Fuse.Drawing.Brush brush) :632
void iOSExtensions__ToCALayer1_fn(::g::Fuse::Drawing::Brush* brush, ::g::iOS::QuartzCore::CALayer** __retval)
{
    *__retval = iOSExtensions::ToCALayer1(brush);
}

// public static iOS.QuartzCore.CALayer ToCALayer(Fuse.Drawing.LinearGradient linearGradient) :594
void iOSExtensions__ToCALayer2_fn(::g::Fuse::Drawing::LinearGradient* linearGradient, ::g::iOS::QuartzCore::CALayer** __retval)
{
    *__retval = iOSExtensions::ToCALayer2(linearGradient);
}

// public static iOS.QuartzCore.CALayer ToCALayer(Fuse.Drawing.SolidColor solidColor) :584
void iOSExtensions__ToCALayer3_fn(::g::Fuse::Drawing::SolidColor* solidColor, ::g::iOS::QuartzCore::CALayer** __retval)
{
    *__retval = iOSExtensions::ToCALayer3(solidColor);
}

// public static iOS.QuartzCore.CALayer ToCALayer(Fuse.Drawing.StaticSolidColor staticSolidColor) :589
void iOSExtensions__ToCALayer4_fn(::g::Fuse::Drawing::StaticSolidColor* staticSolidColor, ::g::iOS::QuartzCore::CALayer** __retval)
{
    *__retval = iOSExtensions::ToCALayer4(staticSolidColor);
}

// public static iOS.CoreGraphics.CGPoint ToCGPoint(float2 f) :552
void iOSExtensions__ToCGPoint_fn(::g::Uno::Float2* f, ::g::iOS::CoreGraphics::CGPoint* __retval)
{
    *__retval = iOSExtensions::ToCGPoint(*f);
}

// public static iOS.CoreGraphics.CGRect ToCGRect(Uno.Rect rect) :545
void iOSExtensions__ToCGRect_fn(::g::Uno::Rect* rect, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = iOSExtensions::ToCGRect(*rect);
}

// public static iOS.CoreGraphics.CGSize ToCGSize(float2 f) :557
void iOSExtensions__ToCGSize_fn(::g::Uno::Float2* f, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = iOSExtensions::ToCGSize(*f);
}

// public static float2 ToFloat2(iOS.CoreGraphics.CGPoint point) :540
void iOSExtensions__ToFloat2_fn(::g::iOS::CoreGraphics::CGPoint* point, ::g::Uno::Float2* __retval)
{
    *__retval = iOSExtensions::ToFloat2(*point);
}

// public static float2 ToFloat2(iOS.CoreGraphics.CGSize size) :535
void iOSExtensions__ToFloat21_fn(::g::iOS::CoreGraphics::CGSize* size, ::g::Uno::Float2* __retval)
{
    *__retval = iOSExtensions::ToFloat21(*size);
}

// public static iOS.Foundation.NSNumber ToNSNumber(double d) :569
void iOSExtensions__ToNSNumber_fn(double* d, ::g::iOS::Foundation::NSNumber** __retval)
{
    *__retval = iOSExtensions::ToNSNumber(*d);
}

// public static iOS.Foundation.NSNumber ToNSNumber(float f) :562
void iOSExtensions__ToNSNumber1_fn(float* f, ::g::iOS::Foundation::NSNumber** __retval)
{
    *__retval = iOSExtensions::ToNSNumber1(*f);
}

// public static Uno.Rect ToRect(iOS.CoreGraphics.CGRect rect) :530
void iOSExtensions__ToRect_fn(::g::iOS::CoreGraphics::CGRect* rect, ::g::Uno::Rect* __retval)
{
    *__retval = iOSExtensions::ToRect(*rect);
}

// public static iOS.UIKit.UIColor ToUIColor(float4 color) :523
void iOSExtensions__ToUIColor_fn(::g::Uno::Float4* color, ::g::iOS::UIKit::UIColor** __retval)
{
    *__retval = iOSExtensions::ToUIColor(*color);
}

// public static iOS.QuartzCore.CALayer ToCALayer(float4 color) [static] :576
::g::iOS::QuartzCore::CALayer* iOSExtensions::ToCALayer(::g::Uno::Float4 color)
{
    uStackFrame __("Fuse.iOS.iOSExtensions", "ToCALayer(float4)");
    ::g::iOS::QuartzCore::CALayer* layer = ::g::iOS::QuartzCore::CALayer::New5();
    layer->init();
    layer->BackgroundColor(uPtr(iOSExtensions::ToUIColor(color))->CGColor());
    return layer;
}

// public static iOS.QuartzCore.CALayer ToCALayer(Fuse.Drawing.Brush brush) [static] :632
::g::iOS::QuartzCore::CALayer* iOSExtensions::ToCALayer1(::g::Fuse::Drawing::Brush* brush)
{
    uStackFrame __("Fuse.iOS.iOSExtensions", "ToCALayer(Fuse.Drawing.Brush)");

    if (uIs(brush, ::TYPES[19/*Fuse.Drawing.SolidColor*/]))
        return iOSExtensions::ToCALayer3(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[19/*Fuse.Drawing.SolidColor*/]));

    if (uIs(brush, ::TYPES[20/*Fuse.Drawing.StaticSolidColor*/]))
        return iOSExtensions::ToCALayer4(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[20/*Fuse.Drawing.StaticSolidColor*/]));

    if (uIs(brush, ::TYPES[21/*Fuse.Drawing.LinearGradient*/]))
        return iOSExtensions::ToCALayer2(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[21/*Fuse.Drawing.LinearGradient*/]));

    ::g::Fuse::Diagnostics::Unsupported(::STRINGS[0/*"unsupported...*/], brush, ::STRINGS[1/*"/usr/local/...*/], 641, ::STRINGS[2/*"ToCALayer"*/]);
    return NULL;
}

// public static iOS.QuartzCore.CALayer ToCALayer(Fuse.Drawing.LinearGradient linearGradient) [static] :594
::g::iOS::QuartzCore::CALayer* iOSExtensions::ToCALayer2(::g::Fuse::Drawing::LinearGradient* linearGradient)
{
    uStackFrame __("Fuse.iOS.iOSExtensions", "ToCALayer(Fuse.Drawing.LinearGradient)");
    ::g::iOS::QuartzCore::CAGradientLayer* layer = ::g::iOS::QuartzCore::CAGradientLayer::New7();
    layer->init();
    layer->StartPoint(iOSExtensions::ToCGPoint(uPtr(linearGradient)->StartPoint()));
    layer->EndPoint(iOSExtensions::ToCGPoint(linearGradient->EndPoint()));
    ::g::iOS::Foundation::NSMutableArray* colors = ::g::iOS::Foundation::NSMutableArray::New7();
    colors->initWithCapacity((uint64_t)(uint32_t)uPtr(linearGradient->SortedStops())->Length());
    ::g::iOS::Foundation::NSMutableArray* offsets = ::g::iOS::Foundation::NSMutableArray::New7();
    offsets->initWithCapacity((uint64_t)(uint32_t)uPtr(linearGradient->SortedStops())->Length());

    for (int i = 0; i < uPtr(linearGradient->SortedStops())->Length(); i++)
    {
        ::g::Fuse::Drawing::GradientStop* gradientStop = uPtr(uPtr(linearGradient)->SortedStops())->Strong< ::g::Fuse::Drawing::GradientStop*>(i);
        ::g::iOS::Foundation::NSNumber* offset = iOSExtensions::ToNSNumber1(uPtr(gradientStop)->Offset());
        uPtr(offsets)->addObject(uPtr(offset)->Handle());
    }

    layer->setColors(colors);
    layer->setLocations(offsets);
    return layer;
}

// public static iOS.QuartzCore.CALayer ToCALayer(Fuse.Drawing.SolidColor solidColor) [static] :584
::g::iOS::QuartzCore::CALayer* iOSExtensions::ToCALayer3(::g::Fuse::Drawing::SolidColor* solidColor)
{
    uStackFrame __("Fuse.iOS.iOSExtensions", "ToCALayer(Fuse.Drawing.SolidColor)");
    return iOSExtensions::ToCALayer(uPtr(solidColor)->Color());
}

// public static iOS.QuartzCore.CALayer ToCALayer(Fuse.Drawing.StaticSolidColor staticSolidColor) [static] :589
::g::iOS::QuartzCore::CALayer* iOSExtensions::ToCALayer4(::g::Fuse::Drawing::StaticSolidColor* staticSolidColor)
{
    uStackFrame __("Fuse.iOS.iOSExtensions", "ToCALayer(Fuse.Drawing.StaticSolidColor)");
    return iOSExtensions::ToCALayer(uPtr(staticSolidColor)->Color());
}

// public static iOS.CoreGraphics.CGPoint ToCGPoint(float2 f) [static] :552
::g::iOS::CoreGraphics::CGPoint iOSExtensions::ToCGPoint(::g::Uno::Float2 f)
{
    uStackFrame __("Fuse.iOS.iOSExtensions", "ToCGPoint(float2)");
    return ::g::iOS::CoreGraphics::CGPoint__New1((double)f.X, (double)f.Y);
}

// public static iOS.CoreGraphics.CGRect ToCGRect(Uno.Rect rect) [static] :545
::g::iOS::CoreGraphics::CGRect iOSExtensions::ToCGRect(::g::Uno::Rect rect)
{
    uStackFrame __("Fuse.iOS.iOSExtensions", "ToCGRect(Uno.Rect)");
    return ::g::iOS::CoreGraphics::CGRect__New1(iOSExtensions::ToCGPoint(rect.Position()), iOSExtensions::ToCGSize(rect.Size()));
}

// public static iOS.CoreGraphics.CGSize ToCGSize(float2 f) [static] :557
::g::iOS::CoreGraphics::CGSize iOSExtensions::ToCGSize(::g::Uno::Float2 f)
{
    uStackFrame __("Fuse.iOS.iOSExtensions", "ToCGSize(float2)");
    return ::g::iOS::CoreGraphics::CGSize__New1((double)f.X, (double)f.Y);
}

// public static float2 ToFloat2(iOS.CoreGraphics.CGPoint point) [static] :540
::g::Uno::Float2 iOSExtensions::ToFloat2(::g::iOS::CoreGraphics::CGPoint point)
{
    uStackFrame __("Fuse.iOS.iOSExtensions", "ToFloat2(iOS.CoreGraphics.CGPoint)");
    return ::g::Uno::Float2__New2((float)point.X, (float)point.Y);
}

// public static float2 ToFloat2(iOS.CoreGraphics.CGSize size) [static] :535
::g::Uno::Float2 iOSExtensions::ToFloat21(::g::iOS::CoreGraphics::CGSize size)
{
    uStackFrame __("Fuse.iOS.iOSExtensions", "ToFloat2(iOS.CoreGraphics.CGSize)");
    return ::g::Fuse::iOS::iOSInterop::ToFloat2(size, 1.0f);
}

// public static iOS.Foundation.NSNumber ToNSNumber(double d) [static] :569
::g::iOS::Foundation::NSNumber* iOSExtensions::ToNSNumber(double d)
{
    uStackFrame __("Fuse.iOS.iOSExtensions", "ToNSNumber(double)");
    ::g::iOS::Foundation::NSNumber* num = ::g::iOS::Foundation::NSNumber::New7();
    num->initWithDouble(d);
    return num;
}

// public static iOS.Foundation.NSNumber ToNSNumber(float f) [static] :562
::g::iOS::Foundation::NSNumber* iOSExtensions::ToNSNumber1(float f)
{
    uStackFrame __("Fuse.iOS.iOSExtensions", "ToNSNumber(float)");
    ::g::iOS::Foundation::NSNumber* num = ::g::iOS::Foundation::NSNumber::New7();
    num->initWithFloat(f);
    return num;
}

// public static Uno.Rect ToRect(iOS.CoreGraphics.CGRect rect) [static] :530
::g::Uno::Rect iOSExtensions::ToRect(::g::iOS::CoreGraphics::CGRect rect)
{
    uStackFrame __("Fuse.iOS.iOSExtensions", "ToRect(iOS.CoreGraphics.CGRect)");
    return ::g::Fuse::iOS::iOSInterop::ToRect(rect, 1.0f);
}

// public static iOS.UIKit.UIColor ToUIColor(float4 color) [static] :523
::g::iOS::UIKit::UIColor* iOSExtensions::ToUIColor(::g::Uno::Float4 color)
{
    uStackFrame __("Fuse.iOS.iOSExtensions", "ToUIColor(float4)");
    ::g::iOS::UIKit::UIColor* uiColor = ::g::iOS::UIKit::UIColor::New5();
    uiColor->initWithRedGreenBlueAlpha((double)color.X, (double)color.Y, (double)color.Z, (double)color.W);
    return uiColor;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.iOS/0.24.6/$.uno(654)
// ----------------------------------------------------------------------------

// internal static extern class iOSInterop :654
// {
uClassType* iOSInterop_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.iOSInterop", options);
    ::STRINGS[3] = uString::Const("textAlignment");
    ::TYPES[32] = ::g::Fuse::LayoutParams_typeof();
    ::TYPES[7] = ::g::Uno::Bool_typeof();
    ::TYPES[29] = ::g::Uno::Float2_typeof();
    ::TYPES[14] = ::g::iOS::CoreGraphics::CGPoint_typeof();
    ::TYPES[33] = ::g::iOS::CoreGraphics::CGRect_typeof();
    ::TYPES[28] = ::g::Uno::Double_typeof();
    ::TYPES[30] = ::g::Uno::Rect_typeof();
    ::TYPES[34] = ::g::iOS::CoreGraphics::CGSize_typeof();
    ::TYPES[13] = ::g::Uno::Float_typeof();
    ::TYPES[23] = ::g::Uno::ULong_typeof();
    ::TYPES[24] = ::g::Uno::UInt_typeof();
    ::TYPES[35] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::iOS::Foundation::INSCopying_typeof(), ::g::ObjC::ID_typeof());
    ::TYPES[36] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::iOS::Foundation::INSCopying_typeof(), ::g::ObjC::ID_typeof());
    ::TYPES[37] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::iOS::Foundation::INSCopying_typeof(), ::g::ObjC::ID_typeof());
    ::TYPES[38] = ::g::iOS::Foundation::NSDictionary_typeof();
    ::TYPES[39] = ::g::Uno::Platform2::Display_typeof();
    return type;
}

// public static float2 GetContentSize(iOS.UIKit.UIView view, Fuse.LayoutParams lp, float scale) :657
void iOSInterop__GetContentSize_fn(::g::iOS::UIKit::UIView* view, ::g::Fuse::LayoutParams* lp, float* scale, ::g::Uno::Float2* __retval)
{
    *__retval = iOSInterop::GetContentSize(view, *lp, *scale);
}

// public static float get_Scale() :673
void iOSInterop__get_Scale_fn(float* __retval)
{
    *__retval = iOSInterop::Scale();
}

// public static iOS.CoreGraphics.CGRect ToCGRect(Uno.Rect unoRect, float scale) :676
void iOSInterop__ToCGRect_fn(::g::Uno::Rect* unoRect, float* scale, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = iOSInterop::ToCGRect(*unoRect, *scale);
}

// public static iOS.CoreGraphics.CGSize ToCGSize(float2 unoSize, float scale) :706
void iOSInterop__ToCGSize_fn(::g::Uno::Float2* unoSize, float* scale, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = iOSInterop::ToCGSize(*unoSize, *scale);
}

// public static float2 ToFloat2(iOS.CoreGraphics.CGSize size, float scale) :701
void iOSInterop__ToFloat2_fn(::g::iOS::CoreGraphics::CGSize* size, float* scale, ::g::Uno::Float2* __retval)
{
    *__retval = iOSInterop::ToFloat2(*size, *scale);
}

// internal static iOS.Foundation.NSDictionary ToNSDictionary(Uno.Collections.Dictionary<iOS.Foundation.INSCopying, ObjC.ID> dict) :728
void iOSInterop__ToNSDictionary_fn(::g::Uno::Collections::Dictionary* dict, ::g::iOS::Foundation::NSDictionary** __retval)
{
    *__retval = iOSInterop::ToNSDictionary(dict);
}

// public static iOS.UIKit.NSTextAlignment ToNSTextAlignment(Fuse.Elements.TextAlignment textAlignment) :711
void iOSInterop__ToNSTextAlignment_fn(int* textAlignment, int* __retval)
{
    *__retval = iOSInterop::ToNSTextAlignment(*textAlignment);
}

// public static Uno.Rect ToRect(iOS.CoreGraphics.CGRect cgRect, float scale) :686
void iOSInterop__ToRect_fn(::g::iOS::CoreGraphics::CGRect* cgRect, float* scale, ::g::Uno::Rect* __retval)
{
    *__retval = iOSInterop::ToRect(*cgRect, *scale);
}

// public static float2 GetContentSize(iOS.UIKit.UIView view, Fuse.LayoutParams lp, float scale) [static] :657
::g::Uno::Float2 iOSInterop::GetContentSize(::g::iOS::UIKit::UIView* view, ::g::Fuse::LayoutParams lp, float scale)
{
    uStackFrame __("Fuse.iOS.iOSInterop", "GetContentSize(iOS.UIKit.UIView,Fuse.LayoutParams,float)");
    ::g::Uno::Float2 fillSize = lp.Size();

    if (!lp.HasX())
        fillSize.X = 1000000.0f;

    if (!lp.HasY())
        fillSize.Y = 1000000.0f;

    ::g::iOS::CoreGraphics::CGSize maxSize = ::g::Fuse::iOS::iOSDeviceInterop::Pre_iOS8_HandleDeviceOrientation1(iOSInterop::ToCGSize(fillSize, scale), view);
    ::g::iOS::CoreGraphics::CGSize result = uPtr(view)->sizeThatFits(maxSize);
    return iOSInterop::ToFloat2(::g::Fuse::iOS::iOSDeviceInterop::Pre_iOS8_HandleDeviceOrientation1(result, view), scale);
}

// public static iOS.CoreGraphics.CGRect ToCGRect(Uno.Rect unoRect, float scale) [static] :676
::g::iOS::CoreGraphics::CGRect iOSInterop::ToCGRect(::g::Uno::Rect unoRect, float scale)
{
    uStackFrame __("Fuse.iOS.iOSInterop", "ToCGRect(Uno.Rect,float)");
    ::g::iOS::CoreGraphics::CGRect rect;
    rect.Origin.X = (double)(unoRect.Position().X / scale);
    rect.Origin.Y = (double)(unoRect.Position().Y / scale);
    rect.Size.Width = (double)(unoRect.Size().X / scale);
    rect.Size.Height = (double)(unoRect.Size().Y / scale);
    return rect;
}

// public static iOS.CoreGraphics.CGSize ToCGSize(float2 unoSize, float scale) [static] :706
::g::iOS::CoreGraphics::CGSize iOSInterop::ToCGSize(::g::Uno::Float2 unoSize, float scale)
{
    uStackFrame __("Fuse.iOS.iOSInterop", "ToCGSize(float2,float)");
    return ::g::iOS::CoreGraphics::CGSize__New1((double)(unoSize.X / scale), (double)(unoSize.Y / scale));
}

// public static float2 ToFloat2(iOS.CoreGraphics.CGSize size, float scale) [static] :701
::g::Uno::Float2 iOSInterop::ToFloat2(::g::iOS::CoreGraphics::CGSize size, float scale)
{
    uStackFrame __("Fuse.iOS.iOSInterop", "ToFloat2(iOS.CoreGraphics.CGSize,float)");
    return ::g::Uno::Float2__New2((float)size.Width * scale, (float)size.Height * scale);
}

// internal static iOS.Foundation.NSDictionary ToNSDictionary(Uno.Collections.Dictionary<iOS.Foundation.INSCopying, ObjC.ID> dict) [static] :728
::g::iOS::Foundation::NSDictionary* iOSInterop::ToNSDictionary(::g::Uno::Collections::Dictionary* dict)
{
    uStackFrame __("Fuse.iOS.iOSInterop", "ToNSDictionary(Uno.Collections.Dictionary<iOS.Foundation.INSCopying, ObjC.ID>)");
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uObject*>, ::id> ret2;
    ::g::iOS::Foundation::NSMutableDictionary* ret = ::g::iOS::Foundation::NSMutableDictionary::New8(::g::iOS::Foundation::NSMutableDictionary::_dictionaryWithCapacity((uint64_t)(uint32_t)uPtr(dict)->Count()));

    for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uObject*>, ::id> enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(dict, &ret2), ret2); enum1.MoveNext(::TYPES[36/*Uno.Collections.Dictionary<iOS.Foundation.INSCopying, ObjC.ID>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong<uObject*>, ::id> e = enum1.Current(::TYPES[36/*Uno.Collections.Dictionary<iOS.Foundation.INSCopying, ObjC.ID>.Enumerator*/]);
        uPtr(ret)->setObjectForKey(e.Value(::TYPES[37/*Uno.Collections.KeyValuePair<iOS.Foundation.INSCopying, ObjC.ID>*/]), e.Key(::TYPES[37/*Uno.Collections.KeyValuePair<iOS.Foundation.INSCopying, ObjC.ID>*/]));
    }

    return ret;
}

// public static iOS.UIKit.NSTextAlignment ToNSTextAlignment(Fuse.Elements.TextAlignment textAlignment) [static] :711
int iOSInterop::ToNSTextAlignment(int textAlignment)
{
    uStackFrame __("Fuse.iOS.iOSInterop", "ToNSTextAlignment(Fuse.Elements.TextAlignment)");

    switch (textAlignment)
    {
        case 0:
            return 0;
        case 1:
            return 1;
        case 2:
            return 2;
    }

    U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[3/*"textAlignment"*/]));
}

// public static Uno.Rect ToRect(iOS.CoreGraphics.CGRect cgRect, float scale) [static] :686
::g::Uno::Rect iOSInterop::ToRect(::g::iOS::CoreGraphics::CGRect cgRect, float scale)
{
    uStackFrame __("Fuse.iOS.iOSInterop", "ToRect(iOS.CoreGraphics.CGRect,float)");
    ::g::Uno::Rect rect = ::g::Uno::Rect__New1(0.0f, 0.0f, 0.0f, 0.0f);
    rect.Position(::g::Uno::Float2__New2((float)cgRect.Origin.X * scale, (float)cgRect.Origin.Y * scale));
    rect.Size(::g::Uno::Float2__New2((float)cgRect.Size.Width * scale, (float)cgRect.Size.Height * scale));
    return rect;
}

// public static float get_Scale() [static] :673
float iOSInterop::Scale()
{
    uStackFrame __("Fuse.iOS.iOSInterop", "get_Scale()");
    return uPtr(::g::Uno::Platform2::Display::MainDisplay())->Density();
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.iOS/0.24.6/.uno/$.uno(5)
// -------------------------------------------------------------------------------

// public partial sealed class NativeStyle :5
// {
// static NativeStyle() :95
static void NativeStyle__cctor__fn(uType* __type)
{
}

::g::Fuse::Style_type* NativeStyle_typeof()
{
    static uSStrong< ::g::Fuse::Style_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeStyle);
    options.TypeSize = sizeof(::g::Fuse::Style_type);
    type = (::g::Fuse::Style_type*)uClassType::New("Fuse.iOS.NativeStyle", options);
    type->SetBase(::g::Fuse::Style_typeof());
    type->fp_ctor_ = (void*)NativeStyle__New2_fn;
    type->fp_cctor_ = NativeStyle__cctor__fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Style__Apply_fn;
    ::TYPES[40] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::GraphicsView_typeof());
    ::TYPES[41] = ::g::Fuse::Style_typeof();
    ::TYPES[42] = ::g::Uno::UX::ITemplate_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Fuse::Style_type, interface0));
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeStyle__New2_fn, 0, true, NativeStyle_typeof(), 0));
    return type;
}

// public NativeStyle() :98
void NativeStyle__ctor_1_fn(NativeStyle* __this)
{
    __this->ctor_1();
}

// private void InitializeUX() :102
void NativeStyle__InitializeUX_fn(NativeStyle* __this)
{
    __this->InitializeUX();
}

// public NativeStyle New() :98
void NativeStyle__New2_fn(NativeStyle** __retval)
{
    *__retval = NativeStyle::New2();
}

// public NativeStyle() [instance] :98
void NativeStyle::ctor_1()
{
    uStackFrame __("Fuse.iOS.NativeStyle", ".ctor()");
    ctor_();
    InitializeUX();
}

// private void InitializeUX() [instance] :102
void NativeStyle::InitializeUX()
{
    uStackFrame __("Fuse.iOS.NativeStyle", "InitializeUX()");
    NativeStyle__Template* collection1;
    ::g::Fuse::iOS::NativeTemplate* temp = ::g::Fuse::iOS::NativeTemplate::New1();
    collection1 = NativeStyle__Template::New1(this);
    uPtr(collection1)->Cascade(true);
    true;
    uPtr(collection1)->AffectSubtypes(true);
    true;
    NativeStyle__Template* temp1 = collection1;
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[42/*Uno.UX.ITemplate*/])), (uObject*)temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[42/*Uno.UX.ITemplate*/])), (uObject*)temp1);
}

// public NativeStyle New() [static] :98
NativeStyle* NativeStyle::New2()
{
    NativeStyle* obj2 = (NativeStyle*)uNew(NativeStyle_typeof());
    obj2->ctor_1();
    return obj2;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.iOS/0.24.6/$.uno(785)
// ----------------------------------------------------------------------------

// internal sealed class NativeTemplate :785
// {
NativeTemplate_type* NativeTemplate_typeof()
{
    static uSStrong<NativeTemplate_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeTemplate);
    options.TypeSize = sizeof(NativeTemplate_type);
    type = (NativeTemplate_type*)uClassType::New("Fuse.iOS.NativeTemplate", options);
    type->fp_ctor_ = (void*)NativeTemplate__New1_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))NativeTemplate__Apply_fn;
    ::TYPES[12] = ::g::Fuse::Node_typeof();
    ::TYPES[43] = ::g::Fuse::Controls::ParentControl_typeof();
    ::TYPES[44] = ::g::Fuse::Controls::NativeViewHost_typeof();
    ::TYPES[45] = ::g::Fuse::Behavior_typeof();
    ::TYPES[46] = ::g::Fuse::Controls::Button_typeof();
    ::TYPES[47] = ::g::Fuse::Controls::Switch_typeof();
    ::TYPES[48] = ::g::Fuse::Controls::TextEdit_typeof();
    ::TYPES[49] = ::g::Fuse::Controls::TextBlock_typeof();
    ::TYPES[50] = ::g::Fuse::Controls::Slider_typeof();
    ::TYPES[51] = ::g::Fuse::Controls::Image_typeof();
    ::TYPES[52] = ::g::Fuse::Controls::Rectangle_typeof();
    ::TYPES[53] = ::g::Fuse::Controls::Circle_typeof();
    ::TYPES[54] = ::g::Fuse::Controls::WebView_typeof();
    ::TYPES[55] = ::g::Fuse::Controls::ContentControl_typeof();
    ::TYPES[56] = ::g::Fuse::Controls::GraphicsView_typeof();
    ::TYPES[57] = ::g::Fuse::Controls::ScrollView_typeof();
    ::TYPES[7] = ::g::Uno::Bool_typeof();
    ::TYPES[58] = ::g::Fuse::Controls::Control_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(NativeTemplate_type, interface0));
    return type;
}

// public generated NativeTemplate() :785
void NativeTemplate__ctor__fn(NativeTemplate* __this)
{
    __this->ctor_();
}

// public bool Apply(object obj) :805
void NativeTemplate__Apply_fn(NativeTemplate* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Apply(obj);
}

// private bool HaveGraphicsViewAncestor(Fuse.Node node) :787
void NativeTemplate__HaveGraphicsViewAncestor_fn(NativeTemplate* __this, ::g::Fuse::Node* node, bool* __retval)
{
    *__retval = __this->HaveGraphicsViewAncestor(node);
}

// public generated NativeTemplate New() :785
void NativeTemplate__New1_fn(NativeTemplate** __retval)
{
    *__retval = NativeTemplate::New1();
}

// public generated NativeTemplate() [instance] :785
void NativeTemplate::ctor_()
{
}

// public bool Apply(object obj) [instance] :805
bool NativeTemplate::Apply(uObject* obj)
{
    uStackFrame __("Fuse.iOS.NativeTemplate", "Apply(object)");
    bool gva = HaveGraphicsViewAncestor(uAs< ::g::Fuse::Node*>(obj, ::TYPES[12/*Fuse.Node*/]));

    if (gva)
        return true;

    ::g::Fuse::Controls::ParentControl* parentControl = uAs< ::g::Fuse::Controls::ParentControl*>(obj, ::TYPES[43/*Fuse.Controls.ParentControl*/]);

    if (uIs(obj, ::TYPES[44/*Fuse.Controls.NativeViewHost*/]))
    {
        uPtr(parentControl)->AddStyleBehavior(::g::Fuse::iOS::NativeViews::NativeViewHost::New1());
        return true;
    }

    bool addedNativeView = false;

    if (parentControl != NULL)
    {
        uPtr(parentControl)->AddStyleBehavior(::g::Fuse::iOS::NativeViews::ParentControl::New1());
        addedNativeView = true;

        if (uIs(parentControl, ::TYPES[46/*Fuse.Controls.Button*/]))
            parentControl->AddStyleChild(::g::Fuse::iOS::Controls::Button::New1());

        if (uIs(parentControl, ::TYPES[47/*Fuse.Controls.Switch*/]))
            parentControl->AddStyleChild(::g::Fuse::iOS::Controls::Switch::New1());

        if (uIs(parentControl, ::TYPES[48/*Fuse.Controls.TextEdit*/]))
            parentControl->AddStyleChild(::g::Fuse::iOS::Controls::TextInput::New1());

        if (uIs(parentControl, ::TYPES[49/*Fuse.Controls.TextBlock*/]))
            parentControl->AddStyleChild(::g::Fuse::iOS::Controls::TextBlock::New1());

        if (uIs(parentControl, ::TYPES[50/*Fuse.Controls.Slider*/]))
            parentControl->AddStyleChild(::g::Fuse::iOS::Controls::Slider::New1());

        if (uIs(parentControl, ::TYPES[51/*Fuse.Controls.Image*/]))
            parentControl->AddStyleChild(::g::Fuse::iOS::Controls::Image::New1());

        if (uIs(parentControl, ::TYPES[52/*Fuse.Controls.Rectangle*/]))
            parentControl->AddStyleChild(::g::Fuse::iOS::Controls::Rectangle::New1());

        if (uIs(parentControl, ::TYPES[53/*Fuse.Controls.Circle*/]))
            parentControl->AddStyleChild(::g::Fuse::iOS::Controls::Circle::New1());

        if (uIs(parentControl, ::TYPES[54/*Fuse.Controls.WebView*/]))
            parentControl->AddStyleChild(::g::Fuse::iOS::Controls::WebView::New1());
    }

    ::g::Fuse::Controls::ContentControl* contentControl = uAs< ::g::Fuse::Controls::ContentControl*>(obj, ::TYPES[55/*Fuse.Controls.ContentControl*/]);

    if (contentControl != NULL)
    {
        addedNativeView = true;

        if (uIs(contentControl, ::TYPES[56/*Fuse.Controls.GraphicsView*/]))
            uPtr(contentControl)->AddStyleBehavior(::g::Fuse::iOS::NativeViews::GraphicsView::New1());
        else
            contentControl->AddStyleBehavior(::g::Fuse::iOS::NativeViews::ContentControl::New1());
    }

    ::g::Fuse::Controls::ScrollView* scrollView = uAs< ::g::Fuse::Controls::ScrollView*>(obj, ::TYPES[57/*Fuse.Controls.ScrollView*/]);

    if (scrollView != NULL)
    {
        uPtr(scrollView)->AddStyleBehavior(::g::Fuse::iOS::NativeViews::ScrollView::New1());
        addedNativeView = true;
    }

    if (!addedNativeView)
    {
        ::g::Fuse::Controls::Control* c = uAs< ::g::Fuse::Controls::Control*>(obj, ::TYPES[58/*Fuse.Controls.Control*/]);

        if (c != NULL)
            uPtr(c)->AddStyleBehavior(::g::Fuse::iOS::NativeViews::GenericNativeView::New1());
    }

    return true;
}

// private bool HaveGraphicsViewAncestor(Fuse.Node node) [instance] :787
bool NativeTemplate::HaveGraphicsViewAncestor(::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.iOS.NativeTemplate", "HaveGraphicsViewAncestor(Fuse.Node)");

    if (node == NULL)
        return false;

    if (uPtr(node)->Parent() == NULL)
        return false;

    if (uIs(node, ::TYPES[44/*Fuse.Controls.NativeViewHost*/]))
        return false;

    if (uIs(uPtr(node)->Parent(), ::TYPES[56/*Fuse.Controls.GraphicsView*/]))
        return true;

    return HaveGraphicsViewAncestor(uPtr(node)->Parent());
}

// public generated NativeTemplate New() [static] :785
NativeTemplate* NativeTemplate::New1()
{
    NativeTemplate* obj1 = (NativeTemplate*)uNew(NativeTemplate_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.iOS/0.24.6/$.uno(901)
// ----------------------------------------------------------------------------

// internal static extern class RootView :901
// {
// static RootView() :912
static void RootView__cctor__fn(uType* __type)
{
    RootView::_rootContainer_ = ::g::iOS::UIKit::UIControl::New9();
    uPtr(RootView::_rootContainer_)->init();
    uPtr(RootView::_rootContainer_)->BackgroundColor(::g::Fuse::iOS::iOSExtensions::ToUIColor(::g::Uno::Float4__New2(0.95f, 0.95f, 0.95f, 1.0f)));
    uPtr(RootView::_rootContainer_)->UserInteractionEnabled(true);
    uPtr(RootView::_rootContainer_)->MultipleTouchEnabled(true);
    ::g::Uno::Platform2::Application::RootView(::g::Fuse::iOS::iOSBindingView::GetNativeViewHandle(RootView::_rootContainer_));
    uPtr(RootView::_rootContainer_)->sizeToFit();
}

uClassType* RootView_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.RootView", options);
    type->fp_cctor_ = RootView__cctor__fn;
    ::STRINGS[4] = uString::Const("View not set as rootview");
    ::STRINGS[5] = uString::Const("Rootview already set!");
    ::TYPES[59] = ::g::iOS::UIKit::UIView_typeof();
    ::TYPES[60] = ::g::Uno::Platform2::Application_typeof();
    ::TYPES[3] = ::g::ObjC::Bindings::Object_typeof();
    type->SetFields(0,
        ::g::iOS::UIKit::UIControl_typeof(), (uintptr_t)&::g::Fuse::iOS::RootView::_rootContainer_, uFieldFlagsStatic,
        ::g::iOS::UIKit::UIView_typeof(), (uintptr_t)&::g::Fuse::iOS::RootView::_rootView_, uFieldFlagsStatic);
    return type;
}

// public static void ClearRoot(iOS.UIKit.UIView view) :933
void RootView__ClearRoot_fn(::g::iOS::UIKit::UIView* view)
{
    RootView::ClearRoot(view);
}

// public static iOS.UIKit.UIView get_Current() :906
void RootView__get_Current_fn(::g::iOS::UIKit::UIView** __retval)
{
    *__retval = RootView::Current();
}

// public static void SetRoot(iOS.UIKit.UIView view) :924
void RootView__SetRoot_fn(::g::iOS::UIKit::UIView* view)
{
    RootView::SetRoot(view);
}

uSStrong< ::g::iOS::UIKit::UIControl*> RootView::_rootContainer_;
uSStrong< ::g::iOS::UIKit::UIView*> RootView::_rootView_;

// public static void ClearRoot(iOS.UIKit.UIView view) [static] :933
void RootView::ClearRoot(::g::iOS::UIKit::UIView* view)
{
    uStackFrame __("Fuse.iOS.RootView", "ClearRoot(iOS.UIKit.UIView)");
    RootView_typeof()->Init();

    if (::g::ObjC::ID::op_Inequality(::g::ObjC::Bindings::Object::op_Implicit(RootView::_rootView()), ::g::ObjC::Bindings::Object::op_Implicit(view)))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[4/*"View not se...*/]));

    RootView::_rootView() = NULL;
    uPtr(view)->removeFromSuperview();
}

// public static void SetRoot(iOS.UIKit.UIView view) [static] :924
void RootView::SetRoot(::g::iOS::UIKit::UIView* view)
{
    uStackFrame __("Fuse.iOS.RootView", "SetRoot(iOS.UIKit.UIView)");
    RootView_typeof()->Init();

    if (::g::ObjC::ID::op_Inequality(::g::ObjC::Bindings::Object::op_Implicit(RootView::_rootView()), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[5/*"Rootview al...*/]));

    RootView::_rootView() = view;
    uPtr(RootView::_rootContainer())->addSubview(view);
}

// public static iOS.UIKit.UIView get_Current() [static] :906
::g::iOS::UIKit::UIView* RootView::Current()
{
    uStackFrame __("Fuse.iOS.RootView", "get_Current()");
    RootView_typeof()->Init();
    return RootView::_rootContainer();
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.iOS/0.24.6/$.uno(952)
// ----------------------------------------------------------------------------

// public sealed class StatusBarConfig :952
// {
// static StatusBarConfig() :952
static void StatusBarConfig__cctor__fn(uType* __type)
{
    StatusBarConfig::_stack_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[61/*Uno.Collections.List<Fuse.iOS.StatusBarConfig>*/]));
}

::g::Fuse::Behavior_type* StatusBarConfig_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ObjectSize = sizeof(StatusBarConfig);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.iOS.StatusBarConfig", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)StatusBarConfig__New1_fn;
    type->fp_cctor_ = StatusBarConfig__cctor__fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))StatusBarConfig__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))StatusBarConfig__OnUnrooted_fn;
    ::TYPES[61] = ::g::Uno::Collections::List_typeof()->MakeType(StatusBarConfig_typeof());
    ::TYPES[62] = ::g::Uno::Int_typeof();
    ::TYPES[63] = ::g::Uno::Platform::iOS::StatusBar_typeof();
    ::TYPES[7] = ::g::Uno::Bool_typeof();
    type->SetFields(3,
        ::g::Uno::Platform::iOS::StatusBarAnimation_typeof(), offsetof(::g::Fuse::iOS::StatusBarConfig, _animation), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::StatusBarConfig, _hasAnimation), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::StatusBarConfig, _hasIsVisible), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::StatusBarConfig, _hasStyle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::StatusBarConfig, _isVisible), 0,
        ::g::Uno::Platform::iOS::StatusBarStyle_typeof(), offsetof(::g::Fuse::iOS::StatusBarConfig, _style), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(StatusBarConfig_typeof()), (uintptr_t)&::g::Fuse::iOS::StatusBarConfig::_stack_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Animation", NULL, (void*)StatusBarConfig__get_Animation_fn, 0, false, ::g::Uno::Platform::iOS::StatusBarAnimation_typeof(), 0),
        new uFunction("set_Animation", NULL, (void*)StatusBarConfig__set_Animation_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Platform::iOS::StatusBarAnimation_typeof()),
        new uFunction("get_IsVisible", NULL, (void*)StatusBarConfig__get_IsVisible_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsVisible", NULL, (void*)StatusBarConfig__set_IsVisible_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)StatusBarConfig__New1_fn, 0, true, StatusBarConfig_typeof(), 0),
        new uFunction("get_Style", NULL, (void*)StatusBarConfig__get_Style_fn, 0, false, ::g::Uno::Platform::iOS::StatusBarStyle_typeof(), 0),
        new uFunction("set_Style", NULL, (void*)StatusBarConfig__set_Style_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Platform::iOS::StatusBarStyle_typeof()));
    return type;
}

// public generated StatusBarConfig() :952
void StatusBarConfig__ctor_1_fn(StatusBarConfig* __this)
{
    __this->ctor_1();
}

// public Uno.Platform.iOS.StatusBarAnimation get_Animation() :992
void StatusBarConfig__get_Animation_fn(StatusBarConfig* __this, int* __retval)
{
    *__retval = __this->Animation();
}

// public void set_Animation(Uno.Platform.iOS.StatusBarAnimation value) :993
void StatusBarConfig__set_Animation_fn(StatusBarConfig* __this, int* value)
{
    __this->Animation(*value);
}

// private static void Apply() :1051
void StatusBarConfig__Apply_fn()
{
    StatusBarConfig::Apply();
}

// private static Uno.Platform.iOS.StatusBarAnimation GetAnimation() :1041
void StatusBarConfig__GetAnimation_fn(int* __retval)
{
    *__retval = StatusBarConfig::GetAnimation();
}

// private static bool GetIsVisible() :1021
void StatusBarConfig__GetIsVisible_fn(bool* __retval)
{
    *__retval = StatusBarConfig::GetIsVisible();
}

// private static Uno.Platform.iOS.StatusBarStyle GetStyle() :1031
void StatusBarConfig__GetStyle_fn(int* __retval)
{
    *__retval = StatusBarConfig::GetStyle();
}

// public bool get_IsVisible() :959
void StatusBarConfig__get_IsVisible_fn(StatusBarConfig* __this, bool* __retval)
{
    *__retval = __this->IsVisible();
}

// public void set_IsVisible(bool value) :960
void StatusBarConfig__set_IsVisible_fn(StatusBarConfig* __this, bool* value)
{
    __this->IsVisible(*value);
}

// public generated StatusBarConfig New() :952
void StatusBarConfig__New1_fn(StatusBarConfig** __retval)
{
    *__retval = StatusBarConfig::New1();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1005
void StatusBarConfig__OnRooted_fn(StatusBarConfig* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.iOS.StatusBarConfig", "OnRooted(Fuse.Node)");
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    ::g::Uno::Collections::List__Add_fn(uPtr(StatusBarConfig::_stack()), __this);
    StatusBarConfig::Apply();
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1013
void StatusBarConfig__OnUnrooted_fn(StatusBarConfig* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.iOS.StatusBarConfig", "OnUnrooted(Fuse.Node)");
    bool ret8;
    ::g::Uno::Collections::List__Remove_fn(uPtr(StatusBarConfig::_stack()), __this, &ret8);
    StatusBarConfig::Apply();
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// public Uno.Platform.iOS.StatusBarStyle get_Style() :975
void StatusBarConfig__get_Style_fn(StatusBarConfig* __this, int* __retval)
{
    *__retval = __this->Style();
}

// public void set_Style(Uno.Platform.iOS.StatusBarStyle value) :976
void StatusBarConfig__set_Style_fn(StatusBarConfig* __this, int* value)
{
    __this->Style(*value);
}

uSStrong< ::g::Uno::Collections::List*> StatusBarConfig::_stack_;

// public generated StatusBarConfig() [instance] :952
void StatusBarConfig::ctor_1()
{
    uStackFrame __("Fuse.iOS.StatusBarConfig", ".ctor()");
    ctor_();
}

// public Uno.Platform.iOS.StatusBarAnimation get_Animation() [instance] :992
int StatusBarConfig::Animation()
{
    uStackFrame __("Fuse.iOS.StatusBarConfig", "get_Animation()");
    return _animation;
}

// public void set_Animation(Uno.Platform.iOS.StatusBarAnimation value) [instance] :993
void StatusBarConfig::Animation(int value)
{
    uStackFrame __("Fuse.iOS.StatusBarConfig", "set_Animation(Uno.Platform.iOS.StatusBarAnimation)");

    if (!_hasAnimation || (_animation != value))
    {
        _animation = value;
        _hasAnimation = true;
        StatusBarConfig::Apply();
    }
}

// public bool get_IsVisible() [instance] :959
bool StatusBarConfig::IsVisible()
{
    uStackFrame __("Fuse.iOS.StatusBarConfig", "get_IsVisible()");
    return _isVisible;
}

// public void set_IsVisible(bool value) [instance] :960
void StatusBarConfig::IsVisible(bool value)
{
    uStackFrame __("Fuse.iOS.StatusBarConfig", "set_IsVisible(bool)");

    if (!_hasIsVisible || (_isVisible != value))
    {
        _isVisible = value;
        _hasIsVisible = true;
        StatusBarConfig::Apply();
    }
}

// public Uno.Platform.iOS.StatusBarStyle get_Style() [instance] :975
int StatusBarConfig::Style()
{
    uStackFrame __("Fuse.iOS.StatusBarConfig", "get_Style()");
    return _style;
}

// public void set_Style(Uno.Platform.iOS.StatusBarStyle value) [instance] :976
void StatusBarConfig::Style(int value)
{
    uStackFrame __("Fuse.iOS.StatusBarConfig", "set_Style(Uno.Platform.iOS.StatusBarStyle)");

    if (!_hasStyle || (_style != value))
    {
        _style = value;
        _hasStyle = true;
        StatusBarConfig::Apply();
    }
}

// private static void Apply() [static] :1051
void StatusBarConfig::Apply()
{
    uStackFrame __("Fuse.iOS.StatusBarConfig", "Apply()");
    StatusBarConfig_typeof()->Init();
    int anim = StatusBarConfig::GetAnimation();
    int style = StatusBarConfig::GetStyle();
    bool visible = StatusBarConfig::GetIsVisible();

    if (::g::Uno::Platform::iOS::StatusBar::Animation() != anim)
        ::g::Uno::Platform::iOS::StatusBar::Animation(anim);

    if (::g::Uno::Platform::iOS::StatusBar::Style() != style)
        ::g::Uno::Platform::iOS::StatusBar::Style(style);

    if (::g::Uno::Platform::iOS::StatusBar::IsVisible() != visible)
        ::g::Uno::Platform::iOS::StatusBar::IsVisible(visible);
}

// private static Uno.Platform.iOS.StatusBarAnimation GetAnimation() [static] :1041
int StatusBarConfig::GetAnimation()
{
    uStackFrame __("Fuse.iOS.StatusBarConfig", "GetAnimation()");
    StatusBarConfig_typeof()->Init();
    StatusBarConfig* ret2;
    StatusBarConfig* ret3;

    for (int i = uPtr(StatusBarConfig::_stack())->Count(); (i--) > 0; )
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(StatusBarConfig::_stack()), uCRef<int>(i), &ret2), ret2))->_hasAnimation)
            return uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(StatusBarConfig::_stack()), uCRef<int>(i), &ret3), ret3))->Animation();

    return 0;
}

// private static bool GetIsVisible() [static] :1021
bool StatusBarConfig::GetIsVisible()
{
    uStackFrame __("Fuse.iOS.StatusBarConfig", "GetIsVisible()");
    StatusBarConfig_typeof()->Init();
    StatusBarConfig* ret4;
    StatusBarConfig* ret5;

    for (int i = uPtr(StatusBarConfig::_stack())->Count(); (i--) > 0; )
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(StatusBarConfig::_stack()), uCRef<int>(i), &ret4), ret4))->_hasIsVisible)
            return uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(StatusBarConfig::_stack()), uCRef<int>(i), &ret5), ret5))->IsVisible();

    return true;
}

// private static Uno.Platform.iOS.StatusBarStyle GetStyle() [static] :1031
int StatusBarConfig::GetStyle()
{
    uStackFrame __("Fuse.iOS.StatusBarConfig", "GetStyle()");
    StatusBarConfig_typeof()->Init();
    StatusBarConfig* ret6;
    StatusBarConfig* ret7;

    for (int i = uPtr(StatusBarConfig::_stack())->Count(); (i--) > 0; )
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(StatusBarConfig::_stack()), uCRef<int>(i), &ret6), ret6))->_hasStyle)
            return uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(StatusBarConfig::_stack()), uCRef<int>(i), &ret7), ret7))->Style();

    return 0;
}

// public generated StatusBarConfig New() [static] :952
StatusBarConfig* StatusBarConfig::New1()
{
    StatusBarConfig* obj1 = (StatusBarConfig*)uNew(StatusBarConfig_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.iOS/0.24.6/.uno/$.uno(7)
// -------------------------------------------------------------------------------

// public partial sealed class NativeStyle.Template :7
// {
// static Template() :80
static void NativeStyle__Template__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* NativeStyle__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeStyle__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.iOS.NativeStyle.Template", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::GraphicsView_typeof()));
    type->fp_cctor_ = NativeStyle__Template__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))NativeStyle__Template__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[64] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::TextBlock_typeof());
    ::TYPES[65] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::PlainTextEdit_typeof());
    ::TYPES[41] = ::g::Fuse::Style_typeof();
    ::TYPES[42] = ::g::Uno::UX::ITemplate_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::iOS::NativeStyle_typeof(), offsetof(::g::Fuse::iOS::NativeStyle__Template, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeStyle__Template__New1_fn, 0, true, NativeStyle__Template_typeof(), 1, ::g::Fuse::iOS::NativeStyle_typeof()));
    return type;
}

// public Template(Fuse.iOS.NativeStyle parent) :10
void NativeStyle__Template__ctor_1_fn(NativeStyle__Template* __this, ::g::Fuse::iOS::NativeStyle* parent)
{
    __this->ctor_1(parent);
}

// public Template New(Fuse.iOS.NativeStyle parent) :10
void NativeStyle__Template__New1_fn(::g::Fuse::iOS::NativeStyle* parent, NativeStyle__Template** __retval)
{
    *__retval = NativeStyle__Template::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.GraphicsView self) :83
void NativeStyle__Template__OnApply_fn(NativeStyle__Template* __this, ::g::Fuse::Controls::GraphicsView* self)
{
    uStackFrame __("Fuse.iOS.NativeStyle.Template", "OnApply(Fuse.Controls.GraphicsView)");
    NativeStyle__Template__Template1* collection1;
    NativeStyle__Template__Template2* collection2;
    ::g::Fuse::Style* temp = ::g::Fuse::Style::New1();
    collection1 = NativeStyle__Template__Template1::New1(__this);
    uPtr(collection1)->Cascade(true);
    true;
    uPtr(collection1)->AffectSubtypes(true);
    true;
    NativeStyle__Template__Template1* temp1 = collection1;
    collection2 = NativeStyle__Template__Template2::New1(__this);
    uPtr(collection2)->Cascade(true);
    true;
    uPtr(collection2)->AffectSubtypes(true);
    true;
    NativeStyle__Template__Template2* temp2 = collection2;
    ::g::Fuse::Themes::GraphicsStyle* temp3 = ::g::Fuse::Themes::GraphicsStyle::New2();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[42/*Uno.UX.ITemplate*/])), (uObject*)temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[42/*Uno.UX.ITemplate*/])), (uObject*)temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[42/*Uno.UX.ITemplate*/])), (uObject*)temp3);
    uPtr(self)->AddStyleStyle(temp);
}

// public Template(Fuse.iOS.NativeStyle parent) [instance] :10
void NativeStyle__Template::ctor_1(::g::Fuse::iOS::NativeStyle* parent)
{
    uStackFrame __("Fuse.iOS.NativeStyle.Template", ".ctor(Fuse.iOS.NativeStyle)");
    ctor_();
    __parent1 = parent;
}

// public Template New(Fuse.iOS.NativeStyle parent) [static] :10
NativeStyle__Template* NativeStyle__Template::New1(::g::Fuse::iOS::NativeStyle* parent)
{
    NativeStyle__Template* obj3 = (NativeStyle__Template*)uNew(NativeStyle__Template_typeof());
    obj3->ctor_1(parent);
    return obj3;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.iOS/0.24.6/.uno/$.uno(14)
// --------------------------------------------------------------------------------

// public partial sealed class NativeStyle.Template.Template1 :14
// {
// static Template1() :21
static void NativeStyle__Template__Template1__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* NativeStyle__Template__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeStyle__Template__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.iOS.NativeStyle.Template.Template1", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::TextBlock_typeof()));
    type->fp_cctor_ = NativeStyle__Template__Template1__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))NativeStyle__Template__Template1__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[12] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::iOS::NativeStyle__Template_typeof(), offsetof(::g::Fuse::iOS::NativeStyle__Template__Template1, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeStyle__Template__Template1__New1_fn, 0, true, NativeStyle__Template__Template1_typeof(), 1, ::g::Fuse::iOS::NativeStyle__Template_typeof()));
    return type;
}

// public Template1(Fuse.iOS.NativeStyle.Template parent) :17
void NativeStyle__Template__Template1__ctor_1_fn(NativeStyle__Template__Template1* __this, ::g::Fuse::iOS::NativeStyle__Template* parent)
{
    __this->ctor_1(parent);
}

// public Template1 New(Fuse.iOS.NativeStyle.Template parent) :17
void NativeStyle__Template__Template1__New1_fn(::g::Fuse::iOS::NativeStyle__Template* parent, NativeStyle__Template__Template1** __retval)
{
    *__retval = NativeStyle__Template__Template1::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.TextBlock self) :24
void NativeStyle__Template__Template1__OnApply_fn(NativeStyle__Template__Template1* __this, ::g::Fuse::Controls::TextBlock* self)
{
    uStackFrame __("Fuse.iOS.NativeStyle.Template.Template1", "OnApply(Fuse.Controls.TextBlock)");
    ::g::Fuse::iOS::TextRenderer* temp = ::g::Fuse::iOS::TextRenderer::New1();
    uPtr(self)->AddStyleChild(temp);
}

// public Template1(Fuse.iOS.NativeStyle.Template parent) [instance] :17
void NativeStyle__Template__Template1::ctor_1(::g::Fuse::iOS::NativeStyle__Template* parent)
{
    uStackFrame __("Fuse.iOS.NativeStyle.Template.Template1", ".ctor(Fuse.iOS.NativeStyle.Template)");
    ctor_();
    __parent1 = parent;
}

// public Template1 New(Fuse.iOS.NativeStyle.Template parent) [static] :17
NativeStyle__Template__Template1* NativeStyle__Template__Template1::New1(::g::Fuse::iOS::NativeStyle__Template* parent)
{
    NativeStyle__Template__Template1* obj1 = (NativeStyle__Template__Template1*)uNew(NativeStyle__Template__Template1_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.iOS/0.24.6/.uno/$.uno(30)
// --------------------------------------------------------------------------------

// public partial sealed class NativeStyle.Template.Template2 :30
// {
// static Template2() :69
static void NativeStyle__Template__Template2__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* NativeStyle__Template__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeStyle__Template__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.iOS.NativeStyle.Template.Template2", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::PlainTextEdit_typeof()));
    type->fp_cctor_ = NativeStyle__Template__Template2__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))NativeStyle__Template__Template2__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[66] = ::g::Fuse::Controls::PlainTextEdit_typeof();
    ::TYPES[67] = ::g::Uno::UX::Factory_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::iOS::NativeStyle__Template_typeof(), offsetof(::g::Fuse::iOS::NativeStyle__Template__Template2, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeStyle__Template__Template2__New1_fn, 0, true, NativeStyle__Template__Template2_typeof(), 1, ::g::Fuse::iOS::NativeStyle__Template_typeof()));
    return type;
}

// public Template2(Fuse.iOS.NativeStyle.Template parent) :33
void NativeStyle__Template__Template2__ctor_1_fn(NativeStyle__Template__Template2* __this, ::g::Fuse::iOS::NativeStyle__Template* parent)
{
    __this->ctor_1(parent);
}

// public Template2 New(Fuse.iOS.NativeStyle.Template parent) :33
void NativeStyle__Template__Template2__New1_fn(::g::Fuse::iOS::NativeStyle__Template* parent, NativeStyle__Template__Template2** __retval)
{
    *__retval = NativeStyle__Template__Template2::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.PlainTextEdit self) :72
void NativeStyle__Template__Template2__OnApply_fn(NativeStyle__Template__Template2* __this, ::g::Fuse::Controls::PlainTextEdit* self)
{
    uStackFrame __("Fuse.iOS.NativeStyle.Template.Template2", "OnApply(Fuse.Controls.PlainTextEdit)");
    bool ret2;
    bool ret3;
    NativeStyle__Template__Template2__Factory* temp = NativeStyle__Template__Template2__Factory::New2(__this);
    NativeStyle__Template__Template2__Factory1* temp1 = NativeStyle__Template__Template2__Factory1::New2(__this);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::PlainTextEdit::NativeEditProperty()), self, temp, &ret2);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::PlainTextEdit::NativeTextProperty()), self, temp1, &ret3);
}

// public Template2(Fuse.iOS.NativeStyle.Template parent) [instance] :33
void NativeStyle__Template__Template2::ctor_1(::g::Fuse::iOS::NativeStyle__Template* parent)
{
    uStackFrame __("Fuse.iOS.NativeStyle.Template.Template2", ".ctor(Fuse.iOS.NativeStyle.Template)");
    ctor_();
    __parent1 = parent;
}

// public Template2 New(Fuse.iOS.NativeStyle.Template parent) [static] :33
NativeStyle__Template__Template2* NativeStyle__Template__Template2::New1(::g::Fuse::iOS::NativeStyle__Template* parent)
{
    NativeStyle__Template__Template2* obj1 = (NativeStyle__Template__Template2*)uNew(NativeStyle__Template__Template2_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.iOS/0.24.6/$.uno(19)
// ---------------------------------------------------------------------------

// private sealed class InputDispatch.TouchEvents :19
// {
::g::Fuse::iOS::UIControlCallback_type* InputDispatch__TouchEvents_typeof()
{
    static uSStrong< ::g::Fuse::iOS::UIControlCallback_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(InputDispatch__TouchEvents);
    options.TypeSize = sizeof(::g::Fuse::iOS::UIControlCallback_type);
    type = (::g::Fuse::iOS::UIControlCallback_type*)uClassType::New("Fuse.iOS.InputDispatch.TouchEvents", options);
    type->SetBase(::g::Fuse::iOS::UIControlCallback_typeof());
    type->fp_ctor_ = (void*)InputDispatch__TouchEvents__New7_fn;
    type->fp_callbackForEvent = (void(*)(::g::Fuse::iOS::UIControlCallback*, ::g::iOS::Foundation::NSObject*, ::g::iOS::Foundation::NSObject*))InputDispatch__TouchEvents__callbackForEvent_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    ::TYPES[68] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof());
    ::TYPES[3] = ::g::ObjC::Bindings::Object_typeof();
    ::TYPES[69] = ::g::iOS::UIKit::UIEvent_typeof();
    ::TYPES[70] = ::g::Fuse::iOS::RootView_typeof();
    ::TYPES[10] = ::g::iOS::UIKit::UIControl_typeof();
    ::TYPES[7] = ::g::Uno::Bool_typeof();
    ::TYPES[71] = ::g::Fuse::iOS::InputDispatch_typeof();
    ::TYPES[9] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::iOS::UIKit::UIControl_typeof(), ::g::Fuse::Node_typeof());
    ::TYPES[72] = ::g::iOS::Foundation::NSSet_typeof();
    ::TYPES[59] = ::g::iOS::UIKit::UIView_typeof();
    ::TYPES[23] = ::g::Uno::ULong_typeof();
    ::TYPES[27] = ::g::iOS::Foundation::NSArray_typeof();
    ::TYPES[8] = uObject_typeof();
    ::TYPES[62] = ::g::Uno::Int_typeof();
    ::TYPES[16] = ::g::iOS::UIKit::UITouch_typeof();
    ::TYPES[15] = ::g::Fuse::Input::PointerEventData_typeof();
    ::TYPES[73] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::iOS::UIControlCallback_type, interface0));
    type->SetFields(1,
        ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof()), offsetof(::g::Fuse::iOS::InputDispatch__TouchEvents, _activeTouches), 0);
    return type;
}

// public generated TouchEvents() :19
void InputDispatch__TouchEvents__ctor_6_fn(InputDispatch__TouchEvents* __this)
{
    __this->ctor_6();
}

// public override sealed void callbackForEvent(iOS.Foundation.NSObject sender, iOS.Foundation.NSObject theEvent) :32
void InputDispatch__TouchEvents__callbackForEvent_fn(InputDispatch__TouchEvents* __this, ::g::iOS::Foundation::NSObject* sender, ::g::iOS::Foundation::NSObject* theEvent)
{
    uStackFrame __("Fuse.iOS.InputDispatch.TouchEvents", "callbackForEvent(iOS.Foundation.NSObject,iOS.Foundation.NSObject)");
    bool ret2;
    ::g::Fuse::Node* ret3;
    bool ret4;
    int ret5;
    int ret6;
    ::g::iOS::UIKit::UIEvent* uiEvent = (::g::ObjC::ID::op_Inequality(::g::ObjC::Bindings::Object::op_Implicit(theEvent), ::g::ObjC::Bindings::Object::op_Implicit(NULL)) && uPtr(theEvent)->isKindOfClass(::g::ObjC::Class::op_Implicit(::TYPES[69/*iOS.UIKit.UIEvent*/]))) ? (::g::iOS::UIKit::UIEvent*)::g::iOS::UIKit::UIEvent::New6(uPtr(theEvent)->Handle()) : NULL;

    if (::g::ObjC::ID::op_Equality(::g::ObjC::Bindings::Object::op_Implicit(sender), ::g::ObjC::Bindings::Object::op_Implicit(NULL)) || ::g::ObjC::ID::op_Equality(::g::ObjC::Bindings::Object::op_Implicit(uiEvent), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
        return;

    ::g::iOS::UIKit::UIView* rootView = ::g::Fuse::iOS::RootView::Current();

    if (::g::ObjC::ID::op_Equality(::g::ObjC::Bindings::Object::op_Implicit(rootView), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
        return;

    ::g::iOS::UIKit::UIControl* control = uAs< ::g::iOS::UIKit::UIControl*>(sender, ::TYPES[10/*iOS.UIKit.UIControl*/]);

    if (::g::ObjC::ID::op_Equality(::g::ObjC::Bindings::Object::op_Implicit(control), ::g::ObjC::Bindings::Object::op_Implicit(NULL)) || !(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(::g::Fuse::iOS::InputDispatch::_listeners()), control, &ret2), ret2))
        return;

    ::g::Fuse::Node* node = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(::g::Fuse::iOS::InputDispatch::_listeners()), control, &ret3), ret3);
    ::g::Fuse::Node* rootNode = ::g::Fuse::iOS::InputDispatch::FindRoot(node);
    ::g::iOS::Foundation::NSArray* touches = uPtr(uPtr(uiEvent)->touchesForView(control))->AllObjects();
    bool touchEnded = false;

    for (uint32_t i = 0U; (uint64_t)i < uPtr(touches)->Count(); i++)
    {
        ::g::iOS::UIKit::UITouch* touch = ::g::iOS::UIKit::UITouch::New6(uPtr(touches)->objectAtIndex((uint64_t)i));

        if (!(::g::Uno::Collections::List__Contains_fn(uPtr(__this->_activeTouches), touch, &ret4), ret4))
            ::g::Uno::Collections::List__Add_fn(uPtr(__this->_activeTouches), touch);

        int pointerIndex = (::g::Uno::Collections::List__IndexOf_fn(uPtr(__this->_activeTouches), touch, &ret5), ret5);
        ::g::Fuse::Input::PointerEventData* data = ::g::Fuse::iOS::InputDispatch::MakePointerEventData(touch, rootView, pointerIndex);

        if (touch->Phase() == 0)
        {
            try
            {
                ::g::Fuse::Input::PointerPressedArgs* args = ::g::Fuse::Input::Pointer::RaisePressed(rootNode, data);
            }
            catch (const uThrowable& __t)
            {
                ::g::Uno::Exception* e = __t.Exception;
                ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
            }
        }
        else if (touch->Phase() == 1)
        {
            try
            {
                ::g::Fuse::Input::PointerMovedArgs* args1 = ::g::Fuse::Input::Pointer::RaiseMoved(rootNode, data);
            }
            catch (const uThrowable& __t)
            {
                ::g::Uno::Exception* e1 = __t.Exception;
                ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e1);
            }
        }
        else if (touch->Phase() == 3)
        {
            try
            {
                ::g::Fuse::Input::PointerReleasedArgs* args2 = ::g::Fuse::Input::Pointer::RaiseReleased(rootNode, data);
            }
            catch (const uThrowable& __t)
            {
                ::g::Uno::Exception* e2 = __t.Exception;
                ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e2);
            }

            touchEnded = true;
        }
        else if (touch->Phase() == 4)
        {
            if (::g::Fuse::Input::Pointer::HardCapture(uPtr(data)->PointIndex, node, __this, uDelegate::New(::TYPES[73/*Uno.Action*/], (void*)InputDispatch__TouchEvents__LostCallback_fn, __this)))
            {
                try
                {
                    ::g::Fuse::Input::Pointer::ReleaseHardCapture(uPtr(data)->PointIndex);
                }
                catch (const uThrowable& __t)
                {
                    ::g::Uno::Exception* e3 = __t.Exception;
                    ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e3);
                }
            }

            touchEnded = true;
        }
    }

    if (touchEnded)
    {
        for (uint32_t i1 = 0U; (uint64_t)i1 < uPtr(touches)->Count(); i1++)
        {
            ::g::iOS::UIKit::UITouch* touch1 = ::g::iOS::UIKit::UITouch::New6(uPtr(touches)->objectAtIndex((uint64_t)i1));
            int pointerIndex1 = (::g::Uno::Collections::List__IndexOf_fn(uPtr(__this->_activeTouches), touch1, &ret6), ret6);

            if (touch1->Phase() != 3)
            {
                try
                {
                    ::g::Fuse::Input::Pointer::RaiseReleased(rootNode, ::g::Fuse::iOS::InputDispatch::MakePointerEventData(touch1, rootView, pointerIndex1));
                }
                catch (const uThrowable& __t)
                {
                    ::g::Uno::Exception* e4 = __t.Exception;
                    ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e4);
                }
            }
        }

        uPtr(__this->_activeTouches)->Clear();
    }
}

// private void LostCallback() :147
void InputDispatch__TouchEvents__LostCallback_fn(InputDispatch__TouchEvents* __this)
{
    __this->LostCallback();
}

// public generated TouchEvents New() :19
void InputDispatch__TouchEvents__New7_fn(InputDispatch__TouchEvents** __retval)
{
    *__retval = InputDispatch__TouchEvents::New7();
}

// public generated TouchEvents() [instance] :19
void InputDispatch__TouchEvents::ctor_6()
{
    uStackFrame __("Fuse.iOS.InputDispatch.TouchEvents", ".ctor()");
    _activeTouches = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[68/*Uno.Collections.List<object>*/]));
    ctor_4();
}

// private void LostCallback() [instance] :147
void InputDispatch__TouchEvents::LostCallback()
{
}

// public generated TouchEvents New() [static] :19
InputDispatch__TouchEvents* InputDispatch__TouchEvents::New7()
{
    InputDispatch__TouchEvents* obj1 = (InputDispatch__TouchEvents*)uNew(InputDispatch__TouchEvents_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.iOS/0.24.6/$.uno(1354)
// -----------------------------------------------------------------------------

// internal static extern class Transform :1354
// {
// static Transform() :1363
static void Transform__cctor__fn(uType* __type)
{
    Transform::_identity_ = Transform::CreateCATransform3D(::g::Uno::Float4x4__Identity());
}

uClassType* Transform_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.Transform", options);
    type->fp_cctor_ = Transform__cctor__fn;
    ::TYPES[74] = ::g::Uno::Float4x4_typeof();
    ::TYPES[17] = ::g::iOS::QuartzCore::CALayer_typeof();
    ::TYPES[59] = ::g::iOS::UIKit::UIView_typeof();
    ::TYPES[28] = ::g::Uno::Double_typeof();
    type->SetFields(0,
        ::g::iOS::QuartzCore::CATransform3D_typeof(), (uintptr_t)&::g::Fuse::iOS::Transform::_identity_, uFieldFlagsStatic);
    return type;
}

// public static void Apply(iOS.UIKit.UIView view, float4x4 t) :1378
void Transform__Apply_fn(::g::iOS::UIKit::UIView* view, ::g::Uno::Float4x4* t)
{
    Transform::Apply(view, *t);
}

// public static void ApplyIdentity(iOS.UIKit.UIView view) :1373
void Transform__ApplyIdentity_fn(::g::iOS::UIKit::UIView* view)
{
    Transform::ApplyIdentity(view);
}

// private static iOS.QuartzCore.CATransform3D CreateCATransform3D(float4x4 t) :1388
void Transform__CreateCATransform3D_fn(::g::Uno::Float4x4* t, ::g::iOS::QuartzCore::CATransform3D* __retval)
{
    *__retval = Transform::CreateCATransform3D(*t);
}

// private static iOS.QuartzCore.CATransform3D get_Identity() :1360
void Transform__get_Identity_fn(::g::iOS::QuartzCore::CATransform3D* __retval)
{
    *__retval = Transform::Identity();
}

// public static void SetAnchor(iOS.UIKit.UIView view) :1368
void Transform__SetAnchor_fn(::g::iOS::UIKit::UIView* view)
{
    Transform::SetAnchor(view);
}

// public static void SetSize(iOS.UIKit.UIView view, float2 size) :1383
void Transform__SetSize_fn(::g::iOS::UIKit::UIView* view, ::g::Uno::Float2* size)
{
    Transform::SetSize(view, *size);
}

::g::iOS::QuartzCore::CATransform3D Transform::_identity_;

// public static void Apply(iOS.UIKit.UIView view, float4x4 t) [static] :1378
void Transform::Apply(::g::iOS::UIKit::UIView* view, ::g::Uno::Float4x4 t)
{
    uStackFrame __("Fuse.iOS.Transform", "Apply(iOS.UIKit.UIView,float4x4)");
    Transform_typeof()->Init();
    uPtr(uPtr(view)->Layer())->Transform(Transform::CreateCATransform3D(t));
}

// public static void ApplyIdentity(iOS.UIKit.UIView view) [static] :1373
void Transform::ApplyIdentity(::g::iOS::UIKit::UIView* view)
{
    uStackFrame __("Fuse.iOS.Transform", "ApplyIdentity(iOS.UIKit.UIView)");
    Transform_typeof()->Init();
    uPtr(uPtr(view)->Layer())->Transform(Transform::Identity());
}

// private static iOS.QuartzCore.CATransform3D CreateCATransform3D(float4x4 t) [static] :1388
::g::iOS::QuartzCore::CATransform3D Transform::CreateCATransform3D(::g::Uno::Float4x4 t)
{
    uStackFrame __("Fuse.iOS.Transform", "CreateCATransform3D(float4x4)");
    Transform_typeof()->Init();
    return ::g::iOS::QuartzCore::CATransform3D__New1((double)t.M11, (double)t.M12, (double)t.M13, (double)t.M14, (double)t.M21, (double)t.M22, (double)t.M23, (double)t.M24, (double)t.M31, (double)t.M32, (double)t.M33, (double)t.M34, (double)t.M41, (double)t.M42, (double)t.M43, (double)t.M44);
}

// public static void SetAnchor(iOS.UIKit.UIView view) [static] :1368
void Transform::SetAnchor(::g::iOS::UIKit::UIView* view)
{
    uStackFrame __("Fuse.iOS.Transform", "SetAnchor(iOS.UIKit.UIView)");
    Transform_typeof()->Init();
    uPtr(uPtr(view)->Layer())->AnchorPoint(::g::Fuse::iOS::iOSExtensions::ToCGPoint(::g::Uno::Float2__New1(0.0f)));
}

// public static void SetSize(iOS.UIKit.UIView view, float2 size) [static] :1383
void Transform::SetSize(::g::iOS::UIKit::UIView* view, ::g::Uno::Float2 size)
{
    uStackFrame __("Fuse.iOS.Transform", "SetSize(iOS.UIKit.UIView,float2)");
    Transform_typeof()->Init();
    uPtr(view)->Frame(::g::iOS::CoreGraphics::CGRect__New1(::g::Fuse::iOS::iOSExtensions::ToCGPoint(::g::Uno::Float2__New1(0.0f)), ::g::Fuse::iOS::iOSExtensions::ToCGSize(size)));
}

// private static iOS.QuartzCore.CATransform3D get_Identity() [static] :1360
::g::iOS::QuartzCore::CATransform3D Transform::Identity()
{
    uStackFrame __("Fuse.iOS.Transform", "get_Identity()");
    Transform_typeof()->Init();
    return Transform::_identity();
}
// }

}}} // ::g::Fuse::iOS
