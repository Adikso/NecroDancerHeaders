// Generated automatically. Do not edit!
#ifndef _MapKeys2_
#define _MapKeys2_
class KeyEnumerator2;
class Map18;
#include "Object.hpp"

class MapKeys2 : public Object  {
public:
    Map18 * map;

    // Wrappers
    inline MapKeys2 * _New(Map18 * arg1) { return ptr::_New(this, arg1); }
    inline MapKeys2 * _new2() { return ptr::_new2(); }
    inline virtual KeyEnumerator2 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static MapKeys2 * (*_New)(MapKeys2 * self, Map18 * arg1);
        static MapKeys2 * (*_new2)();
        static KeyEnumerator2 * (*ObjectEnumerator)(MapKeys2 * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline MapKeys2 * (*MapKeys2::ptr::_New)(MapKeys2 * self, Map18 * arg1) = (MapKeys2 * (*)(MapKeys2 * self, Map18 * arg1)) 0x0;
inline MapKeys2 * (*MapKeys2::ptr::_new2)() = (MapKeys2 * (*)()) 0x0;
inline KeyEnumerator2 * (*MapKeys2::ptr::ObjectEnumerator)(MapKeys2 * self) = (KeyEnumerator2 * (*)(MapKeys2 * self)) 0x633050;
inline void (*MapKeys2::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline MapKeys2 * (*MapKeys2::ptr::_New)(MapKeys2 * self, Map18 * arg1) = (MapKeys2 * (*)(MapKeys2 * self, Map18 * arg1)) 0x81bc670;
inline MapKeys2 * (*MapKeys2::ptr::_new2)() = (MapKeys2 * (*)()) 0x81bc6d0;
inline KeyEnumerator2 * (*MapKeys2::ptr::ObjectEnumerator)(MapKeys2 * self) = (KeyEnumerator2 * (*)(MapKeys2 * self)) 0x80ba410;
inline void (*MapKeys2::ptr::_mark)() = (void (*)()) 0x8075bc0;
#endif
#endif
