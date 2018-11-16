// Generated automatically. Do not edit!
#ifndef _HeadNode22_
#define _HeadNode22_
#include "Node32.hpp"

class HeadNode22 : public Node32  {
public:

    // Wrappers
    inline HeadNode22 * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode22 * (*_New)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline HeadNode22 * (*HeadNode22::ptr::_New)() = (HeadNode22 * (*)()) 0x0;
inline void (*HeadNode22::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline HeadNode22 * (*HeadNode22::ptr::_New)() = (HeadNode22 * (*)()) 0x8198140;
inline void (*HeadNode22::ptr::_mark)() = (void (*)()) 0x8089660;
#endif
#endif
