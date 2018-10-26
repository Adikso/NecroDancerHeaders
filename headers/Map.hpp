// Generated automatically. Do not edit!
#ifndef _Map_
#define _Map_
class MapKeys;
class Node;
class String;
class XMLAttribute;
#include "Object.hpp"

class Map : public Object  {
public:
    Node * root;

    // Wrappers
    inline Map * _New() { return ptr::_New(); }
    inline virtual int _Compare(String * arg1, String * arg2) { return ptr::_Compare(this, arg1, arg2); }
    inline virtual Node * FindNode(String * key) { return ptr::FindNode(this, key); }
    inline virtual XMLAttribute * Get(String * key) { return ptr::Get(this, key); }
    inline virtual MapKeys * Keys() { return ptr::Keys(this); }
    inline virtual Node * FirstNode() { return ptr::FirstNode(this); }
    inline virtual int RotateLeft(Node * node) { return ptr::RotateLeft(this, node); }
    inline virtual int RotateRight(Node * node) { return ptr::RotateRight(this, node); }
    inline virtual int InsertFixup(Node * node) { return ptr::InsertFixup(this, node); }
    inline virtual bool Set(String * key, XMLAttribute * value) { return ptr::Set(this, key, value); }
    inline virtual bool Insert(String * key, XMLAttribute * value) { return ptr::Insert(this, key, value); }
    inline virtual int DeleteFixup(Node * node, Node * parent) { return ptr::DeleteFixup(this, node, parent); }
    inline virtual int RemoveNode(Node * node) { return ptr::RemoveNode(this, node); }
    inline virtual int Remove(String * key) { return ptr::Remove(this, key); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Map * (*_New)();
        static int (*_Compare)(Map * self, String * arg1, String * arg2);
        static Node * (*FindNode)(Map * self, String * key);
        static XMLAttribute * (*Get)(Map * self, String * key);
        static MapKeys * (*Keys)(Map * self);
        static Node * (*FirstNode)(Map * self);
        static int (*RotateLeft)(Map * self, Node * node);
        static int (*RotateRight)(Map * self, Node * node);
        static int (*InsertFixup)(Map * self, Node * node);
        static bool (*Set)(Map * self, String * key, XMLAttribute * value);
        static bool (*Insert)(Map * self, String * key, XMLAttribute * value);
        static int (*DeleteFixup)(Map * self, Node * node, Node * parent);
        static int (*RemoveNode)(Map * self, Node * node);
        static int (*Remove)(Map * self, String * key);
        static void (*_mark)();
    };
};

#ifdef _WIN32

Map * (*Map::ptr::_New)() = (Map * (*)()) 0x0;
int (*Map::ptr::_Compare)(Map * self, String * arg1, String * arg2) = (int (*)(Map * self, String * arg1, String * arg2)) 0x0;
Node * (*Map::ptr::FindNode)(Map * self, String * key) = (Node * (*)(Map * self, String * key)) 0x446750;
XMLAttribute * (*Map::ptr::Get)(Map * self, String * key) = (XMLAttribute * (*)(Map * self, String * key)) 0x446800;
MapKeys * (*Map::ptr::Keys)(Map * self) = (MapKeys * (*)(Map * self)) 0x446890;
Node * (*Map::ptr::FirstNode)(Map * self) = (Node * (*)(Map * self)) 0x446970;
int (*Map::ptr::RotateLeft)(Map * self, Node * node) = (int (*)(Map * self, Node * node)) 0x446990;
int (*Map::ptr::RotateRight)(Map * self, Node * node) = (int (*)(Map * self, Node * node)) 0x446b10;
int (*Map::ptr::InsertFixup)(Map * self, Node * node) = (int (*)(Map * self, Node * node)) 0x446c90;
bool (*Map::ptr::Set)(Map * self, String * key, XMLAttribute * value) = (bool (*)(Map * self, String * key, XMLAttribute * value)) 0x446d80;
bool (*Map::ptr::Insert)(Map * self, String * key, XMLAttribute * value) = (bool (*)(Map * self, String * key, XMLAttribute * value)) 0x446ed0;
int (*Map::ptr::DeleteFixup)(Map * self, Node * node, Node * parent) = (int (*)(Map * self, Node * node, Node * parent)) 0x446f50;
int (*Map::ptr::RemoveNode)(Map * self, Node * node) = (int (*)(Map * self, Node * node)) 0x4470c0;
int (*Map::ptr::Remove)(Map * self, String * key) = (int (*)(Map * self, String * key)) 0x447180;
void (*Map::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Map * (*Map::ptr::_New)() = (Map * (*)()) 0x8118370;
int (*Map::ptr::_Compare)(Map * self, String * arg1, String * arg2) = (int (*)(Map * self, String * arg1, String * arg2)) 0x0;
Node * (*Map::ptr::FindNode)(Map * self, String * key) = (Node * (*)(Map * self, String * key)) 0x80c4bd0;
XMLAttribute * (*Map::ptr::Get)(Map * self, String * key) = (XMLAttribute * (*)(Map * self, String * key)) 0x80c4b60;
MapKeys * (*Map::ptr::Keys)(Map * self) = (MapKeys * (*)(Map * self)) 0x80b5cb0;
Node * (*Map::ptr::FirstNode)(Map * self) = (Node * (*)(Map * self)) 0x806d680;
int (*Map::ptr::RotateLeft)(Map * self, Node * node) = (int (*)(Map * self, Node * node)) 0x809ec80;
int (*Map::ptr::RotateRight)(Map * self, Node * node) = (int (*)(Map * self, Node * node)) 0x809e9f0;
int (*Map::ptr::InsertFixup)(Map * self, Node * node) = (int (*)(Map * self, Node * node)) 0x806d6a0;
bool (*Map::ptr::Set)(Map * self, String * key, XMLAttribute * value) = (bool (*)(Map * self, String * key, XMLAttribute * value)) 0x80de1d0;
bool (*Map::ptr::Insert)(Map * self, String * key, XMLAttribute * value) = (bool (*)(Map * self, String * key, XMLAttribute * value)) 0x80c4b00;
int (*Map::ptr::DeleteFixup)(Map * self, Node * node, Node * parent) = (int (*)(Map * self, Node * node, Node * parent)) 0x806d7a0;
int (*Map::ptr::RemoveNode)(Map * self, Node * node) = (int (*)(Map * self, Node * node)) 0x80deee0;
int (*Map::ptr::Remove)(Map * self, String * key) = (int (*)(Map * self, String * key)) 0x80c4a90;
void (*Map::ptr::_mark)() = (void (*)()) 0x808eab0;
#endif
#endif
