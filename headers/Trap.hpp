// Generated automatically. Do not edit!
#ifndef _Trap_
#define _Trap_
class String;
class TrapList;
#include "Entity.hpp"

class Trap : public Entity  {
public:
    int trapType;
    int triggeredOnBeat;
    Entity * willTriggerOn;
    Entity * triggeredOn;
    bool triggered;
    bool isRune;
    bool indestructible;
    bool canBeReplacedByTempoTrap;
    bool newTrap;
    bool playerWasClose;
    static TrapList * * trapList;

    // Wrappers
    Trap() {
        ptr::CSTR_Trap(this);
        ptr::New(this);
    }

    inline static Trap * GetTrapAt(int xVal, int yVal) { return ptr::GetTrapAt(xVal, yVal); }
    inline virtual void Trigger(Entity * ent) { ptr::Trigger(this, ent); }
    inline virtual bool IsLive() { return ptr::IsLive(this); }
    inline static bool IsLiveTrapAt(int xVal, int yVal) { return ptr::IsLiveTrapAt(xVal, yVal); }
    inline Trap * New() { return ptr::New(this); }
    inline static void _RemoveFromTrapList(Trap * arg1) { ptr::_RemoveFromTrapList(arg1); }
    inline void Die() { ptr::Die(this); }
    inline static void _ClearAll() { ptr::_ClearAll(); }
    inline static int _GetTrapTypeAt(int arg1, int arg2) { return ptr::_GetTrapTypeAt(arg1, arg2); }
    inline static Trap * FindRandomTrap() { return ptr::FindRandomTrap(); }
    inline virtual void Move() { ptr::Move(this); }
    inline static void _MoveAll() { ptr::_MoveAll(); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline void Update() { ptr::Update(this); }
    inline static void RemoveAll() { ptr::RemoveAll(); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static Trap * (*GetTrapAt)(int xVal, int yVal);
        static void (*Trigger)(Trap * self, Entity * ent);
        static bool (*IsLive)(Trap * self);
        static bool (*IsLiveTrapAt)(int xVal, int yVal);
        static Trap * (*New)(Trap * self);
        static void (*_RemoveFromTrapList)(Trap * arg1);
        static void (*Die)(Trap * self);
        static void (*_ClearAll)();
        static int (*_GetTrapTypeAt)(int arg1, int arg2);
        static Trap * (*FindRandomTrap)();
        static void (*Move)(Trap * self);
        static void (*_MoveAll)();
        static bool (*Hit)(Trap * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*Update)(Trap * self);
        static void (*RemoveAll)();
        static void (*mark)(Trap * self);
        static void (*CSTR_Trap)(Trap * self);
    };
};

#ifdef _WIN32
inline TrapList * * Trap::trapList = (TrapList* *) 0x83597c;

inline Trap * (*Trap::ptr::GetTrapAt)(int xVal, int yVal) = (Trap * (*)(int xVal, int yVal)) 0x5d7850;
inline void (*Trap::ptr::Trigger)(Trap * self, Entity * ent) = (void (*)(Trap * self, Entity * ent)) 0x5d78a0;
inline bool (*Trap::ptr::IsLive)(Trap * self) = (bool (*)(Trap * self)) 0x5d7910;
inline bool (*Trap::ptr::IsLiveTrapAt)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x5d7920;
inline Trap * (*Trap::ptr::New)(Trap * self) = (Trap * (*)(Trap * self)) 0x5d7940;
inline void (*Trap::ptr::_RemoveFromTrapList)(Trap * arg1) = (void (*)(Trap * arg1)) 0x0;
inline void (*Trap::ptr::Die)(Trap * self) = (void (*)(Trap * self)) 0x5d79a0;
inline void (*Trap::ptr::_ClearAll)() = (void (*)()) 0x0;
inline int (*Trap::ptr::_GetTrapTypeAt)(int arg1, int arg2) = (int (*)(int arg1, int arg2)) 0x0;
inline Trap * (*Trap::ptr::FindRandomTrap)() = (Trap * (*)()) 0x5d79c0;
inline void (*Trap::ptr::Move)(Trap * self) = (void (*)(Trap * self)) 0x5d7a80;
inline void (*Trap::ptr::_MoveAll)() = (void (*)()) 0x0;
inline bool (*Trap::ptr::Hit)(Trap * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Trap * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x5d8410;
inline void (*Trap::ptr::Update)(Trap * self) = (void (*)(Trap * self)) 0x5d84b0;
inline void (*Trap::ptr::RemoveAll)() = (void (*)()) 0x5d8650;
inline void (*Trap::ptr::mark)(Trap * self) = (void (*)(Trap * self)) 0x5d8690;
inline void (*Trap::ptr::CSTR_Trap)(Trap * self) = (void (*)(Trap * self)) 0x5d77c0;
#endif

#ifdef __linux__
inline TrapList * * Trap::trapList = (TrapList* *) 0x856a49c;

inline Trap * (*Trap::ptr::GetTrapAt)(int xVal, int yVal) = (Trap * (*)(int xVal, int yVal)) 0x8191af0;
inline void (*Trap::ptr::Trigger)(Trap * self, Entity * ent) = (void (*)(Trap * self, Entity * ent)) 0x809a8c0;
inline bool (*Trap::ptr::IsLive)(Trap * self) = (bool (*)(Trap * self)) 0x8071cf0;
inline bool (*Trap::ptr::IsLiveTrapAt)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x8192b00;
inline Trap * (*Trap::ptr::New)(Trap * self) = (Trap * (*)(Trap * self)) 0x8192b60;
inline void (*Trap::ptr::_RemoveFromTrapList)(Trap * arg1) = (void (*)(Trap * arg1)) 0x8192be0;
inline void (*Trap::ptr::Die)(Trap * self) = (void (*)(Trap * self)) 0x80935f0;
inline void (*Trap::ptr::_ClearAll)() = (void (*)()) 0x8192c00;
inline int (*Trap::ptr::_GetTrapTypeAt)(int arg1, int arg2) = (int (*)(int arg1, int arg2)) 0x8192c20;
inline Trap * (*Trap::ptr::FindRandomTrap)() = (Trap * (*)()) 0x8192c80;
inline void (*Trap::ptr::Move)(Trap * self) = (void (*)(Trap * self)) 0x8263620;
inline void (*Trap::ptr::_MoveAll)() = (void (*)()) 0x8192d00;
inline bool (*Trap::ptr::Hit)(Trap * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Trap * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x80d52e0;
inline void (*Trap::ptr::Update)(Trap * self) = (void (*)(Trap * self)) 0x812d650;
inline void (*Trap::ptr::RemoveAll)() = (void (*)()) 0x8192d60;
inline void (*Trap::ptr::mark)(Trap * self) = (void (*)(Trap * self)) 0x80a5420;
inline void (*Trap::ptr::CSTR_Trap)(Trap * self) = (void (*)(Trap * self)) 0x8191a80;
#endif
#endif
