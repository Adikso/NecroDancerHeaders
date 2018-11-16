// Generated automatically. Do not edit!
#ifndef _Enumerator27_
#define _Enumerator27_
class List44;
class NPC;
class Node64;
#include "Object.hpp"

class Enumerator27 : public Object  {
public:
    List44 * _list;
    Node64 * _curr;

    // Wrappers
    inline Enumerator27 * _New(List44 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator27 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual NPC * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator27 * (*_New)(Enumerator27 * self, List44 * arg1);
        static Enumerator27 * (*_new2)();
        static bool (*_HasNext)();
        static NPC * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Enumerator27 * (*Enumerator27::ptr::_New)(Enumerator27 * self, List44 * arg1) = (Enumerator27 * (*)(Enumerator27 * self, List44 * arg1)) 0x0;
inline Enumerator27 * (*Enumerator27::ptr::_new2)() = (Enumerator27 * (*)()) 0x0;
inline bool (*Enumerator27::ptr::_HasNext)() = (bool (*)()) 0x0;
inline NPC * (*Enumerator27::ptr::_NextObject)() = (NPC * (*)()) 0x0;
inline void (*Enumerator27::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Enumerator27 * (*Enumerator27::ptr::_New)(Enumerator27 * self, List44 * arg1) = (Enumerator27 * (*)(Enumerator27 * self, List44 * arg1)) 0x0;
inline Enumerator27 * (*Enumerator27::ptr::_new2)() = (Enumerator27 * (*)()) 0x81be4b0;
inline bool (*Enumerator27::ptr::_HasNext)() = (bool (*)()) 0x8094e20;
inline NPC * (*Enumerator27::ptr::_NextObject)() = (NPC * (*)()) 0x8094db0;
inline void (*Enumerator27::ptr::_mark)() = (void (*)()) 0x8090210;
#endif
#endif
