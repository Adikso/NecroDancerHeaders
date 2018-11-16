// Generated automatically. Do not edit!
#ifndef _Enumerator15_
#define _Enumerator15_
class List32;
class Node49;
class SaleChest;
#include "Object.hpp"

class Enumerator15 : public Object  {
public:
    List32 * _list;
    Node49 * _curr;

    // Wrappers
    inline Enumerator15 * _New(List32 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator15 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual SaleChest * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator15 * (*_New)(Enumerator15 * self, List32 * arg1);
        static Enumerator15 * (*_new2)();
        static bool (*_HasNext)();
        static SaleChest * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Enumerator15 * (*Enumerator15::ptr::_New)(Enumerator15 * self, List32 * arg1) = (Enumerator15 * (*)(Enumerator15 * self, List32 * arg1)) 0x0;
inline Enumerator15 * (*Enumerator15::ptr::_new2)() = (Enumerator15 * (*)()) 0x0;
inline bool (*Enumerator15::ptr::_HasNext)() = (bool (*)()) 0x0;
inline SaleChest * (*Enumerator15::ptr::_NextObject)() = (SaleChest * (*)()) 0x0;
inline void (*Enumerator15::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Enumerator15 * (*Enumerator15::ptr::_New)(Enumerator15 * self, List32 * arg1) = (Enumerator15 * (*)(Enumerator15 * self, List32 * arg1)) 0x81a5a40;
inline Enumerator15 * (*Enumerator15::ptr::_new2)() = (Enumerator15 * (*)()) 0x81a5af0;
inline bool (*Enumerator15::ptr::_HasNext)() = (bool (*)()) 0x8091ee0;
inline SaleChest * (*Enumerator15::ptr::_NextObject)() = (SaleChest * (*)()) 0x8091e70;
inline void (*Enumerator15::ptr::_mark)() = (void (*)()) 0x8084820;
#endif
#endif
