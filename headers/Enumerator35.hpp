// Generated automatically. Do not edit!
#ifndef _Enumerator35_
#define _Enumerator35_
class EnemyObject;
class List17;
class Node27;
#include "Object.hpp"

class Enumerator35 : public Object  {
public:
    List17 * _list;
    Node27 * _curr;

    // Wrappers
    inline Enumerator35 * _New(List17 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator35 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual EnemyObject * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator35 * (*_New)(Enumerator35 * self, List17 * arg1);
        static Enumerator35 * (*_new2)();
        static bool (*_HasNext)();
        static EnemyObject * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Enumerator35 * (*Enumerator35::ptr::_New)(Enumerator35 * self, List17 * arg1) = (Enumerator35 * (*)(Enumerator35 * self, List17 * arg1)) 0x0;
inline Enumerator35 * (*Enumerator35::ptr::_new2)() = (Enumerator35 * (*)()) 0x0;
inline bool (*Enumerator35::ptr::_HasNext)() = (bool (*)()) 0x0;
inline EnemyObject * (*Enumerator35::ptr::_NextObject)() = (EnemyObject * (*)()) 0x0;
inline void (*Enumerator35::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Enumerator35 * (*Enumerator35::ptr::_New)(Enumerator35 * self, List17 * arg1) = (Enumerator35 * (*)(Enumerator35 * self, List17 * arg1)) 0x0;
inline Enumerator35 * (*Enumerator35::ptr::_new2)() = (Enumerator35 * (*)()) 0x81d4110;
inline bool (*Enumerator35::ptr::_HasNext)() = (bool (*)()) 0x808edb0;
inline EnemyObject * (*Enumerator35::ptr::_NextObject)() = (EnemyObject * (*)()) 0x808ed40;
inline void (*Enumerator35::ptr::_mark)() = (void (*)()) 0x8089d70;
#endif
#endif
