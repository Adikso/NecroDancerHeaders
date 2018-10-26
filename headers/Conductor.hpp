// Generated automatically. Do not edit!
#ifndef _Conductor_
#define _Conductor_
class ConductorBattery;
class Entity;
class List26;
class List49;
class List56;
class Point;
class String;
#include "Enemy.hpp"

class Conductor : public Enemy  {
public:
    int phase;
    int origXOff;
    List49 * fireTraps;
    int nprops;
    int cycleCounter;
    List56 * pulses;
    int shouldSummonWaterBall;
    bool muteFirstSummon;
    int vibrateCounter;
    float vibrateOffset;
    int flashCounter;
    List26 * angrySoundsPlayed;
    static Conductor * * theConductor;

    // Wrappers
    Conductor(int xVal, int yVal) {
        ptr::CSTR_Conductor(this);
        ptr::New(this, xVal, yVal);
    }

    inline Conductor * New(int xVal, int yVal) { return ptr::New(this, xVal, yVal); }
    inline Conductor * _new2() { return ptr::_new2(); }
    inline virtual void AddProp(int propX, int propY, int propType) { ptr::AddProp(this, propX, propY, propType); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline virtual void SpawnEnemy(int spawnType, int xVal, int yVal) { ptr::SpawnEnemy(this, spawnType, xVal, yVal); }
    inline virtual int GetNextSpawnZone() { return ptr::GetNextSpawnZone(this); }
    inline virtual void SpawnEnemy2(int spawnType) { ptr::SpawnEnemy2(this, spawnType); }
    inline virtual void SpawnEnemy3() { ptr::SpawnEnemy3(this); }
    inline virtual void SpawnMinibosses(int propNum) { ptr::SpawnMinibosses(this, propNum); }
    inline virtual void CastSpell(ConductorBattery * b) { ptr::CastSpell(this, b); }
    inline virtual void DoWarningZap(bool large) { ptr::DoWarningZap(this, large); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void MoveFail() { ptr::MoveFail(this); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline static void ClearWire() { ptr::ClearWire(); }
    inline void Die() { ptr::Die(this); }
    inline bool _ImmuneToFear() { return ptr::_ImmuneToFear(); }
    inline void _Knockback(int arg1) { ptr::_Knockback(this, arg1); }
    inline void Update() { ptr::Update(this); }
    inline virtual void RemoveBatteryWire(int propX, int propY) { ptr::RemoveBatteryWire(this, propX, propY); }
    inline virtual void OnPropHit(int propNum) { ptr::OnPropHit(this, propNum); }
    inline virtual void BeginPhase2() { ptr::BeginPhase2(this); }
    inline virtual void RemovePropWire(int propX, int propY, int propType) { ptr::RemovePropWire(this, propX, propY, propType); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static Conductor * (*New)(Conductor * self, int xVal, int yVal);
        static Conductor * (*_new2)();
        static void (*AddProp)(Conductor * self, int propX, int propY, int propType);
        static Point * (*GetMovementDirection)(Conductor * self);
        static void (*SpawnEnemy)(Conductor * self, int spawnType, int xVal, int yVal);
        static int (*GetNextSpawnZone)(Conductor * self);
        static void (*SpawnEnemy2)(Conductor * self, int spawnType);
        static void (*SpawnEnemy3)(Conductor * self);
        static void (*SpawnMinibosses)(Conductor * self, int propNum);
        static void (*CastSpell)(Conductor * self, ConductorBattery * b);
        static void (*DoWarningZap)(Conductor * self, bool large);
        static void (*MoveSucceed)(Conductor * self, bool hitPlayer, bool moveDelayed);
        static void (*MoveFail)(Conductor * self);
        static bool (*Hit)(Conductor * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*ClearWire)();
        static void (*Die)(Conductor * self);
        static bool (*_ImmuneToFear)();
        static void (*_Knockback)(Conductor * self, int arg1);
        static void (*Update)(Conductor * self);
        static void (*RemoveBatteryWire)(Conductor * self, int propX, int propY);
        static void (*OnPropHit)(Conductor * self, int propNum);
        static void (*BeginPhase2)(Conductor * self);
        static void (*RemovePropWire)(Conductor * self, int propX, int propY, int propType);
        static void (*mark)(Conductor * self);
        static void (*CSTR_Conductor)(Conductor * self);
    };
};

#ifdef _WIN32
Conductor * * Conductor::theConductor = (Conductor* *) 0x8358a8;

Conductor * (*Conductor::ptr::New)(Conductor * self, int xVal, int yVal) = (Conductor * (*)(Conductor * self, int xVal, int yVal)) 0x5fd330;
Conductor * (*Conductor::ptr::_new2)() = (Conductor * (*)()) 0x0;
void (*Conductor::ptr::AddProp)(Conductor * self, int propX, int propY, int propType) = (void (*)(Conductor * self, int propX, int propY, int propType)) 0x5fd7e0;
Point * (*Conductor::ptr::GetMovementDirection)(Conductor * self) = (Point * (*)(Conductor * self)) 0x5fda80;
void (*Conductor::ptr::SpawnEnemy)(Conductor * self, int spawnType, int xVal, int yVal) = (void (*)(Conductor * self, int spawnType, int xVal, int yVal)) 0x5fe040;
int (*Conductor::ptr::GetNextSpawnZone)(Conductor * self) = (int (*)(Conductor * self)) 0x5fe280;
void (*Conductor::ptr::SpawnEnemy2)(Conductor * self, int spawnType) = (void (*)(Conductor * self, int spawnType)) 0x5fe290;
void (*Conductor::ptr::SpawnEnemy3)(Conductor * self) = (void (*)(Conductor * self)) 0x5fe7c0;
void (*Conductor::ptr::SpawnMinibosses)(Conductor * self, int propNum) = (void (*)(Conductor * self, int propNum)) 0x5febe0;
void (*Conductor::ptr::CastSpell)(Conductor * self, ConductorBattery * b) = (void (*)(Conductor * self, ConductorBattery * b)) 0x5fed00;
void (*Conductor::ptr::DoWarningZap)(Conductor * self, bool large) = (void (*)(Conductor * self, bool large)) 0x5ff0b0;
void (*Conductor::ptr::MoveSucceed)(Conductor * self, bool hitPlayer, bool moveDelayed) = (void (*)(Conductor * self, bool hitPlayer, bool moveDelayed)) 0x5ff2c0;
void (*Conductor::ptr::MoveFail)(Conductor * self) = (void (*)(Conductor * self)) 0x5ff8e0;
bool (*Conductor::ptr::Hit)(Conductor * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Conductor * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x5ff900;
void (*Conductor::ptr::ClearWire)() = (void (*)()) 0x5ffab0;
void (*Conductor::ptr::Die)(Conductor * self) = (void (*)(Conductor * self)) 0x5ffce0;
bool (*Conductor::ptr::_ImmuneToFear)() = (bool (*)()) 0x0;
void (*Conductor::ptr::_Knockback)(Conductor * self, int arg1) = (void (*)(Conductor * self, int arg1)) 0x0;
void (*Conductor::ptr::Update)(Conductor * self) = (void (*)(Conductor * self)) 0x5ffd10;
void (*Conductor::ptr::RemoveBatteryWire)(Conductor * self, int propX, int propY) = (void (*)(Conductor * self, int propX, int propY)) 0x5ffea0;
void (*Conductor::ptr::OnPropHit)(Conductor * self, int propNum) = (void (*)(Conductor * self, int propNum)) 0x600040;
void (*Conductor::ptr::BeginPhase2)(Conductor * self) = (void (*)(Conductor * self)) 0x6002e0;
void (*Conductor::ptr::RemovePropWire)(Conductor * self, int propX, int propY, int propType) = (void (*)(Conductor * self, int propX, int propY, int propType)) 0x600800;
void (*Conductor::ptr::mark)(Conductor * self) = (void (*)(Conductor * self)) 0x600dc0;
void (*Conductor::ptr::CSTR_Conductor)(Conductor * self) = (void (*)(Conductor * self)) 0x5fd200;
#endif

#ifdef __linux__
Conductor * * Conductor::theConductor = (Conductor* *) 0x856a3e4;

Conductor * (*Conductor::ptr::New)(Conductor * self, int xVal, int yVal) = (Conductor * (*)(Conductor * self, int xVal, int yVal)) 0x81a5b00;
Conductor * (*Conductor::ptr::_new2)() = (Conductor * (*)()) 0x81a6480;
void (*Conductor::ptr::AddProp)(Conductor * self, int propX, int propY, int propType) = (void (*)(Conductor * self, int propX, int propY, int propType)) 0x81bd310;
Point * (*Conductor::ptr::GetMovementDirection)(Conductor * self) = (Point * (*)(Conductor * self)) 0x81bb2b0;
void (*Conductor::ptr::SpawnEnemy)(Conductor * self, int spawnType, int xVal, int yVal) = (void (*)(Conductor * self, int spawnType, int xVal, int yVal)) 0x81d0920;
int (*Conductor::ptr::GetNextSpawnZone)(Conductor * self) = (int (*)(Conductor * self)) 0x8073be0;
void (*Conductor::ptr::SpawnEnemy2)(Conductor * self, int spawnType) = (void (*)(Conductor * self, int spawnType)) 0x8132390;
void (*Conductor::ptr::SpawnEnemy3)(Conductor * self) = (void (*)(Conductor * self)) 0x8100f50;
void (*Conductor::ptr::SpawnMinibosses)(Conductor * self, int propNum) = (void (*)(Conductor * self, int propNum)) 0x80d7e00;
void (*Conductor::ptr::CastSpell)(Conductor * self, ConductorBattery * b) = (void (*)(Conductor * self, ConductorBattery * b)) 0x83bd870;
void (*Conductor::ptr::DoWarningZap)(Conductor * self, bool large) = (void (*)(Conductor * self, bool large)) 0x831bc90;
void (*Conductor::ptr::MoveSucceed)(Conductor * self, bool hitPlayer, bool moveDelayed) = (void (*)(Conductor * self, bool hitPlayer, bool moveDelayed)) 0x831b550;
void (*Conductor::ptr::MoveFail)(Conductor * self) = (void (*)(Conductor * self)) 0x8135a80;
bool (*Conductor::ptr::Hit)(Conductor * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Conductor * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x839c540;
void (*Conductor::ptr::ClearWire)() = (void (*)()) 0x81a64a0;
void (*Conductor::ptr::Die)(Conductor * self) = (void (*)(Conductor * self)) 0x83b6d90;
bool (*Conductor::ptr::_ImmuneToFear)() = (bool (*)()) 0x8073bf0;
void (*Conductor::ptr::_Knockback)(Conductor * self, int arg1) = (void (*)(Conductor * self, int arg1)) 0x8073c00;
void (*Conductor::ptr::Update)(Conductor * self) = (void (*)(Conductor * self)) 0x8386430;
void (*Conductor::ptr::RemoveBatteryWire)(Conductor * self, int propX, int propY) = (void (*)(Conductor * self, int propX, int propY)) 0x818dd50;
void (*Conductor::ptr::OnPropHit)(Conductor * self, int propNum) = (void (*)(Conductor * self, int propNum)) 0x831b320;
void (*Conductor::ptr::BeginPhase2)(Conductor * self) = (void (*)(Conductor * self)) 0x8319e90;
void (*Conductor::ptr::RemovePropWire)(Conductor * self, int propX, int propY, int propType) = (void (*)(Conductor * self, int propX, int propY, int propType)) 0x818db20;
void (*Conductor::ptr::mark)(Conductor * self) = (void (*)(Conductor * self)) 0x80b0ce0;
void (*Conductor::ptr::CSTR_Conductor)(Conductor * self) = (void (*)(Conductor * self)) 0x81e5120;
#endif
#endif
