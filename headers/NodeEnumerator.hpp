// Generated automatically. Do not edit!
#ifndef _NodeEnumerator_
#define _NodeEnumerator_
class Node22;
#include "Object.hpp"

class NodeEnumerator : public Object  {
public:
    Node22 * node;

    // Wrappers
    inline NodeEnumerator * _New(Node22 * arg1) { return ptr::_New(this, arg1); }
    inline NodeEnumerator * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::HasNext(this); }
    inline virtual Node22 * NextObject() { return ptr::NextObject(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static NodeEnumerator * (*_New)(NodeEnumerator * self, Node22 * arg1);
        static NodeEnumerator * (*_new2)();
        static bool (*HasNext)(NodeEnumerator * self);
        static Node22 * (*NextObject)(NodeEnumerator * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

NodeEnumerator * (*NodeEnumerator::ptr::_New)(NodeEnumerator * self, Node22 * arg1) = (NodeEnumerator * (*)(NodeEnumerator * self, Node22 * arg1)) 0x0;
NodeEnumerator * (*NodeEnumerator::ptr::_new2)() = (NodeEnumerator * (*)()) 0x0;
bool (*NodeEnumerator::ptr::HasNext)(NodeEnumerator * self) = (bool (*)(NodeEnumerator * self)) 0x453a30;
Node22 * (*NodeEnumerator::ptr::NextObject)(NodeEnumerator * self) = (Node22 * (*)(NodeEnumerator * self)) 0x5d6cd0;
void (*NodeEnumerator::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

NodeEnumerator * (*NodeEnumerator::ptr::_New)(NodeEnumerator * self, Node22 * arg1) = (NodeEnumerator * (*)(NodeEnumerator * self, Node22 * arg1)) 0x0;
NodeEnumerator * (*NodeEnumerator::ptr::_new2)() = (NodeEnumerator * (*)()) 0x8191140;
bool (*NodeEnumerator::ptr::HasNext)(NodeEnumerator * self) = (bool (*)(NodeEnumerator * self)) 0x8071c00;
Node22 * (*NodeEnumerator::ptr::NextObject)(NodeEnumerator * self) = (Node22 * (*)(NodeEnumerator * self)) 0x809d210;
void (*NodeEnumerator::ptr::_mark)() = (void (*)()) 0x808d9f0;
#endif
#endif
