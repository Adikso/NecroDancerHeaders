// Generated automatically. Do not edit!
#ifndef _Familiar_
#define _Familiar_
class Entity;
class List8;
class Player;
class String;
#include "MobileEntity.hpp"

class Familiar : public MobileEntity  {
public:
    Player * owner;
    String * squishParticle;
    bool recalled;
    static List8 * * familiarList;

    // Wrappers
    Familiar(Player * owner_) {
        ptr::CSTR_Familiar(this);
        ptr::New(this, owner_);
    }

    inline void Die() { ptr::Die(this); }
    inline static Familiar * GetFamiliarAt(int x, int y) { return ptr::GetFamiliarAt(x, y); }
    inline virtual void Squish() { ptr::Squish(this); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline virtual void Recall() { ptr::Recall(this); }
    inline virtual bool IsObstructedAt(int targetX, int targetY) { return ptr::IsObstructedAt(this, targetX, targetY); }
    inline virtual void Move() { ptr::Move(this); }
    inline Familiar * New(Player * owner_) { return ptr::New(this, owner_); }
    inline Familiar * _new2() { return ptr::_new2(); }
    inline virtual void MaybeBaa() { ptr::MaybeBaa(this); }
    inline void Update() { ptr::Update(this); }
    inline static bool IsAnyAt(int x, int y) { return ptr::IsAnyAt(x, y); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static void (*Die)(Familiar * self);
        static Familiar * (*GetFamiliarAt)(int x, int y);
        static void (*Squish)(Familiar * self);
        static bool (*Hit)(Familiar * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*Recall)(Familiar * self);
        static bool (*IsObstructedAt)(Familiar * self, int targetX, int targetY);
        static void (*Move)(Familiar * self);
        static Familiar * (*New)(Familiar * self, Player * owner_);
        static Familiar * (*_new2)();
        static void (*MaybeBaa)(Familiar * self);
        static void (*Update)(Familiar * self);
        static bool (*IsAnyAt)(int x, int y);
        static void (*mark)(Familiar * self);
        static void (*CSTR_Familiar)(Familiar * self);
    };
};

#ifdef _WIN32
List8 * * Familiar::familiarList = (List8* *) 0x835bb0;

void (*Familiar::ptr::Die)(Familiar * self) = (void (*)(Familiar * self)) 0x57fbd0;
Familiar * (*Familiar::ptr::GetFamiliarAt)(int x, int y) = (Familiar * (*)(int x, int y)) 0x57fbf0;
void (*Familiar::ptr::Squish)(Familiar * self) = (void (*)(Familiar * self)) 0x57fc40;
bool (*Familiar::ptr::Hit)(Familiar * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Familiar * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x57fd30;
void (*Familiar::ptr::Recall)(Familiar * self) = (void (*)(Familiar * self)) 0x57ff10;
bool (*Familiar::ptr::IsObstructedAt)(Familiar * self, int targetX, int targetY) = (bool (*)(Familiar * self, int targetX, int targetY)) 0x57ff30;
void (*Familiar::ptr::Move)(Familiar * self) = (void (*)(Familiar * self)) 0x57ff80;
Familiar * (*Familiar::ptr::New)(Familiar * self, Player * owner_) = (Familiar * (*)(Familiar * self, Player * owner_)) 0x5800e0;
Familiar * (*Familiar::ptr::_new2)() = (Familiar * (*)()) 0x0;
void (*Familiar::ptr::MaybeBaa)(Familiar * self) = (void (*)(Familiar * self)) 0x580450;
void (*Familiar::ptr::Update)(Familiar * self) = (void (*)(Familiar * self)) 0x580570;
bool (*Familiar::ptr::IsAnyAt)(int x, int y) = (bool (*)(int x, int y)) 0x5805e0;
void (*Familiar::ptr::mark)(Familiar * self) = (void (*)(Familiar * self)) 0x580630;
void (*Familiar::ptr::CSTR_Familiar)(Familiar * self) = (void (*)(Familiar * self)) 0x57fa10;
#endif

#ifdef __linux__
List8 * * Familiar::familiarList = (List8* *) 0x856a65c;

void (*Familiar::ptr::Die)(Familiar * self) = (void (*)(Familiar * self)) 0x8093440;
Familiar * (*Familiar::ptr::GetFamiliarAt)(int x, int y) = (Familiar * (*)(int x, int y)) 0x8159c90;
void (*Familiar::ptr::Squish)(Familiar * self) = (void (*)(Familiar * self)) 0x81a4410;
bool (*Familiar::ptr::Hit)(Familiar * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Familiar * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x83915e0;
void (*Familiar::ptr::Recall)(Familiar * self) = (void (*)(Familiar * self)) 0x8070140;
bool (*Familiar::ptr::IsObstructedAt)(Familiar * self, int targetX, int targetY) = (bool (*)(Familiar * self, int targetX, int targetY)) 0x8132680;
void (*Familiar::ptr::Move)(Familiar * self) = (void (*)(Familiar * self)) 0x80b5670;
Familiar * (*Familiar::ptr::New)(Familiar * self, Player * owner_) = (Familiar * (*)(Familiar * self, Player * owner_)) 0x8159cf0;
Familiar * (*Familiar::ptr::_new2)() = (Familiar * (*)()) 0x815a1e0;
void (*Familiar::ptr::MaybeBaa)(Familiar * self) = (void (*)(Familiar * self)) 0x8391790;
void (*Familiar::ptr::Update)(Familiar * self) = (void (*)(Familiar * self)) 0x8388d90;
bool (*Familiar::ptr::IsAnyAt)(int x, int y) = (bool (*)(int x, int y)) 0x815a240;
void (*Familiar::ptr::mark)(Familiar * self) = (void (*)(Familiar * self)) 0x80a5340;
void (*Familiar::ptr::CSTR_Familiar)(Familiar * self) = (void (*)(Familiar * self)) 0x8159bb0;
#endif
#endif
