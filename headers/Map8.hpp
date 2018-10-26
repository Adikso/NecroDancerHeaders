// Generated automatically. Do not edit!
#ifndef _Map8_
#define _Map8_
class LevelObject;
class Node20;
#include "Object.hpp"

class Map8 : public Object  {
public:
    Node20 * root;

    // Wrappers
    inline Map8 * _New() { return ptr::_New(); }
    inline virtual int Compare2(int arg1, int arg2) { return ptr::_Compare2(this, arg1, arg2); }
    inline virtual Node20 * FindNode2(int arg1) { return ptr::_FindNode2(this, arg1); }
    inline virtual LevelObject * Get2(int key) { return ptr::Get2(this, key); }
    inline virtual int RotateLeft8(Node20 * node) { return ptr::_RotateLeft8(this, node); }
    inline virtual int RotateRight8(Node20 * node) { return ptr::_RotateRight8(this, node); }
    inline virtual int InsertFixup8(Node20 * node) { return ptr::_InsertFixup8(this, node); }
    inline virtual bool Set9(int key, LevelObject * value) { return ptr::Set9(this, key, value); }
    inline virtual int DeleteFixup4(Node20 * node, Node20 * parent) { return ptr::_DeleteFixup4(this, node, parent); }
    inline virtual int RemoveNode4(Node20 * node) { return ptr::_RemoveNode4(this, node); }
    inline virtual int Remove5(int key) { return ptr::Remove5(this, key); }
    inline virtual int Clear() { return ptr::Clear(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Map8 * (*_New)();
        static int (*_Compare2)(Map8 * self, int arg1, int arg2);
        static Node20 * (*_FindNode2)(Map8 * self, int arg1);
        static LevelObject * (*Get2)(Map8 * self, int key);
        static int (*_RotateLeft8)(Map8 * self, Node20 * node);
        static int (*_RotateRight8)(Map8 * self, Node20 * node);
        static int (*_InsertFixup8)(Map8 * self, Node20 * node);
        static bool (*Set9)(Map8 * self, int key, LevelObject * value);
        static int (*_DeleteFixup4)(Map8 * self, Node20 * node, Node20 * parent);
        static int (*_RemoveNode4)(Map8 * self, Node20 * node);
        static int (*Remove5)(Map8 * self, int key);
        static int (*Clear)(Map8 * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

Map8 * (*Map8::ptr::_New)() = (Map8 * (*)()) 0x0;
int (*Map8::ptr::_Compare2)(Map8 * self, int arg1, int arg2) = (int (*)(Map8 * self, int arg1, int arg2)) 0x0;
Node20 * (*Map8::ptr::_FindNode2)(Map8 * self, int arg1) = (Node20 * (*)(Map8 * self, int arg1)) 0x0;
LevelObject * (*Map8::ptr::Get2)(Map8 * self, int key) = (LevelObject * (*)(Map8 * self, int key)) 0x5c9880;
int (*Map8::ptr::_RotateLeft8)(Map8 * self, Node20 * node) = (int (*)(Map8 * self, Node20 * node)) 0x4f77e0;
int (*Map8::ptr::_RotateRight8)(Map8 * self, Node20 * node) = (int (*)(Map8 * self, Node20 * node)) 0x4f7960;
int (*Map8::ptr::_InsertFixup8)(Map8 * self, Node20 * node) = (int (*)(Map8 * self, Node20 * node)) 0x5c98a0;
bool (*Map8::ptr::Set9)(Map8 * self, int key, LevelObject * value) = (bool (*)(Map8 * self, int key, LevelObject * value)) 0x5c9990;
int (*Map8::ptr::_DeleteFixup4)(Map8 * self, Node20 * node, Node20 * parent) = (int (*)(Map8 * self, Node20 * node, Node20 * parent)) 0x5c9aa0;
int (*Map8::ptr::_RemoveNode4)(Map8 * self, Node20 * node) = (int (*)(Map8 * self, Node20 * node)) 0x5c9c10;
int (*Map8::ptr::Remove5)(Map8 * self, int key) = (int (*)(Map8 * self, int key)) 0x5c9cc0;
int (*Map8::ptr::Clear)(Map8 * self) = (int (*)(Map8 * self)) 0x5764a0;
void (*Map8::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Map8 * (*Map8::ptr::_New)() = (Map8 * (*)()) 0x8189970;
int (*Map8::ptr::_Compare2)(Map8 * self, int arg1, int arg2) = (int (*)(Map8 * self, int arg1, int arg2)) 0x0;
Node20 * (*Map8::ptr::_FindNode2)(Map8 * self, int arg1) = (Node20 * (*)(Map8 * self, int arg1)) 0x8070e00;
LevelObject * (*Map8::ptr::Get2)(Map8 * self, int key) = (LevelObject * (*)(Map8 * self, int key)) 0x8070e50;
int (*Map8::ptr::_RotateLeft8)(Map8 * self, Node20 * node) = (int (*)(Map8 * self, Node20 * node)) 0x0;
int (*Map8::ptr::_RotateRight8)(Map8 * self, Node20 * node) = (int (*)(Map8 * self, Node20 * node)) 0x0;
int (*Map8::ptr::_InsertFixup8)(Map8 * self, Node20 * node) = (int (*)(Map8 * self, Node20 * node)) 0x0;
bool (*Map8::ptr::Set9)(Map8 * self, int key, LevelObject * value) = (bool (*)(Map8 * self, int key, LevelObject * value)) 0x80b75c0;
int (*Map8::ptr::_DeleteFixup4)(Map8 * self, Node20 * node, Node20 * parent) = (int (*)(Map8 * self, Node20 * node, Node20 * parent)) 0x0;
int (*Map8::ptr::_RemoveNode4)(Map8 * self, Node20 * node) = (int (*)(Map8 * self, Node20 * node)) 0x0;
int (*Map8::ptr::Remove5)(Map8 * self, int key) = (int (*)(Map8 * self, int key)) 0x8071170;
int (*Map8::ptr::Clear)(Map8 * self) = (int (*)(Map8 * self)) 0x80711b0;
void (*Map8::ptr::_mark)() = (void (*)()) 0x808c910;
#endif
#endif
