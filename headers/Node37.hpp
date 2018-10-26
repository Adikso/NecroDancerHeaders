// Generated automatically. Do not edit!
#ifndef _Node37_
#define _Node37_
class String;
#include "Object.hpp"

class Node37 : public Object  {
public:
    String * key;
    Node37 * right;
    Node37 * left;
    Object * value;
    int color;
    Node37 * parent;

    // Wrappers
    Node37() {
        ptr::CSTR_Node37(this);
    }

    inline Node37 * _New(String * arg1, Object * arg2, int arg3, Node37 * arg4) { return ptr::_New(this, arg1, arg2, arg3, arg4); }
    inline Node37 * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node37 * (*_New)(Node37 * self, String * arg1, Object * arg2, int arg3, Node37 * arg4);
        static Node37 * (*_new2)();
        static void (*_mark)();
        static void (*CSTR_Node37)(Node37 * self);
    };
};

#ifdef _WIN32

Node37 * (*Node37::ptr::_New)(Node37 * self, String * arg1, Object * arg2, int arg3, Node37 * arg4) = (Node37 * (*)(Node37 * self, String * arg1, Object * arg2, int arg3, Node37 * arg4)) 0x0;
Node37 * (*Node37::ptr::_new2)() = (Node37 * (*)()) 0x0;
void (*Node37::ptr::_mark)() = (void (*)()) 0x0;
void (*Node37::ptr::CSTR_Node37)(Node37 * self) = (void (*)(Node37 * self)) 0x5e1910;
#endif

#ifdef __linux__

Node37 * (*Node37::ptr::_New)(Node37 * self, String * arg1, Object * arg2, int arg3, Node37 * arg4) = (Node37 * (*)(Node37 * self, String * arg1, Object * arg2, int arg3, Node37 * arg4)) 0x0;
Node37 * (*Node37::ptr::_new2)() = (Node37 * (*)()) 0x81ae1b0;
void (*Node37::ptr::_mark)() = (void (*)()) 0x8088c50;
void (*Node37::ptr::CSTR_Node37)(Node37 * self) = (void (*)(Node37 * self)) 0x81adf70;
#endif
#endif
