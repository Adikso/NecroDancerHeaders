// Generated automatically. Do not edit!
#ifndef _MapKeys5_
#define _MapKeys5_
class KeyEnumerator5;
class Map5;
#include "Object.hpp"

class MapKeys5 : public Object  {
public:
    Map5 * map;

    // Wrappers
    inline MapKeys5 * _New(Map5 * arg1) { return ptr::_New(this, arg1); }
    inline MapKeys5 * _new2() { return ptr::_new2(); }
    inline virtual KeyEnumerator5 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static MapKeys5 * (*_New)(MapKeys5 * self, Map5 * arg1);
        static MapKeys5 * (*_new2)();
        static KeyEnumerator5 * (*ObjectEnumerator)(MapKeys5 * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

MapKeys5 * (*MapKeys5::ptr::_New)(MapKeys5 * self, Map5 * arg1) = (MapKeys5 * (*)(MapKeys5 * self, Map5 * arg1)) 0x0;
MapKeys5 * (*MapKeys5::ptr::_new2)() = (MapKeys5 * (*)()) 0x0;
KeyEnumerator5 * (*MapKeys5::ptr::ObjectEnumerator)(MapKeys5 * self) = (KeyEnumerator5 * (*)(MapKeys5 * self)) 0x6640c0;
void (*MapKeys5::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

MapKeys5 * (*MapKeys5::ptr::_New)(MapKeys5 * self, Map5 * arg1) = (MapKeys5 * (*)(MapKeys5 * self, Map5 * arg1)) 0x81d7f70;
MapKeys5 * (*MapKeys5::ptr::_new2)() = (MapKeys5 * (*)()) 0x81d7fd0;
KeyEnumerator5 * (*MapKeys5::ptr::ObjectEnumerator)(MapKeys5 * self) = (KeyEnumerator5 * (*)(MapKeys5 * self)) 0x80b6870;
void (*MapKeys5::ptr::_mark)() = (void (*)()) 0x80778b0;
#endif
#endif
