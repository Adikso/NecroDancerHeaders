// Generated automatically. Do not edit!
#ifndef _ShopkeeperFamiliar_
#define _ShopkeeperFamiliar_
#include "FamiliarFixed.hpp"

class ShopkeeperFamiliar : public FamiliarFixed  {
public:

    // Wrappers
    inline ShopkeeperFamiliar * New(int x_, int y_) { return ptr::New(this, x_, y_); }
    inline ShopkeeperFamiliar * _new2() { return ptr::_new2(); }
    inline bool ApplyEffect(int dir) { return ptr::ApplyEffect(this, dir); }
    inline void TryPickup() { ptr::TryPickup(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static ShopkeeperFamiliar * (*New)(ShopkeeperFamiliar * self, int x_, int y_);
        static ShopkeeperFamiliar * (*_new2)();
        static bool (*ApplyEffect)(ShopkeeperFamiliar * self, int dir);
        static void (*TryPickup)(ShopkeeperFamiliar * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline ShopkeeperFamiliar * (*ShopkeeperFamiliar::ptr::New)(ShopkeeperFamiliar * self, int x_, int y_) = (ShopkeeperFamiliar * (*)(ShopkeeperFamiliar * self, int x_, int y_)) 0x602b40;
inline ShopkeeperFamiliar * (*ShopkeeperFamiliar::ptr::_new2)() = (ShopkeeperFamiliar * (*)()) 0x0;
inline bool (*ShopkeeperFamiliar::ptr::ApplyEffect)(ShopkeeperFamiliar * self, int dir) = (bool (*)(ShopkeeperFamiliar * self, int dir)) 0x602ca0;
inline void (*ShopkeeperFamiliar::ptr::TryPickup)(ShopkeeperFamiliar * self) = (void (*)(ShopkeeperFamiliar * self)) 0x602f20;
inline void (*ShopkeeperFamiliar::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline ShopkeeperFamiliar * (*ShopkeeperFamiliar::ptr::New)(ShopkeeperFamiliar * self, int x_, int y_) = (ShopkeeperFamiliar * (*)(ShopkeeperFamiliar * self, int x_, int y_)) 0x81a7620;
inline ShopkeeperFamiliar * (*ShopkeeperFamiliar::ptr::_new2)() = (ShopkeeperFamiliar * (*)()) 0x81a77b0;
inline bool (*ShopkeeperFamiliar::ptr::ApplyEffect)(ShopkeeperFamiliar * self, int dir) = (bool (*)(ShopkeeperFamiliar * self, int dir)) 0x8196010;
inline void (*ShopkeeperFamiliar::ptr::TryPickup)(ShopkeeperFamiliar * self) = (void (*)(ShopkeeperFamiliar * self)) 0x8073d00;
inline void (*ShopkeeperFamiliar::ptr::_mark)() = (void (*)()) 0x80a55b0;
#endif
#endif
