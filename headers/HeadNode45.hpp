// Generated automatically. Do not edit!
#ifndef _HeadNode45_
#define _HeadNode45_
#include "Node65.hpp"

class HeadNode45 : public Node65  {
public:

    // Wrappers
    inline HeadNode45 * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode45 * (*_New)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

HeadNode45 * (*HeadNode45::ptr::_New)() = (HeadNode45 * (*)()) 0x0;
void (*HeadNode45::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

HeadNode45 * (*HeadNode45::ptr::_New)() = (HeadNode45 * (*)()) 0x81bdc70;
void (*HeadNode45::ptr::_mark)() = (void (*)()) 0x8088880;
#endif
#endif
