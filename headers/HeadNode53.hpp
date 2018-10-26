// Generated automatically. Do not edit!
#ifndef _HeadNode53_
#define _HeadNode53_
#include "Node73.hpp"

class HeadNode53 : public Node73  {
public:

    // Wrappers
    inline HeadNode53 * _New() { return ptr::_New(); }
    inline Node73 * _GetNode() { return ptr::_GetNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode53 * (*_New)();
        static Node73 * (*_GetNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

HeadNode53 * (*HeadNode53::ptr::_New)() = (HeadNode53 * (*)()) 0x0;
Node73 * (*HeadNode53::ptr::_GetNode)() = (Node73 * (*)()) 0x0;
void (*HeadNode53::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

HeadNode53 * (*HeadNode53::ptr::_New)() = (HeadNode53 * (*)()) 0x81d9e20;
Node73 * (*HeadNode53::ptr::_GetNode)() = (Node73 * (*)()) 0x0;
void (*HeadNode53::ptr::_mark)() = (void (*)()) 0x8088b40;
#endif
#endif
