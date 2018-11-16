// Generated automatically. Do not edit!
#ifndef _Ogre_
#define _Ogre_
class Point;
class Sprite;
#include "Enemy.hpp"

class Ogre : public Enemy  {
public:
    Sprite * imageStandard;
    Sprite * imageSmashLeft;
    Sprite * imageSmashDown;
    Sprite * imageSmashUp;
    int smashingDir;
    bool justSmashed;
    int smashedDir;
    int smashCounter;

    // Wrappers
    Ogre(int xVal, int yVal, int l) {
        ptr::CSTR_Ogre(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Ogre * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Ogre * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline void _MoveFail() { ptr::_MoveFail(); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline bool _CanBeLord() { return ptr::_CanBeLord(); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static Ogre * (*New)(Ogre * self, int xVal, int yVal, int l);
        static Ogre * (*_new2)();
        static void (*Update)(Ogre * self);
        static void (*_MoveFail)();
        static void (*MoveSucceed)(Ogre * self, bool hitPlayer, bool moveDelayed);
        static Point * (*GetMovementDirection)(Ogre * self);
        static bool (*_CanBeLord)();
        static void (*mark)(Ogre * self);
        static void (*CSTR_Ogre)(Ogre * self);
    };
};

#ifdef _WIN32

inline Ogre * (*Ogre::ptr::New)(Ogre * self, int xVal, int yVal, int l) = (Ogre * (*)(Ogre * self, int xVal, int yVal, int l)) 0x650840;
inline Ogre * (*Ogre::ptr::_new2)() = (Ogre * (*)()) 0x0;
inline void (*Ogre::ptr::Update)(Ogre * self) = (void (*)(Ogre * self)) 0x650e40;
inline void (*Ogre::ptr::_MoveFail)() = (void (*)()) 0x0;
inline void (*Ogre::ptr::MoveSucceed)(Ogre * self, bool hitPlayer, bool moveDelayed) = (void (*)(Ogre * self, bool hitPlayer, bool moveDelayed)) 0x6510c0;
inline Point * (*Ogre::ptr::GetMovementDirection)(Ogre * self) = (Point * (*)(Ogre * self)) 0x651660;
inline bool (*Ogre::ptr::_CanBeLord)() = (bool (*)()) 0x0;
inline void (*Ogre::ptr::mark)(Ogre * self) = (void (*)(Ogre * self)) 0x651970;
inline void (*Ogre::ptr::CSTR_Ogre)(Ogre * self) = (void (*)(Ogre * self)) 0x650790;
#endif

#ifdef __linux__

inline Ogre * (*Ogre::ptr::New)(Ogre * self, int xVal, int yVal, int l) = (Ogre * (*)(Ogre * self, int xVal, int yVal, int l)) 0x81c7020;
inline Ogre * (*Ogre::ptr::_new2)() = (Ogre * (*)()) 0x81c74e0;
inline void (*Ogre::ptr::Update)(Ogre * self) = (void (*)(Ogre * self)) 0x837f670;
inline void (*Ogre::ptr::_MoveFail)() = (void (*)()) 0x8134a40;
inline void (*Ogre::ptr::MoveSucceed)(Ogre * self, bool hitPlayer, bool moveDelayed) = (void (*)(Ogre * self, bool hitPlayer, bool moveDelayed)) 0x83b9db0;
inline Point * (*Ogre::ptr::GetMovementDirection)(Ogre * self) = (Point * (*)(Ogre * self)) 0x83a7a50;
inline bool (*Ogre::ptr::_CanBeLord)() = (bool (*)()) 0x8076520;
inline void (*Ogre::ptr::mark)(Ogre * self) = (void (*)(Ogre * self)) 0x80b10d0;
inline void (*Ogre::ptr::CSTR_Ogre)(Ogre * self) = (void (*)(Ogre * self)) 0x81c6fb0;
#endif
#endif
