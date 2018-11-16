// Generated automatically. Do not edit!
#ifndef _ToughSarcophagus_
#define _ToughSarcophagus_
class Entity;
class Point;
class String;
#include "Enemy.hpp"

class ToughSarcophagus : public Enemy  {
public:
    int spawnType;
    int spawnTimer;
    int numSpawned;
    Enemy * current;
    int vibrateCounter;
    float vibrateOffset;

    // Wrappers
    ToughSarcophagus(int xVal, int yVal, int etype) {
        ptr::CSTR_ToughSarcophagus(this);
        ptr::New(this, xVal, yVal, etype);
    }

    inline static int GetPerRoomCount() { return ptr::GetPerRoomCount(); }
    inline ToughSarcophagus * New(int xVal, int yVal, int etype) { return ptr::New(this, xVal, yVal, etype); }
    inline ToughSarcophagus * _new2() { return ptr::_new2(); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline bool _CanBeDamaged(bool arg1, bool arg2) { return ptr::_CanBeDamaged(this, arg1, arg2); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline virtual void SpawnEnemy3() { ptr::SpawnEnemy3(this); }
    inline static int GetSpawnBeats() { return ptr::GetSpawnBeats(); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void Update() { ptr::Update(this); }
    inline bool _ImmuneToFear() { return ptr::_ImmuneToFear(); }
    inline bool _CanBeLord() { return ptr::_CanBeLord(); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static int (*GetPerRoomCount)();
        static ToughSarcophagus * (*New)(ToughSarcophagus * self, int xVal, int yVal, int etype);
        static ToughSarcophagus * (*_new2)();
        static Point * (*GetMovementDirection)(ToughSarcophagus * self);
        static bool (*_CanBeDamaged)(ToughSarcophagus * self, bool arg1, bool arg2);
        static bool (*Hit)(ToughSarcophagus * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*SpawnEnemy3)(ToughSarcophagus * self);
        static int (*GetSpawnBeats)();
        static void (*MoveSucceed)(ToughSarcophagus * self, bool hitPlayer, bool moveDelayed);
        static void (*Update)(ToughSarcophagus * self);
        static bool (*_ImmuneToFear)();
        static bool (*_CanBeLord)();
        static void (*mark)(ToughSarcophagus * self);
        static void (*CSTR_ToughSarcophagus)(ToughSarcophagus * self);
    };
};

#ifdef _WIN32

inline int (*ToughSarcophagus::ptr::GetPerRoomCount)() = (int (*)()) 0x6604e0;
inline ToughSarcophagus * (*ToughSarcophagus::ptr::New)(ToughSarcophagus * self, int xVal, int yVal, int etype) = (ToughSarcophagus * (*)(ToughSarcophagus * self, int xVal, int yVal, int etype)) 0x660590;
inline ToughSarcophagus * (*ToughSarcophagus::ptr::_new2)() = (ToughSarcophagus * (*)()) 0x0;
inline Point * (*ToughSarcophagus::ptr::GetMovementDirection)(ToughSarcophagus * self) = (Point * (*)(ToughSarcophagus * self)) 0x5fcb60;
inline bool (*ToughSarcophagus::ptr::_CanBeDamaged)(ToughSarcophagus * self, bool arg1, bool arg2) = (bool (*)(ToughSarcophagus * self, bool arg1, bool arg2)) 0x0;
inline bool (*ToughSarcophagus::ptr::Hit)(ToughSarcophagus * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(ToughSarcophagus * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x660790;
inline void (*ToughSarcophagus::ptr::SpawnEnemy3)(ToughSarcophagus * self) = (void (*)(ToughSarcophagus * self)) 0x660850;
inline int (*ToughSarcophagus::ptr::GetSpawnBeats)() = (int (*)()) 0x660b80;
inline void (*ToughSarcophagus::ptr::MoveSucceed)(ToughSarcophagus * self, bool hitPlayer, bool moveDelayed) = (void (*)(ToughSarcophagus * self, bool hitPlayer, bool moveDelayed)) 0x660c30;
inline void (*ToughSarcophagus::ptr::Update)(ToughSarcophagus * self) = (void (*)(ToughSarcophagus * self)) 0x660d60;
inline bool (*ToughSarcophagus::ptr::_ImmuneToFear)() = (bool (*)()) 0x0;
inline bool (*ToughSarcophagus::ptr::_CanBeLord)() = (bool (*)()) 0x0;
inline void (*ToughSarcophagus::ptr::mark)(ToughSarcophagus * self) = (void (*)(ToughSarcophagus * self)) 0x660db0;
inline void (*ToughSarcophagus::ptr::CSTR_ToughSarcophagus)(ToughSarcophagus * self) = (void (*)(ToughSarcophagus * self)) 0x660450;
#endif

#ifdef __linux__

inline int (*ToughSarcophagus::ptr::GetPerRoomCount)() = (int (*)()) 0x81d62d0;
inline ToughSarcophagus * (*ToughSarcophagus::ptr::New)(ToughSarcophagus * self, int xVal, int yVal, int etype) = (ToughSarcophagus * (*)(ToughSarcophagus * self, int xVal, int yVal, int etype)) 0x81d6350;
inline ToughSarcophagus * (*ToughSarcophagus::ptr::_new2)() = (ToughSarcophagus * (*)()) 0x81d64b0;
inline Point * (*ToughSarcophagus::ptr::GetMovementDirection)(ToughSarcophagus * self) = (Point * (*)(ToughSarcophagus * self)) 0x80b3e50;
inline bool (*ToughSarcophagus::ptr::_CanBeDamaged)(ToughSarcophagus * self, bool arg1, bool arg2) = (bool (*)(ToughSarcophagus * self, bool arg1, bool arg2)) 0x80774d0;
inline bool (*ToughSarcophagus::ptr::Hit)(ToughSarcophagus * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(ToughSarcophagus * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x83967b0;
inline void (*ToughSarcophagus::ptr::SpawnEnemy3)(ToughSarcophagus * self) = (void (*)(ToughSarcophagus * self)) 0x83aa050;
inline int (*ToughSarcophagus::ptr::GetSpawnBeats)() = (int (*)()) 0x81d64d0;
inline void (*ToughSarcophagus::ptr::MoveSucceed)(ToughSarcophagus * self, bool hitPlayer, bool moveDelayed) = (void (*)(ToughSarcophagus * self, bool hitPlayer, bool moveDelayed)) 0x83aa290;
inline void (*ToughSarcophagus::ptr::Update)(ToughSarcophagus * self) = (void (*)(ToughSarcophagus * self)) 0x837ed40;
inline bool (*ToughSarcophagus::ptr::_ImmuneToFear)() = (bool (*)()) 0x80774e0;
inline bool (*ToughSarcophagus::ptr::_CanBeLord)() = (bool (*)()) 0x80774f0;
inline void (*ToughSarcophagus::ptr::mark)(ToughSarcophagus * self) = (void (*)(ToughSarcophagus * self)) 0x80b0140;
inline void (*ToughSarcophagus::ptr::CSTR_ToughSarcophagus)(ToughSarcophagus * self) = (void (*)(ToughSarcophagus * self)) 0x81d6270;
#endif
#endif
