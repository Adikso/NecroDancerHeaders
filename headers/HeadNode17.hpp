// Generated automatically. Do not edit!
#ifndef _HeadNode17_
#define _HeadNode17_
#include "Node27.hpp"

class HeadNode17 : public Node27  {
public:

    // Wrappers
    inline HeadNode17 * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode17 * (*_New)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline HeadNode17 * (*HeadNode17::ptr::_New)() = (HeadNode17 * (*)()) 0x0;
inline void (*HeadNode17::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline HeadNode17 * (*HeadNode17::ptr::_New)() = (HeadNode17 * (*)()) 0x8195410;
inline void (*HeadNode17::ptr::_mark)() = (void (*)()) 0x8089200;
#endif
#endif
