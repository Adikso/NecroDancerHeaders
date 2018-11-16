// Generated automatically. Do not edit!
#ifndef _Goblin_
#define _Goblin_
template<class T> class Array;
class Entity;
class Point;
class String;
#include "Enemy.hpp"

class Goblin : public Enemy  {
public:
    Array<float> * lastDist;
    bool movingAway;
    int lastVocalization;

    // Wrappers
    Goblin(int xVal, int yVal, int l) {
        ptr::CSTR_Goblin(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Goblin * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Goblin * _new2() { return ptr::_new2(); }
    inline virtual void ProcessDistanceChanges() { ptr::ProcessDistanceChanges(this); }
    inline void Update() { ptr::Update(this); }
    inline int Move() { return ptr::Move(this); }
    inline bool _Hit(String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) { return ptr::_Hit(this, arg1, arg2, arg3, arg4, arg5, arg6); }
    inline int MoveImmediate(int xVal, int yVal, String * movementSource) { return ptr::MoveImmediate(this, xVal, yVal, movementSource); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Goblin * (*New)(Goblin * self, int xVal, int yVal, int l);
        static Goblin * (*_new2)();
        static void (*ProcessDistanceChanges)(Goblin * self);
        static void (*Update)(Goblin * self);
        static int (*Move)(Goblin * self);
        static bool (*_Hit)(Goblin * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6);
        static int (*MoveImmediate)(Goblin * self, int xVal, int yVal, String * movementSource);
        static Point * (*GetMovementDirection)(Goblin * self);
        static void (*_mark)();
        static void (*CSTR_Goblin)(Goblin * self);
    };
};

#ifdef _WIN32

inline Goblin * (*Goblin::ptr::New)(Goblin * self, int xVal, int yVal, int l) = (Goblin * (*)(Goblin * self, int xVal, int yVal, int l)) 0x645c80;
inline Goblin * (*Goblin::ptr::_new2)() = (Goblin * (*)()) 0x0;
inline void (*Goblin::ptr::ProcessDistanceChanges)(Goblin * self) = (void (*)(Goblin * self)) 0x645f50;
inline void (*Goblin::ptr::Update)(Goblin * self) = (void (*)(Goblin * self)) 0x646030;
inline int (*Goblin::ptr::Move)(Goblin * self) = (int (*)(Goblin * self)) 0x6460c0;
inline bool (*Goblin::ptr::_Hit)(Goblin * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(Goblin * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x0;
inline int (*Goblin::ptr::MoveImmediate)(Goblin * self, int xVal, int yVal, String * movementSource) = (int (*)(Goblin * self, int xVal, int yVal, String * movementSource)) 0x63b5f0;
inline Point * (*Goblin::ptr::GetMovementDirection)(Goblin * self) = (Point * (*)(Goblin * self)) 0x646720;
inline void (*Goblin::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Goblin::ptr::CSTR_Goblin)(Goblin * self) = (void (*)(Goblin * self)) 0x645bb0;
#endif

#ifdef __linux__

inline Goblin * (*Goblin::ptr::New)(Goblin * self, int xVal, int yVal, int l) = (Goblin * (*)(Goblin * self, int xVal, int yVal, int l)) 0x81c38f0;
inline Goblin * (*Goblin::ptr::_new2)() = (Goblin * (*)()) 0x81c3ac0;
inline void (*Goblin::ptr::ProcessDistanceChanges)(Goblin * self) = (void (*)(Goblin * self)) 0x81047c0;
inline void (*Goblin::ptr::Update)(Goblin * self) = (void (*)(Goblin * self)) 0x8381ce0;
inline int (*Goblin::ptr::Move)(Goblin * self) = (int (*)(Goblin * self)) 0x83a5970;
inline bool (*Goblin::ptr::_Hit)(Goblin * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(Goblin * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x8398450;
inline int (*Goblin::ptr::MoveImmediate)(Goblin * self, int xVal, int yVal, String * movementSource) = (int (*)(Goblin * self, int xVal, int yVal, String * movementSource)) 0x83939d0;
inline Point * (*Goblin::ptr::GetMovementDirection)(Goblin * self) = (Point * (*)(Goblin * self)) 0x807f8a0;
inline void (*Goblin::ptr::_mark)() = (void (*)()) 0x80b05b0;
inline void (*Goblin::ptr::CSTR_Goblin)(Goblin * self) = (void (*)(Goblin * self)) 0x81c3770;
#endif
#endif
