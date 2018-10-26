// Generated automatically. Do not edit!
#ifndef _Swarm_
#define _Swarm_
#include "Object.hpp"

class Swarm : public Object  {
public:

    // Wrappers
    inline static void PutSpawner(int x, int y) { ptr::PutSpawner(x, y); }
    inline static void Move() { ptr::Move(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static void (*PutSpawner)(int x, int y);
        static void (*Move)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

void (*Swarm::ptr::PutSpawner)(int x, int y) = (void (*)(int x, int y)) 0x65d700;
void (*Swarm::ptr::Move)() = (void (*)()) 0x65d7b0;
void (*Swarm::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

void (*Swarm::ptr::PutSpawner)(int x, int y) = (void (*)(int x, int y)) 0x81d42f0;
void (*Swarm::ptr::Move)() = (void (*)()) 0x82a7310;
void (*Swarm::ptr::_mark)() = (void (*)()) 0x80769a0;
#endif
#endif
