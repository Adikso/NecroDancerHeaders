// Generated automatically. Do not edit!
#ifndef _HeadNode41_
#define _HeadNode41_
#include "Node59.hpp"

class HeadNode41 : public Node59  {
public:

    // Wrappers
    inline HeadNode41 * _New() { return ptr::_New(); }
    inline Node59 * _GetNode() { return ptr::_GetNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode41 * (*_New)();
        static Node59 * (*_GetNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline HeadNode41 * (*HeadNode41::ptr::_New)() = (HeadNode41 * (*)()) 0x0;
inline Node59 * (*HeadNode41::ptr::_GetNode)() = (Node59 * (*)()) 0x0;
inline void (*HeadNode41::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline HeadNode41 * (*HeadNode41::ptr::_New)() = (HeadNode41 * (*)()) 0x81ba580;
inline Node59 * (*HeadNode41::ptr::_GetNode)() = (Node59 * (*)()) 0x80755a0;
inline void (*HeadNode41::ptr::_mark)() = (void (*)()) 0x80899c0;
#endif
#endif
