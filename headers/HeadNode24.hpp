// Generated automatically. Do not edit!
#ifndef _HeadNode24_
#define _HeadNode24_
#include "Node38.hpp"

class HeadNode24 : public Node38  {
public:

    // Wrappers
    inline HeadNode24 * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode24 * (*_New)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline HeadNode24 * (*HeadNode24::ptr::_New)() = (HeadNode24 * (*)()) 0x0;
inline void (*HeadNode24::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline HeadNode24 * (*HeadNode24::ptr::_New)() = (HeadNode24 * (*)()) 0x8199d70;
inline void (*HeadNode24::ptr::_mark)() = (void (*)()) 0x8089f60;
#endif
#endif
