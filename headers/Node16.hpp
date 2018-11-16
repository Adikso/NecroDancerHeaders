// Generated automatically. Do not edit!
#ifndef _Node16_
#define _Node16_
class Crate;
#include "Object.hpp"

class Node16 : public Object  {
public:
    Node16 * _succ;
    Node16 * _pred;
    Crate * _data;

    // Wrappers
    inline Node16 * _New(Node16 * arg1, Node16 * arg2, Crate * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node16 * _new2() { return ptr::_new2(); }
    inline virtual Node16 * GetNode() { return ptr::_GetNode(); }
    inline virtual Node16 * NextNode() { return ptr::_NextNode(); }
    inline virtual int Remove3() { return ptr::_Remove3(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node16 * (*_New)(Node16 * self, Node16 * arg1, Node16 * arg2, Crate * arg3);
        static Node16 * (*_new2)();
        static Node16 * (*_GetNode)();
        static Node16 * (*_NextNode)();
        static int (*_Remove3)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Node16 * (*Node16::ptr::_New)(Node16 * self, Node16 * arg1, Node16 * arg2, Crate * arg3) = (Node16 * (*)(Node16 * self, Node16 * arg1, Node16 * arg2, Crate * arg3)) 0x0;
inline Node16 * (*Node16::ptr::_new2)() = (Node16 * (*)()) 0x0;
inline Node16 * (*Node16::ptr::_GetNode)() = (Node16 * (*)()) 0x0;
inline Node16 * (*Node16::ptr::_NextNode)() = (Node16 * (*)()) 0x0;
inline int (*Node16::ptr::_Remove3)() = (int (*)()) 0x0;
inline void (*Node16::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Node16 * (*Node16::ptr::_New)(Node16 * self, Node16 * arg1, Node16 * arg2, Crate * arg3) = (Node16 * (*)(Node16 * self, Node16 * arg1, Node16 * arg2, Crate * arg3)) 0x0;
inline Node16 * (*Node16::ptr::_new2)() = (Node16 * (*)()) 0x8194950;
inline Node16 * (*Node16::ptr::_GetNode)() = (Node16 * (*)()) 0x0;
inline Node16 * (*Node16::ptr::_NextNode)() = (Node16 * (*)()) 0x0;
inline int (*Node16::ptr::_Remove3)() = (int (*)()) 0x8095ef0;
inline void (*Node16::ptr::_mark)() = (void (*)()) 0x808fcd0;
#endif
#endif
