// Generated automatically. Do not edit!
#ifndef _Node11_
#define _Node11_
class RenderableObject;
#include "Object.hpp"

class Node11 : public Object  {
public:
    Node11 * _succ;
    Node11 * _pred;
    RenderableObject * _data;

    // Wrappers
    inline Node11 * _New(Node11 * arg1, Node11 * arg2, RenderableObject * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node11 * _new2() { return ptr::_new2(); }
    inline virtual int Remove3() { return ptr::_Remove3(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node11 * (*_New)(Node11 * self, Node11 * arg1, Node11 * arg2, RenderableObject * arg3);
        static Node11 * (*_new2)();
        static int (*_Remove3)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Node11 * (*Node11::ptr::_New)(Node11 * self, Node11 * arg1, Node11 * arg2, RenderableObject * arg3) = (Node11 * (*)(Node11 * self, Node11 * arg1, Node11 * arg2, RenderableObject * arg3)) 0x0;
inline Node11 * (*Node11::ptr::_new2)() = (Node11 * (*)()) 0x0;
inline int (*Node11::ptr::_Remove3)() = (int (*)()) 0x0;
inline void (*Node11::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Node11 * (*Node11::ptr::_New)(Node11 * self, Node11 * arg1, Node11 * arg2, RenderableObject * arg3) = (Node11 * (*)(Node11 * self, Node11 * arg1, Node11 * arg2, RenderableObject * arg3)) 0x0;
inline Node11 * (*Node11::ptr::_new2)() = (Node11 * (*)()) 0x817f550;
inline int (*Node11::ptr::_Remove3)() = (int (*)()) 0x809b4c0;
inline void (*Node11::ptr::_mark)() = (void (*)()) 0x8090730;
#endif
#endif
