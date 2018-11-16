// Generated automatically. Do not edit!
#ifndef _Node7_
#define _Node7_
template<class T> class Array;
#include "Object.hpp"

class Node7 : public Object  {
public:
    Node7 * _succ;
    Node7 * _pred;
    Array<int> * _data;

    // Wrappers
    inline Node7 * _New(Node7 * succ, Node7 * pred, Array<int> * data) { return ptr::_New(this, succ, pred, data); }
    inline Node7 * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node7 * (*_New)(Node7 * self, Node7 * succ, Node7 * pred, Array<int> * data);
        static Node7 * (*_new2)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Node7 * (*Node7::ptr::_New)(Node7 * self, Node7 * succ, Node7 * pred, Array<int> * data) = (Node7 * (*)(Node7 * self, Node7 * succ, Node7 * pred, Array<int> * data)) 0x5420d0;
inline Node7 * (*Node7::ptr::_new2)() = (Node7 * (*)()) 0x0;
inline void (*Node7::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Node7 * (*Node7::ptr::_New)(Node7 * self, Node7 * succ, Node7 * pred, Array<int> * data) = (Node7 * (*)(Node7 * self, Node7 * succ, Node7 * pred, Array<int> * data)) 0x0;
inline Node7 * (*Node7::ptr::_new2)() = (Node7 * (*)()) 0x81596a0;
inline void (*Node7::ptr::_mark)() = (void (*)()) 0x808ae10;
#endif
#endif
