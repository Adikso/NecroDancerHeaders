// Generated automatically. Do not edit!
#ifndef _HeadNode10_
#define _HeadNode10_
#include "Node17.hpp"

class HeadNode10 : public Node17  {
public:

    // Wrappers
    inline HeadNode10 * _New() { return ptr::_New(); }
    inline Node17 * _GetNode() { return ptr::_GetNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode10 * (*_New)();
        static Node17 * (*_GetNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

HeadNode10 * (*HeadNode10::ptr::_New)() = (HeadNode10 * (*)()) 0x0;
Node17 * (*HeadNode10::ptr::_GetNode)() = (Node17 * (*)()) 0x0;
void (*HeadNode10::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

HeadNode10 * (*HeadNode10::ptr::_New)() = (HeadNode10 * (*)()) 0x817f1b0;
Node17 * (*HeadNode10::ptr::_GetNode)() = (Node17 * (*)()) 0x8070c00;
void (*HeadNode10::ptr::_mark)() = (void (*)()) 0x8087080;
#endif
#endif
