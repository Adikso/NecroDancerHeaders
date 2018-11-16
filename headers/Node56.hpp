// Generated automatically. Do not edit!
#ifndef _Node56_
#define _Node56_
class MinibossTileData;
#include "Object.hpp"

class Node56 : public Object  {
public:
    Node56 * _succ;
    Node56 * _pred;
    MinibossTileData * _data;

    // Wrappers
    inline Node56 * _New(Node56 * arg1, Node56 * arg2, MinibossTileData * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node56 * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node56 * (*_New)(Node56 * self, Node56 * arg1, Node56 * arg2, MinibossTileData * arg3);
        static Node56 * (*_new2)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Node56 * (*Node56::ptr::_New)(Node56 * self, Node56 * arg1, Node56 * arg2, MinibossTileData * arg3) = (Node56 * (*)(Node56 * self, Node56 * arg1, Node56 * arg2, MinibossTileData * arg3)) 0x0;
inline Node56 * (*Node56::ptr::_new2)() = (Node56 * (*)()) 0x0;
inline void (*Node56::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Node56 * (*Node56::ptr::_New)(Node56 * self, Node56 * arg1, Node56 * arg2, MinibossTileData * arg3) = (Node56 * (*)(Node56 * self, Node56 * arg1, Node56 * arg2, MinibossTileData * arg3)) 0x0;
inline Node56 * (*Node56::ptr::_new2)() = (Node56 * (*)()) 0x81e4fe0;
inline void (*Node56::ptr::_mark)() = (void (*)()) 0x8089210;
#endif
#endif
