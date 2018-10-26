// Generated automatically. Do not edit!
#ifndef _Map3_
#define _Map3_
class Image;
class Node4;
class NodeEnumerator6;
class String;
#include "Object.hpp"

class Map3 : public Object  {
public:
    Node4 * root;

    // Wrappers
    inline Map3 * _New() { return ptr::_New(); }
    inline virtual int _Compare(String * arg1, String * arg2) { return ptr::_Compare(this, arg1, arg2); }
    inline virtual Node4 * FindNode(String * arg1) { return ptr::_FindNode(this, arg1); }
    inline virtual bool Contains(String * key) { return ptr::Contains(this, key); }
    inline virtual Image * Get(String * arg1) { return ptr::_Get(this, arg1); }
    inline virtual int RotateLeft3(Node4 * arg1) { return ptr::_RotateLeft3(this, arg1); }
    inline virtual int RotateRight3(Node4 * arg1) { return ptr::_RotateRight3(this, arg1); }
    inline virtual int InsertFixup3(Node4 * arg1) { return ptr::_InsertFixup3(this, arg1); }
    inline virtual bool Set4(String * key, Image * value) { return ptr::Set4(this, key, value); }
    inline virtual bool Add4(String * key, Image * value) { return ptr::Add4(this, key, value); }
    inline virtual int DeleteFixup2(Node4 * node, Node4 * parent) { return ptr::_DeleteFixup2(this, node, parent); }
    inline virtual int RemoveNode2(Node4 * node) { return ptr::_RemoveNode2(this, node); }
    inline virtual int Remove(String * key) { return ptr::Remove(this, key); }
    inline virtual Node4 * FirstNode() { return ptr::_FirstNode(); }
    inline virtual NodeEnumerator6 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Map3 * (*_New)();
        static int (*_Compare)(Map3 * self, String * arg1, String * arg2);
        static Node4 * (*_FindNode)(Map3 * self, String * arg1);
        static bool (*Contains)(Map3 * self, String * key);
        static Image * (*_Get)(Map3 * self, String * arg1);
        static int (*_RotateLeft3)(Map3 * self, Node4 * arg1);
        static int (*_RotateRight3)(Map3 * self, Node4 * arg1);
        static int (*_InsertFixup3)(Map3 * self, Node4 * arg1);
        static bool (*Set4)(Map3 * self, String * key, Image * value);
        static bool (*Add4)(Map3 * self, String * key, Image * value);
        static int (*_DeleteFixup2)(Map3 * self, Node4 * node, Node4 * parent);
        static int (*_RemoveNode2)(Map3 * self, Node4 * node);
        static int (*Remove)(Map3 * self, String * key);
        static Node4 * (*_FirstNode)();
        static NodeEnumerator6 * (*ObjectEnumerator)(Map3 * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

Map3 * (*Map3::ptr::_New)() = (Map3 * (*)()) 0x0;
int (*Map3::ptr::_Compare)(Map3 * self, String * arg1, String * arg2) = (int (*)(Map3 * self, String * arg1, String * arg2)) 0x0;
Node4 * (*Map3::ptr::_FindNode)(Map3 * self, String * arg1) = (Node4 * (*)(Map3 * self, String * arg1)) 0x0;
bool (*Map3::ptr::Contains)(Map3 * self, String * key) = (bool (*)(Map3 * self, String * key)) 0x53b500;
Image * (*Map3::ptr::_Get)(Map3 * self, String * arg1) = (Image * (*)(Map3 * self, String * arg1)) 0x0;
int (*Map3::ptr::_RotateLeft3)(Map3 * self, Node4 * arg1) = (int (*)(Map3 * self, Node4 * arg1)) 0x0;
int (*Map3::ptr::_RotateRight3)(Map3 * self, Node4 * arg1) = (int (*)(Map3 * self, Node4 * arg1)) 0x0;
int (*Map3::ptr::_InsertFixup3)(Map3 * self, Node4 * arg1) = (int (*)(Map3 * self, Node4 * arg1)) 0x0;
bool (*Map3::ptr::Set4)(Map3 * self, String * key, Image * value) = (bool (*)(Map3 * self, String * key, Image * value)) 0x53b670;
bool (*Map3::ptr::Add4)(Map3 * self, String * key, Image * value) = (bool (*)(Map3 * self, String * key, Image * value)) 0x53b7c0;
int (*Map3::ptr::_DeleteFixup2)(Map3 * self, Node4 * node, Node4 * parent) = (int (*)(Map3 * self, Node4 * node, Node4 * parent)) 0x53b900;
int (*Map3::ptr::_RemoveNode2)(Map3 * self, Node4 * node) = (int (*)(Map3 * self, Node4 * node)) 0x53ba70;
int (*Map3::ptr::Remove)(Map3 * self, String * key) = (int (*)(Map3 * self, String * key)) 0x53bb30;
Node4 * (*Map3::ptr::_FirstNode)() = (Node4 * (*)()) 0x0;
NodeEnumerator6 * (*Map3::ptr::ObjectEnumerator)(Map3 * self) = (NodeEnumerator6 * (*)(Map3 * self)) 0x53bbd0;
void (*Map3::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Map3 * (*Map3::ptr::_New)() = (Map3 * (*)()) 0x8145960;
int (*Map3::ptr::_Compare)(Map3 * self, String * arg1, String * arg2) = (int (*)(Map3 * self, String * arg1, String * arg2)) 0x0;
Node4 * (*Map3::ptr::_FindNode)(Map3 * self, String * arg1) = (Node4 * (*)(Map3 * self, String * arg1)) 0x80c40e0;
bool (*Map3::ptr::Contains)(Map3 * self, String * key) = (bool (*)(Map3 * self, String * key)) 0x80c4080;
Image * (*Map3::ptr::_Get)(Map3 * self, String * arg1) = (Image * (*)(Map3 * self, String * arg1)) 0x80c4010;
int (*Map3::ptr::_RotateLeft3)(Map3 * self, Node4 * arg1) = (int (*)(Map3 * self, Node4 * arg1)) 0x0;
int (*Map3::ptr::_RotateRight3)(Map3 * self, Node4 * arg1) = (int (*)(Map3 * self, Node4 * arg1)) 0x0;
int (*Map3::ptr::_InsertFixup3)(Map3 * self, Node4 * arg1) = (int (*)(Map3 * self, Node4 * arg1)) 0x0;
bool (*Map3::ptr::Set4)(Map3 * self, String * key, Image * value) = (bool (*)(Map3 * self, String * key, Image * value)) 0x80de850;
bool (*Map3::ptr::Add4)(Map3 * self, String * key, Image * value) = (bool (*)(Map3 * self, String * key, Image * value)) 0x80db730;
int (*Map3::ptr::_DeleteFixup2)(Map3 * self, Node4 * node, Node4 * parent) = (int (*)(Map3 * self, Node4 * node, Node4 * parent)) 0x0;
int (*Map3::ptr::_RemoveNode2)(Map3 * self, Node4 * node) = (int (*)(Map3 * self, Node4 * node)) 0x0;
int (*Map3::ptr::Remove)(Map3 * self, String * key) = (int (*)(Map3 * self, String * key)) 0x80c3fa0;
Node4 * (*Map3::ptr::_FirstNode)() = (Node4 * (*)()) 0x806f270;
NodeEnumerator6 * (*Map3::ptr::ObjectEnumerator)(Map3 * self) = (NodeEnumerator6 * (*)(Map3 * self)) 0x80b62d0;
void (*Map3::ptr::_mark)() = (void (*)()) 0x808dc50;
#endif
#endif
