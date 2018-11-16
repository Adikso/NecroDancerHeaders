// Generated automatically. Do not edit!
#ifndef _HeadNode35_
#define _HeadNode35_
#include "Node52.hpp"

class HeadNode35 : public Node52  {
public:

    // Wrappers
    inline HeadNode35 * _New() { return ptr::_New(); }
    inline Node52 * _GetNode() { return ptr::_GetNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode35 * (*_New)();
        static Node52 * (*_GetNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline HeadNode35 * (*HeadNode35::ptr::_New)() = (HeadNode35 * (*)()) 0x0;
inline Node52 * (*HeadNode35::ptr::_GetNode)() = (Node52 * (*)()) 0x0;
inline void (*HeadNode35::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline HeadNode35 * (*HeadNode35::ptr::_New)() = (HeadNode35 * (*)()) 0x81aa2b0;
inline Node52 * (*HeadNode35::ptr::_GetNode)() = (Node52 * (*)()) 0x8074290;
inline void (*HeadNode35::ptr::_mark)() = (void (*)()) 0x80875a0;
#endif
#endif
