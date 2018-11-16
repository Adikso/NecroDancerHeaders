// Generated automatically. Do not edit!
#ifndef _Map20_
#define _Map20_
class Node72;
#include "Object.hpp"

class Map20 : public Object  {
public:
    Node72 * root;

    // Wrappers
    inline Map20 * _New() { return ptr::_New(); }
    inline virtual int Compare2(int arg1, int arg2) { return ptr::_Compare2(this, arg1, arg2); }
    inline virtual Node72 * FindNode2(int arg1) { return ptr::_FindNode2(this, arg1); }
    inline virtual bool Contains2(int arg1) { return ptr::_Contains2(this, arg1); }
    inline virtual int RotateLeft20(Node72 * arg1) { return ptr::_RotateLeft20(this, arg1); }
    inline virtual int RotateRight20(Node72 * arg1) { return ptr::_RotateRight20(this, arg1); }
    inline virtual int InsertFixup20(Node72 * arg1) { return ptr::_InsertFixup20(this, arg1); }
    inline virtual bool Add13(int key, bool value) { return ptr::Add13(this, key, value); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Map20 * (*_New)();
        static int (*_Compare2)(Map20 * self, int arg1, int arg2);
        static Node72 * (*_FindNode2)(Map20 * self, int arg1);
        static bool (*_Contains2)(Map20 * self, int arg1);
        static int (*_RotateLeft20)(Map20 * self, Node72 * arg1);
        static int (*_RotateRight20)(Map20 * self, Node72 * arg1);
        static int (*_InsertFixup20)(Map20 * self, Node72 * arg1);
        static bool (*Add13)(Map20 * self, int key, bool value);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Map20 * (*Map20::ptr::_New)() = (Map20 * (*)()) 0x0;
inline int (*Map20::ptr::_Compare2)(Map20 * self, int arg1, int arg2) = (int (*)(Map20 * self, int arg1, int arg2)) 0x0;
inline Node72 * (*Map20::ptr::_FindNode2)(Map20 * self, int arg1) = (Node72 * (*)(Map20 * self, int arg1)) 0x0;
inline bool (*Map20::ptr::_Contains2)(Map20 * self, int arg1) = (bool (*)(Map20 * self, int arg1)) 0x0;
inline int (*Map20::ptr::_RotateLeft20)(Map20 * self, Node72 * arg1) = (int (*)(Map20 * self, Node72 * arg1)) 0x0;
inline int (*Map20::ptr::_RotateRight20)(Map20 * self, Node72 * arg1) = (int (*)(Map20 * self, Node72 * arg1)) 0x0;
inline int (*Map20::ptr::_InsertFixup20)(Map20 * self, Node72 * arg1) = (int (*)(Map20 * self, Node72 * arg1)) 0x0;
inline bool (*Map20::ptr::Add13)(Map20 * self, int key, bool value) = (bool (*)(Map20 * self, int key, bool value)) 0x661050;
inline void (*Map20::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Map20 * (*Map20::ptr::_New)() = (Map20 * (*)()) 0x81d6950;
inline int (*Map20::ptr::_Compare2)(Map20 * self, int arg1, int arg2) = (int (*)(Map20 * self, int arg1, int arg2)) 0x0;
inline Node72 * (*Map20::ptr::_FindNode2)(Map20 * self, int arg1) = (Node72 * (*)(Map20 * self, int arg1)) 0x8077620;
inline bool (*Map20::ptr::_Contains2)(Map20 * self, int arg1) = (bool (*)(Map20 * self, int arg1)) 0x8077670;
inline int (*Map20::ptr::_RotateLeft20)(Map20 * self, Node72 * arg1) = (int (*)(Map20 * self, Node72 * arg1)) 0x0;
inline int (*Map20::ptr::_RotateRight20)(Map20 * self, Node72 * arg1) = (int (*)(Map20 * self, Node72 * arg1)) 0x0;
inline int (*Map20::ptr::_InsertFixup20)(Map20 * self, Node72 * arg1) = (int (*)(Map20 * self, Node72 * arg1)) 0x0;
inline bool (*Map20::ptr::Add13)(Map20 * self, int key, bool value) = (bool (*)(Map20 * self, int key, bool value)) 0x80bbd00;
inline void (*Map20::ptr::_mark)() = (void (*)()) 0x808c650;
#endif
#endif
