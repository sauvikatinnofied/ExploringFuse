// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseAndroid_bundle.h>
#include <Fuse.Android.Blitter.h>
#include <Fuse.Android.Controls.PlainTextEdit.h>
#include <Fuse.Android.Helpers.h>
#include <Fuse.Android.NativeStyle.h>
#include <Fuse.Android.NativeStyle.Template.h>
#include <Fuse.Android.NativeStyle.Template.Template1.h>
#include <Fuse.Android.NativeStyle.Template.Template2.Factory.h>
#include <Fuse.Android.NativeStyle.Template.Template2.Factory1.h>
#include <Fuse.Android.NativeStyle.Template.Template2.h>
#include <Fuse.Android.NativeTemplate.h>
#include <Fuse.Android.StatusBarConfig.h>
#include <Fuse.Android.TextRenderer.h>
#include <Fuse.Controls.GraphicsView.h>
#include <Fuse.Controls.ParentControl.h>
#include <Fuse.Controls.PlainTextEdit.h>
#include <Fuse.Controls.TextBlock.h>
#include <Fuse.DrawContext.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Node.h>
#include <Fuse.Style.h>
#include <Fuse.StyleProperty-2.h>
#include <Fuse.Themes.GraphicsStyle.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Byte4.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
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
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.UX.Factory.h>
#include <Uno.UX.Template-1.h>
static uType* TYPES[16];

namespace g{
namespace Fuse{
namespace Android{

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Android/0.24.6/$.uno(1216)
// ---------------------------------------------------------------------------------

// internal sealed class Blitter :1216
// {
// static Blitter() :1216
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
    type = uClassType::New("Fuse.Android.Blitter", options);
    type->fp_ctor_ = (void*)Blitter__New1_fn;
    type->fp_cctor_ = Blitter__cctor__fn;
    ::TYPES[0] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[1] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[2] = ::g::FuseAndroid_bundle_typeof();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Android::Blitter, _draw_3ffdfb2d), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Android::Blitter, Blit_v_3ffdfb2d_1_7_1), 0,
        ::g::Uno::Float2_typeof()->Array(), offsetof(::g::Fuse::Android::Blitter, Blit_verts_3ffdfb2d_1_6_5), 0,
        Blitter_typeof(), (uintptr_t)&::g::Fuse::Android::Blitter::Singleton_, uFieldFlagsStatic);
    return type;
}

// public generated Blitter() :1216
void Blitter__ctor__fn(Blitter* __this)
{
    __this->ctor_();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) :1220
void Blitter__Blit_fn(Blitter* __this, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2* pos, ::g::Uno::Float2* size, ::g::Uno::Float4x4* localToClipTransform)
{
    __this->Blit(vt, *pos, *size, *localToClipTransform);
}

// private generated void init_DrawCalls() :1216
void Blitter__init_DrawCalls_fn(Blitter* __this)
{
    __this->init_DrawCalls();
}

// public generated Blitter New() :1216
void Blitter__New1_fn(Blitter** __retval)
{
    *__retval = Blitter::New1();
}

uSStrong<Blitter*> Blitter::Singleton_;

// public generated Blitter() [instance] :1216
void Blitter::ctor_()
{
    uStackFrame __("Fuse.Android.Blitter", ".ctor()");
    init_DrawCalls();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) [instance] :1220
void Blitter::Blit(::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2 pos, ::g::Uno::Float2 size, ::g::Uno::Float4x4 localToClipTransform)
{
    uStackFrame __("Fuse.Android.Blitter", "Blit(texture2D,float2,float2,float4x4)");
    _draw_3ffdfb2d.BlendEnabled(true);
    _draw_3ffdfb2d.CullFace(0);
    _draw_3ffdfb2d.BlendSrcAlpha(7);
    _draw_3ffdfb2d.BlendDstRgb(3);
    _draw_3ffdfb2d.Use();
    _draw_3ffdfb2d.Attrib1(0, 2, Blit_v_3ffdfb2d_1_7_1, 8, 0);
    _draw_3ffdfb2d.Uniform2(1, size);
    _draw_3ffdfb2d.Uniform2(2, pos);
    _draw_3ffdfb2d.Uniform12(3, localToClipTransform);
    _draw_3ffdfb2d.Sampler2(4, vt);
    _draw_3ffdfb2d.DrawArrays(uPtr(Blit_verts_3ffdfb2d_1_6_5)->Length());
}

// private generated void init_DrawCalls() [instance] :1216
void Blitter::init_DrawCalls()
{
    uStackFrame __("Fuse.Android.Blitter", "init_DrawCalls()");
    uArray* verts_3ffdfb2d_1_6_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[1/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f));
    Blit_v_3ffdfb2d_1_7_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(verts_3ffdfb2d_1_6_0), 0);
    Blit_verts_3ffdfb2d_1_6_5 = verts_3ffdfb2d_1_6_0;
    _draw_3ffdfb2d = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseAndroid_bundle::Blitter4fbe5e04());
}

// public generated Blitter New() [static] :1216
Blitter* Blitter::New1()
{
    Blitter* obj1 = (Blitter*)uNew(Blitter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Android/0.24.6/.uno/$.uno(37)
// ------------------------------------------------------------------------------------

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
    type = (::g::Uno::UX::Factory_type*)uClassType::New("Fuse.Android.NativeStyle.Template.Template2.Factory", options);
    type->SetBase(::g::Uno::UX::Factory_typeof());
    type->fp_cctor_ = NativeStyle__Template__Template2__Factory__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Factory*, uObject**))NativeStyle__Template__Template2__Factory__New1_fn;
    ::TYPES[3] = uObject_typeof();
    type->SetFields(2,
        ::g::Fuse::Android::NativeStyle__Template__Template2_typeof(), offsetof(::g::Fuse::Android::NativeStyle__Template__Template2__Factory, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeStyle__Template__Template2__Factory__New2_fn, 0, true, NativeStyle__Template__Template2__Factory_typeof(), 1, ::g::Fuse::Android::NativeStyle__Template__Template2_typeof()));
    return type;
}

// public Factory(Fuse.Android.NativeStyle.Template.Template2 parent) :40
void NativeStyle__Template__Template2__Factory__ctor_1_fn(NativeStyle__Template__Template2__Factory* __this, ::g::Fuse::Android::NativeStyle__Template__Template2* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :47
void NativeStyle__Template__Template2__Factory__New1_fn(NativeStyle__Template__Template2__Factory* __this, uObject** __retval)
{
    uStackFrame __("Fuse.Android.NativeStyle.Template.Template2.Factory", "New()");
    ::g::Fuse::Android::Controls::PlainTextEdit* self = ::g::Fuse::Android::Controls::PlainTextEdit::New3();
    return *__retval = self, void();
}

// public Factory New(Fuse.Android.NativeStyle.Template.Template2 parent) :40
void NativeStyle__Template__Template2__Factory__New2_fn(::g::Fuse::Android::NativeStyle__Template__Template2* parent, NativeStyle__Template__Template2__Factory** __retval)
{
    *__retval = NativeStyle__Template__Template2__Factory::New2(parent);
}

// public Factory(Fuse.Android.NativeStyle.Template.Template2 parent) [instance] :40
void NativeStyle__Template__Template2__Factory::ctor_1(::g::Fuse::Android::NativeStyle__Template__Template2* parent)
{
    uStackFrame __("Fuse.Android.NativeStyle.Template.Template2.Factory", ".ctor(Fuse.Android.NativeStyle.Template.Template2)");
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Factory New(Fuse.Android.NativeStyle.Template.Template2 parent) [static] :40
NativeStyle__Template__Template2__Factory* NativeStyle__Template__Template2__Factory::New2(::g::Fuse::Android::NativeStyle__Template__Template2* parent)
{
    NativeStyle__Template__Template2__Factory* obj1 = (NativeStyle__Template__Template2__Factory*)uNew(NativeStyle__Template__Template2__Factory_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Android/0.24.6/.uno/$.uno(53)
// ------------------------------------------------------------------------------------

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
    type = (::g::Uno::UX::Factory_type*)uClassType::New("Fuse.Android.NativeStyle.Template.Template2.Factory1", options);
    type->SetBase(::g::Uno::UX::Factory_typeof());
    type->fp_cctor_ = NativeStyle__Template__Template2__Factory1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Factory*, uObject**))NativeStyle__Template__Template2__Factory1__New1_fn;
    ::TYPES[3] = uObject_typeof();
    type->SetFields(2,
        ::g::Fuse::Android::NativeStyle__Template__Template2_typeof(), offsetof(::g::Fuse::Android::NativeStyle__Template__Template2__Factory1, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeStyle__Template__Template2__Factory1__New2_fn, 0, true, NativeStyle__Template__Template2__Factory1_typeof(), 1, ::g::Fuse::Android::NativeStyle__Template__Template2_typeof()));
    return type;
}

// public Factory1(Fuse.Android.NativeStyle.Template.Template2 parent) :56
void NativeStyle__Template__Template2__Factory1__ctor_1_fn(NativeStyle__Template__Template2__Factory1* __this, ::g::Fuse::Android::NativeStyle__Template__Template2* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :63
void NativeStyle__Template__Template2__Factory1__New1_fn(NativeStyle__Template__Template2__Factory1* __this, uObject** __retval)
{
    uStackFrame __("Fuse.Android.NativeStyle.Template.Template2.Factory1", "New()");
    ::g::Fuse::Android::TextRenderer* self = ::g::Fuse::Android::TextRenderer::New1();
    return *__retval = self, void();
}

// public Factory1 New(Fuse.Android.NativeStyle.Template.Template2 parent) :56
void NativeStyle__Template__Template2__Factory1__New2_fn(::g::Fuse::Android::NativeStyle__Template__Template2* parent, NativeStyle__Template__Template2__Factory1** __retval)
{
    *__retval = NativeStyle__Template__Template2__Factory1::New2(parent);
}

// public Factory1(Fuse.Android.NativeStyle.Template.Template2 parent) [instance] :56
void NativeStyle__Template__Template2__Factory1::ctor_1(::g::Fuse::Android::NativeStyle__Template__Template2* parent)
{
    uStackFrame __("Fuse.Android.NativeStyle.Template.Template2.Factory1", ".ctor(Fuse.Android.NativeStyle.Template.Template2)");
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Factory1 New(Fuse.Android.NativeStyle.Template.Template2 parent) [static] :56
NativeStyle__Template__Template2__Factory1* NativeStyle__Template__Template2__Factory1::New2(::g::Fuse::Android::NativeStyle__Template__Template2* parent)
{
    NativeStyle__Template__Template2__Factory1* obj1 = (NativeStyle__Template__Template2__Factory1*)uNew(NativeStyle__Template__Template2__Factory1_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Android/0.24.6/$.uno(240)
// --------------------------------------------------------------------------------

// internal static class Helpers :240
// {
uClassType* Helpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.Helpers", options);
    ::TYPES[4] = ::g::Uno::Int_typeof();
    ::TYPES[5] = ::g::Uno::Float4_typeof();
    return type;
}

// public static int EncodeColor(float4 c) :242
void Helpers__EncodeColor_fn(::g::Uno::Float4* c, int* __retval)
{
    *__retval = Helpers::EncodeColor(*c);
}

// public static int EncodeColor(float4 c) [static] :242
int Helpers::EncodeColor(::g::Uno::Float4 c)
{
    uStackFrame __("Fuse.Android.Helpers", "EncodeColor(float4)");
    int r = ::g::Uno::Math::Clamp8((int)(c.X * 255.0f), 0, 255);
    int g = ::g::Uno::Math::Clamp8((int)(c.Y * 255.0f), 0, 255);
    int b = ::g::Uno::Math::Clamp8((int)(c.Z * 255.0f), 0, 255);
    int a = ::g::Uno::Math::Clamp8((int)(c.W * 255.0f), 0, 255);
    return (((a << 24) | (r << 16)) | (g << 8)) | b;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Android/0.24.6/.uno/$.uno(5)
// -----------------------------------------------------------------------------------

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
    type = (::g::Fuse::Style_type*)uClassType::New("Fuse.Android.NativeStyle", options);
    type->SetBase(::g::Fuse::Style_typeof());
    type->fp_ctor_ = (void*)NativeStyle__New2_fn;
    type->fp_cctor_ = NativeStyle__cctor__fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Style__Apply_fn;
    ::TYPES[6] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::GraphicsView_typeof());
    ::TYPES[7] = ::g::Fuse::Style_typeof();
    ::TYPES[8] = ::g::Uno::UX::ITemplate_typeof();
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
    uStackFrame __("Fuse.Android.NativeStyle", ".ctor()");
    ctor_();
    InitializeUX();
}

// private void InitializeUX() [instance] :102
void NativeStyle::InitializeUX()
{
    uStackFrame __("Fuse.Android.NativeStyle", "InitializeUX()");
    NativeStyle__Template* collection1;
    ::g::Fuse::Android::NativeTemplate* temp = ::g::Fuse::Android::NativeTemplate::New1();
    collection1 = NativeStyle__Template::New1(this);
    uPtr(collection1)->Cascade(true);
    true;
    uPtr(collection1)->AffectSubtypes(true);
    true;
    NativeStyle__Template* temp1 = collection1;
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Uno.UX.ITemplate*/])), (uObject*)temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Uno.UX.ITemplate*/])), (uObject*)temp1);
}

// public NativeStyle New() [static] :98
NativeStyle* NativeStyle::New2()
{
    NativeStyle* obj2 = (NativeStyle*)uNew(NativeStyle_typeof());
    obj2->ctor_1();
    return obj2;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Android/0.24.6/$.uno(499)
// --------------------------------------------------------------------------------

// internal sealed class NativeTemplate :499
// {
NativeTemplate_type* NativeTemplate_typeof()
{
    static uSStrong<NativeTemplate_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeTemplate);
    options.TypeSize = sizeof(NativeTemplate_type);
    type = (NativeTemplate_type*)uClassType::New("Fuse.Android.NativeTemplate", options);
    type->fp_ctor_ = (void*)NativeTemplate__New1_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))NativeTemplate__Apply_fn;
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(NativeTemplate_type, interface0));
    return type;
}

// public generated NativeTemplate() :499
void NativeTemplate__ctor__fn(NativeTemplate* __this)
{
    __this->ctor_();
}

// public extern bool Apply(object obj) :525
void NativeTemplate__Apply_fn(NativeTemplate* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Apply(obj);
}

// public generated NativeTemplate New() :499
void NativeTemplate__New1_fn(NativeTemplate** __retval)
{
    *__retval = NativeTemplate::New1();
}

// public generated NativeTemplate() [instance] :499
void NativeTemplate::ctor_()
{
}

// public extern bool Apply(object obj) [instance] :525
bool NativeTemplate::Apply(uObject* obj)
{
    uStackFrame __("Fuse.Android.NativeTemplate", "Apply(object)");
    return true;
}

// public generated NativeTemplate New() [static] :499
NativeTemplate* NativeTemplate::New1()
{
    NativeTemplate* obj1 = (NativeTemplate*)uNew(NativeTemplate_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Android/0.24.6/$.uno(789)
// --------------------------------------------------------------------------------

// public sealed class StatusBarConfig :789
// {
::g::Fuse::Behavior_type* StatusBarConfig_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(StatusBarConfig);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Android.StatusBarConfig", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)StatusBarConfig__New1_fn;
    ::TYPES[9] = ::g::Uno::Byte_typeof();
    ::TYPES[5] = ::g::Uno::Float4_typeof();
    ::TYPES[10] = ::g::Uno::Byte4_typeof();
    ::TYPES[4] = ::g::Uno::Int_typeof();
    type->SetFields(3,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Android::StatusBarConfig, _color), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::StatusBarConfig, _isNavigationBarVisible), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::StatusBarConfig, _isVisible), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Color", NULL, (void*)StatusBarConfig__get_Color_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Color", NULL, (void*)StatusBarConfig__set_Color_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_IsNavigationBarVisible", NULL, (void*)StatusBarConfig__get_IsNavigationBarVisible_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsNavigationBarVisible", NULL, (void*)StatusBarConfig__set_IsNavigationBarVisible_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_IsVisible", NULL, (void*)StatusBarConfig__get_IsVisible_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsVisible", NULL, (void*)StatusBarConfig__set_IsVisible_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)StatusBarConfig__New1_fn, 0, true, StatusBarConfig_typeof(), 0));
    return type;
}

// public generated StatusBarConfig() :789
void StatusBarConfig__ctor_1_fn(StatusBarConfig* __this)
{
    __this->ctor_1();
}

// public float4 get_Color() :795
void StatusBarConfig__get_Color_fn(StatusBarConfig* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :796
void StatusBarConfig__set_Color_fn(StatusBarConfig* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public bool get_IsNavigationBarVisible() :817
void StatusBarConfig__get_IsNavigationBarVisible_fn(StatusBarConfig* __this, bool* __retval)
{
    *__retval = __this->IsNavigationBarVisible();
}

// public void set_IsNavigationBarVisible(bool value) :818
void StatusBarConfig__set_IsNavigationBarVisible_fn(StatusBarConfig* __this, bool* value)
{
    __this->IsNavigationBarVisible(*value);
}

// public bool get_IsVisible() :806
void StatusBarConfig__get_IsVisible_fn(StatusBarConfig* __this, bool* __retval)
{
    *__retval = __this->IsVisible();
}

// public void set_IsVisible(bool value) :807
void StatusBarConfig__set_IsVisible_fn(StatusBarConfig* __this, bool* value)
{
    __this->IsVisible(*value);
}

// public generated StatusBarConfig New() :789
void StatusBarConfig__New1_fn(StatusBarConfig** __retval)
{
    *__retval = StatusBarConfig::New1();
}

// private extern void SetNavigationBarVisible(bool visible) :874
void StatusBarConfig__SetNavigationBarVisible_fn(StatusBarConfig* __this, bool* visible)
{
    __this->SetNavigationBarVisible(*visible);
}

// private void SetStatusBarColor(float4 color) :825
void StatusBarConfig__SetStatusBarColor_fn(StatusBarConfig* __this, ::g::Uno::Float4* color)
{
    __this->SetStatusBarColor(*color);
}

// private extern void SetStatusBarColor(int color) :843
void StatusBarConfig__SetStatusBarColor1_fn(StatusBarConfig* __this, int* color)
{
    __this->SetStatusBarColor1(*color);
}

// private extern void SetStatusBarVisible(bool visible) :854
void StatusBarConfig__SetStatusBarVisible_fn(StatusBarConfig* __this, bool* visible)
{
    __this->SetStatusBarVisible(*visible);
}

// public generated StatusBarConfig() [instance] :789
void StatusBarConfig::ctor_1()
{
    uStackFrame __("Fuse.Android.StatusBarConfig", ".ctor()");
    ctor_();
}

// public float4 get_Color() [instance] :795
::g::Uno::Float4 StatusBarConfig::Color()
{
    uStackFrame __("Fuse.Android.StatusBarConfig", "get_Color()");
    return _color;
}

// public void set_Color(float4 value) [instance] :796
void StatusBarConfig::Color(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Android.StatusBarConfig", "set_Color(float4)");
    _color = value;
    SetStatusBarColor(_color);
}

// public bool get_IsNavigationBarVisible() [instance] :817
bool StatusBarConfig::IsNavigationBarVisible()
{
    uStackFrame __("Fuse.Android.StatusBarConfig", "get_IsNavigationBarVisible()");
    return _isNavigationBarVisible;
}

// public void set_IsNavigationBarVisible(bool value) [instance] :818
void StatusBarConfig::IsNavigationBarVisible(bool value)
{
    uStackFrame __("Fuse.Android.StatusBarConfig", "set_IsNavigationBarVisible(bool)");
    _isNavigationBarVisible = value;
    SetNavigationBarVisible(_isNavigationBarVisible);
}

// public bool get_IsVisible() [instance] :806
bool StatusBarConfig::IsVisible()
{
    uStackFrame __("Fuse.Android.StatusBarConfig", "get_IsVisible()");
    return _isVisible;
}

// public void set_IsVisible(bool value) [instance] :807
void StatusBarConfig::IsVisible(bool value)
{
    uStackFrame __("Fuse.Android.StatusBarConfig", "set_IsVisible(bool)");
    _isVisible = value;
    SetStatusBarVisible(_isVisible);
}

// private extern void SetNavigationBarVisible(bool visible) [instance] :874
void StatusBarConfig::SetNavigationBarVisible(bool visible)
{
}

// private void SetStatusBarColor(float4 color) [instance] :825
void StatusBarConfig::SetStatusBarColor(::g::Uno::Float4 color)
{
    uStackFrame __("Fuse.Android.StatusBarConfig", "SetStatusBarColor(float4)");
    ::g::Uno::Byte4 c = ::g::Uno::Byte4__New2((uint8_t)::g::Uno::Math::Clamp1(color.X * 255.0f, 0.0f, 255.0f), (uint8_t)::g::Uno::Math::Clamp1(color.Y * 255.0f, 0.0f, 255.0f), (uint8_t)::g::Uno::Math::Clamp1(color.Z * 255.0f, 0.0f, 255.0f), (uint8_t)::g::Uno::Math::Clamp1(color.W * 255.0f, 0.0f, 255.0f));
    int androidColor = 0;
    androidColor = androidColor | (c.W << 24);
    androidColor = androidColor | (c.X << 16);
    androidColor = androidColor | (c.Y << 8);
    androidColor = androidColor | (int)c.Z;
    SetStatusBarColor1(androidColor);
}

// private extern void SetStatusBarColor(int color) [instance] :843
void StatusBarConfig::SetStatusBarColor1(int color)
{
}

// private extern void SetStatusBarVisible(bool visible) [instance] :854
void StatusBarConfig::SetStatusBarVisible(bool visible)
{
}

// public generated StatusBarConfig New() [static] :789
StatusBarConfig* StatusBarConfig::New1()
{
    StatusBarConfig* obj1 = (StatusBarConfig*)uNew(StatusBarConfig_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Android/0.24.6/.uno/$.uno(7)
// -----------------------------------------------------------------------------------

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
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.Android.NativeStyle.Template", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::GraphicsView_typeof()));
    type->fp_cctor_ = NativeStyle__Template__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))NativeStyle__Template__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[11] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::TextBlock_typeof());
    ::TYPES[12] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::PlainTextEdit_typeof());
    ::TYPES[7] = ::g::Fuse::Style_typeof();
    ::TYPES[8] = ::g::Uno::UX::ITemplate_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Android::NativeStyle_typeof(), offsetof(::g::Fuse::Android::NativeStyle__Template, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeStyle__Template__New1_fn, 0, true, NativeStyle__Template_typeof(), 1, ::g::Fuse::Android::NativeStyle_typeof()));
    return type;
}

// public Template(Fuse.Android.NativeStyle parent) :10
void NativeStyle__Template__ctor_1_fn(NativeStyle__Template* __this, ::g::Fuse::Android::NativeStyle* parent)
{
    __this->ctor_1(parent);
}

// public Template New(Fuse.Android.NativeStyle parent) :10
void NativeStyle__Template__New1_fn(::g::Fuse::Android::NativeStyle* parent, NativeStyle__Template** __retval)
{
    *__retval = NativeStyle__Template::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.GraphicsView self) :83
void NativeStyle__Template__OnApply_fn(NativeStyle__Template* __this, ::g::Fuse::Controls::GraphicsView* self)
{
    uStackFrame __("Fuse.Android.NativeStyle.Template", "OnApply(Fuse.Controls.GraphicsView)");
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
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Uno.UX.ITemplate*/])), (uObject*)temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Uno.UX.ITemplate*/])), (uObject*)temp2);
    uPtr(self)->AddStyleStyle(temp);
    self->AddStyleStyle(temp3);
}

// public Template(Fuse.Android.NativeStyle parent) [instance] :10
void NativeStyle__Template::ctor_1(::g::Fuse::Android::NativeStyle* parent)
{
    uStackFrame __("Fuse.Android.NativeStyle.Template", ".ctor(Fuse.Android.NativeStyle)");
    ctor_();
    __parent1 = parent;
}

// public Template New(Fuse.Android.NativeStyle parent) [static] :10
NativeStyle__Template* NativeStyle__Template::New1(::g::Fuse::Android::NativeStyle* parent)
{
    NativeStyle__Template* obj3 = (NativeStyle__Template*)uNew(NativeStyle__Template_typeof());
    obj3->ctor_1(parent);
    return obj3;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Android/0.24.6/.uno/$.uno(14)
// ------------------------------------------------------------------------------------

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
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.Android.NativeStyle.Template.Template1", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::TextBlock_typeof()));
    type->fp_cctor_ = NativeStyle__Template__Template1__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))NativeStyle__Template__Template1__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[13] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Android::NativeStyle__Template_typeof(), offsetof(::g::Fuse::Android::NativeStyle__Template__Template1, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeStyle__Template__Template1__New1_fn, 0, true, NativeStyle__Template__Template1_typeof(), 1, ::g::Fuse::Android::NativeStyle__Template_typeof()));
    return type;
}

// public Template1(Fuse.Android.NativeStyle.Template parent) :17
void NativeStyle__Template__Template1__ctor_1_fn(NativeStyle__Template__Template1* __this, ::g::Fuse::Android::NativeStyle__Template* parent)
{
    __this->ctor_1(parent);
}

// public Template1 New(Fuse.Android.NativeStyle.Template parent) :17
void NativeStyle__Template__Template1__New1_fn(::g::Fuse::Android::NativeStyle__Template* parent, NativeStyle__Template__Template1** __retval)
{
    *__retval = NativeStyle__Template__Template1::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.TextBlock self) :24
void NativeStyle__Template__Template1__OnApply_fn(NativeStyle__Template__Template1* __this, ::g::Fuse::Controls::TextBlock* self)
{
    uStackFrame __("Fuse.Android.NativeStyle.Template.Template1", "OnApply(Fuse.Controls.TextBlock)");
    ::g::Fuse::Android::TextRenderer* temp = ::g::Fuse::Android::TextRenderer::New1();
    uPtr(self)->AddStyleChild(temp);
}

// public Template1(Fuse.Android.NativeStyle.Template parent) [instance] :17
void NativeStyle__Template__Template1::ctor_1(::g::Fuse::Android::NativeStyle__Template* parent)
{
    uStackFrame __("Fuse.Android.NativeStyle.Template.Template1", ".ctor(Fuse.Android.NativeStyle.Template)");
    ctor_();
    __parent1 = parent;
}

// public Template1 New(Fuse.Android.NativeStyle.Template parent) [static] :17
NativeStyle__Template__Template1* NativeStyle__Template__Template1::New1(::g::Fuse::Android::NativeStyle__Template* parent)
{
    NativeStyle__Template__Template1* obj1 = (NativeStyle__Template__Template1*)uNew(NativeStyle__Template__Template1_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Android/0.24.6/.uno/$.uno(30)
// ------------------------------------------------------------------------------------

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
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.Android.NativeStyle.Template.Template2", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::PlainTextEdit_typeof()));
    type->fp_cctor_ = NativeStyle__Template__Template2__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))NativeStyle__Template__Template2__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[14] = ::g::Fuse::Controls::PlainTextEdit_typeof();
    ::TYPES[15] = ::g::Uno::UX::Factory_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Android::NativeStyle__Template_typeof(), offsetof(::g::Fuse::Android::NativeStyle__Template__Template2, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeStyle__Template__Template2__New1_fn, 0, true, NativeStyle__Template__Template2_typeof(), 1, ::g::Fuse::Android::NativeStyle__Template_typeof()));
    return type;
}

// public Template2(Fuse.Android.NativeStyle.Template parent) :33
void NativeStyle__Template__Template2__ctor_1_fn(NativeStyle__Template__Template2* __this, ::g::Fuse::Android::NativeStyle__Template* parent)
{
    __this->ctor_1(parent);
}

// public Template2 New(Fuse.Android.NativeStyle.Template parent) :33
void NativeStyle__Template__Template2__New1_fn(::g::Fuse::Android::NativeStyle__Template* parent, NativeStyle__Template__Template2** __retval)
{
    *__retval = NativeStyle__Template__Template2::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.PlainTextEdit self) :72
void NativeStyle__Template__Template2__OnApply_fn(NativeStyle__Template__Template2* __this, ::g::Fuse::Controls::PlainTextEdit* self)
{
    uStackFrame __("Fuse.Android.NativeStyle.Template.Template2", "OnApply(Fuse.Controls.PlainTextEdit)");
    bool ret2;
    bool ret3;
    NativeStyle__Template__Template2__Factory* temp = NativeStyle__Template__Template2__Factory::New2(__this);
    NativeStyle__Template__Template2__Factory1* temp1 = NativeStyle__Template__Template2__Factory1::New2(__this);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::PlainTextEdit::NativeEditProperty()), self, temp, &ret2);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::PlainTextEdit::NativeTextProperty()), self, temp1, &ret3);
}

// public Template2(Fuse.Android.NativeStyle.Template parent) [instance] :33
void NativeStyle__Template__Template2::ctor_1(::g::Fuse::Android::NativeStyle__Template* parent)
{
    uStackFrame __("Fuse.Android.NativeStyle.Template.Template2", ".ctor(Fuse.Android.NativeStyle.Template)");
    ctor_();
    __parent1 = parent;
}

// public Template2 New(Fuse.Android.NativeStyle.Template parent) [static] :33
NativeStyle__Template__Template2* NativeStyle__Template__Template2::New1(::g::Fuse::Android::NativeStyle__Template* parent)
{
    NativeStyle__Template__Template2* obj1 = (NativeStyle__Template__Template2*)uNew(NativeStyle__Template__Template2_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Android/0.24.6/$.uno(914)
// --------------------------------------------------------------------------------

// public sealed extern class TextRenderer :914
// {
::g::Fuse::Controls::Graphics::ControlVisual_type* TextRenderer_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Graphics::ControlVisual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 58;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TextRenderer);
    options.TypeSize = sizeof(::g::Fuse::Controls::Graphics::ControlVisual_type);
    type = (::g::Fuse::Controls::Graphics::ControlVisual_type*)uClassType::New("Fuse.Android.TextRenderer", options);
    type->SetBase(::g::Fuse::Controls::Graphics::TextVisual_typeof());
    type->fp_ctor_ = (void*)TextRenderer__New1_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Node*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))TextRenderer__GetMarginSize_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Controls::Graphics::Visual*, ::g::Fuse::DrawContext*))TextRenderer__OnDraw_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Graphics::ControlVisual_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::Graphics::ControlVisual_type, interface1));
    type->SetFields(58);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TextRenderer__New1_fn, 0, true, TextRenderer_typeof(), 0));
    return type;
}

// public generated TextRenderer() :914
void TextRenderer__ctor_4_fn(TextRenderer* __this)
{
    __this->ctor_4();
}

// public override sealed float2 GetMarginSize(Fuse.LayoutParams lp) :916
void TextRenderer__GetMarginSize_fn(TextRenderer* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Android.TextRenderer", "GetMarginSize(Fuse.LayoutParams)");
    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// public generated TextRenderer New() :914
void TextRenderer__New1_fn(TextRenderer** __retval)
{
    *__retval = TextRenderer::New1();
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :921
void TextRenderer__OnDraw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc)
{
}

// public generated TextRenderer() [instance] :914
void TextRenderer::ctor_4()
{
    uStackFrame __("Fuse.Android.TextRenderer", ".ctor()");
    ctor_3();
}

// public generated TextRenderer New() [static] :914
TextRenderer* TextRenderer::New1()
{
    TextRenderer* obj1 = (TextRenderer*)uNew(TextRenderer_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

}}} // ::g::Fuse::Android
