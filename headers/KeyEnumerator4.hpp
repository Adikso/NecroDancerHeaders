// Generated automatically. Do not edit!
#ifndef _KeyEnumerator4_
#define _KeyEnumerator4_
class Node63;
class Point;
#include "Object.hpp"

class KeyEnumerator4 : public Object  {
public:
    Node63 * node;

    // Wrappers
    inline KeyEnumerator4 * _New(Node63 * arg1) { return ptr::_New(this, arg1); }
    inline KeyEnumerator4 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual Point * NextObject() { return ptr::NextObject(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static KeyEnumerator4 * (*_New)(KeyEnumerator4 * self, Node63 * arg1);
        static KeyEnumerator4 * (*_new2)();
        static bool (*_HasNext)();
        static Point * (*NextObject)(KeyEnumerator4 * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline KeyEnumerator4 * (*KeyEnumerator4::ptr::_New)(KeyEnumerator4 * self, Node63 * arg1) = (KeyEnumerator4 * (*)(KeyEnumerator4 * self, Node63 * arg1)) 0x0;
inline KeyEnumerator4 * (*KeyEnumerator4::ptr::_new2)() = (KeyEnumerator4 * (*)()) 0x0;
inline bool (*KeyEnumerator4::ptr::_HasNext)() = (bool (*)()) 0x0;
inline Point * (*KeyEnumerator4::ptr::NextObject)(KeyEnumerator4 * self) = (Point * (*)(KeyEnumerator4 * self)) 0x633130;
inline void (*KeyEnumerator4::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline KeyEnumerator4 * (*KeyEnumerator4::ptr::_New)(KeyEnumerator4 * self, Node63 * arg1) = (KeyEnumerator4 * (*)(KeyEnumerator4 * self, Node63 * arg1)) 0x0;
inline KeyEnumerator4 * (*KeyEnumerator4::ptr::_new2)() = (KeyEnumerator4 * (*)()) 0x81d48c0;
inline bool (*KeyEnumerator4::ptr::_HasNext)() = (bool (*)()) 0x8076bc0;
inline Point * (*KeyEnumerator4::ptr::NextObject)(KeyEnumerator4 * self) = (Point * (*)(KeyEnumerator4 * self)) 0x809b620;
inline void (*KeyEnumerator4::ptr::_mark)() = (void (*)()) 0x808e1c0;
#endif
#endif
