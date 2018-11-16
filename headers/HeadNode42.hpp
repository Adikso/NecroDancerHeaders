// Generated automatically. Do not edit!
#ifndef _HeadNode42_
#define _HeadNode42_
#include "Node61.hpp"

class HeadNode42 : public Node61  {
public:

    // Wrappers
    inline HeadNode42 * _New() { return ptr::_New(); }
    inline Node61 * _GetNode() { return ptr::_GetNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode42 * (*_New)();
        static Node61 * (*_GetNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline HeadNode42 * (*HeadNode42::ptr::_New)() = (HeadNode42 * (*)()) 0x0;
inline Node61 * (*HeadNode42::ptr::_GetNode)() = (Node61 * (*)()) 0x0;
inline void (*HeadNode42::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline HeadNode42 * (*HeadNode42::ptr::_New)() = (HeadNode42 * (*)()) 0x81bbca0;
inline Node61 * (*HeadNode42::ptr::_GetNode)() = (Node61 * (*)()) 0x0;
inline void (*HeadNode42::ptr::_mark)() = (void (*)()) 0x80898c0;
#endif
#endif
