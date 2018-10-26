// Generated automatically. Do not edit!
#ifndef _Map10_
#define _Map10_
class IntMap4;
class Node20;
class NodeEnumerator;
#include "Object.hpp"

class Map10 : public Object  {
public:
    Node20 * root;

    // Wrappers
    inline Map10 * _New() { return ptr::_New(); }
    inline virtual Node20 * FirstNode() { return ptr::_FirstNode(); }
    inline virtual NodeEnumerator * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual int Compare2(int arg1, int arg2) { return ptr::_Compare2(this, arg1, arg2); }
    inline virtual Node20 * FindNode2(int arg1) { return ptr::_FindNode2(this, arg1); }
    inline virtual bool Contains2(int arg1) { return ptr::_Contains2(this, arg1); }
    inline virtual IntMap4 * Get2(int arg1) { return ptr::_Get2(this, arg1); }
    inline virtual int RotateLeft10(Node20 * arg1) { return ptr::_RotateLeft10(this, arg1); }
    inline virtual int RotateRight10(Node20 * arg1) { return ptr::_RotateRight10(this, arg1); }
    inline virtual int InsertFixup10(Node20 * arg1) { return ptr::_InsertFixup10(this, arg1); }
    inline virtual bool Set11(int key, IntMap4 * value) { return ptr::Set11(this, key, value); }
    inline virtual int Clear() { return ptr::_Clear(); }
    inline virtual int Count() { return ptr::_Count(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Map10 * (*_New)();
        static Node20 * (*_FirstNode)();
        static NodeEnumerator * (*ObjectEnumerator)(Map10 * self);
        static int (*_Compare2)(Map10 * self, int arg1, int arg2);
        static Node20 * (*_FindNode2)(Map10 * self, int arg1);
        static bool (*_Contains2)(Map10 * self, int arg1);
        static IntMap4 * (*_Get2)(Map10 * self, int arg1);
        static int (*_RotateLeft10)(Map10 * self, Node20 * arg1);
        static int (*_RotateRight10)(Map10 * self, Node20 * arg1);
        static int (*_InsertFixup10)(Map10 * self, Node20 * arg1);
        static bool (*Set11)(Map10 * self, int key, IntMap4 * value);
        static int (*_Clear)();
        static int (*_Count)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Map10 * (*Map10::ptr::_New)() = (Map10 * (*)()) 0x0;
Node20 * (*Map10::ptr::_FirstNode)() = (Node20 * (*)()) 0x0;
NodeEnumerator * (*Map10::ptr::ObjectEnumerator)(Map10 * self) = (NodeEnumerator * (*)(Map10 * self)) 0x5d6ae0;
int (*Map10::ptr::_Compare2)(Map10 * self, int arg1, int arg2) = (int (*)(Map10 * self, int arg1, int arg2)) 0x0;
Node20 * (*Map10::ptr::_FindNode2)(Map10 * self, int arg1) = (Node20 * (*)(Map10 * self, int arg1)) 0x0;
bool (*Map10::ptr::_Contains2)(Map10 * self, int arg1) = (bool (*)(Map10 * self, int arg1)) 0x0;
IntMap4 * (*Map10::ptr::_Get2)(Map10 * self, int arg1) = (IntMap4 * (*)(Map10 * self, int arg1)) 0x0;
int (*Map10::ptr::_RotateLeft10)(Map10 * self, Node20 * arg1) = (int (*)(Map10 * self, Node20 * arg1)) 0x0;
int (*Map10::ptr::_RotateRight10)(Map10 * self, Node20 * arg1) = (int (*)(Map10 * self, Node20 * arg1)) 0x0;
int (*Map10::ptr::_InsertFixup10)(Map10 * self, Node20 * arg1) = (int (*)(Map10 * self, Node20 * arg1)) 0x0;
bool (*Map10::ptr::Set11)(Map10 * self, int key, IntMap4 * value) = (bool (*)(Map10 * self, int key, IntMap4 * value)) 0x5d6bc0;
int (*Map10::ptr::_Clear)() = (int (*)()) 0x0;
int (*Map10::ptr::_Count)() = (int (*)()) 0x0;
void (*Map10::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Map10 * (*Map10::ptr::_New)() = (Map10 * (*)()) 0x8191080;
Node20 * (*Map10::ptr::_FirstNode)() = (Node20 * (*)()) 0x80719f0;
NodeEnumerator * (*Map10::ptr::ObjectEnumerator)(Map10 * self) = (NodeEnumerator * (*)(Map10 * self)) 0x80b7be0;
int (*Map10::ptr::_Compare2)(Map10 * self, int arg1, int arg2) = (int (*)(Map10 * self, int arg1, int arg2)) 0x0;
Node20 * (*Map10::ptr::_FindNode2)(Map10 * self, int arg1) = (Node20 * (*)(Map10 * self, int arg1)) 0x8071a10;
bool (*Map10::ptr::_Contains2)(Map10 * self, int arg1) = (bool (*)(Map10 * self, int arg1)) 0x8071a60;
IntMap4 * (*Map10::ptr::_Get2)(Map10 * self, int arg1) = (IntMap4 * (*)(Map10 * self, int arg1)) 0x8071a80;
int (*Map10::ptr::_RotateLeft10)(Map10 * self, Node20 * arg1) = (int (*)(Map10 * self, Node20 * arg1)) 0x0;
int (*Map10::ptr::_RotateRight10)(Map10 * self, Node20 * arg1) = (int (*)(Map10 * self, Node20 * arg1)) 0x0;
int (*Map10::ptr::_InsertFixup10)(Map10 * self, Node20 * arg1) = (int (*)(Map10 * self, Node20 * arg1)) 0x0;
bool (*Map10::ptr::Set11)(Map10 * self, int key, IntMap4 * value) = (bool (*)(Map10 * self, int key, IntMap4 * value)) 0x80b7c60;
int (*Map10::ptr::_Clear)() = (int (*)()) 0x8071bb0;
int (*Map10::ptr::_Count)() = (int (*)()) 0x8071bc0;
void (*Map10::ptr::_mark)() = (void (*)()) 0x808da50;
#endif
#endif
