// Generated automatically. Do not edit!
#ifndef _KeyEnumerator3_
#define _KeyEnumerator3_
class Node16;
class String;
#include "Object.hpp"

class KeyEnumerator3 : public Object  {
public:
    Node16 * node;

    // Wrappers
    inline KeyEnumerator3 * _New(Node16 * arg1) { return ptr::_New(this, arg1); }
    inline KeyEnumerator3 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual String * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static KeyEnumerator3 * (*_New)(KeyEnumerator3 * self, Node16 * arg1);
        static KeyEnumerator3 * (*_new2)();
        static bool (*_HasNext)();
        static String * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline KeyEnumerator3 * (*KeyEnumerator3::ptr::_New)(KeyEnumerator3 * self, Node16 * arg1) = (KeyEnumerator3 * (*)(KeyEnumerator3 * self, Node16 * arg1)) 0x0;
inline KeyEnumerator3 * (*KeyEnumerator3::ptr::_new2)() = (KeyEnumerator3 * (*)()) 0x0;
inline bool (*KeyEnumerator3::ptr::_HasNext)() = (bool (*)()) 0x0;
inline String * (*KeyEnumerator3::ptr::_NextObject)() = (String * (*)()) 0x0;
inline void (*KeyEnumerator3::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline KeyEnumerator3 * (*KeyEnumerator3::ptr::_New)(KeyEnumerator3 * self, Node16 * arg1) = (KeyEnumerator3 * (*)(KeyEnumerator3 * self, Node16 * arg1)) 0x0;
inline KeyEnumerator3 * (*KeyEnumerator3::ptr::_new2)() = (KeyEnumerator3 * (*)()) 0x81bf590;
inline bool (*KeyEnumerator3::ptr::_HasNext)() = (bool (*)()) 0x8076040;
inline String * (*KeyEnumerator3::ptr::_NextObject)() = (String * (*)()) 0x80a02d0;
inline void (*KeyEnumerator3::ptr::_mark)() = (void (*)()) 0x808d3d0;
#endif
#endif
