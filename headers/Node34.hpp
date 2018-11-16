// Generated automatically. Do not edit!
#ifndef _Node34_
#define _Node34_
class String;
#include "Object.hpp"

class Node34 : public Object  {
public:
    String * key;
    Node34 * right;
    Node34 * left;
    String * value;
    int color;
    Node34 * parent;

    // Wrappers
    inline Node34 * _New(String * arg1, String * arg2, int arg3, Node34 * arg4) { return ptr::_New(this, arg1, arg2, arg3, arg4); }
    inline Node34 * _new2() { return ptr::_new2(); }
    inline virtual Node34 * NextNode() { return ptr::_NextNode(); }
    inline virtual String * Key() { return ptr::_Key(); }
    inline virtual String * Value() { return ptr::_Value(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node34 * (*_New)(Node34 * self, String * arg1, String * arg2, int arg3, Node34 * arg4);
        static Node34 * (*_new2)();
        static Node34 * (*_NextNode)();
        static String * (*_Key)();
        static String * (*_Value)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Node34 * (*Node34::ptr::_New)(Node34 * self, String * arg1, String * arg2, int arg3, Node34 * arg4) = (Node34 * (*)(Node34 * self, String * arg1, String * arg2, int arg3, Node34 * arg4)) 0x0;
inline Node34 * (*Node34::ptr::_new2)() = (Node34 * (*)()) 0x0;
inline Node34 * (*Node34::ptr::_NextNode)() = (Node34 * (*)()) 0x0;
inline String * (*Node34::ptr::_Key)() = (String * (*)()) 0x0;
inline String * (*Node34::ptr::_Value)() = (String * (*)()) 0x0;
inline void (*Node34::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Node34 * (*Node34::ptr::_New)(Node34 * self, String * arg1, String * arg2, int arg3, Node34 * arg4) = (Node34 * (*)(Node34 * self, String * arg1, String * arg2, int arg3, Node34 * arg4)) 0x0;
inline Node34 * (*Node34::ptr::_new2)() = (Node34 * (*)()) 0x81a7f00;
inline Node34 * (*Node34::ptr::_NextNode)() = (Node34 * (*)()) 0x8073f50;
inline String * (*Node34::ptr::_Key)() = (String * (*)()) 0x0;
inline String * (*Node34::ptr::_Value)() = (String * (*)()) 0x0;
inline void (*Node34::ptr::_mark)() = (void (*)()) 0x809b1f0;
#endif
#endif
