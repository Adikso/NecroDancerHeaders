// Generated automatically. Do not edit!
#ifndef _ParticleSystem_
#define _ParticleSystem_
class List28;
class List29;
class ParticleSystemData;
class String;
#include "Tweenable.hpp"

class ParticleSystem : public Tweenable  {
public:
    bool visible;
    bool active;
    int x;
    int y;
    bool isOvular;
    List28 * particles;
    int zOff;
    static List28 * * particlePool;
    static List29 * * systems;

    // Wrappers
    ParticleSystem(int xVal, int yVal, ParticleSystemData * data, int dir, String * imagePath) {
        ptr::CSTR_ParticleSystem(this);
        ptr::New(this, xVal, yVal, data, dir, imagePath);
    }

    inline virtual void InitOvularParticles() { ptr::InitOvularParticles(this); }
    inline ParticleSystem * New(int xVal, int yVal, ParticleSystemData * data, int dir, String * imagePath) { return ptr::New(this, xVal, yVal, data, dir, imagePath); }
    inline ParticleSystem * _new2() { return ptr::_new2(); }
    inline static void _Clear() { ptr::_Clear(); }
    inline static void Init() { ptr::Init(); }
    inline virtual void Update() { ptr::Update(this); }
    inline static void UpdateAll() { ptr::UpdateAll(); }
    inline static void Render() { ptr::Render(); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static void (*InitOvularParticles)(ParticleSystem * self);
        static ParticleSystem * (*New)(ParticleSystem * self, int xVal, int yVal, ParticleSystemData * data, int dir, String * imagePath);
        static ParticleSystem * (*_new2)();
        static void (*_Clear)();
        static void (*Init)();
        static void (*Update)(ParticleSystem * self);
        static void (*UpdateAll)();
        static void (*Render)();
        static void (*mark)(ParticleSystem * self);
        static void (*CSTR_ParticleSystem)(ParticleSystem * self);
    };
};

#ifdef _WIN32
inline List28 * * ParticleSystem::particlePool = (List28* *) 0x8356ec;
inline List29 * * ParticleSystem::systems = (List29* *) 0x8356e8;

inline void (*ParticleSystem::ptr::InitOvularParticles)(ParticleSystem * self) = (void (*)(ParticleSystem * self)) 0x57e8b0;
inline ParticleSystem * (*ParticleSystem::ptr::New)(ParticleSystem * self, int xVal, int yVal, ParticleSystemData * data, int dir, String * imagePath) = (ParticleSystem * (*)(ParticleSystem * self, int xVal, int yVal, ParticleSystemData * data, int dir, String * imagePath)) 0x57e930;
inline ParticleSystem * (*ParticleSystem::ptr::_new2)() = (ParticleSystem * (*)()) 0x0;
inline void (*ParticleSystem::ptr::_Clear)() = (void (*)()) 0x0;
inline void (*ParticleSystem::ptr::Init)() = (void (*)()) 0x57edc0;
inline void (*ParticleSystem::ptr::Update)(ParticleSystem * self) = (void (*)(ParticleSystem * self)) 0x57ee50;
inline void (*ParticleSystem::ptr::UpdateAll)() = (void (*)()) 0x57eee0;
inline void (*ParticleSystem::ptr::Render)() = (void (*)()) 0x57ef70;
inline void (*ParticleSystem::ptr::mark)(ParticleSystem * self) = (void (*)(ParticleSystem * self)) 0x57f0d0;
inline void (*ParticleSystem::ptr::CSTR_ParticleSystem)(ParticleSystem * self) = (void (*)(ParticleSystem * self)) 0x57e810;
#endif

#ifdef __linux__
inline List28 * * ParticleSystem::particlePool = (List28* *) 0x856a66c;
inline List29 * * ParticleSystem::systems = (List29* *) 0x856a668;

inline void (*ParticleSystem::ptr::InitOvularParticles)(ParticleSystem * self) = (void (*)(ParticleSystem * self)) 0x806ff60;
inline ParticleSystem * (*ParticleSystem::ptr::New)(ParticleSystem * self, int xVal, int yVal, ParticleSystemData * data, int dir, String * imagePath) = (ParticleSystem * (*)(ParticleSystem * self, int xVal, int yVal, ParticleSystemData * data, int dir, String * imagePath)) 0x81587d0;
inline ParticleSystem * (*ParticleSystem::ptr::_new2)() = (ParticleSystem * (*)()) 0x8158d60;
inline void (*ParticleSystem::ptr::_Clear)() = (void (*)()) 0x8158d70;
inline void (*ParticleSystem::ptr::Init)() = (void (*)()) 0x81a33f0;
inline void (*ParticleSystem::ptr::Update)(ParticleSystem * self) = (void (*)(ParticleSystem * self)) 0x807e870;
inline void (*ParticleSystem::ptr::UpdateAll)() = (void (*)()) 0x8158d90;
inline void (*ParticleSystem::ptr::Render)() = (void (*)()) 0x8158e30;
inline void (*ParticleSystem::ptr::mark)(ParticleSystem * self) = (void (*)(ParticleSystem * self)) 0x8084c70;
inline void (*ParticleSystem::ptr::CSTR_ParticleSystem)(ParticleSystem * self) = (void (*)(ParticleSystem * self)) 0x81a3b20;
#endif
#endif
