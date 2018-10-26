// Generated automatically. Do not edit!
#ifndef _Stack5_
#define _Stack5_
template<class T> class Array;
class Enumerator40;
class TileData;
#include "Object.hpp"

class Stack5 : public Object  {
public:
    Array<TileData *> * data;
    int length;

    // Wrappers
    inline Stack5 * _New() { return ptr::_New(); }
    inline Stack5 * _new2(Array<TileData *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual int Push13(TileData * value) { return ptr::Push13(this, value); }
    inline virtual int Push14(Array<TileData *> * arg1, int arg2, int arg3) { return ptr::_Push14(this, arg1, arg2, arg3); }
    inline virtual int Push15(Array<TileData *> * arg1, int arg2) { return ptr::_Push15(this, arg1, arg2); }
    inline virtual Enumerator40 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual int Length() { return ptr::_Length(); }
    inline virtual TileData * Get2(int arg1) { return ptr::_Get2(this, arg1); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Stack5 * (*_New)();
        static Stack5 * (*_new2)(Stack5 * self, Array<TileData *> * arg1);
        static int (*Push13)(Stack5 * self, TileData * value);
        static int (*_Push14)(Stack5 * self, Array<TileData *> * arg1, int arg2, int arg3);
        static int (*_Push15)(Stack5 * self, Array<TileData *> * arg1, int arg2);
        static Enumerator40 * (*ObjectEnumerator)(Stack5 * self);
        static int (*_Length)();
        static TileData * (*_Get2)(Stack5 * self, int arg1);
        static void (*_mark)();
    };
};

#ifdef _WIN32

Stack5 * (*Stack5::ptr::_New)() = (Stack5 * (*)()) 0x0;
Stack5 * (*Stack5::ptr::_new2)(Stack5 * self, Array<TileData *> * arg1) = (Stack5 * (*)(Stack5 * self, Array<TileData *> * arg1)) 0x0;
int (*Stack5::ptr::Push13)(Stack5 * self, TileData * value) = (int (*)(Stack5 * self, TileData * value)) 0x65f500;
int (*Stack5::ptr::_Push14)(Stack5 * self, Array<TileData *> * arg1, int arg2, int arg3) = (int (*)(Stack5 * self, Array<TileData *> * arg1, int arg2, int arg3)) 0x0;
int (*Stack5::ptr::_Push15)(Stack5 * self, Array<TileData *> * arg1, int arg2) = (int (*)(Stack5 * self, Array<TileData *> * arg1, int arg2)) 0x0;
Enumerator40 * (*Stack5::ptr::ObjectEnumerator)(Stack5 * self) = (Enumerator40 * (*)(Stack5 * self)) 0x65f5a0;
int (*Stack5::ptr::_Length)() = (int (*)()) 0x0;
TileData * (*Stack5::ptr::_Get2)(Stack5 * self, int arg1) = (TileData * (*)(Stack5 * self, int arg1)) 0x0;
void (*Stack5::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Stack5 * (*Stack5::ptr::_New)() = (Stack5 * (*)()) 0x81d4a70;
Stack5 * (*Stack5::ptr::_new2)(Stack5 * self, Array<TileData *> * arg1) = (Stack5 * (*)(Stack5 * self, Array<TileData *> * arg1)) 0x0;
int (*Stack5::ptr::Push13)(Stack5 * self, TileData * value) = (int (*)(Stack5 * self, TileData * value)) 0x80be880;
int (*Stack5::ptr::_Push14)(Stack5 * self, Array<TileData *> * arg1, int arg2, int arg3) = (int (*)(Stack5 * self, Array<TileData *> * arg1, int arg2, int arg3)) 0x0;
int (*Stack5::ptr::_Push15)(Stack5 * self, Array<TileData *> * arg1, int arg2) = (int (*)(Stack5 * self, Array<TileData *> * arg1, int arg2)) 0x0;
Enumerator40 * (*Stack5::ptr::ObjectEnumerator)(Stack5 * self) = (Enumerator40 * (*)(Stack5 * self)) 0x80bbb80;
int (*Stack5::ptr::_Length)() = (int (*)()) 0x8076c70;
TileData * (*Stack5::ptr::_Get2)(Stack5 * self, int arg1) = (TileData * (*)(Stack5 * self, int arg1)) 0x8076c80;
void (*Stack5::ptr::_mark)() = (void (*)()) 0x8076c90;
#endif
#endif
