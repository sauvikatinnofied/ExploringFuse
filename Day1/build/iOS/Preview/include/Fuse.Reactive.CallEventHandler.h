// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IEventSerializer.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct CallEventHandler;}}}
namespace g{namespace Fuse{namespace Reactive{struct ScriptEventArgs;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class CallEventHandler :122
// {
struct CallEventHandler_type : uType
{
    ::g::Fuse::Scripting::IEventSerializer interface0;
};

CallEventHandler_type* CallEventHandler_typeof();
void CallEventHandler__ctor__fn(CallEventHandler* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Function* function, ::g::Fuse::Reactive::ScriptEventArgs* args);
void CallEventHandler__ctor_1_fn(CallEventHandler* __this, ::g::Fuse::Reactive::ThreadWorker* worker, uString* function, ::g::Fuse::Reactive::ScriptEventArgs* args);
void CallEventHandler__AddBool_fn(CallEventHandler* __this, uString* key, bool* value);
void CallEventHandler__AddDouble_fn(CallEventHandler* __this, uString* key, double* value);
void CallEventHandler__AddInt_fn(CallEventHandler* __this, uString* key, int* value);
void CallEventHandler__AddObject_fn(CallEventHandler* __this, uString* key, uObject* value);
void CallEventHandler__AddString_fn(CallEventHandler* __this, uString* key, uString* value);
void CallEventHandler__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Function* function, ::g::Fuse::Reactive::ScriptEventArgs* args, CallEventHandler** __retval);
void CallEventHandler__New2_fn(::g::Fuse::Reactive::ThreadWorker* worker, uString* function, ::g::Fuse::Reactive::ScriptEventArgs* args, CallEventHandler** __retval);
void CallEventHandler__Run_fn(CallEventHandler* __this);

struct CallEventHandler : uObject
{
    uStrong< ::g::Fuse::Reactive::ScriptEventArgs*> _args;
    uStrong< ::g::Fuse::Scripting::Function*> _func;
    uStrong<uString*> _function;
    uStrong< ::g::Fuse::Scripting::Object*> _obj;
    uStrong< ::g::Fuse::Reactive::ThreadWorker*> _worker;

    void ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Function* function, ::g::Fuse::Reactive::ScriptEventArgs* args);
    void ctor_1(::g::Fuse::Reactive::ThreadWorker* worker, uString* function, ::g::Fuse::Reactive::ScriptEventArgs* args);
    void AddBool(uString* key, bool value);
    void AddDouble(uString* key, double value);
    void AddInt(uString* key, int value);
    void AddObject(uString* key, uObject* value);
    void AddString(uString* key, uString* value);
    void Run();
    static CallEventHandler* New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Function* function, ::g::Fuse::Reactive::ScriptEventArgs* args);
    static CallEventHandler* New2(::g::Fuse::Reactive::ThreadWorker* worker, uString* function, ::g::Fuse::Reactive::ScriptEventArgs* args);
};
// }

}}} // ::g::Fuse::Reactive
