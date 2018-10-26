// Generated automatically. Do not edit!
#ifndef _HeadNode30_
#define _HeadNode30_
#include "Node47.hpp"

class HeadNode30 : public Node47  {
public:

    // Wrappers
    inline HeadNode30 * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode30 * (*_New)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

HeadNode30 * (*HeadNode30::ptr::_New)() = (HeadNode30 * (*)()) 0x0;
void (*HeadNode30::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

HeadNode30 * (*HeadNode30::ptr::_New)() = (HeadNode30 * (*)()) 0x81a48e0;
void (*HeadNode30::ptr::_mark)() = (void (*)()) 0x808a8a0;
#endif
#endif
