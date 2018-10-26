// Generated automatically. Do not edit!
#ifndef _Map21_
#define _Map21_
class Node75;
class NodeEnumerator5;
class Point;
class String;
#include "Object.hpp"

class Map21 : public Object  {
public:
    Node75 * root;

    // Wrappers
    inline Map21 * _New() { return ptr::_New(); }
    inline virtual Node75 * FirstNode() { return ptr::_FirstNode(); }
    inline virtual NodeEnumerator5 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual int Clear() { return ptr::_Clear(); }
    inline virtual int _Compare(String * arg1, String * arg2) { return ptr::_Compare(this, arg1, arg2); }
    inline virtual int RotateLeft21(Node75 * arg1) { return ptr::_RotateLeft21(this, arg1); }
    inline virtual int RotateRight21(Node75 * arg1) { return ptr::_RotateRight21(this, arg1); }
    inline virtual int InsertFixup21(Node75 * node) { return ptr::_InsertFixup21(this, node); }
    inline virtual bool Set24(String * key, Point * value) { return ptr::Set24(this, key, value); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Map21 * (*_New)();
        static Node75 * (*_FirstNode)();
        static NodeEnumerator5 * (*ObjectEnumerator)(Map21 * self);
        static int (*_Clear)();
        static int (*_Compare)(Map21 * self, String * arg1, String * arg2);
        static int (*_RotateLeft21)(Map21 * self, Node75 * arg1);
        static int (*_RotateRight21)(Map21 * self, Node75 * arg1);
        static int (*_InsertFixup21)(Map21 * self, Node75 * node);
        static bool (*Set24)(Map21 * self, String * key, Point * value);
        static void (*_mark)();
    };
};

#ifdef _WIN32

Map21 * (*Map21::ptr::_New)() = (Map21 * (*)()) 0x0;
Node75 * (*Map21::ptr::_FirstNode)() = (Node75 * (*)()) 0x0;
NodeEnumerator5 * (*Map21::ptr::ObjectEnumerator)(Map21 * self) = (NodeEnumerator5 * (*)(Map21 * self)) 0x67fe80;
int (*Map21::ptr::_Clear)() = (int (*)()) 0x0;
int (*Map21::ptr::_Compare)(Map21 * self, String * arg1, String * arg2) = (int (*)(Map21 * self, String * arg1, String * arg2)) 0x0;
int (*Map21::ptr::_RotateLeft21)(Map21 * self, Node75 * arg1) = (int (*)(Map21 * self, Node75 * arg1)) 0x0;
int (*Map21::ptr::_RotateRight21)(Map21 * self, Node75 * arg1) = (int (*)(Map21 * self, Node75 * arg1)) 0x0;
int (*Map21::ptr::_InsertFixup21)(Map21 * self, Node75 * node) = (int (*)(Map21 * self, Node75 * node)) 0x67ff60;
bool (*Map21::ptr::Set24)(Map21 * self, String * key, Point * value) = (bool (*)(Map21 * self, String * key, Point * value)) 0x680050;
void (*Map21::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Map21 * (*Map21::ptr::_New)() = (Map21 * (*)()) 0x81dec70;
Node75 * (*Map21::ptr::_FirstNode)() = (Node75 * (*)()) 0x8078270;
NodeEnumerator5 * (*Map21::ptr::ObjectEnumerator)(Map21 * self) = (NodeEnumerator5 * (*)(Map21 * self)) 0x80bc2d0;
int (*Map21::ptr::_Clear)() = (int (*)()) 0x8078290;
int (*Map21::ptr::_Compare)(Map21 * self, String * arg1, String * arg2) = (int (*)(Map21 * self, String * arg1, String * arg2)) 0x0;
int (*Map21::ptr::_RotateLeft21)(Map21 * self, Node75 * arg1) = (int (*)(Map21 * self, Node75 * arg1)) 0x0;
int (*Map21::ptr::_RotateRight21)(Map21 * self, Node75 * arg1) = (int (*)(Map21 * self, Node75 * arg1)) 0x0;
int (*Map21::ptr::_InsertFixup21)(Map21 * self, Node75 * node) = (int (*)(Map21 * self, Node75 * node)) 0x0;
bool (*Map21::ptr::Set24)(Map21 * self, String * key, Point * value) = (bool (*)(Map21 * self, String * key, Point * value)) 0x80dc450;
void (*Map21::ptr::_mark)() = (void (*)()) 0x808deb0;
#endif
#endif
