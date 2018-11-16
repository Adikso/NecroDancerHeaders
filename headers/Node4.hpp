// Generated automatically. Do not edit!
#ifndef _Node4_
#define _Node4_
class Image;
class String;
#include "Object.hpp"

class Node4 : public Object  {
public:
    String * key;
    Node4 * right;
    Node4 * left;
    Image * value;
    int color;
    Node4 * parent;

    // Wrappers
    Node4() {
        ptr::CSTR_Node4(this);
    }

    inline Node4 * _New(String * arg1, Image * arg2, int arg3, Node4 * arg4) { return ptr::_New(this, arg1, arg2, arg3, arg4); }
    inline Node4 * _new2() { return ptr::_new2(); }
    inline virtual Node4 * NextNode() { return ptr::_NextNode(); }
    inline virtual String * Key() { return ptr::_Key(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node4 * (*_New)(Node4 * self, String * arg1, Image * arg2, int arg3, Node4 * arg4);
        static Node4 * (*_new2)();
        static Node4 * (*_NextNode)();
        static String * (*_Key)(Node4 * self);
        static void (*_mark)();
        static void (*CSTR_Node4)(Node4 * self);
    };
};

#ifdef _WIN32

inline Node4 * (*Node4::ptr::_New)(Node4 * self, String * arg1, Image * arg2, int arg3, Node4 * arg4) = (Node4 * (*)(Node4 * self, String * arg1, Image * arg2, int arg3, Node4 * arg4)) 0x0;
inline Node4 * (*Node4::ptr::_new2)() = (Node4 * (*)()) 0x0;
inline Node4 * (*Node4::ptr::_NextNode)() = (Node4 * (*)()) 0x0;
inline String * (*Node4::ptr::_Key)(Node4 * self) = (String * (*)(Node4 * self)) 0x53bde0;
inline void (*Node4::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Node4::ptr::CSTR_Node4)(Node4 * self) = (void (*)(Node4 * self)) 0x53bcb0;
#endif

#ifdef __linux__

inline Node4 * (*Node4::ptr::_New)(Node4 * self, String * arg1, Image * arg2, int arg3, Node4 * arg4) = (Node4 * (*)(Node4 * self, String * arg1, Image * arg2, int arg3, Node4 * arg4)) 0x0;
inline Node4 * (*Node4::ptr::_new2)() = (Node4 * (*)()) 0x8151230;
inline Node4 * (*Node4::ptr::_NextNode)() = (Node4 * (*)()) 0x806f760;
inline String * (*Node4::ptr::_Key)(Node4 * self) = (String * (*)(Node4 * self)) 0x0;
inline void (*Node4::ptr::_mark)() = (void (*)()) 0x808b7d0;
inline void (*Node4::ptr::CSTR_Node4)(Node4 * self) = (void (*)(Node4 * self)) 0x8151050;
#endif
#endif
