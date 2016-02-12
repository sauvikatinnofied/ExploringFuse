// This file was generated based on '/Users/SauvikDolui/Documents/sauvik.dolui/FuseDevelopment/Tutorials/Day1/build/iOS/Preview/cache/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <Fuse.AppBase.h>
#include <Fuse.BasicTheme.BasicTheme.h>
#include <Fuse.Theme.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
static uType* TYPES[2];

namespace g{

// public partial sealed class MainView :1
// {
// static MainView() :3
static void MainView__cctor__fn(uType* __type)
{
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 19;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->SetBase(::g::Fuse::App_typeof());
    type->fp_ctor_ = (void*)MainView__New2_fn;
    type->fp_cctor_ = MainView__cctor__fn;
    ::TYPES[0] = ::g::Fuse::AppBase_typeof();
    ::TYPES[1] = ::g::Fuse::BasicTheme::BasicTheme_typeof();
    type->SetFields(19);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__New2_fn, 0, true, MainView_typeof(), 0));
    return type;
}

// public MainView() :6
void MainView__ctor_3_fn(MainView* __this)
{
    __this->ctor_3();
}

// private void InitializeUX() :10
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :6
void MainView__New2_fn(MainView** __retval)
{
    *__retval = MainView::New2();
}

// public MainView() [instance] :6
void MainView::ctor_3()
{
    uStackFrame __("MainView", ".ctor()");
    ctor_2();
    InitializeUX();
}

// private void InitializeUX() [instance] :10
void MainView::InitializeUX()
{
    uStackFrame __("MainView", "InitializeUX()");
    Background(::g::Uno::Float4__New2(0.9333333f, 0.9333333f, 0.9333333f, 1.0f));
    Theme(::g::Fuse::BasicTheme::BasicTheme::Singleton1());
}

// public MainView New() [static] :6
MainView* MainView::New2()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

} // ::g
