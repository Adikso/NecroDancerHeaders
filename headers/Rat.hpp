// Generated automatically. Do not edit!
#ifndef _Rat_
#define _Rat_
#include "FamiliarFixed.hpp"

class Rat : public FamiliarFixed  {
public:

    // Wrappers
    inline Rat * New(int x_, int y_) { return ptr::New(this, x_, y_); }
    inline Rat * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline bool ApplyEffect(int dir) { return ptr::ApplyEffect(this, dir); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Rat * (*New)(Rat * self, int x_, int y_);
        static Rat * (*_new2)();
        static void (*Update)(Rat * self);
        static bool (*ApplyEffect)(Rat * self, int dir);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Rat * (*Rat::ptr::New)(Rat * self, int x_, int y_) = (Rat * (*)(Rat * self, int x_, int y_)) 0x602130;
inline Rat * (*Rat::ptr::_new2)() = (Rat * (*)()) 0x0;
inline void (*Rat::ptr::Update)(Rat * self) = (void (*)(Rat * self)) 0x6022a0;
inline bool (*Rat::ptr::ApplyEffect)(Rat * self, int dir) = (bool (*)(Rat * self, int dir)) 0x6022e0;
inline void (*Rat::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Rat * (*Rat::ptr::New)(Rat * self, int x_, int y_) = (Rat * (*)(Rat * self, int x_, int y_)) 0x81a6db0;
inline Rat * (*Rat::ptr::_new2)() = (Rat * (*)()) 0x81a6f40;
inline void (*Rat::ptr::Update)(Rat * self) = (void (*)(Rat * self)) 0x82575f0;
inline bool (*Rat::ptr::ApplyEffect)(Rat * self, int dir) = (bool (*)(Rat * self, int dir)) 0x83bd4b0;
inline void (*Rat::ptr::_mark)() = (void (*)()) 0x80a5700;
#endif
#endif
