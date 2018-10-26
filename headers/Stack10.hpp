// Generated automatically. Do not edit!
#ifndef _Stack10_
#define _Stack10_
template<class T> class Array;
class Enumerator57;
class FrankensteinwayProp;
#include "Object.hpp"

class Stack10 : public Object  {
public:
    Array<FrankensteinwayProp *> * data;
    int length;

    // Wrappers
    inline Stack10 * _New() { return ptr::_New(); }
    inline Stack10 * _new2(Array<FrankensteinwayProp *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual int Push28(FrankensteinwayProp * value) { return ptr::Push28(this, value); }
    inline virtual int Push29(Array<FrankensteinwayProp *> * arg1, int arg2, int arg3) { return ptr::_Push29(this, arg1, arg2, arg3); }
    inline virtual int Push30(Array<FrankensteinwayProp *> * arg1, int arg2) { return ptr::_Push30(this, arg1, arg2); }
    inline virtual Enumerator57 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual int Length() { return ptr::_Length(); }
    inline virtual FrankensteinwayProp * Get2(int arg1) { return ptr::_Get2(this, arg1); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Stack10 * (*_New)();
        static Stack10 * (*_new2)(Stack10 * self, Array<FrankensteinwayProp *> * arg1);
        static int (*Push28)(Stack10 * self, FrankensteinwayProp * value);
        static int (*_Push29)(Stack10 * self, Array<FrankensteinwayProp *> * arg1, int arg2, int arg3);
        static int (*_Push30)(Stack10 * self, Array<FrankensteinwayProp *> * arg1, int arg2);
        static Enumerator57 * (*ObjectEnumerator)(Stack10 * self);
        static int (*_Length)();
        static FrankensteinwayProp * (*_Get2)(Stack10 * self, int arg1);
        static void (*_mark)();
    };
};

#ifdef _WIN32

Stack10 * (*Stack10::ptr::_New)() = (Stack10 * (*)()) 0x0;
Stack10 * (*Stack10::ptr::_new2)(Stack10 * self, Array<FrankensteinwayProp *> * arg1) = (Stack10 * (*)(Stack10 * self, Array<FrankensteinwayProp *> * arg1)) 0x0;
int (*Stack10::ptr::Push28)(Stack10 * self, FrankensteinwayProp * value) = (int (*)(Stack10 * self, FrankensteinwayProp * value)) 0x66c0d0;
int (*Stack10::ptr::_Push29)(Stack10 * self, Array<FrankensteinwayProp *> * arg1, int arg2, int arg3) = (int (*)(Stack10 * self, Array<FrankensteinwayProp *> * arg1, int arg2, int arg3)) 0x0;
int (*Stack10::ptr::_Push30)(Stack10 * self, Array<FrankensteinwayProp *> * arg1, int arg2) = (int (*)(Stack10 * self, Array<FrankensteinwayProp *> * arg1, int arg2)) 0x0;
Enumerator57 * (*Stack10::ptr::ObjectEnumerator)(Stack10 * self) = (Enumerator57 * (*)(Stack10 * self)) 0x66c170;
int (*Stack10::ptr::_Length)() = (int (*)()) 0x0;
FrankensteinwayProp * (*Stack10::ptr::_Get2)(Stack10 * self, int arg1) = (FrankensteinwayProp * (*)(Stack10 * self, int arg1)) 0x0;
void (*Stack10::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Stack10 * (*Stack10::ptr::_New)() = (Stack10 * (*)()) 0x81da180;
Stack10 * (*Stack10::ptr::_new2)(Stack10 * self, Array<FrankensteinwayProp *> * arg1) = (Stack10 * (*)(Stack10 * self, Array<FrankensteinwayProp *> * arg1)) 0x0;
int (*Stack10::ptr::Push28)(Stack10 * self, FrankensteinwayProp * value) = (int (*)(Stack10 * self, FrankensteinwayProp * value)) 0x80bf080;
int (*Stack10::ptr::_Push29)(Stack10 * self, Array<FrankensteinwayProp *> * arg1, int arg2, int arg3) = (int (*)(Stack10 * self, Array<FrankensteinwayProp *> * arg1, int arg2, int arg3)) 0x0;
int (*Stack10::ptr::_Push30)(Stack10 * self, Array<FrankensteinwayProp *> * arg1, int arg2) = (int (*)(Stack10 * self, Array<FrankensteinwayProp *> * arg1, int arg2)) 0x0;
Enumerator57 * (*Stack10::ptr::ObjectEnumerator)(Stack10 * self) = (Enumerator57 * (*)(Stack10 * self)) 0x80bd390;
int (*Stack10::ptr::_Length)() = (int (*)()) 0x8077c10;
FrankensteinwayProp * (*Stack10::ptr::_Get2)(Stack10 * self, int arg1) = (FrankensteinwayProp * (*)(Stack10 * self, int arg1)) 0x8077c20;
void (*Stack10::ptr::_mark)() = (void (*)()) 0x8077c30;
#endif
#endif
