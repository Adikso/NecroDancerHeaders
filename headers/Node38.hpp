// Generated automatically. Do not edit!
#ifndef _Node38_
#define _Node38_
class Sprite;
#include "Object.hpp"

class Node38 : public Object  {
public:
    int key;
    Node38 * right;
    Node38 * left;
    Sprite * value;
    int color;
    Node38 * parent;

    // Wrappers
    Node38() {
        ptr::CSTR_Node38(this);
    }

    inline Node38 * _New(int arg1, Sprite * arg2, int arg3, Node38 * arg4) { return ptr::_New(this, arg1, arg2, arg3, arg4); }
    inline Node38 * _new2() { return ptr::_new2(); }
    inline virtual int Count2(int arg1) { return ptr::_Count2(this, arg1); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node38 * (*_New)(Node38 * self, int arg1, Sprite * arg2, int arg3, Node38 * arg4);
        static Node38 * (*_new2)();
        static int (*_Count2)(Node38 * self, int arg1);
        static void (*_mark)();
        static void (*CSTR_Node38)(Node38 * self);
    };
};

#ifdef _WIN32

Node38 * (*Node38::ptr::_New)(Node38 * self, int arg1, Sprite * arg2, int arg3, Node38 * arg4) = (Node38 * (*)(Node38 * self, int arg1, Sprite * arg2, int arg3, Node38 * arg4)) 0x0;
Node38 * (*Node38::ptr::_new2)() = (Node38 * (*)()) 0x0;
int (*Node38::ptr::_Count2)(Node38 * self, int arg1) = (int (*)(Node38 * self, int arg1)) 0x0;
void (*Node38::ptr::_mark)() = (void (*)()) 0x0;
void (*Node38::ptr::CSTR_Node38)(Node38 * self) = (void (*)(Node38 * self)) 0x5ecc90;
#endif

#ifdef __linux__

Node38 * (*Node38::ptr::_New)(Node38 * self, int arg1, Sprite * arg2, int arg3, Node38 * arg4) = (Node38 * (*)(Node38 * self, int arg1, Sprite * arg2, int arg3, Node38 * arg4)) 0x0;
Node38 * (*Node38::ptr::_new2)() = (Node38 * (*)()) 0x81b0170;
int (*Node38::ptr::_Count2)(Node38 * self, int arg1) = (int (*)(Node38 * self, int arg1)) 0x0;
void (*Node38::ptr::_mark)() = (void (*)()) 0x809acf0;
void (*Node38::ptr::CSTR_Node38)(Node38 * self) = (void (*)(Node38 * self)) 0x81aff90;
#endif
#endif
