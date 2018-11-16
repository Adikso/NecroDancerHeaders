// Generated automatically. Do not edit!
#ifndef _Fortissimole_
#define _Fortissimole_
class Entity;
class IntMap12;
class MoleDirt;
class Point;
class String;
#include "Enemy.hpp"

class Fortissimole : public Enemy  {
public:
    int yOffOffstage;
    int yOffOnstage;
    int paceDir;
    bool imageOnStage;
    int onstageState;
    int spawnArmsOffset;
    bool jumpingOffstage;
    MoleDirt * currentDirt;
    bool isBurrowed;
    bool queuedDestage;
    bool queuedPrep;
    Point * destageVia;
    bool paceParity;
    int offstageState;
    IntMap12 * spawnMap;
    int summonCount;

    // Wrappers
    Fortissimole(int xVal, int yVal, int l) {
        ptr::CSTR_Fortissimole(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Fortissimole * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Fortissimole * _new2() { return ptr::_new2(); }
    inline static void SpawnFans() { ptr::SpawnFans(); }
    inline virtual void UnoccupyDirt() { ptr::UnoccupyDirt(this); }
    inline virtual void PutDirt() { ptr::PutDirt(this); }
    inline void Update() { ptr::Update(this); }
    inline bool _ImmuneToFear() { return ptr::_ImmuneToFear(); }
    inline void Render() { ptr::Render(this); }
    inline virtual bool OnStage() { return ptr::OnStage(this); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void MoveFail() { ptr::MoveFail(this); }
    inline static bool _HaveSpeakerAt(int arg1) { return ptr::_HaveSpeakerAt(arg1); }
    inline virtual bool TrySpawnX(int spawnX) { return ptr::TrySpawnX(this, spawnX); }
    inline virtual void DigFloor() { ptr::DigFloor(this); }
    inline virtual void DoSplashDamage() { ptr::DoSplashDamage(this); }
    inline virtual void PopoutSplash() { ptr::PopoutSplash(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline int PerformMovement(int xVal, int yVal) { return ptr::PerformMovement(this, xVal, yVal); }
    inline bool CanBeDamaged(bool phasing, bool piercing) { return ptr::CanBeDamaged(this, phasing, piercing); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline void Die() { ptr::Die(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static Fortissimole * (*New)(Fortissimole * self, int xVal, int yVal, int l);
        static Fortissimole * (*_new2)();
        static void (*SpawnFans)();
        static void (*UnoccupyDirt)(Fortissimole * self);
        static void (*PutDirt)(Fortissimole * self);
        static void (*Update)(Fortissimole * self);
        static bool (*_ImmuneToFear)();
        static void (*Render)(Fortissimole * self);
        static bool (*OnStage)(Fortissimole * self);
        static Point * (*GetMovementDirection)(Fortissimole * self);
        static void (*MoveFail)(Fortissimole * self);
        static bool (*_HaveSpeakerAt)(int arg1);
        static bool (*TrySpawnX)(Fortissimole * self, int spawnX);
        static void (*DigFloor)(Fortissimole * self);
        static void (*DoSplashDamage)(Fortissimole * self);
        static void (*PopoutSplash)(Fortissimole * self);
        static void (*MoveSucceed)(Fortissimole * self, bool hitPlayer, bool moveDelayed);
        static int (*PerformMovement)(Fortissimole * self, int xVal, int yVal);
        static bool (*CanBeDamaged)(Fortissimole * self, bool phasing, bool piercing);
        static bool (*Hit)(Fortissimole * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*Die)(Fortissimole * self);
        static void (*mark)(Fortissimole * self);
        static void (*CSTR_Fortissimole)(Fortissimole * self);
    };
};

#ifdef _WIN32

inline Fortissimole * (*Fortissimole::ptr::New)(Fortissimole * self, int xVal, int yVal, int l) = (Fortissimole * (*)(Fortissimole * self, int xVal, int yVal, int l)) 0x6530b0;
inline Fortissimole * (*Fortissimole::ptr::_new2)() = (Fortissimole * (*)()) 0x0;
inline void (*Fortissimole::ptr::SpawnFans)() = (void (*)()) 0x6533a0;
inline void (*Fortissimole::ptr::UnoccupyDirt)(Fortissimole * self) = (void (*)(Fortissimole * self)) 0x653590;
inline void (*Fortissimole::ptr::PutDirt)(Fortissimole * self) = (void (*)(Fortissimole * self)) 0x6535c0;
inline void (*Fortissimole::ptr::Update)(Fortissimole * self) = (void (*)(Fortissimole * self)) 0x6536b0;
inline bool (*Fortissimole::ptr::_ImmuneToFear)() = (bool (*)()) 0x0;
inline void (*Fortissimole::ptr::Render)(Fortissimole * self) = (void (*)(Fortissimole * self)) 0x653940;
inline bool (*Fortissimole::ptr::OnStage)(Fortissimole * self) = (bool (*)(Fortissimole * self)) 0x653970;
inline Point * (*Fortissimole::ptr::GetMovementDirection)(Fortissimole * self) = (Point * (*)(Fortissimole * self)) 0x653990;
inline void (*Fortissimole::ptr::MoveFail)(Fortissimole * self) = (void (*)(Fortissimole * self)) 0x653d80;
inline bool (*Fortissimole::ptr::_HaveSpeakerAt)(int arg1) = (bool (*)(int arg1)) 0x0;
inline bool (*Fortissimole::ptr::TrySpawnX)(Fortissimole * self, int spawnX) = (bool (*)(Fortissimole * self, int spawnX)) 0x653da0;
inline void (*Fortissimole::ptr::DigFloor)(Fortissimole * self) = (void (*)(Fortissimole * self)) 0x654030;
inline void (*Fortissimole::ptr::DoSplashDamage)(Fortissimole * self) = (void (*)(Fortissimole * self)) 0x654240;
inline void (*Fortissimole::ptr::PopoutSplash)(Fortissimole * self) = (void (*)(Fortissimole * self)) 0x654620;
inline void (*Fortissimole::ptr::MoveSucceed)(Fortissimole * self, bool hitPlayer, bool moveDelayed) = (void (*)(Fortissimole * self, bool hitPlayer, bool moveDelayed)) 0x654780;
inline int (*Fortissimole::ptr::PerformMovement)(Fortissimole * self, int xVal, int yVal) = (int (*)(Fortissimole * self, int xVal, int yVal)) 0x654b00;
inline bool (*Fortissimole::ptr::CanBeDamaged)(Fortissimole * self, bool phasing, bool piercing) = (bool (*)(Fortissimole * self, bool phasing, bool piercing)) 0x654b40;
inline bool (*Fortissimole::ptr::Hit)(Fortissimole * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Fortissimole * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x654b60;
inline void (*Fortissimole::ptr::Die)(Fortissimole * self) = (void (*)(Fortissimole * self)) 0x654c40;
inline void (*Fortissimole::ptr::mark)(Fortissimole * self) = (void (*)(Fortissimole * self)) 0x654c90;
inline void (*Fortissimole::ptr::CSTR_Fortissimole)(Fortissimole * self) = (void (*)(Fortissimole * self)) 0x652f30;
#endif

#ifdef __linux__

inline Fortissimole * (*Fortissimole::ptr::New)(Fortissimole * self, int xVal, int yVal, int l) = (Fortissimole * (*)(Fortissimole * self, int xVal, int yVal, int l)) 0x81c81b0;
inline Fortissimole * (*Fortissimole::ptr::_new2)() = (Fortissimole * (*)()) 0x81c8400;
inline void (*Fortissimole::ptr::SpawnFans)() = (void (*)()) 0x81c8420;
inline void (*Fortissimole::ptr::UnoccupyDirt)(Fortissimole * self) = (void (*)(Fortissimole * self)) 0x8076540;
inline void (*Fortissimole::ptr::PutDirt)(Fortissimole * self) = (void (*)(Fortissimole * self)) 0x81c2a80;
inline void (*Fortissimole::ptr::Update)(Fortissimole * self) = (void (*)(Fortissimole * self)) 0x837f330;
inline bool (*Fortissimole::ptr::_ImmuneToFear)() = (bool (*)()) 0x8076570;
inline void (*Fortissimole::ptr::Render)(Fortissimole * self) = (void (*)(Fortissimole * self)) 0x830b3e0;
inline bool (*Fortissimole::ptr::OnStage)(Fortissimole * self) = (bool (*)(Fortissimole * self)) 0x812ef50;
inline Point * (*Fortissimole::ptr::GetMovementDirection)(Fortissimole * self) = (Point * (*)(Fortissimole * self)) 0x8133700;
inline void (*Fortissimole::ptr::MoveFail)(Fortissimole * self) = (void (*)(Fortissimole * self)) 0x8134870;
inline bool (*Fortissimole::ptr::_HaveSpeakerAt)(int arg1) = (bool (*)(int arg1)) 0x81c8580;
inline bool (*Fortissimole::ptr::TrySpawnX)(Fortissimole * self, int spawnX) = (bool (*)(Fortissimole * self, int spawnX)) 0x83a8130;
inline void (*Fortissimole::ptr::DigFloor)(Fortissimole * self) = (void (*)(Fortissimole * self)) 0x818d880;
inline void (*Fortissimole::ptr::DoSplashDamage)(Fortissimole * self) = (void (*)(Fortissimole * self)) 0x81a8190;
inline void (*Fortissimole::ptr::PopoutSplash)(Fortissimole * self) = (void (*)(Fortissimole * self)) 0x83a83b0;
inline void (*Fortissimole::ptr::MoveSucceed)(Fortissimole * self, bool hitPlayer, bool moveDelayed) = (void (*)(Fortissimole * self, bool hitPlayer, bool moveDelayed)) 0x83a84c0;
inline int (*Fortissimole::ptr::PerformMovement)(Fortissimole * self, int xVal, int yVal) = (int (*)(Fortissimole * self, int xVal, int yVal)) 0x81a8ca0;
inline bool (*Fortissimole::ptr::CanBeDamaged)(Fortissimole * self, bool phasing, bool piercing) = (bool (*)(Fortissimole * self, bool phasing, bool piercing)) 0x8076580;
inline bool (*Fortissimole::ptr::Hit)(Fortissimole * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Fortissimole * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x8397250;
inline void (*Fortissimole::ptr::Die)(Fortissimole * self) = (void (*)(Fortissimole * self)) 0x83b5dc0;
inline void (*Fortissimole::ptr::mark)(Fortissimole * self) = (void (*)(Fortissimole * self)) 0x80b0270;
inline void (*Fortissimole::ptr::CSTR_Fortissimole)(Fortissimole * self) = (void (*)(Fortissimole * self)) 0x81c80b0;
#endif
#endif
