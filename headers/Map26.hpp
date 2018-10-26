// Generated automatically. Do not edit!
#ifndef _Map26_
#define _Map26_
class Enemy;
class Node82;
#include "Object.hpp"

class Map26 : public Object  {
public:
    Node82 * root;

    // Wrappers
    inline Map26 * _New() { return ptr::_New(); }
    inline virtual int Compare2(int arg1, int arg2) { return ptr::_Compare2(this, arg1, arg2); }
    inline virtual Node82 * FindNode2(int arg1) { return ptr::_FindNode2(this, arg1); }
    inline virtual bool Contains2(int key) { return ptr::Contains2(this, key); }
    inline virtual Enemy * Get2(int arg1) { return ptr::_Get2(this, arg1); }
    inline virtual int RotateLeft26(Node82 * arg1) { return ptr::_RotateLeft26(this, arg1); }
    inline virtual int RotateRight26(Node82 * arg1) { return ptr::_RotateRight26(this, arg1); }
    inline virtual int InsertFixup26(Node82 * arg1) { return ptr::_InsertFixup26(this, arg1); }
    inline virtual bool Set23(int key, Enemy * value) { return ptr::Set23(this, key, value); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Map26 * (*_New)();
        static int (*_Compare2)(Map26 * self, int arg1, int arg2);
        static Node82 * (*_FindNode2)(Map26 * self, int arg1);
        static bool (*Contains2)(Map26 * self, int key);
        static Enemy * (*_Get2)(Map26 * self, int arg1);
        static int (*_RotateLeft26)(Map26 * self, Node82 * arg1);
        static int (*_RotateRight26)(Map26 * self, Node82 * arg1);
        static int (*_InsertFixup26)(Map26 * self, Node82 * arg1);
        static bool (*Set23)(Map26 * self, int key, Enemy * value);
        static void (*_mark)();
    };
};

#ifdef _WIN32

Map26 * (*Map26::ptr::_New)() = (Map26 * (*)()) 0x0;
int (*Map26::ptr::_Compare2)(Map26 * self, int arg1, int arg2) = (int (*)(Map26 * self, int arg1, int arg2)) 0x0;
Node82 * (*Map26::ptr::_FindNode2)(Map26 * self, int arg1) = (Node82 * (*)(Map26 * self, int arg1)) 0x0;
bool (*Map26::ptr::Contains2)(Map26 * self, int key) = (bool (*)(Map26 * self, int key)) 0x661030;
Enemy * (*Map26::ptr::_Get2)(Map26 * self, int arg1) = (Enemy * (*)(Map26 * self, int arg1)) 0x0;
int (*Map26::ptr::_RotateLeft26)(Map26 * self, Node82 * arg1) = (int (*)(Map26 * self, Node82 * arg1)) 0x0;
int (*Map26::ptr::_RotateRight26)(Map26 * self, Node82 * arg1) = (int (*)(Map26 * self, Node82 * arg1)) 0x0;
int (*Map26::ptr::_InsertFixup26)(Map26 * self, Node82 * arg1) = (int (*)(Map26 * self, Node82 * arg1)) 0x0;
bool (*Map26::ptr::Set23)(Map26 * self, int key, Enemy * value) = (bool (*)(Map26 * self, int key, Enemy * value)) 0x68e310;
void (*Map26::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Map26 * (*Map26::ptr::_New)() = (Map26 * (*)()) 0x81e5800;
int (*Map26::ptr::_Compare2)(Map26 * self, int arg1, int arg2) = (int (*)(Map26 * self, int arg1, int arg2)) 0x0;
Node82 * (*Map26::ptr::_FindNode2)(Map26 * self, int arg1) = (Node82 * (*)(Map26 * self, int arg1)) 0x8079530;
bool (*Map26::ptr::Contains2)(Map26 * self, int key) = (bool (*)(Map26 * self, int key)) 0x8079580;
Enemy * (*Map26::ptr::_Get2)(Map26 * self, int arg1) = (Enemy * (*)(Map26 * self, int arg1)) 0x80795a0;
int (*Map26::ptr::_RotateLeft26)(Map26 * self, Node82 * arg1) = (int (*)(Map26 * self, Node82 * arg1)) 0x0;
int (*Map26::ptr::_RotateRight26)(Map26 * self, Node82 * arg1) = (int (*)(Map26 * self, Node82 * arg1)) 0x0;
int (*Map26::ptr::_InsertFixup26)(Map26 * self, Node82 * arg1) = (int (*)(Map26 * self, Node82 * arg1)) 0x0;
bool (*Map26::ptr::Set23)(Map26 * self, int key, Enemy * value) = (bool (*)(Map26 * self, int key, Enemy * value)) 0x80bd410;
void (*Map26::ptr::_mark)() = (void (*)()) 0x808c500;
#endif
#endif
