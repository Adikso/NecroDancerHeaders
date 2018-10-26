// Generated automatically. Do not edit!
#ifndef _HeadNode2_
#define _HeadNode2_
#include "Node6.hpp"

class HeadNode2 : public Node6  {
public:

    // Wrappers
    inline HeadNode2 * _New() { return ptr::_New(); }
    inline Node6 * _GetNode() { return ptr::_GetNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode2 * (*_New)();
        static Node6 * (*_GetNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

HeadNode2 * (*HeadNode2::ptr::_New)() = (HeadNode2 * (*)()) 0x0;
Node6 * (*HeadNode2::ptr::_GetNode)() = (Node6 * (*)()) 0x0;
void (*HeadNode2::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

HeadNode2 * (*HeadNode2::ptr::_New)() = (HeadNode2 * (*)()) 0x81460e0;
Node6 * (*HeadNode2::ptr::_GetNode)() = (Node6 * (*)()) 0x806f600;
void (*HeadNode2::ptr::_mark)() = (void (*)()) 0x80b2870;
#endif
#endif
