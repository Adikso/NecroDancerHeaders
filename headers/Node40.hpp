// Generated automatically. Do not edit!
#ifndef _Node40_
#define _Node40_
class Sprite;
class String;
#include "Object.hpp"

class Node40 : public Object  {
public:
    String * key;
    Node40 * right;
    Node40 * left;
    Sprite * value;
    int color;
    Node40 * parent;

    // Wrappers
    Node40() {
        ptr::CSTR_Node40(this);
    }

    inline Node40 * _New(String * arg1, Sprite * arg2, int arg3, Node40 * arg4) { return ptr::_New(this, arg1, arg2, arg3, arg4); }
    inline Node40 * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node40 * (*_New)(Node40 * self, String * arg1, Sprite * arg2, int arg3, Node40 * arg4);
        static Node40 * (*_new2)();
        static void (*_mark)();
        static void (*CSTR_Node40)(Node40 * self);
    };
};

#ifdef _WIN32

inline Node40 * (*Node40::ptr::_New)(Node40 * self, String * arg1, Sprite * arg2, int arg3, Node40 * arg4) = (Node40 * (*)(Node40 * self, String * arg1, Sprite * arg2, int arg3, Node40 * arg4)) 0x0;
inline Node40 * (*Node40::ptr::_new2)() = (Node40 * (*)()) 0x0;
inline void (*Node40::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Node40::ptr::CSTR_Node40)(Node40 * self) = (void (*)(Node40 * self)) 0x5f2da0;
#endif

#ifdef __linux__

inline Node40 * (*Node40::ptr::_New)(Node40 * self, String * arg1, Sprite * arg2, int arg3, Node40 * arg4) = (Node40 * (*)(Node40 * self, String * arg1, Sprite * arg2, int arg3, Node40 * arg4)) 0x0;
inline Node40 * (*Node40::ptr::_new2)() = (Node40 * (*)()) 0x81b9370;
inline void (*Node40::ptr::_mark)() = (void (*)()) 0x8089470;
inline void (*Node40::ptr::CSTR_Node40)(Node40 * self) = (void (*)(Node40 * self)) 0x81b9130;
#endif
#endif
