// Generated automatically. Do not edit!
#ifndef _Node26_
#define _Node26_
class Enemy;
#include "Object.hpp"

class Node26 : public Object  {
public:
    Node26 * _succ;
    Node26 * _pred;
    Enemy * _data;

    // Wrappers
    inline Node26 * _New(Node26 * arg1, Node26 * arg2, Enemy * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node26 * _new2() { return ptr::_new2(); }
    inline virtual int Remove3() { return ptr::_Remove3(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node26 * (*_New)(Node26 * self, Node26 * arg1, Node26 * arg2, Enemy * arg3);
        static Node26 * (*_new2)();
        static int (*_Remove3)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Node26 * (*Node26::ptr::_New)(Node26 * self, Node26 * arg1, Node26 * arg2, Enemy * arg3) = (Node26 * (*)(Node26 * self, Node26 * arg1, Node26 * arg2, Enemy * arg3)) 0x0;
inline Node26 * (*Node26::ptr::_new2)() = (Node26 * (*)()) 0x0;
inline int (*Node26::ptr::_Remove3)() = (int (*)()) 0x0;
inline void (*Node26::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Node26 * (*Node26::ptr::_New)(Node26 * self, Node26 * arg1, Node26 * arg2, Enemy * arg3) = (Node26 * (*)(Node26 * self, Node26 * arg1, Node26 * arg2, Enemy * arg3)) 0x0;
inline Node26 * (*Node26::ptr::_new2)() = (Node26 * (*)()) 0x819f340;
inline int (*Node26::ptr::_Remove3)() = (int (*)()) 0x0;
inline void (*Node26::ptr::_mark)() = (void (*)()) 0x808be90;
#endif
#endif
