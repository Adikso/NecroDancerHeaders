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
ParticleSystemData * * ParticleSystemData::WATER_SPLASH_OUT = (ParticleSystemData* *) 0x835a80;
ParticleSystemData * * ParticleSystemData::CONFUSION = (ParticleSystemData* *) 0x8358c0;
ParticleSystemData * * ParticleSystemData::TAR_SPLASH_OUT = (ParticleSystemData* *) 0x835a7c;
ParticleSystemData * * ParticleSystemData::MONSTER_DEAD = (ParticleSystemData* *) 0x8356e0;
ParticleSystemData * * ParticleSystemData::MONSTER_HIT = (ParticleSystemData* *) 0x8356b4;
ParticleSystemData * * ParticleSystemData::HEAL_SPELL = (ParticleSystemData* *) 0x8358a4;
ParticleSystemData * * ParticleSystemData::BLOOD = (ParticleSystemData* *) 0x83589c;
ParticleSystemData * * ParticleSystemData::BLOOD_SACRIFICE = (ParticleSystemData* *) 0x8356f0;
ParticleSystemData * * ParticleSystemData::DIG = (ParticleSystemData* *) 0x835624;
ParticleSystemData * * ParticleSystemData::DIG_ZONE4 = (ParticleSystemData* *) 0x835620;
ParticleSystemData * * ParticleSystemData::LORD_CROWN = (ParticleSystemData* *) 0x83585c;
ParticleSystemData * * ParticleSystemData::MOLE_DIG = (ParticleSystemData* *) 0x8355f8;
ParticleSystemData * * ParticleSystemData::WATER_SPLASH_IN = (ParticleSystemData* *) 0x8358bc;
ParticleSystemData * * ParticleSystemData::TAR_SPLASH_IN = (ParticleSystemData* *) 0x8358b8;
ParticleSystemData * * ParticleSystemData::SKELETON_HEAD = (ParticleSystemData* *) 0x8355f4;
ParticleSystemData * * ParticleSystemData::SKELETON_SHIELD = (ParticleSystemData* *) 0x8355f0;
ParticleSystemData * * ParticleSystemData::SKELETON_HELMET = (ParticleSystemData* *) 0x8355ec;
ParticleSystemData * * ParticleSystemData::MUSHROOM_SPORES = (ParticleSystemData* *) 0x8355e8;
ParticleSystemData * * ParticleSystemData::MOLE_APPEAR = (ParticleSystemData* *) 0x8355e4;
ParticleSystemData * * ParticleSystemData::GEYSER = (ParticleSystemData* *) 0x835618;
ParticleSystemData * * ParticleSystemData::OCTOBOSS_SPLASH = (ParticleSystemData* *) 0x8355e0;

ParticleSystemData * (*ParticleSystemData::ptr::New)(ParticleSystemData * self, String * name, int num, float r, float h, float spread, float expl, float g, float bounce, bool world, int fd, int ft, bool fg, float xb, float yb, int minD, int maxD, float minS, float maxS, float minO, float maxO) = (ParticleSystemData * (*)(ParticleSystemData * self, String * name, int num, float r, float h, float spread, float expl, float g, float bounce, bool world, int fd, int ft, bool fg, float xb, float yb, int minD, int maxD, float minS, float maxS, float minO, float maxO)) 0x5f8630;
ParticleSystemData * (*ParticleSystemData::ptr::_new2)() = (ParticleSystemData * (*)()) 0x0;
void (*ParticleSystemData::ptr::Init)() = (void (*)()) 0x5f8760;
void (*ParticleSystemData::ptr::_mark)() = (void (*)()) 0x0;
void (*ParticleSystemData::ptr::CSTR_ParticleSystemData)(ParticleSystemData * self) = (void (*)(ParticleSystemData * self)) 0x5f8440;
#endif

#ifdef __linux__
ParticleSystemData * * ParticleSystemData::WATER_SPLASH_OUT = (ParticleSystemData* *) 0x856a43c;
ParticleSystemData * * ParticleSystemData::CONFUSION = (ParticleSystemData* *) 0x856a438;
ParticleSystemData * * ParticleSystemData::TAR_SPLASH_OUT = (ParticleSystemData* *) 0x856a434;
ParticleSystemData * * ParticleSystemData::MONSTER_DEAD = (ParticleSystemData* *) 0x856a430;
ParticleSystemData * * ParticleSystemData::MONSTER_HIT = (ParticleSystemData* *) 0x856a42c;
ParticleSystemData * * ParticleSystemData::HEAL_SPELL = (ParticleSystemData* *) 0x856a428;
ParticleSystemData * * ParticleSystemData::BLOOD = (ParticleSystemData* *) 0x856a424;
ParticleSystemData * * ParticleSystemData::BLOOD_SACRIFICE = (ParticleSystemData* *) 0x856a420;
ParticleSystemData * * ParticleSystemData::DIG = (ParticleSystemData* *) 0x856a41c;
ParticleSystemData * * ParticleSystemData::DIG_ZONE4 = (ParticleSystemData* *) 0x856a418;
ParticleSystemData * * ParticleSystemData::LORD_CROWN = (ParticleSystemData* *) 0x856a414;
ParticleSystemData * * ParticleSystemData::MOLE_DIG = (ParticleSystemData* *) 0x856a410;
ParticleSystemData * * ParticleSystemData::WATER_SPLASH_IN = (ParticleSystemData* *) 0x856a40c;
ParticleSystemData * * ParticleSystemData::TAR_SPLASH_IN = (ParticleSystemData* *) 0x856a408;
ParticleSystemData * * ParticleSystemData::SKELETON_HEAD = (ParticleSystemData* *) 0x856a404;
ParticleSystemData * * ParticleSystemData::SKELETON_SHIELD = (ParticleSystemData* *) 0x856a400;
ParticleSystemData * * ParticleSystemData::SKELETON_HELMET = (ParticleSystemData* *) 0x856a3fc;
ParticleSystemData * * ParticleSystemData::MUSHROOM_SPORES = (ParticleSystemData* *) 0x856a3f8;
ParticleSystemData * * ParticleSystemData::MOLE_APPEAR = (ParticleSystemData* *) 0x856a3f4;
ParticleSystemData * * ParticleSystemData::GEYSER = (ParticleSystemData* *) 0x856a3f0;
ParticleSystemData * * ParticleSystemData::OCTOBOSS_SPLASH = (ParticleSystemData* *) 0x856a3ec;

ParticleSystemData * (*ParticleSystemData::ptr::New)(ParticleSystemData * self, String * name, int num, float r, float h, float spread, float expl, float g, float bounce, bool world, int fd, int ft, bool fg, float xb, float yb, int minD, int maxD, float minS, float maxS, float minO, float maxO) = (ParticleSystemData * (*)(ParticleSystemData * self, String * name, int num, float r, float h, float spread, float expl, float g, float bounce, bool world, int fd, int ft, bool fg, float xb, float yb, int minD, int maxD, float minS, float maxS, float minO, float maxO)) 0x81a0a60;
ParticleSystemData * (*ParticleSystemData::ptr::_new2)() = (ParticleSystemData * (*)()) 0x81a0b40;
void (*ParticleSystemData::ptr::Init)() = (void (*)()) 0x81a0b50;
void (*ParticleSystemData::ptr::_mark)() = (void (*)()) 0x8073910;
void (*ParticleSystemData::ptr::CSTR_ParticleSystemData)(ParticleSystemData * self) = (void (*)(ParticleSystemData * self)) 0x81a09c0;
#endif
#endif
