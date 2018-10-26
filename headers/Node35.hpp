// Generated automatically. Do not edit!
#ifndef _Node35_
#define _Node35_
class String;
#include "Object.hpp"

class Node35 : public Object  {
public:
    String * key;
    Node35 * right;
    Node35 * left;
    String * value;
    int color;
    Node35 * parent;

    // Wrappers
    Node35() {
        ptr::CSTR_Node35(this);
    }

    inline Node35 * _New(String * key, String * value, int color, Node35 * parent) { return ptr::_New(this, key, value, color, parent); }
    inline Node35 * _new2() { return ptr::_new2(); }
    inline virtual Node35 * NextNode() { return ptr::_NextNode(); }
    inline virtual String * Key() { return ptr::_Key(); }
    inline virtual String * Value() { return ptr::_Value(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node35 * (*_New)(Node35 * self, String * key, String * value, int color, Node35 * parent);
        static Node35 * (*_new2)();
        static Node35 * (*_NextNode)();
        static String * (*_Key)();
        static String * (*_Value)(Node35 * self);
        static void (*_mark)();
        static void (*CSTR_Node35)(Node35 * self);
    };
};

#ifdef _WIN32

Node35 * (*Node35::ptr::_New)(Node35 * self, String * key, String * value, int color, Node35 * parent) = (Node35 * (*)(Node35 * self, String * key, String * value, int color, Node35 * parent)) 0x5e0b20;
Node35 * (*Node35::ptr::_new2)() = (Node35 * (*)()) 0x0;
Node35 * (*Node35::ptr::_NextNode)() = (Node35 * (*)()) 0x0;
String * (*Node35::ptr::_Key)() = (String * (*)()) 0x0;
String * (*Node35::ptr::_Value)(Node35 * self) = (String * (*)(Node35 * self)) 0x5e0c30;
void (*Node35::ptr::_mark)() = (void (*)()) 0x0;
void (*Node35::ptr::CSTR_Node35)(Node35 * self) = (void (*)(Node35 * self)) 0x5e0910;
#endif

#ifdef __linux__

Node35 * (*Node35::ptr::_New)(Node35 * self, String * key, String * value, int color, Node35 * parent) = (Node35 * (*)(Node35 * self, String * key, String * value, int color, Node35 * parent)) 0x0;
Node35 * (*Node35::ptr::_new2)() = (Node35 * (*)()) 0x81a9210;
Node35 * (*Node35::ptr::_NextNode)() = (Node35 * (*)()) 0x0;
String * (*Node35::ptr::_Key)() = (String * (*)()) 0x0;
String * (*Node35::ptr::_Value)(Node35 * self) = (String * (*)(Node35 * self)) 0x0;
void (*Node35::ptr::_mark)() = (void (*)()) 0x808a130;
void (*Node35::ptr::CSTR_Node35)(Node35 * self) = (void (*)(Node35 * self)) 0x81a8fd0;
#endif
#endif
