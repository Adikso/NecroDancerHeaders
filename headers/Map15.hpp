// Generated automatically. Do not edit!
#ifndef _Map15_
#define _Map15_
class Node39;
class Sprite;
class String;
#include "Object.hpp"

class Map15 : public Object  {
public:
    Node39 * root;

    // Wrappers
    inline Map15 * _New() { return ptr::_New(); }
    inline virtual int _Compare(String * arg1, String * arg2) { return ptr::_Compare(this, arg1, arg2); }
    inline virtual Node39 * FindNode(String * arg1) { return ptr::_FindNode(this, arg1); }
    inline virtual bool Contains(String * arg1) { return ptr::_Contains(this, arg1); }
    inline virtual int RotateLeft15(Node39 * arg1) { return ptr::_RotateLeft15(this, arg1); }
    inline virtual int RotateRight15(Node39 * arg1) { return ptr::_RotateRight15(this, arg1); }
    inline virtual int InsertFixup15(Node39 * arg1) { return ptr::_InsertFixup15(this, arg1); }
    inline virtual bool Set16(String * key, Sprite * value) { return ptr::Set16(this, key, value); }
    inline virtual int Clear() { return ptr::_Clear(); }
    inline virtual bool Add9(String * key, Sprite * value) { return ptr::Add9(this, key, value); }
    inline virtual Sprite * Get(String * arg1) { return ptr::_Get(this, arg1); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Map15 * (*_New)();
        static int (*_Compare)(Map15 * self, String * arg1, String * arg2);
        static Node39 * (*_FindNode)(Map15 * self, String * arg1);
        static bool (*_Contains)(Map15 * self, String * arg1);
        static int (*_RotateLeft15)(Map15 * self, Node39 * arg1);
        static int (*_RotateRight15)(Map15 * self, Node39 * arg1);
        static int (*_InsertFixup15)(Map15 * self, Node39 * arg1);
        static bool (*Set16)(Map15 * self, String * key, Sprite * value);
        static int (*_Clear)();
        static bool (*Add9)(Map15 * self, String * key, Sprite * value);
        static Sprite * (*_Get)(Map15 * self, String * arg1);
        static void (*_mark)();
    };
};

#ifdef _WIN32

Map15 * (*Map15::ptr::_New)() = (Map15 * (*)()) 0x0;
int (*Map15::ptr::_Compare)(Map15 * self, String * arg1, String * arg2) = (int (*)(Map15 * self, String * arg1, String * arg2)) 0x0;
Node39 * (*Map15::ptr::_FindNode)(Map15 * self, String * arg1) = (Node39 * (*)(Map15 * self, String * arg1)) 0x0;
bool (*Map15::ptr::_Contains)(Map15 * self, String * arg1) = (bool (*)(Map15 * self, String * arg1)) 0x0;
int (*Map15::ptr::_RotateLeft15)(Map15 * self, Node39 * arg1) = (int (*)(Map15 * self, Node39 * arg1)) 0x0;
int (*Map15::ptr::_RotateRight15)(Map15 * self, Node39 * arg1) = (int (*)(Map15 * self, Node39 * arg1)) 0x0;
int (*Map15::ptr::_InsertFixup15)(Map15 * self, Node39 * arg1) = (int (*)(Map15 * self, Node39 * arg1)) 0x0;
bool (*Map15::ptr::Set16)(Map15 * self, String * key, Sprite * value) = (bool (*)(Map15 * self, String * key, Sprite * value)) 0x5f2b10;
int (*Map15::ptr::_Clear)() = (int (*)()) 0x0;
bool (*Map15::ptr::Add9)(Map15 * self, String * key, Sprite * value) = (bool (*)(Map15 * self, String * key, Sprite * value)) 0x5f2c60;
Sprite * (*Map15::ptr::_Get)(Map15 * self, String * arg1) = (Sprite * (*)(Map15 * self, String * arg1)) 0x0;
void (*Map15::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Map15 * (*Map15::ptr::_New)() = (Map15 * (*)()) 0x819d680;
int (*Map15::ptr::_Compare)(Map15 * self, String * arg1, String * arg2) = (int (*)(Map15 * self, String * arg1, String * arg2)) 0x0;
Node39 * (*Map15::ptr::_FindNode)(Map15 * self, String * arg1) = (Node39 * (*)(Map15 * self, String * arg1)) 0x80c32a0;
bool (*Map15::ptr::_Contains)(Map15 * self, String * arg1) = (bool (*)(Map15 * self, String * arg1)) 0x80c3240;
int (*Map15::ptr::_RotateLeft15)(Map15 * self, Node39 * arg1) = (int (*)(Map15 * self, Node39 * arg1)) 0x0;
int (*Map15::ptr::_RotateRight15)(Map15 * self, Node39 * arg1) = (int (*)(Map15 * self, Node39 * arg1)) 0x0;
int (*Map15::ptr::_InsertFixup15)(Map15 * self, Node39 * arg1) = (int (*)(Map15 * self, Node39 * arg1)) 0x0;
bool (*Map15::ptr::Set16)(Map15 * self, String * key, Sprite * value) = (bool (*)(Map15 * self, String * key, Sprite * value)) 0x80dc800;
int (*Map15::ptr::_Clear)() = (int (*)()) 0x8072f20;
bool (*Map15::ptr::Add9)(Map15 * self, String * key, Sprite * value) = (bool (*)(Map15 * self, String * key, Sprite * value)) 0x80dba80;
Sprite * (*Map15::ptr::_Get)(Map15 * self, String * arg1) = (Sprite * (*)(Map15 * self, String * arg1)) 0x80c31d0;
void (*Map15::ptr::_mark)() = (void (*)()) 0x8082bc0;
#endif
#endif
