// Generated automatically. Do not edit!
#ifndef _FireElemental_
#define _FireElemental_
#include "ElementalBase.hpp"

class FireElemental : public ElementalBase  {
public:

    // Wrappers
    FireElemental(int xVal, int yVal, int l) {
        ptr::CSTR_FireElemental(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline FireElemental * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline FireElemental * _new2() { return ptr::_new2(); }
    inline void DropTile() { ptr::DropTile(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static FireElemental * (*New)(FireElemental * self, int xVal, int yVal, int l);
        static FireElemental * (*_new2)();
        static void (*DropTile)(FireElemental * self);
        static void (*_mark)();
        static void (*CSTR_FireElemental)(FireElemental * self);
    };
};

#ifdef _WIN32

inline FireElemental * (*FireElemental::ptr::New)(FireElemental * self, int xVal, int yVal, int l) = (FireElemental * (*)(FireElemental * self, int xVal, int yVal, int l)) 0x645620;
inline FireElemental * (*FireElemental::ptr::_new2)() = (FireElemental * (*)()) 0x0;
inline void (*FireElemental::ptr::DropTile)(FireElemental * self) = (void (*)(FireElemental * self)) 0x6458a0;
inline void (*FireElemental::ptr::_mark)() = (void (*)()) 0x0;
inline void (*FireElemental::ptr::CSTR_FireElemental)(FireElemental * self) = (void (*)(FireElemental * self)) 0x6455b0;
#endif

#ifdef __linux__

inline FireElemental * (*FireElemental::ptr::New)(FireElemental * self, int xVal, int yVal, int l) = (FireElemental * (*)(FireElemental * self, int xVal, int yVal, int l)) 0x81c33f0;
inline FireElemental * (*FireElemental::ptr::_new2)() = (FireElemental * (*)()) 0x81c3580;
inline void (*FireElemental::ptr::DropTile)(FireElemental * self) = (void (*)(FireElemental * self)) 0x837ccd0;
inline void (*FireElemental::ptr::_mark)() = (void (*)()) 0x80b0640;
inline void (*FireElemental::ptr::CSTR_FireElemental)(FireElemental * self) = (void (*)(FireElemental * self)) 0x81c33d0;
#endif
#endif
