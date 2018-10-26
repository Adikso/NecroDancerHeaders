// Generated automatically. Do not edit!
#ifndef _HeadNode4_
#define _HeadNode4_
#include "Node8.hpp"

class HeadNode4 : public Node8  {
public:

    // Wrappers
    inline HeadNode4 * _New() { return ptr::_New(); }
    inline Node8 * _GetNode() { return ptr::_GetNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode4 * (*_New)();
        static Node8 * (*_GetNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

HeadNode4 * (*HeadNode4::ptr::_New)() = (HeadNode4 * (*)()) 0x0;
Node8 * (*HeadNode4::ptr::_GetNode)() = (Node8 * (*)()) 0x0;
void (*HeadNode4::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

HeadNode4 * (*HeadNode4::ptr::_New)() = (HeadNode4 * (*)()) 0x8151260;
Node8 * (*HeadNode4::ptr::_GetNode)() = (Node8 * (*)()) 0x806f780;
void (*HeadNode4::ptr::_mark)() = (void (*)()) 0x808b8c0;
#endif
#endif
