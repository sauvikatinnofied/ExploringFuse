// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{namespace Duktape{struct JSONObject;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace Duktape{

// public static extern class JSONObject :1142
// {
uClassType* JSONObject_typeof();
void JSONObject__Stringify_fn(uObject* value, uString** __retval);

struct JSONObject : uObject
{
    static uString* Stringify(uObject* value);
};
// }

}}}} // ::g::Fuse::Scripting::Duktape
