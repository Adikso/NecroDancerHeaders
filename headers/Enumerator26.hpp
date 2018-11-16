// Generated automatically. Do not edit!
#ifndef _Enumerator26_
#define _Enumerator26_
class List43;
class NPC;
class Node63;
#include "Object.hpp"

class Enumerator26 : public Object  {
public:
    List43 * _list;
    Node63 * _curr;

    // Wrappers
    inline Enumerator26 * _New(List43 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator26 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual NPC * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator26 * (*_New)(Enumerator26 * self, List43 * arg1);
        static Enumerator26 * (*_new2)();
        static bool (*_HasNext)();
        static NPC * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Enumerator26 * (*Enumerator26::ptr::_New)(Enumerator26 * self, List43 * arg1) = (Enumerator26 * (*)(Enumerator26 * self, List43 * arg1)) 0x0;
inline Enumerator26 * (*Enumerator26::ptr::_new2)() = (Enumerator26 * (*)()) 0x0;
inline bool (*Enumerator26::ptr::_HasNext)() = (bool (*)()) 0x0;
inline NPC * (*Enumerator26::ptr::_NextObject)() = (NPC * (*)()) 0x0;
inline void (*Enumerator26::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Enumerator26 * (*Enumerator26::ptr::_New)(Enumerator26 * self, List43 * arg1) = (Enumerator26 * (*)(Enumerator26 * self, List43 * arg1)) 0x0;
inline Enumerator26 * (*Enumerator26::ptr::_new2)() = (Enumerator26 * (*)()) 0x81bce50;
inline bool (*Enumerator26::ptr::_HasNext)() = (bool (*)()) 0x8092080;
inline NPC * (*Enumerator26::ptr::_NextObject)() = (NPC * (*)()) 0x8092010;
inline void (*Enumerator26::ptr::_mark)() = (void (*)()) 0x8084fe0;
#endif
#endif
