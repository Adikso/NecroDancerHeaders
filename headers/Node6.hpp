// Generated automatically. Do not edit!
#ifndef _Node6_
#define _Node6_
class Sprite;
#include "Object.hpp"

class Node6 : public Object  {
public:
    Node6 * _succ;
    Node6 * _pred;
    Sprite * _data;

    // Wrappers
    inline Node6 * _New(Node6 * arg1, Node6 * arg2, Sprite * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node6 * _new2() { return ptr::_new2(); }
    inline virtual Node6 * GetNode() { return ptr::_GetNode(); }
    inline virtual Node6 * NextNode() { return ptr::_NextNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node6 * (*_New)(Node6 * self, Node6 * arg1, Node6 * arg2, Sprite * arg3);
        static Node6 * (*_new2)();
        static Node6 * (*_GetNode)();
        static Node6 * (*_NextNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Node6 * (*Node6::ptr::_New)(Node6 * self, Node6 * arg1, Node6 * arg2, Sprite * arg3) = (Node6 * (*)(Node6 * self, Node6 * arg1, Node6 * arg2, Sprite * arg3)) 0x0;
inline Node6 * (*Node6::ptr::_new2)() = (Node6 * (*)()) 0x0;
inline Node6 * (*Node6::ptr::_GetNode)() = (Node6 * (*)()) 0x0;
inline Node6 * (*Node6::ptr::_NextNode)() = (Node6 * (*)()) 0x0;
inline void (*Node6::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Node6 * (*Node6::ptr::_New)(Node6 * self, Node6 * arg1, Node6 * arg2, Sprite * arg3) = (Node6 * (*)(Node6 * self, Node6 * arg1, Node6 * arg2, Sprite * arg3)) 0x0;
inline Node6 * (*Node6::ptr::_new2)() = (Node6 * (*)()) 0x8159190;
inline Node6 * (*Node6::ptr::_GetNode)() = (Node6 * (*)()) 0x0;
inline Node6 * (*Node6::ptr::_NextNode)() = (Node6 * (*)()) 0x0;
inline void (*Node6::ptr::_mark)() = (void (*)()) 0x80a10e0;
#endif
#endif
