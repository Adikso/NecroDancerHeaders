// Generated automatically. Do not edit!
#ifndef _Map11_
#define _Map11_
class Node34;
class NodeEnumerator4;
class String;
#include "Object.hpp"

class Map11 : public Object  {
public:
    Node34 * root;

    // Wrappers
    inline Map11 * _New() { return ptr::_New(); }
    inline virtual int Clear() { return ptr::_Clear(); }
    inline virtual int _Compare(String * arg1, String * arg2) { return ptr::_Compare(this, arg1, arg2); }
    inline virtual Node34 * FindNode(String * arg1) { return ptr::_FindNode(this, arg1); }
    inline virtual bool Contains(String * arg1) { return ptr::_Contains(this, arg1); }
    inline virtual String * Get(String * key) { return ptr::Get(this, key); }
    inline virtual int RotateLeft11(Node34 * arg1) { return ptr::_RotateLeft11(this, arg1); }
    inline virtual int RotateRight11(Node34 * arg1) { return ptr::_RotateRight11(this, arg1); }
    inline virtual int InsertFixup11(Node34 * arg1) { return ptr::_InsertFixup11(this, arg1); }
    inline virtual bool Set12(String * key, String * value) { return ptr::Set12(this, key, value); }
    inline virtual Node34 * FirstNode() { return ptr::_FirstNode(); }
    inline virtual NodeEnumerator4 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Map11 * (*_New)();
        static int (*_Clear)();
        static int (*_Compare)(Map11 * self, String * arg1, String * arg2);
        static Node34 * (*_FindNode)(Map11 * self, String * arg1);
        static bool (*_Contains)(Map11 * self, String * arg1);
        static String * (*Get)(Map11 * self, String * key);
        static int (*_RotateLeft11)(Map11 * self, Node34 * arg1);
        static int (*_RotateRight11)(Map11 * self, Node34 * arg1);
        static int (*_InsertFixup11)(Map11 * self, Node34 * arg1);
        static bool (*Set12)(Map11 * self, String * key, String * value);
        static Node34 * (*_FirstNode)();
        static NodeEnumerator4 * (*ObjectEnumerator)(Map11 * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

Map11 * (*Map11::ptr::_New)() = (Map11 * (*)()) 0x0;
int (*Map11::ptr::_Clear)() = (int (*)()) 0x0;
int (*Map11::ptr::_Compare)(Map11 * self, String * arg1, String * arg2) = (int (*)(Map11 * self, String * arg1, String * arg2)) 0x0;
Node34 * (*Map11::ptr::_FindNode)(Map11 * self, String * arg1) = (Node34 * (*)(Map11 * self, String * arg1)) 0x0;
bool (*Map11::ptr::_Contains)(Map11 * self, String * arg1) = (bool (*)(Map11 * self, String * arg1)) 0x0;
String * (*Map11::ptr::Get)(Map11 * self, String * key) = (String * (*)(Map11 * self, String * key)) 0x5e0510;
int (*Map11::ptr::_RotateLeft11)(Map11 * self, Node34 * arg1) = (int (*)(Map11 * self, Node34 * arg1)) 0x0;
int (*Map11::ptr::_RotateRight11)(Map11 * self, Node34 * arg1) = (int (*)(Map11 * self, Node34 * arg1)) 0x0;
int (*Map11::ptr::_InsertFixup11)(Map11 * self, Node34 * arg1) = (int (*)(Map11 * self, Node34 * arg1)) 0x0;
bool (*Map11::ptr::Set12)(Map11 * self, String * key, String * value) = (bool (*)(Map11 * self, String * key, String * value)) 0x5e06a0;
Node34 * (*Map11::ptr::_FirstNode)() = (Node34 * (*)()) 0x0;
NodeEnumerator4 * (*Map11::ptr::ObjectEnumerator)(Map11 * self) = (NodeEnumerator4 * (*)(Map11 * self)) 0x5e0830;
void (*Map11::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Map11 * (*Map11::ptr::_New)() = (Map11 * (*)()) 0x819a1b0;
int (*Map11::ptr::_Clear)() = (int (*)()) 0x8072210;
int (*Map11::ptr::_Compare)(Map11 * self, String * arg1, String * arg2) = (int (*)(Map11 * self, String * arg1, String * arg2)) 0x0;
Node34 * (*Map11::ptr::_FindNode)(Map11 * self, String * arg1) = (Node34 * (*)(Map11 * self, String * arg1)) 0x80c3820;
bool (*Map11::ptr::_Contains)(Map11 * self, String * arg1) = (bool (*)(Map11 * self, String * arg1)) 0x80c37c0;
String * (*Map11::ptr::Get)(Map11 * self, String * key) = (String * (*)(Map11 * self, String * key)) 0x80c4ed0;
int (*Map11::ptr::_RotateLeft11)(Map11 * self, Node34 * arg1) = (int (*)(Map11 * self, Node34 * arg1)) 0x0;
int (*Map11::ptr::_RotateRight11)(Map11 * self, Node34 * arg1) = (int (*)(Map11 * self, Node34 * arg1)) 0x0;
int (*Map11::ptr::_InsertFixup11)(Map11 * self, Node34 * arg1) = (int (*)(Map11 * self, Node34 * arg1)) 0x0;
bool (*Map11::ptr::Set12)(Map11 * self, String * key, String * value) = (bool (*)(Map11 * self, String * key, String * value)) 0x80e0190;
Node34 * (*Map11::ptr::_FirstNode)() = (Node34 * (*)()) 0x8072320;
NodeEnumerator4 * (*Map11::ptr::ObjectEnumerator)(Map11 * self) = (NodeEnumerator4 * (*)(Map11 * self)) 0x80b8500;
void (*Map11::ptr::_mark)() = (void (*)()) 0x808d840;
#endif
#endif
