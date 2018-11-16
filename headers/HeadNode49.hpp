// Generated automatically. Do not edit!
#ifndef _HeadNode49_
#define _HeadNode49_
#include "Node69.hpp"

class HeadNode49 : public Node69  {
public:

    // Wrappers
    inline HeadNode49 * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode49 * (*_New)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline HeadNode49 * (*HeadNode49::ptr::_New)() = (HeadNode49 * (*)()) 0x0;
inline void (*HeadNode49::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline HeadNode49 * (*HeadNode49::ptr::_New)() = (HeadNode49 * (*)()) 0x81bff50;
inline void (*HeadNode49::ptr::_mark)() = (void (*)()) 0x8088620;
#endif
#endif
