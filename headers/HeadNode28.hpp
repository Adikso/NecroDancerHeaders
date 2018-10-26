// Generated automatically. Do not edit!
#ifndef _HeadNode28_
#define _HeadNode28_
#include "Node45.hpp"

class HeadNode28 : public Node45  {
public:

    // Wrappers
    inline HeadNode28 * _New() { return ptr::_New(); }
    inline Node45 * _GetNode() { return ptr::_GetNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode28 * (*_New)();
        static Node45 * (*_GetNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

HeadNode28 * (*HeadNode28::ptr::_New)() = (HeadNode28 * (*)()) 0x0;
Node45 * (*HeadNode28::ptr::_GetNode)() = (Node45 * (*)()) 0x0;
void (*HeadNode28::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

HeadNode28 * (*HeadNode28::ptr::_New)() = (HeadNode28 * (*)()) 0x81a08b0;
Node45 * (*HeadNode28::ptr::_GetNode)() = (Node45 * (*)()) 0x8073900;
void (*HeadNode28::ptr::_mark)() = (void (*)()) 0x808a4e0;
#endif
#endif
