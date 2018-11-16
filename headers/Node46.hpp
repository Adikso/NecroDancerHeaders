// Generated automatically. Do not edit!
#ifndef _Node46_
#define _Node46_
class Particle;
#include "Object.hpp"

class Node46 : public Object  {
public:
    Node46 * _succ;
    Node46 * _pred;
    Particle * _data;

    // Wrappers
    inline Node46 * _New(Node46 * arg1, Node46 * arg2, Particle * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node46 * _new2() { return ptr::_new2(); }
    inline virtual Node46 * GetNode() { return ptr::_GetNode(); }
    inline virtual Node46 * PrevNode() { return ptr::_PrevNode(); }
    inline virtual int Remove3() { return ptr::_Remove3(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node46 * (*_New)(Node46 * self, Node46 * arg1, Node46 * arg2, Particle * arg3);
        static Node46 * (*_new2)();
        static Node46 * (*_GetNode)();
        static Node46 * (*_PrevNode)();
        static int (*_Remove3)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Node46 * (*Node46::ptr::_New)(Node46 * self, Node46 * arg1, Node46 * arg2, Particle * arg3) = (Node46 * (*)(Node46 * self, Node46 * arg1, Node46 * arg2, Particle * arg3)) 0x0;
inline Node46 * (*Node46::ptr::_new2)() = (Node46 * (*)()) 0x0;
inline Node46 * (*Node46::ptr::_GetNode)() = (Node46 * (*)()) 0x0;
inline Node46 * (*Node46::ptr::_PrevNode)() = (Node46 * (*)()) 0x0;
inline int (*Node46::ptr::_Remove3)() = (int (*)()) 0x0;
inline void (*Node46::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Node46 * (*Node46::ptr::_New)(Node46 * self, Node46 * arg1, Node46 * arg2, Particle * arg3) = (Node46 * (*)(Node46 * self, Node46 * arg1, Node46 * arg2, Particle * arg3)) 0x0;
inline Node46 * (*Node46::ptr::_new2)() = (Node46 * (*)()) 0x81bdc40;
inline Node46 * (*Node46::ptr::_GetNode)() = (Node46 * (*)()) 0x0;
inline Node46 * (*Node46::ptr::_PrevNode)() = (Node46 * (*)()) 0x0;
inline int (*Node46::ptr::_Remove3)() = (int (*)()) 0x0;
inline void (*Node46::ptr::_mark)() = (void (*)()) 0x8088790;
#endif
#endif
