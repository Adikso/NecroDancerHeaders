// Generated automatically. Do not edit!
#ifndef _Node5_
#define _Node5_
class SpriteInitData;
class String;
#include "Object.hpp"

class Node5 : public Object  {
public:
    String * key;
    Node5 * right;
    Node5 * left;
    SpriteInitData * value;
    int color;
    Node5 * parent;

    // Wrappers
    Node5() {
        ptr::CSTR_Node5(this);
    }

    inline Node5 * _New(String * arg1, SpriteInitData * arg2, int arg3, Node5 * arg4) { return ptr::_New(this, arg1, arg2, arg3, arg4); }
    inline Node5 * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node5 * (*_New)(Node5 * self, String * arg1, SpriteInitData * arg2, int arg3, Node5 * arg4);
        static Node5 * (*_new2)();
        static void (*_mark)();
        static void (*CSTR_Node5)(Node5 * self);
    };
};

#ifdef _WIN32

Node5 * (*Node5::ptr::_New)(Node5 * self, String * arg1, SpriteInitData * arg2, int arg3, Node5 * arg4) = (Node5 * (*)(Node5 * self, String * arg1, SpriteInitData * arg2, int arg3, Node5 * arg4)) 0x0;
Node5 * (*Node5::ptr::_new2)() = (Node5 * (*)()) 0x0;
void (*Node5::ptr::_mark)() = (void (*)()) 0x0;
void (*Node5::ptr::CSTR_Node5)(Node5 * self) = (void (*)(Node5 * self)) 0x53c020;
#endif

#ifdef __linux__

Node5 * (*Node5::ptr::_New)(Node5 * self, String * arg1, SpriteInitData * arg2, int arg3, Node5 * arg4) = (Node5 * (*)(Node5 * self, String * arg1, SpriteInitData * arg2, int arg3, Node5 * arg4)) 0x0;
Node5 * (*Node5::ptr::_new2)() = (Node5 * (*)()) 0x8158690;
void (*Node5::ptr::_mark)() = (void (*)()) 0x808aa10;
void (*Node5::ptr::CSTR_Node5)(Node5 * self) = (void (*)(Node5 * self)) 0x8158450;
#endif
#endif
