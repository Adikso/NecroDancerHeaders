// Generated automatically. Do not edit!
#ifndef _Node50_
#define _Node50_
class SoulFamiliar;
#include "Object.hpp"

class Node50 : public Object  {
public:
    Node50 * _succ;
    Node50 * _pred;
    SoulFamiliar * _data;

    // Wrappers
    inline Node50 * _New(Node50 * arg1, Node50 * arg2, SoulFamiliar * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node50 * _new2() { return ptr::_new2(); }
    inline virtual int Remove2() { return ptr::_Remove2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node50 * (*_New)(Node50 * self, Node50 * arg1, Node50 * arg2, SoulFamiliar * arg3);
        static Node50 * (*_new2)();
        static int (*_Remove2)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Node50 * (*Node50::ptr::_New)(Node50 * self, Node50 * arg1, Node50 * arg2, SoulFamiliar * arg3) = (Node50 * (*)(Node50 * self, Node50 * arg1, Node50 * arg2, SoulFamiliar * arg3)) 0x0;
Node50 * (*Node50::ptr::_new2)() = (Node50 * (*)()) 0x0;
int (*Node50::ptr::_Remove2)() = (int (*)()) 0x0;
void (*Node50::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Node50 * (*Node50::ptr::_New)(Node50 * self, Node50 * arg1, Node50 * arg2, SoulFamiliar * arg3) = (Node50 * (*)(Node50 * self, Node50 * arg1, Node50 * arg2, SoulFamiliar * arg3)) 0x0;
Node50 * (*Node50::ptr::_new2)() = (Node50 * (*)()) 0x81bff20;
int (*Node50::ptr::_Remove2)() = (int (*)()) 0x0;
void (*Node50::ptr::_mark)() = (void (*)()) 0x8088530;
#endif
#endif
