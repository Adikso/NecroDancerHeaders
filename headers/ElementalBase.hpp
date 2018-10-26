// Generated automatically. Do not edit!
#ifndef _ElementalBase_
#define _ElementalBase_
#include "Enemy.hpp"

class ElementalBase : public Enemy  {
public:

    // Wrappers
    inline ElementalBase * _New() { return ptr::_New(); }
    inline void _Update() { ptr::_Update(); }
    inline virtual void DropTile() { ptr::_DropTile(); }
    inline void MoveFail() { ptr::MoveFail(this); }
    inline void _MoveSucceed(bool arg1, bool arg2) { ptr::_MoveSucceed(this, arg1, arg2); }
    inline bool _CanBeLord() { return ptr::_CanBeLord(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static ElementalBase * (*_New)();
        static void (*_Update)();
        static void (*_DropTile)();
        static void (*MoveFail)(ElementalBase * self);
        static void (*_MoveSucceed)(ElementalBase * self, bool arg1, bool arg2);
        static bool (*_CanBeLord)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

ElementalBase * (*ElementalBase::ptr::_New)() = (ElementalBase * (*)()) 0x0;
void (*ElementalBase::ptr::_Update)() = (void (*)()) 0x0;
void (*ElementalBase::ptr::_DropTile)() = (void (*)()) 0x0;
void (*ElementalBase::ptr::MoveFail)(ElementalBase * self) = (void (*)(ElementalBase * self)) 0x6453f0;
void (*ElementalBase::ptr::_MoveSucceed)(ElementalBase * self, bool arg1, bool arg2) = (void (*)(ElementalBase * self, bool arg1, bool arg2)) 0x0;
bool (*ElementalBase::ptr::_CanBeLord)() = (bool (*)()) 0x0;
void (*ElementalBase::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

ElementalBase * (*ElementalBase::ptr::_New)() = (ElementalBase * (*)()) 0x81c33b0;
void (*ElementalBase::ptr::_Update)() = (void (*)()) 0x8381da0;
void (*ElementalBase::ptr::_DropTile)() = (void (*)()) 0x0;
void (*ElementalBase::ptr::MoveFail)(ElementalBase * self) = (void (*)(ElementalBase * self)) 0x8134f70;
void (*ElementalBase::ptr::_MoveSucceed)(ElementalBase * self, bool arg1, bool arg2) = (void (*)(ElementalBase * self, bool arg1, bool arg2)) 0x80762b0;
bool (*ElementalBase::ptr::_CanBeLord)() = (bool (*)()) 0x8076300;
void (*ElementalBase::ptr::_mark)() = (void (*)()) 0x80b0620;
#endif
#endif
