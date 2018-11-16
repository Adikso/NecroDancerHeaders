// Generated automatically. Do not edit!
#ifndef _TarMonster_
#define _TarMonster_
class Entity;
class Player;
class Point;
class Sprite;
class String;
#include "EnemyClamper.hpp"

class TarMonster : public EnemyClamper  {
public:
    Sprite * image2;
    int homeX;
    int homeY;
    int startingCoinsToDrop;
    bool hasMoved;
    Player * clampedOnto;

    // Wrappers
    TarMonster(int xVal, int yVal, int l) {
        ptr::CSTR_TarMonster(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline TarMonster * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline TarMonster * _new2() { return ptr::_new2(); }
    inline bool CanBeDamaged(bool phasing, bool piercing) { return ptr::CanBeDamaged(this, phasing, piercing); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline virtual void AttemptClamp() { ptr::AttemptClamp(this); }
    inline int PerformMovement(int xVal, int yVal) { return ptr::PerformMovement(this, xVal, yVal); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline bool _Hit(String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) { return ptr::_Hit(this, arg1, arg2, arg3, arg4, arg5, arg6); }
    inline bool DislodgeAttempt() { return ptr::DislodgeAttempt(this); }
    inline void Die() { ptr::Die(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static TarMonster * (*New)(TarMonster * self, int xVal, int yVal, int l);
        static TarMonster * (*_new2)();
        static bool (*CanBeDamaged)(TarMonster * self, bool phasing, bool piercing);
        static void (*Update)(TarMonster * self);
        static void (*Render)(TarMonster * self);
        static Point * (*GetMovementDirection)(TarMonster * self);
        static void (*AttemptClamp)(TarMonster * self);
        static int (*PerformMovement)(TarMonster * self, int xVal, int yVal);
        static void (*MoveSucceed)(TarMonster * self, bool hitPlayer, bool moveDelayed);
        static bool (*_Hit)(TarMonster * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6);
        static bool (*DislodgeAttempt)(TarMonster * self);
        static void (*Die)(TarMonster * self);
        static void (*mark)(TarMonster * self);
        static void (*CSTR_TarMonster)(TarMonster * self);
    };
};

#ifdef _WIN32

inline TarMonster * (*TarMonster::ptr::New)(TarMonster * self, int xVal, int yVal, int l) = (TarMonster * (*)(TarMonster * self, int xVal, int yVal, int l)) 0x63f7c0;
inline TarMonster * (*TarMonster::ptr::_new2)() = (TarMonster * (*)()) 0x0;
inline bool (*TarMonster::ptr::CanBeDamaged)(TarMonster * self, bool phasing, bool piercing) = (bool (*)(TarMonster * self, bool phasing, bool piercing)) 0x63ff60;
inline void (*TarMonster::ptr::Update)(TarMonster * self) = (void (*)(TarMonster * self)) 0x63ff90;
inline void (*TarMonster::ptr::Render)(TarMonster * self) = (void (*)(TarMonster * self)) 0x640250;
inline Point * (*TarMonster::ptr::GetMovementDirection)(TarMonster * self) = (Point * (*)(TarMonster * self)) 0x6402b0;
inline void (*TarMonster::ptr::AttemptClamp)(TarMonster * self) = (void (*)(TarMonster * self)) 0x640c30;
inline int (*TarMonster::ptr::PerformMovement)(TarMonster * self, int xVal, int yVal) = (int (*)(TarMonster * self, int xVal, int yVal)) 0x641020;
inline void (*TarMonster::ptr::MoveSucceed)(TarMonster * self, bool hitPlayer, bool moveDelayed) = (void (*)(TarMonster * self, bool hitPlayer, bool moveDelayed)) 0x641400;
inline bool (*TarMonster::ptr::_Hit)(TarMonster * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(TarMonster * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x0;
inline bool (*TarMonster::ptr::DislodgeAttempt)(TarMonster * self) = (bool (*)(TarMonster * self)) 0x641510;
inline void (*TarMonster::ptr::Die)(TarMonster * self) = (void (*)(TarMonster * self)) 0x6415e0;
inline void (*TarMonster::ptr::mark)(TarMonster * self) = (void (*)(TarMonster * self)) 0x641620;
inline void (*TarMonster::ptr::CSTR_TarMonster)(TarMonster * self) = (void (*)(TarMonster * self)) 0x63f720;
#endif

#ifdef __linux__

inline TarMonster * (*TarMonster::ptr::New)(TarMonster * self, int xVal, int yVal, int l) = (TarMonster * (*)(TarMonster * self, int xVal, int yVal, int l)) 0x81c1f80;
inline TarMonster * (*TarMonster::ptr::_new2)() = (TarMonster * (*)()) 0x81c25b0;
inline bool (*TarMonster::ptr::CanBeDamaged)(TarMonster * self, bool phasing, bool piercing) = (bool (*)(TarMonster * self, bool phasing, bool piercing)) 0x807f700;
inline void (*TarMonster::ptr::Update)(TarMonster * self) = (void (*)(TarMonster * self)) 0x8382550;
inline void (*TarMonster::ptr::Render)(TarMonster * self) = (void (*)(TarMonster * self)) 0x830c0a0;
inline Point * (*TarMonster::ptr::GetMovementDirection)(TarMonster * self) = (Point * (*)(TarMonster * self)) 0x8135ab0;
inline void (*TarMonster::ptr::AttemptClamp)(TarMonster * self) = (void (*)(TarMonster * self)) 0x83a4c40;
inline int (*TarMonster::ptr::PerformMovement)(TarMonster * self, int xVal, int yVal) = (int (*)(TarMonster * self, int xVal, int yVal)) 0x826aba0;
inline void (*TarMonster::ptr::MoveSucceed)(TarMonster * self, bool hitPlayer, bool moveDelayed) = (void (*)(TarMonster * self, bool hitPlayer, bool moveDelayed)) 0x83a4f00;
inline bool (*TarMonster::ptr::_Hit)(TarMonster * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(TarMonster * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x8398fe0;
inline bool (*TarMonster::ptr::DislodgeAttempt)(TarMonster * self) = (bool (*)(TarMonster * self)) 0x80c71b0;
inline void (*TarMonster::ptr::Die)(TarMonster * self) = (void (*)(TarMonster * self)) 0x83b62e0;
inline void (*TarMonster::ptr::mark)(TarMonster * self) = (void (*)(TarMonster * self)) 0x80b1b20;
inline void (*TarMonster::ptr::CSTR_TarMonster)(TarMonster * self) = (void (*)(TarMonster * self)) 0x81c1f20;
#endif
#endif
