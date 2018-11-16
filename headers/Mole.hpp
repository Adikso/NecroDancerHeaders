// Generated automatically. Do not edit!
#ifndef _Mole_
#define _Mole_
class Entity;
class MoleDirt;
class Point;
class String;
#include "Enemy.hpp"

class Mole : public Enemy  {
public:
    MoleDirt * currentDirt;
    bool wasBurrowed;
    bool isBurrowed;

    // Wrappers
    Mole(int xVal, int yVal, int l) {
        ptr::CSTR_Mole(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline virtual void UnoccupyDirt() { ptr::UnoccupyDirt(this); }
    inline virtual void PutDirt() { ptr::PutDirt(this); }
    inline Mole * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Mole * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void MoveFail() { ptr::MoveFail(this); }
    inline bool CanBeDamaged(bool phasing, bool piercing) { return ptr::CanBeDamaged(this, phasing, piercing); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void Delete() { ptr::Delete(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static void (*UnoccupyDirt)(Mole * self);
        static void (*PutDirt)(Mole * self);
        static Mole * (*New)(Mole * self, int xVal, int yVal, int l);
        static Mole * (*_new2)();
        static void (*Update)(Mole * self);
        static void (*Render)(Mole * self);
        static void (*MoveSucceed)(Mole * self, bool hitPlayer, bool moveDelayed);
        static void (*MoveFail)(Mole * self);
        static bool (*CanBeDamaged)(Mole * self, bool phasing, bool piercing);
        static bool (*Hit)(Mole * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static Point * (*GetMovementDirection)(Mole * self);
        static void (*Delete)(Mole * self);
        static void (*_mark)();
        static void (*CSTR_Mole)(Mole * self);
    };
};

#ifdef _WIN32

inline void (*Mole::ptr::UnoccupyDirt)(Mole * self) = (void (*)(Mole * self)) 0x641740;
inline void (*Mole::ptr::PutDirt)(Mole * self) = (void (*)(Mole * self)) 0x641770;
inline Mole * (*Mole::ptr::New)(Mole * self, int xVal, int yVal, int l) = (Mole * (*)(Mole * self, int xVal, int yVal, int l)) 0x641860;
inline Mole * (*Mole::ptr::_new2)() = (Mole * (*)()) 0x0;
inline void (*Mole::ptr::Update)(Mole * self) = (void (*)(Mole * self)) 0x641ab0;
inline void (*Mole::ptr::Render)(Mole * self) = (void (*)(Mole * self)) 0x641d80;
inline void (*Mole::ptr::MoveSucceed)(Mole * self, bool hitPlayer, bool moveDelayed) = (void (*)(Mole * self, bool hitPlayer, bool moveDelayed)) 0x641da0;
inline void (*Mole::ptr::MoveFail)(Mole * self) = (void (*)(Mole * self)) 0x641f50;
inline bool (*Mole::ptr::CanBeDamaged)(Mole * self, bool phasing, bool piercing) = (bool (*)(Mole * self, bool phasing, bool piercing)) 0x641f60;
inline bool (*Mole::ptr::Hit)(Mole * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Mole * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x63b710;
inline Point * (*Mole::ptr::GetMovementDirection)(Mole * self) = (Point * (*)(Mole * self)) 0x641f80;
inline void (*Mole::ptr::Delete)(Mole * self) = (void (*)(Mole * self)) 0x642180;
inline void (*Mole::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Mole::ptr::CSTR_Mole)(Mole * self) = (void (*)(Mole * self)) 0x6416d0;
#endif

#ifdef __linux__

inline void (*Mole::ptr::UnoccupyDirt)(Mole * self) = (void (*)(Mole * self)) 0x80760f0;
inline void (*Mole::ptr::PutDirt)(Mole * self) = (void (*)(Mole * self)) 0x81c2bb0;
inline Mole * (*Mole::ptr::New)(Mole * self, int xVal, int yVal, int l) = (Mole * (*)(Mole * self, int xVal, int yVal, int l)) 0x81c2610;
inline Mole * (*Mole::ptr::_new2)() = (Mole * (*)()) 0x81c27d0;
inline void (*Mole::ptr::Update)(Mole * self) = (void (*)(Mole * self)) 0x8382350;
inline void (*Mole::ptr::Render)(Mole * self) = (void (*)(Mole * self)) 0x830c070;
inline void (*Mole::ptr::MoveSucceed)(Mole * self, bool hitPlayer, bool moveDelayed) = (void (*)(Mole * self, bool hitPlayer, bool moveDelayed)) 0x83a5090;
inline void (*Mole::ptr::MoveFail)(Mole * self) = (void (*)(Mole * self)) 0x8135230;
inline bool (*Mole::ptr::CanBeDamaged)(Mole * self, bool phasing, bool piercing) = (bool (*)(Mole * self, bool phasing, bool piercing)) 0x8076120;
inline bool (*Mole::ptr::Hit)(Mole * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Mole * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x8398f10;
inline Point * (*Mole::ptr::GetMovementDirection)(Mole * self) = (Point * (*)(Mole * self)) 0x81335a0;
inline void (*Mole::ptr::Delete)(Mole * self) = (void (*)(Mole * self)) 0x8093710;
inline void (*Mole::ptr::_mark)() = (void (*)()) 0x80b06d0;
inline void (*Mole::ptr::CSTR_Mole)(Mole * self) = (void (*)(Mole * self)) 0x81c25d0;
#endif
#endif
