// Generated automatically. Do not edit!
#ifndef _Map6_
#define _Map6_
class Node10;
#include "Object.hpp"

class Map6 : public Object  {
public:
    Node10 * root;

    // Wrappers
    inline Map6 * _New() { return ptr::_New(); }
    inline virtual int Clear() { return ptr::_Clear(); }
    inline virtual int Compare2(int arg1, int arg2) { return ptr::_Compare2(this, arg1, arg2); }
    inline virtual Node10 * FindNode2(int key) { return ptr::FindNode2(this, key); }
    inline virtual bool Contains2(int key) { return ptr::Contains2(this, key); }
    inline virtual int RotateLeft6(Node10 * arg1) { return ptr::_RotateLeft6(this, arg1); }
    inline virtual int RotateRight6(Node10 * arg1) { return ptr::_RotateRight6(this, arg1); }
    inline virtual int InsertFixup6(Node10 * node) { return ptr::_InsertFixup6(this, node); }
    inline virtual bool Set7(int key, Object * value) { return ptr::Set7(this, key, value); }
    inline virtual bool Insert4(int key, Object * value) { return ptr::Insert4(this, key, value); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Map6 * (*_New)();
        static int (*_Clear)();
        static int (*_Compare2)(Map6 * self, int arg1, int arg2);
        static Node10 * (*FindNode2)(Map6 * self, int key);
        static bool (*Contains2)(Map6 * self, int key);
        static int (*_RotateLeft6)(Map6 * self, Node10 * arg1);
        static int (*_RotateRight6)(Map6 * self, Node10 * arg1);
        static int (*_InsertFixup6)(Map6 * self, Node10 * node);
        static bool (*Set7)(Map6 * self, int key, Object * value);
        static bool (*Insert4)(Map6 * self, int key, Object * value);
        static void (*_mark)();
    };
};

#ifdef _WIN32

Map6 * (*Map6::ptr::_New)() = (Map6 * (*)()) 0x0;
int (*Map6::ptr::_Clear)() = (int (*)()) 0x0;
int (*Map6::ptr::_Compare2)(Map6 * self, int arg1, int arg2) = (int (*)(Map6 * self, int arg1, int arg2)) 0x0;
Node10 * (*Map6::ptr::FindNode2)(Map6 * self, int key) = (Node10 * (*)(Map6 * self, int key)) 0x5764b0;
bool (*Map6::ptr::Contains2)(Map6 * self, int key) = (bool (*)(Map6 * self, int key)) 0x5764f0;
int (*Map6::ptr::_RotateLeft6)(Map6 * self, Node10 * arg1) = (int (*)(Map6 * self, Node10 * arg1)) 0x0;
int (*Map6::ptr::_RotateRight6)(Map6 * self, Node10 * arg1) = (int (*)(Map6 * self, Node10 * arg1)) 0x0;
int (*Map6::ptr::_InsertFixup6)(Map6 * self, Node10 * node) = (int (*)(Map6 * self, Node10 * node)) 0x53b580;
bool (*Map6::ptr::Set7)(Map6 * self, int key, Object * value) = (bool (*)(Map6 * self, int key, Object * value)) 0x57e150;
bool (*Map6::ptr::Insert4)(Map6 * self, int key, Object * value) = (bool (*)(Map6 * self, int key, Object * value)) 0x57e260;
void (*Map6::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Map6 * (*Map6::ptr::_New)() = (Map6 * (*)()) 0x81581b0;
int (*Map6::ptr::_Clear)() = (int (*)()) 0x806fcc0;
int (*Map6::ptr::_Compare2)(Map6 * self, int arg1, int arg2) = (int (*)(Map6 * self, int arg1, int arg2)) 0x0;
Node10 * (*Map6::ptr::FindNode2)(Map6 * self, int key) = (Node10 * (*)(Map6 * self, int key)) 0x806fcd0;
bool (*Map6::ptr::Contains2)(Map6 * self, int key) = (bool (*)(Map6 * self, int key)) 0x806fd20;
int (*Map6::ptr::_RotateLeft6)(Map6 * self, Node10 * arg1) = (int (*)(Map6 * self, Node10 * arg1)) 0x0;
int (*Map6::ptr::_RotateRight6)(Map6 * self, Node10 * arg1) = (int (*)(Map6 * self, Node10 * arg1)) 0x0;
int (*Map6::ptr::_InsertFixup6)(Map6 * self, Node10 * node) = (int (*)(Map6 * self, Node10 * node)) 0x0;
bool (*Map6::ptr::Set7)(Map6 * self, int key, Object * value) = (bool (*)(Map6 * self, int key, Object * value)) 0x80b6b40;
bool (*Map6::ptr::Insert4)(Map6 * self, int key, Object * value) = (bool (*)(Map6 * self, int key, Object * value)) 0x806fe40;
void (*Map6::ptr::_mark)() = (void (*)()) 0x808c150;
#endif
#endif
