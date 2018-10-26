// Generated automatically. Do not edit!
#ifndef _HeadNode21_
#define _HeadNode21_
#include "Node31.hpp"

class HeadNode21 : public Node31  {
public:

    // Wrappers
    inline HeadNode21 * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode21 * (*_New)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

HeadNode21 * (*HeadNode21::ptr::_New)() = (HeadNode21 * (*)()) 0x0;
void (*HeadNode21::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

HeadNode21 * (*HeadNode21::ptr::_New)() = (HeadNode21 * (*)()) 0x81979f0;
void (*HeadNode21::ptr::_mark)() = (void (*)()) 0x8089bc0;
#endif
#endif
