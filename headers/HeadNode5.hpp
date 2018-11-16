// Generated automatically. Do not edit!
#ifndef _HeadNode5_
#define _HeadNode5_
#include "Node11.hpp"

class HeadNode5 : public Node11  {
public:

    // Wrappers
    inline HeadNode5 * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode5 * (*_New)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline HeadNode5 * (*HeadNode5::ptr::_New)() = (HeadNode5 * (*)()) 0x0;
inline void (*HeadNode5::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline HeadNode5 * (*HeadNode5::ptr::_New)() = (HeadNode5 * (*)()) 0x81586c0;
inline void (*HeadNode5::ptr::_mark)() = (void (*)()) 0x808ab00;
#endif
#endif
