// Generated automatically. Do not edit!
#ifndef _TrainingSarcophagus_
#define _TrainingSarcophagus_
class Entity;
class Point;
class String;
#include "Enemy.hpp"

class TrainingSarcophagus : public Enemy  {
public:
    int enemyNum;
    int vibrateCounter;
    float vibrateOffset;

    // Wrappers
    inline TrainingSarcophagus * New(int xVal, int yVal, int eNum) { return ptr::New(this, xVal, yVal, eNum); }
    inline TrainingSarcophagus * _new2() { return ptr::_new2(); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline int PerformMovement(int xVal, int yVal) { return ptr::PerformMovement(this, xVal, yVal); }
    inline bool CanBeDamaged(bool phasing, bool piercing) { return ptr::CanBeDamaged(this, phasing, piercing); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline void MoveFail() { ptr::MoveFail(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void Update() { ptr::Update(this); }
    inline bool _CanBeLord() { return ptr::_CanBeLord(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static TrainingSarcophagus * (*New)(TrainingSarcophagus * self, int xVal, int yVal, int eNum);
        static TrainingSarcophagus * (*_new2)();
        static Point * (*GetMovementDirection)(TrainingSarcophagus * self);
        static int (*PerformMovement)(TrainingSarcophagus * self, int xVal, int yVal);
        static bool (*CanBeDamaged)(TrainingSarcophagus * self, bool phasing, bool piercing);
        static bool (*Hit)(TrainingSarcophagus * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*MoveFail)(TrainingSarcophagus * self);
        static void (*MoveSucceed)(TrainingSarcophagus * self, bool hitPlayer, bool moveDelayed);
        static void (*Update)(TrainingSarcophagus * self);
        static bool (*_CanBeLord)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

TrainingSarcophagus * (*TrainingSarcophagus::ptr::New)(TrainingSarcophagus * self, int xVal, int yVal, int eNum) = (TrainingSarcophagus * (*)(TrainingSarcophagus * self, int xVal, int yVal, int eNum)) 0x66c550;
TrainingSarcophagus * (*TrainingSarcophagus::ptr::_new2)() = (TrainingSarcophagus * (*)()) 0x0;
Point * (*TrainingSarcophagus::ptr::GetMovementDirection)(TrainingSarcophagus * self) = (Point * (*)(TrainingSarcophagus * self)) 0x63d0d0;
int (*TrainingSarcophagus::ptr::PerformMovement)(TrainingSarcophagus * self, int xVal, int yVal) = (int (*)(TrainingSarcophagus * self, int xVal, int yVal)) 0x406aa0;
bool (*TrainingSarcophagus::ptr::CanBeDamaged)(TrainingSarcophagus * self, bool phasing, bool piercing) = (bool (*)(TrainingSarcophagus * self, bool phasing, bool piercing)) 0x5fbe20;
bool (*TrainingSarcophagus::ptr::Hit)(TrainingSarcophagus * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(TrainingSarcophagus * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x57f6f0;
void (*TrainingSarcophagus::ptr::MoveFail)(TrainingSarcophagus * self) = (void (*)(TrainingSarcophagus * self)) 0x66c640;
void (*TrainingSarcophagus::ptr::MoveSucceed)(TrainingSarcophagus * self, bool hitPlayer, bool moveDelayed) = (void (*)(TrainingSarcophagus * self, bool hitPlayer, bool moveDelayed)) 0x64ece0;
void (*TrainingSarcophagus::ptr::Update)(TrainingSarcophagus * self) = (void (*)(TrainingSarcophagus * self)) 0x66c8d0;
bool (*TrainingSarcophagus::ptr::_CanBeLord)() = (bool (*)()) 0x0;
void (*TrainingSarcophagus::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

TrainingSarcophagus * (*TrainingSarcophagus::ptr::New)(TrainingSarcophagus * self, int xVal, int yVal, int eNum) = (TrainingSarcophagus * (*)(TrainingSarcophagus * self, int xVal, int yVal, int eNum)) 0x81da810;
TrainingSarcophagus * (*TrainingSarcophagus::ptr::_new2)() = (TrainingSarcophagus * (*)()) 0x81da910;
Point * (*TrainingSarcophagus::ptr::GetMovementDirection)(TrainingSarcophagus * self) = (Point * (*)(TrainingSarcophagus * self)) 0x80b3c50;
int (*TrainingSarcophagus::ptr::PerformMovement)(TrainingSarcophagus * self, int xVal, int yVal) = (int (*)(TrainingSarcophagus * self, int xVal, int yVal)) 0x8077c90;
bool (*TrainingSarcophagus::ptr::CanBeDamaged)(TrainingSarcophagus * self, bool phasing, bool piercing) = (bool (*)(TrainingSarcophagus * self, bool phasing, bool piercing)) 0x8077ca0;
bool (*TrainingSarcophagus::ptr::Hit)(TrainingSarcophagus * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(TrainingSarcophagus * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x8077cb0;
void (*TrainingSarcophagus::ptr::MoveFail)(TrainingSarcophagus * self) = (void (*)(TrainingSarcophagus * self)) 0x83ab580;
void (*TrainingSarcophagus::ptr::MoveSucceed)(TrainingSarcophagus * self, bool hitPlayer, bool moveDelayed) = (void (*)(TrainingSarcophagus * self, bool hitPlayer, bool moveDelayed)) 0x83ab860;
void (*TrainingSarcophagus::ptr::Update)(TrainingSarcophagus * self) = (void (*)(TrainingSarcophagus * self)) 0x837dea0;
bool (*TrainingSarcophagus::ptr::_CanBeLord)() = (bool (*)()) 0x8077cc0;
void (*TrainingSarcophagus::ptr::_mark)() = (void (*)()) 0x80afed0;
#endif
#endif
