// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.24.6/FuseJS/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Phone;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// public sealed class Phone :315
// {
uType* Phone_typeof();
void Phone__ctor__fn(Phone* __this);
void Phone__Call_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Phone__CreateModule_fn(uObject** __retval);
void Phone__New1_fn(Phone** __retval);

struct Phone : uObject
{
    void ctor_();
    static uObject* Call(::g::Fuse::Scripting::Context* context, uArray* args);
    static uObject* CreateModule();
    static Phone* New1();
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
