// Generated automatically. Do not edit!
#ifndef _Node13_
#define _Node13_
class FamiliarFixed;
#include "Object.hpp"

class Node13 : public Object  {
public:
    Node13 * _succ;
    Node13 * _pred;
    FamiliarFixed * _data;

    // Wrappers
    inline Node13 * _New(Node13 * arg1, Node13 * arg2, FamiliarFixed * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node13 * _new2() { return ptr::_new2(); }
    inline virtual int Remove3() { return ptr::_Remove3(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node13 * (*_New)(Node13 * self, Node13 * arg1, Node13 * arg2, FamiliarFixed * arg3);
        static Node13 * (*_new2)();
        static int (*_Remove3)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Node13 * (*Node13::ptr::_New)(Node13 * self, Node13 * arg1, Node13 * arg2, FamiliarFixed * arg3) = (Node13 * (*)(Node13 * self, Node13 * arg1, Node13 * arg2, FamiliarFixed * arg3)) 0x0;
inline Node13 * (*Node13::ptr::_new2)() = (Node13 * (*)()) 0x0;
inline int (*Node13::ptr::_Remove3)() = (int (*)()) 0x0;
inline void (*Node13::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Node13 * (*Node13::ptr::_New)(Node13 * self, Node13 * arg1, Node13 * arg2, FamiliarFixed * arg3) = (Node13 * (*)(Node13 * self, Node13 * arg1, Node13 * arg2, FamiliarFixed * arg3)) 0x0;
inline Node13 * (*Node13::ptr::_new2)() = (Node13 * (*)()) 0x8191940;
inline int (*Node13::ptr::_Remove3)() = (int (*)()) 0x0;
inline void (*Node13::ptr::_mark)() = (void (*)()) 0x808af10;
#endif
#endif
