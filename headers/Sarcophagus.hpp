// Generated automatically. Do not edit!
#ifndef _Sarcophagus_
#define _Sarcophagus_
class List50;
class Point;
#include "Enemy.hpp"

class Sarcophagus : public Enemy  {
public:
    int numEnemiesSpawned;
    Enemy * spawnedEnemy;
    int vibrateCounter;
    float vibrateOffset;
    static List50 * * sarcophagi;

    // Wrappers
    Sarcophagus(int xVal, int yVal, int l) {
        ptr::CSTR_Sarcophagus(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Sarcophagus * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Sarcophagus * _new2() { return ptr::_new2(); }
    inline void Die() { ptr::Die(this); }
    inline static void DestroyAll() { ptr::DestroyAll(); }
    inline static int _GetNumSarcophagi() { return ptr::_GetNumSarcophagi(); }
    inline Point * _GetMovementDirection() { return ptr::_GetMovementDirection(); }
    inline int _PerformMovement(int arg1, int arg2) { return ptr::_PerformMovement(this, arg1, arg2); }
    inline bool _ImmuneToFear() { return ptr::_ImmuneToFear(); }
    inline void MoveFail() { ptr::MoveFail(this); }
    inline void _MoveSucceed(bool arg1, bool arg2) { ptr::_MoveSucceed(this, arg1, arg2); }
    inline void Update() { ptr::Update(this); }
    inline bool _CanBeLord() { return ptr::_CanBeLord(); }
    inline void Delete() { ptr::Delete(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Sarcophagus * (*New)(Sarcophagus * self, int xVal, int yVal, int l);
        static Sarcophagus * (*_new2)();
        static void (*Die)(Sarcophagus * self);
        static void (*DestroyAll)();
        static int (*_GetNumSarcophagi)();
        static Point * (*_GetMovementDirection)();
        static int (*_PerformMovement)(Sarcophagus * self, int arg1, int arg2);
        static bool (*_ImmuneToFear)();
        static void (*MoveFail)(Sarcophagus * self);
        static void (*_MoveSucceed)(Sarcophagus * self, bool arg1, bool arg2);
        static void (*Update)(Sarcophagus * self);
        static bool (*_CanBeLord)();
        static void (*Delete)(Sarcophagus * self);
        static void (*_mark)();
        static void (*CSTR_Sarcophagus)(Sarcophagus * self);
    };
};

#ifdef _WIN32
inline List50 * * Sarcophagus::sarcophagi = (List50* *) 0x83558c;

inline Sarcophagus * (*Sarcophagus::ptr::New)(Sarcophagus * self, int xVal, int yVal, int l) = (Sarcophagus * (*)(Sarcophagus * self, int xVal, int yVal, int l)) 0x64e4a0;
inline Sarcophagus * (*Sarcophagus::ptr::_new2)() = (Sarcophagus * (*)()) 0x0;
inline void (*Sarcophagus::ptr::Die)(Sarcophagus * self) = (void (*)(Sarcophagus * self)) 0x64e6b0;
inline void (*Sarcophagus::ptr::DestroyAll)() = (void (*)()) 0x64e710;
inline int (*Sarcophagus::ptr::_GetNumSarcophagi)() = (int (*)()) 0x0;
inline Point * (*Sarcophagus::ptr::_GetMovementDirection)() = (Point * (*)()) 0x0;
inline int (*Sarcophagus::ptr::_PerformMovement)(Sarcophagus * self, int arg1, int arg2) = (int (*)(Sarcophagus * self, int arg1, int arg2)) 0x0;
inline bool (*Sarcophagus::ptr::_ImmuneToFear)() = (bool (*)()) 0x0;
inline void (*Sarcophagus::ptr::MoveFail)(Sarcophagus * self) = (void (*)(Sarcophagus * self)) 0x64e750;
inline void (*Sarcophagus::ptr::_MoveSucceed)(Sarcophagus * self, bool arg1, bool arg2) = (void (*)(Sarcophagus * self, bool arg1, bool arg2)) 0x0;
inline void (*Sarcophagus::ptr::Update)(Sarcophagus * self) = (void (*)(Sarcophagus * self)) 0x64ede0;
inline bool (*Sarcophagus::ptr::_CanBeLord)() = (bool (*)()) 0x0;
inline void (*Sarcophagus::ptr::Delete)(Sarcophagus * self) = (void (*)(Sarcophagus * self)) 0x64ee30;
inline void (*Sarcophagus::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Sarcophagus::ptr::CSTR_Sarcophagus)(Sarcophagus * self) = (void (*)(Sarcophagus * self)) 0x64e420;
#endif

#ifdef __linux__
inline List50 * * Sarcophagus::sarcophagi = (List50* *) 0x856a354;

inline Sarcophagus * (*Sarcophagus::ptr::New)(Sarcophagus * self, int xVal, int yVal, int l) = (Sarcophagus * (*)(Sarcophagus * self, int xVal, int yVal, int l)) 0x81c5db0;
inline Sarcophagus * (*Sarcophagus::ptr::_new2)() = (Sarcophagus * (*)()) 0x81c6320;
inline void (*Sarcophagus::ptr::Die)(Sarcophagus * self) = (void (*)(Sarcophagus * self)) 0x83b5e80;
inline void (*Sarcophagus::ptr::DestroyAll)() = (void (*)()) 0x81c6340;
inline int (*Sarcophagus::ptr::_GetNumSarcophagi)() = (int (*)()) 0x81c6380;
inline Point * (*Sarcophagus::ptr::_GetMovementDirection)() = (Point * (*)()) 0x80b4430;
inline int (*Sarcophagus::ptr::_PerformMovement)(Sarcophagus * self, int arg1, int arg2) = (int (*)(Sarcophagus * self, int arg1, int arg2)) 0x8076400;
inline bool (*Sarcophagus::ptr::_ImmuneToFear)() = (bool (*)()) 0x8076410;
inline void (*Sarcophagus::ptr::MoveFail)(Sarcophagus * self) = (void (*)(Sarcophagus * self)) 0x83a70f0;
inline void (*Sarcophagus::ptr::_MoveSucceed)(Sarcophagus * self, bool arg1, bool arg2) = (void (*)(Sarcophagus * self, bool arg1, bool arg2)) 0x83a75e0;
inline void (*Sarcophagus::ptr::Update)(Sarcophagus * self) = (void (*)(Sarcophagus * self)) 0x8380080;
inline bool (*Sarcophagus::ptr::_CanBeLord)() = (bool (*)()) 0x8076420;
inline void (*Sarcophagus::ptr::Delete)(Sarcophagus * self) = (void (*)(Sarcophagus * self)) 0x8093630;
inline void (*Sarcophagus::ptr::_mark)() = (void (*)()) 0x80b0430;
inline void (*Sarcophagus::ptr::CSTR_Sarcophagus)(Sarcophagus * self) = (void (*)(Sarcophagus * self)) 0x81c5d60;
#endif
#endif
