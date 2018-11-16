// Generated automatically. Do not edit!
#ifndef _Hephaestus_
#define _Hephaestus_
#include "NPC.hpp"

class Hephaestus : public NPC  {
public:
    int lastFrame;

    // Wrappers
    inline Hephaestus * New(int xVal, int yVal, int l, bool captv) { return ptr::New(this, xVal, yVal, l, captv); }
    inline Hephaestus * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Hephaestus * (*New)(Hephaestus * self, int xVal, int yVal, int l, bool captv);
        static Hephaestus * (*_new2)();
        static void (*Update)(Hephaestus * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Hephaestus * (*Hephaestus::ptr::New)(Hephaestus * self, int xVal, int yVal, int l, bool captv) = (Hephaestus * (*)(Hephaestus * self, int xVal, int yVal, int l, bool captv)) 0x66c970;
inline Hephaestus * (*Hephaestus::ptr::_new2)() = (Hephaestus * (*)()) 0x0;
inline void (*Hephaestus::ptr::Update)(Hephaestus * self) = (void (*)(Hephaestus * self)) 0x66ca30;
inline void (*Hephaestus::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Hephaestus * (*Hephaestus::ptr::New)(Hephaestus * self, int xVal, int yVal, int l, bool captv) = (Hephaestus * (*)(Hephaestus * self, int xVal, int yVal, int l, bool captv)) 0x81da9b0;
inline Hephaestus * (*Hephaestus::ptr::_new2)() = (Hephaestus * (*)()) 0x81daa70;
inline void (*Hephaestus::ptr::Update)(Hephaestus * self) = (void (*)(Hephaestus * self)) 0x8387090;
inline void (*Hephaestus::ptr::_mark)() = (void (*)()) 0x80b2b70;
#endif
#endif
