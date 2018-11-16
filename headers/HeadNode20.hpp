// Generated automatically. Do not edit!
#ifndef _HeadNode20_
#define _HeadNode20_
#include "Node30.hpp"

class HeadNode20 : public Node30  {
public:

    // Wrappers
    inline HeadNode20 * _New() { return ptr::_New(); }
    inline Node30 * _GetNode() { return ptr::_GetNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode20 * (*_New)();
        static Node30 * (*_GetNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline HeadNode20 * (*HeadNode20::ptr::_New)() = (HeadNode20 * (*)()) 0x0;
inline Node30 * (*HeadNode20::ptr::_GetNode)() = (Node30 * (*)()) 0x0;
inline void (*HeadNode20::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline HeadNode20 * (*HeadNode20::ptr::_New)() = (HeadNode20 * (*)()) 0x8196d60;
inline Node30 * (*HeadNode20::ptr::_GetNode)() = (Node30 * (*)()) 0x8072110;
inline void (*HeadNode20::ptr::_mark)() = (void (*)()) 0x808a0c0;
#endif
#endif
