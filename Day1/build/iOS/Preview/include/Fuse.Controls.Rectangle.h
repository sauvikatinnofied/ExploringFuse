// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{struct StyleProperty1;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Rectangle :3065
// {
::g::Fuse::Controls::ParentControl_type* Rectangle_typeof();
void Rectangle__ctor_5_fn(Rectangle* __this);
void Rectangle__get_CornerRadius_fn(Rectangle* __this, ::g::Uno::Float4* __retval);
void Rectangle__set_CornerRadius_fn(Rectangle* __this, ::g::Uno::Float4* value);
void Rectangle__New2_fn(Rectangle** __retval);
void Rectangle__OnCornerRadiusChanged_fn(Rectangle* r);

struct Rectangle : ::g::Fuse::Controls::Shape
{
    static uSStrong< ::g::Fuse::StyleProperty1*> CornerRadiusProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& CornerRadiusProperty() { return Rectangle_typeof()->Init(), CornerRadiusProperty_; }

    void ctor_5();
    ::g::Uno::Float4 CornerRadius();
    void CornerRadius(::g::Uno::Float4 value);
    static Rectangle* New2();
    static void OnCornerRadiusChanged(Rectangle* r);
};
// }

}}} // ::g::Fuse::Controls
