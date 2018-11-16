// Generated automatically. Do not edit!
#ifndef _Node12_
#define _Node12_
class Entity;
#include "Object.hpp"

class Node12 : public Object  {
public:
    Node12 * _succ;
    Node12 * _pred;
    Entity * _data;

    // Wrappers
    inline Node12 * _New(Node12 * arg1, Node12 * arg2, Entity * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node12 * _new2() { return ptr::_new2(); }
    inline virtual int Remove3() { return ptr::_Remove3(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node12 * (*_New)(Node12 * self, Node12 * arg1, Node12 * arg2, Entity * arg3);
        static Node12 * (*_new2)();
        static int (*_Remove3)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Node12 * (*Node12::ptr::_New)(Node12 * self, Node12 * arg1, Node12 * arg2, Entity * arg3) = (Node12 * (*)(Node12 * self, Node12 * arg1, Node12 * arg2, Entity * arg3)) 0x0;
inline Node12 * (*Node12::ptr::_new2)() = (Node12 * (*)()) 0x0;
inline int (*Node12::ptr::_Remove3)() = (int (*)()) 0x0;
inline void (*Node12::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Node12 * (*Node12::ptr::_New)(Node12 * self, Node12 * arg1, Node12 * arg2, Entity * arg3) = (Node12 * (*)(Node12 * self, Node12 * arg1, Node12 * arg2, Entity * arg3)) 0x0;
inline Node12 * (*Node12::ptr::_new2)() = (Node12 * (*)()) 0x8187b00;
inline int (*Node12::ptr::_Remove3)() = (int (*)()) 0x8092650;
inline void (*Node12::ptr::_mark)() = (void (*)()) 0x808a290;
#endif
#endif
