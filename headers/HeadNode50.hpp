// Generated automatically. Do not edit!
#ifndef _HeadNode50_
#define _HeadNode50_
#include "Node71.hpp"

class HeadNode50 : public Node71  {
public:

    // Wrappers
    inline HeadNode50 * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode50 * (*_New)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline HeadNode50 * (*HeadNode50::ptr::_New)() = (HeadNode50 * (*)()) 0x0;
inline void (*HeadNode50::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline HeadNode50 * (*HeadNode50::ptr::_New)() = (HeadNode50 * (*)()) 0x81c6670;
inline void (*HeadNode50::ptr::_mark)() = (void (*)()) 0x8088ea0;
#endif
#endif
