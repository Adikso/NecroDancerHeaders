// Generated automatically. Do not edit!
#ifndef _FakeWall_
#define _FakeWall_
class Entity;
class Point;
class String;
#include "Enemy.hpp"

class FakeWall : public Enemy  {
public:
    bool hasMoved;
    bool goldDropped;

    // Wrappers
    FakeWall(int xVal, int yVal, int l) {
        ptr::CSTR_FakeWall(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline FakeWall * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline FakeWall * _new2() { return ptr::_new2(); }
    inline bool _CanBeDamaged(bool arg1, bool arg2) { return ptr::_CanBeDamaged(this, arg1, arg2); }
    inline bool _Hit(String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) { return ptr::_Hit(this, arg1, arg2, arg3, arg4, arg5, arg6); }
    inline void Update() { ptr::Update(this); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void DropItem2() { ptr::DropItem2(this); }
    inline void Die() { ptr::Die(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static FakeWall * (*New)(FakeWall * self, int xVal, int yVal, int l);
        static FakeWall * (*_new2)();
        static bool (*_CanBeDamaged)(FakeWall * self, bool arg1, bool arg2);
        static bool (*_Hit)(FakeWall * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6);
        static void (*Update)(FakeWall * self);
        static Point * (*GetMovementDirection)(FakeWall * self);
        static void (*DropItem2)(FakeWall * self);
        static void (*Die)(FakeWall * self);
        static void (*_mark)();
        static void (*CSTR_FakeWall)(FakeWall * self);
    };
};

#ifdef _WIN32

inline FakeWall * (*FakeWall::ptr::New)(FakeWall * self, int xVal, int yVal, int l) = (FakeWall * (*)(FakeWall * self, int xVal, int yVal, int l)) 0x61d790;
inline FakeWall * (*FakeWall::ptr::_new2)() = (FakeWall * (*)()) 0x0;
inline bool (*FakeWall::ptr::_CanBeDamaged)(FakeWall * self, bool arg1, bool arg2) = (bool (*)(FakeWall * self, bool arg1, bool arg2)) 0x0;
inline bool (*FakeWall::ptr::_Hit)(FakeWall * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(FakeWall * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x0;
inline void (*FakeWall::ptr::Update)(FakeWall * self) = (void (*)(FakeWall * self)) 0x61dc60;
inline Point * (*FakeWall::ptr::GetMovementDirection)(FakeWall * self) = (Point * (*)(FakeWall * self)) 0x61de40;
inline void (*FakeWall::ptr::DropItem2)(FakeWall * self) = (void (*)(FakeWall * self)) 0x61df20;
inline void (*FakeWall::ptr::Die)(FakeWall * self) = (void (*)(FakeWall * self)) 0x61dfe0;
inline void (*FakeWall::ptr::_mark)() = (void (*)()) 0x0;
inline void (*FakeWall::ptr::CSTR_FakeWall)(FakeWall * self) = (void (*)(FakeWall * self)) 0x61d730;
#endif

#ifdef __linux__

inline FakeWall * (*FakeWall::ptr::New)(FakeWall * self, int xVal, int yVal, int l) = (FakeWall * (*)(FakeWall * self, int xVal, int yVal, int l)) 0x81b7990;
inline FakeWall * (*FakeWall::ptr::_new2)() = (FakeWall * (*)()) 0x81b7b80;
inline bool (*FakeWall::ptr::_CanBeDamaged)(FakeWall * self, bool arg1, bool arg2) = (bool (*)(FakeWall * self, bool arg1, bool arg2)) 0x807f570;
inline bool (*FakeWall::ptr::_Hit)(FakeWall * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(FakeWall * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x839adb0;
inline void (*FakeWall::ptr::Update)(FakeWall * self) = (void (*)(FakeWall * self)) 0x8384800;
inline Point * (*FakeWall::ptr::GetMovementDirection)(FakeWall * self) = (Point * (*)(FakeWall * self)) 0x80b4d10;
inline void (*FakeWall::ptr::DropItem2)(FakeWall * self) = (void (*)(FakeWall * self)) 0x829a640;
inline void (*FakeWall::ptr::Die)(FakeWall * self) = (void (*)(FakeWall * self)) 0x83b6850;
inline void (*FakeWall::ptr::_mark)() = (void (*)()) 0x80b0b90;
inline void (*FakeWall::ptr::CSTR_FakeWall)(FakeWall * self) = (void (*)(FakeWall * self)) 0x81b7960;
#endif
#endif
