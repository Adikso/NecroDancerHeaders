// Generated automatically. Do not edit!
#ifndef _HeadNode40_
#define _HeadNode40_
#include "Node58.hpp"

class HeadNode40 : public Node58  {
public:

    // Wrappers
    inline HeadNode40 * _New() { return ptr::_New(); }
    inline Node58 * _GetNode() { return ptr::_GetNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode40 * (*_New)();
        static Node58 * (*_GetNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

HeadNode40 * (*HeadNode40::ptr::_New)() = (HeadNode40 * (*)()) 0x0;
Node58 * (*HeadNode40::ptr::_GetNode)() = (Node58 * (*)()) 0x0;
void (*HeadNode40::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

HeadNode40 * (*HeadNode40::ptr::_New)() = (HeadNode40 * (*)()) 0x81b9aa0;
Node58 * (*HeadNode40::ptr::_GetNode)() = (Node58 * (*)()) 0x80750f0;
void (*HeadNode40::ptr::_mark)() = (void (*)()) 0x8086de0;
#endif
#endif
