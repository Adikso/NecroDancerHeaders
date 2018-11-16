// Generated automatically. Do not edit!
#ifndef _SaleItem_
#define _SaleItem_
template<class T> class Array;
class List11;
class List31;
class Medic;
class Player;
class Shopkeeper;
class Sprite;
class String;
#include "Item.hpp"

class SaleItem : public Item  {
public:
    float bloodCost;
    float cost;
    float discount;
    float forceCost;
    Sprite * miniDiamond;
    Sprite * miniHeart;
    Array<Sprite *> * digits;
    Array<int> * digitVal;
    Shopkeeper * shopkeeper;
    Medic * medic;
    static String * * lastSaleItemClass1;
    static String * * lastSaleItemClass2;
    static List11 * * randomSaleItemList;
    static float * CHARISMA_DISCOUNT;
    static List31 * * currentSaleItems;

    // Wrappers
    SaleItem(int xVal, int yVal, String * type, bool bldCost, Shopkeeper * sk, float fCost, Medic * m) {
        ptr::CSTR_SaleItem(this);
        ptr::New(this, xVal, yVal, type, bldCost, sk, fCost, m);
    }

    inline static float GetCostMultiplier() { return ptr::GetCostMultiplier(); }
    inline virtual bool CostsBlood() { return ptr::CostsBlood(this); }
    inline virtual bool CostsDiamonds() { return ptr::CostsDiamonds(this); }
    inline virtual float GetCost() { return ptr::GetCost(this); }
    inline virtual void SetCostHelper() { ptr::SetCostHelper(this); }
    inline virtual void SetBloodCost() { ptr::SetBloodCost(this); }
    inline virtual void SetCost() { ptr::SetCost(this); }
    inline static void ResetCosts() { ptr::ResetCosts(); }
    inline SaleItem * New(int xVal, int yVal, String * type, bool bldCost, Shopkeeper * sk, float fCost, Medic * m) { return ptr::New(this, xVal, yVal, type, bldCost, sk, fCost, m); }
    inline SaleItem * _new2() { return ptr::_new2(); }
    inline virtual void ApplyDiscount(float val) { ptr::ApplyDiscount(this, val); }
    inline static String * GetRandomItem(int level, String * randType) { return ptr::GetRandomItem(level, randType); }
    inline void Die() { ptr::Die(this); }
    inline static int GetMinCost() { return ptr::GetMinCost(); }
    inline virtual bool CanSeeShopkeeper() { return ptr::CanSeeShopkeeper(this); }
    inline virtual bool CanSteal() { return ptr::CanSteal(this); }
    inline String * Pickup(Player * player) { return ptr::Pickup(this, player); }
    inline void Render() { ptr::Render(this); }
    inline void SkipNextDraw() { ptr::SkipNextDraw(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static float (*GetCostMultiplier)();
        static bool (*CostsBlood)(SaleItem * self);
        static bool (*CostsDiamonds)(SaleItem * self);
        static float (*GetCost)(SaleItem * self);
        static void (*SetCostHelper)(SaleItem * self);
        static void (*SetBloodCost)(SaleItem * self);
        static void (*SetCost)(SaleItem * self);
        static void (*ResetCosts)();
        static SaleItem * (*New)(SaleItem * self, int xVal, int yVal, String * type, bool bldCost, Shopkeeper * sk, float fCost, Medic * m);
        static SaleItem * (*_new2)();
        static void (*ApplyDiscount)(SaleItem * self, float val);
        static String * (*GetRandomItem)(int level, String * randType);
        static void (*Die)(SaleItem * self);
        static int (*GetMinCost)();
        static bool (*CanSeeShopkeeper)(SaleItem * self);
        static bool (*CanSteal)(SaleItem * self);
        static String * (*Pickup)(SaleItem * self, Player * player);
        static void (*Render)(SaleItem * self);
        static void (*SkipNextDraw)(SaleItem * self);
        static void (*mark)(SaleItem * self);
        static void (*CSTR_SaleItem)(SaleItem * self);
    };
};

#ifdef _WIN32
inline String * * SaleItem::lastSaleItemClass1 = (String* *) 0x833fa4;
inline String * * SaleItem::lastSaleItemClass2 = (String* *) 0x833fa8;
inline List11 * * SaleItem::randomSaleItemList = (List11* *) 0x835aa8;
inline float * SaleItem::CHARISMA_DISCOUNT = (float*) 0x8356f4;
inline List31 * * SaleItem::currentSaleItems = (List31* *) 0x8356d0;

inline float (*SaleItem::ptr::GetCostMultiplier)() = (float (*)()) 0x593690;
inline bool (*SaleItem::ptr::CostsBlood)(SaleItem * self) = (bool (*)(SaleItem * self)) 0x593800;
inline bool (*SaleItem::ptr::CostsDiamonds)(SaleItem * self) = (bool (*)(SaleItem * self)) 0x593820;
inline float (*SaleItem::ptr::GetCost)(SaleItem * self) = (float (*)(SaleItem * self)) 0x593840;
inline void (*SaleItem::ptr::SetCostHelper)(SaleItem * self) = (void (*)(SaleItem * self)) 0x593860;
inline void (*SaleItem::ptr::SetBloodCost)(SaleItem * self) = (void (*)(SaleItem * self)) 0x5941a0;
inline void (*SaleItem::ptr::SetCost)(SaleItem * self) = (void (*)(SaleItem * self)) 0x594390;
inline void (*SaleItem::ptr::ResetCosts)() = (void (*)()) 0x5943b0;
inline SaleItem * (*SaleItem::ptr::New)(SaleItem * self, int xVal, int yVal, String * type, bool bldCost, Shopkeeper * sk, float fCost, Medic * m) = (SaleItem * (*)(SaleItem * self, int xVal, int yVal, String * type, bool bldCost, Shopkeeper * sk, float fCost, Medic * m)) 0x5943f0;
inline SaleItem * (*SaleItem::ptr::_new2)() = (SaleItem * (*)()) 0x0;
inline void (*SaleItem::ptr::ApplyDiscount)(SaleItem * self, float val) = (void (*)(SaleItem * self, float val)) 0x594550;
inline String * (*SaleItem::ptr::GetRandomItem)(int level, String * randType) = (String * (*)(int level, String * randType)) 0x594570;
inline void (*SaleItem::ptr::Die)(SaleItem * self) = (void (*)(SaleItem * self)) 0x594ea0;
inline int (*SaleItem::ptr::GetMinCost)() = (int (*)()) 0x594ef0;
inline bool (*SaleItem::ptr::CanSeeShopkeeper)(SaleItem * self) = (bool (*)(SaleItem * self)) 0x594f70;
inline bool (*SaleItem::ptr::CanSteal)(SaleItem * self) = (bool (*)(SaleItem * self)) 0x595010;
inline String * (*SaleItem::ptr::Pickup)(SaleItem * self, Player * player) = (String * (*)(SaleItem * self, Player * player)) 0x595130;
inline void (*SaleItem::ptr::Render)(SaleItem * self) = (void (*)(SaleItem * self)) 0x595d00;
inline void (*SaleItem::ptr::SkipNextDraw)(SaleItem * self) = (void (*)(SaleItem * self)) 0x595ee0;
inline void (*SaleItem::ptr::mark)(SaleItem * self) = (void (*)(SaleItem * self)) 0x595f50;
inline void (*SaleItem::ptr::CSTR_SaleItem)(SaleItem * self) = (void (*)(SaleItem * self)) 0x593460;
#endif

#ifdef __linux__
inline String * * SaleItem::lastSaleItemClass1 = (String* *) 0x856a5dc;
inline String * * SaleItem::lastSaleItemClass2 = (String* *) 0x856a5d8;
inline List11 * * SaleItem::randomSaleItemList = (List11* *) 0x856a5d4;
inline float * SaleItem::CHARISMA_DISCOUNT = (float*) 0x856a5d0;
inline List31 * * SaleItem::currentSaleItems = (List31* *) 0x856a5cc;

inline float (*SaleItem::ptr::GetCostMultiplier)() = (float (*)()) 0x816bd40;
inline bool (*SaleItem::ptr::CostsBlood)(SaleItem * self) = (bool (*)(SaleItem * self)) 0x8070520;
inline bool (*SaleItem::ptr::CostsDiamonds)(SaleItem * self) = (bool (*)(SaleItem * self)) 0x8070540;
inline float (*SaleItem::ptr::GetCost)(SaleItem * self) = (float (*)(SaleItem * self)) 0x8070560;
inline void (*SaleItem::ptr::SetCostHelper)(SaleItem * self) = (void (*)(SaleItem * self)) 0x816be90;
inline void (*SaleItem::ptr::SetBloodCost)(SaleItem * self) = (void (*)(SaleItem * self)) 0x80d3e00;
inline void (*SaleItem::ptr::SetCost)(SaleItem * self) = (void (*)(SaleItem * self)) 0x80705b0;
inline void (*SaleItem::ptr::ResetCosts)() = (void (*)()) 0x816cd80;
inline SaleItem * (*SaleItem::ptr::New)(SaleItem * self, int xVal, int yVal, String * type, bool bldCost, Shopkeeper * sk, float fCost, Medic * m) = (SaleItem * (*)(SaleItem * self, int xVal, int yVal, String * type, bool bldCost, Shopkeeper * sk, float fCost, Medic * m)) 0x829a920;
inline SaleItem * (*SaleItem::ptr::_new2)() = (SaleItem * (*)()) 0x816cdc0;
inline void (*SaleItem::ptr::ApplyDiscount)(SaleItem * self, float val) = (void (*)(SaleItem * self, float val)) 0x80705e0;
inline String * (*SaleItem::ptr::GetRandomItem)(int level, String * randType) = (String * (*)(int level, String * randType)) 0x82b08d0;
inline void (*SaleItem::ptr::Die)(SaleItem * self) = (void (*)(SaleItem * self)) 0x8093410;
inline int (*SaleItem::ptr::GetMinCost)() = (int (*)()) 0x816ce20;
inline bool (*SaleItem::ptr::CanSeeShopkeeper)(SaleItem * self) = (bool (*)(SaleItem * self)) 0x808b970;
inline bool (*SaleItem::ptr::CanSteal)(SaleItem * self) = (bool (*)(SaleItem * self)) 0x80d3f70;
inline String * (*SaleItem::ptr::Pickup)(SaleItem * self, Player * player) = (String * (*)(SaleItem * self, Player * player)) 0x831d430;
inline void (*SaleItem::ptr::Render)(SaleItem * self) = (void (*)(SaleItem * self)) 0x8267b00;
inline void (*SaleItem::ptr::SkipNextDraw)(SaleItem * self) = (void (*)(SaleItem * self)) 0x8087b30;
inline void (*SaleItem::ptr::mark)(SaleItem * self) = (void (*)(SaleItem * self)) 0x80ab640;
inline void (*SaleItem::ptr::CSTR_SaleItem)(SaleItem * self) = (void (*)(SaleItem * self)) 0x816ba50;
#endif
#endif
