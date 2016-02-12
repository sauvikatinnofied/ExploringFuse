// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract class Context :10
// {
struct Context_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_Dispose)(::g::Fuse::Scripting::Context*);
    void(*fp_Evaluate1)(::g::Fuse::Scripting::Context*, uString*, uString*, uObject**);
    void(*fp_get_GlobalObject)(::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::Object**);
};

Context_type* Context_typeof();
void Context__ctor__fn(Context* __this, uObject* ownerThread);
void Context__Acceptor_fn(Context* __this, uObject* obj, bool* __retval);
void Context__Escape_fn(Context* __this, uString* str, uString** __retval);
void Context__Evaluate_fn(Context* __this, uObject* src, uString* id, uObject** __retval);
void Context__NewObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval);
void Context__ObjectCreate_fn(Context* __this, uArray* args, ::g::Fuse::Scripting::Object** __retval);
void Context__ObjectDefineProperty_fn(Context* __this, ::g::Fuse::Scripting::Object* obj, uString* name, uDelegate* getProperty, uDelegate* setProperty, bool* enumerable, bool* configurable);
void Context__ObjectDefineProperty1_fn(Context* __this, ::g::Fuse::Scripting::Object* obj, uString* name, uObject* value, bool* enumerable, bool* configurable);
void Context__Require_fn(Context* __this, uArray* args, uObject** __retval);
void Context__Require1_fn(Context* __this, uString* id, uObject** __retval);
void Context__ResetModule_fn(Context* __this, uString* id, bool* __retval);

struct Context : uObject
{
    uStrong< ::g::Uno::Collections::Dictionary*> _moduleResults;
    uStrong<uObject*> Dispatcher;

    void ctor_(uObject* ownerThread);
    bool Acceptor(uObject* obj);
    void Dispose() { (((Context_type*)__type)->fp_Dispose)(this); }
    uString* Escape(uString* str);
    uObject* Evaluate(uObject* src, uString* id);
    uObject* Evaluate1(uString* fileName, uString* code) { uObject* __retval; return (((Context_type*)__type)->fp_Evaluate1)(this, fileName, code, &__retval), __retval; }
    ::g::Fuse::Scripting::Object* GlobalObject() { ::g::Fuse::Scripting::Object* __retval; return (((Context_type*)__type)->fp_get_GlobalObject)(this, &__retval), __retval; }
    ::g::Fuse::Scripting::Object* NewObject();
    ::g::Fuse::Scripting::Object* ObjectCreate(uArray* args);
    void ObjectDefineProperty(::g::Fuse::Scripting::Object* obj, uString* name, uDelegate* getProperty, uDelegate* setProperty, bool enumerable, bool configurable);
    void ObjectDefineProperty1(::g::Fuse::Scripting::Object* obj, uString* name, uObject* value, bool enumerable, bool configurable);
    uObject* Require(uArray* args);
    uObject* Require1(uString* id);
    bool ResetModule(uString* id);
};
// }

}}} // ::g::Fuse::Scripting
