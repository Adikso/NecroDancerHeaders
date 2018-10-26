// Generated automatically. Do not edit!
#ifndef _HeadNode56_
#define _HeadNode56_
#include "Node79.hpp"

class HeadNode56 : public Node79  {
public:

    // Wrappers
    inline HeadNode56 * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode56 * (*_New)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

HeadNode56 * (*HeadNode56::ptr::_New)() = (HeadNode56 * (*)()) 0x0;
void (*HeadNode56::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

HeadNode56 * (*HeadNode56::ptr::_New)() = (HeadNode56 * (*)()) 0x81e5010;
void (*HeadNode56::ptr::_mark)() = (void (*)()) 0x8089300;
#endif
#endif
