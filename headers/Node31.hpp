// Generated automatically. Do not edit!
#ifndef _Node31_
#define _Node31_
class Chest;
#include "Object.hpp"

class Node31 : public Object  {
public:
    Node31 * _succ;
    Node31 * _pred;
    Chest * _data;

    // Wrappers
    inline Node31 * _New(Node31 * arg1, Node31 * arg2, Chest * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node31 * _new2() { return ptr::_new2(); }
    inline virtual int Remove2() { return ptr::_Remove2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node31 * (*_New)(Node31 * self, Node31 * arg1, Node31 * arg2, Chest * arg3);
        static Node31 * (*_new2)();
        static int (*_Remove2)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Node31 * (*Node31::ptr::_New)(Node31 * self, Node31 * arg1, Node31 * arg2, Chest * arg3) = (Node31 * (*)(Node31 * self, Node31 * arg1, Node31 * arg2, Chest * arg3)) 0x0;
inline Node31 * (*Node31::ptr::_new2)() = (Node31 * (*)()) 0x0;
inline int (*Node31::ptr::_Remove2)() = (int (*)()) 0x0;
inline void (*Node31::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Node31 * (*Node31::ptr::_New)(Node31 * self, Node31 * arg1, Node31 * arg2, Chest * arg3) = (Node31 * (*)(Node31 * self, Node31 * arg1, Node31 * arg2, Chest * arg3)) 0x0;
inline Node31 * (*Node31::ptr::_new2)() = (Node31 * (*)()) 0x81a48b0;
inline int (*Node31::ptr::_Remove2)() = (int (*)()) 0x0;
inline void (*Node31::ptr::_mark)() = (void (*)()) 0x808a7b0;
#endif
#endif
