// Generated automatically. Do not edit!
#ifndef _Node27_
#define _Node27_
class Enemy;
#include "Object.hpp"

class Node27 : public Object  {
public:
    Node27 * _succ;
    Node27 * _pred;
    Enemy * _data;

    // Wrappers
    inline Node27 * _New(Node27 * arg1, Node27 * arg2, Enemy * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node27 * _new2() { return ptr::_new2(); }
    inline virtual int Remove2() { return ptr::_Remove2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node27 * (*_New)(Node27 * self, Node27 * arg1, Node27 * arg2, Enemy * arg3);
        static Node27 * (*_new2)();
        static int (*_Remove2)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Node27 * (*Node27::ptr::_New)(Node27 * self, Node27 * arg1, Node27 * arg2, Enemy * arg3) = (Node27 * (*)(Node27 * self, Node27 * arg1, Node27 * arg2, Enemy * arg3)) 0x0;
inline Node27 * (*Node27::ptr::_new2)() = (Node27 * (*)()) 0x0;
inline int (*Node27::ptr::_Remove2)() = (int (*)()) 0x0;
inline void (*Node27::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Node27 * (*Node27::ptr::_New)(Node27 * self, Node27 * arg1, Node27 * arg2, Enemy * arg3) = (Node27 * (*)(Node27 * self, Node27 * arg1, Node27 * arg2, Enemy * arg3)) 0x0;
inline Node27 * (*Node27::ptr::_new2)() = (Node27 * (*)()) 0x819f540;
inline int (*Node27::ptr::_Remove2)() = (int (*)()) 0x0;
inline void (*Node27::ptr::_mark)() = (void (*)()) 0x808ffb0;
#endif
#endif
