// Generated automatically. Do not edit!
#ifndef _Enumerator47_
#define _Enumerator47_
class List27;
class Node44;
class SoundData;
#include "Object.hpp"

class Enumerator47 : public Object  {
public:
    List27 * _list;
    Node44 * _curr;

    // Wrappers
    inline Enumerator47 * _New(List27 * arg1) { return ptr::_New(this, arg1); }
    inline Enumerator47 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual SoundData * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Enumerator47 * (*_New)(Enumerator47 * self, List27 * arg1);
        static Enumerator47 * (*_new2)();
        static bool (*_HasNext)();
        static SoundData * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Enumerator47 * (*Enumerator47::ptr::_New)(Enumerator47 * self, List27 * arg1) = (Enumerator47 * (*)(Enumerator47 * self, List27 * arg1)) 0x0;
Enumerator47 * (*Enumerator47::ptr::_new2)() = (Enumerator47 * (*)()) 0x0;
bool (*Enumerator47::ptr::_HasNext)() = (bool (*)()) 0x0;
SoundData * (*Enumerator47::ptr::_NextObject)() = (SoundData * (*)()) 0x0;
void (*Enumerator47::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Enumerator47 * (*Enumerator47::ptr::_New)(Enumerator47 * self, List27 * arg1) = (Enumerator47 * (*)(Enumerator47 * self, List27 * arg1)) 0x0;
Enumerator47 * (*Enumerator47::ptr::_new2)() = (Enumerator47 * (*)()) 0x81e5380;
bool (*Enumerator47::ptr::_HasNext)() = (bool (*)()) 0x808f170;
SoundData * (*Enumerator47::ptr::_NextObject)() = (SoundData * (*)()) 0x808f100;
void (*Enumerator47::ptr::_mark)() = (void (*)()) 0x8089310;
#endif
#endif
