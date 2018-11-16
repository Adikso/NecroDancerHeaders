// Generated automatically. Do not edit!
#ifndef _HeadNode19_
#define _HeadNode19_
#include "Node29.hpp"

class HeadNode19 : public Node29  {
public:

    // Wrappers
    inline HeadNode19 * _New() { return ptr::_New(); }
    inline Node29 * _GetNode() { return ptr::_GetNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode19 * (*_New)();
        static Node29 * (*_GetNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline HeadNode19 * (*HeadNode19::ptr::_New)() = (HeadNode19 * (*)()) 0x0;
inline Node29 * (*HeadNode19::ptr::_GetNode)() = (Node29 * (*)()) 0x0;
inline void (*HeadNode19::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline HeadNode19 * (*HeadNode19::ptr::_New)() = (HeadNode19 * (*)()) 0x8196980;
inline Node29 * (*HeadNode19::ptr::_GetNode)() = (Node29 * (*)()) 0x0;
inline void (*HeadNode19::ptr::_mark)() = (void (*)()) 0x8088000;
#endif
#endif
