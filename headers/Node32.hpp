// Generated automatically. Do not edit!
#ifndef _Node32_
#define _Node32_
class ChestObject;
#include "Object.hpp"

class Node32 : public Object  {
public:
    Node32 * _succ;
    Node32 * _pred;
    ChestObject * _data;

    // Wrappers
    inline Node32 * _New(Node32 * arg1, Node32 * arg2, ChestObject * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node32 * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node32 * (*_New)(Node32 * self, Node32 * arg1, Node32 * arg2, ChestObject * arg3);
        static Node32 * (*_new2)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Node32 * (*Node32::ptr::_New)(Node32 * self, Node32 * arg1, Node32 * arg2, ChestObject * arg3) = (Node32 * (*)(Node32 * self, Node32 * arg1, Node32 * arg2, ChestObject * arg3)) 0x0;
Node32 * (*Node32::ptr::_new2)() = (Node32 * (*)()) 0x0;
void (*Node32::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Node32 * (*Node32::ptr::_New)(Node32 * self, Node32 * arg1, Node32 * arg2, ChestObject * arg3) = (Node32 * (*)(Node32 * self, Node32 * arg1, Node32 * arg2, ChestObject * arg3)) 0x0;
Node32 * (*Node32::ptr::_new2)() = (Node32 * (*)()) 0x81a5420;
void (*Node32::ptr::_mark)() = (void (*)()) 0x808a550;
#endif
#endif
