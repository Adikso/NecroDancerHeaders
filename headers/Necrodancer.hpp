// Generated automatically. Do not edit!
#ifndef _Necrodancer_
#define _Necrodancer_
class Entity;
class Item;
class Point;
class Sprite;
class String;
#include "Enemy.hpp"

class Necrodancer : public Enemy  {
public:
    int bombStep;
    bool saidLutePhrase;
    Sprite * iceBlast;
    Sprite * shieldImage;
    int origXOff;
    int actionTime;
    Item * theLute;
    bool doingTransition;
    int lastAction;
    int actionDelay;
    int phase;
    int summonCount;
    bool didCry;
    int actionDelayTime;
    int spellNum;
    int iceBlastDuration;
    int lastSpell;
    int vibrateCounter;
    float vibrateOffset;
    bool madeLava;
    static Necrodancer * * necrodancer;
    static int * wallsStep;

    // Wrappers
    Necrodancer(int xVal, int yVal, int l) {
        ptr::CSTR_Necrodancer(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Necrodancer * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Necrodancer * _new2() { return ptr::_new2(); }
    inline virtual void InitFinalForm() { ptr::InitFinalForm(this); }
    inline virtual void SummonEnemy(int enemyType) { ptr::SummonEnemy(this, enemyType); }
    inline virtual void TriggeredWalls() { ptr::TriggeredWalls(this); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline virtual void Teleport() { ptr::Teleport(this); }
    inline virtual void SummonSarcophagi() { ptr::SummonSarcophagi(this); }
    inline virtual void SummonMiniboss() { ptr::SummonMiniboss(this); }
    inline virtual int GetEnemyTypeFromBombStep() { return ptr::GetEnemyTypeFromBombStep(this); }
    inline virtual void IceAt(int xVal, int yVal) { ptr::IceAt(this, xVal, yVal); }
    inline virtual void CastIce() { ptr::CastIce(this); }
    inline virtual void SummonAndTeleport(bool doTeleport) { ptr::SummonAndTeleport(this, doTeleport); }
    inline virtual void TakeAction() { ptr::TakeAction(this); }
    inline virtual void ChooseSpell() { ptr::ChooseSpell(this); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline virtual void MakeLava() { ptr::MakeLava(this); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline void MoveFail() { ptr::MoveFail(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void Die() { ptr::Die(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static Necrodancer * (*New)(Necrodancer * self, int xVal, int yVal, int l);
        static Necrodancer * (*_new2)();
        static void (*InitFinalForm)(Necrodancer * self);
        static void (*SummonEnemy)(Necrodancer * self, int enemyType);
        static void (*TriggeredWalls)(Necrodancer * self);
        static Point * (*GetMovementDirection)(Necrodancer * self);
        static void (*Teleport)(Necrodancer * self);
        static void (*SummonSarcophagi)(Necrodancer * self);
        static void (*SummonMiniboss)(Necrodancer * self);
        static int (*GetEnemyTypeFromBombStep)(Necrodancer * self);
        static void (*IceAt)(Necrodancer * self, int xVal, int yVal);
        static void (*CastIce)(Necrodancer * self);
        static void (*SummonAndTeleport)(Necrodancer * self, bool doTeleport);
        static void (*TakeAction)(Necrodancer * self);
        static void (*ChooseSpell)(Necrodancer * self);
        static void (*Update)(Necrodancer * self);
        static void (*Render)(Necrodancer * self);
        static void (*MakeLava)(Necrodancer * self);
        static bool (*Hit)(Necrodancer * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*MoveFail)(Necrodancer * self);
        static void (*MoveSucceed)(Necrodancer * self, bool hitPlayer, bool moveDelayed);
        static void (*Die)(Necrodancer * self);
        static void (*mark)(Necrodancer * self);
        static void (*CSTR_Necrodancer)(Necrodancer * self);
    };
};

#ifdef _WIN32
inline Necrodancer * * Necrodancer::necrodancer = (Necrodancer* *) 0x8359dc;
inline int * Necrodancer::wallsStep = (int*) 0x8358f8;

inline Necrodancer * (*Necrodancer::ptr::New)(Necrodancer * self, int xVal, int yVal, int l) = (Necrodancer * (*)(Necrodancer * self, int xVal, int yVal, int l)) 0x629d80;
inline Necrodancer * (*Necrodancer::ptr::_new2)() = (Necrodancer * (*)()) 0x0;
inline void (*Necrodancer::ptr::InitFinalForm)(Necrodancer * self) = (void (*)(Necrodancer * self)) 0x62a330;
inline void (*Necrodancer::ptr::SummonEnemy)(Necrodancer * self, int enemyType) = (void (*)(Necrodancer * self, int enemyType)) 0x62b3b0;
inline void (*Necrodancer::ptr::TriggeredWalls)(Necrodancer * self) = (void (*)(Necrodancer * self)) 0x62b950;
inline Point * (*Necrodancer::ptr::GetMovementDirection)(Necrodancer * self) = (Point * (*)(Necrodancer * self)) 0x62bbe0;
inline void (*Necrodancer::ptr::Teleport)(Necrodancer * self) = (void (*)(Necrodancer * self)) 0x62bdd0;
inline void (*Necrodancer::ptr::SummonSarcophagi)(Necrodancer * self) = (void (*)(Necrodancer * self)) 0x62bfa0;
inline void (*Necrodancer::ptr::SummonMiniboss)(Necrodancer * self) = (void (*)(Necrodancer * self)) 0x62c470;
inline int (*Necrodancer::ptr::GetEnemyTypeFromBombStep)(Necrodancer * self) = (int (*)(Necrodancer * self)) 0x62c7d0;
inline void (*Necrodancer::ptr::IceAt)(Necrodancer * self, int xVal, int yVal) = (void (*)(Necrodancer * self, int xVal, int yVal)) 0x62cab0;
inline void (*Necrodancer::ptr::CastIce)(Necrodancer * self) = (void (*)(Necrodancer * self)) 0x62caf0;
inline void (*Necrodancer::ptr::SummonAndTeleport)(Necrodancer * self, bool doTeleport) = (void (*)(Necrodancer * self, bool doTeleport)) 0x62cc90;
inline void (*Necrodancer::ptr::TakeAction)(Necrodancer * self) = (void (*)(Necrodancer * self)) 0x62cde0;
inline void (*Necrodancer::ptr::ChooseSpell)(Necrodancer * self) = (void (*)(Necrodancer * self)) 0x62d490;
inline void (*Necrodancer::ptr::Update)(Necrodancer * self) = (void (*)(Necrodancer * self)) 0x62d750;
inline void (*Necrodancer::ptr::Render)(Necrodancer * self) = (void (*)(Necrodancer * self)) 0x62e610;
inline void (*Necrodancer::ptr::MakeLava)(Necrodancer * self) = (void (*)(Necrodancer * self)) 0x62e770;
inline bool (*Necrodancer::ptr::Hit)(Necrodancer * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Necrodancer * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x6301a0;
inline void (*Necrodancer::ptr::MoveFail)(Necrodancer * self) = (void (*)(Necrodancer * self)) 0x630b50;
inline void (*Necrodancer::ptr::MoveSucceed)(Necrodancer * self, bool hitPlayer, bool moveDelayed) = (void (*)(Necrodancer * self, bool hitPlayer, bool moveDelayed)) 0x630b60;
inline void (*Necrodancer::ptr::Die)(Necrodancer * self) = (void (*)(Necrodancer * self)) 0x630b90;
inline void (*Necrodancer::ptr::mark)(Necrodancer * self) = (void (*)(Necrodancer * self)) 0x630bb0;
inline void (*Necrodancer::ptr::CSTR_Necrodancer)(Necrodancer * self) = (void (*)(Necrodancer * self)) 0x629c70;
#endif

#ifdef __linux__
inline Necrodancer * * Necrodancer::necrodancer = (Necrodancer* *) 0x856a398;
inline int * Necrodancer::wallsStep = (int*) 0x856a394;

inline Necrodancer * (*Necrodancer::ptr::New)(Necrodancer * self, int xVal, int yVal, int l) = (Necrodancer * (*)(Necrodancer * self, int xVal, int yVal, int l)) 0x81b9c90;
inline Necrodancer * (*Necrodancer::ptr::_new2)() = (Necrodancer * (*)()) 0x81ba180;
inline void (*Necrodancer::ptr::InitFinalForm)(Necrodancer * self) = (void (*)(Necrodancer * self)) 0x83d1c00;
inline void (*Necrodancer::ptr::SummonEnemy)(Necrodancer * self, int enemyType) = (void (*)(Necrodancer * self, int enemyType)) 0x81d0240;
inline void (*Necrodancer::ptr::TriggeredWalls)(Necrodancer * self) = (void (*)(Necrodancer * self)) 0x83190b0;
inline Point * (*Necrodancer::ptr::GetMovementDirection)(Necrodancer * self) = (Point * (*)(Necrodancer * self)) 0x813b310;
inline void (*Necrodancer::ptr::Teleport)(Necrodancer * self) = (void (*)(Necrodancer * self)) 0x83d19d0;
inline void (*Necrodancer::ptr::SummonSarcophagi)(Necrodancer * self) = (void (*)(Necrodancer * self)) 0x81c5f20;
inline void (*Necrodancer::ptr::SummonMiniboss)(Necrodancer * self) = (void (*)(Necrodancer * self)) 0x8101c90;
inline int (*Necrodancer::ptr::GetEnemyTypeFromBombStep)(Necrodancer * self) = (int (*)(Necrodancer * self)) 0x8100970;
inline void (*Necrodancer::ptr::IceAt)(Necrodancer * self, int xVal, int yVal) = (void (*)(Necrodancer * self, int xVal, int yVal)) 0x80a45c0;
inline void (*Necrodancer::ptr::CastIce)(Necrodancer * self) = (void (*)(Necrodancer * self)) 0x8075100;
inline void (*Necrodancer::ptr::SummonAndTeleport)(Necrodancer * self, bool doTeleport) = (void (*)(Necrodancer * self, bool doTeleport)) 0x8100800;
inline void (*Necrodancer::ptr::TakeAction)(Necrodancer * self) = (void (*)(Necrodancer * self)) 0x83accb0;
inline void (*Necrodancer::ptr::ChooseSpell)(Necrodancer * self) = (void (*)(Necrodancer * self)) 0x8104920;
inline void (*Necrodancer::ptr::Update)(Necrodancer * self) = (void (*)(Necrodancer * self)) 0x8383cd0;
inline void (*Necrodancer::ptr::Render)(Necrodancer * self) = (void (*)(Necrodancer * self)) 0x830c7e0;
inline void (*Necrodancer::ptr::MakeLava)(Necrodancer * self) = (void (*)(Necrodancer * self)) 0x81d17e0;
inline bool (*Necrodancer::ptr::Hit)(Necrodancer * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Necrodancer * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x8399b80;
inline void (*Necrodancer::ptr::MoveFail)(Necrodancer * self) = (void (*)(Necrodancer * self)) 0x8270710;
inline void (*Necrodancer::ptr::MoveSucceed)(Necrodancer * self, bool hitPlayer, bool moveDelayed) = (void (*)(Necrodancer * self, bool hitPlayer, bool moveDelayed)) 0x82707d0;
inline void (*Necrodancer::ptr::Die)(Necrodancer * self) = (void (*)(Necrodancer * self)) 0x83b6780;
inline void (*Necrodancer::ptr::mark)(Necrodancer * self) = (void (*)(Necrodancer * self)) 0x80b15b0;
inline void (*Necrodancer::ptr::CSTR_Necrodancer)(Necrodancer * self) = (void (*)(Necrodancer * self)) 0x81b9bb0;
#endif
#endif
