// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.24.6/.uno/package'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{struct GLProgram;}}}}}}
namespace g{namespace Uno{struct BundleFile;}}
namespace g{struct FuseCore_bundle;}

namespace g{

// public static generated class FuseCore_bundle :0
// {
uClassType* FuseCore_bundle_typeof();

struct FuseCore_bundle : uObject
{
    static uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> DrawHelpersbba46184_;
    static uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>& DrawHelpersbba46184() { return FuseCore_bundle_typeof()->Init(), DrawHelpersbba46184_; }
    static uSStrong< ::g::Uno::BundleFile*> OpenSansLight957c354d_;
    static uSStrong< ::g::Uno::BundleFile*>& OpenSansLight957c354d() { return FuseCore_bundle_typeof()->Init(), OpenSansLight957c354d_; }
};
// }

} // ::g
