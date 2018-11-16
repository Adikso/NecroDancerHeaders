// Generated automatically. Do not edit!
#ifndef _MapKeys4_
#define _MapKeys4_
class KeyEnumerator4;
class Map19;
#include "Object.hpp"

class MapKeys4 : public Object  {
public:
    Map19 * map;

    // Wrappers
    inline MapKeys4 * _New(Map19 * arg1) { return ptr::_New(this, arg1); }
    inline MapKeys4 * _new2() { return ptr::_new2(); }
    inline virtual KeyEnumerator4 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static MapKeys4 * (*_New)(MapKeys4 * self, Map19 * arg1);
        static MapKeys4 * (*_new2)();
        static KeyEnumerator4 * (*ObjectEnumerator)(MapKeys4 * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline MapKeys4 * (*MapKeys4::ptr::_New)(MapKeys4 * self, Map19 * arg1) = (MapKeys4 * (*)(MapKeys4 * self, Map19 * arg1)) 0x0;
inline MapKeys4 * (*MapKeys4::ptr::_new2)() = (MapKeys4 * (*)()) 0x0;
inline KeyEnumerator4 * (*MapKeys4::ptr::ObjectEnumerator)(MapKeys4 * self) = (KeyEnumerator4 * (*)(MapKeys4 * self)) 0x65f420;
inline void (*MapKeys4::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline MapKeys4 * (*MapKeys4::ptr::_New)(MapKeys4 * self, Map19 * arg1) = (MapKeys4 * (*)(MapKeys4 * self, Map19 * arg1)) 0x81d48f0;
inline MapKeys4 * (*MapKeys4::ptr::_new2)() = (MapKeys4 * (*)()) 0x81d4950;
inline KeyEnumerator4 * (*MapKeys4::ptr::ObjectEnumerator)(MapKeys4 * self) = (KeyEnumerator4 * (*)(MapKeys4 * self)) 0x80baab0;
inline void (*MapKeys4::ptr::_mark)() = (void (*)()) 0x8084bb0;
#endif
#endif
