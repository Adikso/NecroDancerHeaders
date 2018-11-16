// Generated automatically. Do not edit!
#ifndef _Node_
#define _Node_
class String;
class XMLAttribute;
#include "Object.hpp"

class Node : public Object  {
public:
    String * key;
    Node * right;
    Node * left;
    XMLAttribute * value;
    Node * parent;
    int color;

    // Wrappers
    Node() {
        ptr::CSTR_Node(this);
    }

    inline virtual Node * NextNode() { return ptr::NextNode(this); }
    inline Node * _New(String * key, XMLAttribute * value, int color, Node * parent) { return ptr::_New(this, key, value, color, parent); }
    inline Node * _new2() { return ptr::_new2(); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static Node * (*NextNode)(Node * self);
        static Node * (*_New)(Node * self, String * key, XMLAttribute * value, int color, Node * parent);
        static Node * (*_new2)();
        static void (*mark)(Node * self);
        static void (*CSTR_Node)(Node * self);
    };
};

#ifdef _WIN32

inline Node * (*Node::ptr::NextNode)(Node * self) = (Node * (*)(Node * self)) 0x4474a0;
inline Node * (*Node::ptr::_New)(Node * self, String * key, XMLAttribute * value, int color, Node * parent) = (Node * (*)(Node * self, String * key, XMLAttribute * value, int color, Node * parent)) 0x4474e0;
inline Node * (*Node::ptr::_new2)() = (Node * (*)()) 0x0;
inline void (*Node::ptr::mark)(Node * self) = (void (*)(Node * self)) 0x447610;
inline void (*Node::ptr::CSTR_Node)(Node * self) = (void (*)(Node * self)) 0x447300;
#endif

#ifdef __linux__

inline Node * (*Node::ptr::NextNode)(Node * self) = (Node * (*)(Node * self)) 0x806def0;
inline Node * (*Node::ptr::_New)(Node * self, String * key, XMLAttribute * value, int color, Node * parent) = (Node * (*)(Node * self, String * key, XMLAttribute * value, int color, Node * parent)) 0x0;
inline Node * (*Node::ptr::_new2)() = (Node * (*)()) 0x81283c0;
inline void (*Node::ptr::mark)(Node * self) = (void (*)(Node * self)) 0x8092db0;
inline void (*Node::ptr::CSTR_Node)(Node * self) = (void (*)(Node * self)) 0x81281e0;
#endif
#endif
