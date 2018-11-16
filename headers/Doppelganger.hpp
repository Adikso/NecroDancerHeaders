// Generated automatically. Do not edit!
#ifndef _Doppelganger_
#define _Doppelganger_
class Enemy;
class List55;
#include "Object.hpp"

class Doppelganger : public Object  {
public:
    int x;
    int y;
    int coinsToDrop;
    int lastDoppelBeat;
    Enemy * enemy;
    bool hasBeenHit;
    static List55 * * doppelgangers;

    // Wrappers
    Doppelganger(int xVal, int yVal, int l) {
        ptr::CSTR_Doppelganger(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline virtual void Doppel() { ptr::Doppel(this); }
    inline Doppelganger * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Doppelganger * _new2() { return ptr::_new2(); }
    inline virtual void Update() { ptr::Update(this); }
    inline static void _UpdateAll() { ptr::_UpdateAll(); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static void (*Doppel)(Doppelganger * self);
        static Doppelganger * (*New)(Doppelganger * self, int xVal, int yVal, int l);
        static Doppelganger * (*_new2)();
        static void (*Update)(Doppelganger * self);
        static void (*_UpdateAll)();
        static void (*mark)(Doppelganger * self);
        static void (*CSTR_Doppelganger)(Doppelganger * self);
    };
};

#ifdef _WIN32
inline List55 * * Doppelganger::doppelgangers = (List55* *) 0x835578;

inline void (*Doppelganger::ptr::Doppel)(Doppelganger * self) = (void (*)(Doppelganger * self)) 0x687dc0;
inline Doppelganger * (*Doppelganger::ptr::New)(Doppelganger * self, int xVal, int yVal, int l) = (Doppelganger * (*)(Doppelganger * self, int xVal, int yVal, int l)) 0x688b40;
inline Doppelganger * (*Doppelganger::ptr::_new2)() = (Doppelganger * (*)()) 0x0;
inline void (*Doppelganger::ptr::Update)(Doppelganger * self) = (void (*)(Doppelganger * self)) 0x688da0;
inline void (*Doppelganger::ptr::_UpdateAll)() = (void (*)()) 0x0;
inline void (*Doppelganger::ptr::mark)(Doppelganger * self) = (void (*)(Doppelganger * self)) 0x689130;
inline void (*Doppelganger::ptr::CSTR_Doppelganger)(Doppelganger * self) = (void (*)(Doppelganger * self)) 0x687d30;
#endif

#ifdef __linux__
inline List55 * * Doppelganger::doppelgangers = (List55* *) 0x856a300;

inline void (*Doppelganger::ptr::Doppel)(Doppelganger * self) = (void (*)(Doppelganger * self)) 0x825d580;
inline Doppelganger * (*Doppelganger::ptr::New)(Doppelganger * self, int xVal, int yVal, int l) = (Doppelganger * (*)(Doppelganger * self, int xVal, int yVal, int l)) 0x81e11b0;
inline Doppelganger * (*Doppelganger::ptr::_new2)() = (Doppelganger * (*)()) 0x81e1390;
inline void (*Doppelganger::ptr::Update)(Doppelganger * self) = (void (*)(Doppelganger * self)) 0x826a8d0;
inline void (*Doppelganger::ptr::_UpdateAll)() = (void (*)()) 0x81e13a0;
inline void (*Doppelganger::ptr::mark)(Doppelganger * self) = (void (*)(Doppelganger * self)) 0x808f950;
inline void (*Doppelganger::ptr::CSTR_Doppelganger)(Doppelganger * self) = (void (*)(Doppelganger * self)) 0x81e1170;
#endif
#endif
