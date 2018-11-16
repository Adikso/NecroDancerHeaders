// Generated automatically. Do not edit!
#ifndef _HeadNode51_
#define _HeadNode51_
#include "Node42.hpp"

class HeadNode51 : public Node42  {
public:

    // Wrappers
    inline HeadNode51 * _New() { return ptr::_New(); }
    inline Node42 * _GetNode() { return ptr::_GetNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode51 * (*_New)();
        static Node42 * (*_GetNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline HeadNode51 * (*HeadNode51::ptr::_New)() = (HeadNode51 * (*)()) 0x0;
inline Node42 * (*HeadNode51::ptr::_GetNode)() = (Node42 * (*)()) 0x0;
inline void (*HeadNode51::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline HeadNode51 * (*HeadNode51::ptr::_New)() = (HeadNode51 * (*)()) 0x81d4660;
inline Node42 * (*HeadNode51::ptr::_GetNode)() = (Node42 * (*)()) 0x0;
inline void (*HeadNode51::ptr::_mark)() = (void (*)()) 0x80889e0;
#endif
#endif
