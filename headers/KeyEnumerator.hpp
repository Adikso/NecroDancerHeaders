// Generated automatically. Do not edit!
#ifndef _KeyEnumerator_
#define _KeyEnumerator_
class Node;
class String;
#include "Object.hpp"

class KeyEnumerator : public Object  {
public:
    Node * node;

    // Wrappers
    inline KeyEnumerator * _New(Node * arg1) { return ptr::_New(this, arg1); }
    inline KeyEnumerator * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual String * NextObject() { return ptr::NextObject(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static KeyEnumerator * (*_New)(KeyEnumerator * self, Node * arg1);
        static KeyEnumerator * (*_new2)();
        static bool (*_HasNext)();
        static String * (*NextObject)(KeyEnumerator * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline KeyEnumerator * (*KeyEnumerator::ptr::_New)(KeyEnumerator * self, Node * arg1) = (KeyEnumerator * (*)(KeyEnumerator * self, Node * arg1)) 0x0;
inline KeyEnumerator * (*KeyEnumerator::ptr::_new2)() = (KeyEnumerator * (*)()) 0x0;
inline bool (*KeyEnumerator::ptr::_HasNext)() = (bool (*)()) 0x0;
inline String * (*KeyEnumerator::ptr::NextObject)(KeyEnumerator * self) = (String * (*)(KeyEnumerator * self)) 0x453a40;
inline void (*KeyEnumerator::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline KeyEnumerator * (*KeyEnumerator::ptr::_New)(KeyEnumerator * self, Node * arg1) = (KeyEnumerator * (*)(KeyEnumerator * self, Node * arg1)) 0x8128110;
inline KeyEnumerator * (*KeyEnumerator::ptr::_new2)() = (KeyEnumerator * (*)()) 0x8128170;
inline bool (*KeyEnumerator::ptr::_HasNext)() = (bool (*)()) 0x806dd70;
inline String * (*KeyEnumerator::ptr::NextObject)(KeyEnumerator * self) = (String * (*)(KeyEnumerator * self)) 0x809e960;
inline void (*KeyEnumerator::ptr::_mark)() = (void (*)()) 0x808ea50;
#endif
#endif
