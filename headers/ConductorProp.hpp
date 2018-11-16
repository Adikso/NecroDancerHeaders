// Generated automatically. Do not edit!
#ifndef _ConductorProp_
#define _ConductorProp_
class Conductor;
class Entity;
class List26;
class Sprite;
class String;
class Tile;
#include "Enemy.hpp"

class ConductorProp : public Enemy  {
public:
    int origXOff;
    Sprite * shieldImage;
    Conductor * parent;
    List26 * wireXs;
    List26 * wireYs;
    int vibrateCounter;
    float vibrateOffset;
    int shieldFrameCounter;

    // Wrappers
    ConductorProp(int xVal, int yVal, int l) {
        ptr::CSTR_ConductorProp(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline ConductorProp * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline ConductorProp * _new2() { return ptr::_new2(); }
    inline virtual Tile * AddWireAt(int wireX, int wireY) { return ptr::AddWireAt(this, wireX, wireY); }
    inline bool _ImmuneToEarth() { return ptr::_ImmuneToEarth(); }
    inline bool _ImmuneToFear() { return ptr::_ImmuneToFear(); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline void Die() { ptr::Die(this); }
    inline virtual bool IsShielded() { return ptr::IsShielded(this); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static ConductorProp * (*New)(ConductorProp * self, int xVal, int yVal, int l);
        static ConductorProp * (*_new2)();
        static Tile * (*AddWireAt)(ConductorProp * self, int wireX, int wireY);
        static bool (*_ImmuneToEarth)();
        static bool (*_ImmuneToFear)();
        static bool (*Hit)(ConductorProp * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*Die)(ConductorProp * self);
        static bool (*IsShielded)(ConductorProp * self);
        static void (*Update)(ConductorProp * self);
        static void (*Render)(ConductorProp * self);
        static void (*mark)(ConductorProp * self);
        static void (*CSTR_ConductorProp)(ConductorProp * self);
    };
};

#ifdef _WIN32

inline ConductorProp * (*ConductorProp::ptr::New)(ConductorProp * self, int xVal, int yVal, int l) = (ConductorProp * (*)(ConductorProp * self, int xVal, int yVal, int l)) 0x635f90;
inline ConductorProp * (*ConductorProp::ptr::_new2)() = (ConductorProp * (*)()) 0x0;
inline Tile * (*ConductorProp::ptr::AddWireAt)(ConductorProp * self, int wireX, int wireY) = (Tile * (*)(ConductorProp * self, int wireX, int wireY)) 0x6361c0;
inline bool (*ConductorProp::ptr::_ImmuneToEarth)() = (bool (*)()) 0x0;
inline bool (*ConductorProp::ptr::_ImmuneToFear)() = (bool (*)()) 0x0;
inline bool (*ConductorProp::ptr::Hit)(ConductorProp * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(ConductorProp * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x636340;
inline void (*ConductorProp::ptr::Die)(ConductorProp * self) = (void (*)(ConductorProp * self)) 0x636600;
inline bool (*ConductorProp::ptr::IsShielded)(ConductorProp * self) = (bool (*)(ConductorProp * self)) 0x636630;
inline void (*ConductorProp::ptr::Update)(ConductorProp * self) = (void (*)(ConductorProp * self)) 0x636730;
inline void (*ConductorProp::ptr::Render)(ConductorProp * self) = (void (*)(ConductorProp * self)) 0x6367a0;
inline void (*ConductorProp::ptr::mark)(ConductorProp * self) = (void (*)(ConductorProp * self)) 0x6368e0;
inline void (*ConductorProp::ptr::CSTR_ConductorProp)(ConductorProp * self) = (void (*)(ConductorProp * self)) 0x635ea0;
#endif

#ifdef __linux__

inline ConductorProp * (*ConductorProp::ptr::New)(ConductorProp * self, int xVal, int yVal, int l) = (ConductorProp * (*)(ConductorProp * self, int xVal, int yVal, int l)) 0x81bd0d0;
inline ConductorProp * (*ConductorProp::ptr::_new2)() = (ConductorProp * (*)()) 0x81bd8a0;
inline Tile * (*ConductorProp::ptr::AddWireAt)(ConductorProp * self, int wireX, int wireY) = (Tile * (*)(ConductorProp * self, int wireX, int wireY)) 0x818d990;
inline bool (*ConductorProp::ptr::_ImmuneToEarth)() = (bool (*)()) 0x8075cf0;
inline bool (*ConductorProp::ptr::_ImmuneToFear)() = (bool (*)()) 0x8075d00;
inline bool (*ConductorProp::ptr::Hit)(ConductorProp * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(ConductorProp * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x8399880;
inline void (*ConductorProp::ptr::Die)(ConductorProp * self) = (void (*)(ConductorProp * self)) 0x83b6530;
inline bool (*ConductorProp::ptr::IsShielded)(ConductorProp * self) = (bool (*)(ConductorProp * self)) 0x80a12c0;
inline void (*ConductorProp::ptr::Update)(ConductorProp * self) = (void (*)(ConductorProp * self)) 0x8383500;
inline void (*ConductorProp::ptr::Render)(ConductorProp * self) = (void (*)(ConductorProp * self)) 0x830c270;
inline void (*ConductorProp::ptr::mark)(ConductorProp * self) = (void (*)(ConductorProp * self)) 0x80b1460;
inline void (*ConductorProp::ptr::CSTR_ConductorProp)(ConductorProp * self) = (void (*)(ConductorProp * self)) 0x81bcfb0;
#endif
#endif
