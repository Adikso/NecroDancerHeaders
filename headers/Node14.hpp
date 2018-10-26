// Generated automatically. Do not edit!
#ifndef _Node14_
#define _Node14_
class Familiar;
#include "Object.hpp"

class Node14 : public Object  {
public:
    Node14 * _succ;
    Node14 * _pred;
    Familiar * _data;

    // Wrappers
    inline Node14 * _New(Node14 * arg1, Node14 * arg2, Familiar * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node14 * _new2() { return ptr::_new2(); }
    inline virtual int Remove3() { return ptr::_Remove3(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node14 * (*_New)(Node14 * self, Node14 * arg1, Node14 * arg2, Familiar * arg3);
        static Node14 * (*_new2)();
        static int (*_Remove3)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Node14 * (*Node14::ptr::_New)(Node14 * self, Node14 * arg1, Node14 * arg2, Familiar * arg3) = (Node14 * (*)(Node14 * self, Node14 * arg1, Node14 * arg2, Familiar * arg3)) 0x0;
Node14 * (*Node14::ptr::_new2)() = (Node14 * (*)()) 0x0;
int (*Node14::ptr::_Remove3)() = (int (*)()) 0x0;
void (*Node14::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Node14 * (*Node14::ptr::_New)(Node14 * self, Node14 * arg1, Node14 * arg2, Familiar * arg3) = (Node14 * (*)(Node14 * self, Node14 * arg1, Node14 * arg2, Familiar * arg3)) 0x0;
Node14 * (*Node14::ptr::_new2)() = (Node14 * (*)()) 0x8193050;
int (*Node14::ptr::_Remove3)() = (int (*)()) 0x8095770;
void (*Node14::ptr::_mark)() = (void (*)()) 0x808c050;
#endif
#endif
