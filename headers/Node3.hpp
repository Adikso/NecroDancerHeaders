// Generated automatically. Do not edit!
#ifndef _Node3_
#define _Node3_
class List;
class String;
#include "Object.hpp"

class Node3 : public Object  {
public:
    String * key;
    Node3 * right;
    Node3 * left;
    List * value;
    int color;
    Node3 * parent;

    // Wrappers
    Node3() {
        ptr::CSTR_Node3(this);
    }

    inline Node3 * _New(String * arg1, List * arg2, int arg3, Node3 * arg4) { return ptr::_New(this, arg1, arg2, arg3, arg4); }
    inline Node3 * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node3 * (*_New)(Node3 * self, String * arg1, List * arg2, int arg3, Node3 * arg4);
        static Node3 * (*_new2)();
        static void (*_mark)();
        static void (*CSTR_Node3)(Node3 * self);
    };
};

#ifdef _WIN32

inline Node3 * (*Node3::ptr::_New)(Node3 * self, String * arg1, List * arg2, int arg3, Node3 * arg4) = (Node3 * (*)(Node3 * self, String * arg1, List * arg2, int arg3, Node3 * arg4)) 0x0;
inline Node3 * (*Node3::ptr::_new2)() = (Node3 * (*)()) 0x0;
inline void (*Node3::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Node3::ptr::CSTR_Node3)(Node3 * self) = (void (*)(Node3 * self)) 0x4f7e30;
#endif

#ifdef __linux__

inline Node3 * (*Node3::ptr::_New)(Node3 * self, String * arg1, List * arg2, int arg3, Node3 * arg4) = (Node3 * (*)(Node3 * self, String * arg1, List * arg2, int arg3, Node3 * arg4)) 0x0;
inline Node3 * (*Node3::ptr::_new2)() = (Node3 * (*)()) 0x814bc90;
inline void (*Node3::ptr::_mark)() = (void (*)()) 0x80a0da0;
inline void (*Node3::ptr::CSTR_Node3)(Node3 * self) = (void (*)(Node3 * self)) 0x814b990;
#endif
#endif
