// Generated automatically. Do not edit!
#ifndef _StackEx6_
#define _StackEx6_
#include "Stack10.hpp"

class StackEx6 : public Stack10  {
public:

    // Wrappers
    StackEx6() {
        ptr::CSTR_StackEx6(this);
    }

    inline StackEx6 * _New() { return ptr::_New(); }
    inline virtual void Shuffle(bool arg1) { ptr::_Shuffle(this, arg1); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static StackEx6 * (*_New)();
        static void (*_Shuffle)(StackEx6 * self, bool arg1);
        static void (*_mark)();
        static void (*CSTR_StackEx6)(StackEx6 * self);
    };
};

#ifdef _WIN32

inline StackEx6 * (*StackEx6::ptr::_New)() = (StackEx6 * (*)()) 0x0;
inline void (*StackEx6::ptr::_Shuffle)(StackEx6 * self, bool arg1) = (void (*)(StackEx6 * self, bool arg1)) 0x0;
inline void (*StackEx6::ptr::_mark)() = (void (*)()) 0x0;
inline void (*StackEx6::ptr::CSTR_StackEx6)(StackEx6 * self) = (void (*)(StackEx6 * self)) 0x660eb0;
#endif

#ifdef __linux__

inline StackEx6 * (*StackEx6::ptr::_New)() = (StackEx6 * (*)()) 0x81d6920;
inline void (*StackEx6::ptr::_Shuffle)(StackEx6 * self, bool arg1) = (void (*)(StackEx6 * self, bool arg1)) 0x8100450;
inline void (*StackEx6::ptr::_mark)() = (void (*)()) 0x8087720;
inline void (*StackEx6::ptr::CSTR_StackEx6)(StackEx6 * self) = (void (*)(StackEx6 * self)) 0x81d6810;
#endif
#endif
