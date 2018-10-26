// Generated automatically. Do not edit!
#ifndef _Node2_
#define _Node2_
class XMLNode;
#include "Object.hpp"

class Node2 : public Object  {
public:
    Node2 * _succ;
    Node2 * _pred;
    XMLNode * _data;

    // Wrappers
    inline Node2 * _New(Node2 * arg1, Node2 * arg2, XMLNode * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node2 * _new2() { return ptr::_new2(); }
    inline virtual Node2 * GetNode() { return ptr::_GetNode(); }
    inline virtual Node2 * PrevNode() { return ptr::_PrevNode(); }
    inline virtual int Remove3() { return ptr::_Remove3(); }
    inline virtual Node2 * NextNode() { return ptr::_NextNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node2 * (*_New)(Node2 * self, Node2 * arg1, Node2 * arg2, XMLNode * arg3);
        static Node2 * (*_new2)();
        static Node2 * (*_GetNode)();
        static Node2 * (*_PrevNode)();
        static int (*_Remove3)();
        static Node2 * (*_NextNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Node2 * (*Node2::ptr::_New)(Node2 * self, Node2 * arg1, Node2 * arg2, XMLNode * arg3) = (Node2 * (*)(Node2 * self, Node2 * arg1, Node2 * arg2, XMLNode * arg3)) 0x0;
Node2 * (*Node2::ptr::_new2)() = (Node2 * (*)()) 0x0;
Node2 * (*Node2::ptr::_GetNode)() = (Node2 * (*)()) 0x0;
Node2 * (*Node2::ptr::_PrevNode)() = (Node2 * (*)()) 0x0;
int (*Node2::ptr::_Remove3)() = (int (*)()) 0x0;
Node2 * (*Node2::ptr::_NextNode)() = (Node2 * (*)()) 0x0;
void (*Node2::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Node2 * (*Node2::ptr::_New)(Node2 * self, Node2 * arg1, Node2 * arg2, XMLNode * arg3) = (Node2 * (*)(Node2 * self, Node2 * arg1, Node2 * arg2, XMLNode * arg3)) 0x0;
Node2 * (*Node2::ptr::_new2)() = (Node2 * (*)()) 0x81460b0;
Node2 * (*Node2::ptr::_GetNode)() = (Node2 * (*)()) 0x806f5d0;
Node2 * (*Node2::ptr::_PrevNode)() = (Node2 * (*)()) 0x0;
int (*Node2::ptr::_Remove3)() = (int (*)()) 0x0;
Node2 * (*Node2::ptr::_NextNode)() = (Node2 * (*)()) 0x806f5e0;
void (*Node2::ptr::_mark)() = (void (*)()) 0x80a7cc0;
#endif
#endif
