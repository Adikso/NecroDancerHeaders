// Generated automatically. Do not edit!
#ifndef _Map12_
#define _Map12_
class Node35;
class Node36;
class String;
#include "Object.hpp"

class Map12 : public Object  {
public:
    Node35 * root;

    // Wrappers
    inline Map12 * _New() { return ptr::_New(); }
    inline virtual int Clear() { return ptr::_Clear(); }
    inline virtual int _Compare(String * arg1, String * arg2) { return ptr::_Compare(this, arg1, arg2); }
    inline virtual Node35 * FindNode(String * arg1) { return ptr::_FindNode(this, arg1); }
    inline virtual bool Contains(String * key) { return ptr::Contains(this, key); }
    inline virtual bool Get(String * key) { return ptr::Get(this, key); }
    inline virtual int RotateLeft12(Node35 * arg1) { return ptr::_RotateLeft12(this, arg1); }
    inline virtual int RotateRight12(Node35 * arg1) { return ptr::_RotateRight12(this, arg1); }
    inline virtual int InsertFixup12(Node35 * arg1) { return ptr::_InsertFixup12(this, arg1); }
    inline virtual bool Set13(String * key, bool value) { return ptr::Set13(this, key, value); }
    inline void _mark() { ptr::_mark(); }
    inline int _InsertFixup12(Node36 * node) { return ptr::_InsertFixup12_2(this, node); }

    class ptr {
    public:
        static Map12 * (*_New)();
        static int (*_Clear)();
        static int (*_Compare)(Map12 * self, String * arg1, String * arg2);
        static Node35 * (*_FindNode)(Map12 * self, String * arg1);
        static bool (*Contains)(Map12 * self, String * key);
        static bool (*Get)(Map12 * self, String * key);
        static int (*_RotateLeft12)(Map12 * self, Node35 * arg1);
        static int (*_RotateRight12)(Map12 * self, Node35 * arg1);
        static int (*_InsertFixup12)(Map12 * self, Node35 * arg1);
        static bool (*Set13)(Map12 * self, String * key, bool value);
        static void (*_mark)();
        static int (*_InsertFixup12_2)(Map12 * self, Node36 * node);
    };
};

#ifdef _WIN32

Map12 * (*Map12::ptr::_New)() = (Map12 * (*)()) 0x0;
int (*Map12::ptr::_Clear)() = (int (*)()) 0x0;
int (*Map12::ptr::_Compare)(Map12 * self, String * arg1, String * arg2) = (int (*)(Map12 * self, String * arg1, String * arg2)) 0x0;
Node35 * (*Map12::ptr::_FindNode)(Map12 * self, String * arg1) = (Node35 * (*)(Map12 * self, String * arg1)) 0x0;
bool (*Map12::ptr::Contains)(Map12 * self, String * key) = (bool (*)(Map12 * self, String * key)) 0x5e0490;
bool (*Map12::ptr::Get)(Map12 * self, String * key) = (bool (*)(Map12 * self, String * key)) 0x5e0c90;
int (*Map12::ptr::_RotateLeft12)(Map12 * self, Node35 * arg1) = (int (*)(Map12 * self, Node35 * arg1)) 0x0;
int (*Map12::ptr::_RotateRight12)(Map12 * self, Node35 * arg1) = (int (*)(Map12 * self, Node35 * arg1)) 0x0;
int (*Map12::ptr::_InsertFixup12)(Map12 * self, Node35 * arg1) = (int (*)(Map12 * self, Node35 * arg1)) 0x0;
bool (*Map12::ptr::Set13)(Map12 * self, String * key, bool value) = (bool (*)(Map12 * self, String * key, bool value)) 0x5e0d20;
void (*Map12::ptr::_mark)() = (void (*)()) 0x0;
int (*Map12::ptr::_InsertFixup12_2)(Map12 * self, Node36 * node) = (int (*)(Map12 * self, Node36 * node)) 0x5e05b0;
#endif

#ifdef __linux__

Map12 * (*Map12::ptr::_New)() = (Map12 * (*)()) 0x819a380;
int (*Map12::ptr::_Clear)() = (int (*)()) 0x8072380;
int (*Map12::ptr::_Compare)(Map12 * self, String * arg1, String * arg2) = (int (*)(Map12 * self, String * arg1, String * arg2)) 0x0;
Node35 * (*Map12::ptr::_FindNode)(Map12 * self, String * arg1) = (Node35 * (*)(Map12 * self, String * arg1)) 0x80c3710;
bool (*Map12::ptr::Contains)(Map12 * self, String * key) = (bool (*)(Map12 * self, String * key)) 0x80c36b0;
bool (*Map12::ptr::Get)(Map12 * self, String * key) = (bool (*)(Map12 * self, String * key)) 0x80c3650;
int (*Map12::ptr::_RotateLeft12)(Map12 * self, Node35 * arg1) = (int (*)(Map12 * self, Node35 * arg1)) 0x0;
int (*Map12::ptr::_RotateRight12)(Map12 * self, Node35 * arg1) = (int (*)(Map12 * self, Node35 * arg1)) 0x0;
int (*Map12::ptr::_InsertFixup12)(Map12 * self, Node35 * arg1) = (int (*)(Map12 * self, Node35 * arg1)) 0x0;
bool (*Map12::ptr::Set13)(Map12 * self, String * key, bool value) = (bool (*)(Map12 * self, String * key, bool value)) 0x80dc170;
void (*Map12::ptr::_mark)() = (void (*)()) 0x808c440;
int (*Map12::ptr::_InsertFixup12_2)(Map12 * self, Node36 * node) = (int (*)(Map12 * self, Node36 * node)) 0x0;
#endif
#endif
