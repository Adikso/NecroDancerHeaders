// Generated automatically. Do not edit!
#ifndef _SwarmSarcophagus_
#define _SwarmSarcophagus_
class Entity;
class List51;
class Point;
class String;
#include "Enemy.hpp"

class SwarmSarcophagus : public Enemy  {
public:
    int queuedSpawn;
    bool prepSpawn;
    int vibrateCounter;
    float vibrateOffset;
    static List51 * * swarmSarcophagi;

    // Wrappers
    inline SwarmSarcophagus * New(int xVal, int yVal) { return ptr::New(this, xVal, yVal); }
    inline SwarmSarcophagus * _new2() { return ptr::_new2(); }
    inline virtual void QueueSpawn(int type) { ptr::QueueSpawn(this, type); }
    inline Point * _GetMovementDirection() { return ptr::_GetMovementDirection(); }
    inline bool _CanBeDamaged(bool arg1, bool arg2) { return ptr::_CanBeDamaged(this, arg1, arg2); }
    inline bool _Hit(String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) { return ptr::_Hit(this, arg1, arg2, arg3, arg4, arg5, arg6); }
    inline virtual void SpawnEnemy2(int type) { ptr::SpawnEnemy2(this, type); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void Update() { ptr::Update(this); }
    inline bool _CanBeLord() { return ptr::_CanBeLord(); }
    inline void Delete() { ptr::Delete(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static SwarmSarcophagus * (*New)(SwarmSarcophagus * self, int xVal, int yVal);
        static SwarmSarcophagus * (*_new2)();
        static void (*QueueSpawn)(SwarmSarcophagus * self, int type);
        static Point * (*_GetMovementDirection)();
        static bool (*_CanBeDamaged)(SwarmSarcophagus * self, bool arg1, bool arg2);
        static bool (*_Hit)(SwarmSarcophagus * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6);
        static void (*SpawnEnemy2)(SwarmSarcophagus * self, int type);
        static void (*MoveSucceed)(SwarmSarcophagus * self, bool hitPlayer, bool moveDelayed);
        static void (*Update)(SwarmSarcophagus * self);
        static bool (*_CanBeLord)();
        static void (*Delete)(SwarmSarcophagus * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32
List51 * * SwarmSarcophagus::swarmSarcophagi = (List51* *) 0x835588;

SwarmSarcophagus * (*SwarmSarcophagus::ptr::New)(SwarmSarcophagus * self, int xVal, int yVal) = (SwarmSarcophagus * (*)(SwarmSarcophagus * self, int xVal, int yVal)) 0x65d9b0;
SwarmSarcophagus * (*SwarmSarcophagus::ptr::_new2)() = (SwarmSarcophagus * (*)()) 0x0;
void (*SwarmSarcophagus::ptr::QueueSpawn)(SwarmSarcophagus * self, int type) = (void (*)(SwarmSarcophagus * self, int type)) 0x65dbd0;
Point * (*SwarmSarcophagus::ptr::_GetMovementDirection)() = (Point * (*)()) 0x0;
bool (*SwarmSarcophagus::ptr::_CanBeDamaged)(SwarmSarcophagus * self, bool arg1, bool arg2) = (bool (*)(SwarmSarcophagus * self, bool arg1, bool arg2)) 0x0;
bool (*SwarmSarcophagus::ptr::_Hit)(SwarmSarcophagus * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(SwarmSarcophagus * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x0;
void (*SwarmSarcophagus::ptr::SpawnEnemy2)(SwarmSarcophagus * self, int type) = (void (*)(SwarmSarcophagus * self, int type)) 0x65dbe0;
void (*SwarmSarcophagus::ptr::MoveSucceed)(SwarmSarcophagus * self, bool hitPlayer, bool moveDelayed) = (void (*)(SwarmSarcophagus * self, bool hitPlayer, bool moveDelayed)) 0x65dee0;
void (*SwarmSarcophagus::ptr::Update)(SwarmSarcophagus * self) = (void (*)(SwarmSarcophagus * self)) 0x65e010;
bool (*SwarmSarcophagus::ptr::_CanBeLord)() = (bool (*)()) 0x0;
void (*SwarmSarcophagus::ptr::Delete)(SwarmSarcophagus * self) = (void (*)(SwarmSarcophagus * self)) 0x65e060;
void (*SwarmSarcophagus::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__
List51 * * SwarmSarcophagus::swarmSarcophagi = (List51* *) 0x856a350;

SwarmSarcophagus * (*SwarmSarcophagus::ptr::New)(SwarmSarcophagus * self, int xVal, int yVal) = (SwarmSarcophagus * (*)(SwarmSarcophagus * self, int xVal, int yVal)) 0x81d4170;
SwarmSarcophagus * (*SwarmSarcophagus::ptr::_new2)() = (SwarmSarcophagus * (*)()) 0x81d4370;
void (*SwarmSarcophagus::ptr::QueueSpawn)(SwarmSarcophagus * self, int type) = (void (*)(SwarmSarcophagus * self, int type)) 0x80769b0;
Point * (*SwarmSarcophagus::ptr::_GetMovementDirection)() = (Point * (*)()) 0x80b4260;
bool (*SwarmSarcophagus::ptr::_CanBeDamaged)(SwarmSarcophagus * self, bool arg1, bool arg2) = (bool (*)(SwarmSarcophagus * self, bool arg1, bool arg2)) 0x80769c0;
bool (*SwarmSarcophagus::ptr::_Hit)(SwarmSarcophagus * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(SwarmSarcophagus * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x80769d0;
void (*SwarmSarcophagus::ptr::SpawnEnemy2)(SwarmSarcophagus * self, int type) = (void (*)(SwarmSarcophagus * self, int type)) 0x83a9d80;
void (*SwarmSarcophagus::ptr::MoveSucceed)(SwarmSarcophagus * self, bool hitPlayer, bool moveDelayed) = (void (*)(SwarmSarcophagus * self, bool hitPlayer, bool moveDelayed)) 0x83a9f50;
void (*SwarmSarcophagus::ptr::Update)(SwarmSarcophagus * self) = (void (*)(SwarmSarcophagus * self)) 0x837eda0;
bool (*SwarmSarcophagus::ptr::_CanBeLord)() = (bool (*)()) 0x80769e0;
void (*SwarmSarcophagus::ptr::Delete)(SwarmSarcophagus * self) = (void (*)(SwarmSarcophagus * self)) 0x80936c0;
void (*SwarmSarcophagus::ptr::_mark)() = (void (*)()) 0x80b01b0;
#endif
#endif
