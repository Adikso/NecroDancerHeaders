// Generated automatically. Do not edit!
#ifndef _ShoveMonster_
#define _ShoveMonster_
#include "Enemy.hpp"

class ShoveMonster : public Enemy  {
public:

    // Wrappers
    ShoveMonster(int xVal, int yVal, int l) {
        ptr::CSTR_ShoveMonster(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline ShoveMonster * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline ShoveMonster * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static ShoveMonster * (*New)(ShoveMonster * self, int xVal, int yVal, int l);
        static ShoveMonster * (*_new2)();
        static void (*Update)(ShoveMonster * self);
        static void (*MoveSucceed)(ShoveMonster * self, bool hitPlayer, bool moveDelayed);
        static void (*_mark)();
        static void (*CSTR_ShoveMonster)(ShoveMonster * self);
    };
};

#ifdef _WIN32

inline ShoveMonster * (*ShoveMonster::ptr::New)(ShoveMonster * self, int xVal, int yVal, int l) = (ShoveMonster * (*)(ShoveMonster * self, int xVal, int yVal, int l)) 0x647260;
inline ShoveMonster * (*ShoveMonster::ptr::_new2)() = (ShoveMonster * (*)()) 0x0;
inline void (*ShoveMonster::ptr::Update)(ShoveMonster * self) = (void (*)(ShoveMonster * self)) 0x6453b0;
inline void (*ShoveMonster::ptr::MoveSucceed)(ShoveMonster * self, bool hitPlayer, bool moveDelayed) = (void (*)(ShoveMonster * self, bool hitPlayer, bool moveDelayed)) 0x6473e0;
inline void (*ShoveMonster::ptr::_mark)() = (void (*)()) 0x0;
inline void (*ShoveMonster::ptr::CSTR_ShoveMonster)(ShoveMonster * self) = (void (*)(ShoveMonster * self)) 0x647200;
#endif

#ifdef __linux__

inline ShoveMonster * (*ShoveMonster::ptr::New)(ShoveMonster * self, int xVal, int yVal, int l) = (ShoveMonster * (*)(ShoveMonster * self, int xVal, int yVal, int l)) 0x81c3e70;
inline ShoveMonster * (*ShoveMonster::ptr::_new2)() = (ShoveMonster * (*)()) 0x81c3fb0;
inline void (*ShoveMonster::ptr::Update)(ShoveMonster * self) = (void (*)(ShoveMonster * self)) 0x8381c00;
inline void (*ShoveMonster::ptr::MoveSucceed)(ShoveMonster * self, bool hitPlayer, bool moveDelayed) = (void (*)(ShoveMonster * self, bool hitPlayer, bool moveDelayed)) 0x83a5c00;
inline void (*ShoveMonster::ptr::_mark)() = (void (*)()) 0x80b0580;
inline void (*ShoveMonster::ptr::CSTR_ShoveMonster)(ShoveMonster * self) = (void (*)(ShoveMonster * self)) 0x81c3e50;
#endif
#endif
