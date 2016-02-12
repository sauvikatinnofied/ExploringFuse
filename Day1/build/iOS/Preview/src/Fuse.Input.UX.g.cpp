// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusGainedArgs.h>
#include <Fuse.Input.FocusGainedHandler.h>
#include <Fuse.Input.FocusLostArgs.h>
#include <Fuse.Input.FocusLostHandler.h>
#include <Fuse.Input.Keyboard.h>
#include <Fuse.Input.KeyPressedArgs.h>
#include <Fuse.Input.KeyPressedHandler.h>
#include <Fuse.Input.KeyReleasedArgs.h>
#include <Fuse.Input.KeyReleasedHandler.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEnteredArgs.h>
#include <Fuse.Input.PointerEnteredHandler.h>
#include <Fuse.Input.PointerLeftArgs.h>
#include <Fuse.Input.PointerLeftHandler.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerMovedHandler.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerPressedHandler.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerReleasedHandler.h>
#include <Fuse.Input.PointerWheelMovedArgs.h>
#include <Fuse.Input.PointerWheelMovedHandler.h>
#include <Fuse.Input.UX.AttachedFocusMembers.h>
#include <Fuse.Input.UX.AttachedKeyboardMembers.h>
#include <Fuse.Input.UX.AttachedPointerMembers.h>
#include <Fuse.Node.h>
#include <Fuse.NodeEvent-2.h>
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Input{
namespace UX{

// ../../../../../../../usr/local/share/uno/Packages/FuseCore/0.24.6/Input/UX/$.uno(7)
// -----------------------------------------------------------------------------------

// public static class AttachedFocusMembers :7
// {
uClassType* AttachedFocusMembers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.UX.AttachedFocusMembers", options);
    ::TYPES[0] = ::g::Fuse::Input::Focus_typeof();
    type->Reflection.SetFunctions(4,
        new uFunction("AddFocusGainedHandler", NULL, (void*)AttachedFocusMembers__AddFocusGainedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Input::FocusGainedHandler_typeof()),
        new uFunction("AddFocusLostHandler", NULL, (void*)AttachedFocusMembers__AddFocusLostHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Input::FocusLostHandler_typeof()),
        new uFunction("RemoveFocusGainedHandler", NULL, (void*)AttachedFocusMembers__RemoveFocusGainedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Input::FocusGainedHandler_typeof()),
        new uFunction("RemoveFocusLostHandler", NULL, (void*)AttachedFocusMembers__RemoveFocusLostHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Input::FocusLostHandler_typeof()));
    return type;
}

// public static void AddFocusGainedHandler(Fuse.Node node, Fuse.Input.FocusGainedHandler handler) :10
void AttachedFocusMembers__AddFocusGainedHandler_fn(::g::Fuse::Node* node, uDelegate* handler)
{
    AttachedFocusMembers::AddFocusGainedHandler(node, handler);
}

// public static void AddFocusLostHandler(Fuse.Node node, Fuse.Input.FocusLostHandler handler) :22
void AttachedFocusMembers__AddFocusLostHandler_fn(::g::Fuse::Node* node, uDelegate* handler)
{
    AttachedFocusMembers::AddFocusLostHandler(node, handler);
}

// public static void RemoveFocusGainedHandler(Fuse.Node node, Fuse.Input.FocusGainedHandler handler) :16
void AttachedFocusMembers__RemoveFocusGainedHandler_fn(::g::Fuse::Node* node, uDelegate* handler)
{
    AttachedFocusMembers::RemoveFocusGainedHandler(node, handler);
}

// public static void RemoveFocusLostHandler(Fuse.Node node, Fuse.Input.FocusLostHandler handler) :28
void AttachedFocusMembers__RemoveFocusLostHandler_fn(::g::Fuse::Node* node, uDelegate* handler)
{
    AttachedFocusMembers::RemoveFocusLostHandler(node, handler);
}

// public static void AddFocusGainedHandler(Fuse.Node node, Fuse.Input.FocusGainedHandler handler) [static] :10
void AttachedFocusMembers::AddFocusGainedHandler(::g::Fuse::Node* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedFocusMembers", "AddFocusGainedHandler(Fuse.Node,Fuse.Input.FocusGainedHandler)");
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), node, handler);
}

// public static void AddFocusLostHandler(Fuse.Node node, Fuse.Input.FocusLostHandler handler) [static] :22
void AttachedFocusMembers::AddFocusLostHandler(::g::Fuse::Node* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedFocusMembers", "AddFocusLostHandler(Fuse.Node,Fuse.Input.FocusLostHandler)");
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), node, handler);
}

// public static void RemoveFocusGainedHandler(Fuse.Node node, Fuse.Input.FocusGainedHandler handler) [static] :16
void AttachedFocusMembers::RemoveFocusGainedHandler(::g::Fuse::Node* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedFocusMembers", "RemoveFocusGainedHandler(Fuse.Node,Fuse.Input.FocusGainedHandler)");
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), node, handler);
}

// public static void RemoveFocusLostHandler(Fuse.Node node, Fuse.Input.FocusLostHandler handler) [static] :28
void AttachedFocusMembers::RemoveFocusLostHandler(::g::Fuse::Node* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedFocusMembers", "RemoveFocusLostHandler(Fuse.Node,Fuse.Input.FocusLostHandler)");
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), node, handler);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/FuseCore/0.24.6/Input/UX/$.uno(41)
// ------------------------------------------------------------------------------------

// public static class AttachedKeyboardMembers :41
// {
uClassType* AttachedKeyboardMembers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.UX.AttachedKeyboardMembers", options);
    ::TYPES[1] = ::g::Fuse::Input::Keyboard_typeof();
    type->Reflection.SetFunctions(4,
        new uFunction("AddKeyPressedHandler", NULL, (void*)AttachedKeyboardMembers__AddKeyPressedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Input::KeyPressedHandler_typeof()),
        new uFunction("AddKeyReleasedHandler", NULL, (void*)AttachedKeyboardMembers__AddKeyReleasedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Input::KeyReleasedHandler_typeof()),
        new uFunction("RemoveKeyPressedHandler", NULL, (void*)AttachedKeyboardMembers__RemoveKeyPressedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Input::KeyPressedHandler_typeof()),
        new uFunction("RemoveKeyReleasedHandler", NULL, (void*)AttachedKeyboardMembers__RemoveKeyReleasedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Input::KeyReleasedHandler_typeof()));
    return type;
}

// public static void AddKeyPressedHandler(Fuse.Node node, Fuse.Input.KeyPressedHandler handler) :44
void AttachedKeyboardMembers__AddKeyPressedHandler_fn(::g::Fuse::Node* node, uDelegate* handler)
{
    AttachedKeyboardMembers::AddKeyPressedHandler(node, handler);
}

// public static void AddKeyReleasedHandler(Fuse.Node node, Fuse.Input.KeyReleasedHandler handler) :56
void AttachedKeyboardMembers__AddKeyReleasedHandler_fn(::g::Fuse::Node* node, uDelegate* handler)
{
    AttachedKeyboardMembers::AddKeyReleasedHandler(node, handler);
}

// public static void RemoveKeyPressedHandler(Fuse.Node node, Fuse.Input.KeyPressedHandler handler) :50
void AttachedKeyboardMembers__RemoveKeyPressedHandler_fn(::g::Fuse::Node* node, uDelegate* handler)
{
    AttachedKeyboardMembers::RemoveKeyPressedHandler(node, handler);
}

// public static void RemoveKeyReleasedHandler(Fuse.Node node, Fuse.Input.KeyReleasedHandler handler) :62
void AttachedKeyboardMembers__RemoveKeyReleasedHandler_fn(::g::Fuse::Node* node, uDelegate* handler)
{
    AttachedKeyboardMembers::RemoveKeyReleasedHandler(node, handler);
}

// public static void AddKeyPressedHandler(Fuse.Node node, Fuse.Input.KeyPressedHandler handler) [static] :44
void AttachedKeyboardMembers::AddKeyPressedHandler(::g::Fuse::Node* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedKeyboardMembers", "AddKeyPressedHandler(Fuse.Node,Fuse.Input.KeyPressedHandler)");
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Keyboard::KeyPressed()), node, handler);
}

// public static void AddKeyReleasedHandler(Fuse.Node node, Fuse.Input.KeyReleasedHandler handler) [static] :56
void AttachedKeyboardMembers::AddKeyReleasedHandler(::g::Fuse::Node* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedKeyboardMembers", "AddKeyReleasedHandler(Fuse.Node,Fuse.Input.KeyReleasedHandler)");
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Keyboard::KeyReleased()), node, handler);
}

// public static void RemoveKeyPressedHandler(Fuse.Node node, Fuse.Input.KeyPressedHandler handler) [static] :50
void AttachedKeyboardMembers::RemoveKeyPressedHandler(::g::Fuse::Node* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedKeyboardMembers", "RemoveKeyPressedHandler(Fuse.Node,Fuse.Input.KeyPressedHandler)");
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Keyboard::KeyPressed()), node, handler);
}

// public static void RemoveKeyReleasedHandler(Fuse.Node node, Fuse.Input.KeyReleasedHandler handler) [static] :62
void AttachedKeyboardMembers::RemoveKeyReleasedHandler(::g::Fuse::Node* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedKeyboardMembers", "RemoveKeyReleasedHandler(Fuse.Node,Fuse.Input.KeyReleasedHandler)");
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Keyboard::KeyReleased()), node, handler);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/FuseCore/0.24.6/Input/UX/$.uno(75)
// ------------------------------------------------------------------------------------

// public static class AttachedPointerMembers :75
// {
uClassType* AttachedPointerMembers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.UX.AttachedPointerMembers", options);
    ::TYPES[2] = ::g::Fuse::Input::Pointer_typeof();
    type->Reflection.SetFunctions(12,
        new uFunction("AddEnteredHandler", NULL, (void*)AttachedPointerMembers__AddEnteredHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Input::PointerEnteredHandler_typeof()),
        new uFunction("AddLeftHandler", NULL, (void*)AttachedPointerMembers__AddLeftHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Input::PointerLeftHandler_typeof()),
        new uFunction("AddMovedHandler", NULL, (void*)AttachedPointerMembers__AddMovedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Input::PointerMovedHandler_typeof()),
        new uFunction("AddPressedHandler", NULL, (void*)AttachedPointerMembers__AddPressedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Input::PointerPressedHandler_typeof()),
        new uFunction("AddReleasedHandler", NULL, (void*)AttachedPointerMembers__AddReleasedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Input::PointerReleasedHandler_typeof()),
        new uFunction("AddWheelMovedHandler", NULL, (void*)AttachedPointerMembers__AddWheelMovedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Input::PointerWheelMovedHandler_typeof()),
        new uFunction("RemoveEnteredHandler", NULL, (void*)AttachedPointerMembers__RemoveEnteredHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Input::PointerEnteredHandler_typeof()),
        new uFunction("RemoveLeftHandler", NULL, (void*)AttachedPointerMembers__RemoveLeftHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Input::PointerLeftHandler_typeof()),
        new uFunction("RemoveMovedHandler", NULL, (void*)AttachedPointerMembers__RemoveMovedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Input::PointerMovedHandler_typeof()),
        new uFunction("RemovePressedHandler", NULL, (void*)AttachedPointerMembers__RemovePressedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Input::PointerPressedHandler_typeof()),
        new uFunction("RemoveReleasedHandler", NULL, (void*)AttachedPointerMembers__RemoveReleasedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Input::PointerReleasedHandler_typeof()),
        new uFunction("RemoveWheelMovedHandler", NULL, (void*)AttachedPointerMembers__RemoveWheelMovedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Input::PointerWheelMovedHandler_typeof()));
    return type;
}

// public static void AddEnteredHandler(Fuse.Node node, Fuse.Input.PointerEnteredHandler handler) :114
void AttachedPointerMembers__AddEnteredHandler_fn(::g::Fuse::Node* node, uDelegate* handler)
{
    AttachedPointerMembers::AddEnteredHandler(node, handler);
}

// public static void AddLeftHandler(Fuse.Node node, Fuse.Input.PointerLeftHandler handler) :126
void AttachedPointerMembers__AddLeftHandler_fn(::g::Fuse::Node* node, uDelegate* handler)
{
    AttachedPointerMembers::AddLeftHandler(node, handler);
}

// public static void AddMovedHandler(Fuse.Node node, Fuse.Input.PointerMovedHandler handler) :90
void AttachedPointerMembers__AddMovedHandler_fn(::g::Fuse::Node* node, uDelegate* handler)
{
    AttachedPointerMembers::AddMovedHandler(node, handler);
}

// public static void AddPressedHandler(Fuse.Node node, Fuse.Input.PointerPressedHandler handler) :78
void AttachedPointerMembers__AddPressedHandler_fn(::g::Fuse::Node* node, uDelegate* handler)
{
    AttachedPointerMembers::AddPressedHandler(node, handler);
}

// public static void AddReleasedHandler(Fuse.Node node, Fuse.Input.PointerReleasedHandler handler) :102
void AttachedPointerMembers__AddReleasedHandler_fn(::g::Fuse::Node* node, uDelegate* handler)
{
    AttachedPointerMembers::AddReleasedHandler(node, handler);
}

// public static void AddWheelMovedHandler(Fuse.Node node, Fuse.Input.PointerWheelMovedHandler handler) :138
void AttachedPointerMembers__AddWheelMovedHandler_fn(::g::Fuse::Node* node, uDelegate* handler)
{
    AttachedPointerMembers::AddWheelMovedHandler(node, handler);
}

// public static void RemoveEnteredHandler(Fuse.Node node, Fuse.Input.PointerEnteredHandler handler) :120
void AttachedPointerMembers__RemoveEnteredHandler_fn(::g::Fuse::Node* node, uDelegate* handler)
{
    AttachedPointerMembers::RemoveEnteredHandler(node, handler);
}

// public static void RemoveLeftHandler(Fuse.Node node, Fuse.Input.PointerLeftHandler handler) :132
void AttachedPointerMembers__RemoveLeftHandler_fn(::g::Fuse::Node* node, uDelegate* handler)
{
    AttachedPointerMembers::RemoveLeftHandler(node, handler);
}

// public static void RemoveMovedHandler(Fuse.Node node, Fuse.Input.PointerMovedHandler handler) :96
void AttachedPointerMembers__RemoveMovedHandler_fn(::g::Fuse::Node* node, uDelegate* handler)
{
    AttachedPointerMembers::RemoveMovedHandler(node, handler);
}

// public static void RemovePressedHandler(Fuse.Node node, Fuse.Input.PointerPressedHandler handler) :84
void AttachedPointerMembers__RemovePressedHandler_fn(::g::Fuse::Node* node, uDelegate* handler)
{
    AttachedPointerMembers::RemovePressedHandler(node, handler);
}

// public static void RemoveReleasedHandler(Fuse.Node node, Fuse.Input.PointerReleasedHandler handler) :108
void AttachedPointerMembers__RemoveReleasedHandler_fn(::g::Fuse::Node* node, uDelegate* handler)
{
    AttachedPointerMembers::RemoveReleasedHandler(node, handler);
}

// public static void RemoveWheelMovedHandler(Fuse.Node node, Fuse.Input.PointerWheelMovedHandler handler) :144
void AttachedPointerMembers__RemoveWheelMovedHandler_fn(::g::Fuse::Node* node, uDelegate* handler)
{
    AttachedPointerMembers::RemoveWheelMovedHandler(node, handler);
}

// public static void AddEnteredHandler(Fuse.Node node, Fuse.Input.PointerEnteredHandler handler) [static] :114
void AttachedPointerMembers::AddEnteredHandler(::g::Fuse::Node* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedPointerMembers", "AddEnteredHandler(Fuse.Node,Fuse.Input.PointerEnteredHandler)");
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Entered()), node, handler);
}

// public static void AddLeftHandler(Fuse.Node node, Fuse.Input.PointerLeftHandler handler) [static] :126
void AttachedPointerMembers::AddLeftHandler(::g::Fuse::Node* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedPointerMembers", "AddLeftHandler(Fuse.Node,Fuse.Input.PointerLeftHandler)");
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Left()), node, handler);
}

// public static void AddMovedHandler(Fuse.Node node, Fuse.Input.PointerMovedHandler handler) [static] :90
void AttachedPointerMembers::AddMovedHandler(::g::Fuse::Node* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedPointerMembers", "AddMovedHandler(Fuse.Node,Fuse.Input.PointerMovedHandler)");
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), node, handler);
}

// public static void AddPressedHandler(Fuse.Node node, Fuse.Input.PointerPressedHandler handler) [static] :78
void AttachedPointerMembers::AddPressedHandler(::g::Fuse::Node* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedPointerMembers", "AddPressedHandler(Fuse.Node,Fuse.Input.PointerPressedHandler)");
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), node, handler);
}

// public static void AddReleasedHandler(Fuse.Node node, Fuse.Input.PointerReleasedHandler handler) [static] :102
void AttachedPointerMembers::AddReleasedHandler(::g::Fuse::Node* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedPointerMembers", "AddReleasedHandler(Fuse.Node,Fuse.Input.PointerReleasedHandler)");
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), node, handler);
}

// public static void AddWheelMovedHandler(Fuse.Node node, Fuse.Input.PointerWheelMovedHandler handler) [static] :138
void AttachedPointerMembers::AddWheelMovedHandler(::g::Fuse::Node* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedPointerMembers", "AddWheelMovedHandler(Fuse.Node,Fuse.Input.PointerWheelMovedHandler)");
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::WheelMoved()), node, handler);
}

// public static void RemoveEnteredHandler(Fuse.Node node, Fuse.Input.PointerEnteredHandler handler) [static] :120
void AttachedPointerMembers::RemoveEnteredHandler(::g::Fuse::Node* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedPointerMembers", "RemoveEnteredHandler(Fuse.Node,Fuse.Input.PointerEnteredHandler)");
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Entered()), node, handler);
}

// public static void RemoveLeftHandler(Fuse.Node node, Fuse.Input.PointerLeftHandler handler) [static] :132
void AttachedPointerMembers::RemoveLeftHandler(::g::Fuse::Node* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedPointerMembers", "RemoveLeftHandler(Fuse.Node,Fuse.Input.PointerLeftHandler)");
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Left()), node, handler);
}

// public static void RemoveMovedHandler(Fuse.Node node, Fuse.Input.PointerMovedHandler handler) [static] :96
void AttachedPointerMembers::RemoveMovedHandler(::g::Fuse::Node* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedPointerMembers", "RemoveMovedHandler(Fuse.Node,Fuse.Input.PointerMovedHandler)");
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), node, handler);
}

// public static void RemovePressedHandler(Fuse.Node node, Fuse.Input.PointerPressedHandler handler) [static] :84
void AttachedPointerMembers::RemovePressedHandler(::g::Fuse::Node* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedPointerMembers", "RemovePressedHandler(Fuse.Node,Fuse.Input.PointerPressedHandler)");
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), node, handler);
}

// public static void RemoveReleasedHandler(Fuse.Node node, Fuse.Input.PointerReleasedHandler handler) [static] :108
void AttachedPointerMembers::RemoveReleasedHandler(::g::Fuse::Node* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedPointerMembers", "RemoveReleasedHandler(Fuse.Node,Fuse.Input.PointerReleasedHandler)");
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), node, handler);
}

// public static void RemoveWheelMovedHandler(Fuse.Node node, Fuse.Input.PointerWheelMovedHandler handler) [static] :144
void AttachedPointerMembers::RemoveWheelMovedHandler(::g::Fuse::Node* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedPointerMembers", "RemoveWheelMovedHandler(Fuse.Node,Fuse.Input.PointerWheelMovedHandler)");
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::WheelMoved()), node, handler);
}
// }

}}}} // ::g::Fuse::Input::UX
