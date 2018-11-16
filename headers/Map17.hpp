// Generated automatically. Do not edit!
#ifndef _Map17_
#define _Map17_
class BeatAnimationData;
class Node55;
#include "Object.hpp"

class Map17 : public Object  {
public:
    Node55 * root;

    // Wrappers
    inline Map17 * _New() { return ptr::_New(); }
    inline virtual int Clear() { return ptr::_Clear(); }
    inline virtual int Compare2(int arg1, int arg2) { return ptr::_Compare2(this, arg1, arg2); }
    inline virtual int RotateLeft17(Node55 * arg1) { return ptr::_RotateLeft17(this, arg1); }
    inline virtual int RotateRight17(Node55 * arg1) { return ptr::_RotateRight17(this, arg1); }
    inline virtual int InsertFixup17(Node55 * node) { return ptr::_InsertFixup17(this, node); }
    inline virtual bool Set18(int key, BeatAnimationData * value) { return ptr::Set18(this, key, value); }
    inline virtual bool IsEmpty() { return ptr::IsEmpty(this); }
    inline virtual Node55 * FindNode2(int arg1) { return ptr::_FindNode2(this, arg1); }
    inline virtual bool Contains2(int key) { return ptr::Contains2(this, key); }
    inline virtual BeatAnimationData * Get2(int arg1) { return ptr::_Get2(this, arg1); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Map17 * (*_New)();
        static int (*_Clear)();
        static int (*_Compare2)(Map17 * self, int arg1, int arg2);
        static int (*_RotateLeft17)(Map17 * self, Node55 * arg1);
        static int (*_RotateRight17)(Map17 * self, Node55 * arg1);
        static int (*_InsertFixup17)(Map17 * self, Node55 * node);
        static bool (*Set18)(Map17 * self, int key, BeatAnimationData * value);
        static bool (*IsEmpty)(Map17 * self);
        static Node55 * (*_FindNode2)(Map17 * self, int arg1);
        static bool (*Contains2)(Map17 * self, int key);
        static BeatAnimationData * (*_Get2)(Map17 * self, int arg1);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Map17 * (*Map17::ptr::_New)() = (Map17 * (*)()) 0x0;
inline int (*Map17::ptr::_Clear)() = (int (*)()) 0x0;
inline int (*Map17::ptr::_Compare2)(Map17 * self, int arg1, int arg2) = (int (*)(Map17 * self, int arg1, int arg2)) 0x0;
inline int (*Map17::ptr::_RotateLeft17)(Map17 * self, Node55 * arg1) = (int (*)(Map17 * self, Node55 * arg1)) 0x0;
inline int (*Map17::ptr::_RotateRight17)(Map17 * self, Node55 * arg1) = (int (*)(Map17 * self, Node55 * arg1)) 0x0;
inline int (*Map17::ptr::_InsertFixup17)(Map17 * self, Node55 * node) = (int (*)(Map17 * self, Node55 * node)) 0x5e1300;
inline bool (*Map17::ptr::Set18)(Map17 * self, int key, BeatAnimationData * value) = (bool (*)(Map17 * self, int key, BeatAnimationData * value)) 0x616140;
inline bool (*Map17::ptr::IsEmpty)(Map17 * self) = (bool (*)(Map17 * self)) 0x616250;
inline Node55 * (*Map17::ptr::_FindNode2)(Map17 * self, int arg1) = (Node55 * (*)(Map17 * self, int arg1)) 0x0;
inline bool (*Map17::ptr::Contains2)(Map17 * self, int key) = (bool (*)(Map17 * self, int key)) 0x616260;
inline BeatAnimationData * (*Map17::ptr::_Get2)(Map17 * self, int arg1) = (BeatAnimationData * (*)(Map17 * self, int arg1)) 0x0;
inline void (*Map17::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Map17 * (*Map17::ptr::_New)() = (Map17 * (*)()) 0x81b5a30;
inline int (*Map17::ptr::_Clear)() = (int (*)()) 0x8074c70;
inline int (*Map17::ptr::_Compare2)(Map17 * self, int arg1, int arg2) = (int (*)(Map17 * self, int arg1, int arg2)) 0x0;
inline int (*Map17::ptr::_RotateLeft17)(Map17 * self, Node55 * arg1) = (int (*)(Map17 * self, Node55 * arg1)) 0x0;
inline int (*Map17::ptr::_RotateRight17)(Map17 * self, Node55 * arg1) = (int (*)(Map17 * self, Node55 * arg1)) 0x0;
inline int (*Map17::ptr::_InsertFixup17)(Map17 * self, Node55 * node) = (int (*)(Map17 * self, Node55 * node)) 0x0;
inline bool (*Map17::ptr::Set18)(Map17 * self, int key, BeatAnimationData * value) = (bool (*)(Map17 * self, int key, BeatAnimationData * value)) 0x80b9eb0;
inline bool (*Map17::ptr::IsEmpty)(Map17 * self) = (bool (*)(Map17 * self)) 0x8074d80;
inline Node55 * (*Map17::ptr::_FindNode2)(Map17 * self, int arg1) = (Node55 * (*)(Map17 * self, int arg1)) 0x8074d90;
inline bool (*Map17::ptr::Contains2)(Map17 * self, int key) = (bool (*)(Map17 * self, int key)) 0x8074de0;
inline BeatAnimationData * (*Map17::ptr::_Get2)(Map17 * self, int arg1) = (BeatAnimationData * (*)(Map17 * self, int arg1)) 0x8074e00;
inline void (*Map17::ptr::_mark)() = (void (*)()) 0x808ceb0;
#endif
#endif
