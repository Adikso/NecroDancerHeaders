// Generated automatically. Do not edit!
#ifndef _Map2_
#define _Map2_
class List;
class Node3;
class String;
#include "Object.hpp"

class Map2 : public Object  {
public:
    Node3 * root;

    // Wrappers
    inline Map2 * _New() { return ptr::_New(); }
    inline virtual int _Compare(String * arg1, String * arg2) { return ptr::_Compare(this, arg1, arg2); }
    inline virtual int RotateLeft2(Node3 * arg1) { return ptr::_RotateLeft2(this, arg1); }
    inline virtual int RotateRight2(Node3 * arg1) { return ptr::_RotateRight2(this, arg1); }
    inline virtual int InsertFixup2(Node3 * arg1) { return ptr::_InsertFixup2(this, arg1); }
    inline virtual bool Set3(String * key, List * value) { return ptr::Set3(this, key, value); }
    inline virtual bool Insert2(String * key, List * value) { return ptr::Insert2(this, key, value); }
    inline virtual Node3 * FindNode(String * arg1) { return ptr::_FindNode(this, arg1); }
    inline virtual List * Get(String * arg1) { return ptr::_Get(this, arg1); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Map2 * (*_New)();
        static int (*_Compare)(Map2 * self, String * arg1, String * arg2);
        static int (*_RotateLeft2)(Map2 * self, Node3 * arg1);
        static int (*_RotateRight2)(Map2 * self, Node3 * arg1);
        static int (*_InsertFixup2)(Map2 * self, Node3 * arg1);
        static bool (*Set3)(Map2 * self, String * key, List * value);
        static bool (*Insert2)(Map2 * self, String * key, List * value);
        static Node3 * (*_FindNode)(Map2 * self, String * arg1);
        static List * (*_Get)(Map2 * self, String * arg1);
        static void (*_mark)();
    };
};

#ifdef _WIN32

Map2 * (*Map2::ptr::_New)() = (Map2 * (*)()) 0x0;
int (*Map2::ptr::_Compare)(Map2 * self, String * arg1, String * arg2) = (int (*)(Map2 * self, String * arg1, String * arg2)) 0x0;
int (*Map2::ptr::_RotateLeft2)(Map2 * self, Node3 * arg1) = (int (*)(Map2 * self, Node3 * arg1)) 0x0;
int (*Map2::ptr::_RotateRight2)(Map2 * self, Node3 * arg1) = (int (*)(Map2 * self, Node3 * arg1)) 0x0;
int (*Map2::ptr::_InsertFixup2)(Map2 * self, Node3 * arg1) = (int (*)(Map2 * self, Node3 * arg1)) 0x0;
bool (*Map2::ptr::Set3)(Map2 * self, String * key, List * value) = (bool (*)(Map2 * self, String * key, List * value)) 0x4f7bd0;
bool (*Map2::ptr::Insert2)(Map2 * self, String * key, List * value) = (bool (*)(Map2 * self, String * key, List * value)) 0x4f7d20;
Node3 * (*Map2::ptr::_FindNode)(Map2 * self, String * arg1) = (Node3 * (*)(Map2 * self, String * arg1)) 0x0;
List * (*Map2::ptr::_Get)(Map2 * self, String * arg1) = (List * (*)(Map2 * self, String * arg1)) 0x0;
void (*Map2::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Map2 * (*Map2::ptr::_New)() = (Map2 * (*)()) 0x813b930;
int (*Map2::ptr::_Compare)(Map2 * self, String * arg1, String * arg2) = (int (*)(Map2 * self, String * arg1, String * arg2)) 0x0;
int (*Map2::ptr::_RotateLeft2)(Map2 * self, Node3 * arg1) = (int (*)(Map2 * self, Node3 * arg1)) 0x0;
int (*Map2::ptr::_RotateRight2)(Map2 * self, Node3 * arg1) = (int (*)(Map2 * self, Node3 * arg1)) 0x0;
int (*Map2::ptr::_InsertFixup2)(Map2 * self, Node3 * arg1) = (int (*)(Map2 * self, Node3 * arg1)) 0x0;
bool (*Map2::ptr::Set3)(Map2 * self, String * key, List * value) = (bool (*)(Map2 * self, String * key, List * value)) 0x80db390;
bool (*Map2::ptr::Insert2)(Map2 * self, String * key, List * value) = (bool (*)(Map2 * self, String * key, List * value)) 0x80c49d0;
Node3 * (*Map2::ptr::_FindNode)(Map2 * self, String * arg1) = (Node3 * (*)(Map2 * self, String * arg1)) 0x80c4920;
List * (*Map2::ptr::_Get)(Map2 * self, String * arg1) = (List * (*)(Map2 * self, String * arg1)) 0x80c48b0;
void (*Map2::ptr::_mark)() = (void (*)()) 0x808bcd0;
#endif
#endif
