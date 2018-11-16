// Generated automatically. Do not edit!
#ifndef _MapKeys_
#define _MapKeys_
class KeyEnumerator;
class Map;
#include "Object.hpp"

class MapKeys : public Object  {
public:
    Map * map;

    // Wrappers
    inline MapKeys * _New(Map * arg1) { return ptr::_New(this, arg1); }
    inline MapKeys * _new2() { return ptr::_new2(); }
    inline virtual KeyEnumerator * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static MapKeys * (*_New)(MapKeys * self, Map * arg1);
        static MapKeys * (*_new2)();
        static KeyEnumerator * (*ObjectEnumerator)(MapKeys * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline MapKeys * (*MapKeys::ptr::_New)(MapKeys * self, Map * arg1) = (MapKeys * (*)(MapKeys * self, Map * arg1)) 0x0;
inline MapKeys * (*MapKeys::ptr::_new2)() = (MapKeys * (*)()) 0x0;
inline KeyEnumerator * (*MapKeys::ptr::ObjectEnumerator)(MapKeys * self) = (KeyEnumerator * (*)(MapKeys * self)) 0x453950;
inline void (*MapKeys::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline MapKeys * (*MapKeys::ptr::_New)(MapKeys * self, Map * arg1) = (MapKeys * (*)(MapKeys * self, Map * arg1)) 0x8128080;
inline MapKeys * (*MapKeys::ptr::_new2)() = (MapKeys * (*)()) 0x81280e0;
inline KeyEnumerator * (*MapKeys::ptr::ObjectEnumerator)(MapKeys * self) = (KeyEnumerator * (*)(MapKeys * self)) 0x80b5c30;
inline void (*MapKeys::ptr::_mark)() = (void (*)()) 0x806dd10;
#endif
#endif
