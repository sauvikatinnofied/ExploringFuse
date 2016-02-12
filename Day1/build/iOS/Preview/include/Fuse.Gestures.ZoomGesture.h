// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Gestures/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Gestures.TransformGesture.h>
namespace g{namespace Fuse{namespace Elements{struct InteractiveTransform;}}}
namespace g{namespace Fuse{namespace Gestures{struct ZoomGesture;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class ZoomGesture :1550
// {
::g::Fuse::Gestures::TransformGesture_type* ZoomGesture_typeof();
void ZoomGesture__ctor_2_fn(ZoomGesture* __this, ::g::Fuse::Elements::InteractiveTransform* target);
void ZoomGesture__get_Maximum_fn(ZoomGesture* __this, float* __retval);
void ZoomGesture__set_Maximum_fn(ZoomGesture* __this, float* value);
void ZoomGesture__get_Minimum_fn(ZoomGesture* __this, float* __retval);
void ZoomGesture__set_Minimum_fn(ZoomGesture* __this, float* value);
void ZoomGesture__New1_fn(::g::Fuse::Elements::InteractiveTransform* target, ZoomGesture** __retval);
void ZoomGesture__OnEnded_fn(ZoomGesture* __this);
void ZoomGesture__OnRooted_fn(ZoomGesture* __this, ::g::Fuse::Node* n);
void ZoomGesture__OnStarted_fn(ZoomGesture* __this);
void ZoomGesture__OnUnrooted_fn(ZoomGesture* __this, ::g::Fuse::Node* n);
void ZoomGesture__OnUpdate_fn(ZoomGesture* __this);
void ZoomGesture__OnZoomed_fn(ZoomGesture* __this, float* factor);

struct ZoomGesture : ::g::Fuse::Gestures::TransformGesture
{
    float _maximum;
    float _minimum;
    float _prevZoom;
    float _startZoom;

    void ctor_2(::g::Fuse::Elements::InteractiveTransform* target);
    float Maximum();
    void Maximum(float value);
    float Minimum();
    void Minimum(float value);
    void OnZoomed(float factor);
    static ZoomGesture* New1(::g::Fuse::Elements::InteractiveTransform* target);
};
// }

}}} // ::g::Fuse::Gestures
