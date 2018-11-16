// Generated automatically. Do not edit!
#ifndef _Enumerator17_
#define _Enumerator17_
class List34;
class Node51;
class SoulFamiliar;
#include "Object.hpp"

class Enumerator17 : public Object  {
public:
    List34 * _list;
    Node51 * _curr;

    // Wrappers
    inline Enumerator17 * _New(List34 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator17 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual SoulFamiliar * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator17 * (*_New)(Enumerator17 * self, List34 * arg1);
        static Enumerator17 * (*_new2)();
        static bool (*_HasNext)();
        static SoulFamiliar * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Enumerator17 * (*Enumerator17::ptr::_New)(Enumerator17 * self, List34 * arg1) = (Enumerator17 * (*)(Enumerator17 * self, List34 * arg1)) 0x0;
inline Enumerator17 * (*Enumerator17::ptr::_new2)() = (Enumerator17 * (*)()) 0x0;
inline bool (*Enumerator17::ptr::_HasNext)() = (bool (*)()) 0x0;
inline SoulFamiliar * (*Enumerator17::ptr::_NextObject)() = (SoulFamiliar * (*)()) 0x0;
inline void (*Enumerator17::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Enumerator17 * (*Enumerator17::ptr::_New)(Enumerator17 * self, List34 * arg1) = (Enumerator17 * (*)(Enumerator17 * self, List34 * arg1)) 0x81a9370;
inline Enumerator17 * (*Enumerator17::ptr::_new2)() = (Enumerator17 * (*)()) 0x81a9420;
inline bool (*Enumerator17::ptr::_HasNext)() = (bool (*)()) 0x8092430;
inline SoulFamiliar * (*Enumerator17::ptr::_NextObject)() = (SoulFamiliar * (*)()) 0x80923c0;
inline void (*Enumerator17::ptr::_mark)() = (void (*)()) 0x8084640;
#endif
#endif
