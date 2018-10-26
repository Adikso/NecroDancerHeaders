// Generated automatically. Do not edit!
#ifndef _HeadNode15_
#define _HeadNode15_
#include "Node25.hpp"

class HeadNode15 : public Node25  {
public:

    // Wrappers
    inline HeadNode15 * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode15 * (*_New)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

HeadNode15 * (*HeadNode15::ptr::_New)() = (HeadNode15 * (*)()) 0x0;
void (*HeadNode15::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

HeadNode15 * (*HeadNode15::ptr::_New)() = (HeadNode15 * (*)()) 0x81945f0;
void (*HeadNode15::ptr::_mark)() = (void (*)()) 0x808ac00;
#endif
#endif
