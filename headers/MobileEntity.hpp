// Generated automatically. Do not edit!
#ifndef _MobileEntity_
#define _MobileEntity_
#include "Entity.hpp"

class MobileEntity : public Entity  {
public:
    bool gotOutOfTar;
    int moveTween;
    int moveShadowTween;
    int slidingDir;
    bool isMassive;
    bool ignoreLiquids;
    bool wasKnockedBack;
    bool wasInWater;
    bool wasInDeepWater;
    bool wasInTar;
    int distancePerMovement;

    // Wrappers
    MobileEntity() {
        ptr::CSTR_MobileEntity(this);
    }

    inline virtual void Splash(bool destroyWater) { ptr::Splash(this, destroyWater); }
    inline virtual bool IsSlidingOnIce() { return ptr::IsSlidingOnIce(this); }
    inline MobileEntity * _New() { return ptr::_New(); }
    inline virtual bool IsStandingStill() { return ptr::IsStandingStill(this); }
    inline virtual bool IsStuckInLiquid() { return ptr::IsStuckInLiquid(this); }
    inline void Update() { ptr::Update(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static void (*Splash)(MobileEntity * self, bool destroyWater);
        static bool (*IsSlidingOnIce)(MobileEntity * self);
        static MobileEntity * (*_New)();
        static bool (*IsStandingStill)(MobileEntity * self);
        static bool (*IsStuckInLiquid)(MobileEntity * self);
        static void (*Update)(MobileEntity * self);
        static void (*_mark)();
        static void (*CSTR_MobileEntity)(MobileEntity * self);
    };
};

#ifdef _WIN32

void (*MobileEntity::ptr::Splash)(MobileEntity * self, bool destroyWater) = (void (*)(MobileEntity * self, bool destroyWater)) 0x4fd700;
bool (*MobileEntity::ptr::IsSlidingOnIce)(MobileEntity * self) = (bool (*)(MobileEntity * self)) 0x4fd730;
MobileEntity * (*MobileEntity::ptr::_New)() = (MobileEntity * (*)()) 0x0;
bool (*MobileEntity::ptr::IsStandingStill)(MobileEntity * self) = (bool (*)(MobileEntity * self)) 0x4fd740;
bool (*MobileEntity::ptr::IsStuckInLiquid)(MobileEntity * self) = (bool (*)(MobileEntity * self)) 0x4fd7c0;
void (*MobileEntity::ptr::Update)(MobileEntity * self) = (void (*)(MobileEntity * self)) 0x4fd830;
void (*MobileEntity::ptr::_mark)() = (void (*)()) 0x0;
void (*MobileEntity::ptr::CSTR_MobileEntity)(MobileEntity * self) = (void (*)(MobileEntity * self)) 0x4fd570;
#endif

#ifdef __linux__

void (*MobileEntity::ptr::Splash)(MobileEntity * self, bool destroyWater) = (void (*)(MobileEntity * self, bool destroyWater)) 0x837bd40;
bool (*MobileEntity::ptr::IsSlidingOnIce)(MobileEntity * self) = (bool (*)(MobileEntity * self)) 0x806e430;
MobileEntity * (*MobileEntity::ptr::_New)() = (MobileEntity * (*)()) 0x813fdf0;
bool (*MobileEntity::ptr::IsStandingStill)(MobileEntity * self) = (bool (*)(MobileEntity * self)) 0x807e0f0;
bool (*MobileEntity::ptr::IsStuckInLiquid)(MobileEntity * self) = (bool (*)(MobileEntity * self)) 0x8131570;
void (*MobileEntity::ptr::Update)(MobileEntity * self) = (void (*)(MobileEntity * self)) 0x837ce20;
void (*MobileEntity::ptr::_mark)() = (void (*)()) 0x80a5330;
void (*MobileEntity::ptr::CSTR_MobileEntity)(MobileEntity * self) = (void (*)(MobileEntity * self)) 0x813fd70;
#endif
#endif
