// Generated automatically. Do not edit!
#ifndef _IntPointStack_
#define _IntPointStack_
#include "StackEx2.hpp"

class IntPointStack : public StackEx2  {
public:

    // Wrappers
    IntPointStack() {
        ptr::CSTR_IntPointStack(this);
    }

    inline IntPointStack * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static IntPointStack * (*_New)();
        static void (*_mark)();
        static void (*CSTR_IntPointStack)(IntPointStack * self);
    };
};

#ifdef _WIN32

IntPointStack * (*IntPointStack::ptr::_New)() = (IntPointStack * (*)()) 0x0;
void (*IntPointStack::ptr::_mark)() = (void (*)()) 0x0;
void (*IntPointStack::ptr::CSTR_IntPointStack)(IntPointStack * self) = (void (*)(IntPointStack * self)) 0x631830;
#endif

#ifdef __linux__

IntPointStack * (*IntPointStack::ptr::_New)() = (IntPointStack * (*)()) 0x81bb150;
void (*IntPointStack::ptr::_mark)() = (void (*)()) 0x808ba70;
void (*IntPointStack::ptr::CSTR_IntPointStack)(IntPointStack * self) = (void (*)(IntPointStack * self)) 0x81bb130;
#endif
#endif
