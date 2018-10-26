// Generated automatically. Do not edit!
#ifndef _HeadNode55_
#define _HeadNode55_
#include "Node78.hpp"

class HeadNode55 : public Node78  {
public:

    // Wrappers
    inline HeadNode55 * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode55 * (*_New)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

HeadNode55 * (*HeadNode55::ptr::_New)() = (HeadNode55 * (*)()) 0x0;
void (*HeadNode55::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

HeadNode55 * (*HeadNode55::ptr::_New)() = (HeadNode55 * (*)()) 0x81e16b0;
void (*HeadNode55::ptr::_mark)() = (void (*)()) 0x808b300;
#endif
#endif
