// Generated automatically. Do not edit!
#ifndef _HeadNode43_
#define _HeadNode43_
#include "Node62.hpp"

class HeadNode43 : public Node62  {
public:

    // Wrappers
    inline HeadNode43 * _New() { return ptr::_New(); }
    inline Node62 * _GetNode() { return ptr::_GetNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode43 * (*_New)();
        static Node62 * (*_GetNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

HeadNode43 * (*HeadNode43::ptr::_New)() = (HeadNode43 * (*)()) 0x0;
Node62 * (*HeadNode43::ptr::_GetNode)() = (Node62 * (*)()) 0x0;
void (*HeadNode43::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

HeadNode43 * (*HeadNode43::ptr::_New)() = (HeadNode43 * (*)()) 0x81bc3c0;
Node62 * (*HeadNode43::ptr::_GetNode)() = (Node62 * (*)()) 0x80759a0;
void (*HeadNode43::ptr::_mark)() = (void (*)()) 0x8086ac0;
#endif
#endif
