// Generated automatically. Do not edit!
#ifndef _Node52_
#define _Node52_
class Arrow;
#include "Object.hpp"

class Node52 : public Object  {
public:
    Node52 * _succ;
    Node52 * _pred;
    Arrow * _data;

    // Wrappers
    inline Node52 * _New(Node52 * arg1, Node52 * arg2, Arrow * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node52 * _new2() { return ptr::_new2(); }
    inline virtual Node52 * GetNode() { return ptr::_GetNode(); }
    inline virtual Node52 * NextNode() { return ptr::_NextNode(); }
    inline virtual Arrow * Value() { return ptr::_Value(); }
    inline virtual int Remove3() { return ptr::_Remove3(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node52 * (*_New)(Node52 * self, Node52 * arg1, Node52 * arg2, Arrow * arg3);
        static Node52 * (*_new2)();
        static Node52 * (*_GetNode)();
        static Node52 * (*_NextNode)();
        static Arrow * (*_Value)();
        static int (*_Remove3)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Node52 * (*Node52::ptr::_New)(Node52 * self, Node52 * arg1, Node52 * arg2, Arrow * arg3) = (Node52 * (*)(Node52 * self, Node52 * arg1, Node52 * arg2, Arrow * arg3)) 0x0;
inline Node52 * (*Node52::ptr::_new2)() = (Node52 * (*)()) 0x0;
inline Node52 * (*Node52::ptr::_GetNode)() = (Node52 * (*)()) 0x0;
inline Node52 * (*Node52::ptr::_NextNode)() = (Node52 * (*)()) 0x0;
inline Arrow * (*Node52::ptr::_Value)() = (Arrow * (*)()) 0x0;
inline int (*Node52::ptr::_Remove3)() = (int (*)()) 0x0;
inline void (*Node52::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Node52 * (*Node52::ptr::_New)(Node52 * self, Node52 * arg1, Node52 * arg2, Arrow * arg3) = (Node52 * (*)(Node52 * self, Node52 * arg1, Node52 * arg2, Arrow * arg3)) 0x0;
inline Node52 * (*Node52::ptr::_new2)() = (Node52 * (*)()) 0x81d4630;
inline Node52 * (*Node52::ptr::_GetNode)() = (Node52 * (*)()) 0x0;
inline Node52 * (*Node52::ptr::_NextNode)() = (Node52 * (*)()) 0x0;
inline Arrow * (*Node52::ptr::_Value)() = (Arrow * (*)()) 0x0;
inline int (*Node52::ptr::_Remove3)() = (int (*)()) 0x80915a0;
inline void (*Node52::ptr::_mark)() = (void (*)()) 0x80888f0;
#endif
#endif
