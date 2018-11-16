// Generated automatically. Do not edit!
#ifndef _Wight_
#define _Wight_
class Entity;
class Point;
class String;
#include "Enemy.hpp"

class Wight : public Enemy  {
public:
    bool seeking;
    bool hasRoared;

    // Wrappers
    Wight(int xVal, int yVal, int l) {
        ptr::CSTR_Wight(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline Wight * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Wight * _new2() { return ptr::_new2(); }
    inline void _Render() { ptr::_Render(); }
    inline virtual void BecomeCorporeal(bool force) { ptr::BecomeCorporeal(this, force); }
    inline virtual void CheckCorporeality() { ptr::CheckCorporeality(this); }
    inline void Update() { ptr::Update(this); }
    inline bool _Hit(String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) { return ptr::_Hit(this, arg1, arg2, arg3, arg4, arg5, arg6); }
    inline bool _CanBeDamaged(bool arg1, bool arg2) { return ptr::_CanBeDamaged(this, arg1, arg2); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Wight * (*New)(Wight * self, int xVal, int yVal, int l);
        static Wight * (*_new2)();
        static void (*_Render)();
        static void (*BecomeCorporeal)(Wight * self, bool force);
        static void (*CheckCorporeality)(Wight * self);
        static void (*Update)(Wight * self);
        static bool (*_Hit)(Wight * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6);
        static bool (*_CanBeDamaged)(Wight * self, bool arg1, bool arg2);
        static Point * (*GetMovementDirection)(Wight * self);
        static void (*_mark)();
        static void (*CSTR_Wight)(Wight * self);
    };
};

#ifdef _WIN32

inline Wight * (*Wight::ptr::New)(Wight * self, int xVal, int yVal, int l) = (Wight * (*)(Wight * self, int xVal, int yVal, int l)) 0x642620;
inline Wight * (*Wight::ptr::_new2)() = (Wight * (*)()) 0x0;
inline void (*Wight::ptr::_Render)() = (void (*)()) 0x0;
inline void (*Wight::ptr::BecomeCorporeal)(Wight * self, bool force) = (void (*)(Wight * self, bool force)) 0x642890;
inline void (*Wight::ptr::CheckCorporeality)(Wight * self) = (void (*)(Wight * self)) 0x642b50;
inline void (*Wight::ptr::Update)(Wight * self) = (void (*)(Wight * self)) 0x642ee0;
inline bool (*Wight::ptr::_Hit)(Wight * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(Wight * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x0;
inline bool (*Wight::ptr::_CanBeDamaged)(Wight * self, bool arg1, bool arg2) = (bool (*)(Wight * self, bool arg1, bool arg2)) 0x0;
inline Point * (*Wight::ptr::GetMovementDirection)(Wight * self) = (Point * (*)(Wight * self)) 0x642ff0;
inline void (*Wight::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Wight::ptr::CSTR_Wight)(Wight * self) = (void (*)(Wight * self)) 0x6425c0;
#endif

#ifdef __linux__

inline Wight * (*Wight::ptr::New)(Wight * self, int xVal, int yVal, int l) = (Wight * (*)(Wight * self, int xVal, int yVal, int l)) 0x81c2d70;
inline Wight * (*Wight::ptr::_new2)() = (Wight * (*)()) 0x81c2f50;
inline void (*Wight::ptr::_Render)() = (void (*)()) 0x830bf50;
inline void (*Wight::ptr::BecomeCorporeal)(Wight * self, bool force) = (void (*)(Wight * self, bool force)) 0x8264c00;
inline void (*Wight::ptr::CheckCorporeality)(Wight * self) = (void (*)(Wight * self)) 0x8260de0;
inline void (*Wight::ptr::Update)(Wight * self) = (void (*)(Wight * self)) 0x8382140;
inline bool (*Wight::ptr::_Hit)(Wight * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(Wight * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x8398e70;
inline bool (*Wight::ptr::_CanBeDamaged)(Wight * self, bool arg1, bool arg2) = (bool (*)(Wight * self, bool arg1, bool arg2)) 0x8076210;
inline Point * (*Wight::ptr::GetMovementDirection)(Wight * self) = (Point * (*)(Wight * self)) 0x80b45f0;
inline void (*Wight::ptr::_mark)() = (void (*)()) 0x80b06c0;
inline void (*Wight::ptr::CSTR_Wight)(Wight * self) = (void (*)(Wight * self)) 0x81c2d40;
#endif
#endif
