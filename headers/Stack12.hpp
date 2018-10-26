// Generated automatically. Do not edit!
#ifndef _Stack12_
#define _Stack12_
template<class T> class Array;
class Enumerator52;
class SwarmSarcophagus;
#include "Object.hpp"

class Stack12 : public Object  {
public:
    Array<SwarmSarcophagus *> * data;
    int length;

    // Wrappers
    inline Stack12 * _New() { return ptr::_New(); }
    inline Stack12 * _new2(Array<SwarmSarcophagus *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual int Push34(SwarmSarcophagus * value) { return ptr::Push34(this, value); }
    inline virtual int Push35(Array<SwarmSarcophagus *> * arg1, int arg2, int arg3) { return ptr::_Push35(this, arg1, arg2, arg3); }
    inline virtual int Push36(Array<SwarmSarcophagus *> * arg1, int arg2) { return ptr::_Push36(this, arg1, arg2); }
    inline virtual int Length() { return ptr::_Length(); }
    inline virtual SwarmSarcophagus * Get2(int arg1) { return ptr::_Get2(this, arg1); }
    inline virtual int Set25(int index, SwarmSarcophagus * value) { return ptr::Set25(this, index, value); }
    inline virtual Enumerator52 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Stack12 * (*_New)();
        static Stack12 * (*_new2)(Stack12 * self, Array<SwarmSarcophagus *> * arg1);
        static int (*Push34)(Stack12 * self, SwarmSarcophagus * value);
        static int (*_Push35)(Stack12 * self, Array<SwarmSarcophagus *> * arg1, int arg2, int arg3);
        static int (*_Push36)(Stack12 * self, Array<SwarmSarcophagus *> * arg1, int arg2);
        static int (*_Length)();
        static SwarmSarcophagus * (*_Get2)(Stack12 * self, int arg1);
        static int (*Set25)(Stack12 * self, int index, SwarmSarcophagus * value);
        static Enumerator52 * (*ObjectEnumerator)(Stack12 * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

Stack12 * (*Stack12::ptr::_New)() = (Stack12 * (*)()) 0x0;
Stack12 * (*Stack12::ptr::_new2)(Stack12 * self, Array<SwarmSarcophagus *> * arg1) = (Stack12 * (*)(Stack12 * self, Array<SwarmSarcophagus *> * arg1)) 0x0;
int (*Stack12::ptr::Push34)(Stack12 * self, SwarmSarcophagus * value) = (int (*)(Stack12 * self, SwarmSarcophagus * value)) 0x68b3e0;
int (*Stack12::ptr::_Push35)(Stack12 * self, Array<SwarmSarcophagus *> * arg1, int arg2, int arg3) = (int (*)(Stack12 * self, Array<SwarmSarcophagus *> * arg1, int arg2, int arg3)) 0x0;
int (*Stack12::ptr::_Push36)(Stack12 * self, Array<SwarmSarcophagus *> * arg1, int arg2) = (int (*)(Stack12 * self, Array<SwarmSarcophagus *> * arg1, int arg2)) 0x0;
int (*Stack12::ptr::_Length)() = (int (*)()) 0x0;
SwarmSarcophagus * (*Stack12::ptr::_Get2)(Stack12 * self, int arg1) = (SwarmSarcophagus * (*)(Stack12 * self, int arg1)) 0x0;
int (*Stack12::ptr::Set25)(Stack12 * self, int index, SwarmSarcophagus * value) = (int (*)(Stack12 * self, int index, SwarmSarcophagus * value)) 0x6314c0;
Enumerator52 * (*Stack12::ptr::ObjectEnumerator)(Stack12 * self) = (Enumerator52 * (*)(Stack12 * self)) 0x68b480;
void (*Stack12::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Stack12 * (*Stack12::ptr::_New)() = (Stack12 * (*)()) 0x81e2800;
Stack12 * (*Stack12::ptr::_new2)(Stack12 * self, Array<SwarmSarcophagus *> * arg1) = (Stack12 * (*)(Stack12 * self, Array<SwarmSarcophagus *> * arg1)) 0x0;
int (*Stack12::ptr::Push34)(Stack12 * self, SwarmSarcophagus * value) = (int (*)(Stack12 * self, SwarmSarcophagus * value)) 0x80bf280;
int (*Stack12::ptr::_Push35)(Stack12 * self, Array<SwarmSarcophagus *> * arg1, int arg2, int arg3) = (int (*)(Stack12 * self, Array<SwarmSarcophagus *> * arg1, int arg2, int arg3)) 0x0;
int (*Stack12::ptr::_Push36)(Stack12 * self, Array<SwarmSarcophagus *> * arg1, int arg2) = (int (*)(Stack12 * self, Array<SwarmSarcophagus *> * arg1, int arg2)) 0x0;
int (*Stack12::ptr::_Length)() = (int (*)()) 0x8078cf0;
SwarmSarcophagus * (*Stack12::ptr::_Get2)(Stack12 * self, int arg1) = (SwarmSarcophagus * (*)(Stack12 * self, int arg1)) 0x8078d00;
int (*Stack12::ptr::Set25)(Stack12 * self, int index, SwarmSarcophagus * value) = (int (*)(Stack12 * self, int index, SwarmSarcophagus * value)) 0x80875b0;
Enumerator52 * (*Stack12::ptr::ObjectEnumerator)(Stack12 * self) = (Enumerator52 * (*)(Stack12 * self)) 0x80bc690;
void (*Stack12::ptr::_mark)() = (void (*)()) 0x8078d10;
#endif
#endif
