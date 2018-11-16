// Generated automatically. Do not edit!
#ifndef _Enumerator22_
#define _Enumerator22_
class List38;
class MinibossTileData;
class Node56;
#include "Object.hpp"

class Enumerator22 : public Object  {
public:
    List38 * _list;
    Node56 * _curr;

    // Wrappers
    inline Enumerator22 * _New(List38 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator22 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual MinibossTileData * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator22 * (*_New)(Enumerator22 * self, List38 * arg1);
        static Enumerator22 * (*_new2)();
        static bool (*_HasNext)();
        static MinibossTileData * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Enumerator22 * (*Enumerator22::ptr::_New)(Enumerator22 * self, List38 * arg1) = (Enumerator22 * (*)(Enumerator22 * self, List38 * arg1)) 0x0;
inline Enumerator22 * (*Enumerator22::ptr::_new2)() = (Enumerator22 * (*)()) 0x0;
inline bool (*Enumerator22::ptr::_HasNext)() = (bool (*)()) 0x0;
inline MinibossTileData * (*Enumerator22::ptr::_NextObject)() = (MinibossTileData * (*)()) 0x0;
inline void (*Enumerator22::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Enumerator22 * (*Enumerator22::ptr::_New)(Enumerator22 * self, List38 * arg1) = (Enumerator22 * (*)(Enumerator22 * self, List38 * arg1)) 0x81b8410;
inline Enumerator22 * (*Enumerator22::ptr::_new2)() = (Enumerator22 * (*)()) 0x81b84c0;
inline bool (*Enumerator22::ptr::_HasNext)() = (bool (*)()) 0x80911e0;
inline MinibossTileData * (*Enumerator22::ptr::_NextObject)() = (MinibossTileData * (*)()) 0x8090fd0;
inline void (*Enumerator22::ptr::_mark)() = (void (*)()) 0x8084a00;
#endif
#endif
