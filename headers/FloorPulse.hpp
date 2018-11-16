// Generated automatically. Do not edit!
#ifndef _FloorPulse_
#define _FloorPulse_
class Sprite;
class String;
#include "Entity.hpp"

class FloorPulse : public Entity  {
public:
    Sprite * pulseDownWarning;
    Sprite * pulseWarning;
    int pulseHideFrame;
    int frameCounter;
    Sprite * pulse;
    Sprite * pulseDown;
    Sprite * pulseMoveWarning;

    // Wrappers
    FloorPulse(int x_, int y_) {
        ptr::CSTR_FloorPulse(this);
        ptr::New(this, x_, y_);
    }

    inline virtual void ShowWarning(bool large, bool down) { ptr::ShowWarning(this, large, down); }
    inline FloorPulse * New(int x_, int y_) { return ptr::New(this, x_, y_); }
    inline FloorPulse * _new2() { return ptr::_new2(); }
    inline virtual void Hide() { ptr::Hide(this); }
    inline virtual void ShowMoveWarning() { ptr::ShowMoveWarning(this); }
    inline virtual void ShowPulse(bool down) { ptr::ShowPulse(this, down); }
    inline void Render() { ptr::Render(this); }
    inline bool _Hit(String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) { return ptr::_Hit(this, arg1, arg2, arg3, arg4, arg5, arg6); }
    inline bool _CanBeDamaged(bool arg1, bool arg2) { return ptr::_CanBeDamaged(this, arg1, arg2); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static void (*ShowWarning)(FloorPulse * self, bool large, bool down);
        static FloorPulse * (*New)(FloorPulse * self, int x_, int y_);
        static FloorPulse * (*_new2)();
        static void (*Hide)(FloorPulse * self);
        static void (*ShowMoveWarning)(FloorPulse * self);
        static void (*ShowPulse)(FloorPulse * self, bool down);
        static void (*Render)(FloorPulse * self);
        static bool (*_Hit)(FloorPulse * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6);
        static bool (*_CanBeDamaged)(FloorPulse * self, bool arg1, bool arg2);
        static void (*mark)(FloorPulse * self);
        static void (*CSTR_FloorPulse)(FloorPulse * self);
    };
};

#ifdef _WIN32

inline void (*FloorPulse::ptr::ShowWarning)(FloorPulse * self, bool large, bool down) = (void (*)(FloorPulse * self, bool large, bool down)) 0x68d3f0;
inline FloorPulse * (*FloorPulse::ptr::New)(FloorPulse * self, int x_, int y_) = (FloorPulse * (*)(FloorPulse * self, int x_, int y_)) 0x68d460;
inline FloorPulse * (*FloorPulse::ptr::_new2)() = (FloorPulse * (*)()) 0x0;
inline void (*FloorPulse::ptr::Hide)(FloorPulse * self) = (void (*)(FloorPulse * self)) 0x68dac0;
inline void (*FloorPulse::ptr::ShowMoveWarning)(FloorPulse * self) = (void (*)(FloorPulse * self)) 0x68dae0;
inline void (*FloorPulse::ptr::ShowPulse)(FloorPulse * self, bool down) = (void (*)(FloorPulse * self, bool down)) 0x68db50;
inline void (*FloorPulse::ptr::Render)(FloorPulse * self) = (void (*)(FloorPulse * self)) 0x68dbd0;
inline bool (*FloorPulse::ptr::_Hit)(FloorPulse * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(FloorPulse * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x0;
inline bool (*FloorPulse::ptr::_CanBeDamaged)(FloorPulse * self, bool arg1, bool arg2) = (bool (*)(FloorPulse * self, bool arg1, bool arg2)) 0x0;
inline void (*FloorPulse::ptr::mark)(FloorPulse * self) = (void (*)(FloorPulse * self)) 0x68dc40;
inline void (*FloorPulse::ptr::CSTR_FloorPulse)(FloorPulse * self) = (void (*)(FloorPulse * self)) 0x68d350;
#endif

#ifdef __linux__

inline void (*FloorPulse::ptr::ShowWarning)(FloorPulse * self, bool large, bool down) = (void (*)(FloorPulse * self, bool large, bool down)) 0x80b3530;
inline FloorPulse * (*FloorPulse::ptr::New)(FloorPulse * self, int x_, int y_) = (FloorPulse * (*)(FloorPulse * self, int x_, int y_)) 0x81e45d0;
inline FloorPulse * (*FloorPulse::ptr::_new2)() = (FloorPulse * (*)()) 0x81e4ce0;
inline void (*FloorPulse::ptr::Hide)(FloorPulse * self) = (void (*)(FloorPulse * self)) 0x8079180;
inline void (*FloorPulse::ptr::ShowMoveWarning)(FloorPulse * self) = (void (*)(FloorPulse * self)) 0x80b34c0;
inline void (*FloorPulse::ptr::ShowPulse)(FloorPulse * self, bool down) = (void (*)(FloorPulse * self, bool down)) 0x80b3610;
inline void (*FloorPulse::ptr::Render)(FloorPulse * self) = (void (*)(FloorPulse * self)) 0x8266ec0;
inline bool (*FloorPulse::ptr::_Hit)(FloorPulse * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(FloorPulse * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x80791a0;
inline bool (*FloorPulse::ptr::_CanBeDamaged)(FloorPulse * self, bool arg1, bool arg2) = (bool (*)(FloorPulse * self, bool arg1, bool arg2)) 0x80791b0;
inline void (*FloorPulse::ptr::mark)(FloorPulse * self) = (void (*)(FloorPulse * self)) 0x80a62b0;
inline void (*FloorPulse::ptr::CSTR_FloorPulse)(FloorPulse * self) = (void (*)(FloorPulse * self)) 0x81e4560;
#endif
#endif
