// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Binding.h>
namespace g{namespace Fuse{namespace Reactive{struct AsyncFunction;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class EventBinding :1105
// {
::g::Fuse::Reactive::Binding_type* EventBinding_typeof();
void EventBinding__ctor_2_fn(EventBinding* __this, uString* key);
void EventBinding__New1_fn(uString* key, EventBinding** __retval);
void EventBinding__NewValue_fn(EventBinding* __this, uObject* obj);
void EventBinding__OnEvent_fn(EventBinding* __this, uObject* sender, ::g::Uno::EventArgs* args);

struct EventBinding : ::g::Fuse::Reactive::Binding
{
    uStrong< ::g::Fuse::Reactive::AsyncFunction*> _func;

    void ctor_2(uString* key);
    void OnEvent(uObject* sender, ::g::Uno::EventArgs* args);
    static EventBinding* New1(uString* key);
};
// }

}}} // ::g::Fuse::Reactive
