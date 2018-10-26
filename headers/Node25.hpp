// Generated automatically. Do not edit!
#ifndef _Node25_
#define _Node25_
class Trap;
#include "Object.hpp"

class Node25 : public Object  {
public:
    Node25 * _succ;
    Node25 * _pred;
    Trap * _data;

    // Wrappers
    inline Node25 * _New(Node25 * arg1, Node25 * arg2, Trap * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node25 * _new2() { return ptr::_new2(); }
    inline virtual int Remove2() { return ptr::_Remove2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node25 * (*_New)(Node25 * self, Node25 * arg1, Node25 * arg2, Trap * arg3);
        static Node25 * (*_new2)();
        static int (*_Remove2)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Node25 * (*Node25::ptr::_New)(Node25 * self, Node25 * arg1, Node25 * arg2, Trap * arg3) = (Node25 * (*)(Node25 * self, Node25 * arg1, Node25 * arg2, Trap * arg3)) 0x0;
Node25 * (*Node25::ptr::_new2)() = (Node25 * (*)()) 0x0;
int (*Node25::ptr::_Remove2)() = (int (*)()) 0x0;
void (*Node25::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Node25 * (*Node25::ptr::_New)(Node25 * self, Node25 * arg1, Node25 * arg2, Trap * arg3) = (Node25 * (*)(Node25 * self, Node25 * arg1, Node25 * arg2, Trap * arg3)) 0x0;
Node25 * (*Node25::ptr::_new2)() = (Node25 * (*)()) 0x819b0d0;
int (*Node25::ptr::_Remove2)() = (int (*)()) 0x0;
void (*Node25::ptr::_mark)() = (void (*)()) 0x8089c70;
#endif
#endif
