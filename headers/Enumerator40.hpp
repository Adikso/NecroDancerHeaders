// Generated automatically. Do not edit!
#ifndef _Enumerator40_
#define _Enumerator40_
class Stack5;
class TileData;
#include "Object.hpp"

class Enumerator40 : public Object  {
public:
    Stack5 * stack;
    int index;

    // Wrappers
    inline Enumerator40 * _New(Stack5 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator40 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual TileData * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator40 * (*_New)(Enumerator40 * self, Stack5 * arg1);
        static Enumerator40 * (*_new2)();
        static bool (*_HasNext)();
        static TileData * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Enumerator40 * (*Enumerator40::ptr::_New)(Enumerator40 * self, Stack5 * arg1) = (Enumerator40 * (*)(Enumerator40 * self, Stack5 * arg1)) 0x0;
inline Enumerator40 * (*Enumerator40::ptr::_new2)() = (Enumerator40 * (*)()) 0x0;
inline bool (*Enumerator40::ptr::_HasNext)() = (bool (*)()) 0x0;
inline TileData * (*Enumerator40::ptr::_NextObject)() = (TileData * (*)()) 0x0;
inline void (*Enumerator40::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Enumerator40 * (*Enumerator40::ptr::_New)(Enumerator40 * self, Stack5 * arg1) = (Enumerator40 * (*)(Enumerator40 * self, Stack5 * arg1)) 0x0;
inline Enumerator40 * (*Enumerator40::ptr::_new2)() = (Enumerator40 * (*)()) 0x81e2520;
inline bool (*Enumerator40::ptr::_HasNext)() = (bool (*)()) 0x8092290;
inline TileData * (*Enumerator40::ptr::_NextObject)() = (TileData * (*)()) 0x8092220;
inline void (*Enumerator40::ptr::_mark)() = (void (*)()) 0x808b110;
#endif
#endif
