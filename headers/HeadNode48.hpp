// Generated automatically. Do not edit!
#ifndef _HeadNode48_
#define _HeadNode48_
#include "Node68.hpp"

class HeadNode48 : public Node68  {
public:

    // Wrappers
    inline HeadNode48 * _New() { return ptr::_New(); }
    inline Node68 * _GetNode() { return ptr::_GetNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode48 * (*_New)();
        static Node68 * (*_GetNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

HeadNode48 * (*HeadNode48::ptr::_New)() = (HeadNode48 * (*)()) 0x0;
Node68 * (*HeadNode48::ptr::_GetNode)() = (Node68 * (*)()) 0x0;
void (*HeadNode48::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

HeadNode48 * (*HeadNode48::ptr::_New)() = (HeadNode48 * (*)()) 0x81bf370;
Node68 * (*HeadNode48::ptr::_GetNode)() = (Node68 * (*)()) 0x8075fd0;
void (*HeadNode48::ptr::_mark)() = (void (*)()) 0x80883c0;
#endif
#endif
