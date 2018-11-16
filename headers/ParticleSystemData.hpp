// Generated automatically. Do not edit!
#ifndef _ParticleSystemData_
#define _ParticleSystemData_
class String;
#include "Object.hpp"

class ParticleSystemData : public Object  {
public:
    float xVelBias;
    int numParticles;
    float radius;
    float spreadness;
    float explosiveness;
    bool inWorld;
    float height;
    float yVelBias;
    int minDelay;
    int maxDelay;
    float gravity;
    float bounciness;
    int fadeDelay;
    int fadeTime;
    bool fadeOnGround;
    String * imageName;
    float minScale;
    float maxScale;
    float minOpacity;
    float maxOpacity;
    static ParticleSystemData * * WATER_SPLASH_OUT;
    static ParticleSystemData * * CONFUSION;
    static ParticleSystemData * * TAR_SPLASH_OUT;
    static ParticleSystemData * * MONSTER_DEAD;
    static ParticleSystemData * * MONSTER_HIT;
    static ParticleSystemData * * HEAL_SPELL;
    static ParticleSystemData * * BLOOD;
    static ParticleSystemData * * BLOOD_SACRIFICE;
    static ParticleSystemData * * DIG;
    static ParticleSystemData * * DIG_ZONE4;
    static ParticleSystemData * * LORD_CROWN;
    static ParticleSystemData * * MOLE_DIG;
    static ParticleSystemData * * WATER_SPLASH_IN;
    static ParticleSystemData * * TAR_SPLASH_IN;
    static ParticleSystemData * * SKELETON_HEAD;
    static ParticleSystemData * * SKELETON_SHIELD;
    static ParticleSystemData * * SKELETON_HELMET;
    static ParticleSystemData * * MUSHROOM_SPORES;
    static ParticleSystemData * * MOLE_APPEAR;
    static ParticleSystemData * * GEYSER;
    static ParticleSystemData * * OCTOBOSS_SPLASH;

    // Wrappers
    ParticleSystemData(String * name, int num, float r, float h, float spread, float expl, float g, float bounce, bool world, int fd, int ft, bool fg, float xb, float yb, int minD, int maxD, float minS, float maxS, float minO, float maxO) {
        ptr::CSTR_ParticleSystemData(this);
        ptr::New(this, name, num, r, h, spread, expl, g, bounce, world, fd, ft, fg, xb, yb, minD, maxD, minS, maxS, minO, maxO);
    }

    inline ParticleSystemData * New(String * name, int num, float r, float h, float spread, float expl, float g, float bounce, bool world, int fd, int ft, bool fg, float xb, float yb, int minD, int maxD, float minS, float maxS, float minO, float maxO) { return ptr::New(this, name, num, r, h, spread, expl, g, bounce, world, fd, ft, fg, xb, yb, minD, maxD, minS, maxS, minO, maxO); }
    inline ParticleSystemData * _new2() { return ptr::_new2(); }
    inline static void Init() { ptr::Init(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static ParticleSystemData * (*New)(ParticleSystemData * self, String * name, int num, float r, float h, float spread, float expl, float g, float bounce, bool world, int fd, int ft, bool fg, float xb, float yb, int minD, int maxD, float minS, float maxS, float minO, float maxO);
        static ParticleSystemData * (*_new2)();
        static void (*Init)();
        static void (*_mark)();
        static void (*CSTR_ParticleSystemData)(ParticleSystemData * self);
    };
};

#ifdef _WIN32
inline ParticleSystemData * * ParticleSystemData::WATER_SPLASH_OUT = (ParticleSystemData* *) 0x835a80;
inline ParticleSystemData * * ParticleSystemData::CONFUSION = (ParticleSystemData* *) 0x8358c0;
inline ParticleSystemData * * ParticleSystemData::TAR_SPLASH_OUT = (ParticleSystemData* *) 0x835a7c;
inline ParticleSystemData * * ParticleSystemData::MONSTER_DEAD = (ParticleSystemData* *) 0x8356e0;
inline ParticleSystemData * * ParticleSystemData::MONSTER_HIT = (ParticleSystemData* *) 0x8356b4;
inline ParticleSystemData * * ParticleSystemData::HEAL_SPELL = (ParticleSystemData* *) 0x8358a4;
inline ParticleSystemData * * ParticleSystemData::BLOOD = (ParticleSystemData* *) 0x83589c;
inline ParticleSystemData * * ParticleSystemData::BLOOD_SACRIFICE = (ParticleSystemData* *) 0x8356f0;
inline ParticleSystemData * * ParticleSystemData::DIG = (ParticleSystemData* *) 0x835624;
inline ParticleSystemData * * ParticleSystemData::DIG_ZONE4 = (ParticleSystemData* *) 0x835620;
inline ParticleSystemData * * ParticleSystemData::LORD_CROWN = (ParticleSystemData* *) 0x83585c;
inline ParticleSystemData * * ParticleSystemData::MOLE_DIG = (ParticleSystemData* *) 0x8355f8;
inline ParticleSystemData * * ParticleSystemData::WATER_SPLASH_IN = (ParticleSystemData* *) 0x8358bc;
inline ParticleSystemData * * ParticleSystemData::TAR_SPLASH_IN = (ParticleSystemData* *) 0x8358b8;
inline ParticleSystemData * * ParticleSystemData::SKELETON_HEAD = (ParticleSystemData* *) 0x8355f4;
inline ParticleSystemData * * ParticleSystemData::SKELETON_SHIELD = (ParticleSystemData* *) 0x8355f0;
inline ParticleSystemData * * ParticleSystemData::SKELETON_HELMET = (ParticleSystemData* *) 0x8355ec;
inline ParticleSystemData * * ParticleSystemData::MUSHROOM_SPORES = (ParticleSystemData* *) 0x8355e8;
inline ParticleSystemData * * ParticleSystemData::MOLE_APPEAR = (ParticleSystemData* *) 0x8355e4;
inline ParticleSystemData * * ParticleSystemData::GEYSER = (ParticleSystemData* *) 0x835618;
inline ParticleSystemData * * ParticleSystemData::OCTOBOSS_SPLASH = (ParticleSystemData* *) 0x8355e0;

inline ParticleSystemData * (*ParticleSystemData::ptr::New)(ParticleSystemData * self, String * name, int num, float r, float h, float spread, float expl, float g, float bounce, bool world, int fd, int ft, bool fg, float xb, float yb, int minD, int maxD, float minS, float maxS, float minO, float maxO) = (ParticleSystemData * (*)(ParticleSystemData * self, String * name, int num, float r, float h, float spread, float expl, float g, float bounce, bool world, int fd, int ft, bool fg, float xb, float yb, int minD, int maxD, float minS, float maxS, float minO, float maxO)) 0x5f8630;
inline ParticleSystemData * (*ParticleSystemData::ptr::_new2)() = (ParticleSystemData * (*)()) 0x0;
inline void (*ParticleSystemData::ptr::Init)() = (void (*)()) 0x5f8760;
inline void (*ParticleSystemData::ptr::_mark)() = (void (*)()) 0x0;
inline void (*ParticleSystemData::ptr::CSTR_ParticleSystemData)(ParticleSystemData * self) = (void (*)(ParticleSystemData * self)) 0x5f8440;
#endif

#ifdef __linux__
inline ParticleSystemData * * ParticleSystemData::WATER_SPLASH_OUT = (ParticleSystemData* *) 0x856a43c;
inline ParticleSystemData * * ParticleSystemData::CONFUSION = (ParticleSystemData* *) 0x856a438;
inline ParticleSystemData * * ParticleSystemData::TAR_SPLASH_OUT = (ParticleSystemData* *) 0x856a434;
inline ParticleSystemData * * ParticleSystemData::MONSTER_DEAD = (ParticleSystemData* *) 0x856a430;
inline ParticleSystemData * * ParticleSystemData::MONSTER_HIT = (ParticleSystemData* *) 0x856a42c;
inline ParticleSystemData * * ParticleSystemData::HEAL_SPELL = (ParticleSystemData* *) 0x856a428;
inline ParticleSystemData * * ParticleSystemData::BLOOD = (ParticleSystemData* *) 0x856a424;
inline ParticleSystemData * * ParticleSystemData::BLOOD_SACRIFICE = (ParticleSystemData* *) 0x856a420;
inline ParticleSystemData * * ParticleSystemData::DIG = (ParticleSystemData* *) 0x856a41c;
inline ParticleSystemData * * ParticleSystemData::DIG_ZONE4 = (ParticleSystemData* *) 0x856a418;
inline ParticleSystemData * * ParticleSystemData::LORD_CROWN = (ParticleSystemData* *) 0x856a414;
inline ParticleSystemData * * ParticleSystemData::MOLE_DIG = (ParticleSystemData* *) 0x856a410;
inline ParticleSystemData * * ParticleSystemData::WATER_SPLASH_IN = (ParticleSystemData* *) 0x856a40c;
inline ParticleSystemData * * ParticleSystemData::TAR_SPLASH_IN = (ParticleSystemData* *) 0x856a408;
inline ParticleSystemData * * ParticleSystemData::SKELETON_HEAD = (ParticleSystemData* *) 0x856a404;
inline ParticleSystemData * * ParticleSystemData::SKELETON_SHIELD = (ParticleSystemData* *) 0x856a400;
inline ParticleSystemData * * ParticleSystemData::SKELETON_HELMET = (ParticleSystemData* *) 0x856a3fc;
inline ParticleSystemData * * ParticleSystemData::MUSHROOM_SPORES = (ParticleSystemData* *) 0x856a3f8;
inline ParticleSystemData * * ParticleSystemData::MOLE_APPEAR = (ParticleSystemData* *) 0x856a3f4;
inline ParticleSystemData * * ParticleSystemData::GEYSER = (ParticleSystemData* *) 0x856a3f0;
inline ParticleSystemData * * ParticleSystemData::OCTOBOSS_SPLASH = (ParticleSystemData* *) 0x856a3ec;

inline ParticleSystemData * (*ParticleSystemData::ptr::New)(ParticleSystemData * self, String * name, int num, float r, float h, float spread, float expl, float g, float bounce, bool world, int fd, int ft, bool fg, float xb, float yb, int minD, int maxD, float minS, float maxS, float minO, float maxO) = (ParticleSystemData * (*)(ParticleSystemData * self, String * name, int num, float r, float h, float spread, float expl, float g, float bounce, bool world, int fd, int ft, bool fg, float xb, float yb, int minD, int maxD, float minS, float maxS, float minO, float maxO)) 0x81a0a60;
inline ParticleSystemData * (*ParticleSystemData::ptr::_new2)() = (ParticleSystemData * (*)()) 0x81a0b40;
inline void (*ParticleSystemData::ptr::Init)() = (void (*)()) 0x81a0b50;
inline void (*ParticleSystemData::ptr::_mark)() = (void (*)()) 0x8073910;
inline void (*ParticleSystemData::ptr::CSTR_ParticleSystemData)(ParticleSystemData * self) = (void (*)(ParticleSystemData * self)) 0x81a09c0;
#endif
#endif
