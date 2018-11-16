// Generated automatically. Do not edit!
#ifndef _HeadNode54_
#define _HeadNode54_
#include "Node74.hpp"

class HeadNode54 : public Node74  {
public:

    // Wrappers
    inline HeadNode54 * _New() { return ptr::_New(); }
    inline Node74 * _GetNode() { return ptr::_GetNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode54 * (*_New)();
        static Node74 * (*_GetNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline HeadNode54 * (*HeadNode54::ptr::_New)() = (HeadNode54 * (*)()) 0x0;
inline Node74 * (*HeadNode54::ptr::_GetNode)() = (Node74 * (*)()) 0x0;
inline void (*HeadNode54::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline HeadNode54 * (*HeadNode54::ptr::_New)() = (HeadNode54 * (*)()) 0x81dba10;
inline Node74 * (*HeadNode54::ptr::_GetNode)() = (Node74 * (*)()) 0x8078010;
inline void (*HeadNode54::ptr::_mark)() = (void (*)()) 0x8086c20;
#endif
#endif
