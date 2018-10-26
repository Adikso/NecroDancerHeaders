// Generated automatically. Do not edit!
#ifndef _BackwardsStack_
#define _BackwardsStack_
class BackwardsEnumerator;
class Stack2;
#include "Object.hpp"

class BackwardsStack : public Object  {
public:
    Stack2 * stack;

    // Wrappers
    inline BackwardsStack * _New(Stack2 * arg1) { return ptr::_New(this, arg1); }
    inline BackwardsStack * _new2() { return ptr::_new2(); }
    inline virtual BackwardsEnumerator * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static BackwardsStack * (*_New)(BackwardsStack * self, Stack2 * arg1);
        static BackwardsStack * (*_new2)();
        static BackwardsEnumerator * (*ObjectEnumerator)(BackwardsStack * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

BackwardsStack * (*BackwardsStack::ptr::_New)(BackwardsStack * self, Stack2 * arg1) = (BackwardsStack * (*)(BackwardsStack * self, Stack2 * arg1)) 0x0;
BackwardsStack * (*BackwardsStack::ptr::_new2)() = (BackwardsStack * (*)()) 0x0;
BackwardsEnumerator * (*BackwardsStack::ptr::ObjectEnumerator)(BackwardsStack * self) = (BackwardsEnumerator * (*)(BackwardsStack * self)) 0x66d0e0;
void (*BackwardsStack::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

BackwardsStack * (*BackwardsStack::ptr::_New)(BackwardsStack * self, Stack2 * arg1) = (BackwardsStack * (*)(BackwardsStack * self, Stack2 * arg1)) 0x0;
BackwardsStack * (*BackwardsStack::ptr::_new2)() = (BackwardsStack * (*)()) 0x81db110;
BackwardsEnumerator * (*BackwardsStack::ptr::ObjectEnumerator)(BackwardsStack * self) = (BackwardsEnumerator * (*)(BackwardsStack * self)) 0x80b5fc0;
void (*BackwardsStack::ptr::_mark)() = (void (*)()) 0x808f890;
#endif
#endif
