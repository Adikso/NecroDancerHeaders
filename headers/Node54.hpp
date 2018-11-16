// Generated automatically. Do not edit!
#ifndef _Node54_
#define _Node54_
class Point;
#include "Object.hpp"

class Node54 : public Object  {
public:
    Node54 * _succ;
    Node54 * _pred;
    Point * _data;

    // Wrappers
    inline Node54 * _New(Node54 * arg1, Node54 * arg2, Point * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node54 * _new2() { return ptr::_new2(); }
    inline virtual Node54 * GetNode() { return ptr::_GetNode(); }
    inline virtual Node54 * NextNode() { return ptr::_NextNode(); }
    inline virtual int Remove3() { return ptr::_Remove3(); }
    inline virtual Point * Value() { return ptr::_Value(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node54 * (*_New)(Node54 * self, Node54 * arg1, Node54 * arg2, Point * arg3);
        static Node54 * (*_new2)();
        static Node54 * (*_GetNode)();
        static Node54 * (*_NextNode)();
        static int (*_Remove3)();
        static Point * (*_Value)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Node54 * (*Node54::ptr::_New)(Node54 * self, Node54 * arg1, Node54 * arg2, Point * arg3) = (Node54 * (*)(Node54 * self, Node54 * arg1, Node54 * arg2, Point * arg3)) 0x0;
inline Node54 * (*Node54::ptr::_new2)() = (Node54 * (*)()) 0x0;
inline Node54 * (*Node54::ptr::_GetNode)() = (Node54 * (*)()) 0x0;
inline Node54 * (*Node54::ptr::_NextNode)() = (Node54 * (*)()) 0x0;
inline int (*Node54::ptr::_Remove3)() = (int (*)()) 0x0;
inline Point * (*Node54::ptr::_Value)() = (Point * (*)()) 0x0;
inline void (*Node54::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Node54 * (*Node54::ptr::_New)(Node54 * self, Node54 * arg1, Node54 * arg2, Point * arg3) = (Node54 * (*)(Node54 * self, Node54 * arg1, Node54 * arg2, Point * arg3)) 0x0;
inline Node54 * (*Node54::ptr::_new2)() = (Node54 * (*)()) 0x81db9e0;
inline Node54 * (*Node54::ptr::_GetNode)() = (Node54 * (*)()) 0x8077fe0;
inline Node54 * (*Node54::ptr::_NextNode)() = (Node54 * (*)()) 0x8077ff0;
inline int (*Node54::ptr::_Remove3)() = (int (*)()) 0x808d0b0;
inline Point * (*Node54::ptr::_Value)() = (Point * (*)()) 0x0;
inline void (*Node54::ptr::_mark)() = (void (*)()) 0x8086b30;
#endif
#endif
