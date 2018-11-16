// Generated automatically. Do not edit!
#ifndef _HeadNode47_
#define _HeadNode47_
#include "Node67.hpp"

class HeadNode47 : public Node67  {
public:

    // Wrappers
    inline HeadNode47 * _New() { return ptr::_New(); }
    inline Node67 * _GetNode() { return ptr::_GetNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode47 * (*_New)();
        static Node67 * (*_GetNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline HeadNode47 * (*HeadNode47::ptr::_New)() = (HeadNode47 * (*)()) 0x0;
inline Node67 * (*HeadNode47::ptr::_GetNode)() = (Node67 * (*)()) 0x0;
inline void (*HeadNode47::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline HeadNode47 * (*HeadNode47::ptr::_New)() = (HeadNode47 * (*)()) 0x81bee30;
inline Node67 * (*HeadNode47::ptr::_GetNode)() = (Node67 * (*)()) 0x8075ee0;
inline void (*HeadNode47::ptr::_mark)() = (void (*)()) 0x808b5c0;
#endif
#endif
