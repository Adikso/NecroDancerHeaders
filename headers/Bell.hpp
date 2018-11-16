// Generated automatically. Do not edit!
#ifndef _Bell_
#define _Bell_
class Entity;
class List53;
class Point;
class String;
#include "Enemy.hpp"

class Bell : public Enemy  {
public:
    int bellNum;
    bool isBig;
    bool beingSought;
    int rungOnBeat;
    Enemy * enemy;
    static List53 * * bells;

    // Wrappers
    Bell(int xVal, int yVal, int num) {
        ptr::CSTR_Bell(this);
        ptr::New(this, xVal, yVal, num);
    }

    inline Bell * New(int xVal, int yVal, int num) { return ptr::New(this, xVal, yVal, num); }
    inline Bell * _new2() { return ptr::_new2(); }
    inline virtual bool Ringable() { return ptr::Ringable(this); }
    inline virtual Enemy * SpawnEnemy(int xVal, int yVal, int enemyType) { return ptr::SpawnEnemy(this, xVal, yVal, enemyType); }
    inline virtual void Ring(bool makeEnemy) { ptr::Ring(this, makeEnemy); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline virtual bool HasBeenRung() { return ptr::HasBeenRung(this); }
    inline void Die() { ptr::Die(this); }
    inline static Bell * GetBellAt(int xVal, int yVal) { return ptr::GetBellAt(xVal, yVal); }
    inline bool _ImmuneToEarth() { return ptr::_ImmuneToEarth(); }
    inline bool _ImmuneToFear() { return ptr::_ImmuneToFear(); }
    inline void Update() { ptr::Update(this); }
    inline Point * _GetMovementDirection() { return ptr::_GetMovementDirection(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Bell * (*New)(Bell * self, int xVal, int yVal, int num);
        static Bell * (*_new2)();
        static bool (*Ringable)(Bell * self);
        static Enemy * (*SpawnEnemy)(Bell * self, int xVal, int yVal, int enemyType);
        static void (*Ring)(Bell * self, bool makeEnemy);
        static bool (*Hit)(Bell * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static bool (*HasBeenRung)(Bell * self);
        static void (*Die)(Bell * self);
        static Bell * (*GetBellAt)(int xVal, int yVal);
        static bool (*_ImmuneToEarth)();
        static bool (*_ImmuneToFear)();
        static void (*Update)(Bell * self);
        static Point * (*_GetMovementDirection)();
        static void (*_mark)();
        static void (*CSTR_Bell)(Bell * self);
    };
};

#ifdef _WIN32
inline List53 * * Bell::bells = (List53* *) 0x835584;

inline Bell * (*Bell::ptr::New)(Bell * self, int xVal, int yVal, int num) = (Bell * (*)(Bell * self, int xVal, int yVal, int num)) 0x66a6a0;
inline Bell * (*Bell::ptr::_new2)() = (Bell * (*)()) 0x0;
inline bool (*Bell::ptr::Ringable)(Bell * self) = (bool (*)(Bell * self)) 0x66a880;
inline Enemy * (*Bell::ptr::SpawnEnemy)(Bell * self, int xVal, int yVal, int enemyType) = (Enemy * (*)(Bell * self, int xVal, int yVal, int enemyType)) 0x66aac0;
inline void (*Bell::ptr::Ring)(Bell * self, bool makeEnemy) = (void (*)(Bell * self, bool makeEnemy)) 0x66abc0;
inline bool (*Bell::ptr::Hit)(Bell * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Bell * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x66b2a0;
inline bool (*Bell::ptr::HasBeenRung)(Bell * self) = (bool (*)(Bell * self)) 0x66b4f0;
inline void (*Bell::ptr::Die)(Bell * self) = (void (*)(Bell * self)) 0x66b500;
inline Bell * (*Bell::ptr::GetBellAt)(int xVal, int yVal) = (Bell * (*)(int xVal, int yVal)) 0x66b530;
inline bool (*Bell::ptr::_ImmuneToEarth)() = (bool (*)()) 0x0;
inline bool (*Bell::ptr::_ImmuneToFear)() = (bool (*)()) 0x0;
inline void (*Bell::ptr::Update)(Bell * self) = (void (*)(Bell * self)) 0x66b580;
inline Point * (*Bell::ptr::_GetMovementDirection)() = (Point * (*)()) 0x0;
inline void (*Bell::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Bell::ptr::CSTR_Bell)(Bell * self) = (void (*)(Bell * self)) 0x66a620;
#endif

#ifdef __linux__
inline List53 * * Bell::bells = (List53* *) 0x856a344;

inline Bell * (*Bell::ptr::New)(Bell * self, int xVal, int yVal, int num) = (Bell * (*)(Bell * self, int xVal, int yVal, int num)) 0x81d99a0;
inline Bell * (*Bell::ptr::_new2)() = (Bell * (*)()) 0x81d9b30;
inline bool (*Bell::ptr::Ringable)(Bell * self) = (bool (*)(Bell * self)) 0x8263b60;
inline Enemy * (*Bell::ptr::SpawnEnemy)(Bell * self, int xVal, int yVal, int enemyType) = (Enemy * (*)(Bell * self, int xVal, int yVal, int enemyType)) 0x81d0180;
inline void (*Bell::ptr::Ring)(Bell * self, bool makeEnemy) = (void (*)(Bell * self, bool makeEnemy)) 0x83aaeb0;
inline bool (*Bell::ptr::Hit)(Bell * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Bell * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x8396430;
inline bool (*Bell::ptr::HasBeenRung)(Bell * self) = (bool (*)(Bell * self)) 0x8077ab0;
inline void (*Bell::ptr::Die)(Bell * self) = (void (*)(Bell * self)) 0x83b5a60;
inline Bell * (*Bell::ptr::GetBellAt)(int xVal, int yVal) = (Bell * (*)(int xVal, int yVal)) 0x81d9b50;
inline bool (*Bell::ptr::_ImmuneToEarth)() = (bool (*)()) 0x8077ac0;
inline bool (*Bell::ptr::_ImmuneToFear)() = (bool (*)()) 0x8077ad0;
inline void (*Bell::ptr::Update)(Bell * self) = (void (*)(Bell * self)) 0x837dff0;
inline Point * (*Bell::ptr::_GetMovementDirection)() = (Point * (*)()) 0x80b3c80;
inline void (*Bell::ptr::_mark)() = (void (*)()) 0x80aff50;
inline void (*Bell::ptr::CSTR_Bell)(Bell * self) = (void (*)(Bell * self)) 0x81d9950;
#endif
#endif
