// Generated automatically. Do not edit!
#ifndef _Map19_
#define _Map19_
class MapKeys4;
class Node63;
class Point;
#include "Object.hpp"

class Map19 : public Object  {
public:
    Node63 * root;

    // Wrappers
    inline Map19 * _New() { return ptr::_New(); }
    inline virtual int Compare6(Point * arg1, Point * arg2) { return ptr::_Compare6(this, arg1, arg2); }
    inline virtual int RotateLeft19(Node63 * arg1) { return ptr::_RotateLeft19(this, arg1); }
    inline virtual int RotateRight19(Node63 * arg1) { return ptr::_RotateRight19(this, arg1); }
    inline virtual int InsertFixup19(Node63 * arg1) { return ptr::_InsertFixup19(this, arg1); }
    inline virtual bool Set20(Point * key, Object * value) { return ptr::Set20(this, key, value); }
    inline virtual bool Insert9(Point * key, Object * value) { return ptr::Insert9(this, key, value); }
    inline virtual Node63 * FindNode3(Point * key) { return ptr::FindNode3(this, key); }
    inline virtual bool Contains5(Point * key) { return ptr::Contains5(this, key); }
    inline virtual MapKeys4 * Keys() { return ptr::Keys(this); }
    inline virtual Node63 * FirstNode() { return ptr::_FirstNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Map19 * (*_New)();
        static int (*_Compare6)(Map19 * self, Point * arg1, Point * arg2);
        static int (*_RotateLeft19)(Map19 * self, Node63 * arg1);
        static int (*_RotateRight19)(Map19 * self, Node63 * arg1);
        static int (*_InsertFixup19)(Map19 * self, Node63 * arg1);
        static bool (*Set20)(Map19 * self, Point * key, Object * value);
        static bool (*Insert9)(Map19 * self, Point * key, Object * value);
        static Node63 * (*FindNode3)(Map19 * self, Point * key);
        static bool (*Contains5)(Map19 * self, Point * key);
        static MapKeys4 * (*Keys)(Map19 * self);
        static Node63 * (*_FirstNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Map19 * (*Map19::ptr::_New)() = (Map19 * (*)()) 0x0;
int (*Map19::ptr::_Compare6)(Map19 * self, Point * arg1, Point * arg2) = (int (*)(Map19 * self, Point * arg1, Point * arg2)) 0x0;
int (*Map19::ptr::_RotateLeft19)(Map19 * self, Node63 * arg1) = (int (*)(Map19 * self, Node63 * arg1)) 0x0;
int (*Map19::ptr::_RotateRight19)(Map19 * self, Node63 * arg1) = (int (*)(Map19 * self, Node63 * arg1)) 0x0;
int (*Map19::ptr::_InsertFixup19)(Map19 * self, Node63 * arg1) = (int (*)(Map19 * self, Node63 * arg1)) 0x0;
bool (*Map19::ptr::Set20)(Map19 * self, Point * key, Object * value) = (bool (*)(Map19 * self, Point * key, Object * value)) 0x632e30;
bool (*Map19::ptr::Insert9)(Map19 * self, Point * key, Object * value) = (bool (*)(Map19 * self, Point * key, Object * value)) 0x632f40;
Node63 * (*Map19::ptr::FindNode3)(Map19 * self, Point * key) = (Node63 * (*)(Map19 * self, Point * key)) 0x5c9840;
bool (*Map19::ptr::Contains5)(Map19 * self, Point * key) = (bool (*)(Map19 * self, Point * key)) 0x632f50;
MapKeys4 * (*Map19::ptr::Keys)(Map19 * self) = (MapKeys4 * (*)(Map19 * self)) 0x632f70;
Node63 * (*Map19::ptr::_FirstNode)() = (Node63 * (*)()) 0x0;
void (*Map19::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Map19 * (*Map19::ptr::_New)() = (Map19 * (*)()) 0x81bc610;
int (*Map19::ptr::_Compare6)(Map19 * self, Point * arg1, Point * arg2) = (int (*)(Map19 * self, Point * arg1, Point * arg2)) 0x0;
int (*Map19::ptr::_RotateLeft19)(Map19 * self, Node63 * arg1) = (int (*)(Map19 * self, Node63 * arg1)) 0x0;
int (*Map19::ptr::_RotateRight19)(Map19 * self, Node63 * arg1) = (int (*)(Map19 * self, Node63 * arg1)) 0x0;
int (*Map19::ptr::_InsertFixup19)(Map19 * self, Node63 * arg1) = (int (*)(Map19 * self, Node63 * arg1)) 0x0;
bool (*Map19::ptr::Set20)(Map19 * self, Point * key, Object * value) = (bool (*)(Map19 * self, Point * key, Object * value)) 0x80bab30;
bool (*Map19::ptr::Insert9)(Map19 * self, Point * key, Object * value) = (bool (*)(Map19 * self, Point * key, Object * value)) 0x8075b20;
Node63 * (*Map19::ptr::FindNode3)(Map19 * self, Point * key) = (Node63 * (*)(Map19 * self, Point * key)) 0x8075b30;
bool (*Map19::ptr::Contains5)(Map19 * self, Point * key) = (bool (*)(Map19 * self, Point * key)) 0x8075b80;
MapKeys4 * (*Map19::ptr::Keys)(Map19 * self) = (MapKeys4 * (*)(Map19 * self)) 0x80baa30;
Node63 * (*Map19::ptr::_FirstNode)() = (Node63 * (*)()) 0x8075ba0;
void (*Map19::ptr::_mark)() = (void (*)()) 0x808e220;
#endif
#endif
