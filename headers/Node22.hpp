// Generated automatically. Do not edit!
#ifndef _Node22_
#define _Node22_
class IntMap4;
class Tile;
#include "Object.hpp"

class Node22 : public Object  {
public:
    Node22 * left;
    Node22 * right;
    Node22 * parent;
    IntMap4 * value;
    int key;
    int color;

    // Wrappers
    Node22() {
        ptr::CSTR_Node22(this);
    }

    inline virtual Node22 * NextNode() { return ptr::_NextNode(); }
    inline virtual IntMap4 * Value() { return ptr::_Value(this); }
    inline Node22 * _New(int arg1, IntMap4 * arg2, int arg3, Node22 * arg4) { return ptr::_New(this, arg1, arg2, arg3, arg4); }
    inline Node22 * _new2() { return ptr::_new2(); }
    inline virtual int Key() { return ptr::_Key(); }
    inline virtual int Count2(int arg1) { return ptr::_Count2(this, arg1); }
    inline void mark() { ptr::mark(this); }
    inline Node22 * _New(int key, Tile * value, int color, Node22 * parent) { return ptr::_New_2(this, key, value, color, parent); }

    class ptr {
    public:
        static Node22 * (*_NextNode)();
        static IntMap4 * (*_Value)(Node22 * self);
        static Node22 * (*_New)(Node22 * self, int arg1, IntMap4 * arg2, int arg3, Node22 * arg4);
        static Node22 * (*_new2)();
        static int (*_Key)();
        static int (*_Count2)(Node22 * self, int arg1);
        static void (*mark)(Node22 * self);
        static Node22 * (*_New_2)(Node22 * self, int key, Tile * value, int color, Node22 * parent);
        static void (*CSTR_Node22)(Node22 * self);
    };
};

#ifdef _WIN32

Node22 * (*Node22::ptr::_NextNode)() = (Node22 * (*)()) 0x0;
IntMap4 * (*Node22::ptr::_Value)(Node22 * self) = (IntMap4 * (*)(Node22 * self)) 0x406ec0;
Node22 * (*Node22::ptr::_New)(Node22 * self, int arg1, IntMap4 * arg2, int arg3, Node22 * arg4) = (Node22 * (*)(Node22 * self, int arg1, IntMap4 * arg2, int arg3, Node22 * arg4)) 0x0;
Node22 * (*Node22::ptr::_new2)() = (Node22 * (*)()) 0x0;
int (*Node22::ptr::_Key)() = (int (*)()) 0x0;
int (*Node22::ptr::_Count2)(Node22 * self, int arg1) = (int (*)(Node22 * self, int arg1)) 0x0;
void (*Node22::ptr::mark)(Node22 * self) = (void (*)(Node22 * self)) 0x41fec0;
Node22 * (*Node22::ptr::_New_2)(Node22 * self, int key, Tile * value, int color, Node22 * parent) = (Node22 * (*)(Node22 * self, int key, Tile * value, int color, Node22 * parent)) 0x5d6e10;
void (*Node22::ptr::CSTR_Node22)(Node22 * self) = (void (*)(Node22 * self)) 0x5d6f10;
#endif

#ifdef __linux__

Node22 * (*Node22::ptr::_NextNode)() = (Node22 * (*)()) 0x0;
IntMap4 * (*Node22::ptr::_Value)(Node22 * self) = (IntMap4 * (*)(Node22 * self)) 0x0;
Node22 * (*Node22::ptr::_New)(Node22 * self, int arg1, IntMap4 * arg2, int arg3, Node22 * arg4) = (Node22 * (*)(Node22 * self, int arg1, IntMap4 * arg2, int arg3, Node22 * arg4)) 0x0;
Node22 * (*Node22::ptr::_new2)() = (Node22 * (*)()) 0x8198110;
int (*Node22::ptr::_Key)() = (int (*)()) 0x0;
int (*Node22::ptr::_Count2)(Node22 * self, int arg1) = (int (*)(Node22 * self, int arg1)) 0x0;
void (*Node22::ptr::mark)(Node22 * self) = (void (*)(Node22 * self)) 0x8089570;
Node22 * (*Node22::ptr::_New_2)(Node22 * self, int key, Tile * value, int color, Node22 * parent) = (Node22 * (*)(Node22 * self, int key, Tile * value, int color, Node22 * parent)) 0x0;
void (*Node22::ptr::CSTR_Node22)(Node22 * self) = (void (*)(Node22 * self)) 0x8197ed0;
#endif
#endif
