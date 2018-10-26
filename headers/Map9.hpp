// Generated automatically. Do not edit!
#ifndef _Map9_
#define _Map9_
class Node22;
class NodeEnumerator2;
class Tile;
#include "Object.hpp"

class Map9 : public Object  {
public:
    Node22 * root;

    // Wrappers
    inline virtual Node22 * FirstNode() { return ptr::FirstNode(this); }
    inline virtual NodeEnumerator2 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual int Compare2(int arg1, int arg2) { return ptr::_Compare2(this, arg1, arg2); }
    inline virtual Node22 * FindNode2(int key) { return ptr::FindNode2(this, key); }
    inline virtual bool Contains2(int key) { return ptr::Contains2(this, key); }
    inline virtual Tile * Get2(int key) { return ptr::Get2(this, key); }
    inline Map9 * _New() { return ptr::_New(); }
    inline virtual int RotateLeft9(Node22 * node) { return ptr::_RotateLeft9(this, node); }
    inline virtual int RotateRight9(Node22 * node) { return ptr::_RotateRight9(this, node); }
    inline virtual int InsertFixup9(Node22 * node) { return ptr::_InsertFixup9(this, node); }
    inline virtual bool Set10(int key, Tile * value) { return ptr::Set10(this, key, value); }
    inline virtual int DeleteFixup5(Node22 * node, Node22 * parent) { return ptr::_DeleteFixup5(this, node, parent); }
    inline virtual int RemoveNode5(Node22 * node) { return ptr::_RemoveNode5(this, node); }
    inline virtual int Remove5(int key) { return ptr::Remove5(this, key); }
    inline virtual int Count() { return ptr::Count(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node22 * (*FirstNode)(Map9 * self);
        static NodeEnumerator2 * (*ObjectEnumerator)(Map9 * self);
        static int (*_Compare2)(Map9 * self, int arg1, int arg2);
        static Node22 * (*FindNode2)(Map9 * self, int key);
        static bool (*Contains2)(Map9 * self, int key);
        static Tile * (*Get2)(Map9 * self, int key);
        static Map9 * (*_New)();
        static int (*_RotateLeft9)(Map9 * self, Node22 * node);
        static int (*_RotateRight9)(Map9 * self, Node22 * node);
        static int (*_InsertFixup9)(Map9 * self, Node22 * node);
        static bool (*Set10)(Map9 * self, int key, Tile * value);
        static int (*_DeleteFixup5)(Map9 * self, Node22 * node, Node22 * parent);
        static int (*_RemoveNode5)(Map9 * self, Node22 * node);
        static int (*Remove5)(Map9 * self, int key);
        static int (*Count)(Map9 * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

Node22 * (*Map9::ptr::FirstNode)(Map9 * self) = (Node22 * (*)(Map9 * self)) 0x5d6180;
NodeEnumerator2 * (*Map9::ptr::ObjectEnumerator)(Map9 * self) = (NodeEnumerator2 * (*)(Map9 * self)) 0x5d61a0;
int (*Map9::ptr::_Compare2)(Map9 * self, int arg1, int arg2) = (int (*)(Map9 * self, int arg1, int arg2)) 0x0;
Node22 * (*Map9::ptr::FindNode2)(Map9 * self, int key) = (Node22 * (*)(Map9 * self, int key)) 0x5d6280;
bool (*Map9::ptr::Contains2)(Map9 * self, int key) = (bool (*)(Map9 * self, int key)) 0x5d62c0;
Tile * (*Map9::ptr::Get2)(Map9 * self, int key) = (Tile * (*)(Map9 * self, int key)) 0x5d62e0;
Map9 * (*Map9::ptr::_New)() = (Map9 * (*)()) 0x0;
int (*Map9::ptr::_RotateLeft9)(Map9 * self, Node22 * node) = (int (*)(Map9 * self, Node22 * node)) 0x5d6300;
int (*Map9::ptr::_RotateRight9)(Map9 * self, Node22 * node) = (int (*)(Map9 * self, Node22 * node)) 0x5d6480;
int (*Map9::ptr::_InsertFixup9)(Map9 * self, Node22 * node) = (int (*)(Map9 * self, Node22 * node)) 0x5d65f0;
bool (*Map9::ptr::Set10)(Map9 * self, int key, Tile * value) = (bool (*)(Map9 * self, int key, Tile * value)) 0x5d66e0;
int (*Map9::ptr::_DeleteFixup5)(Map9 * self, Node22 * node, Node22 * parent) = (int (*)(Map9 * self, Node22 * node, Node22 * parent)) 0x5d67f0;
int (*Map9::ptr::_RemoveNode5)(Map9 * self, Node22 * node) = (int (*)(Map9 * self, Node22 * node)) 0x5d6960;
int (*Map9::ptr::Remove5)(Map9 * self, int key) = (int (*)(Map9 * self, int key)) 0x5d6a10;
int (*Map9::ptr::Count)(Map9 * self) = (int (*)(Map9 * self)) 0x5d6a40;
void (*Map9::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Node22 * (*Map9::ptr::FirstNode)(Map9 * self) = (Node22 * (*)(Map9 * self)) 0x80715c0;
NodeEnumerator2 * (*Map9::ptr::ObjectEnumerator)(Map9 * self) = (NodeEnumerator2 * (*)(Map9 * self)) 0x80b7890;
int (*Map9::ptr::_Compare2)(Map9 * self, int arg1, int arg2) = (int (*)(Map9 * self, int arg1, int arg2)) 0x0;
Node22 * (*Map9::ptr::FindNode2)(Map9 * self, int key) = (Node22 * (*)(Map9 * self, int key)) 0x80715e0;
bool (*Map9::ptr::Contains2)(Map9 * self, int key) = (bool (*)(Map9 * self, int key)) 0x8071630;
Tile * (*Map9::ptr::Get2)(Map9 * self, int key) = (Tile * (*)(Map9 * self, int key)) 0x8071650;
Map9 * (*Map9::ptr::_New)() = (Map9 * (*)()) 0x8191020;
int (*Map9::ptr::_RotateLeft9)(Map9 * self, Node22 * node) = (int (*)(Map9 * self, Node22 * node)) 0x0;
int (*Map9::ptr::_RotateRight9)(Map9 * self, Node22 * node) = (int (*)(Map9 * self, Node22 * node)) 0x0;
int (*Map9::ptr::_InsertFixup9)(Map9 * self, Node22 * node) = (int (*)(Map9 * self, Node22 * node)) 0x0;
bool (*Map9::ptr::Set10)(Map9 * self, int key, Tile * value) = (bool (*)(Map9 * self, int key, Tile * value)) 0x80b7910;
int (*Map9::ptr::_DeleteFixup5)(Map9 * self, Node22 * node, Node22 * parent) = (int (*)(Map9 * self, Node22 * node, Node22 * parent)) 0x0;
int (*Map9::ptr::_RemoveNode5)(Map9 * self, Node22 * node) = (int (*)(Map9 * self, Node22 * node)) 0x0;
int (*Map9::ptr::Remove5)(Map9 * self, int key) = (int (*)(Map9 * self, int key)) 0x8071970;
int (*Map9::ptr::Count)(Map9 * self) = (int (*)(Map9 * self)) 0x80719b0;
void (*Map9::ptr::_mark)() = (void (*)()) 0x808d520;
#endif
#endif
