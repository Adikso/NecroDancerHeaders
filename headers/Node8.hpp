// Generated automatically. Do not edit!
#ifndef _Node8_
#define _Node8_
class SubtitleData;
#include "Object.hpp"

class Node8 : public Object  {
public:
    Node8 * _succ;
    Node8 * _pred;
    SubtitleData * _data;

    // Wrappers
    inline Node8 * _New(Node8 * succ, Node8 * pred, SubtitleData * data) { return ptr::_New(this, succ, pred, data); }
    inline Node8 * _new2() { return ptr::_new2(); }
    inline virtual Node8 * GetNode() { return ptr::_GetNode(this); }
    inline virtual Node8 * NextNode() { return ptr::_NextNode(this); }
    inline virtual int Remove3() { return ptr::Remove3(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static Node8 * (*_New)(Node8 * self, Node8 * succ, Node8 * pred, SubtitleData * data);
        static Node8 * (*_new2)();
        static Node8 * (*_GetNode)(Node8 * self);
        static Node8 * (*_NextNode)(Node8 * self);
        static int (*Remove3)(Node8 * self);
        static void (*mark)(Node8 * self);
    };
};

#ifdef _WIN32

Node8 * (*Node8::ptr::_New)(Node8 * self, Node8 * succ, Node8 * pred, SubtitleData * data) = (Node8 * (*)(Node8 * self, Node8 * succ, Node8 * pred, SubtitleData * data)) 0x453f80;
Node8 * (*Node8::ptr::_new2)() = (Node8 * (*)()) 0x0;
Node8 * (*Node8::ptr::_GetNode)(Node8 * self) = (Node8 * (*)(Node8 * self)) 0x454110;
Node8 * (*Node8::ptr::_NextNode)(Node8 * self) = (Node8 * (*)(Node8 * self)) 0x4541e0;
int (*Node8::ptr::Remove3)(Node8 * self) = (int (*)(Node8 * self)) 0x454130;
void (*Node8::ptr::mark)(Node8 * self) = (void (*)(Node8 * self)) 0x41e2a0;
#endif

#ifdef __linux__

Node8 * (*Node8::ptr::_New)(Node8 * self, Node8 * succ, Node8 * pred, SubtitleData * data) = (Node8 * (*)(Node8 * self, Node8 * succ, Node8 * pred, SubtitleData * data)) 0x0;
Node8 * (*Node8::ptr::_new2)() = (Node8 * (*)()) 0x815a530;
Node8 * (*Node8::ptr::_GetNode)(Node8 * self) = (Node8 * (*)(Node8 * self)) 0x0;
Node8 * (*Node8::ptr::_NextNode)(Node8 * self) = (Node8 * (*)(Node8 * self)) 0x0;
int (*Node8::ptr::Remove3)(Node8 * self) = (int (*)(Node8 * self)) 0x8091130;
void (*Node8::ptr::mark)(Node8 * self) = (void (*)(Node8 * self)) 0x808b370;
#endif
#endif
