// Generated automatically. Do not edit!
#ifndef _Node20_
#define _Node20_
class IntMap4;
#include "Object.hpp"

class Node20 : public Object  {
public:
    Node20 * left;
    Node20 * right;
    Node20 * parent;
    IntMap4 * value;
    int key;
    int color;

    // Wrappers
    Node20() {
        ptr::CSTR_Node20(this);
    }

    inline virtual Node20 * NextNode() { return ptr::_NextNode(); }
    inline virtual IntMap4 * Value() { return ptr::_Value(); }
    inline Node20 * _New(int arg1, IntMap4 * arg2, int arg3, Node20 * arg4) { return ptr::_New(this, arg1, arg2, arg3, arg4); }
    inline Node20 * _new2() { return ptr::_new2(); }
    inline virtual int Key() { return ptr::_Key(); }
    inline virtual int Count2(int arg1) { return ptr::_Count2(this, arg1); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node20 * (*_NextNode)();
        static IntMap4 * (*_Value)();
        static Node20 * (*_New)(Node20 * self, int arg1, IntMap4 * arg2, int arg3, Node20 * arg4);
        static Node20 * (*_new2)();
        static int (*_Key)();
        static int (*_Count2)(Node20 * self, int arg1);
        static void (*_mark)();
        static void (*CSTR_Node20)(Node20 * self);
    };
};

#ifdef _WIN32

inline Node20 * (*Node20::ptr::_NextNode)() = (Node20 * (*)()) 0x0;
inline IntMap4 * (*Node20::ptr::_Value)() = (IntMap4 * (*)()) 0x0;
inline Node20 * (*Node20::ptr::_New)(Node20 * self, int arg1, IntMap4 * arg2, int arg3, Node20 * arg4) = (Node20 * (*)(Node20 * self, int arg1, IntMap4 * arg2, int arg3, Node20 * arg4)) 0x0;
inline Node20 * (*Node20::ptr::_new2)() = (Node20 * (*)()) 0x0;
inline int (*Node20::ptr::_Key)() = (int (*)()) 0x0;
inline int (*Node20::ptr::_Count2)(Node20 * self, int arg1) = (int (*)(Node20 * self, int arg1)) 0x0;
inline void (*Node20::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Node20::ptr::CSTR_Node20)(Node20 * self) = (void (*)(Node20 * self)) 0x5c9cf0;
#endif

#ifdef __linux__

inline Node20 * (*Node20::ptr::_NextNode)() = (Node20 * (*)()) 0x80720f0;
inline IntMap4 * (*Node20::ptr::_Value)() = (IntMap4 * (*)()) 0x0;
inline Node20 * (*Node20::ptr::_New)(Node20 * self, int arg1, IntMap4 * arg2, int arg3, Node20 * arg4) = (Node20 * (*)(Node20 * self, int arg1, IntMap4 * arg2, int arg3, Node20 * arg4)) 0x0;
inline Node20 * (*Node20::ptr::_new2)() = (Node20 * (*)()) 0x8196d30;
inline int (*Node20::ptr::_Key)() = (int (*)()) 0x0;
inline int (*Node20::ptr::_Count2)(Node20 * self, int arg1) = (int (*)(Node20 * self, int arg1)) 0x0;
inline void (*Node20::ptr::_mark)() = (void (*)()) 0x8089fd0;
inline void (*Node20::ptr::CSTR_Node20)(Node20 * self) = (void (*)(Node20 * self)) 0x8196af0;
#endif
#endif
