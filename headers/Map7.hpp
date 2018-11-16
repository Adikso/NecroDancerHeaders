// Generated automatically. Do not edit!
#ifndef _Map7_
#define _Map7_
class MapKeys3;
class Node14;
class Node15;
class String;
#include "Object.hpp"

class Map7 : public Object  {
public:
    Node14 * root;

    // Wrappers
    inline Map7 * _New() { return ptr::_New(); }
    inline virtual int _Compare(String * arg1, String * arg2) { return ptr::_Compare(this, arg1, arg2); }
    inline virtual int RotateLeft7(Node14 * arg1) { return ptr::_RotateLeft7(this, arg1); }
    inline virtual int RotateRight7(Node14 * arg1) { return ptr::_RotateRight7(this, arg1); }
    inline virtual int InsertFixup7(Node14 * arg1) { return ptr::_InsertFixup7(this, arg1); }
    inline virtual bool Add6(String * key, int value) { return ptr::Add6(this, key, value); }
    inline virtual int Clear() { return ptr::_Clear(); }
    inline virtual Node14 * FindNode(String * arg1) { return ptr::_FindNode(this, arg1); }
    inline virtual int Get(String * key) { return ptr::Get(this, key); }
    inline virtual bool Set8(String * key, int value) { return ptr::Set8(this, key, value); }
    inline virtual bool Contains(String * key) { return ptr::Contains(this, key); }
    inline virtual bool Update2(String * key, int value) { return ptr::Update2(this, key, value); }
    inline virtual bool Insert5(String * arg1, int arg2) { return ptr::_Insert5(this, arg1, arg2); }
    inline virtual int DeleteFixup3(Node14 * arg1, Node14 * arg2) { return ptr::_DeleteFixup3(this, arg1, arg2); }
    inline virtual int RemoveNode3(Node14 * arg1) { return ptr::_RemoveNode3(this, arg1); }
    inline virtual int Remove(String * key) { return ptr::Remove(this, key); }
    inline virtual MapKeys3 * Keys() { return ptr::Keys(this); }
    inline virtual Node14 * FirstNode() { return ptr::_FirstNode(); }
    inline void _mark() { ptr::_mark(); }
    inline int _InsertFixup7(Node15 * node) { return ptr::_InsertFixup7_2(this, node); }
    inline int _DeleteFixup3(Node15 * node, Node15 * parent) { return ptr::_DeleteFixup3_2(this, node, parent); }
    inline int _RemoveNode3(Node15 * node) { return ptr::_RemoveNode3_2(this, node); }

    class ptr {
    public:
        static Map7 * (*_New)();
        static int (*_Compare)(Map7 * self, String * arg1, String * arg2);
        static int (*_RotateLeft7)(Map7 * self, Node14 * arg1);
        static int (*_RotateRight7)(Map7 * self, Node14 * arg1);
        static int (*_InsertFixup7)(Map7 * self, Node14 * arg1);
        static bool (*Add6)(Map7 * self, String * key, int value);
        static int (*_Clear)();
        static Node14 * (*_FindNode)(Map7 * self, String * arg1);
        static int (*Get)(Map7 * self, String * key);
        static bool (*Set8)(Map7 * self, String * key, int value);
        static bool (*Contains)(Map7 * self, String * key);
        static bool (*Update2)(Map7 * self, String * key, int value);
        static bool (*_Insert5)(Map7 * self, String * arg1, int arg2);
        static int (*_DeleteFixup3)(Map7 * self, Node14 * arg1, Node14 * arg2);
        static int (*_RemoveNode3)(Map7 * self, Node14 * arg1);
        static int (*Remove)(Map7 * self, String * key);
        static MapKeys3 * (*Keys)(Map7 * self);
        static Node14 * (*_FirstNode)();
        static void (*_mark)();
        static int (*_InsertFixup7_2)(Map7 * self, Node15 * node);
        static int (*_DeleteFixup3_2)(Map7 * self, Node15 * node, Node15 * parent);
        static int (*_RemoveNode3_2)(Map7 * self, Node15 * node);
    };
};

#ifdef _WIN32

inline Map7 * (*Map7::ptr::_New)() = (Map7 * (*)()) 0x0;
inline int (*Map7::ptr::_Compare)(Map7 * self, String * arg1, String * arg2) = (int (*)(Map7 * self, String * arg1, String * arg2)) 0x0;
inline int (*Map7::ptr::_RotateLeft7)(Map7 * self, Node14 * arg1) = (int (*)(Map7 * self, Node14 * arg1)) 0x0;
inline int (*Map7::ptr::_RotateRight7)(Map7 * self, Node14 * arg1) = (int (*)(Map7 * self, Node14 * arg1)) 0x0;
inline int (*Map7::ptr::_InsertFixup7)(Map7 * self, Node14 * arg1) = (int (*)(Map7 * self, Node14 * arg1)) 0x0;
inline bool (*Map7::ptr::Add6)(Map7 * self, String * key, int value) = (bool (*)(Map7 * self, String * key, int value)) 0x580890;
inline int (*Map7::ptr::_Clear)() = (int (*)()) 0x0;
inline Node14 * (*Map7::ptr::_FindNode)(Map7 * self, String * arg1) = (Node14 * (*)(Map7 * self, String * arg1)) 0x0;
inline int (*Map7::ptr::Get)(Map7 * self, String * key) = (int (*)(Map7 * self, String * key)) 0x4f7da0;
inline bool (*Map7::ptr::Set8)(Map7 * self, String * key, int value) = (bool (*)(Map7 * self, String * key, int value)) 0x5809d0;
inline bool (*Map7::ptr::Contains)(Map7 * self, String * key) = (bool (*)(Map7 * self, String * key)) 0x580b10;
inline bool (*Map7::ptr::Update2)(Map7 * self, String * key, int value) = (bool (*)(Map7 * self, String * key, int value)) 0x580e60;
inline bool (*Map7::ptr::_Insert5)(Map7 * self, String * arg1, int arg2) = (bool (*)(Map7 * self, String * arg1, int arg2)) 0x0;
inline int (*Map7::ptr::_DeleteFixup3)(Map7 * self, Node14 * arg1, Node14 * arg2) = (int (*)(Map7 * self, Node14 * arg1, Node14 * arg2)) 0x0;
inline int (*Map7::ptr::_RemoveNode3)(Map7 * self, Node14 * arg1) = (int (*)(Map7 * self, Node14 * arg1)) 0x0;
inline int (*Map7::ptr::Remove)(Map7 * self, String * key) = (int (*)(Map7 * self, String * key)) 0x580dc0;
inline MapKeys3 * (*Map7::ptr::Keys)(Map7 * self) = (MapKeys3 * (*)(Map7 * self)) 0x580ef0;
inline Node14 * (*Map7::ptr::_FirstNode)() = (Node14 * (*)()) 0x0;
inline void (*Map7::ptr::_mark)() = (void (*)()) 0x0;
inline int (*Map7::ptr::_InsertFixup7_2)(Map7 * self, Node15 * node) = (int (*)(Map7 * self, Node15 * node)) 0x4f7ae0;
inline int (*Map7::ptr::_DeleteFixup3_2)(Map7 * self, Node15 * node, Node15 * parent) = (int (*)(Map7 * self, Node15 * node, Node15 * parent)) 0x580b90;
inline int (*Map7::ptr::_RemoveNode3_2)(Map7 * self, Node15 * node) = (int (*)(Map7 * self, Node15 * node)) 0x580d00;
#endif

#ifdef __linux__

inline Map7 * (*Map7::ptr::_New)() = (Map7 * (*)()) 0x815a690;
inline int (*Map7::ptr::_Compare)(Map7 * self, String * arg1, String * arg2) = (int (*)(Map7 * self, String * arg1, String * arg2)) 0x0;
inline int (*Map7::ptr::_RotateLeft7)(Map7 * self, Node14 * arg1) = (int (*)(Map7 * self, Node14 * arg1)) 0x0;
inline int (*Map7::ptr::_RotateRight7)(Map7 * self, Node14 * arg1) = (int (*)(Map7 * self, Node14 * arg1)) 0x0;
inline int (*Map7::ptr::_InsertFixup7)(Map7 * self, Node14 * arg1) = (int (*)(Map7 * self, Node14 * arg1)) 0x0;
inline bool (*Map7::ptr::Add6)(Map7 * self, String * key, int value) = (bool (*)(Map7 * self, String * key, int value)) 0x80de570;
inline int (*Map7::ptr::_Clear)() = (int (*)()) 0x80702e0;
inline Node14 * (*Map7::ptr::_FindNode)(Map7 * self, String * arg1) = (Node14 * (*)(Map7 * self, String * arg1)) 0x80c3cf0;
inline int (*Map7::ptr::Get)(Map7 * self, String * key) = (int (*)(Map7 * self, String * key)) 0x80c3c90;
inline bool (*Map7::ptr::Set8)(Map7 * self, String * key, int value) = (bool (*)(Map7 * self, String * key, int value)) 0x80db0b0;
inline bool (*Map7::ptr::Contains)(Map7 * self, String * key) = (bool (*)(Map7 * self, String * key)) 0x80c3c30;
inline bool (*Map7::ptr::Update2)(Map7 * self, String * key, int value) = (bool (*)(Map7 * self, String * key, int value)) 0x80c3b50;
inline bool (*Map7::ptr::_Insert5)(Map7 * self, String * arg1, int arg2) = (bool (*)(Map7 * self, String * arg1, int arg2)) 0x80c3af0;
inline int (*Map7::ptr::_DeleteFixup3)(Map7 * self, Node14 * arg1, Node14 * arg2) = (int (*)(Map7 * self, Node14 * arg1, Node14 * arg2)) 0x0;
inline int (*Map7::ptr::_RemoveNode3)(Map7 * self, Node14 * arg1) = (int (*)(Map7 * self, Node14 * arg1)) 0x0;
inline int (*Map7::ptr::Remove)(Map7 * self, String * key) = (int (*)(Map7 * self, String * key)) 0x80c3bc0;
inline MapKeys3 * (*Map7::ptr::Keys)(Map7 * self) = (MapKeys3 * (*)(Map7 * self)) 0x80bb310;
inline Node14 * (*Map7::ptr::_FirstNode)() = (Node14 * (*)()) 0x80704e0;
inline void (*Map7::ptr::_mark)() = (void (*)()) 0x808d370;
inline int (*Map7::ptr::_InsertFixup7_2)(Map7 * self, Node15 * node) = (int (*)(Map7 * self, Node15 * node)) 0x0;
inline int (*Map7::ptr::_DeleteFixup3_2)(Map7 * self, Node15 * node, Node15 * parent) = (int (*)(Map7 * self, Node15 * node, Node15 * parent)) 0x0;
inline int (*Map7::ptr::_RemoveNode3_2)(Map7 * self, Node15 * node) = (int (*)(Map7 * self, Node15 * node)) 0x0;
#endif
#endif
