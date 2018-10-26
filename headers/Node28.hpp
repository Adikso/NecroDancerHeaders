// Generated automatically. Do not edit!
#ifndef _Node28_
#define _Node28_
class Item;
#include "Object.hpp"

class Node28 : public Object  {
public:
    Node28 * _succ;
    Node28 * _pred;
    Item * _data;

    // Wrappers
    inline Node28 * _New(Node28 * arg1, Node28 * arg2, Item * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node28 * _new2() { return ptr::_new2(); }
    inline virtual int Remove3() { return ptr::_Remove3(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node28 * (*_New)(Node28 * self, Node28 * arg1, Node28 * arg2, Item * arg3);
        static Node28 * (*_new2)();
        static int (*_Remove3)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Node28 * (*Node28::ptr::_New)(Node28 * self, Node28 * arg1, Node28 * arg2, Item * arg3) = (Node28 * (*)(Node28 * self, Node28 * arg1, Node28 * arg2, Item * arg3)) 0x0;
Node28 * (*Node28::ptr::_new2)() = (Node28 * (*)()) 0x0;
int (*Node28::ptr::_Remove3)() = (int (*)()) 0x0;
void (*Node28::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Node28 * (*Node28::ptr::_New)(Node28 * self, Node28 * arg1, Node28 * arg2, Item * arg3) = (Node28 * (*)(Node28 * self, Node28 * arg1, Node28 * arg2, Item * arg3)) 0x0;
Node28 * (*Node28::ptr::_new2)() = (Node28 * (*)()) 0x81a04c0;
int (*Node28::ptr::_Remove3)() = (int (*)()) 0x8091740;
void (*Node28::ptr::_mark)() = (void (*)()) 0x8087e10;
#endif
#endif
