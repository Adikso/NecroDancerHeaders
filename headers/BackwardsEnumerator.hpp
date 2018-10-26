// Generated automatically. Do not edit!
#ifndef _BackwardsEnumerator_
#define _BackwardsEnumerator_
class Stack;
class Stack2;
#include "Object.hpp"

class BackwardsEnumerator : public Object  {
public:
    Stack2 * stack;
    int index;

    // Wrappers
    inline BackwardsEnumerator * _New(Stack2 * arg1) { return ptr::_New(this, arg1); }
    inline BackwardsEnumerator * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::HasNext(this); }
    inline virtual int NextObject() { return ptr::NextObject(this); }
    inline void _mark() { ptr::_mark(); }
    inline BackwardsEnumerator * New(Stack * stack) { return ptr::New(this, stack); }

    class ptr {
    public:
        static BackwardsEnumerator * (*_New)(BackwardsEnumerator * self, Stack2 * arg1);
        static BackwardsEnumerator * (*_new2)();
        static bool (*HasNext)(BackwardsEnumerator * self);
        static int (*NextObject)(BackwardsEnumerator * self);
        static void (*_mark)();
        static BackwardsEnumerator * (*New)(BackwardsEnumerator * self, Stack * stack);
    };
};

#ifdef _WIN32

BackwardsEnumerator * (*BackwardsEnumerator::ptr::_New)(BackwardsEnumerator * self, Stack2 * arg1) = (BackwardsEnumerator * (*)(BackwardsEnumerator * self, Stack2 * arg1)) 0x0;
BackwardsEnumerator * (*BackwardsEnumerator::ptr::_new2)() = (BackwardsEnumerator * (*)()) 0x0;
bool (*BackwardsEnumerator::ptr::HasNext)(BackwardsEnumerator * self) = (bool (*)(BackwardsEnumerator * self)) 0x66d1e0;
int (*BackwardsEnumerator::ptr::NextObject)(BackwardsEnumerator * self) = (int (*)(BackwardsEnumerator * self)) 0x66d1f0;
void (*BackwardsEnumerator::ptr::_mark)() = (void (*)()) 0x0;
BackwardsEnumerator * (*BackwardsEnumerator::ptr::New)(BackwardsEnumerator * self, Stack * stack) = (BackwardsEnumerator * (*)(BackwardsEnumerator * self, Stack * stack)) 0x66d170;
#endif

#ifdef __linux__

BackwardsEnumerator * (*BackwardsEnumerator::ptr::_New)(BackwardsEnumerator * self, Stack2 * arg1) = (BackwardsEnumerator * (*)(BackwardsEnumerator * self, Stack2 * arg1)) 0x0;
BackwardsEnumerator * (*BackwardsEnumerator::ptr::_new2)() = (BackwardsEnumerator * (*)()) 0x81db1a0;
bool (*BackwardsEnumerator::ptr::HasNext)(BackwardsEnumerator * self) = (bool (*)(BackwardsEnumerator * self)) 0x8077ec0;
int (*BackwardsEnumerator::ptr::NextObject)(BackwardsEnumerator * self) = (int (*)(BackwardsEnumerator * self)) 0x8077ed0;
void (*BackwardsEnumerator::ptr::_mark)() = (void (*)()) 0x808f830;
BackwardsEnumerator * (*BackwardsEnumerator::ptr::New)(BackwardsEnumerator * self, Stack * stack) = (BackwardsEnumerator * (*)(BackwardsEnumerator * self, Stack * stack)) 0x81db140;
#endif
#endif
