// Generated automatically. Do not edit!
#ifndef _HeadNode33_
#define _HeadNode33_
#include "Node50.hpp"

class HeadNode33 : public Node50  {
public:

    // Wrappers
    inline HeadNode33 * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode33 * (*_New)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

HeadNode33 * (*HeadNode33::ptr::_New)() = (HeadNode33 * (*)()) 0x0;
void (*HeadNode33::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

HeadNode33 * (*HeadNode33::ptr::_New)() = (HeadNode33 * (*)()) 0x81a7f30;
void (*HeadNode33::ptr::_mark)() = (void (*)()) 0x809b2e0;
#endif
#endif
