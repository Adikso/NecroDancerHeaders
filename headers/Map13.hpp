// Generated automatically. Do not edit!
#ifndef _Map13_
#define _Map13_
class Node36;
class Node37;
class String;
#include "Object.hpp"

class Map13 : public Object  {
public:
    Node36 * root;

    // Wrappers
    inline Map13 * _New() { return ptr::_New(); }
    inline virtual int Clear() { return ptr::_Clear(); }
    inline virtual int _Compare(String * arg1, String * arg2) { return ptr::_Compare(this, arg1, arg2); }
    inline virtual int RotateLeft13(Node36 * arg1) { return ptr::_RotateLeft13(this, arg1); }
    inline virtual int RotateRight13(Node36 * arg1) { return ptr::_RotateRight13(this, arg1); }
    inline virtual int InsertFixup13(Node36 * arg1) { return ptr::_InsertFixup13(this, arg1); }
    inline virtual bool Set14(String * key, Object * value) { return ptr::Set14(this, key, value); }
    inline virtual bool Insert7(String * key, Object * value) { return ptr::Insert7(this, key, value); }
    inline virtual Node36 * FindNode(String * key) { return ptr::FindNode(this, key); }
    inline virtual int DeleteFixup6(Node36 * arg1, Node36 * arg2) { return ptr::_DeleteFixup6(this, arg1, arg2); }
    inline virtual int RemoveNode6(Node36 * arg1) { return ptr::_RemoveNode6(this, arg1); }
    inline virtual int Remove(String * key) { return ptr::Remove(this, key); }
    inline virtual bool Contains(String * key) { return ptr::Contains(this, key); }
    inline void _mark() { ptr::_mark(); }
    inline int _DeleteFixup6(Node37 * node, Node37 * parent) { return ptr::_DeleteFixup6_2(this, node, parent); }
    inline int _RemoveNode6(Node37 * node) { return ptr::_RemoveNode6_2(this, node); }

    class ptr {
    public:
        static Map13 * (*_New)();
        static int (*_Clear)();
        static int (*_Compare)(Map13 * self, String * arg1, String * arg2);
        static int (*_RotateLeft13)(Map13 * self, Node36 * arg1);
        static int (*_RotateRight13)(Map13 * self, Node36 * arg1);
        static int (*_InsertFixup13)(Map13 * self, Node36 * arg1);
        static bool (*Set14)(Map13 * self, String * key, Object * value);
        static bool (*Insert7)(Map13 * self, String * key, Object * value);
        static Node36 * (*FindNode)(Map13 * self, String * key);
        static int (*_DeleteFixup6)(Map13 * self, Node36 * arg1, Node36 * arg2);
        static int (*_RemoveNode6)(Map13 * self, Node36 * arg1);
        static int (*Remove)(Map13 * self, String * key);
        static bool (*Contains)(Map13 * self, String * key);
        static void (*_mark)();
        static int (*_DeleteFixup6_2)(Map13 * self, Node37 * node, Node37 * parent);
        static int (*_RemoveNode6_2)(Map13 * self, Node37 * node);
    };
};

#ifdef _WIN32

inline Map13 * (*Map13::ptr::_New)() = (Map13 * (*)()) 0x0;
inline int (*Map13::ptr::_Clear)() = (int (*)()) 0x0;
inline int (*Map13::ptr::_Compare)(Map13 * self, String * arg1, String * arg2) = (int (*)(Map13 * self, String * arg1, String * arg2)) 0x0;
inline int (*Map13::ptr::_RotateLeft13)(Map13 * self, Node36 * arg1) = (int (*)(Map13 * self, Node36 * arg1)) 0x0;
inline int (*Map13::ptr::_RotateRight13)(Map13 * self, Node36 * arg1) = (int (*)(Map13 * self, Node36 * arg1)) 0x0;
inline int (*Map13::ptr::_InsertFixup13)(Map13 * self, Node36 * arg1) = (int (*)(Map13 * self, Node36 * arg1)) 0x0;
inline bool (*Map13::ptr::Set14)(Map13 * self, String * key, Object * value) = (bool (*)(Map13 * self, String * key, Object * value)) 0x5e13f0;
inline bool (*Map13::ptr::Insert7)(Map13 * self, String * key, Object * value) = (bool (*)(Map13 * self, String * key, Object * value)) 0x5e1540;
inline Node36 * (*Map13::ptr::FindNode)(Map13 * self, String * key) = (Node36 * (*)(Map13 * self, String * key)) 0x5e03e0;
inline int (*Map13::ptr::_DeleteFixup6)(Map13 * self, Node36 * arg1, Node36 * arg2) = (int (*)(Map13 * self, Node36 * arg1, Node36 * arg2)) 0x0;
inline int (*Map13::ptr::_RemoveNode6)(Map13 * self, Node36 * arg1) = (int (*)(Map13 * self, Node36 * arg1)) 0x0;
inline int (*Map13::ptr::Remove)(Map13 * self, String * key) = (int (*)(Map13 * self, String * key)) 0x5e17f0;
inline bool (*Map13::ptr::Contains)(Map13 * self, String * key) = (bool (*)(Map13 * self, String * key)) 0x5e1890;
inline void (*Map13::ptr::_mark)() = (void (*)()) 0x0;
inline int (*Map13::ptr::_DeleteFixup6_2)(Map13 * self, Node37 * node, Node37 * parent) = (int (*)(Map13 * self, Node37 * node, Node37 * parent)) 0x5e15c0;
inline int (*Map13::ptr::_RemoveNode6_2)(Map13 * self, Node37 * node) = (int (*)(Map13 * self, Node37 * node)) 0x5e1730;
#endif

#ifdef __linux__

inline Map13 * (*Map13::ptr::_New)() = (Map13 * (*)()) 0x819a630;
inline int (*Map13::ptr::_Clear)() = (int (*)()) 0x8072510;
inline int (*Map13::ptr::_Compare)(Map13 * self, String * arg1, String * arg2) = (int (*)(Map13 * self, String * arg1, String * arg2)) 0x0;
inline int (*Map13::ptr::_RotateLeft13)(Map13 * self, Node36 * arg1) = (int (*)(Map13 * self, Node36 * arg1)) 0x0;
inline int (*Map13::ptr::_RotateRight13)(Map13 * self, Node36 * arg1) = (int (*)(Map13 * self, Node36 * arg1)) 0x0;
inline int (*Map13::ptr::_InsertFixup13)(Map13 * self, Node36 * arg1) = (int (*)(Map13 * self, Node36 * arg1)) 0x0;
inline bool (*Map13::ptr::Set14)(Map13 * self, String * key, Object * value) = (bool (*)(Map13 * self, String * key, Object * value)) 0x80dad10;
inline bool (*Map13::ptr::Insert7)(Map13 * self, String * key, Object * value) = (bool (*)(Map13 * self, String * key, Object * value)) 0x80c34d0;
inline Node36 * (*Map13::ptr::FindNode)(Map13 * self, String * key) = (Node36 * (*)(Map13 * self, String * key)) 0x80c3420;
inline int (*Map13::ptr::_DeleteFixup6)(Map13 * self, Node36 * arg1, Node36 * arg2) = (int (*)(Map13 * self, Node36 * arg1, Node36 * arg2)) 0x0;
inline int (*Map13::ptr::_RemoveNode6)(Map13 * self, Node36 * arg1) = (int (*)(Map13 * self, Node36 * arg1)) 0x0;
inline int (*Map13::ptr::Remove)(Map13 * self, String * key) = (int (*)(Map13 * self, String * key)) 0x80c33b0;
inline bool (*Map13::ptr::Contains)(Map13 * self, String * key) = (bool (*)(Map13 * self, String * key)) 0x80c3350;
inline void (*Map13::ptr::_mark)() = (void (*)()) 0x808ce50;
inline int (*Map13::ptr::_DeleteFixup6_2)(Map13 * self, Node37 * node, Node37 * parent) = (int (*)(Map13 * self, Node37 * node, Node37 * parent)) 0x0;
inline int (*Map13::ptr::_RemoveNode6_2)(Map13 * self, Node37 * node) = (int (*)(Map13 * self, Node37 * node)) 0x0;
#endif
#endif
