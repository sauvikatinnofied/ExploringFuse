// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Android/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Graphics.TextVisual.h>
#include <Fuse.IDataContext.h>
#include <Fuse.Scripting.INameScope.h>
namespace g{namespace Fuse{namespace Android{struct TextRenderer;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Android{

// public sealed extern class TextRenderer :914
// {
::g::Fuse::Controls::Graphics::ControlVisual_type* TextRenderer_typeof();
void TextRenderer__ctor_4_fn(TextRenderer* __this);
void TextRenderer__GetMarginSize_fn(TextRenderer* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void TextRenderer__New1_fn(TextRenderer** __retval);
void TextRenderer__OnDraw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc);

struct TextRenderer : ::g::Fuse::Controls::Graphics::TextVisual
{
    void ctor_4();
    static TextRenderer* New1();
};
// }

}}} // ::g::Fuse::Android
