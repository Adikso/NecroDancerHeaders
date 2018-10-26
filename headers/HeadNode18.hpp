// Generated automatically. Do not edit!
#ifndef _HeadNode18_
#define _HeadNode18_
#include "Node28.hpp"

class HeadNode18 : public Node28  {
public:

    // Wrappers
    inline HeadNode18 * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode18 * (*_New)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

HeadNode18 * (*HeadNode18::ptr::_New)() = (HeadNode18 * (*)()) 0x0;
void (*HeadNode18::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

HeadNode18 * (*HeadNode18::ptr::_New)() = (HeadNode18 * (*)()) 0x81957f0;
void (*HeadNode18::ptr::_mark)() = (void (*)()) 0x8088260;
#endif
#endif
