// Generated automatically. Do not edit!
#ifndef _Stack8_
#define _Stack8_
template<class T> class Array;
class Enumerator42;
class RoomBase;
#include "Object.hpp"

class Stack8 : public Object  {
public:
    Array<RoomBase *> * data;
    int length;

    // Wrappers
    inline Stack8 * _New() { return ptr::_New(); }
    inline Stack8 * _new2(Array<RoomBase *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual int Push22(RoomBase * value) { return ptr::Push22(this, value); }
    inline virtual int Push23(Array<RoomBase *> * arg1, int arg2, int arg3) { return ptr::_Push23(this, arg1, arg2, arg3); }
    inline virtual int Push24(Array<RoomBase *> * arg1, int arg2) { return ptr::_Push24(this, arg1, arg2); }
    inline virtual Enumerator42 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual int Length() { return ptr::_Length(); }
    inline virtual RoomBase * Get2(int arg1) { return ptr::_Get2(this, arg1); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Stack8 * (*_New)();
        static Stack8 * (*_new2)(Stack8 * self, Array<RoomBase *> * arg1);
        static int (*Push22)(Stack8 * self, RoomBase * value);
        static int (*_Push23)(Stack8 * self, Array<RoomBase *> * arg1, int arg2, int arg3);
        static int (*_Push24)(Stack8 * self, Array<RoomBase *> * arg1, int arg2);
        static Enumerator42 * (*ObjectEnumerator)(Stack8 * self);
        static int (*_Length)();
        static RoomBase * (*_Get2)(Stack8 * self, int arg1);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Stack8 * (*Stack8::ptr::_New)() = (Stack8 * (*)()) 0x0;
inline Stack8 * (*Stack8::ptr::_new2)(Stack8 * self, Array<RoomBase *> * arg1) = (Stack8 * (*)(Stack8 * self, Array<RoomBase *> * arg1)) 0x0;
inline int (*Stack8::ptr::Push22)(Stack8 * self, RoomBase * value) = (int (*)(Stack8 * self, RoomBase * value)) 0x660250;
inline int (*Stack8::ptr::_Push23)(Stack8 * self, Array<RoomBase *> * arg1, int arg2, int arg3) = (int (*)(Stack8 * self, Array<RoomBase *> * arg1, int arg2, int arg3)) 0x0;
inline int (*Stack8::ptr::_Push24)(Stack8 * self, Array<RoomBase *> * arg1, int arg2) = (int (*)(Stack8 * self, Array<RoomBase *> * arg1, int arg2)) 0x0;
inline Enumerator42 * (*Stack8::ptr::ObjectEnumerator)(Stack8 * self) = (Enumerator42 * (*)(Stack8 * self)) 0x6602f0;
inline int (*Stack8::ptr::_Length)() = (int (*)()) 0x0;
inline RoomBase * (*Stack8::ptr::_Get2)(Stack8 * self, int arg1) = (RoomBase * (*)(Stack8 * self, int arg1)) 0x0;
inline void (*Stack8::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Stack8 * (*Stack8::ptr::_New)() = (Stack8 * (*)()) 0x81d59a0;
inline Stack8 * (*Stack8::ptr::_new2)(Stack8 * self, Array<RoomBase *> * arg1) = (Stack8 * (*)(Stack8 * self, Array<RoomBase *> * arg1)) 0x0;
inline int (*Stack8::ptr::Push22)(Stack8 * self, RoomBase * value) = (int (*)(Stack8 * self, RoomBase * value)) 0x80bee80;
inline int (*Stack8::ptr::_Push23)(Stack8 * self, Array<RoomBase *> * arg1, int arg2, int arg3) = (int (*)(Stack8 * self, Array<RoomBase *> * arg1, int arg2, int arg3)) 0x0;
inline int (*Stack8::ptr::_Push24)(Stack8 * self, Array<RoomBase *> * arg1, int arg2) = (int (*)(Stack8 * self, Array<RoomBase *> * arg1, int arg2)) 0x0;
inline Enumerator42 * (*Stack8::ptr::ObjectEnumerator)(Stack8 * self) = (Enumerator42 * (*)(Stack8 * self)) 0x80bbc80;
inline int (*Stack8::ptr::_Length)() = (int (*)()) 0x8077390;
inline RoomBase * (*Stack8::ptr::_Get2)(Stack8 * self, int arg1) = (RoomBase * (*)(Stack8 * self, int arg1)) 0x80773a0;
inline void (*Stack8::ptr::_mark)() = (void (*)()) 0x80773b0;
#endif
#endif
