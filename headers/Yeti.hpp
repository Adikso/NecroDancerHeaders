// Generated automatically. Do not edit!
#ifndef _Yeti_
#define _Yeti_
#include "Enemy.hpp"

class Yeti : public Enemy  {
public:
    int lastNonVisibleBeat;
    int animState;

    // Wrappers
    Yeti(int xVal, int yVal, int l) {
        ptr::CSTR_Yeti(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Yeti * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Yeti * _new2() { return ptr::_new2(); }
    inline void MoveFail() { ptr::MoveFail(this); }
    inline void Update() { ptr::Update(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline bool _CanBeLord() { return ptr::_CanBeLord(); }
    inline void Die() { ptr::Die(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Yeti * (*New)(Yeti * self, int xVal, int yVal, int l);
        static Yeti * (*_new2)();
        static void (*MoveFail)(Yeti * self);
        static void (*Update)(Yeti * self);
        static void (*MoveSucceed)(Yeti * self, bool hitPlayer, bool moveDelayed);
        static bool (*_CanBeLord)();
        static void (*Die)(Yeti * self);
        static void (*_mark)();
        static void (*CSTR_Yeti)(Yeti * self);
    };
};

#ifdef _WIN32

inline Yeti * (*Yeti::ptr::New)(Yeti * self, int xVal, int yVal, int l) = (Yeti * (*)(Yeti * self, int xVal, int yVal, int l)) 0x647710;
inline Yeti * (*Yeti::ptr::_new2)() = (Yeti * (*)()) 0x0;
inline void (*Yeti::ptr::MoveFail)(Yeti * self) = (void (*)(Yeti * self)) 0x63d930;
inline void (*Yeti::ptr::Update)(Yeti * self) = (void (*)(Yeti * self)) 0x647900;
inline void (*Yeti::ptr::MoveSucceed)(Yeti * self, bool hitPlayer, bool moveDelayed) = (void (*)(Yeti * self, bool hitPlayer, bool moveDelayed)) 0x647ad0;
inline bool (*Yeti::ptr::_CanBeLord)() = (bool (*)()) 0x0;
inline void (*Yeti::ptr::Die)(Yeti * self) = (void (*)(Yeti * self)) 0x647f90;
inline void (*Yeti::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Yeti::ptr::CSTR_Yeti)(Yeti * self) = (void (*)(Yeti * self)) 0x6476a0;
#endif

#ifdef __linux__

inline Yeti * (*Yeti::ptr::New)(Yeti * self, int xVal, int yVal, int l) = (Yeti * (*)(Yeti * self, int xVal, int yVal, int l)) 0x81c4000;
inline Yeti * (*Yeti::ptr::_new2)() = (Yeti * (*)()) 0x81c4150;
inline void (*Yeti::ptr::MoveFail)(Yeti * self) = (void (*)(Yeti * self)) 0x8134cf0;
inline void (*Yeti::ptr::Update)(Yeti * self) = (void (*)(Yeti * self)) 0x8381960;
inline void (*Yeti::ptr::MoveSucceed)(Yeti * self, bool hitPlayer, bool moveDelayed) = (void (*)(Yeti * self, bool hitPlayer, bool moveDelayed)) 0x83a5ed0;
inline bool (*Yeti::ptr::_CanBeLord)() = (bool (*)()) 0x8076320;
inline void (*Yeti::ptr::Die)(Yeti * self) = (void (*)(Yeti * self)) 0x83b61e0;
inline void (*Yeti::ptr::_mark)() = (void (*)()) 0x80b0570;
inline void (*Yeti::ptr::CSTR_Yeti)(Yeti * self) = (void (*)(Yeti * self)) 0x81c3fd0;
#endif
#endif
