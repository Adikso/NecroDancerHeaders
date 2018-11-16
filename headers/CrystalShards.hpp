// Generated automatically. Do not edit!
#ifndef _CrystalShards_
#define _CrystalShards_
class List47;
class String;
#include "Entity.hpp"

class CrystalShards : public Entity  {
public:
    int fadeBeats;
    static List47 * * shardsList;

    // Wrappers
    inline static bool AnyAt(int x, int y) { return ptr::AnyAt(x, y); }
    inline void Die() { ptr::Die(this); }
    inline virtual void Move() { ptr::Move(this); }
    inline static void _MoveAll() { ptr::_MoveAll(); }
    inline CrystalShards * New(int x_, int y_) { return ptr::New(this, x_, y_); }
    inline CrystalShards * _new2() { return ptr::_new2(); }
    inline void Render() { ptr::Render(this); }
    inline bool _Hit(String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) { return ptr::_Hit(this, arg1, arg2, arg3, arg4, arg5, arg6); }
    inline bool _CanBeDamaged(bool arg1, bool arg2) { return ptr::_CanBeDamaged(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static bool (*AnyAt)(int x, int y);
        static void (*Die)(CrystalShards * self);
        static void (*Move)(CrystalShards * self);
        static void (*_MoveAll)();
        static CrystalShards * (*New)(CrystalShards * self, int x_, int y_);
        static CrystalShards * (*_new2)();
        static void (*Render)(CrystalShards * self);
        static bool (*_Hit)(CrystalShards * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6);
        static bool (*_CanBeDamaged)(CrystalShards * self, bool arg1, bool arg2);
        static void (*_mark)();
    };
};

#ifdef _WIN32
inline List47 * * CrystalShards::shardsList = (List47* *) 0x835590;

inline bool (*CrystalShards::ptr::AnyAt)(int x, int y) = (bool (*)(int x, int y)) 0x638280;
inline void (*CrystalShards::ptr::Die)(CrystalShards * self) = (void (*)(CrystalShards * self)) 0x6382d0;
inline void (*CrystalShards::ptr::Move)(CrystalShards * self) = (void (*)(CrystalShards * self)) 0x6382f0;
inline void (*CrystalShards::ptr::_MoveAll)() = (void (*)()) 0x0;
inline CrystalShards * (*CrystalShards::ptr::New)(CrystalShards * self, int x_, int y_) = (CrystalShards * (*)(CrystalShards * self, int x_, int y_)) 0x638300;
inline CrystalShards * (*CrystalShards::ptr::_new2)() = (CrystalShards * (*)()) 0x0;
inline void (*CrystalShards::ptr::Render)(CrystalShards * self) = (void (*)(CrystalShards * self)) 0x6384b0;
inline bool (*CrystalShards::ptr::_Hit)(CrystalShards * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(CrystalShards * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x0;
inline bool (*CrystalShards::ptr::_CanBeDamaged)(CrystalShards * self, bool arg1, bool arg2) = (bool (*)(CrystalShards * self, bool arg1, bool arg2)) 0x0;
inline void (*CrystalShards::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__
inline List47 * * CrystalShards::shardsList = (List47* *) 0x856a374;

inline bool (*CrystalShards::ptr::AnyAt)(int x, int y) = (bool (*)(int x, int y)) 0x81be8d0;
inline void (*CrystalShards::ptr::Die)(CrystalShards * self) = (void (*)(CrystalShards * self)) 0x80946d0;
inline void (*CrystalShards::ptr::Move)(CrystalShards * self) = (void (*)(CrystalShards * self)) 0x807f6d0;
inline void (*CrystalShards::ptr::_MoveAll)() = (void (*)()) 0x81be920;
inline CrystalShards * (*CrystalShards::ptr::New)(CrystalShards * self, int x_, int y_) = (CrystalShards * (*)(CrystalShards * self, int x_, int y_)) 0x81be970;
inline CrystalShards * (*CrystalShards::ptr::_new2)() = (CrystalShards * (*)()) 0x81beb00;
inline void (*CrystalShards::ptr::Render)(CrystalShards * self) = (void (*)(CrystalShards * self)) 0x8081880;
inline bool (*CrystalShards::ptr::_Hit)(CrystalShards * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(CrystalShards * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x8075df0;
inline bool (*CrystalShards::ptr::_CanBeDamaged)(CrystalShards * self, bool arg1, bool arg2) = (bool (*)(CrystalShards * self, bool arg1, bool arg2)) 0x8075e00;
inline void (*CrystalShards::ptr::_mark)() = (void (*)()) 0x80a5210;
#endif
#endif
