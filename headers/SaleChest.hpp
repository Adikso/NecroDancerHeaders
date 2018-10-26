// Generated automatically. Do not edit!
#ifndef _SaleChest_
#define _SaleChest_
template<class T> class Array;
class List31;
class Player;
class Sprite;
class String;
#include "Chest.hpp"

class SaleChest : public Chest  {
public:
    int cost;
    Array<Sprite *> * digits;
    Array<int> * digitVal;
    static List31 * * currentSaleChests;

    // Wrappers
    SaleChest(int xVal, int yVal, String * cont, bool invis, bool isLocked, bool isSecret, int tmpColor) {
        ptr::CSTR_SaleChest(this);
        ptr::New(this, xVal, yVal, cont, invis, isLocked, isSecret, tmpColor);
    }

    inline virtual void SetCost() { ptr::SetCost(this); }
    inline static void ResetCosts() { ptr::ResetCosts(); }
    inline SaleChest * New(int xVal, int yVal, String * cont, bool invis, bool isLocked, bool isSecret, int tmpColor) { return ptr::New(this, xVal, yVal, cont, invis, isLocked, isSecret, tmpColor); }
    inline SaleChest * _new2() { return ptr::_new2(); }
    inline void Die() { ptr::Die(this); }
    inline virtual bool CanSeeShopkeeper() { return ptr::_CanSeeShopkeeper(); }
    inline virtual bool CanSteal() { return ptr::CanSteal(this); }
    inline bool Open(Player * player) { return ptr::Open(this, player); }
    inline void Render() { ptr::Render(this); }
    inline void SkipNextDraw() { ptr::SkipNextDraw(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static void (*SetCost)(SaleChest * self);
        static void (*ResetCosts)();
        static SaleChest * (*New)(SaleChest * self, int xVal, int yVal, String * cont, bool invis, bool isLocked, bool isSecret, int tmpColor);
        static SaleChest * (*_new2)();
        static void (*Die)(SaleChest * self);
        static bool (*_CanSeeShopkeeper)();
        static bool (*CanSteal)(SaleChest * self);
        static bool (*Open)(SaleChest * self, Player * player);
        static void (*Render)(SaleChest * self);
        static void (*SkipNextDraw)(SaleChest * self);
        static void (*mark)(SaleChest * self);
        static void (*CSTR_SaleChest)(SaleChest * self);
    };
};

#ifdef _WIN32
List31 * * SaleChest::currentSaleChests = (List31* *) 0x835614;

void (*SaleChest::ptr::SetCost)(SaleChest * self) = (void (*)(SaleChest * self)) 0x5ddf00;
void (*SaleChest::ptr::ResetCosts)() = (void (*)()) 0x5de2e0;
SaleChest * (*SaleChest::ptr::New)(SaleChest * self, int xVal, int yVal, String * cont, bool invis, bool isLocked, bool isSecret, int tmpColor) = (SaleChest * (*)(SaleChest * self, int xVal, int yVal, String * cont, bool invis, bool isLocked, bool isSecret, int tmpColor)) 0x5de320;
SaleChest * (*SaleChest::ptr::_new2)() = (SaleChest * (*)()) 0x0;
void (*SaleChest::ptr::Die)(SaleChest * self) = (void (*)(SaleChest * self)) 0x5de3d0;
bool (*SaleChest::ptr::_CanSeeShopkeeper)() = (bool (*)()) 0x0;
bool (*SaleChest::ptr::CanSteal)(SaleChest * self) = (bool (*)(SaleChest * self)) 0x5de400;
bool (*SaleChest::ptr::Open)(SaleChest * self, Player * player) = (bool (*)(SaleChest * self, Player * player)) 0x5de500;
void (*SaleChest::ptr::Render)(SaleChest * self) = (void (*)(SaleChest * self)) 0x5dea70;
void (*SaleChest::ptr::SkipNextDraw)(SaleChest * self) = (void (*)(SaleChest * self)) 0x5deb70;
void (*SaleChest::ptr::mark)(SaleChest * self) = (void (*)(SaleChest * self)) 0x5debc0;
void (*SaleChest::ptr::CSTR_SaleChest)(SaleChest * self) = (void (*)(SaleChest * self)) 0x5ddd10;
#endif

#ifdef __linux__
List31 * * SaleChest::currentSaleChests = (List31* *) 0x856a498;

void (*SaleChest::ptr::SetCost)(SaleChest * self) = (void (*)(SaleChest * self)) 0x8123e20;
void (*SaleChest::ptr::ResetCosts)() = (void (*)()) 0x8197680;
SaleChest * (*SaleChest::ptr::New)(SaleChest * self, int xVal, int yVal, String * cont, bool invis, bool isLocked, bool isSecret, int tmpColor) = (SaleChest * (*)(SaleChest * self, int xVal, int yVal, String * cont, bool invis, bool isLocked, bool isSecret, int tmpColor)) 0x82adfe0;
SaleChest * (*SaleChest::ptr::_new2)() = (SaleChest * (*)()) 0x81976c0;
void (*SaleChest::ptr::Die)(SaleChest * self) = (void (*)(SaleChest * self)) 0x8093320;
bool (*SaleChest::ptr::_CanSeeShopkeeper)() = (bool (*)()) 0x808b8d0;
bool (*SaleChest::ptr::CanSteal)(SaleChest * self) = (bool (*)(SaleChest * self)) 0x80d40e0;
bool (*SaleChest::ptr::Open)(SaleChest * self, Player * player) = (bool (*)(SaleChest * self, Player * player)) 0x8391cd0;
void (*SaleChest::ptr::Render)(SaleChest * self) = (void (*)(SaleChest * self)) 0x8267110;
void (*SaleChest::ptr::SkipNextDraw)(SaleChest * self) = (void (*)(SaleChest * self)) 0x8087aa0;
void (*SaleChest::ptr::mark)(SaleChest * self) = (void (*)(SaleChest * self)) 0x80b2720;
void (*SaleChest::ptr::CSTR_SaleChest)(SaleChest * self) = (void (*)(SaleChest * self)) 0x8197320;
#endif
#endif
