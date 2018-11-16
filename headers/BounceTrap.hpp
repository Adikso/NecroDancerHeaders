// Generated automatically. Do not edit!
#ifndef _BounceTrap_
#define _BounceTrap_
class Entity;
#include "Trap.hpp"

class BounceTrap : public Trap  {
public:
    bool isRotatingCW;
    bool isRotatingCCW;
    int bounceDir;
    int originalDir;
    int retractCounter;
    int rotatedBeat;

    // Wrappers
    BounceTrap(int xVal, int yVal, int d) {
        ptr::CSTR_BounceTrap(this);
        ptr::New(this, xVal, yVal, d);
    }

    inline BounceTrap * New(int xVal, int yVal, int d) { return ptr::New(this, xVal, yVal, d); }
    inline BounceTrap * _new2() { return ptr::_new2(); }
    inline virtual int RotateDir(int dir, bool cw) { return ptr::RotateDir(this, dir, cw); }
    inline virtual void Rotate() { ptr::Rotate(this); }
    inline virtual int GetFrameToShow() { return ptr::GetFrameToShow(this); }
    inline void Update() { ptr::Update(this); }
    inline void Trigger(Entity * ent) { ptr::Trigger(this, ent); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static BounceTrap * (*New)(BounceTrap * self, int xVal, int yVal, int d);
        static BounceTrap * (*_new2)();
        static int (*RotateDir)(BounceTrap * self, int dir, bool cw);
        static void (*Rotate)(BounceTrap * self);
        static int (*GetFrameToShow)(BounceTrap * self);
        static void (*Update)(BounceTrap * self);
        static void (*Trigger)(BounceTrap * self, Entity * ent);
        static void (*_mark)();
        static void (*CSTR_BounceTrap)(BounceTrap * self);
    };
};

#ifdef _WIN32

inline BounceTrap * (*BounceTrap::ptr::New)(BounceTrap * self, int xVal, int yVal, int d) = (BounceTrap * (*)(BounceTrap * self, int xVal, int yVal, int d)) 0x5d92e0;
inline BounceTrap * (*BounceTrap::ptr::_new2)() = (BounceTrap * (*)()) 0x0;
inline int (*BounceTrap::ptr::RotateDir)(BounceTrap * self, int dir, bool cw) = (int (*)(BounceTrap * self, int dir, bool cw)) 0x5d98d0;
inline void (*BounceTrap::ptr::Rotate)(BounceTrap * self) = (void (*)(BounceTrap * self)) 0x5d9920;
inline int (*BounceTrap::ptr::GetFrameToShow)(BounceTrap * self) = (int (*)(BounceTrap * self)) 0x5d9b80;
inline void (*BounceTrap::ptr::Update)(BounceTrap * self) = (void (*)(BounceTrap * self)) 0x5d9c00;
inline void (*BounceTrap::ptr::Trigger)(BounceTrap * self, Entity * ent) = (void (*)(BounceTrap * self, Entity * ent)) 0x5d9e30;
inline void (*BounceTrap::ptr::_mark)() = (void (*)()) 0x0;
inline void (*BounceTrap::ptr::CSTR_BounceTrap)(BounceTrap * self) = (void (*)(BounceTrap * self)) 0x5d91b0;
#endif

#ifdef __linux__

inline BounceTrap * (*BounceTrap::ptr::New)(BounceTrap * self, int xVal, int yVal, int d) = (BounceTrap * (*)(BounceTrap * self, int xVal, int yVal, int d)) 0x8193560;
inline BounceTrap * (*BounceTrap::ptr::_new2)() = (BounceTrap * (*)()) 0x8193bf0;
inline int (*BounceTrap::ptr::RotateDir)(BounceTrap * self, int dir, bool cw) = (int (*)(BounceTrap * self, int dir, bool cw)) 0x807ef00;
inline void (*BounceTrap::ptr::Rotate)(BounceTrap * self) = (void (*)(BounceTrap * self)) 0x825ecc0;
inline int (*BounceTrap::ptr::GetFrameToShow)(BounceTrap * self) = (int (*)(BounceTrap * self)) 0x8071da0;
inline void (*BounceTrap::ptr::Update)(BounceTrap * self) = (void (*)(BounceTrap * self)) 0x825ebf0;
inline void (*BounceTrap::ptr::Trigger)(BounceTrap * self, Entity * ent) = (void (*)(BounceTrap * self, Entity * ent)) 0x839f480;
inline void (*BounceTrap::ptr::_mark)() = (void (*)()) 0x80a5f00;
inline void (*BounceTrap::ptr::CSTR_BounceTrap)(BounceTrap * self) = (void (*)(BounceTrap * self)) 0x81934b0;
#endif
#endif
