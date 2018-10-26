// Generated automatically. Do not edit!
#ifndef _Node44_
#define _Node44_
class SoundData;
#include "Object.hpp"

class Node44 : public Object  {
public:
    Node44 * _succ;
    Node44 * _pred;
    SoundData * _data;

    // Wrappers
    inline Node44 * _New(Node44 * arg1, Node44 * arg2, SoundData * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node44 * _new2() { return ptr::_new2(); }
    inline virtual int Remove3() { return ptr::_Remove3(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node44 * (*_New)(Node44 * self, Node44 * arg1, Node44 * arg2, SoundData * arg3);
        static Node44 * (*_new2)();
        static int (*_Remove3)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Node44 * (*Node44::ptr::_New)(Node44 * self, Node44 * arg1, Node44 * arg2, SoundData * arg3) = (Node44 * (*)(Node44 * self, Node44 * arg1, Node44 * arg2, SoundData * arg3)) 0x0;
Node44 * (*Node44::ptr::_new2)() = (Node44 * (*)()) 0x0;
int (*Node44::ptr::_Remove3)() = (int (*)()) 0x0;
void (*Node44::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Node44 * (*Node44::ptr::_New)(Node44 * self, Node44 * arg1, Node44 * arg2, SoundData * arg3) = (Node44 * (*)(Node44 * self, Node44 * arg1, Node44 * arg2, SoundData * arg3)) 0x0;
Node44 * (*Node44::ptr::_new2)() = (Node44 * (*)()) 0x81bc390;
int (*Node44::ptr::_Remove3)() = (int (*)()) 0x808d160;
void (*Node44::ptr::_mark)() = (void (*)()) 0x80869d0;
#endif
#endif
