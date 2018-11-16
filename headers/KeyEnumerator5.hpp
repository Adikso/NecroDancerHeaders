// Generated automatically. Do not edit!
#ifndef _KeyEnumerator5_
#define _KeyEnumerator5_
class Node9;
#include "Object.hpp"

class KeyEnumerator5 : public Object  {
public:
    Node9 * node;

    // Wrappers
    inline KeyEnumerator5 * _New(Node9 * arg1) { return ptr::_New(this, arg1); }
    inline KeyEnumerator5 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual int NextObject() { return ptr::NextObject(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static KeyEnumerator5 * (*_New)(KeyEnumerator5 * self, Node9 * arg1);
        static KeyEnumerator5 * (*_new2)();
        static bool (*_HasNext)();
        static int (*NextObject)(KeyEnumerator5 * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline KeyEnumerator5 * (*KeyEnumerator5::ptr::_New)(KeyEnumerator5 * self, Node9 * arg1) = (KeyEnumerator5 * (*)(KeyEnumerator5 * self, Node9 * arg1)) 0x0;
inline KeyEnumerator5 * (*KeyEnumerator5::ptr::_new2)() = (KeyEnumerator5 * (*)()) 0x0;
inline bool (*KeyEnumerator5::ptr::_HasNext)() = (bool (*)()) 0x0;
inline int (*KeyEnumerator5::ptr::NextObject)(KeyEnumerator5 * self) = (int (*)(KeyEnumerator5 * self)) 0x6641a0;
inline void (*KeyEnumerator5::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline KeyEnumerator5 * (*KeyEnumerator5::ptr::_New)(KeyEnumerator5 * self, Node9 * arg1) = (KeyEnumerator5 * (*)(KeyEnumerator5 * self, Node9 * arg1)) 0x0;
inline KeyEnumerator5 * (*KeyEnumerator5::ptr::_new2)() = (KeyEnumerator5 * (*)()) 0x81d8060;
inline bool (*KeyEnumerator5::ptr::_HasNext)() = (bool (*)()) 0x8077910;
inline int (*KeyEnumerator5::ptr::NextObject)(KeyEnumerator5 * self) = (int (*)(KeyEnumerator5 * self)) 0x809c6f0;
inline void (*KeyEnumerator5::ptr::_mark)() = (void (*)()) 0x808e070;
#endif
#endif
