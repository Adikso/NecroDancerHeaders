// Generated automatically. Do not edit!
#ifndef _MapKeys3_
#define _MapKeys3_
class KeyEnumerator3;
class Map7;
#include "Object.hpp"

class MapKeys3 : public Object  {
public:
    Map7 * map;

    // Wrappers
    inline MapKeys3 * _New(Map7 * arg1) { return ptr::_New(this, arg1); }
    inline MapKeys3 * _new2() { return ptr::_new2(); }
    inline virtual KeyEnumerator3 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static MapKeys3 * (*_New)(MapKeys3 * self, Map7 * arg1);
        static MapKeys3 * (*_new2)();
        static KeyEnumerator3 * (*ObjectEnumerator)(MapKeys3 * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline MapKeys3 * (*MapKeys3::ptr::_New)(MapKeys3 * self, Map7 * arg1) = (MapKeys3 * (*)(MapKeys3 * self, Map7 * arg1)) 0x0;
inline MapKeys3 * (*MapKeys3::ptr::_new2)() = (MapKeys3 * (*)()) 0x0;
inline KeyEnumerator3 * (*MapKeys3::ptr::ObjectEnumerator)(MapKeys3 * self) = (KeyEnumerator3 * (*)(MapKeys3 * self)) 0x638d10;
inline void (*MapKeys3::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline MapKeys3 * (*MapKeys3::ptr::_New)(MapKeys3 * self, Map7 * arg1) = (MapKeys3 * (*)(MapKeys3 * self, Map7 * arg1)) 0x81bf4a0;
inline MapKeys3 * (*MapKeys3::ptr::_new2)() = (MapKeys3 * (*)()) 0x81bf500;
inline KeyEnumerator3 * (*MapKeys3::ptr::ObjectEnumerator)(MapKeys3 * self) = (KeyEnumerator3 * (*)(MapKeys3 * self)) 0x80b70a0;
inline void (*MapKeys3::ptr::_mark)() = (void (*)()) 0x8075fe0;
#endif
#endif
