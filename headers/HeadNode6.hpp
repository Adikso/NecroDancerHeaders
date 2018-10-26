// Generated automatically. Do not edit!
#ifndef _HeadNode6_
#define _HeadNode6_
#include "Node12.hpp"

class HeadNode6 : public Node12  {
public:

    // Wrappers
    inline HeadNode6 * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode6 * (*_New)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

HeadNode6 * (*HeadNode6::ptr::_New)() = (HeadNode6 * (*)()) 0x0;
void (*HeadNode6::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

HeadNode6 * (*HeadNode6::ptr::_New)() = (HeadNode6 * (*)()) 0x81591c0;
void (*HeadNode6::ptr::_mark)() = (void (*)()) 0x80a11d0;
#endif
#endif
