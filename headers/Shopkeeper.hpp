// Generated automatically. Do not edit!
#ifndef _Shopkeeper_
#define _Shopkeeper_
class Entity;
class Point;
class String;
#include "NPC.hpp"

class Shopkeeper : public NPC  {
public:
    bool hasRoared;
    bool singingStopped;
    int lastBeatSFX;
    static int * shopkeeperStartX;
    static int * shopkeeperStartY;
    static bool * isMonstrous;

    // Wrappers
    Shopkeeper(int xVal, int yVal, int l, bool captv) {
        ptr::CSTR_Shopkeeper(this);
        ptr::New(this, xVal, yVal, l, captv);
    }

    inline Shopkeeper * New(int xVal, int yVal, int l, bool captv) { return ptr::New(this, xVal, yVal, l, captv); }
    inline Shopkeeper * _new2() { return ptr::_new2(); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline int _PerformMovement(int arg1, int arg2) { return ptr::_PerformMovement(this, arg1, arg2); }
    inline bool CanBeDamaged(bool phasing, bool piercing) { return ptr::CanBeDamaged(this, phasing, piercing); }
    inline virtual bool IsSinging() { return ptr::IsSinging(this); }
    inline void Update() { ptr::Update(this); }
    inline void Die() { ptr::Die(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Shopkeeper * (*New)(Shopkeeper * self, int xVal, int yVal, int l, bool captv);
        static Shopkeeper * (*_new2)();
        static bool (*Hit)(Shopkeeper * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static Point * (*GetMovementDirection)(Shopkeeper * self);
        static int (*_PerformMovement)(Shopkeeper * self, int arg1, int arg2);
        static bool (*CanBeDamaged)(Shopkeeper * self, bool phasing, bool piercing);
        static bool (*IsSinging)(Shopkeeper * self);
        static void (*Update)(Shopkeeper * self);
        static void (*Die)(Shopkeeper * self);
        static void (*MoveSucceed)(Shopkeeper * self, bool hitPlayer, bool moveDelayed);
        static void (*_mark)();
        static void (*CSTR_Shopkeeper)(Shopkeeper * self);
    };
};

#ifdef _WIN32
inline int * Shopkeeper::shopkeeperStartX = (int*) 0x835798;
inline int * Shopkeeper::shopkeeperStartY = (int*) 0x83579c;
inline bool * Shopkeeper::isMonstrous = (bool*) 0x835791;

inline Shopkeeper * (*Shopkeeper::ptr::New)(Shopkeeper * self, int xVal, int yVal, int l, bool captv) = (Shopkeeper * (*)(Shopkeeper * self, int xVal, int yVal, int l, bool captv)) 0x61fc30;
inline Shopkeeper * (*Shopkeeper::ptr::_new2)() = (Shopkeeper * (*)()) 0x0;
inline bool (*Shopkeeper::ptr::Hit)(Shopkeeper * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Shopkeeper * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x6200b0;
inline Point * (*Shopkeeper::ptr::GetMovementDirection)(Shopkeeper * self) = (Point * (*)(Shopkeeper * self)) 0x620a90;
inline int (*Shopkeeper::ptr::_PerformMovement)(Shopkeeper * self, int arg1, int arg2) = (int (*)(Shopkeeper * self, int arg1, int arg2)) 0x0;
inline bool (*Shopkeeper::ptr::CanBeDamaged)(Shopkeeper * self, bool phasing, bool piercing) = (bool (*)(Shopkeeper * self, bool phasing, bool piercing)) 0x620b80;
inline bool (*Shopkeeper::ptr::IsSinging)(Shopkeeper * self) = (bool (*)(Shopkeeper * self)) 0x620bb0;
inline void (*Shopkeeper::ptr::Update)(Shopkeeper * self) = (void (*)(Shopkeeper * self)) 0x6281f0;
inline void (*Shopkeeper::ptr::Die)(Shopkeeper * self) = (void (*)(Shopkeeper * self)) 0x628a80;
inline void (*Shopkeeper::ptr::MoveSucceed)(Shopkeeper * self, bool hitPlayer, bool moveDelayed) = (void (*)(Shopkeeper * self, bool hitPlayer, bool moveDelayed)) 0x628db0;
inline void (*Shopkeeper::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Shopkeeper::ptr::CSTR_Shopkeeper)(Shopkeeper * self) = (void (*)(Shopkeeper * self)) 0x61fbc0;
#endif

#ifdef __linux__
inline int * Shopkeeper::shopkeeperStartX = (int*) 0x856a3b8;
inline int * Shopkeeper::shopkeeperStartY = (int*) 0x856a3b4;
inline bool * Shopkeeper::isMonstrous = (bool*) 0x856a3b0;

inline Shopkeeper * (*Shopkeeper::ptr::New)(Shopkeeper * self, int xVal, int yVal, int l, bool captv) = (Shopkeeper * (*)(Shopkeeper * self, int xVal, int yVal, int l, bool captv)) 0x81b8790;
inline Shopkeeper * (*Shopkeeper::ptr::_new2)() = (Shopkeeper * (*)()) 0x81b8ab0;
inline bool (*Shopkeeper::ptr::Hit)(Shopkeeper * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Shopkeeper * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x83d2ad0;
inline Point * (*Shopkeeper::ptr::GetMovementDirection)(Shopkeeper * self) = (Point * (*)(Shopkeeper * self)) 0x80b5af0;
inline int (*Shopkeeper::ptr::_PerformMovement)(Shopkeeper * self, int arg1, int arg2) = (int (*)(Shopkeeper * self, int arg1, int arg2)) 0x81a8d00;
inline bool (*Shopkeeper::ptr::CanBeDamaged)(Shopkeeper * self, bool phasing, bool piercing) = (bool (*)(Shopkeeper * self, bool phasing, bool piercing)) 0x8074f20;
inline bool (*Shopkeeper::ptr::IsSinging)(Shopkeeper * self) = (bool (*)(Shopkeeper * self)) 0x8249b40;
inline void (*Shopkeeper::ptr::Update)(Shopkeeper * self) = (void (*)(Shopkeeper * self)) 0x83871e0;
inline void (*Shopkeeper::ptr::Die)(Shopkeeper * self) = (void (*)(Shopkeeper * self)) 0x83b7370;
inline void (*Shopkeeper::ptr::MoveSucceed)(Shopkeeper * self, bool hitPlayer, bool moveDelayed) = (void (*)(Shopkeeper * self, bool hitPlayer, bool moveDelayed)) 0x8074f50;
inline void (*Shopkeeper::ptr::_mark)() = (void (*)()) 0x80b3130;
inline void (*Shopkeeper::ptr::CSTR_Shopkeeper)(Shopkeeper * self) = (void (*)(Shopkeeper * self)) 0x81b8700;
#endif
#endif
