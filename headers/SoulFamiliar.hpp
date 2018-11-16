// Generated automatically. Do not edit!
#ifndef _SoulFamiliar_
#define _SoulFamiliar_
class Enemy;
class Entity;
class List34;
class Player;
class String;
#include "FamiliarFixed.hpp"

class SoulFamiliar : public FamiliarFixed  {
public:
    bool muteAudio;
    int spawnedOnBeat;
    static List34 * * allSouls;
    static bool * hasPlayedAttackThisFrame;

    // Wrappers
    SoulFamiliar(int newX, int newY, Player * owner_) {
        ptr::CSTR_SoulFamiliar(this);
        ptr::New(this, newX, newY, owner_);
    }

    inline static SoulFamiliar * GetSoulAt(int x, int y) { return ptr::GetSoulAt(x, y); }
    inline void Die() { ptr::Die(this); }
    inline SoulFamiliar * New(int newX, int newY, Player * owner_) { return ptr::New(this, newX, newY, owner_); }
    inline SoulFamiliar * _new2() { return ptr::_new2(); }
    inline static bool CanAttackEnemy(Enemy * e) { return ptr::CanAttackEnemy(e); }
    inline static void ResetSoulMovement() { ptr::ResetSoulMovement(); }
    inline void Update() { ptr::Update(this); }
    inline void MoveTo(int newX, int newY) { ptr::MoveTo(this, newX, newY); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline bool _IsSoul() { return ptr::_IsSoul(); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static SoulFamiliar * (*GetSoulAt)(int x, int y);
        static void (*Die)(SoulFamiliar * self);
        static SoulFamiliar * (*New)(SoulFamiliar * self, int newX, int newY, Player * owner_);
        static SoulFamiliar * (*_new2)();
        static bool (*CanAttackEnemy)(Enemy * e);
        static void (*ResetSoulMovement)();
        static void (*Update)(SoulFamiliar * self);
        static void (*MoveTo)(SoulFamiliar * self, int newX, int newY);
        static bool (*Hit)(SoulFamiliar * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static bool (*_IsSoul)();
        static void (*mark)(SoulFamiliar * self);
        static void (*CSTR_SoulFamiliar)(SoulFamiliar * self);
    };
};

#ifdef _WIN32
inline List34 * * SoulFamiliar::allSouls = (List34* *) 0x835bdc;
inline bool * SoulFamiliar::hasPlayedAttackThisFrame = (bool*) 0x83557e;

inline SoulFamiliar * (*SoulFamiliar::ptr::GetSoulAt)(int x, int y) = (SoulFamiliar * (*)(int x, int y)) 0x604200;
inline void (*SoulFamiliar::ptr::Die)(SoulFamiliar * self) = (void (*)(SoulFamiliar * self)) 0x604250;
inline SoulFamiliar * (*SoulFamiliar::ptr::New)(SoulFamiliar * self, int newX, int newY, Player * owner_) = (SoulFamiliar * (*)(SoulFamiliar * self, int newX, int newY, Player * owner_)) 0x6043d0;
inline SoulFamiliar * (*SoulFamiliar::ptr::_new2)() = (SoulFamiliar * (*)()) 0x0;
inline bool (*SoulFamiliar::ptr::CanAttackEnemy)(Enemy * e) = (bool (*)(Enemy * e)) 0x6047b0;
inline void (*SoulFamiliar::ptr::ResetSoulMovement)() = (void (*)()) 0x604810;
inline void (*SoulFamiliar::ptr::Update)(SoulFamiliar * self) = (void (*)(SoulFamiliar * self)) 0x604850;
inline void (*SoulFamiliar::ptr::MoveTo)(SoulFamiliar * self, int newX, int newY) = (void (*)(SoulFamiliar * self, int newX, int newY)) 0x604890;
inline bool (*SoulFamiliar::ptr::Hit)(SoulFamiliar * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(SoulFamiliar * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x604da0;
inline bool (*SoulFamiliar::ptr::_IsSoul)() = (bool (*)()) 0x0;
inline void (*SoulFamiliar::ptr::mark)(SoulFamiliar * self) = (void (*)(SoulFamiliar * self)) 0x6023f0;
inline void (*SoulFamiliar::ptr::CSTR_SoulFamiliar)(SoulFamiliar * self) = (void (*)(SoulFamiliar * self)) 0x604190;
#endif

#ifdef __linux__
inline List34 * * SoulFamiliar::allSouls = (List34* *) 0x856a3dc;
inline bool * SoulFamiliar::hasPlayedAttackThisFrame = (bool*) 0x856a3d9;

inline SoulFamiliar * (*SoulFamiliar::ptr::GetSoulAt)(int x, int y) = (SoulFamiliar * (*)(int x, int y)) 0x81a8e00;
inline void (*SoulFamiliar::ptr::Die)(SoulFamiliar * self) = (void (*)(SoulFamiliar * self)) 0x83a0590;
inline SoulFamiliar * (*SoulFamiliar::ptr::New)(SoulFamiliar * self, int newX, int newY, Player * owner_) = (SoulFamiliar * (*)(SoulFamiliar * self, int newX, int newY, Player * owner_)) 0x825e970;
inline SoulFamiliar * (*SoulFamiliar::ptr::_new2)() = (SoulFamiliar * (*)()) 0x81a8e60;
inline bool (*SoulFamiliar::ptr::CanAttackEnemy)(Enemy * e) = (bool (*)(Enemy * e)) 0x81a8ed0;
inline void (*SoulFamiliar::ptr::ResetSoulMovement)() = (void (*)()) 0x81a8f30;
inline void (*SoulFamiliar::ptr::Update)(SoulFamiliar * self) = (void (*)(SoulFamiliar * self)) 0x8257530;
inline void (*SoulFamiliar::ptr::MoveTo)(SoulFamiliar * self, int newX, int newY) = (void (*)(SoulFamiliar * self, int newX, int newY)) 0x83bcea0;
inline bool (*SoulFamiliar::ptr::Hit)(SoulFamiliar * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(SoulFamiliar * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x807f350;
inline bool (*SoulFamiliar::ptr::_IsSoul)() = (bool (*)()) 0x8073f80;
inline void (*SoulFamiliar::ptr::mark)(SoulFamiliar * self) = (void (*)(SoulFamiliar * self)) 0x80a54d0;
inline void (*SoulFamiliar::ptr::CSTR_SoulFamiliar)(SoulFamiliar * self) = (void (*)(SoulFamiliar * self)) 0x81a8d90;
#endif
#endif
