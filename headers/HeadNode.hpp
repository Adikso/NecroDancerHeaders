// Generated automatically. Do not edit!
#ifndef _HeadNode_
#define _HeadNode_
#include "Node2.hpp"

class HeadNode : public Node2  {
public:

    // Wrappers
    inline HeadNode * New() { return ptr::New(this); }
    inline Node2 * _GetNode() { return ptr::_GetNode(); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static HeadNode * (*New)(HeadNode * self);
        static Node2 * (*_GetNode)();
        static void (*mark)(HeadNode * self);
    };
};

#ifdef _WIN32

HeadNode * (*HeadNode::ptr::New)(HeadNode * self) = (HeadNode * (*)(HeadNode * self)) 0x4541f0;
Node2 * (*HeadNode::ptr::_GetNode)() = (Node2 * (*)()) 0x0;
void (*HeadNode::ptr::mark)(HeadNode * self) = (void (*)(HeadNode * self)) 0x454290;
#endif

#ifdef __linux__

HeadNode * (*HeadNode::ptr::New)(HeadNode * self) = (HeadNode * (*)(HeadNode * self)) 0x81283f0;
Node2 * (*HeadNode::ptr::_GetNode)() = (Node2 * (*)()) 0x806df10;
void (*HeadNode::ptr::mark)(HeadNode * self) = (void (*)(HeadNode * self)) 0x808e480;
#endif
#endif
