// Generated automatically. Do not edit!
#ifndef _Lich_
#define _Lich_
class Player;
class Point;
class Sprite;
class String;
#include "Enemy.hpp"

class Lich : public Enemy  {
public:
    Sprite * gustImage;
    Player * playerGusted;
    int animStartAt;

    // Wrappers
    Lich(int xVal, int yVal, int l) {
        ptr::CSTR_Lich(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Lich * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Lich * _new2() { return ptr::_new2(); }
    inline Point * _GetMovementDirection() { return ptr::_GetMovementDirection(); }
    inline int MoveImmediate(int xVal, int yVal, String * movementSource) { return ptr::MoveImmediate(this, xVal, yVal, movementSource); }
    inline void _Update() { ptr::_Update(); }
    inline void _Render() { ptr::_Render(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Lich * (*New)(Lich * self, int xVal, int yVal, int l);
        static Lich * (*_new2)();
        static Point * (*_GetMovementDirection)();
        static int (*MoveImmediate)(Lich * self, int xVal, int yVal, String * movementSource);
        static void (*_Update)();
        static void (*_Render)();
        static void (*_mark)();
        static void (*CSTR_Lich)(Lich * self);
    };
};

#ifdef _WIN32

inline Lich * (*Lich::ptr::New)(Lich * self, int xVal, int yVal, int l) = (Lich * (*)(Lich * self, int xVal, int yVal, int l)) 0x64d0a0;
inline Lich * (*Lich::ptr::_new2)() = (Lich * (*)()) 0x0;
inline Point * (*Lich::ptr::_GetMovementDirection)() = (Point * (*)()) 0x0;
inline int (*Lich::ptr::MoveImmediate)(Lich * self, int xVal, int yVal, String * movementSource) = (int (*)(Lich * self, int xVal, int yVal, String * movementSource)) 0x64d440;
inline void (*Lich::ptr::_Update)() = (void (*)()) 0x0;
inline void (*Lich::ptr::_Render)() = (void (*)()) 0x0;
inline void (*Lich::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Lich::ptr::CSTR_Lich)(Lich * self) = (void (*)(Lich * self)) 0x64d020;
#endif

#ifdef __linux__

inline Lich * (*Lich::ptr::New)(Lich * self, int xVal, int yVal, int l) = (Lich * (*)(Lich * self, int xVal, int yVal, int l)) 0x81c5800;
inline Lich * (*Lich::ptr::_new2)() = (Lich * (*)()) 0x81c5a90;
inline Point * (*Lich::ptr::_GetMovementDirection)() = (Point * (*)()) 0x80763e0;
inline int (*Lich::ptr::MoveImmediate)(Lich * self, int xVal, int yVal, String * movementSource) = (int (*)(Lich * self, int xVal, int yVal, String * movementSource)) 0x83934c0;
inline void (*Lich::ptr::_Update)() = (void (*)()) 0x83801e0;
inline void (*Lich::ptr::_Render)() = (void (*)()) 0x830b560;
inline void (*Lich::ptr::_mark)() = (void (*)()) 0x80b1290;
inline void (*Lich::ptr::CSTR_Lich)(Lich * self) = (void (*)(Lich * self)) 0x81c57c0;
#endif
#endif
