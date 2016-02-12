// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Runtime/Implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{struct ArraySortImpl;}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{

// internal static class ArraySortImpl :62
// {
uClassType* ArraySortImpl_typeof();
void ArraySortImpl__QuickSortInternal_fn(uType* __type, uArray* data, uDelegate* comparison, int* left, int* right);
void ArraySortImpl__ShellSortInternal_fn(uType* __type, uArray* data, uDelegate* comparison, int* left, int* right);
void ArraySortImpl__Sort_fn(uType* __type, uArray* elements, int* index, int* length, uDelegate* comparison);
void ArraySortImpl__SwapInternal_fn(uType* __type, uArray* data, int* a, int* b);
void ArraySortImpl__ValidateArguments_fn(uType* __type, uArray* elements, int* index, int* length, uDelegate* comparison);

struct ArraySortImpl : uObject
{
    static void QuickSortInternal(uType* __type, uArray* data, uDelegate* comparison, int left, int right);
    static void ShellSortInternal(uType* __type, uArray* data, uDelegate* comparison, int left, int right);
    static void Sort(uType* __type, uArray* elements, int index, int length, uDelegate* comparison);
    static void SwapInternal(uType* __type, uArray* data, int a, int b);
    static void ValidateArguments(uType* __type, uArray* elements, int index, int length, uDelegate* comparison);
};
// }

}}}} // ::g::Uno::Runtime::Implementation
