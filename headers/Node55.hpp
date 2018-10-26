// Generated automatically. Do not edit!
#ifndef _Node55_
#define _Node55_
class BeatAnimationData;
#include "Object.hpp"

class Node55 : public Object  {
public:
    int key;
    Node55 * right;
    Node55 * left;
    BeatAnimationData * value;
    int color;
    Node55 * parent;

    // Wrappers
    Node55() {
        ptr::CSTR_Node55(this);
    }

    inline Node55 * _New(int arg1, BeatAnimationData * arg2, int arg3, Node55 * arg4) { return ptr::_New(this, arg1, arg2, arg3, arg4); }
    inline Node55 * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node55 * (*_New)(Node55 * self, int arg1, BeatAnimationData * arg2, int arg3, Node55 * arg4);
        static Node55 * (*_new2)();
        static void (*_mark)();
        static void (*CSTR_Node55)(Node55 * self);
    };
};

#ifdef _WIN32

Node55 * (*Node55::ptr::_New)(Node55 * self, int arg1, BeatAnimationData * arg2, int arg3, Node55 * arg4) = (Node55 * (*)(Node55 * self, int arg1, BeatAnimationData * arg2, int arg3, Node55 * arg4)) 0x0;
Node55 * (*Node55::ptr::_new2)() = (Node55 * (*)()) 0x0;
void (*Node55::ptr::_mark)() = (void (*)()) 0x0;
void (*Node55::ptr::CSTR_Node55)(Node55 * self) = (void (*)(Node55 * self)) 0x6162a0;
#endif

#ifdef __linux__

Node55 * (*Node55::ptr::_New)(Node55 * self, int arg1, BeatAnimationData * arg2, int arg3, Node55 * arg4) = (Node55 * (*)(Node55 * self, int arg1, BeatAnimationData * arg2, int arg3, Node55 * arg4)) 0x0;
Node55 * (*Node55::ptr::_new2)() = (Node55 * (*)()) 0x81e1680;
void (*Node55::ptr::_mark)() = (void (*)()) 0x808b210;
void (*Node55::ptr::CSTR_Node55)(Node55 * self) = (void (*)(Node55 * self)) 0x81e1440;
#endif
#endif
