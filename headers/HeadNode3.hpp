// Generated automatically. Do not edit!
#ifndef _HeadNode3_
#define _HeadNode3_
#include "Node7.hpp"

class HeadNode3 : public Node7  {
public:

    // Wrappers
    HeadNode3() {
        ptr::CSTR_HeadNode3(this);
    }

    inline HeadNode3 * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode3 * (*_New)();
        static void (*_mark)();
        static void (*CSTR_HeadNode3)(HeadNode3 * self);
    };
};

#ifdef _WIN32

HeadNode3 * (*HeadNode3::ptr::_New)() = (HeadNode3 * (*)()) 0x0;
void (*HeadNode3::ptr::_mark)() = (void (*)()) 0x0;
void (*HeadNode3::ptr::CSTR_HeadNode3)(HeadNode3 * self) = (void (*)(HeadNode3 * self)) 0x542220;
#endif

#ifdef __linux__

HeadNode3 * (*HeadNode3::ptr::_New)() = (HeadNode3 * (*)()) 0x814bdc0;
void (*HeadNode3::ptr::_mark)() = (void (*)()) 0x80a0aa0;
void (*HeadNode3::ptr::CSTR_HeadNode3)(HeadNode3 * self) = (void (*)(HeadNode3 * self)) 0x814bca0;
#endif
#endif
