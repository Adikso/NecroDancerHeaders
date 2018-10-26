// Generated automatically. Do not edit!
#ifndef _Stack4_
#define _Stack4_
template<class T> class Array;
#include "Object.hpp"

class Stack4 : public Object  {
public:
    Array<bool> * data;
    int length;

    // Wrappers
    inline Stack4 * _New() { return ptr::_New(); }
    inline Stack4 * _new2(Array<bool> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual int Push10(bool value) { return ptr::Push10(this, value); }
    inline virtual int Push11(Array<bool> * values, int offset, int count) { return ptr::Push11(this, values, offset, count); }
    inline virtual int Push12(Array<bool> * values, int offset) { return ptr::Push12(this, values, offset); }
    inline virtual int Length() { return ptr::_Length(); }
    inline virtual bool Get2(int index) { return ptr::Get2(this, index); }
    inline virtual int Set22(int arg1, bool arg2) { return ptr::_Set22(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }
    inline int Set21(int index, bool value) { return ptr::Set21(this, index, value); }

    class ptr {
    public:
        static Stack4 * (*_New)();
        static Stack4 * (*_new2)(Stack4 * self, Array<bool> * arg1);
        static int (*Push10)(Stack4 * self, bool value);
        static int (*Push11)(Stack4 * self, Array<bool> * values, int offset, int count);
        static int (*Push12)(Stack4 * self, Array<bool> * values, int offset);
        static int (*_Length)();
        static bool (*Get2)(Stack4 * self, int index);
        static int (*_Set22)(Stack4 * self, int arg1, bool arg2);
        static void (*_mark)();
        static int (*Set21)(Stack4 * self, int index, bool value);
    };
};

#ifdef _WIN32

Stack4 * (*Stack4::ptr::_New)() = (Stack4 * (*)()) 0x0;
Stack4 * (*Stack4::ptr::_new2)(Stack4 * self, Array<bool> * arg1) = (Stack4 * (*)(Stack4 * self, Array<bool> * arg1)) 0x0;
int (*Stack4::ptr::Push10)(Stack4 * self, bool value) = (int (*)(Stack4 * self, bool value)) 0x65d600;
int (*Stack4::ptr::Push11)(Stack4 * self, Array<bool> * values, int offset, int count) = (int (*)(Stack4 * self, Array<bool> * values, int offset, int count)) 0x65d650;
int (*Stack4::ptr::Push12)(Stack4 * self, Array<bool> * values, int offset) = (int (*)(Stack4 * self, Array<bool> * values, int offset)) 0x65d690;
int (*Stack4::ptr::_Length)() = (int (*)()) 0x0;
bool (*Stack4::ptr::Get2)(Stack4 * self, int index) = (bool (*)(Stack4 * self, int index)) 0x65d6c0;
int (*Stack4::ptr::_Set22)(Stack4 * self, int arg1, bool arg2) = (int (*)(Stack4 * self, int arg1, bool arg2)) 0x0;
void (*Stack4::ptr::_mark)() = (void (*)()) 0x0;
int (*Stack4::ptr::Set21)(Stack4 * self, int index, bool value) = (int (*)(Stack4 * self, int index, bool value)) 0x65d6e0;
#endif

#ifdef __linux__

Stack4 * (*Stack4::ptr::_New)() = (Stack4 * (*)()) 0x81d3a80;
Stack4 * (*Stack4::ptr::_new2)(Stack4 * self, Array<bool> * arg1) = (Stack4 * (*)(Stack4 * self, Array<bool> * arg1)) 0x81d3a90;
int (*Stack4::ptr::Push10)(Stack4 * self, bool value) = (int (*)(Stack4 * self, bool value)) 0x80bff80;
int (*Stack4::ptr::Push11)(Stack4 * self, Array<bool> * values, int offset, int count) = (int (*)(Stack4 * self, Array<bool> * values, int offset, int count)) 0x80768b0;
int (*Stack4::ptr::Push12)(Stack4 * self, Array<bool> * values, int offset) = (int (*)(Stack4 * self, Array<bool> * values, int offset)) 0x8076900;
int (*Stack4::ptr::_Length)() = (int (*)()) 0x8076950;
bool (*Stack4::ptr::Get2)(Stack4 * self, int index) = (bool (*)(Stack4 * self, int index)) 0x8076960;
int (*Stack4::ptr::_Set22)(Stack4 * self, int arg1, bool arg2) = (int (*)(Stack4 * self, int arg1, bool arg2)) 0x0;
void (*Stack4::ptr::_mark)() = (void (*)()) 0x809a860;
int (*Stack4::ptr::Set21)(Stack4 * self, int index, bool value) = (int (*)(Stack4 * self, int index, bool value)) 0x8076980;
#endif
#endif
