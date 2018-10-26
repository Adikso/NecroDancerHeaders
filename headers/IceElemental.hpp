// Generated automatically. Do not edit!
#ifndef _IceElemental_
#define _IceElemental_
#include "ElementalBase.hpp"

class IceElemental : public ElementalBase  {
public:

    // Wrappers
    IceElemental(int xVal, int yVal, int l) {
        ptr::CSTR_IceElemental(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline IceElemental * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline IceElemental * _new2() { return ptr::_new2(); }
    inline void DropTile() { ptr::DropTile(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static IceElemental * (*New)(IceElemental * self, int xVal, int yVal, int l);
        static IceElemental * (*_new2)();
        static void (*DropTile)(IceElemental * self);
        static void (*_mark)();
        static void (*CSTR_IceElemental)(IceElemental * self);
    };
};

#ifdef _WIN32

IceElemental * (*IceElemental::ptr::New)(IceElemental * self, int xVal, int yVal, int l) = (IceElemental * (*)(IceElemental * self, int xVal, int yVal, int l)) 0x645920;
IceElemental * (*IceElemental::ptr::_new2)() = (IceElemental * (*)()) 0x0;
void (*IceElemental::ptr::DropTile)(IceElemental * self) = (void (*)(IceElemental * self)) 0x645ba0;
void (*IceElemental::ptr::_mark)() = (void (*)()) 0x0;
void (*IceElemental::ptr::CSTR_IceElemental)(IceElemental * self) = (void (*)(IceElemental * self)) 0x6458b0;
#endif

#ifdef __linux__

IceElemental * (*IceElemental::ptr::New)(IceElemental * self, int xVal, int yVal, int l) = (IceElemental * (*)(IceElemental * self, int xVal, int yVal, int l)) 0x81c35c0;
IceElemental * (*IceElemental::ptr::_new2)() = (IceElemental * (*)()) 0x81c3750;
void (*IceElemental::ptr::DropTile)(IceElemental * self) = (void (*)(IceElemental * self)) 0x837c880;
void (*IceElemental::ptr::_mark)() = (void (*)()) 0x80b0630;
void (*IceElemental::ptr::CSTR_IceElemental)(IceElemental * self) = (void (*)(IceElemental * self)) 0x81c35a0;
#endif
#endif
