// Generated automatically. Do not edit!
#ifndef _NodeEnumerator3_
#define _NodeEnumerator3_
class Node41;
#include "Object.hpp"

class NodeEnumerator3 : public Object  {
public:
    Node41 * node;

    // Wrappers
    inline NodeEnumerator3 * _New(Node41 * arg1) { return ptr::_New(this, arg1); }
    inline NodeEnumerator3 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual Node41 * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static NodeEnumerator3 * (*_New)(NodeEnumerator3 * self, Node41 * arg1);
        static NodeEnumerator3 * (*_new2)();
        static bool (*_HasNext)();
        static Node41 * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

NodeEnumerator3 * (*NodeEnumerator3::ptr::_New)(NodeEnumerator3 * self, Node41 * arg1) = (NodeEnumerator3 * (*)(NodeEnumerator3 * self, Node41 * arg1)) 0x0;
NodeEnumerator3 * (*NodeEnumerator3::ptr::_new2)() = (NodeEnumerator3 * (*)()) 0x0;
bool (*NodeEnumerator3::ptr::_HasNext)() = (bool (*)()) 0x0;
Node41 * (*NodeEnumerator3::ptr::_NextObject)() = (Node41 * (*)()) 0x0;
void (*NodeEnumerator3::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

NodeEnumerator3 * (*NodeEnumerator3::ptr::_New)(NodeEnumerator3 * self, Node41 * arg1) = (NodeEnumerator3 * (*)(NodeEnumerator3 * self, Node41 * arg1)) 0x0;
NodeEnumerator3 * (*NodeEnumerator3::ptr::_new2)() = (NodeEnumerator3 * (*)()) 0x819d910;
bool (*NodeEnumerator3::ptr::_HasNext)() = (bool (*)()) 0x8073360;
Node41 * (*NodeEnumerator3::ptr::_NextObject)() = (Node41 * (*)()) 0x809fd30;
void (*NodeEnumerator3::ptr::_mark)() = (void (*)()) 0x808faf0;
#endif
#endif
