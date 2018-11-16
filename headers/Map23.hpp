// Generated automatically. Do not edit!
#ifndef _Map23_
#define _Map23_
class Node77;
class TextSprite;
#include "Object.hpp"

class Map23 : public Object  {
public:
    Node77 * root;

    // Wrappers
    inline Map23 * _New() { return ptr::_New(); }
    inline virtual int Compare2(int arg1, int arg2) { return ptr::_Compare2(this, arg1, arg2); }
    inline virtual Node77 * FindNode2(int arg1) { return ptr::_FindNode2(this, arg1); }
    inline virtual TextSprite * Get2(int arg1) { return ptr::_Get2(this, arg1); }
    inline virtual int RotateLeft23(Node77 * arg1) { return ptr::_RotateLeft23(this, arg1); }
    inline virtual int RotateRight23(Node77 * arg1) { return ptr::_RotateRight23(this, arg1); }
    inline virtual int InsertFixup23(Node77 * arg1) { return ptr::_InsertFixup23(this, arg1); }
    inline virtual bool Set27(int key, TextSprite * value) { return ptr::Set27(this, key, value); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Map23 * (*_New)();
        static int (*_Compare2)(Map23 * self, int arg1, int arg2);
        static Node77 * (*_FindNode2)(Map23 * self, int arg1);
        static TextSprite * (*_Get2)(Map23 * self, int arg1);
        static int (*_RotateLeft23)(Map23 * self, Node77 * arg1);
        static int (*_RotateRight23)(Map23 * self, Node77 * arg1);
        static int (*_InsertFixup23)(Map23 * self, Node77 * arg1);
        static bool (*Set27)(Map23 * self, int key, TextSprite * value);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Map23 * (*Map23::ptr::_New)() = (Map23 * (*)()) 0x0;
inline int (*Map23::ptr::_Compare2)(Map23 * self, int arg1, int arg2) = (int (*)(Map23 * self, int arg1, int arg2)) 0x0;
inline Node77 * (*Map23::ptr::_FindNode2)(Map23 * self, int arg1) = (Node77 * (*)(Map23 * self, int arg1)) 0x0;
inline TextSprite * (*Map23::ptr::_Get2)(Map23 * self, int arg1) = (TextSprite * (*)(Map23 * self, int arg1)) 0x0;
inline int (*Map23::ptr::_RotateLeft23)(Map23 * self, Node77 * arg1) = (int (*)(Map23 * self, Node77 * arg1)) 0x0;
inline int (*Map23::ptr::_RotateRight23)(Map23 * self, Node77 * arg1) = (int (*)(Map23 * self, Node77 * arg1)) 0x0;
inline int (*Map23::ptr::_InsertFixup23)(Map23 * self, Node77 * arg1) = (int (*)(Map23 * self, Node77 * arg1)) 0x0;
inline bool (*Map23::ptr::Set27)(Map23 * self, int key, TextSprite * value) = (bool (*)(Map23 * self, int key, TextSprite * value)) 0x68b820;
inline void (*Map23::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Map23 * (*Map23::ptr::_New)() = (Map23 * (*)()) 0x81e2f10;
inline int (*Map23::ptr::_Compare2)(Map23 * self, int arg1, int arg2) = (int (*)(Map23 * self, int arg1, int arg2)) 0x0;
inline Node77 * (*Map23::ptr::_FindNode2)(Map23 * self, int arg1) = (Node77 * (*)(Map23 * self, int arg1)) 0x8078f20;
inline TextSprite * (*Map23::ptr::_Get2)(Map23 * self, int arg1) = (TextSprite * (*)(Map23 * self, int arg1)) 0x8078f70;
inline int (*Map23::ptr::_RotateLeft23)(Map23 * self, Node77 * arg1) = (int (*)(Map23 * self, Node77 * arg1)) 0x0;
inline int (*Map23::ptr::_RotateRight23)(Map23 * self, Node77 * arg1) = (int (*)(Map23 * self, Node77 * arg1)) 0x0;
inline int (*Map23::ptr::_InsertFixup23)(Map23 * self, Node77 * arg1) = (int (*)(Map23 * self, Node77 * arg1)) 0x0;
inline bool (*Map23::ptr::Set27)(Map23 * self, int key, TextSprite * value) = (bool (*)(Map23 * self, int key, TextSprite * value)) 0x80bc7e0;
inline void (*Map23::ptr::_mark)() = (void (*)()) 0x808c6b0;
#endif
#endif
