// Generated automatically. Do not edit!
#ifndef _Map5_
#define _Map5_
class MapKeys5;
class Node9;
#include "Object.hpp"

class Map5 : public Object  {
public:
    Node9 * root;

    // Wrappers
    inline Map5 * _New() { return ptr::_New(); }
    inline virtual int Clear() { return ptr::_Clear(); }
    inline virtual int Compare2(int arg1, int arg2) { return ptr::_Compare2(this, arg1, arg2); }
    inline virtual Node9 * FindNode2(int arg1) { return ptr::_FindNode2(this, arg1); }
    inline virtual bool Contains2(int arg1) { return ptr::_Contains2(this, arg1); }
    inline virtual int RotateLeft5(Node9 * arg1) { return ptr::_RotateLeft5(this, arg1); }
    inline virtual int RotateRight5(Node9 * arg1) { return ptr::_RotateRight5(this, arg1); }
    inline virtual int InsertFixup5(Node9 * arg1) { return ptr::_InsertFixup5(this, arg1); }
    inline virtual bool Set6(int key, int value) { return ptr::Set6(this, key, value); }
    inline virtual int Get2(int key) { return ptr::Get2(this, key); }
    inline virtual int Count() { return ptr::Count(this); }
    inline virtual MapKeys5 * Keys() { return ptr::Keys(this); }
    inline virtual Node9 * FirstNode() { return ptr::_FirstNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Map5 * (*_New)();
        static int (*_Clear)();
        static int (*_Compare2)(Map5 * self, int arg1, int arg2);
        static Node9 * (*_FindNode2)(Map5 * self, int arg1);
        static bool (*_Contains2)(Map5 * self, int arg1);
        static int (*_RotateLeft5)(Map5 * self, Node9 * arg1);
        static int (*_RotateRight5)(Map5 * self, Node9 * arg1);
        static int (*_InsertFixup5)(Map5 * self, Node9 * arg1);
        static bool (*Set6)(Map5 * self, int key, int value);
        static int (*Get2)(Map5 * self, int key);
        static int (*Count)(Map5 * self);
        static MapKeys5 * (*Keys)(Map5 * self);
        static Node9 * (*_FirstNode)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Map5 * (*Map5::ptr::_New)() = (Map5 * (*)()) 0x0;
inline int (*Map5::ptr::_Clear)() = (int (*)()) 0x0;
inline int (*Map5::ptr::_Compare2)(Map5 * self, int arg1, int arg2) = (int (*)(Map5 * self, int arg1, int arg2)) 0x0;
inline Node9 * (*Map5::ptr::_FindNode2)(Map5 * self, int arg1) = (Node9 * (*)(Map5 * self, int arg1)) 0x0;
inline bool (*Map5::ptr::_Contains2)(Map5 * self, int arg1) = (bool (*)(Map5 * self, int arg1)) 0x0;
inline int (*Map5::ptr::_RotateLeft5)(Map5 * self, Node9 * arg1) = (int (*)(Map5 * self, Node9 * arg1)) 0x0;
inline int (*Map5::ptr::_RotateRight5)(Map5 * self, Node9 * arg1) = (int (*)(Map5 * self, Node9 * arg1)) 0x0;
inline int (*Map5::ptr::_InsertFixup5)(Map5 * self, Node9 * arg1) = (int (*)(Map5 * self, Node9 * arg1)) 0x0;
inline bool (*Map5::ptr::Set6)(Map5 * self, int key, int value) = (bool (*)(Map5 * self, int key, int value)) 0x576510;
inline int (*Map5::ptr::Get2)(Map5 * self, int key) = (int (*)(Map5 * self, int key)) 0x576610;
inline int (*Map5::ptr::Count)(Map5 * self) = (int (*)(Map5 * self)) 0x576630;
inline MapKeys5 * (*Map5::ptr::Keys)(Map5 * self) = (MapKeys5 * (*)(Map5 * self)) 0x576650;
inline Node9 * (*Map5::ptr::_FirstNode)() = (Node9 * (*)()) 0x0;
inline void (*Map5::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Map5 * (*Map5::ptr::_New)() = (Map5 * (*)()) 0x8156c80;
inline int (*Map5::ptr::_Clear)() = (int (*)()) 0x806f9a0;
inline int (*Map5::ptr::_Compare2)(Map5 * self, int arg1, int arg2) = (int (*)(Map5 * self, int arg1, int arg2)) 0x0;
inline Node9 * (*Map5::ptr::_FindNode2)(Map5 * self, int arg1) = (Node9 * (*)(Map5 * self, int arg1)) 0x806f9b0;
inline bool (*Map5::ptr::_Contains2)(Map5 * self, int arg1) = (bool (*)(Map5 * self, int arg1)) 0x806fa00;
inline int (*Map5::ptr::_RotateLeft5)(Map5 * self, Node9 * arg1) = (int (*)(Map5 * self, Node9 * arg1)) 0x0;
inline int (*Map5::ptr::_RotateRight5)(Map5 * self, Node9 * arg1) = (int (*)(Map5 * self, Node9 * arg1)) 0x0;
inline int (*Map5::ptr::_InsertFixup5)(Map5 * self, Node9 * arg1) = (int (*)(Map5 * self, Node9 * arg1)) 0x0;
inline bool (*Map5::ptr::Set6)(Map5 * self, int key, int value) = (bool (*)(Map5 * self, int key, int value)) 0x80b68f0;
inline int (*Map5::ptr::Get2)(Map5 * self, int key) = (int (*)(Map5 * self, int key)) 0x806fb20;
inline int (*Map5::ptr::Count)(Map5 * self) = (int (*)(Map5 * self)) 0x806fb50;
inline MapKeys5 * (*Map5::ptr::Keys)(Map5 * self) = (MapKeys5 * (*)(Map5 * self)) 0x80bbf40;
inline Node9 * (*Map5::ptr::_FirstNode)() = (Node9 * (*)()) 0x806fb80;
inline void (*Map5::ptr::_mark)() = (void (*)()) 0x808e010;
#endif
#endif
