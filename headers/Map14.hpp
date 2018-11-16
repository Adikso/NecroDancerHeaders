// Generated automatically. Do not edit!
#ifndef _Map14_
#define _Map14_
class Node37;
class Sprite;
#include "Object.hpp"

class Map14 : public Object  {
public:
    Node37 * root;

    // Wrappers
    inline Map14 * _New() { return ptr::_New(); }
    inline virtual int Compare2(int arg1, int arg2) { return ptr::_Compare2(this, arg1, arg2); }
    inline virtual int RotateLeft14(Node37 * arg1) { return ptr::_RotateLeft14(this, arg1); }
    inline virtual int RotateRight14(Node37 * arg1) { return ptr::_RotateRight14(this, arg1); }
    inline virtual int InsertFixup14(Node37 * arg1) { return ptr::_InsertFixup14(this, arg1); }
    inline virtual bool Set15(int key, Sprite * value) { return ptr::Set15(this, key, value); }
    inline virtual Node37 * FindNode2(int arg1) { return ptr::_FindNode2(this, arg1); }
    inline virtual Sprite * Get2(int key) { return ptr::Get2(this, key); }
    inline virtual int Count() { return ptr::_Count(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Map14 * (*_New)();
        static int (*_Compare2)(Map14 * self, int arg1, int arg2);
        static int (*_RotateLeft14)(Map14 * self, Node37 * arg1);
        static int (*_RotateRight14)(Map14 * self, Node37 * arg1);
        static int (*_InsertFixup14)(Map14 * self, Node37 * arg1);
        static bool (*Set15)(Map14 * self, int key, Sprite * value);
        static Node37 * (*_FindNode2)(Map14 * self, int arg1);
        static Sprite * (*Get2)(Map14 * self, int key);
        static int (*_Count)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Map14 * (*Map14::ptr::_New)() = (Map14 * (*)()) 0x0;
inline int (*Map14::ptr::_Compare2)(Map14 * self, int arg1, int arg2) = (int (*)(Map14 * self, int arg1, int arg2)) 0x0;
inline int (*Map14::ptr::_RotateLeft14)(Map14 * self, Node37 * arg1) = (int (*)(Map14 * self, Node37 * arg1)) 0x0;
inline int (*Map14::ptr::_RotateRight14)(Map14 * self, Node37 * arg1) = (int (*)(Map14 * self, Node37 * arg1)) 0x0;
inline int (*Map14::ptr::_InsertFixup14)(Map14 * self, Node37 * arg1) = (int (*)(Map14 * self, Node37 * arg1)) 0x0;
inline bool (*Map14::ptr::Set15)(Map14 * self, int key, Sprite * value) = (bool (*)(Map14 * self, int key, Sprite * value)) 0x5ecb60;
inline Node37 * (*Map14::ptr::_FindNode2)(Map14 * self, int arg1) = (Node37 * (*)(Map14 * self, int arg1)) 0x0;
inline Sprite * (*Map14::ptr::Get2)(Map14 * self, int key) = (Sprite * (*)(Map14 * self, int key)) 0x5ecc70;
inline int (*Map14::ptr::_Count)() = (int (*)()) 0x0;
inline void (*Map14::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Map14 * (*Map14::ptr::_New)() = (Map14 * (*)()) 0x819abd0;
inline int (*Map14::ptr::_Compare2)(Map14 * self, int arg1, int arg2) = (int (*)(Map14 * self, int arg1, int arg2)) 0x0;
inline int (*Map14::ptr::_RotateLeft14)(Map14 * self, Node37 * arg1) = (int (*)(Map14 * self, Node37 * arg1)) 0x0;
inline int (*Map14::ptr::_RotateRight14)(Map14 * self, Node37 * arg1) = (int (*)(Map14 * self, Node37 * arg1)) 0x0;
inline int (*Map14::ptr::_InsertFixup14)(Map14 * self, Node37 * arg1) = (int (*)(Map14 * self, Node37 * arg1)) 0x0;
inline bool (*Map14::ptr::Set15)(Map14 * self, int key, Sprite * value) = (bool (*)(Map14 * self, int key, Sprite * value)) 0x80b8580;
inline Node37 * (*Map14::ptr::_FindNode2)(Map14 * self, int arg1) = (Node37 * (*)(Map14 * self, int arg1)) 0x8072a20;
inline Sprite * (*Map14::ptr::Get2)(Map14 * self, int key) = (Sprite * (*)(Map14 * self, int key)) 0x8072a70;
inline int (*Map14::ptr::_Count)() = (int (*)()) 0x8072aa0;
inline void (*Map14::ptr::_mark)() = (void (*)()) 0x808c4a0;
#endif
#endif
