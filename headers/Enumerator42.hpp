// Generated automatically. Do not edit!
#ifndef _Enumerator42_
#define _Enumerator42_
class RoomBase;
class Stack8;
#include "Object.hpp"

class Enumerator42 : public Object  {
public:
    Stack8 * stack;
    int index;

    // Wrappers
    inline Enumerator42 * _New(Stack8 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator42 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual RoomBase * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator42 * (*_New)(Enumerator42 * self, Stack8 * arg1);
        static Enumerator42 * (*_new2)();
        static bool (*_HasNext)();
        static RoomBase * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Enumerator42 * (*Enumerator42::ptr::_New)(Enumerator42 * self, Stack8 * arg1) = (Enumerator42 * (*)(Enumerator42 * self, Stack8 * arg1)) 0x0;
inline Enumerator42 * (*Enumerator42::ptr::_new2)() = (Enumerator42 * (*)()) 0x0;
inline bool (*Enumerator42::ptr::_HasNext)() = (bool (*)()) 0x0;
inline RoomBase * (*Enumerator42::ptr::_NextObject)() = (RoomBase * (*)()) 0x0;
inline void (*Enumerator42::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Enumerator42 * (*Enumerator42::ptr::_New)(Enumerator42 * self, Stack8 * arg1) = (Enumerator42 * (*)(Enumerator42 * self, Stack8 * arg1)) 0x0;
inline Enumerator42 * (*Enumerator42::ptr::_new2)() = (Enumerator42 * (*)()) 0x81e26e0;
inline bool (*Enumerator42::ptr::_HasNext)() = (bool (*)()) 0x8091380;
inline RoomBase * (*Enumerator42::ptr::_NextObject)() = (RoomBase * (*)()) 0x8091310;
inline void (*Enumerator42::ptr::_mark)() = (void (*)()) 0x8084460;
#endif
#endif
