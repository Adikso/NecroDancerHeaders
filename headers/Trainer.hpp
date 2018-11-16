// Generated automatically. Do not edit!
#ifndef _Trainer_
#define _Trainer_
#include "NPC.hpp"

class Trainer : public NPC  {
public:

    // Wrappers
    inline Trainer * New(int xVal, int yVal, int l, bool captv) { return ptr::New(this, xVal, yVal, l, captv); }
    inline Trainer * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Trainer * (*New)(Trainer * self, int xVal, int yVal, int l, bool captv);
        static Trainer * (*_new2)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Trainer * (*Trainer::ptr::New)(Trainer * self, int xVal, int yVal, int l, bool captv) = (Trainer * (*)(Trainer * self, int xVal, int yVal, int l, bool captv)) 0x66cb50;
inline Trainer * (*Trainer::ptr::_new2)() = (Trainer * (*)()) 0x0;
inline void (*Trainer::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Trainer * (*Trainer::ptr::New)(Trainer * self, int xVal, int yVal, int l, bool captv) = (Trainer * (*)(Trainer * self, int xVal, int yVal, int l, bool captv)) 0x81dab00;
inline Trainer * (*Trainer::ptr::_new2)() = (Trainer * (*)()) 0x81dabc0;
inline void (*Trainer::ptr::_mark)() = (void (*)()) 0x80b2960;
#endif
#endif
