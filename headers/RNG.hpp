// Generated automatically. Do not edit!
#ifndef _RNG_
#define _RNG_
#include "Object.hpp"

class RNG : public Object  {
public:
    int seed;

    // Wrappers
    inline virtual int Rand() { return ptr::Rand(this); }
    inline virtual int RndIntRange(int lo, int hi) { return ptr::RndIntRange(this, lo, hi); }
    inline virtual void SetSeed(int seed_) { ptr::SetSeed(this, seed_); }
    inline RNG * _New() { return ptr::_New(); }
    inline RNG * _new2(int arg1) { return ptr::_new2(this, arg1); }
    inline static RNG * Make(int x) { return ptr::Make(x); }
    inline virtual RNG * Split() { return ptr::Split(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static int (*Rand)(RNG * self);
        static int (*RndIntRange)(RNG * self, int lo, int hi);
        static void (*SetSeed)(RNG * self, int seed_);
        static RNG * (*_New)();
        static RNG * (*_new2)(RNG * self, int arg1);
        static RNG * (*Make)(int x);
        static RNG * (*Split)(RNG * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

int (*RNG::ptr::Rand)(RNG * self) = (int (*)(RNG * self)) 0x57e3c0;
int (*RNG::ptr::RndIntRange)(RNG * self, int lo, int hi) = (int (*)(RNG * self, int lo, int hi)) 0x57e3f0;
void (*RNG::ptr::SetSeed)(RNG * self, int seed_) = (void (*)(RNG * self, int seed_)) 0x57e410;
RNG * (*RNG::ptr::_New)() = (RNG * (*)()) 0x0;
RNG * (*RNG::ptr::_new2)(RNG * self, int arg1) = (RNG * (*)(RNG * self, int arg1)) 0x0;
RNG * (*RNG::ptr::Make)(int x) = (RNG * (*)(int x)) 0x57e440;
RNG * (*RNG::ptr::Split)(RNG * self) = (RNG * (*)(RNG * self)) 0x57e520;
void (*RNG::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

int (*RNG::ptr::Rand)(RNG * self) = (int (*)(RNG * self)) 0x806fe60;
int (*RNG::ptr::RndIntRange)(RNG * self, int lo, int hi) = (int (*)(RNG * self, int lo, int hi)) 0x806feb0;
void (*RNG::ptr::SetSeed)(RNG * self, int seed_) = (void (*)(RNG * self, int seed_)) 0x822e010;
RNG * (*RNG::ptr::_New)() = (RNG * (*)()) 0x8158320;
RNG * (*RNG::ptr::_new2)(RNG * self, int arg1) = (RNG * (*)(RNG * self, int arg1)) 0x8158370;
RNG * (*RNG::ptr::Make)(int x) = (RNG * (*)(int x)) 0x8158390;
RNG * (*RNG::ptr::Split)(RNG * self) = (RNG * (*)(RNG * self)) 0x80b39e0;
void (*RNG::ptr::_mark)() = (void (*)()) 0x806fee0;
#endif
#endif
