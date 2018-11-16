// Generated automatically. Do not edit!
#ifndef _FrankensteinwayProp_
#define _FrankensteinwayProp_
class Entity;
class Frankensteinway;
class String;
#include "Enemy.hpp"

class FrankensteinwayProp : public Enemy  {
public:
    Frankensteinway * parent;
    int frameCounter;
    int curFrame;

    // Wrappers
    inline FrankensteinwayProp * New(int xVal, int yVal) { return ptr::New(this, xVal, yVal); }
    inline FrankensteinwayProp * _new2() { return ptr::_new2(); }
    inline virtual void Activate2() { ptr::Activate2(this); }
    inline void Update() { ptr::Update(this); }
    inline bool _ImmuneToEarth() { return ptr::_ImmuneToEarth(); }
    inline bool _ImmuneToFear() { return ptr::_ImmuneToFear(); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline virtual void Deactivate() { ptr::Deactivate(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static FrankensteinwayProp * (*New)(FrankensteinwayProp * self, int xVal, int yVal);
        static FrankensteinwayProp * (*_new2)();
        static void (*Activate2)(FrankensteinwayProp * self);
        static void (*Update)(FrankensteinwayProp * self);
        static bool (*_ImmuneToEarth)();
        static bool (*_ImmuneToFear)();
        static bool (*Hit)(FrankensteinwayProp * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*Deactivate)(FrankensteinwayProp * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline FrankensteinwayProp * (*FrankensteinwayProp::ptr::New)(FrankensteinwayProp * self, int xVal, int yVal) = (FrankensteinwayProp * (*)(FrankensteinwayProp * self, int xVal, int yVal)) 0x66bc00;
inline FrankensteinwayProp * (*FrankensteinwayProp::ptr::_new2)() = (FrankensteinwayProp * (*)()) 0x0;
inline void (*FrankensteinwayProp::ptr::Activate2)(FrankensteinwayProp * self) = (void (*)(FrankensteinwayProp * self)) 0x66bcd0;
inline void (*FrankensteinwayProp::ptr::Update)(FrankensteinwayProp * self) = (void (*)(FrankensteinwayProp * self)) 0x66bda0;
inline bool (*FrankensteinwayProp::ptr::_ImmuneToEarth)() = (bool (*)()) 0x0;
inline bool (*FrankensteinwayProp::ptr::_ImmuneToFear)() = (bool (*)()) 0x0;
inline bool (*FrankensteinwayProp::ptr::Hit)(FrankensteinwayProp * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(FrankensteinwayProp * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x66be00;
inline void (*FrankensteinwayProp::ptr::Deactivate)(FrankensteinwayProp * self) = (void (*)(FrankensteinwayProp * self)) 0x66bfe0;
inline void (*FrankensteinwayProp::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline FrankensteinwayProp * (*FrankensteinwayProp::ptr::New)(FrankensteinwayProp * self, int xVal, int yVal) = (FrankensteinwayProp * (*)(FrankensteinwayProp * self, int xVal, int yVal)) 0x81d9f70;
inline FrankensteinwayProp * (*FrankensteinwayProp::ptr::_new2)() = (FrankensteinwayProp * (*)()) 0x81da050;
inline void (*FrankensteinwayProp::ptr::Activate2)(FrankensteinwayProp * self) = (void (*)(FrankensteinwayProp * self)) 0x83ab310;
inline void (*FrankensteinwayProp::ptr::Update)(FrankensteinwayProp * self) = (void (*)(FrankensteinwayProp * self)) 0x837df50;
inline bool (*FrankensteinwayProp::ptr::_ImmuneToEarth)() = (bool (*)()) 0x8077b50;
inline bool (*FrankensteinwayProp::ptr::_ImmuneToFear)() = (bool (*)()) 0x8077b60;
inline bool (*FrankensteinwayProp::ptr::Hit)(FrankensteinwayProp * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(FrankensteinwayProp * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x8396270;
inline void (*FrankensteinwayProp::ptr::Deactivate)(FrankensteinwayProp * self) = (void (*)(FrankensteinwayProp * self)) 0x83ab3a0;
inline void (*FrankensteinwayProp::ptr::_mark)() = (void (*)()) 0x80afee0;
#endif
#endif
