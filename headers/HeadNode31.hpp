// Generated automatically. Do not edit!
#ifndef _HeadNode31_
#define _HeadNode31_
#include "Node48.hpp"

class HeadNode31 : public Node48  {
public:

    // Wrappers
    inline HeadNode31 * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode31 * (*_New)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline HeadNode31 * (*HeadNode31::ptr::_New)() = (HeadNode31 * (*)()) 0x0;
inline void (*HeadNode31::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline HeadNode31 * (*HeadNode31::ptr::_New)() = (HeadNode31 * (*)()) 0x81a5450;
inline void (*HeadNode31::ptr::_mark)() = (void (*)()) 0x808a640;
#endif
#endif
