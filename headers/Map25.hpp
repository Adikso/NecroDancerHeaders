// Generated automatically. Do not edit!
#ifndef _Map25_
#define _Map25_
class IntMap10;
class Node80;
#include "Object.hpp"

class Map25 : public Object  {
public:
    Node80 * root;

    // Wrappers
    inline Map25 * _New() { return ptr::_New(); }
    inline virtual int Compare2(int arg1, int arg2) { return ptr::_Compare2(this, arg1, arg2); }
    inline virtual Node80 * FindNode2(int arg1) { return ptr::_FindNode2(this, arg1); }
    inline virtual IntMap10 * Get2(int arg1) { return ptr::_Get2(this, arg1); }
    inline virtual int RotateLeft25(Node80 * arg1) { return ptr::_RotateLeft25(this, arg1); }
    inline virtual int RotateRight25(Node80 * arg1) { return ptr::_RotateRight25(this, arg1); }
    inline virtual int InsertFixup25(Node80 * arg1) { return ptr::_InsertFixup25(this, arg1); }
    inline virtual bool Set29(int key, IntMap10 * value) { return ptr::Set29(this, key, value); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Map25 * (*_New)();
        static int (*_Compare2)(Map25 * self, int arg1, int arg2);
        static Node80 * (*_FindNode2)(Map25 * self, int arg1);
        static IntMap10 * (*_Get2)(Map25 * self, int arg1);
        static int (*_RotateLeft25)(Map25 * self, Node80 * arg1);
        static int (*_RotateRight25)(Map25 * self, Node80 * arg1);
        static int (*_InsertFixup25)(Map25 * self, Node80 * arg1);
        static bool (*Set29)(Map25 * self, int key, IntMap10 * value);
        static void (*_mark)();
    };
};

#ifdef _WIN32

Map25 * (*Map25::ptr::_New)() = (Map25 * (*)()) 0x0;
int (*Map25::ptr::_Compare2)(Map25 * self, int arg1, int arg2) = (int (*)(Map25 * self, int arg1, int arg2)) 0x0;
Node80 * (*Map25::ptr::_FindNode2)(Map25 * self, int arg1) = (Node80 * (*)(Map25 * self, int arg1)) 0x0;
IntMap10 * (*Map25::ptr::_Get2)(Map25 * self, int arg1) = (IntMap10 * (*)(Map25 * self, int arg1)) 0x0;
int (*Map25::ptr::_RotateLeft25)(Map25 * self, Node80 * arg1) = (int (*)(Map25 * self, Node80 * arg1)) 0x0;
int (*Map25::ptr::_RotateRight25)(Map25 * self, Node80 * arg1) = (int (*)(Map25 * self, Node80 * arg1)) 0x0;
int (*Map25::ptr::_InsertFixup25)(Map25 * self, Node80 * arg1) = (int (*)(Map25 * self, Node80 * arg1)) 0x0;
bool (*Map25::ptr::Set29)(Map25 * self, int key, IntMap10 * value) = (bool (*)(Map25 * self, int key, IntMap10 * value)) 0x68e0e0;
void (*Map25::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Map25 * (*Map25::ptr::_New)() = (Map25 * (*)()) 0x81e54f0;
int (*Map25::ptr::_Compare2)(Map25 * self, int arg1, int arg2) = (int (*)(Map25 * self, int arg1, int arg2)) 0x0;
Node80 * (*Map25::ptr::_FindNode2)(Map25 * self, int arg1) = (Node80 * (*)(Map25 * self, int arg1)) 0x8079350;
IntMap10 * (*Map25::ptr::_Get2)(Map25 * self, int arg1) = (IntMap10 * (*)(Map25 * self, int arg1)) 0x80793a0;
int (*Map25::ptr::_RotateLeft25)(Map25 * self, Node80 * arg1) = (int (*)(Map25 * self, Node80 * arg1)) 0x0;
int (*Map25::ptr::_RotateRight25)(Map25 * self, Node80 * arg1) = (int (*)(Map25 * self, Node80 * arg1)) 0x0;
int (*Map25::ptr::_InsertFixup25)(Map25 * self, Node80 * arg1) = (int (*)(Map25 * self, Node80 * arg1)) 0x0;
bool (*Map25::ptr::Set29)(Map25 * self, int key, IntMap10 * value) = (bool (*)(Map25 * self, int key, IntMap10 * value)) 0x80bd0c0;
void (*Map25::ptr::_mark)() = (void (*)()) 0x808cb10;
#endif
#endif
