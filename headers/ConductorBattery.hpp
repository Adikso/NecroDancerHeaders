// Generated automatically. Do not edit!
#ifndef _ConductorBattery_
#define _ConductorBattery_
class Conductor;
class Entity;
class List42;
class String;
class WaterBall;
#include "Enemy.hpp"

class ConductorBattery : public Enemy  {
public:
    int batteryNum;
    Conductor * parent;
    int vibrateCounter;
    int origXOff;
    float vibrateOffset;
    int killCount;
    static List42 * * allBatteries;

    // Wrappers
    inline static ConductorBattery * GetBatteryAt(int xVal, int yVal) { return ptr::GetBatteryAt(xVal, yVal); }
    inline void Update() { ptr::Update(this); }
    inline bool _ImmuneToEarth() { return ptr::_ImmuneToEarth(); }
    inline bool _ImmuneToFear() { return ptr::_ImmuneToFear(); }
    inline void Die() { ptr::Die(this); }
    inline virtual void AddKills(int num) { ptr::AddKills(this, num); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline ConductorBattery * New(int xVal, int yVal, int bNum) { return ptr::New(this, xVal, yVal, bNum); }
    inline ConductorBattery * _new2() { return ptr::_new2(); }
    inline static void WaterBallDeath(WaterBall * enemy) { ptr::WaterBallDeath(enemy); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static ConductorBattery * (*GetBatteryAt)(int xVal, int yVal);
        static void (*Update)(ConductorBattery * self);
        static bool (*_ImmuneToEarth)();
        static bool (*_ImmuneToFear)();
        static void (*Die)(ConductorBattery * self);
        static void (*AddKills)(ConductorBattery * self, int num);
        static bool (*Hit)(ConductorBattery * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static ConductorBattery * (*New)(ConductorBattery * self, int xVal, int yVal, int bNum);
        static ConductorBattery * (*_new2)();
        static void (*WaterBallDeath)(WaterBall * enemy);
        static void (*_mark)();
    };
};

#ifdef _WIN32
inline List42 * * ConductorBattery::allBatteries = (List42* *) 0x8355dc;

inline ConductorBattery * (*ConductorBattery::ptr::GetBatteryAt)(int xVal, int yVal) = (ConductorBattery * (*)(int xVal, int yVal)) 0x631900;
inline void (*ConductorBattery::ptr::Update)(ConductorBattery * self) = (void (*)(ConductorBattery * self)) 0x631950;
inline bool (*ConductorBattery::ptr::_ImmuneToEarth)() = (bool (*)()) 0x0;
inline bool (*ConductorBattery::ptr::_ImmuneToFear)() = (bool (*)()) 0x0;
inline void (*ConductorBattery::ptr::Die)(ConductorBattery * self) = (void (*)(ConductorBattery * self)) 0x631a00;
inline void (*ConductorBattery::ptr::AddKills)(ConductorBattery * self, int num) = (void (*)(ConductorBattery * self, int num)) 0x631a30;
inline bool (*ConductorBattery::ptr::Hit)(ConductorBattery * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(ConductorBattery * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x631b60;
inline ConductorBattery * (*ConductorBattery::ptr::New)(ConductorBattery * self, int xVal, int yVal, int bNum) = (ConductorBattery * (*)(ConductorBattery * self, int xVal, int yVal, int bNum)) 0x631dc0;
inline ConductorBattery * (*ConductorBattery::ptr::_new2)() = (ConductorBattery * (*)()) 0x0;
inline void (*ConductorBattery::ptr::WaterBallDeath)(WaterBall * enemy) = (void (*)(WaterBall * enemy)) 0x631eb0;
inline void (*ConductorBattery::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__
inline List42 * * ConductorBattery::allBatteries = (List42* *) 0x856a390;

inline ConductorBattery * (*ConductorBattery::ptr::GetBatteryAt)(int xVal, int yVal) = (ConductorBattery * (*)(int xVal, int yVal)) 0x81bb250;
inline void (*ConductorBattery::ptr::Update)(ConductorBattery * self) = (void (*)(ConductorBattery * self)) 0x8383c20;
inline bool (*ConductorBattery::ptr::_ImmuneToEarth)() = (bool (*)()) 0x80757a0;
inline bool (*ConductorBattery::ptr::_ImmuneToFear)() = (bool (*)()) 0x80757b0;
inline void (*ConductorBattery::ptr::Die)(ConductorBattery * self) = (void (*)(ConductorBattery * self)) 0x83b6730;
inline void (*ConductorBattery::ptr::AddKills)(ConductorBattery * self, int num) = (void (*)(ConductorBattery * self, int num)) 0x83a31f0;
inline bool (*ConductorBattery::ptr::Hit)(ConductorBattery * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(ConductorBattery * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x83a3330;
inline ConductorBattery * (*ConductorBattery::ptr::New)(ConductorBattery * self, int xVal, int yVal, int bNum) = (ConductorBattery * (*)(ConductorBattery * self, int xVal, int yVal, int bNum)) 0x81bb7e0;
inline ConductorBattery * (*ConductorBattery::ptr::_new2)() = (ConductorBattery * (*)()) 0x81bb900;
inline void (*ConductorBattery::ptr::WaterBallDeath)(WaterBall * enemy) = (void (*)(WaterBall * enemy)) 0x81bb920;
inline void (*ConductorBattery::ptr::_mark)() = (void (*)()) 0x80b0b10;
#endif
#endif
