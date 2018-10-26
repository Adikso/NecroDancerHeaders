// Generated automatically. Do not edit!
#ifndef _Map16_
#define _Map16_
class Node41;
class NodeEnumerator3;
class Point;
#include "Object.hpp"

class Map16 : public Object  {
public:
    Node41 * root;

    // Wrappers
    inline Map16 * _New() { return ptr::_New(); }
    inline virtual Node41 * FirstNode() { return ptr::_FirstNode(); }
    inline virtual NodeEnumerator3 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual int Count() { return ptr::_Count(); }
    inline virtual int Clear() { return ptr::_Clear(); }
    inline virtual int Compare6(Point * arg1, Point * arg2) { return ptr::_Compare6(this, arg1, arg2); }
    inline virtual int RotateLeft16(Node41 * arg1) { return ptr::_RotateLeft16(this, arg1); }
    inline virtual int RotateRight16(Node41 * arg1) { return ptr::_RotateRight16(this, arg1); }
    inline virtual int InsertFixup16(Node41 * node) { return ptr::_InsertFixup16(this, node); }
    inline virtual bool Set17(Point * key, Point * value) { return ptr::Set17(this, key, value); }
    inline virtual bool Add10(Point * key, Point * value) { return ptr::Add10(this, key, value); }
    inline virtual Node41 * FindNode3(Point * key) { return ptr::FindNode3(this, key); }
    inline virtual bool Contains5(Point * key) { return ptr::Contains5(this, key); }
    inline virtual Point * Get4(Point * key) { return ptr::Get4(this, key); }
    inline virtual int DeleteFixup7(Node41 * node, Node41 * parent) { return ptr::_DeleteFixup7(this, node, parent); }
    inline virtual int RemoveNode7(Node41 * node) { return ptr::_RemoveNode7(this, node); }
    inline virtual int Remove6(Point * key) { return ptr::Remove6(this, key); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Map16 * (*_New)();
        static Node41 * (*_FirstNode)();
        static NodeEnumerator3 * (*ObjectEnumerator)(Map16 * self);
        static int (*_Count)();
        static int (*_Clear)();
        static int (*_Compare6)(Map16 * self, Point * arg1, Point * arg2);
        static int (*_RotateLeft16)(Map16 * self, Node41 * arg1);
        static int (*_RotateRight16)(Map16 * self, Node41 * arg1);
        static int (*_InsertFixup16)(Map16 * self, Node41 * node);
        static bool (*Set17)(Map16 * self, Point * key, Point * value);
        static bool (*Add10)(Map16 * self, Point * key, Point * value);
        static Node41 * (*FindNode3)(Map16 * self, Point * key);
        static bool (*Contains5)(Map16 * self, Point * key);
        static Point * (*Get4)(Map16 * self, Point * key);
        static int (*_DeleteFixup7)(Map16 * self, Node41 * node, Node41 * parent);
        static int (*_RemoveNode7)(Map16 * self, Node41 * node);
        static int (*Remove6)(Map16 * self, Point * key);
        static void (*_mark)();
    };
};

#ifdef _WIN32

Map16 * (*Map16::ptr::_New)() = (Map16 * (*)()) 0x0;
Node41 * (*Map16::ptr::_FirstNode)() = (Node41 * (*)()) 0x0;
NodeEnumerator3 * (*Map16::ptr::ObjectEnumerator)(Map16 * self) = (NodeEnumerator3 * (*)(Map16 * self)) 0x5f2e90;
int (*Map16::ptr::_Count)() = (int (*)()) 0x0;
int (*Map16::ptr::_Clear)() = (int (*)()) 0x0;
int (*Map16::ptr::_Compare6)(Map16 * self, Point * arg1, Point * arg2) = (int (*)(Map16 * self, Point * arg1, Point * arg2)) 0x0;
int (*Map16::ptr::_RotateLeft16)(Map16 * self, Node41 * arg1) = (int (*)(Map16 * self, Node41 * arg1)) 0x0;
int (*Map16::ptr::_RotateRight16)(Map16 * self, Node41 * arg1) = (int (*)(Map16 * self, Node41 * arg1)) 0x0;
int (*Map16::ptr::_InsertFixup16)(Map16 * self, Node41 * node) = (int (*)(Map16 * self, Node41 * node)) 0x5f2f70;
bool (*Map16::ptr::Set17)(Map16 * self, Point * key, Point * value) = (bool (*)(Map16 * self, Point * key, Point * value)) 0x5f3060;
bool (*Map16::ptr::Add10)(Map16 * self, Point * key, Point * value) = (bool (*)(Map16 * self, Point * key, Point * value)) 0x5f3170;
Node41 * (*Map16::ptr::FindNode3)(Map16 * self, Point * key) = (Node41 * (*)(Map16 * self, Point * key)) 0x5f3270;
bool (*Map16::ptr::Contains5)(Map16 * self, Point * key) = (bool (*)(Map16 * self, Point * key)) 0x5f32b0;
Point * (*Map16::ptr::Get4)(Map16 * self, Point * key) = (Point * (*)(Map16 * self, Point * key)) 0x5f32d0;
int (*Map16::ptr::_DeleteFixup7)(Map16 * self, Node41 * node, Node41 * parent) = (int (*)(Map16 * self, Node41 * node, Node41 * parent)) 0x5f32f0;
int (*Map16::ptr::_RemoveNode7)(Map16 * self, Node41 * node) = (int (*)(Map16 * self, Node41 * node)) 0x5f3460;
int (*Map16::ptr::Remove6)(Map16 * self, Point * key) = (int (*)(Map16 * self, Point * key)) 0x5f3510;
void (*Map16::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Map16 * (*Map16::ptr::_New)() = (Map16 * (*)()) 0x819d850;
Node41 * (*Map16::ptr::_FirstNode)() = (Node41 * (*)()) 0x8072f30;
NodeEnumerator3 * (*Map16::ptr::ObjectEnumerator)(Map16 * self) = (NodeEnumerator3 * (*)(Map16 * self)) 0x80b8850;
int (*Map16::ptr::_Count)() = (int (*)()) 0x8072f50;
int (*Map16::ptr::_Clear)() = (int (*)()) 0x8072f80;
int (*Map16::ptr::_Compare6)(Map16 * self, Point * arg1, Point * arg2) = (int (*)(Map16 * self, Point * arg1, Point * arg2)) 0x0;
int (*Map16::ptr::_RotateLeft16)(Map16 * self, Node41 * arg1) = (int (*)(Map16 * self, Node41 * arg1)) 0x0;
int (*Map16::ptr::_RotateRight16)(Map16 * self, Node41 * arg1) = (int (*)(Map16 * self, Node41 * arg1)) 0x0;
int (*Map16::ptr::_InsertFixup16)(Map16 * self, Node41 * node) = (int (*)(Map16 * self, Node41 * node)) 0x0;
bool (*Map16::ptr::Set17)(Map16 * self, Point * key, Point * value) = (bool (*)(Map16 * self, Point * key, Point * value)) 0x80b8bb0;
bool (*Map16::ptr::Add10)(Map16 * self, Point * key, Point * value) = (bool (*)(Map16 * self, Point * key, Point * value)) 0x80b88d0;
Node41 * (*Map16::ptr::FindNode3)(Map16 * self, Point * key) = (Node41 * (*)(Map16 * self, Point * key)) 0x8073090;
bool (*Map16::ptr::Contains5)(Map16 * self, Point * key) = (bool (*)(Map16 * self, Point * key)) 0x80730e0;
Point * (*Map16::ptr::Get4)(Map16 * self, Point * key) = (Point * (*)(Map16 * self, Point * key)) 0x8073100;
int (*Map16::ptr::_DeleteFixup7)(Map16 * self, Node41 * node, Node41 * parent) = (int (*)(Map16 * self, Node41 * node, Node41 * parent)) 0x0;
int (*Map16::ptr::_RemoveNode7)(Map16 * self, Node41 * node) = (int (*)(Map16 * self, Node41 * node)) 0x0;
int (*Map16::ptr::Remove6)(Map16 * self, Point * key) = (int (*)(Map16 * self, Point * key)) 0x8073320;
void (*Map16::ptr::_mark)() = (void (*)()) 0x808fb50;
#endif
#endif
