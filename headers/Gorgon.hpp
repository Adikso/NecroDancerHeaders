// Generated automatically. Do not edit!
#ifndef _Gorgon_
#define _Gorgon_
class Entity;
class Player;
class String;
#include "Enemy.hpp"

class Gorgon : public Enemy  {
public:
    int statueFlashFrames;

    // Wrappers
    Gorgon(int xVal, int yVal, int l) {
        ptr::CSTR_Gorgon(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Gorgon * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Gorgon * _new2() { return ptr::_new2(); }
    inline void Die() { ptr::Die(this); }
    inline void AfterHitPlayer(Player * p) { ptr::AfterHitPlayer(this, p); }
    inline bool _Hit(String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) { return ptr::_Hit(this, arg1, arg2, arg3, arg4, arg5, arg6); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Gorgon * (*New)(Gorgon * self, int xVal, int yVal, int l);
        static Gorgon * (*_new2)();
        static void (*Die)(Gorgon * self);
        static void (*AfterHitPlayer)(Gorgon * self, Player * p);
        static bool (*_Hit)(Gorgon * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6);
        static void (*_mark)();
        static void (*CSTR_Gorgon)(Gorgon * self);
    };
};

#ifdef _WIN32

Gorgon * (*Gorgon::ptr::New)(Gorgon * self, int xVal, int yVal, int l) = (Gorgon * (*)(Gorgon * self, int xVal, int yVal, int l)) 0x658240;
Gorgon * (*Gorgon::ptr::_new2)() = (Gorgon * (*)()) 0x0;
void (*Gorgon::ptr::Die)(Gorgon * self) = (void (*)(Gorgon * self)) 0x658450;
void (*Gorgon::ptr::AfterHitPlayer)(Gorgon * self, Player * p) = (void (*)(Gorgon * self, Player * p)) 0x658610;
bool (*Gorgon::ptr::_Hit)(Gorgon * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(Gorgon * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x0;
void (*Gorgon::ptr::_mark)() = (void (*)()) 0x0;
void (*Gorgon::ptr::CSTR_Gorgon)(Gorgon * self) = (void (*)(Gorgon * self)) 0x6581e0;
#endif

#ifdef __linux__

Gorgon * (*Gorgon::ptr::New)(Gorgon * self, int xVal, int yVal, int l) = (Gorgon * (*)(Gorgon * self, int xVal, int yVal, int l)) 0x81c9ce0;
Gorgon * (*Gorgon::ptr::_new2)() = (Gorgon * (*)()) 0x81c9e40;
void (*Gorgon::ptr::Die)(Gorgon * self) = (void (*)(Gorgon * self)) 0x83b5be0;
void (*Gorgon::ptr::AfterHitPlayer)(Gorgon * self, Player * p) = (void (*)(Gorgon * self, Player * p)) 0x8318c90;
bool (*Gorgon::ptr::_Hit)(Gorgon * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(Gorgon * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x8397010;
void (*Gorgon::ptr::_mark)() = (void (*)()) 0x80b0200;
void (*Gorgon::ptr::CSTR_Gorgon)(Gorgon * self) = (void (*)(Gorgon * self)) 0x81c9cb0;
#endif
#endif
