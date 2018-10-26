// Generated automatically. Do not edit!
#ifndef _Node10_
#define _Node10_
#include "Object.hpp"

class Node10 : public Object  {
public:
    int key;
    Node10 * right;
    Node10 * left;
    int value;
    int color;
    Node10 * parent;

    // Wrappers
    Node10() {
        ptr::CSTR_Node10(this);
    }

    inline Node10 * _New(int arg1, int arg2, int arg3, Node10 * arg4) { return ptr::_New(this, arg1, arg2, arg3, arg4); }
    inline Node10 * _new2() { return ptr::_new2(); }
    inline virtual int Count2(int arg1) { return ptr::_Count2(this, arg1); }
    inline virtual Node10 * NextNode() { return ptr::_NextNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node10 * (*_New)(Node10 * self, int arg1, int arg2, int arg3, Node10 * arg4);
        static Node10 * (*_new2)();
        static int (*_Count2)(Node10 * self, int arg1);
        static Node10 * (*_NextNode)();
        static void (*_mark)();
        static void (*CSTR_Node10)(Node10 * self);
    };
};

#ifdef _WIN32

Node10 * (*Node10::ptr::_New)(Node10 * self, int arg1, int arg2, int arg3, Node10 * arg4) = (Node10 * (*)(Node10 * self, int arg1, int arg2, int arg3, Node10 * arg4)) 0x0;
Node10 * (*Node10::ptr::_new2)() = (Node10 * (*)()) 0x0;
int (*Node10::ptr::_Count2)(Node10 * self, int arg1) = (int (*)(Node10 * self, int arg1)) 0x0;
Node10 * (*Node10::ptr::_NextNode)() = (Node10 * (*)()) 0x0;
void (*Node10::ptr::_mark)() = (void (*)()) 0x0;
void (*Node10::ptr::CSTR_Node10)(Node10 * self) = (void (*)(Node10 * self)) 0x57e270;
#endif

#ifdef __linux__

Node10 * (*Node10::ptr::_New)(Node10 * self, int arg1, int arg2, int arg3, Node10 * arg4) = (Node10 * (*)(Node10 * self, int arg1, int arg2, int arg3, Node10 * arg4)) 0x0;
Node10 * (*Node10::ptr::_new2)() = (Node10 * (*)()) 0x817f180;
int (*Node10::ptr::_Count2)(Node10 * self, int arg1) = (int (*)(Node10 * self, int arg1)) 0x0;
Node10 * (*Node10::ptr::_NextNode)() = (Node10 * (*)()) 0x8070be0;
void (*Node10::ptr::_mark)() = (void (*)()) 0x8086f90;
void (*Node10::ptr::CSTR_Node10)(Node10 * self) = (void (*)(Node10 * self)) 0x817ef40;
#endif
#endif
