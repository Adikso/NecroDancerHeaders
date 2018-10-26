// Generated automatically. Do not edit!
#ifndef _Node53_
#define _Node53_
class TileData;
#include "Object.hpp"

class Node53 : public Object  {
public:
    Node53 * _succ;
    Node53 * _pred;
    TileData * _data;

    // Wrappers
    inline Node53 * _New(Node53 * arg1, Node53 * arg2, TileData * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node53 * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node53 * (*_New)(Node53 * self, Node53 * arg1, Node53 * arg2, TileData * arg3);
        static Node53 * (*_new2)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Node53 * (*Node53::ptr::_New)(Node53 * self, Node53 * arg1, Node53 * arg2, TileData * arg3) = (Node53 * (*)(Node53 * self, Node53 * arg1, Node53 * arg2, TileData * arg3)) 0x0;
Node53 * (*Node53::ptr::_new2)() = (Node53 * (*)()) 0x0;
void (*Node53::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Node53 * (*Node53::ptr::_New)(Node53 * self, Node53 * arg1, Node53 * arg2, TileData * arg3) = (Node53 * (*)(Node53 * self, Node53 * arg1, Node53 * arg2, TileData * arg3)) 0x0;
Node53 * (*Node53::ptr::_new2)() = (Node53 * (*)()) 0x81d9df0;
void (*Node53::ptr::_mark)() = (void (*)()) 0x8088a50;
#endif
#endif
