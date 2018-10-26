// Generated automatically. Do not edit!
#ifndef _Stack_
#define _Stack_
template<class T> class Array;
class BackwardsStack;
class Enumerator25;
#include "Object.hpp"

class Stack : public Object  {
public:
    Array<int> * data;
    int length;
    static int * _NIL;

    // Wrappers
    Stack() {
        ptr::CSTR_Stack(this);
    }

    inline Stack * _New() { return ptr::_New(); }
    inline Stack * _new2(Array<int> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual int Push(int value) { return ptr::Push(this, value); }
    inline virtual int Push2(Array<int> * arg1, int arg2, int arg3) { return ptr::_Push2(this, arg1, arg2, arg3); }
    inline virtual int Push3(Array<int> * arg1, int arg2) { return ptr::_Push3(this, arg1, arg2); }
    inline virtual int Length() { return ptr::_Length(); }
    inline virtual int Get2(int index) { return ptr::Get2(this, index); }
    inline virtual bool Equals16(int arg1, int arg2) { return ptr::_Equals16(this, arg1, arg2); }
    inline virtual Enumerator25 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual int Clear() { return ptr::Clear(this); }
    inline virtual int Set6(int index, int value) { return ptr::Set6(this, index, value); }
    inline virtual int Remove5(int index) { return ptr::Remove5(this, index); }
    inline virtual int Pop() { return ptr::Pop(this); }
    inline virtual bool Contains2(int value) { return ptr::Contains2(this, value); }
    inline virtual BackwardsStack * Backwards() { return ptr::Backwards(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Stack * (*_New)();
        static Stack * (*_new2)(Stack * self, Array<int> * arg1);
        static int (*Push)(Stack * self, int value);
        static int (*_Push2)(Stack * self, Array<int> * arg1, int arg2, int arg3);
        static int (*_Push3)(Stack * self, Array<int> * arg1, int arg2);
        static int (*_Length)();
        static int (*Get2)(Stack * self, int index);
        static bool (*_Equals16)(Stack * self, int arg1, int arg2);
        static Enumerator25 * (*ObjectEnumerator)(Stack * self);
        static int (*Clear)(Stack * self);
        static int (*Set6)(Stack * self, int index, int value);
        static int (*Remove5)(Stack * self, int index);
        static int (*Pop)(Stack * self);
        static bool (*Contains2)(Stack * self, int value);
        static BackwardsStack * (*Backwards)(Stack * self);
        static void (*_mark)();
        static void (*CSTR_Stack)(Stack * self);
    };
};

#ifdef _WIN32
int * Stack::_NIL = (int*) 0x8355d4;

Stack * (*Stack::ptr::_New)() = (Stack * (*)()) 0x0;
Stack * (*Stack::ptr::_new2)(Stack * self, Array<int> * arg1) = (Stack * (*)(Stack * self, Array<int> * arg1)) 0x0;
int (*Stack::ptr::Push)(Stack * self, int value) = (int (*)(Stack * self, int value)) 0x605090;
int (*Stack::ptr::_Push2)(Stack * self, Array<int> * arg1, int arg2, int arg3) = (int (*)(Stack * self, Array<int> * arg1, int arg2, int arg3)) 0x0;
int (*Stack::ptr::_Push3)(Stack * self, Array<int> * arg1, int arg2) = (int (*)(Stack * self, Array<int> * arg1, int arg2)) 0x0;
int (*Stack::ptr::_Length)() = (int (*)()) 0x0;
int (*Stack::ptr::Get2)(Stack * self, int index) = (int (*)(Stack * self, int index)) 0x605160;
bool (*Stack::ptr::_Equals16)(Stack * self, int arg1, int arg2) = (bool (*)(Stack * self, int arg1, int arg2)) 0x0;
Enumerator25 * (*Stack::ptr::ObjectEnumerator)(Stack * self) = (Enumerator25 * (*)(Stack * self)) 0x605180;
int (*Stack::ptr::Clear)(Stack * self) = (int (*)(Stack * self)) 0x605260;
int (*Stack::ptr::Set6)(Stack * self, int index, int value) = (int (*)(Stack * self, int index, int value)) 0x6052a0;
int (*Stack::ptr::Remove5)(Stack * self, int index) = (int (*)(Stack * self, int index)) 0x6052c0;
int (*Stack::ptr::Pop)(Stack * self) = (int (*)(Stack * self)) 0x605310;
bool (*Stack::ptr::Contains2)(Stack * self, int value) = (bool (*)(Stack * self, int value)) 0x605330;
BackwardsStack * (*Stack::ptr::Backwards)(Stack * self) = (BackwardsStack * (*)(Stack * self)) 0x605380;
void (*Stack::ptr::_mark)() = (void (*)()) 0x0;
void (*Stack::ptr::CSTR_Stack)(Stack * self) = (void (*)(Stack * self)) 0x605010;
#endif

#ifdef __linux__
int * Stack::_NIL = (int*) 0x0;

Stack * (*Stack::ptr::_New)() = (Stack * (*)()) 0x81a97e0;
Stack * (*Stack::ptr::_new2)(Stack * self, Array<int> * arg1) = (Stack * (*)(Stack * self, Array<int> * arg1)) 0x81a97f0;
int (*Stack::ptr::Push)(Stack * self, int value) = (int (*)(Stack * self, int value)) 0x80c13b0;
int (*Stack::ptr::_Push2)(Stack * self, Array<int> * arg1, int arg2, int arg3) = (int (*)(Stack * self, Array<int> * arg1, int arg2, int arg3)) 0x8074020;
int (*Stack::ptr::_Push3)(Stack * self, Array<int> * arg1, int arg2) = (int (*)(Stack * self, Array<int> * arg1, int arg2)) 0x8074070;
int (*Stack::ptr::_Length)() = (int (*)()) 0x80740c0;
int (*Stack::ptr::Get2)(Stack * self, int index) = (int (*)(Stack * self, int index)) 0x80740d0;
bool (*Stack::ptr::_Equals16)(Stack * self, int arg1, int arg2) = (bool (*)(Stack * self, int arg1, int arg2)) 0x80740e0;
Enumerator25 * (*Stack::ptr::ObjectEnumerator)(Stack * self) = (Enumerator25 * (*)(Stack * self)) 0x80b60d0;
int (*Stack::ptr::Clear)(Stack * self) = (int (*)(Stack * self)) 0x80740f0;
int (*Stack::ptr::Set6)(Stack * self, int index, int value) = (int (*)(Stack * self, int index, int value)) 0x8074100;
int (*Stack::ptr::Remove5)(Stack * self, int index) = (int (*)(Stack * self, int index)) 0x8074120;
int (*Stack::ptr::Pop)(Stack * self) = (int (*)(Stack * self)) 0x8074160;
bool (*Stack::ptr::Contains2)(Stack * self, int value) = (bool (*)(Stack * self, int value)) 0x8074180;
BackwardsStack * (*Stack::ptr::Backwards)(Stack * self) = (BackwardsStack * (*)(Stack * self)) 0x80b6050;
void (*Stack::ptr::_mark)() = (void (*)()) 0x80a0b90;
void (*Stack::ptr::CSTR_Stack)(Stack * self) = (void (*)(Stack * self)) 0x81a96d0;
#endif
#endif
