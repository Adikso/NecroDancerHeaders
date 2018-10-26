// Generated automatically. Do not edit!
#ifndef _HeadNode7_
#define _HeadNode7_
#include "Node13.hpp"

class HeadNode7 : public Node13  {
public:

    // Wrappers
    inline HeadNode7 * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode7 * (*_New)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

HeadNode7 * (*HeadNode7::ptr::_New)() = (HeadNode7 * (*)()) 0x0;
void (*HeadNode7::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

HeadNode7 * (*HeadNode7::ptr::_New)() = (HeadNode7 * (*)()) 0x81596d0;
void (*HeadNode7::ptr::_mark)() = (void (*)()) 0x808af00;
#endif
#endif
