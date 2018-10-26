// Generated automatically. Do not edit!
#ifndef _Map4_
#define _Map4_
class Node5;
class SpriteInitData;
class String;
#include "Object.hpp"

class Map4 : public Object  {
public:
    Node5 * root;

    // Wrappers
    inline Map4 * _New() { return ptr::_New(); }
    inline virtual int _Compare(String * arg1, String * arg2) { return ptr::_Compare(this, arg1, arg2); }
    inline virtual int RotateLeft4(Node5 * arg1) { return ptr::_RotateLeft4(this, arg1); }
    inline virtual int RotateRight4(Node5 * arg1) { return ptr::_RotateRight4(this, arg1); }
    inline virtual int InsertFixup4(Node5 * arg1) { return ptr::_InsertFixup4(this, arg1); }
    inline virtual bool Set5(String * key, SpriteInitData * value) { return ptr::Set5(this, key, value); }
    inline virtual Node5 * FindNode(String * arg1) { return ptr::_FindNode(this, arg1); }
    inline virtual SpriteInitData * Get(String * key) { return ptr::Get(this, key); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Map4 * (*_New)();
        static int (*_Compare)(Map4 * self, String * arg1, String * arg2);
        static int (*_RotateLeft4)(Map4 * self, Node5 * arg1);
        static int (*_RotateRight4)(Map4 * self, Node5 * arg1);
        static int (*_InsertFixup4)(Map4 * self, Node5 * arg1);
        static bool (*Set5)(Map4 * self, String * key, SpriteInitData * value);
        static Node5 * (*_FindNode)(Map4 * self, String * arg1);
        static SpriteInitData * (*Get)(Map4 * self, String * key);
        static void (*_mark)();
    };
};

#ifdef _WIN32

Map4 * (*Map4::ptr::_New)() = (Map4 * (*)()) 0x0;
int (*Map4::ptr::_Compare)(Map4 * self, String * arg1, String * arg2) = (int (*)(Map4 * self, String * arg1, String * arg2)) 0x0;
int (*Map4::ptr::_RotateLeft4)(Map4 * self, Node5 * arg1) = (int (*)(Map4 * self, Node5 * arg1)) 0x0;
int (*Map4::ptr::_RotateRight4)(Map4 * self, Node5 * arg1) = (int (*)(Map4 * self, Node5 * arg1)) 0x0;
int (*Map4::ptr::_InsertFixup4)(Map4 * self, Node5 * arg1) = (int (*)(Map4 * self, Node5 * arg1)) 0x0;
bool (*Map4::ptr::Set5)(Map4 * self, String * key, SpriteInitData * value) = (bool (*)(Map4 * self, String * key, SpriteInitData * value)) 0x53be40;
Node5 * (*Map4::ptr::_FindNode)(Map4 * self, String * arg1) = (Node5 * (*)(Map4 * self, String * arg1)) 0x0;
SpriteInitData * (*Map4::ptr::Get)(Map4 * self, String * key) = (SpriteInitData * (*)(Map4 * self, String * key)) 0x53bf90;
void (*Map4::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Map4 * (*Map4::ptr::_New)() = (Map4 * (*)()) 0x8145ba0;
int (*Map4::ptr::_Compare)(Map4 * self, String * arg1, String * arg2) = (int (*)(Map4 * self, String * arg1, String * arg2)) 0x0;
int (*Map4::ptr::_RotateLeft4)(Map4 * self, Node5 * arg1) = (int (*)(Map4 * self, Node5 * arg1)) 0x0;
int (*Map4::ptr::_RotateRight4)(Map4 * self, Node5 * arg1) = (int (*)(Map4 * self, Node5 * arg1)) 0x0;
int (*Map4::ptr::_InsertFixup4)(Map4 * self, Node5 * arg1) = (int (*)(Map4 * self, Node5 * arg1)) 0x0;
bool (*Map4::ptr::Set5)(Map4 * self, String * key, SpriteInitData * value) = (bool (*)(Map4 * self, String * key, SpriteInitData * value)) 0x80dbdd0;
Node5 * (*Map4::ptr::_FindNode)(Map4 * self, String * arg1) = (Node5 * (*)(Map4 * self, String * arg1)) 0x80c3ef0;
SpriteInitData * (*Map4::ptr::Get)(Map4 * self, String * key) = (SpriteInitData * (*)(Map4 * self, String * key)) 0x80c3e80;
void (*Map4::ptr::_mark)() = (void (*)()) 0x808bad0;
#endif
#endif
