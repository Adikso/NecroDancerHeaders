// Generated automatically. Do not edit!
#ifndef _HeadNode13_
#define _HeadNode13_
#include "Node23.hpp"

class HeadNode13 : public Node23  {
public:

    // Wrappers
    inline HeadNode13 * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode13 * (*_New)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline HeadNode13 * (*HeadNode13::ptr::_New)() = (HeadNode13 * (*)()) 0x0;
inline void (*HeadNode13::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline HeadNode13 * (*HeadNode13::ptr::_New)() = (HeadNode13 * (*)()) 0x8191970;
inline void (*HeadNode13::ptr::_mark)() = (void (*)()) 0x808b000;
#endif
#endif
