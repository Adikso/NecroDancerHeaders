// Generated automatically. Do not edit!
#ifndef _Node17_
#define _Node17_
class Gargoyle;
#include "Object.hpp"

class Node17 : public Object  {
public:
    Node17 * _succ;
    Node17 * _pred;
    Gargoyle * _data;

    // Wrappers
    inline Node17 * _New(Node17 * arg1, Node17 * arg2, Gargoyle * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node17 * _new2() { return ptr::_new2(); }
    inline virtual Node17 * GetNode() { return ptr::_GetNode(); }
    inline virtual Node17 * NextNode() { return ptr::_NextNode(); }
    inline virtual int Remove3() { return ptr::_Remove3(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node17 * (*_New)(Node17 * self, Node17 * arg1, Node17 * arg2, Gargoyle * arg3);
        static Node17 * (*_new2)();
        static Node17 * (*_GetNode)();
        static Node17 * (*_NextNode)();
        static int (*_Remove3)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Node17 * (*Node17::ptr::_New)(Node17 * self, Node17 * arg1, Node17 * arg2, Gargoyle * arg3) = (Node17 * (*)(Node17 * self, Node17 * arg1, Node17 * arg2, Gargoyle * arg3)) 0x0;
inline Node17 * (*Node17::ptr::_new2)() = (Node17 * (*)()) 0x0;
inline Node17 * (*Node17::ptr::_GetNode)() = (Node17 * (*)()) 0x0;
inline Node17 * (*Node17::ptr::_NextNode)() = (Node17 * (*)()) 0x0;
inline int (*Node17::ptr::_Remove3)() = (int (*)()) 0x0;
inline void (*Node17::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Node17 * (*Node17::ptr::_New)(Node17 * self, Node17 * arg1, Node17 * arg2, Gargoyle * arg3) = (Node17 * (*)(Node17 * self, Node17 * arg1, Node17 * arg2, Gargoyle * arg3)) 0x0;
inline Node17 * (*Node17::ptr::_new2)() = (Node17 * (*)()) 0x81953e0;
inline Node17 * (*Node17::ptr::_GetNode)() = (Node17 * (*)()) 0x0;
inline Node17 * (*Node17::ptr::_NextNode)() = (Node17 * (*)()) 0x0;
inline int (*Node17::ptr::_Remove3)() = (int (*)()) 0x0;
inline void (*Node17::ptr::_mark)() = (void (*)()) 0x8089110;
#endif
#endif
