// Generated automatically. Do not edit!
#ifndef _Node18_
#define _Node18_
class String;
#include "Object.hpp"

class Node18 : public Object  {
public:
    Node18 * _succ;
    Node18 * _pred;
    String * _data;

    // Wrappers
    Node18() {
        ptr::CSTR_Node18(this);
    }

    inline Node18 * _New(Node18 * succ, Node18 * pred, String * data) { return ptr::_New(this, succ, pred, data); }
    inline Node18 * _new2() { return ptr::_new2(); }
    inline virtual int Remove3() { return ptr::_Remove3(); }
    inline virtual Node18 * GetNode() { return ptr::_GetNode(); }
    inline virtual Node18 * PrevNode() { return ptr::_PrevNode(); }
    inline virtual Node18 * NextNode() { return ptr::_NextNode(); }
    inline virtual String * Value() { return ptr::_Value(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node18 * (*_New)(Node18 * self, Node18 * succ, Node18 * pred, String * data);
        static Node18 * (*_new2)();
        static int (*_Remove3)();
        static Node18 * (*_GetNode)();
        static Node18 * (*_PrevNode)();
        static Node18 * (*_NextNode)();
        static String * (*_Value)(Node18 * self);
        static void (*_mark)();
        static void (*CSTR_Node18)(Node18 * self);
    };
};

#ifdef _WIN32

Node18 * (*Node18::ptr::_New)(Node18 * self, Node18 * succ, Node18 * pred, String * data) = (Node18 * (*)(Node18 * self, Node18 * succ, Node18 * pred, String * data)) 0x5c3a80;
Node18 * (*Node18::ptr::_new2)() = (Node18 * (*)()) 0x0;
int (*Node18::ptr::_Remove3)() = (int (*)()) 0x0;
Node18 * (*Node18::ptr::_GetNode)() = (Node18 * (*)()) 0x0;
Node18 * (*Node18::ptr::_PrevNode)() = (Node18 * (*)()) 0x0;
Node18 * (*Node18::ptr::_NextNode)() = (Node18 * (*)()) 0x0;
String * (*Node18::ptr::_Value)(Node18 * self) = (String * (*)(Node18 * self)) 0x5c3c50;
void (*Node18::ptr::_mark)() = (void (*)()) 0x0;
void (*Node18::ptr::CSTR_Node18)(Node18 * self) = (void (*)(Node18 * self)) 0x5c3940;
#endif

#ifdef __linux__

Node18 * (*Node18::ptr::_New)(Node18 * self, Node18 * succ, Node18 * pred, String * data) = (Node18 * (*)(Node18 * self, Node18 * succ, Node18 * pred, String * data)) 0x0;
Node18 * (*Node18::ptr::_new2)() = (Node18 * (*)()) 0x81957c0;
int (*Node18::ptr::_Remove3)() = (int (*)()) 0x8090ea0;
Node18 * (*Node18::ptr::_GetNode)() = (Node18 * (*)()) 0x0;
Node18 * (*Node18::ptr::_PrevNode)() = (Node18 * (*)()) 0x0;
Node18 * (*Node18::ptr::_NextNode)() = (Node18 * (*)()) 0x0;
String * (*Node18::ptr::_Value)(Node18 * self) = (String * (*)(Node18 * self)) 0x0;
void (*Node18::ptr::_mark)() = (void (*)()) 0x8088170;
void (*Node18::ptr::CSTR_Node18)(Node18 * self) = (void (*)(Node18 * self)) 0x8195580;
#endif
#endif
