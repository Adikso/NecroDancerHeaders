// Generated automatically. Do not edit!
#ifndef _Node29_
#define _Node29_
class Chest;
#include "Object.hpp"

class Node29 : public Object  {
public:
    Node29 * _succ;
    Node29 * _pred;
    Chest * _data;

    // Wrappers
    inline Node29 * _New(Node29 * arg1, Node29 * arg2, Chest * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node29 * _new2() { return ptr::_new2(); }
    inline virtual int Remove2() { return ptr::_Remove2(); }
    inline virtual Node29 * GetNode() { return ptr::_GetNode(); }
    inline virtual Node29 * NextNode() { return ptr::_NextNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node29 * (*_New)(Node29 * self, Node29 * arg1, Node29 * arg2, Chest * arg3);
        static Node29 * (*_new2)();
        static int (*_Remove2)();
        static Node29 * (*_GetNode)();
        static Node29 * (*_NextNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Node29 * (*Node29::ptr::_New)(Node29 * self, Node29 * arg1, Node29 * arg2, Chest * arg3) = (Node29 * (*)(Node29 * self, Node29 * arg1, Node29 * arg2, Chest * arg3)) 0x0;
inline Node29 * (*Node29::ptr::_new2)() = (Node29 * (*)()) 0x0;
inline int (*Node29::ptr::_Remove2)() = (int (*)()) 0x0;
inline Node29 * (*Node29::ptr::_GetNode)() = (Node29 * (*)()) 0x0;
inline Node29 * (*Node29::ptr::_NextNode)() = (Node29 * (*)()) 0x0;
inline void (*Node29::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Node29 * (*Node29::ptr::_New)(Node29 * self, Node29 * arg1, Node29 * arg2, Chest * arg3) = (Node29 * (*)(Node29 * self, Node29 * arg1, Node29 * arg2, Chest * arg3)) 0x0;
inline Node29 * (*Node29::ptr::_new2)() = (Node29 * (*)()) 0x81a0880;
inline int (*Node29::ptr::_Remove2)() = (int (*)()) 0x0;
inline Node29 * (*Node29::ptr::_GetNode)() = (Node29 * (*)()) 0x80738d0;
inline Node29 * (*Node29::ptr::_NextNode)() = (Node29 * (*)()) 0x80738e0;
inline void (*Node29::ptr::_mark)() = (void (*)()) 0x808a3f0;
#endif
#endif
