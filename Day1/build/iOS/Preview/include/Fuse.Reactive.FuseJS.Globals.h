// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.24.6/FuseJS/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Globals;}}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// internal static class Globals :80
// {
uClassType* Globals_typeof();
void Globals__CreateModule_fn(uObject** __retval);
void Globals__FileSourceAcceptor_fn(uObject* obj, bool* __retval);
void Globals__readAsText_fn(uArray* args, uString** __retval);

struct Globals : uObject
{
    static uObject* CreateModule();
    static bool FileSourceAcceptor(uObject* obj);
    static uString* readAsText(uArray* args);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
