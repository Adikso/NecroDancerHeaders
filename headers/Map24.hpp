// Generated automatically. Do not edit!
#ifndef _Map24_
#define _Map24_
class FloorPulse;
class Node81;
#include "Object.hpp"

class Map24 : public Object  {
public:
    Node81 * root;

    // Wrappers
    inline Map24 * _New() { return ptr::_New(); }
    inline virtual int Compare2(int arg1, int arg2) { return ptr::_Compare2(this, arg1, arg2); }
    inline virtual Node81 * FindNode2(int arg1) { return ptr::_FindNode2(this, arg1); }
    inline virtual FloorPulse * Get2(int arg1) { return ptr::_Get2(this, arg1); }
    inline virtual int RotateLeft24(Node81 * arg1) { return ptr::_RotateLeft24(this, arg1); }
    inline virtual int RotateRight24(Node81 * arg1) { return ptr::_RotateRight24(this, arg1); }
    inline virtual int InsertFixup24(Node81 * arg1) { return ptr::_InsertFixup24(this, arg1); }
    inline virtual bool Set28(int key, FloorPulse * value) { return ptr::Set28(this, key, value); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Map24 * (*_New)();
        static int (*_Compare2)(Map24 * self, int arg1, int arg2);
        static Node81 * (*_FindNode2)(Map24 * self, int arg1);
        static FloorPulse * (*_Get2)(Map24 * self, int arg1);
        static int (*_RotateLeft24)(Map24 * self, Node81 * arg1);
        static int (*_RotateRight24)(Map24 * self, Node81 * arg1);
        static int (*_InsertFixup24)(Map24 * self, Node81 * arg1);
        static bool (*Set28)(Map24 * self, int key, FloorPulse * value);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Map24 * (*Map24::ptr::_New)() = (Map24 * (*)()) 0x0;
inline int (*Map24::ptr::_Compare2)(Map24 * self, int arg1, int arg2) = (int (*)(Map24 * self, int arg1, int arg2)) 0x0;
inline Node81 * (*Map24::ptr::_FindNode2)(Map24 * self, int arg1) = (Node81 * (*)(Map24 * self, int arg1)) 0x0;
inline FloorPulse * (*Map24::ptr::_Get2)(Map24 * self, int arg1) = (FloorPulse * (*)(Map24 * self, int arg1)) 0x0;
inline int (*Map24::ptr::_RotateLeft24)(Map24 * self, Node81 * arg1) = (int (*)(Map24 * self, Node81 * arg1)) 0x0;
inline int (*Map24::ptr::_RotateRight24)(Map24 * self, Node81 * arg1) = (int (*)(Map24 * self, Node81 * arg1)) 0x0;
inline int (*Map24::ptr::_InsertFixup24)(Map24 * self, Node81 * arg1) = (int (*)(Map24 * self, Node81 * arg1)) 0x0;
inline bool (*Map24::ptr::Set28)(Map24 * self, int key, FloorPulse * value) = (bool (*)(Map24 * self, int key, FloorPulse * value)) 0x68dfd0;
inline void (*Map24::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Map24 * (*Map24::ptr::_New)() = (Map24 * (*)()) 0x81e5490;
inline int (*Map24::ptr::_Compare2)(Map24 * self, int arg1, int arg2) = (int (*)(Map24 * self, int arg1, int arg2)) 0x0;
inline Node81 * (*Map24::ptr::_FindNode2)(Map24 * self, int arg1) = (Node81 * (*)(Map24 * self, int arg1)) 0x80791c0;
inline FloorPulse * (*Map24::ptr::_Get2)(Map24 * self, int arg1) = (FloorPulse * (*)(Map24 * self, int arg1)) 0x8079210;
inline int (*Map24::ptr::_RotateLeft24)(Map24 * self, Node81 * arg1) = (int (*)(Map24 * self, Node81 * arg1)) 0x0;
inline int (*Map24::ptr::_RotateRight24)(Map24 * self, Node81 * arg1) = (int (*)(Map24 * self, Node81 * arg1)) 0x0;
inline int (*Map24::ptr::_InsertFixup24)(Map24 * self, Node81 * arg1) = (int (*)(Map24 * self, Node81 * arg1)) 0x0;
inline bool (*Map24::ptr::Set28)(Map24 * self, int key, FloorPulse * value) = (bool (*)(Map24 * self, int key, FloorPulse * value)) 0x80bcdf0;
inline void (*Map24::ptr::_mark)() = (void (*)()) 0x808c8b0;
#endif
#endif
