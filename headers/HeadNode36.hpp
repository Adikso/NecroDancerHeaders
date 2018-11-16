// Generated automatically. Do not edit!
#ifndef _HeadNode36_
#define _HeadNode36_
#include "Node53.hpp"

class HeadNode36 : public Node53  {
public:

    // Wrappers
    inline HeadNode36 * _New() { return ptr::_New(); }
    inline Node53 * _GetNode() { return ptr::_GetNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode36 * (*_New)();
        static Node53 * (*_GetNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline HeadNode36 * (*HeadNode36::ptr::_New)() = (HeadNode36 * (*)()) 0x0;
inline Node53 * (*HeadNode36::ptr::_GetNode)() = (Node53 * (*)()) 0x0;
inline void (*HeadNode36::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline HeadNode36 * (*HeadNode36::ptr::_New)() = (HeadNode36 * (*)()) 0x81ae1e0;
inline Node53 * (*HeadNode36::ptr::_GetNode)() = (Node53 * (*)()) 0x0;
inline void (*HeadNode36::ptr::_mark)() = (void (*)()) 0x8088d40;
#endif
#endif
