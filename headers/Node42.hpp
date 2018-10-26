// Generated automatically. Do not edit!
#ifndef _Node42_
#define _Node42_
class ReplayData;
#include "Object.hpp"

class Node42 : public Object  {
public:
    ReplayData * _data;
    Node42 * _succ;
    Node42 * _pred;

    // Wrappers
    inline virtual ReplayData * Value() { return ptr::Value(this); }
    inline virtual Node42 * GetNode() { return ptr::_GetNode(); }
    inline virtual Node42 * NextNode() { return ptr::_NextNode(); }
    inline Node42 * _New(Node42 * succ, Node42 * pred, ReplayData * data) { return ptr::_New(this, succ, pred, data); }
    inline Node42 * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static ReplayData * (*Value)(Node42 * self);
        static Node42 * (*_GetNode)();
        static Node42 * (*_NextNode)();
        static Node42 * (*_New)(Node42 * self, Node42 * succ, Node42 * pred, ReplayData * data);
        static Node42 * (*_new2)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

ReplayData * (*Node42::ptr::Value)(Node42 * self) = (ReplayData * (*)(Node42 * self)) 0x5f7970;
Node42 * (*Node42::ptr::_GetNode)() = (Node42 * (*)()) 0x0;
Node42 * (*Node42::ptr::_NextNode)() = (Node42 * (*)()) 0x0;
Node42 * (*Node42::ptr::_New)(Node42 * self, Node42 * succ, Node42 * pred, ReplayData * data) = (Node42 * (*)(Node42 * self, Node42 * succ, Node42 * pred, ReplayData * data)) 0x5f7980;
Node42 * (*Node42::ptr::_new2)() = (Node42 * (*)()) 0x0;
void (*Node42::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

ReplayData * (*Node42::ptr::Value)(Node42 * self) = (ReplayData * (*)(Node42 * self)) 0x8075590;
Node42 * (*Node42::ptr::_GetNode)() = (Node42 * (*)()) 0x8075560;
Node42 * (*Node42::ptr::_NextNode)() = (Node42 * (*)()) 0x8075570;
Node42 * (*Node42::ptr::_New)(Node42 * self, Node42 * succ, Node42 * pred, ReplayData * data) = (Node42 * (*)(Node42 * self, Node42 * succ, Node42 * pred, ReplayData * data)) 0x0;
Node42 * (*Node42::ptr::_new2)() = (Node42 * (*)()) 0x81ba550;
void (*Node42::ptr::_mark)() = (void (*)()) 0x80898d0;
#endif
#endif
