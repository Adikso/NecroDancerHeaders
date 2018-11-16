// Generated automatically. Do not edit!
#ifndef _Node19_
#define _Node19_
class Flyaway;
#include "Object.hpp"

class Node19 : public Object  {
public:
    Node19 * _succ;
    Node19 * _pred;
    Flyaway * _data;

    // Wrappers
    inline Node19 * _New(Node19 * arg1, Node19 * arg2, Flyaway * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node19 * _new2() { return ptr::_new2(); }
    inline virtual int Remove3() { return ptr::_Remove3(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node19 * (*_New)(Node19 * self, Node19 * arg1, Node19 * arg2, Flyaway * arg3);
        static Node19 * (*_new2)();
        static int (*_Remove3)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Node19 * (*Node19::ptr::_New)(Node19 * self, Node19 * arg1, Node19 * arg2, Flyaway * arg3) = (Node19 * (*)(Node19 * self, Node19 * arg1, Node19 * arg2, Flyaway * arg3)) 0x0;
inline Node19 * (*Node19::ptr::_new2)() = (Node19 * (*)()) 0x0;
inline int (*Node19::ptr::_Remove3)() = (int (*)()) 0x0;
inline void (*Node19::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Node19 * (*Node19::ptr::_New)(Node19 * self, Node19 * arg1, Node19 * arg2, Flyaway * arg3) = (Node19 * (*)(Node19 * self, Node19 * arg1, Node19 * arg2, Flyaway * arg3)) 0x0;
inline Node19 * (*Node19::ptr::_new2)() = (Node19 * (*)()) 0x8196950;
inline int (*Node19::ptr::_Remove3)() = (int (*)()) 0x0;
inline void (*Node19::ptr::_mark)() = (void (*)()) 0x8087f10;
#endif
#endif
