// Generated automatically. Do not edit!
#ifndef _HeadNode8_
#define _HeadNode8_
#include "Node15.hpp"

class HeadNode8 : public Node15  {
public:

    // Wrappers
    inline HeadNode8 * _New() { return ptr::_New(); }
    inline Node15 * _GetNode() { return ptr::_GetNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode8 * (*_New)();
        static Node15 * (*_GetNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline HeadNode8 * (*HeadNode8::ptr::_New)() = (HeadNode8 * (*)()) 0x0;
inline Node15 * (*HeadNode8::ptr::_GetNode)() = (Node15 * (*)()) 0x0;
inline void (*HeadNode8::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline HeadNode8 * (*HeadNode8::ptr::_New)() = (HeadNode8 * (*)()) 0x815a560;
inline Node15 * (*HeadNode8::ptr::_GetNode)() = (Node15 * (*)()) 0x0;
inline void (*HeadNode8::ptr::_mark)() = (void (*)()) 0x808b460;
#endif
#endif
