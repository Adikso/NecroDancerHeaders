// Generated automatically. Do not edit!
#ifndef _StackEx8_
#define _StackEx8_
#include "Stack13.hpp"

class StackEx8 : public Stack13  {
public:

    // Wrappers
    StackEx8() {
        ptr::CSTR_StackEx8(this);
    }

    inline StackEx8 * _New() { return ptr::_New(); }
    inline virtual void Shuffle(bool useSeed) { ptr::Shuffle(this, useSeed); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static StackEx8 * (*_New)();
        static void (*Shuffle)(StackEx8 * self, bool useSeed);
        static void (*_mark)();
        static void (*CSTR_StackEx8)(StackEx8 * self);
    };
};

#ifdef _WIN32

inline StackEx8 * (*StackEx8::ptr::_New)() = (StackEx8 * (*)()) 0x0;
inline void (*StackEx8::ptr::Shuffle)(StackEx8 * self, bool useSeed) = (void (*)(StackEx8 * self, bool useSeed)) 0x660f30;
inline void (*StackEx8::ptr::_mark)() = (void (*)()) 0x0;
inline void (*StackEx8::ptr::CSTR_StackEx8)(StackEx8 * self) = (void (*)(StackEx8 * self)) 0x68b560;
#endif

#ifdef __linux__

inline StackEx8 * (*StackEx8::ptr::_New)() = (StackEx8 * (*)()) 0x81e2ac0;
inline void (*StackEx8::ptr::Shuffle)(StackEx8 * self, bool useSeed) = (void (*)(StackEx8 * self, bool useSeed)) 0x8100340;
inline void (*StackEx8::ptr::_mark)() = (void (*)()) 0x80877e0;
inline void (*StackEx8::ptr::CSTR_StackEx8)(StackEx8 * self) = (void (*)(StackEx8 * self)) 0x81e29b0;
#endif
#endif
