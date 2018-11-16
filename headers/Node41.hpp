// Generated automatically. Do not edit!
#ifndef _Node41_
#define _Node41_
class Point;
#include "Object.hpp"

class Node41 : public Object  {
public:
    Node41 * left;
    Node41 * right;
    Node41 * parent;
    Point * key;
    Point * value;
    int color;

    // Wrappers
    Node41() {
        ptr::CSTR_Node41(this);
    }

    inline virtual Node41 * NextNode() { return ptr::_NextNode(); }
    inline virtual Point * Key() { return ptr::_Key(); }
    inline virtual Point * Value() { return ptr::_Value(); }
    inline virtual int Count2(int n) { return ptr::_Count2(this, n); }
    inline Node41 * _New(Point * key, Point * value, int color, Node41 * parent) { return ptr::_New(this, key, value, color, parent); }
    inline Node41 * _new2() { return ptr::_new2(); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static Node41 * (*_NextNode)();
        static Point * (*_Key)();
        static Point * (*_Value)();
        static int (*_Count2)(Node41 * self, int n);
        static Node41 * (*_New)(Node41 * self, Point * key, Point * value, int color, Node41 * parent);
        static Node41 * (*_new2)();
        static void (*mark)(Node41 * self);
        static void (*CSTR_Node41)(Node41 * self);
    };
};

#ifdef _WIN32

inline Node41 * (*Node41::ptr::_NextNode)() = (Node41 * (*)()) 0x0;
inline Point * (*Node41::ptr::_Key)() = (Point * (*)()) 0x0;
inline Point * (*Node41::ptr::_Value)() = (Point * (*)()) 0x0;
inline int (*Node41::ptr::_Count2)(Node41 * self, int n) = (int (*)(Node41 * self, int n)) 0x5d6ed0;
inline Node41 * (*Node41::ptr::_New)(Node41 * self, Point * key, Point * value, int color, Node41 * parent) = (Node41 * (*)(Node41 * self, Point * key, Point * value, int color, Node41 * parent)) 0x5f3610;
inline Node41 * (*Node41::ptr::_new2)() = (Node41 * (*)()) 0x0;
inline void (*Node41::ptr::mark)(Node41 * self) = (void (*)(Node41 * self)) 0x5f3710;
inline void (*Node41::ptr::CSTR_Node41)(Node41 * self) = (void (*)(Node41 * self)) 0x5f3580;
#endif

#ifdef __linux__

inline Node41 * (*Node41::ptr::_NextNode)() = (Node41 * (*)()) 0x80750d0;
inline Point * (*Node41::ptr::_Key)() = (Point * (*)()) 0x0;
inline Point * (*Node41::ptr::_Value)() = (Point * (*)()) 0x0;
inline int (*Node41::ptr::_Count2)(Node41 * self, int n) = (int (*)(Node41 * self, int n)) 0x0;
inline Node41 * (*Node41::ptr::_New)(Node41 * self, Point * key, Point * value, int color, Node41 * parent) = (Node41 * (*)(Node41 * self, Point * key, Point * value, int color, Node41 * parent)) 0x0;
inline Node41 * (*Node41::ptr::_new2)() = (Node41 * (*)()) 0x81b9a70;
inline void (*Node41::ptr::mark)(Node41 * self) = (void (*)(Node41 * self)) 0x8086cf0;
inline void (*Node41::ptr::CSTR_Node41)(Node41 * self) = (void (*)(Node41 * self)) 0x81b9890;
#endif
#endif
