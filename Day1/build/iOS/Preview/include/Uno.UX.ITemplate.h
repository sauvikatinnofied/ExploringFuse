// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace UX{

// public abstract interface ITemplate :219
// {
uInterfaceType* ITemplate_typeof();

struct ITemplate
{
    void(*fp_Apply)(uObject*, uObject*, bool*);
    static bool Apply(const uInterface& __this, uObject* obj) { bool __retval; return __this.VTable<ITemplate>()->fp_Apply(__this, obj, &__retval), __retval; }
};
// }

}}} // ::g::Uno::UX
