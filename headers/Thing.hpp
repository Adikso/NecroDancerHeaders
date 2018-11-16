// Generated automatically. Do not edit!
#ifndef _Thing_
#define _Thing_
class String;
#include "Entity.hpp"

class Thing : public Entity  {
public:

    // Wrappers
    inline Thing * _New(int arg1, int arg2, bool arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline Thing * _new2() { return ptr::_new2(); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline void Update() { ptr::Update(this); }
    inline void _Render() { ptr::_Render(); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static Thing * (*_New)(Thing * self, int arg1, int arg2, bool arg3);
        static Thing * (*_new2)();
        static bool (*Hit)(Thing * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*Update)(Thing * self);
        static void (*_Render)();
        static void (*mark)(Thing * self);
    };
};

#ifdef _WIN32

inline Thing * (*Thing::ptr::_New)(Thing * self, int arg1, int arg2, bool arg3) = (Thing * (*)(Thing * self, int arg1, int arg2, bool arg3)) 0x0;
inline Thing * (*Thing::ptr::_new2)() = (Thing * (*)()) 0x0;
inline bool (*Thing::ptr::Hit)(Thing * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Thing * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x632ac0;
inline void (*Thing::ptr::Update)(Thing * self) = (void (*)(Thing * self)) 0x401010;
inline void (*Thing::ptr::_Render)() = (void (*)()) 0x0;
inline void (*Thing::ptr::mark)(Thing * self) = (void (*)(Thing * self)) 0x4fdc30;
#endif

#ifdef __linux__

inline Thing * (*Thing::ptr::_New)(Thing * self, int arg1, int arg2, bool arg3) = (Thing * (*)(Thing * self, int arg1, int arg2, bool arg3)) 0x81bc010;
inline Thing * (*Thing::ptr::_new2)() = (Thing * (*)()) 0x81bc090;
inline bool (*Thing::ptr::Hit)(Thing * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Thing * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x8075910;
inline void (*Thing::ptr::Update)(Thing * self) = (void (*)(Thing * self)) 0x8075920;
inline void (*Thing::ptr::_Render)() = (void (*)()) 0x8075930;
inline void (*Thing::ptr::mark)(Thing * self) = (void (*)(Thing * self)) 0x80a5220;
#endif
#endif
