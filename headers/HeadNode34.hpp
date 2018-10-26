// Generated automatically. Do not edit!
#ifndef _HeadNode34_
#define _HeadNode34_
#include "Node51.hpp"

class HeadNode34 : public Node51  {
public:

    // Wrappers
    inline HeadNode34 * _New() { return ptr::_New(); }
    inline Node51 * _GetNode() { return ptr::_GetNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode34 * (*_New)();
        static Node51 * (*_GetNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

HeadNode34 * (*HeadNode34::ptr::_New)() = (HeadNode34 * (*)()) 0x0;
Node51 * (*HeadNode34::ptr::_GetNode)() = (Node51 * (*)()) 0x0;
void (*HeadNode34::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

HeadNode34 * (*HeadNode34::ptr::_New)() = (HeadNode34 * (*)()) 0x81a9240;
Node51 * (*HeadNode34::ptr::_GetNode)() = (Node51 * (*)()) 0x0;
void (*HeadNode34::ptr::_mark)() = (void (*)()) 0x808a220;
#endif
#endif
