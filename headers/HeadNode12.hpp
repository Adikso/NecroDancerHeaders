// Generated automatically. Do not edit!
#ifndef _HeadNode12_
#define _HeadNode12_
#include "Node22.hpp"

class HeadNode12 : public Node22  {
public:

    // Wrappers
    inline HeadNode12 * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode12 * (*_New)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline HeadNode12 * (*HeadNode12::ptr::_New)() = (HeadNode12 * (*)()) 0x0;
inline void (*HeadNode12::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline HeadNode12 * (*HeadNode12::ptr::_New)() = (HeadNode12 * (*)()) 0x8187b30;
inline void (*HeadNode12::ptr::_mark)() = (void (*)()) 0x808a380;
#endif
#endif
