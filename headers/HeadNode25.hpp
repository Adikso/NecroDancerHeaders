// Generated automatically. Do not edit!
#ifndef _HeadNode25_
#define _HeadNode25_
#include "Node42.hpp"

class HeadNode25 : public Node42  {
public:

    // Wrappers
    inline HeadNode25 * _New() { return ptr::_New(); }
    inline Node42 * _GetNode() { return ptr::_GetNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode25 * (*_New)();
        static Node42 * (*_GetNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

HeadNode25 * (*HeadNode25::ptr::_New)() = (HeadNode25 * (*)()) 0x0;
Node42 * (*HeadNode25::ptr::_GetNode)() = (Node42 * (*)()) 0x0;
void (*HeadNode25::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

HeadNode25 * (*HeadNode25::ptr::_New)() = (HeadNode25 * (*)()) 0x819b100;
Node42 * (*HeadNode25::ptr::_GetNode)() = (Node42 * (*)()) 0x0;
void (*HeadNode25::ptr::_mark)() = (void (*)()) 0x8089d60;
#endif
#endif
