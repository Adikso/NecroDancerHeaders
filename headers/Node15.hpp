// Generated automatically. Do not edit!
#ifndef _Node15_
#define _Node15_
class FamiliarFixed;
class String;
#include "Object.hpp"

class Node15 : public Object  {
public:
    Node15 * _succ;
    Node15 * _pred;
    FamiliarFixed * _data;

    // Wrappers
    Node15() {
        ptr::CSTR_Node15(this);
    }

    inline Node15 * _New(Node15 * arg1, Node15 * arg2, FamiliarFixed * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node15 * _new2() { return ptr::_new2(); }
    inline virtual int Remove2() { return ptr::_Remove2(); }
    inline void _mark() { ptr::_mark(); }
    inline Node15 * _New(String * key, int value, int color, Node15 * parent) { return ptr::_New_2(this, key, value, color, parent); }

    class ptr {
    public:
        static Node15 * (*_New)(Node15 * self, Node15 * arg1, Node15 * arg2, FamiliarFixed * arg3);
        static Node15 * (*_new2)();
        static int (*_Remove2)();
        static void (*_mark)();
        static void (*CSTR_Node15)(Node15 * self);
        static Node15 * (*_New_2)(Node15 * self, String * key, int value, int color, Node15 * parent);
    };
};

#ifdef _WIN32

Node15 * (*Node15::ptr::_New)(Node15 * self, Node15 * arg1, Node15 * arg2, FamiliarFixed * arg3) = (Node15 * (*)(Node15 * self, Node15 * arg1, Node15 * arg2, FamiliarFixed * arg3)) 0x0;
Node15 * (*Node15::ptr::_new2)() = (Node15 * (*)()) 0x0;
int (*Node15::ptr::_Remove2)() = (int (*)()) 0x0;
void (*Node15::ptr::_mark)() = (void (*)()) 0x0;
void (*Node15::ptr::CSTR_Node15)(Node15 * self) = (void (*)(Node15 * self)) 0x580fe0;
Node15 * (*Node15::ptr::_New_2)(Node15 * self, String * key, int value, int color, Node15 * parent) = (Node15 * (*)(Node15 * self, String * key, int value, int color, Node15 * parent)) 0x5810d0;
#endif

#ifdef __linux__

Node15 * (*Node15::ptr::_New)(Node15 * self, Node15 * arg1, Node15 * arg2, FamiliarFixed * arg3) = (Node15 * (*)(Node15 * self, Node15 * arg1, Node15 * arg2, FamiliarFixed * arg3)) 0x0;
Node15 * (*Node15::ptr::_new2)() = (Node15 * (*)()) 0x81945c0;
int (*Node15::ptr::_Remove2)() = (int (*)()) 0x0;
void (*Node15::ptr::_mark)() = (void (*)()) 0x808ab10;
void (*Node15::ptr::CSTR_Node15)(Node15 * self) = (void (*)(Node15 * self)) 0x8194380;
Node15 * (*Node15::ptr::_New_2)(Node15 * self, String * key, int value, int color, Node15 * parent) = (Node15 * (*)(Node15 * self, String * key, int value, int color, Node15 * parent)) 0x0;
#endif
#endif
