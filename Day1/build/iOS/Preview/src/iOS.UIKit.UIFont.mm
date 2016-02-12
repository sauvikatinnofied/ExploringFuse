// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIFont
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIFont*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIFont_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.UIFont.h>
#include <Uno.Double.h>
#include <Uno.String.h>

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class UIFont :75079
// {
UIFont_type* UIFont_typeof()
{
    static uSStrong<UIFont_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(UIFont);
    options.TypeSize = sizeof(UIFont_type);
    type = (UIFont_type*)uClassType::New("iOS.UIKit.UIFont", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(UIFont_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(UIFont_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(6,
        new uFunction("_fontWithNameSize", NULL, (void*)UIFont___fontWithNameSize_fn, 0, true, UIFont_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("_systemFontOfSize", NULL, (void*)UIFont___systemFontOfSize_fn, 0, true, UIFont_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("fontName", NULL, (void*)UIFont__fontName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_FontName", NULL, (void*)UIFont__get_FontName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("lineHeight", NULL, (void*)UIFont__lineHeight_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_LineHeight", NULL, (void*)UIFont__get_LineHeight_fn, 0, false, ::g::Uno::Double_typeof(), 0));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public static extern iOS.UIKit.UIFont _fontWithNameSize(string fontName, double fontSize) :75138
void UIFont___fontWithNameSize_fn(uString* fontName_, double* fontSize_, UIFont** __retval)
{
    *__retval = UIFont::_fontWithNameSize(fontName_, *fontSize_);
}

// public static extern iOS.UIKit.UIFont _systemFontOfSize(double fontSize) :75147
void UIFont___systemFontOfSize_fn(double* fontSize_, UIFont** __retval)
{
    *__retval = UIFont::_systemFontOfSize(*fontSize_);
}

// public extern string fontName() :75171
void UIFont__fontName_fn(UIFont* __this, uString** __retval)
{
    *__retval = __this->fontName();
}

// public string get_FontName() :75096
void UIFont__get_FontName_fn(UIFont* __this, uString** __retval)
{
    *__retval = __this->FontName();
}

// public extern double lineHeight() :75189
void UIFont__lineHeight_fn(UIFont* __this, double* __retval)
{
    *__retval = __this->lineHeight();
}

// public double get_LineHeight() :75126
void UIFont__get_LineHeight_fn(UIFont* __this, double* __retval)
{
    *__retval = __this->LineHeight();
}

// public extern string fontName() [instance] :75171
uString* UIFont::fontName()
{
    uStackFrame __("iOS.UIKit.UIFont", "fontName()");
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSString *, @selector(fontName));
    return uObjC::UnoString(__return);
}

// public string get_FontName() [instance] :75096
uString* UIFont::FontName()
{
    uStackFrame __("iOS.UIKit.UIFont", "get_FontName()");
    return fontName();
}

// public extern double lineHeight() [instance] :75189
double UIFont::lineHeight()
{
    uStackFrame __("iOS.UIKit.UIFont", "lineHeight()");
    CGFloat __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, CGFloat, @selector(lineHeight));
    return (double)__return;
}

// public double get_LineHeight() [instance] :75126
double UIFont::LineHeight()
{
    uStackFrame __("iOS.UIKit.UIFont", "get_LineHeight()");
    return lineHeight();
}

// public static extern iOS.UIKit.UIFont _fontWithNameSize(string fontName, double fontSize) [static] :75138
UIFont* UIFont::_fontWithNameSize(uString* fontName_, double fontSize_)
{
    uStackFrame __("iOS.UIKit.UIFont", "_fontWithNameSize(string,double)");
    ::UIFont* __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::UIFont*, @selector(fontWithName:size:),
        uObjC::NativeString(fontName_),
        (CGFloat)fontSize_);
    return (UIFont*)uObjC::Lifetime::GetUnoObject(__return, UIFont_typeof());
}

// public static extern iOS.UIKit.UIFont _systemFontOfSize(double fontSize) [static] :75147
UIFont* UIFont::_systemFontOfSize(double fontSize_)
{
    uStackFrame __("iOS.UIKit.UIFont", "_systemFontOfSize(double)");
    ::UIFont* __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::UIFont*, @selector(systemFontOfSize:),
        (CGFloat)fontSize_);
    return (UIFont*)uObjC::Lifetime::GetUnoObject(__return, UIFont_typeof());
}
// }

}}} // ::g::iOS::UIKit
