// Generated automatically. Do not edit!
#ifndef _HeadNode46_
#define _HeadNode46_
#include "Node66.hpp"

class HeadNode46 : public Node66  {
public:

    // Wrappers
    inline HeadNode46 * _New() { return ptr::_New(); }
    inline Node66 * _GetNode() { return ptr::_GetNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode46 * (*_New)();
        static Node66 * (*_GetNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

HeadNode46 * (*HeadNode46::ptr::_New)() = (HeadNode46 * (*)()) 0x0;
Node66 * (*HeadNode46::ptr::_GetNode)() = (Node66 * (*)()) 0x0;
void (*HeadNode46::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

HeadNode46 * (*HeadNode46::ptr::_New)() = (HeadNode46 * (*)()) 0x81be0a0;
Node66 * (*HeadNode46::ptr::_GetNode)() = (Node66 * (*)()) 0x8075da0;
void (*HeadNode46::ptr::_mark)() = (void (*)()) 0x8087340;
#endif
#endif
