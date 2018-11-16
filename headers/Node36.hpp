// Generated automatically. Do not edit!
#ifndef _Node36_
#define _Node36_
class String;
#include "Object.hpp"

class Node36 : public Object  {
public:
    String * key;
    Node36 * right;
    Node36 * left;
    Object * value;
    int color;
    Node36 * parent;

    // Wrappers
    Node36() {
        ptr::CSTR_Node36(this);
    }

    inline Node36 * _New(String * arg1, Object * arg2, int arg3, Node36 * arg4) { return ptr::_New(this, arg1, arg2, arg3, arg4); }
    inline Node36 * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }
    inline Node36 * _New(String * key, bool value, int color, Node36 * parent) { return ptr::_New_2(this, key, value, color, parent); }

    class ptr {
    public:
        static Node36 * (*_New)(Node36 * self, String * arg1, Object * arg2, int arg3, Node36 * arg4);
        static Node36 * (*_new2)();
        static void (*_mark)();
        static void (*CSTR_Node36)(Node36 * self);
        static Node36 * (*_New_2)(Node36 * self, String * key, bool value, int color, Node36 * parent);
    };
};

#ifdef _WIN32

inline Node36 * (*Node36::ptr::_New)(Node36 * self, String * arg1, Object * arg2, int arg3, Node36 * arg4) = (Node36 * (*)(Node36 * self, String * arg1, Object * arg2, int arg3, Node36 * arg4)) 0x0;
inline Node36 * (*Node36::ptr::_new2)() = (Node36 * (*)()) 0x0;
inline void (*Node36::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Node36::ptr::CSTR_Node36)(Node36 * self) = (void (*)(Node36 * self)) 0x5e0e60;
inline Node36 * (*Node36::ptr::_New_2)(Node36 * self, String * key, bool value, int color, Node36 * parent) = (Node36 * (*)(Node36 * self, String * key, bool value, int color, Node36 * parent)) 0x5e0f40;
#endif

#ifdef __linux__

inline Node36 * (*Node36::ptr::_New)(Node36 * self, String * arg1, Object * arg2, int arg3, Node36 * arg4) = (Node36 * (*)(Node36 * self, String * arg1, Object * arg2, int arg3, Node36 * arg4)) 0x0;
inline Node36 * (*Node36::ptr::_new2)() = (Node36 * (*)()) 0x81aa280;
inline void (*Node36::ptr::_mark)() = (void (*)()) 0x80874b0;
inline void (*Node36::ptr::CSTR_Node36)(Node36 * self) = (void (*)(Node36 * self)) 0x81aa040;
inline Node36 * (*Node36::ptr::_New_2)(Node36 * self, String * key, bool value, int color, Node36 * parent) = (Node36 * (*)(Node36 * self, String * key, bool value, int color, Node36 * parent)) 0x0;
#endif
#endif
