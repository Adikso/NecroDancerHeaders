// Generated automatically. Do not edit!
#ifndef _HeadNode29_
#define _HeadNode29_
#include "Node46.hpp"

class HeadNode29 : public Node46  {
public:

    // Wrappers
    inline HeadNode29 * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode29 * (*_New)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

HeadNode29 * (*HeadNode29::ptr::_New)() = (HeadNode29 * (*)()) 0x0;
void (*HeadNode29::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

HeadNode29 * (*HeadNode29::ptr::_New)() = (HeadNode29 * (*)()) 0x81a3a10;
void (*HeadNode29::ptr::_mark)() = (void (*)()) 0x808b6c0;
#endif
#endif
