// Generated automatically. Do not edit!
#ifndef _NodeEnumerator4_
#define _NodeEnumerator4_
class Node36;
#include "Object.hpp"

class NodeEnumerator4 : public Object  {
public:
    Node36 * node;

    // Wrappers
    inline NodeEnumerator4 * _New(Node36 * arg1) { return ptr::_New(this, arg1); }
    inline NodeEnumerator4 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual Node36 * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static NodeEnumerator4 * (*_New)(NodeEnumerator4 * self, Node36 * arg1);
        static NodeEnumerator4 * (*_new2)();
        static bool (*_HasNext)();
        static Node36 * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

NodeEnumerator4 * (*NodeEnumerator4::ptr::_New)(NodeEnumerator4 * self, Node36 * arg1) = (NodeEnumerator4 * (*)(NodeEnumerator4 * self, Node36 * arg1)) 0x0;
NodeEnumerator4 * (*NodeEnumerator4::ptr::_new2)() = (NodeEnumerator4 * (*)()) 0x0;
bool (*NodeEnumerator4::ptr::_HasNext)() = (bool (*)()) 0x0;
Node36 * (*NodeEnumerator4::ptr::_NextObject)() = (Node36 * (*)()) 0x0;
void (*NodeEnumerator4::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

NodeEnumerator4 * (*NodeEnumerator4::ptr::_New)(NodeEnumerator4 * self, Node36 * arg1) = (NodeEnumerator4 * (*)(NodeEnumerator4 * self, Node36 * arg1)) 0x0;
NodeEnumerator4 * (*NodeEnumerator4::ptr::_new2)() = (NodeEnumerator4 * (*)()) 0x81be3d0;
bool (*NodeEnumerator4::ptr::_HasNext)() = (bool (*)()) 0x8075dc0;
Node36 * (*NodeEnumerator4::ptr::_NextObject)() = (Node36 * (*)()) 0x809c150;
void (*NodeEnumerator4::ptr::_mark)() = (void (*)()) 0x808d8a0;
#endif
#endif
