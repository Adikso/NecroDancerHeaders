// Generated automatically. Do not edit!
#ifndef _Bouncer_
#define _Bouncer_
#include "Object.hpp"

class Bouncer : public Object  {
public:
    float min;
    float max;
    float power;
    float value;
    int steps;
    int currentSteps;
    bool goingUp;
    bool enabled;

    // Wrappers
    Bouncer(float minVal, float maxVal, float powerVal, int stepsVal) {
        ptr::CSTR_Bouncer(this);
        ptr::New(this, minVal, maxVal, powerVal, stepsVal);
    }

    inline Bouncer * New(float minVal, float maxVal, float powerVal, int stepsVal) { return ptr::New(this, minVal, maxVal, powerVal, stepsVal); }
    inline Bouncer * _new2() { return ptr::_new2(); }
    inline virtual void Disable() { ptr::Disable(this); }
    inline virtual void Update() { ptr::Update(this); }
    inline virtual void Enable() { ptr::Enable(this); }
    inline virtual float GetVal() { return ptr::GetVal(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Bouncer * (*New)(Bouncer * self, float minVal, float maxVal, float powerVal, int stepsVal);
        static Bouncer * (*_new2)();
        static void (*Disable)(Bouncer * self);
        static void (*Update)(Bouncer * self);
        static void (*Enable)(Bouncer * self);
        static float (*GetVal)(Bouncer * self);
        static void (*_mark)();
        static void (*CSTR_Bouncer)(Bouncer * self);
    };
};

#ifdef _WIN32

inline Bouncer * (*Bouncer::ptr::New)(Bouncer * self, float minVal, float maxVal, float powerVal, int stepsVal) = (Bouncer * (*)(Bouncer * self, float minVal, float maxVal, float powerVal, int stepsVal)) 0x602490;
inline Bouncer * (*Bouncer::ptr::_new2)() = (Bouncer * (*)()) 0x0;
inline void (*Bouncer::ptr::Disable)(Bouncer * self) = (void (*)(Bouncer * self)) 0x602590;
inline void (*Bouncer::ptr::Update)(Bouncer * self) = (void (*)(Bouncer * self)) 0x6025a0;
inline void (*Bouncer::ptr::Enable)(Bouncer * self) = (void (*)(Bouncer * self)) 0x602650;
inline float (*Bouncer::ptr::GetVal)(Bouncer * self) = (float (*)(Bouncer * self)) 0x602660;
inline void (*Bouncer::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Bouncer::ptr::CSTR_Bouncer)(Bouncer * self) = (void (*)(Bouncer * self)) 0x602400;
#endif

#ifdef __linux__

inline Bouncer * (*Bouncer::ptr::New)(Bouncer * self, float minVal, float maxVal, float powerVal, int stepsVal) = (Bouncer * (*)(Bouncer * self, float minVal, float maxVal, float powerVal, int stepsVal)) 0x81a6fe0;
inline Bouncer * (*Bouncer::ptr::_new2)() = (Bouncer * (*)()) 0x81a70f0;
inline void (*Bouncer::ptr::Disable)(Bouncer * self) = (void (*)(Bouncer * self)) 0x8073cb0;
inline void (*Bouncer::ptr::Update)(Bouncer * self) = (void (*)(Bouncer * self)) 0x807b080;
inline void (*Bouncer::ptr::Enable)(Bouncer * self) = (void (*)(Bouncer * self)) 0x8073cc0;
inline float (*Bouncer::ptr::GetVal)(Bouncer * self) = (float (*)(Bouncer * self)) 0x8073cd0;
inline void (*Bouncer::ptr::_mark)() = (void (*)()) 0x8073cf0;
inline void (*Bouncer::ptr::CSTR_Bouncer)(Bouncer * self) = (void (*)(Bouncer * self)) 0x81a6fb0;
#endif
#endif
