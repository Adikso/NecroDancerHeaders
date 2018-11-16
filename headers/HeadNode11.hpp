// Generated automatically. Do not edit!
#ifndef _HeadNode11_
#define _HeadNode11_
#include "Node18.hpp"

class HeadNode11 : public Node18  {
public:

    // Wrappers
    inline HeadNode11 * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode11 * (*_New)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline HeadNode11 * (*HeadNode11::ptr::_New)() = (HeadNode11 * (*)()) 0x0;
inline void (*HeadNode11::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline HeadNode11 * (*HeadNode11::ptr::_New)() = (HeadNode11 * (*)()) 0x817f5c0;
inline void (*HeadNode11::ptr::_mark)() = (void (*)()) 0x80908f0;
#endif
#endif
