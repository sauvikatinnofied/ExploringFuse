// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Gestures/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.CustomPointerEventArgs.h>
#include <Fuse.Scripting.IScriptEvent.h>
namespace g{namespace Fuse{namespace Gestures{struct DoubleTappedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class DoubleTappedArgs :1031
// {
::g::Fuse::NodeEventArgs_type* DoubleTappedArgs_typeof();
void DoubleTappedArgs__ctor_4_fn(DoubleTappedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node);
void DoubleTappedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node, DoubleTappedArgs** __retval);

struct DoubleTappedArgs : ::g::Fuse::Input::CustomPointerEventArgs
{
    void ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node);
    static DoubleTappedArgs* New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node);
};
// }

}}} // ::g::Fuse::Gestures
