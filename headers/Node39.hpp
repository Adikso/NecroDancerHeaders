// Generated automatically. Do not edit!
#ifndef _Node39_
#define _Node39_
class Sprite;
class String;
#include "Object.hpp"

class Node39 : public Object  {
public:
    String * key;
    Node39 * right;
    Node39 * left;
    Sprite * value;
    int color;
    Node39 * parent;

    // Wrappers
    inline Node39 * _New(String * arg1, Sprite * arg2, int arg3, Node39 * arg4) { return ptr::_New(this, arg1, arg2, arg3, arg4); }
    inline Node39 * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node39 * (*_New)(Node39 * self, String * arg1, Sprite * arg2, int arg3, Node39 * arg4);
        static Node39 * (*_new2)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Node39 * (*Node39::ptr::_New)(Node39 * self, String * arg1, Sprite * arg2, int arg3, Node39 * arg4) = (Node39 * (*)(Node39 * self, String * arg1, Sprite * arg2, int arg3, Node39 * arg4)) 0x0;
Node39 * (*Node39::ptr::_new2)() = (Node39 * (*)()) 0x0;
void (*Node39::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Node39 * (*Node39::ptr::_New)(Node39 * self, String * arg1, Sprite * arg2, int arg3, Node39 * arg4) = (Node39 * (*)(Node39 * self, String * arg1, Sprite * arg2, int arg3, Node39 * arg4)) 0x0;
Node39 * (*Node39::ptr::_new2)() = (Node39 * (*)()) 0x81b82b0;
void (*Node39::ptr::_mark)() = (void (*)()) 0x8088f10;
#endif
#endif
