// Generated automatically. Do not edit!
#ifndef _TinySlime_
#define _TinySlime_
#include "Enemy.hpp"

class TinySlime : public Enemy  {
public:

    // Wrappers
    TinySlime(int xVal, int yVal, int l) {
        ptr::CSTR_TinySlime(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline TinySlime * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline TinySlime * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static TinySlime * (*New)(TinySlime * self, int xVal, int yVal, int l);
        static TinySlime * (*_new2)();
        static void (*_mark)();
        static void (*CSTR_TinySlime)(TinySlime * self);
    };
};

#ifdef _WIN32

inline TinySlime * (*TinySlime::ptr::New)(TinySlime * self, int xVal, int yVal, int l) = (TinySlime * (*)(TinySlime * self, int xVal, int yVal, int l)) 0x692af0;
inline TinySlime * (*TinySlime::ptr::_new2)() = (TinySlime * (*)()) 0x0;
inline void (*TinySlime::ptr::_mark)() = (void (*)()) 0x0;
inline void (*TinySlime::ptr::CSTR_TinySlime)(TinySlime * self) = (void (*)(TinySlime * self)) 0x692a90;
#endif

#ifdef __linux__

inline TinySlime * (*TinySlime::ptr::New)(TinySlime * self, int xVal, int yVal, int l) = (TinySlime * (*)(TinySlime * self, int xVal, int yVal, int l)) 0x81e6ad0;
inline TinySlime * (*TinySlime::ptr::_new2)() = (TinySlime * (*)()) 0x81e6bb0;
inline void (*TinySlime::ptr::_mark)() = (void (*)()) 0x80afdb0;
inline void (*TinySlime::ptr::CSTR_TinySlime)(TinySlime * self) = (void (*)(TinySlime * self)) 0x81e6ab0;
#endif
#endif
