// Generated automatically. Do not edit!
#ifndef _KingConga_
#define _KingConga_
class Entity;
class List16;
class Point;
class Sprite;
class String;
#include "Enemy.hpp"

class KingConga : public Enemy  {
public:
    int state;
    bool throneDestroyed;
    int initX;
    int initY;
    int initialXOff;
    Sprite * image2;
    List16 * zombieFriends;
    int lastBeatNum;
    int lastBeatAnim;
    static KingConga * * theKing;

    // Wrappers
    KingConga(int xVal, int yVal, int l) {
        ptr::CSTR_KingConga(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline static void MissedBeat() { ptr::MissedBeat(); }
    inline virtual void EnterFinalState(bool playCry) { ptr::EnterFinalState(this, playCry); }
    inline static void DestroyThrone() { ptr::DestroyThrone(); }
    inline KingConga * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline KingConga * _new2() { return ptr::_new2(); }
    inline virtual void AddZombieFriend(Enemy * z) { ptr::AddZombieFriend(this, z); }
    inline virtual void CheckZombieFriends() { ptr::CheckZombieFriends(this); }
    inline void _MoveFail() { ptr::_MoveFail(); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline virtual void TeleportBack() { ptr::TeleportBack(this); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline bool ImmuneToFear() { return ptr::ImmuneToFear(this); }
    inline void Die() { ptr::Die(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static void (*MissedBeat)();
        static void (*EnterFinalState)(KingConga * self, bool playCry);
        static void (*DestroyThrone)();
        static KingConga * (*New)(KingConga * self, int xVal, int yVal, int l);
        static KingConga * (*_new2)();
        static void (*AddZombieFriend)(KingConga * self, Enemy * z);
        static void (*CheckZombieFriends)(KingConga * self);
        static void (*_MoveFail)();
        static void (*Update)(KingConga * self);
        static void (*Render)(KingConga * self);
        static void (*MoveSucceed)(KingConga * self, bool hitPlayer, bool moveDelayed);
        static Point * (*GetMovementDirection)(KingConga * self);
        static void (*TeleportBack)(KingConga * self);
        static bool (*Hit)(KingConga * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static bool (*ImmuneToFear)(KingConga * self);
        static void (*Die)(KingConga * self);
        static void (*mark)(KingConga * self);
        static void (*CSTR_KingConga)(KingConga * self);
    };
};

#ifdef _WIN32
KingConga * * KingConga::theKing = (KingConga* *) 0x8355d8;

void (*KingConga::ptr::MissedBeat)() = (void (*)()) 0x600f90;
void (*KingConga::ptr::EnterFinalState)(KingConga * self, bool playCry) = (void (*)(KingConga * self, bool playCry)) 0x601030;
void (*KingConga::ptr::DestroyThrone)() = (void (*)()) 0x601100;
KingConga * (*KingConga::ptr::New)(KingConga * self, int xVal, int yVal, int l) = (KingConga * (*)(KingConga * self, int xVal, int yVal, int l)) 0x601170;
KingConga * (*KingConga::ptr::_new2)() = (KingConga * (*)()) 0x0;
void (*KingConga::ptr::AddZombieFriend)(KingConga * self, Enemy * z) = (void (*)(KingConga * self, Enemy * z)) 0x6015f0;
void (*KingConga::ptr::CheckZombieFriends)(KingConga * self) = (void (*)(KingConga * self)) 0x601600;
void (*KingConga::ptr::_MoveFail)() = (void (*)()) 0x0;
void (*KingConga::ptr::Update)(KingConga * self) = (void (*)(KingConga * self)) 0x601670;
void (*KingConga::ptr::Render)(KingConga * self) = (void (*)(KingConga * self)) 0x601a90;
void (*KingConga::ptr::MoveSucceed)(KingConga * self, bool hitPlayer, bool moveDelayed) = (void (*)(KingConga * self, bool hitPlayer, bool moveDelayed)) 0x601b40;
Point * (*KingConga::ptr::GetMovementDirection)(KingConga * self) = (Point * (*)(KingConga * self)) 0x601ba0;
void (*KingConga::ptr::TeleportBack)(KingConga * self) = (void (*)(KingConga * self)) 0x601c50;
bool (*KingConga::ptr::Hit)(KingConga * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(KingConga * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x601d30;
bool (*KingConga::ptr::ImmuneToFear)(KingConga * self) = (bool (*)(KingConga * self)) 0x601ee0;
void (*KingConga::ptr::Die)(KingConga * self) = (void (*)(KingConga * self)) 0x601ef0;
void (*KingConga::ptr::mark)(KingConga * self) = (void (*)(KingConga * self)) 0x602080;
void (*KingConga::ptr::CSTR_KingConga)(KingConga * self) = (void (*)(KingConga * self)) 0x600ec0;
#endif

#ifdef __linux__
KingConga * * KingConga::theKing = (KingConga* *) 0x856a3e0;

void (*KingConga::ptr::MissedBeat)() = (void (*)()) 0x8319df0;
void (*KingConga::ptr::EnterFinalState)(KingConga * self, bool playCry) = (void (*)(KingConga * self, bool playCry)) 0x8319d60;
void (*KingConga::ptr::DestroyThrone)() = (void (*)()) 0x83b93c0;
KingConga * (*KingConga::ptr::New)(KingConga * self, int xVal, int yVal, int l) = (KingConga * (*)(KingConga * self, int xVal, int yVal, int l)) 0x81a6980;
KingConga * (*KingConga::ptr::_new2)() = (KingConga * (*)()) 0x81a6d30;
void (*KingConga::ptr::AddZombieFriend)(KingConga * self, Enemy * z) = (void (*)(KingConga * self, Enemy * z)) 0x8073c10;
void (*KingConga::ptr::CheckZombieFriends)(KingConga * self) = (void (*)(KingConga * self)) 0x807f210;
void (*KingConga::ptr::_MoveFail)() = (void (*)()) 0x8135a50;
void (*KingConga::ptr::Update)(KingConga * self) = (void (*)(KingConga * self)) 0x8386190;
void (*KingConga::ptr::Render)(KingConga * self) = (void (*)(KingConga * self)) 0x830d890;
void (*KingConga::ptr::MoveSucceed)(KingConga * self, bool hitPlayer, bool moveDelayed) = (void (*)(KingConga * self, bool hitPlayer, bool moveDelayed)) 0x8073c30;
Point * (*KingConga::ptr::GetMovementDirection)(KingConga * self) = (Point * (*)(KingConga * self)) 0x80b4f80;
void (*KingConga::ptr::TeleportBack)(KingConga * self) = (void (*)(KingConga * self)) 0x8319cc0;
bool (*KingConga::ptr::Hit)(KingConga * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(KingConga * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x83b91b0;
bool (*KingConga::ptr::ImmuneToFear)(KingConga * self) = (bool (*)(KingConga * self)) 0x8073ca0;
void (*KingConga::ptr::Die)(KingConga * self) = (void (*)(KingConga * self)) 0x83b6cc0;
void (*KingConga::ptr::mark)(KingConga * self) = (void (*)(KingConga * self)) 0x80b19c0;
void (*KingConga::ptr::CSTR_KingConga)(KingConga * self) = (void (*)(KingConga * self)) 0x81a6890;
#endif
#endif
