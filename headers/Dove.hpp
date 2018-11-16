// Generated automatically. Do not edit!
#ifndef _Dove_
#define _Dove_
#include "FamiliarFixed.hpp"

class Dove : public FamiliarFixed  {
public:

    // Wrappers
    inline Dove * New(int x_, int y_) { return ptr::New(this, x_, y_); }
    inline Dove * _new2() { return ptr::_new2(); }
    inline void _Update() { ptr::_Update(); }
    inline bool ApplyEffect(int dir) { return ptr::ApplyEffect(this, dir); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Dove * (*New)(Dove * self, int x_, int y_);
        static Dove * (*_new2)();
        static void (*_Update)();
        static bool (*ApplyEffect)(Dove * self, int dir);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Dove * (*Dove::ptr::New)(Dove * self, int x_, int y_) = (Dove * (*)(Dove * self, int x_, int y_)) 0x6028c0;
inline Dove * (*Dove::ptr::_new2)() = (Dove * (*)()) 0x0;
inline void (*Dove::ptr::_Update)() = (void (*)()) 0x0;
inline bool (*Dove::ptr::ApplyEffect)(Dove * self, int dir) = (bool (*)(Dove * self, int dir)) 0x602a30;
inline void (*Dove::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Dove * (*Dove::ptr::New)(Dove * self, int x_, int y_) = (Dove * (*)(Dove * self, int x_, int y_)) 0x81a73c0;
inline Dove * (*Dove::ptr::_new2)() = (Dove * (*)()) 0x81a7550;
inline void (*Dove::ptr::_Update)() = (void (*)()) 0x8257590;
inline bool (*Dove::ptr::ApplyEffect)(Dove * self, int dir) = (bool (*)(Dove * self, int dir)) 0x83bd3b0;
inline void (*Dove::ptr::_mark)() = (void (*)()) 0x80a5620;
#endif
#endif
