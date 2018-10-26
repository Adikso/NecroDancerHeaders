// Generated automatically. Do not edit!
#ifndef _KeyEnumerator2_
#define _KeyEnumerator2_
class Node60;
class Point;
#include "Object.hpp"

class KeyEnumerator2 : public Object  {
public:
    Node60 * node;

    // Wrappers
    inline KeyEnumerator2 * _New(Node60 * arg1) { return ptr::_New(this, arg1); }
    inline KeyEnumerator2 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual Point * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static KeyEnumerator2 * (*_New)(KeyEnumerator2 * self, Node60 * arg1);
        static KeyEnumerator2 * (*_new2)();
        static bool (*_HasNext)();
        static Point * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

KeyEnumerator2 * (*KeyEnumerator2::ptr::_New)(KeyEnumerator2 * self, Node60 * arg1) = (KeyEnumerator2 * (*)(KeyEnumerator2 * self, Node60 * arg1)) 0x0;
KeyEnumerator2 * (*KeyEnumerator2::ptr::_new2)() = (KeyEnumerator2 * (*)()) 0x0;
bool (*KeyEnumerator2::ptr::_HasNext)() = (bool (*)()) 0x0;
Point * (*KeyEnumerator2::ptr::_NextObject)() = (Point * (*)()) 0x0;
void (*KeyEnumerator2::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

KeyEnumerator2 * (*KeyEnumerator2::ptr::_New)(KeyEnumerator2 * self, Node60 * arg1) = (KeyEnumerator2 * (*)(KeyEnumerator2 * self, Node60 * arg1)) 0x0;
KeyEnumerator2 * (*KeyEnumerator2::ptr::_new2)() = (KeyEnumerator2 * (*)()) 0x81bc760;
bool (*KeyEnumerator2::ptr::_HasNext)() = (bool (*)()) 0x8075c20;
Point * (*KeyEnumerator2::ptr::_NextObject)() = (Point * (*)()) 0x809cc80;
void (*KeyEnumerator2::ptr::_mark)() = (void (*)()) 0x808d7e0;
#endif
#endif
