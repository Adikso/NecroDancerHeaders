// Generated automatically. Do not edit!
#ifndef _NodeEnumerator6_
#define _NodeEnumerator6_
class Node4;
#include "Object.hpp"

class NodeEnumerator6 : public Object  {
public:
    Node4 * node;

    // Wrappers
    inline NodeEnumerator6 * _New(Node4 * arg1) { return ptr::_New(this, arg1); }
    inline NodeEnumerator6 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual Node4 * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static NodeEnumerator6 * (*_New)(NodeEnumerator6 * self, Node4 * arg1);
        static NodeEnumerator6 * (*_new2)();
        static bool (*_HasNext)();
        static Node4 * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

NodeEnumerator6 * (*NodeEnumerator6::ptr::_New)(NodeEnumerator6 * self, Node4 * arg1) = (NodeEnumerator6 * (*)(NodeEnumerator6 * self, Node4 * arg1)) 0x0;
NodeEnumerator6 * (*NodeEnumerator6::ptr::_new2)() = (NodeEnumerator6 * (*)()) 0x0;
bool (*NodeEnumerator6::ptr::_HasNext)() = (bool (*)()) 0x0;
Node4 * (*NodeEnumerator6::ptr::_NextObject)() = (Node4 * (*)()) 0x0;
void (*NodeEnumerator6::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

NodeEnumerator6 * (*NodeEnumerator6::ptr::_New)(NodeEnumerator6 * self, Node4 * arg1) = (NodeEnumerator6 * (*)(NodeEnumerator6 * self, Node4 * arg1)) 0x0;
NodeEnumerator6 * (*NodeEnumerator6::ptr::_new2)() = (NodeEnumerator6 * (*)()) 0x81e04b0;
bool (*NodeEnumerator6::ptr::_HasNext)() = (bool (*)()) 0x8078a70;
Node4 * (*NodeEnumerator6::ptr::_NextObject)() = (Node4 * (*)()) 0x809f790;
void (*NodeEnumerator6::ptr::_mark)() = (void (*)()) 0x808dcb0;
#endif
#endif
