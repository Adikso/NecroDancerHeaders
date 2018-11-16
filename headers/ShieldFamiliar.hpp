// Generated automatically. Do not edit!
#ifndef _ShieldFamiliar_
#define _ShieldFamiliar_
#include "FamiliarFixed.hpp"

class ShieldFamiliar : public FamiliarFixed  {
public:

    // Wrappers
    inline ShieldFamiliar * New(int x_, int y_) { return ptr::New(this, x_, y_); }
    inline ShieldFamiliar * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline bool ApplyEffect(int dir) { return ptr::ApplyEffect(this, dir); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static ShieldFamiliar * (*New)(ShieldFamiliar * self, int x_, int y_);
        static ShieldFamiliar * (*_new2)();
        static void (*Update)(ShieldFamiliar * self);
        static bool (*ApplyEffect)(ShieldFamiliar * self, int dir);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline ShieldFamiliar * (*ShieldFamiliar::ptr::New)(ShieldFamiliar * self, int x_, int y_) = (ShieldFamiliar * (*)(ShieldFamiliar * self, int x_, int y_)) 0x602f30;
inline ShieldFamiliar * (*ShieldFamiliar::ptr::_new2)() = (ShieldFamiliar * (*)()) 0x0;
inline void (*ShieldFamiliar::ptr::Update)(ShieldFamiliar * self) = (void (*)(ShieldFamiliar * self)) 0x6030a0;
inline bool (*ShieldFamiliar::ptr::ApplyEffect)(ShieldFamiliar * self, int dir) = (bool (*)(ShieldFamiliar * self, int dir)) 0x6030f0;
inline void (*ShieldFamiliar::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline ShieldFamiliar * (*ShieldFamiliar::ptr::New)(ShieldFamiliar * self, int x_, int y_) = (ShieldFamiliar * (*)(ShieldFamiliar * self, int x_, int y_)) 0x81a7880;
inline ShieldFamiliar * (*ShieldFamiliar::ptr::_new2)() = (ShieldFamiliar * (*)()) 0x81a7a20;
inline void (*ShieldFamiliar::ptr::Update)(ShieldFamiliar * self) = (void (*)(ShieldFamiliar * self)) 0x812cf90;
inline bool (*ShieldFamiliar::ptr::ApplyEffect)(ShieldFamiliar * self, int dir) = (bool (*)(ShieldFamiliar * self, int dir)) 0x819bd40;
inline void (*ShieldFamiliar::ptr::_mark)() = (void (*)()) 0x80a5540;
#endif
#endif
