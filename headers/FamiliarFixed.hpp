// Generated automatically. Do not edit!
#ifndef _FamiliarFixed_
#define _FamiliarFixed_
class List7;
class Player;
class String;
#include "Entity.hpp"

class FamiliarFixed : public Entity  {
public:
    int offsetX;
    int offsetY;
    int type;
    bool enableAutoFlip;
    Player * owner;
    bool hasMovedThisFrame;
    static List7 * * familiarList;
    static bool * debugTouchDamage;

    // Wrappers
    FamiliarFixed() {
        ptr::CSTR_FamiliarFixed(this);
        ptr::New(this);
    }

    inline void Die() { ptr::Die(this); }
    inline FamiliarFixed * New() { return ptr::New(this); }
    inline virtual void Init2(int x_, int y_, int type_) { ptr::Init2(this, x_, y_, type_); }
    inline virtual bool ApplyEffect(int arg1) { return ptr::_ApplyEffect(this, arg1); }
    inline virtual void MoveTo(int x_, int y_) { ptr::MoveTo(this, x_, y_); }
    inline static FamiliarFixed * GetFamiliarAt(int x, int y) { return ptr::GetFamiliarAt(x, y); }
    inline virtual void TryPickup() { ptr::_TryPickup(); }
    inline virtual void WarpTo(int x_, int y_) { ptr::WarpTo(this, x_, y_); }
    inline virtual bool IsSoul() { return ptr::_IsSoul(); }
    inline void Update() { ptr::Update(this); }
    inline bool _Hit(String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) { return ptr::_Hit(this, arg1, arg2, arg3, arg4, arg5, arg6); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static void (*Die)(FamiliarFixed * self);
        static FamiliarFixed * (*New)(FamiliarFixed * self);
        static void (*Init2)(FamiliarFixed * self, int x_, int y_, int type_);
        static bool (*_ApplyEffect)(FamiliarFixed * self, int arg1);
        static void (*MoveTo)(FamiliarFixed * self, int x_, int y_);
        static FamiliarFixed * (*GetFamiliarAt)(int x, int y);
        static void (*_TryPickup)();
        static void (*WarpTo)(FamiliarFixed * self, int x_, int y_);
        static bool (*_IsSoul)();
        static void (*Update)(FamiliarFixed * self);
        static bool (*_Hit)(FamiliarFixed * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6);
        static void (*mark)(FamiliarFixed * self);
        static void (*CSTR_FamiliarFixed)(FamiliarFixed * self);
    };
};

#ifdef _WIN32
List7 * * FamiliarFixed::familiarList = (List7* *) 0x8356e4;
bool * FamiliarFixed::debugTouchDamage = (bool*) 0x83576b;

void (*FamiliarFixed::ptr::Die)(FamiliarFixed * self) = (void (*)(FamiliarFixed * self)) 0x57f3b0;
FamiliarFixed * (*FamiliarFixed::ptr::New)(FamiliarFixed * self) = (FamiliarFixed * (*)(FamiliarFixed * self)) 0x57f3d0;
void (*FamiliarFixed::ptr::Init2)(FamiliarFixed * self, int x_, int y_, int type_) = (void (*)(FamiliarFixed * self, int x_, int y_, int type_)) 0x57f430;
bool (*FamiliarFixed::ptr::_ApplyEffect)(FamiliarFixed * self, int arg1) = (bool (*)(FamiliarFixed * self, int arg1)) 0x0;
void (*FamiliarFixed::ptr::MoveTo)(FamiliarFixed * self, int x_, int y_) = (void (*)(FamiliarFixed * self, int x_, int y_)) 0x57f590;
FamiliarFixed * (*FamiliarFixed::ptr::GetFamiliarAt)(int x, int y) = (FamiliarFixed * (*)(int x, int y)) 0x57f640;
void (*FamiliarFixed::ptr::_TryPickup)() = (void (*)()) 0x0;
void (*FamiliarFixed::ptr::WarpTo)(FamiliarFixed * self, int x_, int y_) = (void (*)(FamiliarFixed * self, int x_, int y_)) 0x57f690;
bool (*FamiliarFixed::ptr::_IsSoul)() = (bool (*)()) 0x0;
void (*FamiliarFixed::ptr::Update)(FamiliarFixed * self) = (void (*)(FamiliarFixed * self)) 0x57f6c0;
bool (*FamiliarFixed::ptr::_Hit)(FamiliarFixed * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(FamiliarFixed * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x0;
void (*FamiliarFixed::ptr::mark)(FamiliarFixed * self) = (void (*)(FamiliarFixed * self)) 0x57f750;
void (*FamiliarFixed::ptr::CSTR_FamiliarFixed)(FamiliarFixed * self) = (void (*)(FamiliarFixed * self)) 0x57f320;
#endif

#ifdef __linux__
List7 * * FamiliarFixed::familiarList = (List7* *) 0x856a664;
bool * FamiliarFixed::debugTouchDamage = (bool*) 0x856a660;

void (*FamiliarFixed::ptr::Die)(FamiliarFixed * self) = (void (*)(FamiliarFixed * self)) 0x8093480;
FamiliarFixed * (*FamiliarFixed::ptr::New)(FamiliarFixed * self) = (FamiliarFixed * (*)(FamiliarFixed * self)) 0x8159330;
void (*FamiliarFixed::ptr::Init2)(FamiliarFixed * self, int x_, int y_, int type_) = (void (*)(FamiliarFixed * self, int x_, int y_, int type_)) 0x8102200;
bool (*FamiliarFixed::ptr::_ApplyEffect)(FamiliarFixed * self, int arg1) = (bool (*)(FamiliarFixed * self, int arg1)) 0x8070040;
void (*FamiliarFixed::ptr::MoveTo)(FamiliarFixed * self, int x_, int y_) = (void (*)(FamiliarFixed * self, int x_, int y_)) 0x812f080;
FamiliarFixed * (*FamiliarFixed::ptr::GetFamiliarAt)(int x, int y) = (FamiliarFixed * (*)(int x, int y)) 0x81593a0;
void (*FamiliarFixed::ptr::_TryPickup)() = (void (*)()) 0x8070050;
void (*FamiliarFixed::ptr::WarpTo)(FamiliarFixed * self, int x_, int y_) = (void (*)(FamiliarFixed * self, int x_, int y_)) 0x8070060;
bool (*FamiliarFixed::ptr::_IsSoul)() = (bool (*)()) 0x8070090;
void (*FamiliarFixed::ptr::Update)(FamiliarFixed * self) = (void (*)(FamiliarFixed * self)) 0x812ccb0;
bool (*FamiliarFixed::ptr::_Hit)(FamiliarFixed * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(FamiliarFixed * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x80700a0;
void (*FamiliarFixed::ptr::mark)(FamiliarFixed * self) = (void (*)(FamiliarFixed * self)) 0x80a53b0;
void (*FamiliarFixed::ptr::CSTR_FamiliarFixed)(FamiliarFixed * self) = (void (*)(FamiliarFixed * self)) 0x81592d0;
#endif
#endif
