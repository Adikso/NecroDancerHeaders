// Generated automatically. Do not edit!
#ifndef _NodeEnumerator2_
#define _NodeEnumerator2_
class Node23;
#include "Object.hpp"

class NodeEnumerator2 : public Object  {
public:
    Node23 * node;

    // Wrappers
    inline NodeEnumerator2 * _New(Node23 * arg1) { return ptr::_New(this, arg1); }
    inline NodeEnumerator2 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual Node23 * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static NodeEnumerator2 * (*_New)(NodeEnumerator2 * self, Node23 * arg1);
        static NodeEnumerator2 * (*_new2)();
        static bool (*_HasNext)();
        static Node23 * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline NodeEnumerator2 * (*NodeEnumerator2::ptr::_New)(NodeEnumerator2 * self, Node23 * arg1) = (NodeEnumerator2 * (*)(NodeEnumerator2 * self, Node23 * arg1)) 0x0;
inline NodeEnumerator2 * (*NodeEnumerator2::ptr::_new2)() = (NodeEnumerator2 * (*)()) 0x0;
inline bool (*NodeEnumerator2::ptr::_HasNext)() = (bool (*)()) 0x0;
inline Node23 * (*NodeEnumerator2::ptr::_NextObject)() = (Node23 * (*)()) 0x0;
inline void (*NodeEnumerator2::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline NodeEnumerator2 * (*NodeEnumerator2::ptr::_New)(NodeEnumerator2 * self, Node23 * arg1) = (NodeEnumerator2 * (*)(NodeEnumerator2 * self, Node23 * arg1)) 0x0;
inline NodeEnumerator2 * (*NodeEnumerator2::ptr::_new2)() = (NodeEnumerator2 * (*)()) 0x81912e0;
inline bool (*NodeEnumerator2::ptr::_HasNext)() = (bool (*)()) 0x8071c70;
inline Node23 * (*NodeEnumerator2::ptr::_NextObject)() = (Node23 * (*)()) 0x809ef10;
inline void (*NodeEnumerator2::ptr::_mark)() = (void (*)()) 0x808d580;
#endif
#endif
