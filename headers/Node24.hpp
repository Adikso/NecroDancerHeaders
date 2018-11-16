// Generated automatically. Do not edit!
#ifndef _Node24_
#define _Node24_
class Trap;
#include "Object.hpp"

class Node24 : public Object  {
public:
    Node24 * _succ;
    Node24 * _pred;
    Trap * _data;

    // Wrappers
    inline Node24 * _New(Node24 * arg1, Node24 * arg2, Trap * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node24 * _new2() { return ptr::_new2(); }
    inline virtual int Remove3() { return ptr::_Remove3(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node24 * (*_New)(Node24 * self, Node24 * arg1, Node24 * arg2, Trap * arg3);
        static Node24 * (*_new2)();
        static int (*_Remove3)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Node24 * (*Node24::ptr::_New)(Node24 * self, Node24 * arg1, Node24 * arg2, Trap * arg3) = (Node24 * (*)(Node24 * self, Node24 * arg1, Node24 * arg2, Trap * arg3)) 0x0;
inline Node24 * (*Node24::ptr::_new2)() = (Node24 * (*)()) 0x0;
inline int (*Node24::ptr::_Remove3)() = (int (*)()) 0x0;
inline void (*Node24::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Node24 * (*Node24::ptr::_New)(Node24 * self, Node24 * arg1, Node24 * arg2, Trap * arg3) = (Node24 * (*)(Node24 * self, Node24 * arg1, Node24 * arg2, Trap * arg3)) 0x0;
inline Node24 * (*Node24::ptr::_new2)() = (Node24 * (*)()) 0x8199d40;
inline int (*Node24::ptr::_Remove3)() = (int (*)()) 0x0;
inline void (*Node24::ptr::_mark)() = (void (*)()) 0x8089e70;
#endif
#endif
