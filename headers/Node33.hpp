// Generated automatically. Do not edit!
#ifndef _Node33_
#define _Node33_
class Shrine;
#include "Object.hpp"

class Node33 : public Object  {
public:
    Node33 * _succ;
    Node33 * _pred;
    Shrine * _data;

    // Wrappers
    inline Node33 * _New(Node33 * arg1, Node33 * arg2, Shrine * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node33 * _new2() { return ptr::_new2(); }
    inline virtual int Remove3() { return ptr::_Remove3(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node33 * (*_New)(Node33 * self, Node33 * arg1, Node33 * arg2, Shrine * arg3);
        static Node33 * (*_new2)();
        static int (*_Remove3)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Node33 * (*Node33::ptr::_New)(Node33 * self, Node33 * arg1, Node33 * arg2, Shrine * arg3) = (Node33 * (*)(Node33 * self, Node33 * arg1, Node33 * arg2, Shrine * arg3)) 0x0;
inline Node33 * (*Node33::ptr::_new2)() = (Node33 * (*)()) 0x0;
inline int (*Node33::ptr::_Remove3)() = (int (*)()) 0x0;
inline void (*Node33::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Node33 * (*Node33::ptr::_New)(Node33 * self, Node33 * arg1, Node33 * arg2, Shrine * arg3) = (Node33 * (*)(Node33 * self, Node33 * arg1, Node33 * arg2, Shrine * arg3)) 0x0;
inline Node33 * (*Node33::ptr::_new2)() = (Node33 * (*)()) 0x81a58e0;
inline int (*Node33::ptr::_Remove3)() = (int (*)()) 0x8091f60;
inline void (*Node33::ptr::_mark)() = (void (*)()) 0x808a6b0;
#endif
#endif
