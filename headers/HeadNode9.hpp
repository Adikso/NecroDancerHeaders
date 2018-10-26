// Generated automatically. Do not edit!
#ifndef _HeadNode9_
#define _HeadNode9_
#include "Node15.hpp"

class HeadNode9 : public Node15  {
public:

    // Wrappers
    inline HeadNode9 * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode9 * (*_New)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

HeadNode9 * (*HeadNode9::ptr::_New)() = (HeadNode9 * (*)()) 0x0;
void (*HeadNode9::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

HeadNode9 * (*HeadNode9::ptr::_New)() = (HeadNode9 * (*)()) 0x817e860;
void (*HeadNode9::ptr::_mark)() = (void (*)()) 0x8087da0;
#endif
#endif
