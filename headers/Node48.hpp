// Generated automatically. Do not edit!
#ifndef _Node48_
#define _Node48_
class SaleItem;
#include "Object.hpp"

class Node48 : public Object  {
public:
    Node48 * _succ;
    Node48 * _pred;
    SaleItem * _data;

    // Wrappers
    inline Node48 * _New(Node48 * arg1, Node48 * arg2, SaleItem * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node48 * _new2() { return ptr::_new2(); }
    inline virtual int Remove3() { return ptr::_Remove3(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node48 * (*_New)(Node48 * self, Node48 * arg1, Node48 * arg2, SaleItem * arg3);
        static Node48 * (*_new2)();
        static int (*_Remove3)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Node48 * (*Node48::ptr::_New)(Node48 * self, Node48 * arg1, Node48 * arg2, SaleItem * arg3) = (Node48 * (*)(Node48 * self, Node48 * arg1, Node48 * arg2, SaleItem * arg3)) 0x0;
inline Node48 * (*Node48::ptr::_new2)() = (Node48 * (*)()) 0x0;
inline int (*Node48::ptr::_Remove3)() = (int (*)()) 0x0;
inline void (*Node48::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Node48 * (*Node48::ptr::_New)(Node48 * self, Node48 * arg1, Node48 * arg2, SaleItem * arg3) = (Node48 * (*)(Node48 * self, Node48 * arg1, Node48 * arg2, SaleItem * arg3)) 0x0;
inline Node48 * (*Node48::ptr::_new2)() = (Node48 * (*)()) 0x81bee00;
inline int (*Node48::ptr::_Remove3)() = (int (*)()) 0x8092ac0;
inline void (*Node48::ptr::_mark)() = (void (*)()) 0x808b4d0;
#endif
#endif
