// Generated automatically. Do not edit!
#ifndef _Stack9_
#define _Stack9_
template<class T> class Array;
class Enemy;
#include "Object.hpp"

class Stack9 : public Object  {
public:
    Array<Enemy *> * data;
    int length;

    // Wrappers
    inline Stack9 * _New() { return ptr::_New(); }
    inline Stack9 * _new2(Array<Enemy *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual int Push25(Enemy * value) { return ptr::Push25(this, value); }
    inline virtual int Push26(Array<Enemy *> * arg1, int arg2, int arg3) { return ptr::_Push26(this, arg1, arg2, arg3); }
    inline virtual int Push27(Array<Enemy *> * arg1, int arg2) { return ptr::_Push27(this, arg1, arg2); }
    inline virtual int Length() { return ptr::_Length(); }
    inline virtual Enemy * Get2(int arg1) { return ptr::_Get2(this, arg1); }
    inline virtual int Set24(int arg1, Enemy * arg2) { return ptr::_Set24(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Stack9 * (*_New)();
        static Stack9 * (*_new2)(Stack9 * self, Array<Enemy *> * arg1);
        static int (*Push25)(Stack9 * self, Enemy * value);
        static int (*_Push26)(Stack9 * self, Array<Enemy *> * arg1, int arg2, int arg3);
        static int (*_Push27)(Stack9 * self, Array<Enemy *> * arg1, int arg2);
        static int (*_Length)();
        static Enemy * (*_Get2)(Stack9 * self, int arg1);
        static int (*_Set24)(Stack9 * self, int arg1, Enemy * arg2);
        static void (*_mark)();
    };
};

#ifdef _WIN32

Stack9 * (*Stack9::ptr::_New)() = (Stack9 * (*)()) 0x0;
Stack9 * (*Stack9::ptr::_new2)(Stack9 * self, Array<Enemy *> * arg1) = (Stack9 * (*)(Stack9 * self, Array<Enemy *> * arg1)) 0x0;
int (*Stack9::ptr::Push25)(Stack9 * self, Enemy * value) = (int (*)(Stack9 * self, Enemy * value)) 0x660e10;
int (*Stack9::ptr::_Push26)(Stack9 * self, Array<Enemy *> * arg1, int arg2, int arg3) = (int (*)(Stack9 * self, Array<Enemy *> * arg1, int arg2, int arg3)) 0x0;
int (*Stack9::ptr::_Push27)(Stack9 * self, Array<Enemy *> * arg1, int arg2) = (int (*)(Stack9 * self, Array<Enemy *> * arg1, int arg2)) 0x0;
int (*Stack9::ptr::_Length)() = (int (*)()) 0x0;
Enemy * (*Stack9::ptr::_Get2)(Stack9 * self, int arg1) = (Enemy * (*)(Stack9 * self, int arg1)) 0x0;
int (*Stack9::ptr::_Set24)(Stack9 * self, int arg1, Enemy * arg2) = (int (*)(Stack9 * self, int arg1, Enemy * arg2)) 0x0;
void (*Stack9::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Stack9 * (*Stack9::ptr::_New)() = (Stack9 * (*)()) 0x81d6660;
Stack9 * (*Stack9::ptr::_new2)(Stack9 * self, Array<Enemy *> * arg1) = (Stack9 * (*)(Stack9 * self, Array<Enemy *> * arg1)) 0x0;
int (*Stack9::ptr::Push25)(Stack9 * self, Enemy * value) = (int (*)(Stack9 * self, Enemy * value)) 0x80be1c0;
int (*Stack9::ptr::_Push26)(Stack9 * self, Array<Enemy *> * arg1, int arg2, int arg3) = (int (*)(Stack9 * self, Array<Enemy *> * arg1, int arg2, int arg3)) 0x0;
int (*Stack9::ptr::_Push27)(Stack9 * self, Array<Enemy *> * arg1, int arg2) = (int (*)(Stack9 * self, Array<Enemy *> * arg1, int arg2)) 0x0;
int (*Stack9::ptr::_Length)() = (int (*)()) 0x80775a0;
Enemy * (*Stack9::ptr::_Get2)(Stack9 * self, int arg1) = (Enemy * (*)(Stack9 * self, int arg1)) 0x80775b0;
int (*Stack9::ptr::_Set24)(Stack9 * self, int arg1, Enemy * arg2) = (int (*)(Stack9 * self, int arg1, Enemy * arg2)) 0x0;
void (*Stack9::ptr::_mark)() = (void (*)()) 0x80775c0;
#endif
#endif
