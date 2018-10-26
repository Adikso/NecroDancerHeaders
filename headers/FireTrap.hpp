// Generated automatically. Do not edit!
#ifndef _FireTrap_
#define _FireTrap_
class Entity;
class String;
#include "Trap.hpp"

class FireTrap : public Trap  {
public:
    int fireDir;
    bool manual;
    bool isReady;
    int vibrateCounter;
    float vibrateOffset;
    int shootBeats;
    int retractBeats;

    // Wrappers
    FireTrap(int xVal, int yVal, int d, bool m) {
        ptr::CSTR_FireTrap(this);
        ptr::New(this, xVal, yVal, d, m);
    }

    inline FireTrap * New(int xVal, int yVal, int d, bool m) { return ptr::New(this, xVal, yVal, d, m); }
    inline FireTrap * _new2() { return ptr::_new2(); }
    inline virtual int GetFrameToShow() { return ptr::GetFrameToShow(this); }
    inline void Update() { ptr::Update(this); }
    inline virtual void DoShot() { ptr::DoShot(this); }
    inline virtual bool CheckTriggerRadius(Entity * ent) { return ptr::CheckTriggerRadius(this, ent); }
    inline virtual void Ready() { ptr::Ready(this); }
    inline void Trigger(Entity * ent) { ptr::Trigger(this, ent); }
    inline void Move() { ptr::Move(this); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline virtual void Unready() { ptr::Unready(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static FireTrap * (*New)(FireTrap * self, int xVal, int yVal, int d, bool m);
        static FireTrap * (*_new2)();
        static int (*GetFrameToShow)(FireTrap * self);
        static void (*Update)(FireTrap * self);
        static void (*DoShot)(FireTrap * self);
        static bool (*CheckTriggerRadius)(FireTrap * self, Entity * ent);
        static void (*Ready)(FireTrap * self);
        static void (*Trigger)(FireTrap * self, Entity * ent);
        static void (*Move)(FireTrap * self);
        static bool (*Hit)(FireTrap * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*Unready)(FireTrap * self);
        static void (*_mark)();
        static void (*CSTR_FireTrap)(FireTrap * self);
    };
};

#ifdef _WIN32

FireTrap * (*FireTrap::ptr::New)(FireTrap * self, int xVal, int yVal, int d, bool m) = (FireTrap * (*)(FireTrap * self, int xVal, int yVal, int d, bool m)) 0x5dac20;
FireTrap * (*FireTrap::ptr::_new2)() = (FireTrap * (*)()) 0x0;
int (*FireTrap::ptr::GetFrameToShow)(FireTrap * self) = (int (*)(FireTrap * self)) 0x5dadb0;
void (*FireTrap::ptr::Update)(FireTrap * self) = (void (*)(FireTrap * self)) 0x5dadf0;
void (*FireTrap::ptr::DoShot)(FireTrap * self) = (void (*)(FireTrap * self)) 0x5dae90;
bool (*FireTrap::ptr::CheckTriggerRadius)(FireTrap * self, Entity * ent) = (bool (*)(FireTrap * self, Entity * ent)) 0x5daf90;
void (*FireTrap::ptr::Ready)(FireTrap * self) = (void (*)(FireTrap * self)) 0x5db060;
void (*FireTrap::ptr::Trigger)(FireTrap * self, Entity * ent) = (void (*)(FireTrap * self, Entity * ent)) 0x5db070;
void (*FireTrap::ptr::Move)(FireTrap * self) = (void (*)(FireTrap * self)) 0x5db0a0;
bool (*FireTrap::ptr::Hit)(FireTrap * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(FireTrap * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x5db580;
void (*FireTrap::ptr::Unready)(FireTrap * self) = (void (*)(FireTrap * self)) 0x5db620;
void (*FireTrap::ptr::_mark)() = (void (*)()) 0x0;
void (*FireTrap::ptr::CSTR_FireTrap)(FireTrap * self) = (void (*)(FireTrap * self)) 0x5dab90;
#endif

#ifdef __linux__

FireTrap * (*FireTrap::ptr::New)(FireTrap * self, int xVal, int yVal, int d, bool m) = (FireTrap * (*)(FireTrap * self, int xVal, int yVal, int d, bool m)) 0x81940e0;
FireTrap * (*FireTrap::ptr::_new2)() = (FireTrap * (*)()) 0x81942a0;
int (*FireTrap::ptr::GetFrameToShow)(FireTrap * self) = (int (*)(FireTrap * self)) 0x8071e70;
void (*FireTrap::ptr::Update)(FireTrap * self) = (void (*)(FireTrap * self)) 0x812efa0;
void (*FireTrap::ptr::DoShot)(FireTrap * self) = (void (*)(FireTrap * self)) 0x83c8890;
bool (*FireTrap::ptr::CheckTriggerRadius)(FireTrap * self, Entity * ent) = (bool (*)(FireTrap * self, Entity * ent)) 0x812e3c0;
void (*FireTrap::ptr::Ready)(FireTrap * self) = (void (*)(FireTrap * self)) 0x8071ee0;
void (*FireTrap::ptr::Trigger)(FireTrap * self, Entity * ent) = (void (*)(FireTrap * self, Entity * ent)) 0x809a930;
void (*FireTrap::ptr::Move)(FireTrap * self) = (void (*)(FireTrap * self)) 0x825fd40;
bool (*FireTrap::ptr::Hit)(FireTrap * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(FireTrap * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x80d7520;
void (*FireTrap::ptr::Unready)(FireTrap * self) = (void (*)(FireTrap * self)) 0x8071ef0;
void (*FireTrap::ptr::_mark)() = (void (*)()) 0x80a5e50;
void (*FireTrap::ptr::CSTR_FireTrap)(FireTrap * self) = (void (*)(FireTrap * self)) 0x8194030;
#endif
#endif
