// Generated automatically. Do not edit!
#ifndef _HeadNode23_
#define _HeadNode23_
#include "Node33.hpp"

class HeadNode23 : public Node33  {
public:

    // Wrappers
    inline HeadNode23 * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode23 * (*_New)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

HeadNode23 * (*HeadNode23::ptr::_New)() = (HeadNode23 * (*)()) 0x0;
void (*HeadNode23::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

HeadNode23 * (*HeadNode23::ptr::_New)() = (HeadNode23 * (*)()) 0x8198520;
void (*HeadNode23::ptr::_mark)() = (void (*)()) 0x808e670;
#endif
#endif
