// Generated automatically. Do not edit!
#ifndef _HeadNode14_
#define _HeadNode14_
#include "Node24.hpp"

class HeadNode14 : public Node24  {
public:

    // Wrappers
    inline HeadNode14 * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode14 * (*_New)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

HeadNode14 * (*HeadNode14::ptr::_New)() = (HeadNode14 * (*)()) 0x0;
void (*HeadNode14::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

HeadNode14 * (*HeadNode14::ptr::_New)() = (HeadNode14 * (*)()) 0x8193080;
void (*HeadNode14::ptr::_mark)() = (void (*)()) 0x808c140;
#endif
#endif
