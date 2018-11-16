// Generated automatically. Do not edit!
#ifndef _Enumerator38_
#define _Enumerator38_
class CrateObject;
class List22;
class Node32;
#include "Object.hpp"

class Enumerator38 : public Object  {
public:
    List22 * _list;
    Node32 * _curr;

    // Wrappers
    inline Enumerator38 * _New(List22 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator38 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual CrateObject * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator38 * (*_New)(Enumerator38 * self, List22 * arg1);
        static Enumerator38 * (*_new2)();
        static bool (*_HasNext)();
        static CrateObject * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Enumerator38 * (*Enumerator38::ptr::_New)(Enumerator38 * self, List22 * arg1) = (Enumerator38 * (*)(Enumerator38 * self, List22 * arg1)) 0x0;
inline Enumerator38 * (*Enumerator38::ptr::_new2)() = (Enumerator38 * (*)()) 0x0;
inline bool (*Enumerator38::ptr::_HasNext)() = (bool (*)()) 0x0;
inline CrateObject * (*Enumerator38::ptr::_NextObject)() = (CrateObject * (*)()) 0x0;
inline void (*Enumerator38::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Enumerator38 * (*Enumerator38::ptr::_New)(Enumerator38 * self, List22 * arg1) = (Enumerator38 * (*)(Enumerator38 * self, List22 * arg1)) 0x0;
inline Enumerator38 * (*Enumerator38::ptr::_new2)() = (Enumerator38 * (*)()) 0x81d8140;
inline bool (*Enumerator38::ptr::_HasNext)() = (bool (*)()) 0x80954a0;
inline CrateObject * (*Enumerator38::ptr::_NextObject)() = (CrateObject * (*)()) 0x8095430;
inline void (*Enumerator38::ptr::_mark)() = (void (*)()) 0x80938e0;
#endif
#endif
