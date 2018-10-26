// Generated automatically. Do not edit!
#ifndef _Node49_
#define _Node49_
class SaleChest;
#include "Object.hpp"

class Node49 : public Object  {
public:
    Node49 * _succ;
    Node49 * _pred;
    SaleChest * _data;

    // Wrappers
    inline Node49 * _New(Node49 * arg1, Node49 * arg2, SaleChest * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node49 * _new2() { return ptr::_new2(); }
    inline virtual int Remove3() { return ptr::_Remove3(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node49 * (*_New)(Node49 * self, Node49 * arg1, Node49 * arg2, SaleChest * arg3);
        static Node49 * (*_new2)();
        static int (*_Remove3)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Node49 * (*Node49::ptr::_New)(Node49 * self, Node49 * arg1, Node49 * arg2, SaleChest * arg3) = (Node49 * (*)(Node49 * self, Node49 * arg1, Node49 * arg2, SaleChest * arg3)) 0x0;
Node49 * (*Node49::ptr::_new2)() = (Node49 * (*)()) 0x0;
int (*Node49::ptr::_Remove3)() = (int (*)()) 0x0;
void (*Node49::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Node49 * (*Node49::ptr::_New)(Node49 * self, Node49 * arg1, Node49 * arg2, SaleChest * arg3) = (Node49 * (*)(Node49 * self, Node49 * arg1, Node49 * arg2, SaleChest * arg3)) 0x0;
Node49 * (*Node49::ptr::_new2)() = (Node49 * (*)()) 0x81bf340;
int (*Node49::ptr::_Remove3)() = (int (*)()) 0x8093d50;
void (*Node49::ptr::_mark)() = (void (*)()) 0x80882d0;
#endif
#endif
