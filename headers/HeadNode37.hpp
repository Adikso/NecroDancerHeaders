// Generated automatically. Do not edit!
#ifndef _HeadNode37_
#define _HeadNode37_
#include "Node54.hpp"

class HeadNode37 : public Node54  {
public:

    // Wrappers
    inline HeadNode37 * _New() { return ptr::_New(); }
    inline Node54 * _GetNode() { return ptr::_GetNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode37 * (*_New)();
        static Node54 * (*_GetNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline HeadNode37 * (*HeadNode37::ptr::_New)() = (HeadNode37 * (*)()) 0x0;
inline Node54 * (*HeadNode37::ptr::_GetNode)() = (Node54 * (*)()) 0x0;
inline void (*HeadNode37::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline HeadNode37 * (*HeadNode37::ptr::_New)() = (HeadNode37 * (*)()) 0x81b01a0;
inline Node54 * (*HeadNode37::ptr::_GetNode)() = (Node54 * (*)()) 0x8074570;
inline void (*HeadNode37::ptr::_mark)() = (void (*)()) 0x80902b0;
#endif
#endif
