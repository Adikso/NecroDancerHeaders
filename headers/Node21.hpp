// Generated automatically. Do not edit!
#ifndef _Node21_
#define _Node21_
class LevelObject;
#include "Object.hpp"

class Node21 : public Object  {
public:
    int key;
    Node21 * right;
    Node21 * left;
    LevelObject * value;
    int color;
    Node21 * parent;

    // Wrappers
    Node21() {
        ptr::CSTR_Node21(this);
    }

    inline Node21 * _New(int arg1, LevelObject * arg2, int arg3, Node21 * arg4) { return ptr::_New(this, arg1, arg2, arg3, arg4); }
    inline Node21 * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node21 * (*_New)(Node21 * self, int arg1, LevelObject * arg2, int arg3, Node21 * arg4);
        static Node21 * (*_new2)();
        static void (*_mark)();
        static void (*CSTR_Node21)(Node21 * self);
    };
};

#ifdef _WIN32

inline Node21 * (*Node21::ptr::_New)(Node21 * self, int arg1, LevelObject * arg2, int arg3, Node21 * arg4) = (Node21 * (*)(Node21 * self, int arg1, LevelObject * arg2, int arg3, Node21 * arg4)) 0x0;
inline Node21 * (*Node21::ptr::_new2)() = (Node21 * (*)()) 0x0;
inline void (*Node21::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Node21::ptr::CSTR_Node21)(Node21 * self) = (void (*)(Node21 * self)) 0x5d6d40;
#endif

#ifdef __linux__

inline Node21 * (*Node21::ptr::_New)(Node21 * self, int arg1, LevelObject * arg2, int arg3, Node21 * arg4) = (Node21 * (*)(Node21 * self, int arg1, LevelObject * arg2, int arg3, Node21 * arg4)) 0x0;
inline Node21 * (*Node21::ptr::_new2)() = (Node21 * (*)()) 0x81979c0;
inline void (*Node21::ptr::_mark)() = (void (*)()) 0x8089ad0;
inline void (*Node21::ptr::CSTR_Node21)(Node21 * self) = (void (*)(Node21 * self)) 0x8197780;
#endif
#endif
