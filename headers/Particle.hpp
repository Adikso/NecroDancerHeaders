// Generated automatically. Do not edit!
#ifndef _Particle_
#define _Particle_
class ParticleSystem;
class ParticleSystemData;
class Sprite;
class String;
#include "Object.hpp"

class Particle : public Object  {
public:
    Sprite * spr;
    ParticleSystem * system;
    float x;
    float y;
    float z;
    float xVel;
    float yVel;
    float zVel;
    float yAcc;
    float bounciness;
    int fadeDelay;
    int fadeTime;
    int fadeCounter;
    bool fading;
    bool inWorld;
    bool visible;
    int delay;
    bool active;
    float initialOpacity;
    float theta;

    // Wrappers
    Particle() {
        ptr::CSTR_Particle(this);
        ptr::New(this);
    }

    inline Particle * New() { return ptr::New(this); }
    inline virtual void Init5(ParticleSystem * arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, int arg8, ParticleSystemData * arg9, String * arg10) { ptr::_Init5(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10); }
    inline virtual void Update3(bool isOvular) { ptr::Update3(this, isOvular); }
    inline void _mark() { ptr::_mark(); }
    inline void Init4(ParticleSystem * sys, float xVal, float yVal, float zVal, float xVelVal, float yVelVal, float zVelVal, int delayVal, ParticleSystemData * data, String * imagePath) { ptr::Init4(this, sys, xVal, yVal, zVal, xVelVal, yVelVal, zVelVal, delayVal, data, imagePath); }

    class ptr {
    public:
        static Particle * (*New)(Particle * self);
        static void (*_Init5)(Particle * self, ParticleSystem * arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, int arg8, ParticleSystemData * arg9, String * arg10);
        static void (*Update3)(Particle * self, bool isOvular);
        static void (*_mark)();
        static void (*CSTR_Particle)(Particle * self);
        static void (*Init4)(Particle * self, ParticleSystem * sys, float xVal, float yVal, float zVal, float xVelVal, float yVelVal, float zVelVal, int delayVal, ParticleSystemData * data, String * imagePath);
    };
};

#ifdef _WIN32

Particle * (*Particle::ptr::New)(Particle * self) = (Particle * (*)(Particle * self)) 0x5fa4e0;
void (*Particle::ptr::_Init5)(Particle * self, ParticleSystem * arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, int arg8, ParticleSystemData * arg9, String * arg10) = (void (*)(Particle * self, ParticleSystem * arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, int arg8, ParticleSystemData * arg9, String * arg10)) 0x0;
void (*Particle::ptr::Update3)(Particle * self, bool isOvular) = (void (*)(Particle * self, bool isOvular)) 0x5fa8f0;
void (*Particle::ptr::_mark)() = (void (*)()) 0x0;
void (*Particle::ptr::CSTR_Particle)(Particle * self) = (void (*)(Particle * self)) 0x5fa400;
void (*Particle::ptr::Init4)(Particle * self, ParticleSystem * sys, float xVal, float yVal, float zVal, float xVelVal, float yVelVal, float zVelVal, int delayVal, ParticleSystemData * data, String * imagePath) = (void (*)(Particle * self, ParticleSystem * sys, float xVal, float yVal, float zVal, float xVelVal, float yVelVal, float zVelVal, int delayVal, ParticleSystemData * data, String * imagePath)) 0x5fa630;
#endif

#ifdef __linux__

Particle * (*Particle::ptr::New)(Particle * self) = (Particle * (*)(Particle * self)) 0x81a3630;
void (*Particle::ptr::_Init5)(Particle * self, ParticleSystem * arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, int arg8, ParticleSystemData * arg9, String * arg10) = (void (*)(Particle * self, ParticleSystem * arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, int arg8, ParticleSystemData * arg9, String * arg10)) 0x0;
void (*Particle::ptr::Update3)(Particle * self, bool isOvular) = (void (*)(Particle * self, bool isOvular)) 0x812f280;
void (*Particle::ptr::_mark)() = (void (*)()) 0x80a4f80;
void (*Particle::ptr::CSTR_Particle)(Particle * self) = (void (*)(Particle * self)) 0x81a35c0;
void (*Particle::ptr::Init4)(Particle * self, ParticleSystem * sys, float xVal, float yVal, float zVal, float xVelVal, float yVelVal, float zVelVal, int delayVal, ParticleSystemData * data, String * imagePath) = (void (*)(Particle * self, ParticleSystem * sys, float xVal, float yVal, float zVal, float xVelVal, float yVelVal, float zVelVal, int delayVal, ParticleSystemData * data, String * imagePath)) 0x8101f80;
#endif
#endif
