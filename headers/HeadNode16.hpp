// Generated automatically. Do not edit!
#ifndef _HeadNode16_
#define _HeadNode16_
#include "Node26.hpp"

class HeadNode16 : public Node26  {
public:

    // Wrappers
    inline HeadNode16 * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode16 * (*_New)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

HeadNode16 * (*HeadNode16::ptr::_New)() = (HeadNode16 * (*)()) 0x0;
void (*HeadNode16::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

HeadNode16 * (*HeadNode16::ptr::_New)() = (HeadNode16 * (*)()) 0x8194980;
void (*HeadNode16::ptr::_mark)() = (void (*)()) 0x808fe60;
#endif
#endif
