// Generated automatically. Do not edit!
#ifndef _Enumerator30_
#define _Enumerator30_
class List13;
class Node23;
class TileObject;
#include "Object.hpp"

class Enumerator30 : public Object  {
public:
    List13 * _list;
    Node23 * _curr;

    // Wrappers
    inline Enumerator30 * _New(List13 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator30 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual TileObject * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator30 * (*_New)(Enumerator30 * self, List13 * arg1);
        static Enumerator30 * (*_new2)();
        static bool (*_HasNext)();
        static TileObject * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Enumerator30 * (*Enumerator30::ptr::_New)(Enumerator30 * self, List13 * arg1) = (Enumerator30 * (*)(Enumerator30 * self, List13 * arg1)) 0x0;
inline Enumerator30 * (*Enumerator30::ptr::_new2)() = (Enumerator30 * (*)()) 0x0;
inline bool (*Enumerator30::ptr::_HasNext)() = (bool (*)()) 0x0;
inline TileObject * (*Enumerator30::ptr::_NextObject)() = (TileObject * (*)()) 0x0;
inline void (*Enumerator30::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Enumerator30 * (*Enumerator30::ptr::_New)(Enumerator30 * self, List13 * arg1) = (Enumerator30 * (*)(Enumerator30 * self, List13 * arg1)) 0x0;
inline Enumerator30 * (*Enumerator30::ptr::_new2)() = (Enumerator30 * (*)()) 0x81d1030;
inline bool (*Enumerator30::ptr::_HasNext)() = (bool (*)()) 0x808f530;
inline TileObject * (*Enumerator30::ptr::_NextObject)() = (TileObject * (*)()) 0x808f4c0;
inline void (*Enumerator30::ptr::_mark)() = (void (*)()) 0x808ac10;
#endif
#endif
