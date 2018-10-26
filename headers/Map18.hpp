// Generated automatically. Do not edit!
#ifndef _Map18_
#define _Map18_
class MapKeys2;
class Node60;
class Point;
#include "Object.hpp"

class Map18 : public Object  {
public:
    Node60 * root;

    // Wrappers
    inline Map18 * _New() { return ptr::_New(); }
    inline virtual int Compare6(Point * arg1, Point * arg2) { return ptr::_Compare6(this, arg1, arg2); }
    inline virtual int RotateLeft18(Node60 * arg1) { return ptr::_RotateLeft18(this, arg1); }
    inline virtual int RotateRight18(Node60 * arg1) { return ptr::_RotateRight18(this, arg1); }
    inline virtual int InsertFixup18(Node60 * arg1) { return ptr::_InsertFixup18(this, arg1); }
    inline virtual bool Add12(Point * key, int value) { return ptr::Add12(this, key, value); }
    inline virtual MapKeys2 * Keys() { return ptr::Keys(this); }
    inline virtual Node60 * FirstNode() { return ptr::_FirstNode(); }
    inline virtual Node60 * FindNode3(Point * arg1) { return ptr::_FindNode3(this, arg1); }
    inline virtual int Get4(Point * key) { return ptr::Get4(this, key); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Map18 * (*_New)();
        static int (*_Compare6)(Map18 * self, Point * arg1, Point * arg2);
        static int (*_RotateLeft18)(Map18 * self, Node60 * arg1);
        static int (*_RotateRight18)(Map18 * self, Node60 * arg1);
        static int (*_InsertFixup18)(Map18 * self, Node60 * arg1);
        static bool (*Add12)(Map18 * self, Point * key, int value);
        static MapKeys2 * (*Keys)(Map18 * self);
        static Node60 * (*_FirstNode)();
        static Node60 * (*_FindNode3)(Map18 * self, Point * arg1);
        static int (*Get4)(Map18 * self, Point * key);
        static void (*_mark)();
    };
};

#ifdef _WIN32

Map18 * (*Map18::ptr::_New)() = (Map18 * (*)()) 0x0;
int (*Map18::ptr::_Compare6)(Map18 * self, Point * arg1, Point * arg2) = (int (*)(Map18 * self, Point * arg1, Point * arg2)) 0x0;
int (*Map18::ptr::_RotateLeft18)(Map18 * self, Node60 * arg1) = (int (*)(Map18 * self, Node60 * arg1)) 0x0;
int (*Map18::ptr::_RotateRight18)(Map18 * self, Node60 * arg1) = (int (*)(Map18 * self, Node60 * arg1)) 0x0;
int (*Map18::ptr::_InsertFixup18)(Map18 * self, Node60 * arg1) = (int (*)(Map18 * self, Node60 * arg1)) 0x0;
bool (*Map18::ptr::Add12)(Map18 * self, Point * key, int value) = (bool (*)(Map18 * self, Point * key, int value)) 0x630cb0;
MapKeys2 * (*Map18::ptr::Keys)(Map18 * self) = (MapKeys2 * (*)(Map18 * self)) 0x630db0;
Node60 * (*Map18::ptr::_FirstNode)() = (Node60 * (*)()) 0x0;
Node60 * (*Map18::ptr::_FindNode3)(Map18 * self, Point * arg1) = (Node60 * (*)(Map18 * self, Point * arg1)) 0x0;
int (*Map18::ptr::Get4)(Map18 * self, Point * key) = (int (*)(Map18 * self, Point * key)) 0x616280;
void (*Map18::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Map18 * (*Map18::ptr::_New)() = (Map18 * (*)()) 0x81ba1c0;
int (*Map18::ptr::_Compare6)(Map18 * self, Point * arg1, Point * arg2) = (int (*)(Map18 * self, Point * arg1, Point * arg2)) 0x0;
int (*Map18::ptr::_RotateLeft18)(Map18 * self, Node60 * arg1) = (int (*)(Map18 * self, Node60 * arg1)) 0x0;
int (*Map18::ptr::_RotateRight18)(Map18 * self, Node60 * arg1) = (int (*)(Map18 * self, Node60 * arg1)) 0x0;
int (*Map18::ptr::_InsertFixup18)(Map18 * self, Node60 * arg1) = (int (*)(Map18 * self, Node60 * arg1)) 0x0;
bool (*Map18::ptr::Add12)(Map18 * self, Point * key, int value) = (bool (*)(Map18 * self, Point * key, int value)) 0x80ba490;
MapKeys2 * (*Map18::ptr::Keys)(Map18 * self) = (MapKeys2 * (*)(Map18 * self)) 0x80bae80;
Node60 * (*Map18::ptr::_FirstNode)() = (Node60 * (*)()) 0x8075440;
Node60 * (*Map18::ptr::_FindNode3)(Map18 * self, Point * arg1) = (Node60 * (*)(Map18 * self, Point * arg1)) 0x8075460;
int (*Map18::ptr::Get4)(Map18 * self, Point * key) = (int (*)(Map18 * self, Point * key)) 0x80754b0;
void (*Map18::ptr::_mark)() = (void (*)()) 0x808d780;
#endif
#endif
