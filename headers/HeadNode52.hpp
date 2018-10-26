// Generated automatically. Do not edit!
#ifndef _HeadNode52_
#define _HeadNode52_
#include "Node42.hpp"

class HeadNode52 : public Node42  {
public:

    // Wrappers
    inline HeadNode52 * New() { return ptr::New(this); }
    inline Node42 * _GetNode() { return ptr::_GetNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode52 * (*New)(HeadNode52 * self);
        static Node42 * (*_GetNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

HeadNode52 * (*HeadNode52::ptr::New)(HeadNode52 * self) = (HeadNode52 * (*)(HeadNode52 * self)) 0x663e80;
Node42 * (*HeadNode52::ptr::_GetNode)() = (Node42 * (*)()) 0x0;
void (*HeadNode52::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

HeadNode52 * (*HeadNode52::ptr::New)(HeadNode52 * self) = (HeadNode52 * (*)(HeadNode52 * self)) 0x81d7ae0;
Node42 * (*HeadNode52::ptr::_GetNode)() = (Node42 * (*)()) 0x80778a0;
void (*HeadNode52::ptr::_mark)() = (void (*)()) 0x808bf80;
#endif
#endif
