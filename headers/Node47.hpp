// Generated automatically. Do not edit!
#ifndef _Node47_
#define _Node47_
class ParticleSystem;
#include "Object.hpp"

class Node47 : public Object  {
public:
    Node47 * _succ;
    Node47 * _pred;
    ParticleSystem * _data;

    // Wrappers
    inline Node47 * _New(Node47 * arg1, Node47 * arg2, ParticleSystem * arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Node47 * _new2() { return ptr::_new2(); }
    inline virtual int Remove3() { return ptr::_Remove3(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Node47 * (*_New)(Node47 * self, Node47 * arg1, Node47 * arg2, ParticleSystem * arg3);
        static Node47 * (*_new2)();
        static int (*_Remove3)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

Node47 * (*Node47::ptr::_New)(Node47 * self, Node47 * arg1, Node47 * arg2, ParticleSystem * arg3) = (Node47 * (*)(Node47 * self, Node47 * arg1, Node47 * arg2, ParticleSystem * arg3)) 0x0;
Node47 * (*Node47::ptr::_new2)() = (Node47 * (*)()) 0x0;
int (*Node47::ptr::_Remove3)() = (int (*)()) 0x0;
void (*Node47::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Node47 * (*Node47::ptr::_New)(Node47 * self, Node47 * arg1, Node47 * arg2, ParticleSystem * arg3) = (Node47 * (*)(Node47 * self, Node47 * arg1, Node47 * arg2, ParticleSystem * arg3)) 0x0;
Node47 * (*Node47::ptr::_new2)() = (Node47 * (*)()) 0x81be070;
int (*Node47::ptr::_Remove3)() = (int (*)()) 0x808d2c0;
void (*Node47::ptr::_mark)() = (void (*)()) 0x8087250;
#endif
#endif
