// Generated automatically. Do not edit!
#ifndef _IntPointSet_
#define _IntPointSet_
#include "Set3.hpp"

class IntPointSet : public Set3  {
public:

    // Wrappers
    IntPointSet() {
        ptr::CSTR_IntPointSet(this);
        ptr::New(this);
    }

    inline IntPointSet * New() { return ptr::New(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static IntPointSet * (*New)(IntPointSet * self);
        static void (*_mark)();
        static void (*CSTR_IntPointSet)(IntPointSet * self);
    };
};

#ifdef _WIN32

inline IntPointSet * (*IntPointSet::ptr::New)(IntPointSet * self) = (IntPointSet * (*)(IntPointSet * self)) 0x632d50;
inline void (*IntPointSet::ptr::_mark)() = (void (*)()) 0x0;
inline void (*IntPointSet::ptr::CSTR_IntPointSet)(IntPointSet * self) = (void (*)(IntPointSet * self)) 0x632cd0;
#endif

#ifdef __linux__

inline IntPointSet * (*IntPointSet::ptr::New)(IntPointSet * self) = (IntPointSet * (*)(IntPointSet * self)) 0x81bc580;
inline void (*IntPointSet::ptr::_mark)() = (void (*)()) 0x8086c90;
inline void (*IntPointSet::ptr::CSTR_IntPointSet)(IntPointSet * self) = (void (*)(IntPointSet * self)) 0x81bc560;
#endif
#endif
