// Generated automatically. Do not edit!
#ifndef _Node43_
#define _Node43_
#include "Object.hpp"

class Node43 : public Object  {
public:
    Node43 * _succ;
    Node43 * _pred;
    int _data;

    // Wrappers
    inline Node43 * _New(Node43 * succ, Node43 * pred, int data) { return ptr::_New(this, succ, pred, data); }
    inline Node43 * _new2() { return ptr::_new2(); }
    inline virtual Node43 * GetNode() { return ptr::_GetNode(); }
    inline virtual Node43 * NextNode() { return ptr::_NextNode(); }
    inline virtual int Remove3() { return ptr::_Remove3(); }
    inline virtual Node43 * PrevNode() { return ptr::_PrevNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node43 * (*_New)(Node43 * self, Node43 * succ, Node43 * pred, int data);
        static Node43 * (*_new2)();
        static Node43 * (*_GetNode)();
        static Node43 * (*_NextNode)();
        static int (*_Remove3)();
        static Node43 * (*_PrevNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Node43 * (*Node43::ptr::_New)(Node43 * self, Node43 * succ, Node43 * pred, int data) = (Node43 * (*)(Node43 * self, Node43 * succ, Node43 * pred, int data)) 0x5f7dd0;
Node43 * (*Node43::ptr::_new2)() = (Node43 * (*)()) 0x0;
Node43 * (*Node43::ptr::_GetNode)() = (Node43 * (*)()) 0x0;
Node43 * (*Node43::ptr::_NextNode)() = (Node43 * (*)()) 0x0;
int (*Node43::ptr::_Remove3)() = (int (*)()) 0x0;
Node43 * (*Node43::ptr::_PrevNode)() = (Node43 * (*)()) 0x0;
void (*Node43::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Node43 * (*Node43::ptr::_New)(Node43 * self, Node43 * succ, Node43 * pred, int data) = (Node43 * (*)(Node43 * self, Node43 * succ, Node43 * pred, int data)) 0x0;
Node43 * (*Node43::ptr::_new2)() = (Node43 * (*)()) 0x81bbc70;
Node43 * (*Node43::ptr::_GetNode)() = (Node43 * (*)()) 0x0;
Node43 * (*Node43::ptr::_NextNode)() = (Node43 * (*)()) 0x0;
int (*Node43::ptr::_Remove3)() = (int (*)()) 0x80918e0;
Node43 * (*Node43::ptr::_PrevNode)() = (Node43 * (*)()) 0x0;
void (*Node43::ptr::_mark)() = (void (*)()) 0x80897d0;
#endif
#endif
