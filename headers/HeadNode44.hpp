// Generated automatically. Do not edit!
#ifndef _HeadNode44_
#define _HeadNode44_
#include "Node64.hpp"

class HeadNode44 : public Node64  {
public:

    // Wrappers
    inline HeadNode44 * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode44 * (*_New)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

HeadNode44 * (*HeadNode44::ptr::_New)() = (HeadNode44 * (*)()) 0x0;
void (*HeadNode44::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

HeadNode44 * (*HeadNode44::ptr::_New)() = (HeadNode44 * (*)()) 0x81bcb90;
void (*HeadNode44::ptr::_mark)() = (void (*)()) 0x8088520;
#endif
#endif
