// Generated automatically. Do not edit!
#ifndef _HeadNode32_
#define _HeadNode32_
#include "Node49.hpp"

class HeadNode32 : public Node49  {
public:

    // Wrappers
    inline HeadNode32 * _New() { return ptr::_New(); }
    inline Node49 * _GetNode() { return ptr::_GetNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode32 * (*_New)();
        static Node49 * (*_GetNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline HeadNode32 * (*HeadNode32::ptr::_New)() = (HeadNode32 * (*)()) 0x0;
inline Node49 * (*HeadNode32::ptr::_GetNode)() = (Node49 * (*)()) 0x0;
inline void (*HeadNode32::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline HeadNode32 * (*HeadNode32::ptr::_New)() = (HeadNode32 * (*)()) 0x81a5910;
inline Node49 * (*HeadNode32::ptr::_GetNode)() = (Node49 * (*)()) 0x0;
inline void (*HeadNode32::ptr::_mark)() = (void (*)()) 0x808a7a0;
#endif
#endif
