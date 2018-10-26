// Generated automatically. Do not edit!
#ifndef _HeadNode26_
#define _HeadNode26_
#include "Node43.hpp"

class HeadNode26 : public Node43  {
public:

    // Wrappers
    inline HeadNode26 * _New() { return ptr::_New(); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static HeadNode26 * (*_New)();
        static void (*mark)(HeadNode26 * self);
    };
};

#ifdef _WIN32

HeadNode26 * (*HeadNode26::ptr::_New)() = (HeadNode26 * (*)()) 0x0;
void (*HeadNode26::ptr::mark)(HeadNode26 * self) = (void (*)(HeadNode26 * self)) 0x5c3d60;
#endif

#ifdef __linux__

HeadNode26 * (*HeadNode26::ptr::_New)() = (HeadNode26 * (*)()) 0x819f570;
void (*HeadNode26::ptr::mark)(HeadNode26 * self) = (void (*)(HeadNode26 * self)) 0x80900b0;
#endif
#endif
