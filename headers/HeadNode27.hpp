// Generated automatically. Do not edit!
#ifndef _HeadNode27_
#define _HeadNode27_
#include "Node44.hpp"

class HeadNode27 : public Node44  {
public:

    // Wrappers
    inline HeadNode27 * _New() { return ptr::_New(); }
    inline Node44 * _GetNode() { return ptr::_GetNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode27 * (*_New)();
        static Node44 * (*_GetNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

HeadNode27 * (*HeadNode27::ptr::_New)() = (HeadNode27 * (*)()) 0x0;
Node44 * (*HeadNode27::ptr::_GetNode)() = (Node44 * (*)()) 0x0;
void (*HeadNode27::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

HeadNode27 * (*HeadNode27::ptr::_New)() = (HeadNode27 * (*)()) 0x81a04f0;
Node44 * (*HeadNode27::ptr::_GetNode)() = (Node44 * (*)()) 0x0;
void (*HeadNode27::ptr::_mark)() = (void (*)()) 0x8087f00;
#endif
#endif
