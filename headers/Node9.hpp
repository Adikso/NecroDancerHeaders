// Generated automatically. Do not edit!
#ifndef _Node9_
#define _Node9_
#include "Object.hpp"

class Node9 : public Object  {
public:
    int key;
    Node9 * right;
    Node9 * left;
    int value;
    int color;
    Node9 * parent;

    // Wrappers
    Node9() {
        ptr::CSTR_Node9(this);
    }

    inline Node9 * _New(int key, int value, int color, Node9 * parent) { return ptr::_New(this, key, value, color, parent); }
    inline Node9 * _new2() { return ptr::_new2(); }
    inline virtual int Count2(int n) { return ptr::_Count2(this, n); }
    inline virtual Node9 * NextNode() { return ptr::NextNode(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static Node9 * (*_New)(Node9 * self, int key, int value, int color, Node9 * parent);
        static Node9 * (*_new2)();
        static int (*_Count2)(Node9 * self, int n);
        static Node9 * (*NextNode)(Node9 * self);
        static void (*mark)(Node9 * self);
        static void (*CSTR_Node9)(Node9 * self);
    };
};

#ifdef _WIN32

Node9 * (*Node9::ptr::_New)(Node9 * self, int key, int value, int color, Node9 * parent) = (Node9 * (*)(Node9 * self, int key, int value, int color, Node9 * parent)) 0x5767d0;
Node9 * (*Node9::ptr::_new2)() = (Node9 * (*)()) 0x0;
int (*Node9::ptr::_Count2)(Node9 * self, int n) = (int (*)(Node9 * self, int n)) 0x576840;
Node9 * (*Node9::ptr::NextNode)(Node9 * self) = (Node9 * (*)(Node9 * self)) 0x53bda0;
void (*Node9::ptr::mark)(Node9 * self) = (void (*)(Node9 * self)) 0x576880;
void (*Node9::ptr::CSTR_Node9)(Node9 * self) = (void (*)(Node9 * self)) 0x576740;
#endif

#ifdef __linux__

Node9 * (*Node9::ptr::_New)(Node9 * self, int key, int value, int color, Node9 * parent) = (Node9 * (*)(Node9 * self, int key, int value, int color, Node9 * parent)) 0x0;
Node9 * (*Node9::ptr::_new2)() = (Node9 * (*)()) 0x817e830;
int (*Node9::ptr::_Count2)(Node9 * self, int n) = (int (*)(Node9 * self, int n)) 0x0;
Node9 * (*Node9::ptr::NextNode)(Node9 * self) = (Node9 * (*)(Node9 * self)) 0x8070ae0;
void (*Node9::ptr::mark)(Node9 * self) = (void (*)(Node9 * self)) 0x8087cb0;
void (*Node9::ptr::CSTR_Node9)(Node9 * self) = (void (*)(Node9 * self)) 0x817e5f0;
#endif
#endif
