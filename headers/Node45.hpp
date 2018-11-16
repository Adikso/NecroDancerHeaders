// Generated automatically. Do not edit!
#ifndef _Node45_
#define _Node45_
class Tile;
#include "Object.hpp"

class Node45 : public Object  {
public:
    Node45 * _succ;
    Node45 * _pred;
    Tile * _data;

    // Wrappers
    inline Node45 * _New(Node45 * arg1, Node45 * arg2, Tile * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node45 * _new2() { return ptr::_new2(); }
    inline virtual int Remove3() { return ptr::_Remove3(); }
    inline virtual Node45 * GetNode() { return ptr::_GetNode(); }
    inline virtual Node45 * NextNode() { return ptr::_NextNode(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node45 * (*_New)(Node45 * self, Node45 * arg1, Node45 * arg2, Tile * arg3);
        static Node45 * (*_new2)();
        static int (*_Remove3)();
        static Node45 * (*_GetNode)();
        static Node45 * (*_NextNode)(Node45 * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Node45 * (*Node45::ptr::_New)(Node45 * self, Node45 * arg1, Node45 * arg2, Tile * arg3) = (Node45 * (*)(Node45 * self, Node45 * arg1, Node45 * arg2, Tile * arg3)) 0x0;
inline Node45 * (*Node45::ptr::_new2)() = (Node45 * (*)()) 0x0;
inline int (*Node45::ptr::_Remove3)() = (int (*)()) 0x0;
inline Node45 * (*Node45::ptr::_GetNode)() = (Node45 * (*)()) 0x0;
inline Node45 * (*Node45::ptr::_NextNode)(Node45 * self) = (Node45 * (*)(Node45 * self)) 0x5c3c40;
inline void (*Node45::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Node45 * (*Node45::ptr::_New)(Node45 * self, Node45 * arg1, Node45 * arg2, Tile * arg3) = (Node45 * (*)(Node45 * self, Node45 * arg1, Node45 * arg2, Tile * arg3)) 0x0;
inline Node45 * (*Node45::ptr::_new2)() = (Node45 * (*)()) 0x81bcb60;
inline int (*Node45::ptr::_Remove3)() = (int (*)()) 0x8091a80;
inline Node45 * (*Node45::ptr::_GetNode)() = (Node45 * (*)()) 0x0;
inline Node45 * (*Node45::ptr::_NextNode)(Node45 * self) = (Node45 * (*)(Node45 * self)) 0x0;
inline void (*Node45::ptr::_mark)() = (void (*)()) 0x8088430;
#endif
#endif
