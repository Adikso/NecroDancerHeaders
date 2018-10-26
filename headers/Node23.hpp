// Generated automatically. Do not edit!
#ifndef _Node23_
#define _Node23_
class Tile;
#include "Object.hpp"

class Node23 : public Object  {
public:
    Node23 * left;
    Node23 * right;
    Node23 * parent;
    Tile * value;
    int key;
    int color;

    // Wrappers
    inline virtual Node23 * NextNode() { return ptr::_NextNode(); }
    inline virtual Tile * Value() { return ptr::_Value(); }
    inline Node23 * _New(int arg1, Tile * arg2, int arg3, Node23 * arg4) { return ptr::_New(this, arg1, arg2, arg3, arg4); }
    inline Node23 * _new2() { return ptr::_new2(); }
    inline virtual int Key() { return ptr::_Key(); }
    inline virtual int Count2(int arg1) { return ptr::_Count2(this, arg1); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node23 * (*_NextNode)();
        static Tile * (*_Value)();
        static Node23 * (*_New)(Node23 * self, int arg1, Tile * arg2, int arg3, Node23 * arg4);
        static Node23 * (*_new2)();
        static int (*_Key)();
        static int (*_Count2)(Node23 * self, int arg1);
        static void (*_mark)();
    };
};

#ifdef _WIN32

Node23 * (*Node23::ptr::_NextNode)() = (Node23 * (*)()) 0x0;
Tile * (*Node23::ptr::_Value)() = (Tile * (*)()) 0x0;
Node23 * (*Node23::ptr::_New)(Node23 * self, int arg1, Tile * arg2, int arg3, Node23 * arg4) = (Node23 * (*)(Node23 * self, int arg1, Tile * arg2, int arg3, Node23 * arg4)) 0x0;
Node23 * (*Node23::ptr::_new2)() = (Node23 * (*)()) 0x0;
int (*Node23::ptr::_Key)() = (int (*)()) 0x0;
int (*Node23::ptr::_Count2)(Node23 * self, int arg1) = (int (*)(Node23 * self, int arg1)) 0x0;
void (*Node23::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Node23 * (*Node23::ptr::_NextNode)() = (Node23 * (*)()) 0x0;
Tile * (*Node23::ptr::_Value)() = (Tile * (*)()) 0x0;
Node23 * (*Node23::ptr::_New)(Node23 * self, int arg1, Tile * arg2, int arg3, Node23 * arg4) = (Node23 * (*)(Node23 * self, int arg1, Tile * arg2, int arg3, Node23 * arg4)) 0x0;
Node23 * (*Node23::ptr::_new2)() = (Node23 * (*)()) 0x81984f0;
int (*Node23::ptr::_Key)() = (int (*)()) 0x0;
int (*Node23::ptr::_Count2)(Node23 * self, int arg1) = (int (*)(Node23 * self, int arg1)) 0x0;
void (*Node23::ptr::_mark)() = (void (*)()) 0x808e7c0;
#endif
#endif
