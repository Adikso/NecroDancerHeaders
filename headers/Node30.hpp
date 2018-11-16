// Generated automatically. Do not edit!
#ifndef _Node30_
#define _Node30_
class Chest;
#include "Object.hpp"

class Node30 : public Object  {
public:
    Node30 * _succ;
    Node30 * _pred;
    Chest * _data;

    // Wrappers
    inline Node30 * _New(Node30 * arg1, Node30 * arg2, Chest * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node30 * _new2() { return ptr::_new2(); }
    inline virtual int Remove3() { return ptr::_Remove3(); }
    inline virtual Node30 * GetNode() { return ptr::_GetNode(); }
    inline virtual Node30 * NextNode() { return ptr::_NextNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node30 * (*_New)(Node30 * self, Node30 * arg1, Node30 * arg2, Chest * arg3);
        static Node30 * (*_new2)();
        static int (*_Remove3)();
        static Node30 * (*_GetNode)();
        static Node30 * (*_NextNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Node30 * (*Node30::ptr::_New)(Node30 * self, Node30 * arg1, Node30 * arg2, Chest * arg3) = (Node30 * (*)(Node30 * self, Node30 * arg1, Node30 * arg2, Chest * arg3)) 0x0;
inline Node30 * (*Node30::ptr::_new2)() = (Node30 * (*)()) 0x0;
inline int (*Node30::ptr::_Remove3)() = (int (*)()) 0x0;
inline Node30 * (*Node30::ptr::_GetNode)() = (Node30 * (*)()) 0x0;
inline Node30 * (*Node30::ptr::_NextNode)() = (Node30 * (*)()) 0x0;
inline void (*Node30::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Node30 * (*Node30::ptr::_New)(Node30 * self, Node30 * arg1, Node30 * arg2, Chest * arg3) = (Node30 * (*)(Node30 * self, Node30 * arg1, Node30 * arg2, Chest * arg3)) 0x0;
inline Node30 * (*Node30::ptr::_new2)() = (Node30 * (*)()) 0x81a39e0;
inline int (*Node30::ptr::_Remove3)() = (int (*)()) 0x8092920;
inline Node30 * (*Node30::ptr::_GetNode)() = (Node30 * (*)()) 0x8073990;
inline Node30 * (*Node30::ptr::_NextNode)() = (Node30 * (*)()) 0x0;
inline void (*Node30::ptr::_mark)() = (void (*)()) 0x808b5d0;
#endif
#endif
