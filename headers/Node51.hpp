// Generated automatically. Do not edit!
#ifndef _Node51_
#define _Node51_
class SoulFamiliar;
#include "Object.hpp"

class Node51 : public Object  {
public:
    Node51 * _succ;
    Node51 * _pred;
    SoulFamiliar * _data;

    // Wrappers
    inline Node51 * _New(Node51 * arg1, Node51 * arg2, SoulFamiliar * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node51 * _new2() { return ptr::_new2(); }
    inline virtual int Remove3() { return ptr::_Remove3(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node51 * (*_New)(Node51 * self, Node51 * arg1, Node51 * arg2, SoulFamiliar * arg3);
        static Node51 * (*_new2)();
        static int (*_Remove3)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Node51 * (*Node51::ptr::_New)(Node51 * self, Node51 * arg1, Node51 * arg2, SoulFamiliar * arg3) = (Node51 * (*)(Node51 * self, Node51 * arg1, Node51 * arg2, SoulFamiliar * arg3)) 0x0;
inline Node51 * (*Node51::ptr::_new2)() = (Node51 * (*)()) 0x0;
inline int (*Node51::ptr::_Remove3)() = (int (*)()) 0x0;
inline void (*Node51::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Node51 * (*Node51::ptr::_New)(Node51 * self, Node51 * arg1, Node51 * arg2, SoulFamiliar * arg3) = (Node51 * (*)(Node51 * self, Node51 * arg1, Node51 * arg2, SoulFamiliar * arg3)) 0x0;
inline Node51 * (*Node51::ptr::_new2)() = (Node51 * (*)()) 0x81c6640;
inline int (*Node51::ptr::_Remove3)() = (int (*)()) 0x8091400;
inline void (*Node51::ptr::_mark)() = (void (*)()) 0x8088db0;
#endif
#endif
