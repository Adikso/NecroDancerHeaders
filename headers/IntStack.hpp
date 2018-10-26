// Generated automatically. Do not edit!
#ifndef _IntStack_
#define _IntStack_
template<class T> class Array;
#include "Stack.hpp"

class IntStack : public Stack  {
public:

    // Wrappers
    IntStack() {
        ptr::CSTR_IntStack(this);
    }

    inline IntStack * _New(Array<int> * arg1) { return ptr::_New(this, arg1); }
    inline IntStack * _new2() { return ptr::_new2(); }
    inline bool _Equals14(int arg1, int arg2) { return ptr::_Equals14(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static IntStack * (*_New)(IntStack * self, Array<int> * arg1);
        static IntStack * (*_new2)();
        static bool (*_Equals14)(IntStack * self, int arg1, int arg2);
        static void (*_mark)();
        static void (*CSTR_IntStack)(IntStack * self);
    };
};

#ifdef _WIN32

IntStack * (*IntStack::ptr::_New)(IntStack * self, Array<int> * arg1) = (IntStack * (*)(IntStack * self, Array<int> * arg1)) 0x0;
IntStack * (*IntStack::ptr::_new2)() = (IntStack * (*)()) 0x0;
bool (*IntStack::ptr::_Equals14)(IntStack * self, int arg1, int arg2) = (bool (*)(IntStack * self, int arg1, int arg2)) 0x0;
void (*IntStack::ptr::_mark)() = (void (*)()) 0x0;
void (*IntStack::ptr::CSTR_IntStack)(IntStack * self) = (void (*)(IntStack * self)) 0x6603d0;
#endif

#ifdef __linux__

IntStack * (*IntStack::ptr::_New)(IntStack * self, Array<int> * arg1) = (IntStack * (*)(IntStack * self, Array<int> * arg1)) 0x0;
IntStack * (*IntStack::ptr::_new2)() = (IntStack * (*)()) 0x0;
bool (*IntStack::ptr::_Equals14)(IntStack * self, int arg1, int arg2) = (bool (*)(IntStack * self, int arg1, int arg2)) 0x0;
void (*IntStack::ptr::_mark)() = (void (*)()) 0x80a0bf0;
void (*IntStack::ptr::CSTR_IntStack)(IntStack * self) = (void (*)(IntStack * self)) 0x81d6150;
#endif
#endif
