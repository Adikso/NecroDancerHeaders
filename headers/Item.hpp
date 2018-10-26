// Generated automatically. Do not edit!
#ifndef _Item_
#define _Item_
template<class T> class Array;
class IItemPredicate;
class List;
class List11;
class List18;
class Player;
class Sprite;
class String;
class StringMap5;
class StringMap9;
class TextSprite;
class XMLNode;
#include "Entity.hpp"

class Item : public Entity  {
public:
    String * itemType;
    bool singleChoiceItem;
    bool hasBloodCost;
    bool isSaleItem;
    int utility;
    int coinCost;
    int diamondCost;
    bool saleItem;
    int stackQuantity;
    bool hideQuantity;
    int diamondDealerPrice;
    int imageFrames;
    int quantityYOff;
    int dropX;
    int dropY;
    bool droppedByPlayer;
    bool trainingWeapon;
    bool pickupable;
    TextSprite * hintText;
    TextSprite * nameText;
    TextSprite * quantityText;
    bool isMystery;
    bool janitorItem;
    bool diamondDealerItem;
    int leprechaunBeats;
    int numAdjacentItems;
    int frameToShow;
    static String * * lastChestItemClass1;
    static String * * lastChestItemClass2;
    static List18 * * pickupList;
    static StringMap9 * * itemImages;
    static StringMap5 * * seenItems;
    static bool * debugTrailerMode;
    static List * * itemPoolRandom;
    static List * * itemPoolRandom2;
    static Array<List *> * * itemPoolChest;
    static Array<List *> * * itemPoolChest2;
    static Array<List *> * * itemPoolLockedChest;
    static Array<List *> * * itemPoolLockedChest2;
    static Array<List *> * * itemPoolAnyChest;
    static Array<List *> * * itemPoolAnyChest2;
    static Array<List *> * * itemPoolShop;
    static Array<List *> * * itemPoolShop2;
    static Array<List *> * * itemPoolLockedShop;
    static Array<List *> * * itemPoolLockedShop2;
    static Array<List *> * * itemPoolUrn;
    static Array<List *> * * itemPoolUrn2;
    static List11 * * hephItems1;
    static List11 * * hephItems2;
    static List11 * * hephItems3;
    static List11 * * merlinItems1;
    static List11 * * merlinItems2;
    static List11 * * merlinItems3;
    static List11 * * diamondDealerItems1;
    static List11 * * diamondDealerItems2;
    static List11 * * diamondDealerItems3;

    // Wrappers
    Item(int xVal, int yVal, String * type, bool drop, int utl, bool isTrainingWeapon) {
        ptr::CSTR_Item(this);
        ptr::New(this, xVal, yVal, type, drop, utl, isTrainingWeapon);
    }

    inline static bool IsItemOfType(String * i, String * query) { return ptr::IsItemOfType(i, query); }
    inline virtual bool IsItemOfType(String * query) { return ptr::IsItemOfType_2(this, query); }
    inline static String * GetSlot(XMLNode * n) { return ptr::GetSlot(n); }
    inline static String * GetSlot2(String * i) { return ptr::GetSlot2(i); }
    inline virtual String * GetSlot() { return ptr::GetSlot_2(this); }
    inline virtual int GetValue() { return ptr::GetValue(this); }
    inline static int GetValue(String * t) { return ptr::GetValue_2(t); }
    inline static String * GetAppropriateCoinItemForQuantity(int quantity) { return ptr::GetAppropriateCoinItemForQuantity(quantity); }
    inline static List18 * GetPickupsAt(int xVal, int yVal, Item * slf) { return ptr::GetPickupsAt(xVal, yVal, slf); }
    inline static String * GetFlyawayText(String * i) { return ptr::GetFlyawayText(i); }
    inline virtual String * GetFlyawayText() { return ptr::GetFlyawayText_2(this); }
    inline static void AddToSeenItems(String * itemName) { ptr::AddToSeenItems(itemName); }
    inline Item * New(int xVal, int yVal, String * type, bool drop, int utl, bool isTrainingWeapon) { return ptr::New(this, xVal, yVal, type, drop, utl, isTrainingWeapon); }
    inline Item * _new2() { return ptr::_new2(); }
    inline static Item * DropItem(int xVal, int yVal, String * t) { return ptr::DropItem(xVal, yVal, t); }
    inline static bool IsDamageReductionItem(XMLNode * n) { return ptr::IsDamageReductionItem(n); }
    inline static bool IsHealthBonusItem(XMLNode * n) { return ptr::IsHealthBonusItem(n); }
    inline static bool IsPainItem(XMLNode * n) { return ptr::IsPainItem(n); }
    inline static bool IsDamageBonusItem(XMLNode * n) { return ptr::IsDamageBonusItem(n); }
    inline static bool IsItemOfClass(XMLNode * n, String * itemClass) { return ptr::IsItemOfClass(n, itemClass); }
    inline static XMLNode * GetItemXML(String * i) { return ptr::GetItemXML(i); }
    inline virtual bool IsItemOfClass(String * itemClass) { return ptr::IsItemOfClass_2(this, itemClass); }
    inline static bool IsGoldGeneratingItem(XMLNode * n) { return ptr::IsGoldGeneratingItem(n); }
    inline static bool IsCourageItem(XMLNode * n) { return ptr::IsCourageItem(n); }
    inline static bool IsDiscountItem(XMLNode * n) { return ptr::IsDiscountItem(n); }
    inline static bool IsValidItemForCurrentChars(XMLNode * n) { return ptr::IsValidItemForCurrentChars(n); }
    inline static bool IsValidItemForCurrentChars2(String * name) { return ptr::IsValidItemForCurrentChars2(name); }
    inline static bool HasSeenItemXTimes(String * itemName, int x) { return ptr::HasSeenItemXTimes(itemName, x); }
    inline static String * GetRandomItemInClassByPredicate(IItemPredicate * predicate, int requestedLevel, String * randomType, bool nonDeterministic) { return ptr::GetRandomItemInClassByPredicate(predicate, requestedLevel, randomType, nonDeterministic); }
    inline static String * GetRandomItemInClass(String * itemClass, int requestedLevel, String * randomType, int chestColor, bool ignorePendingMetaGameItems, String * itemSlot, bool nonDeterministic) { return ptr::GetRandomItemInClass(itemClass, requestedLevel, randomType, chestColor, ignorePendingMetaGameItems, itemSlot, nonDeterministic); }
    inline static List * GetAllItemsInClass(String * itemClass) { return ptr::GetAllItemsInClass(itemClass); }
    inline static String * GetWeaponShapeClass(String * t) { return ptr::GetWeaponShapeClass(t); }
    inline static String * ChangeWeaponMaterial(String * t, String * materialClass) { return ptr::ChangeWeaponMaterial(t, materialClass); }
    inline static void CreateAmountOfCoins(int xVal, int yVal, int amt) { ptr::CreateAmountOfCoins(xVal, yVal, amt); }
    inline static int GetIntAttribute(String * i, String * attr, int dflt) { return ptr::GetIntAttribute(i, attr, dflt); }
    inline virtual int GetIntAttribute(String * attr, int dflt) { return ptr::GetIntAttribute_2(this, attr, dflt); }
    inline virtual void SetMystery() { ptr::SetMystery(this); }
    inline static String * GetWeaponBaseType(String * t) { return ptr::GetWeaponBaseType(t); }
    inline void Die() { ptr::Die(this); }
    inline static String * GetStringAttribute(String * i, String * attr, String * dflt) { return ptr::GetStringAttribute(i, attr, dflt); }
    inline virtual String * GetStringAttribute(String * attr, String * dflt) { return ptr::GetStringAttribute_2(this, attr, dflt); }
    inline static bool IsUnlocked(String * t) { return ptr::IsUnlocked(t); }
    inline static Item * GetPickupAt(int xVal, int yVal, Item * slf) { return ptr::GetPickupAt(xVal, yVal, slf); }
    inline virtual void Transmute() { ptr::Transmute(this); }
    inline static void TransmuteAllItems() { ptr::TransmuteAllItems(); }
    inline static void TransmuteNearbyItems(int xVal, int yVal) { ptr::TransmuteNearbyItems(xVal, yVal); }
    inline static bool IsValidRandomItem(String * t) { return ptr::IsValidRandomItem(t); }
    inline static List18 * FindAllGoldPiles() { return ptr::FindAllGoldPiles(); }
    inline static void ClearAllSingleChoiceItems(Item * takenItem) { ptr::ClearAllSingleChoiceItems(takenItem); }
    inline virtual String * Pickup(Player * player) { return ptr::Pickup(this, player); }
    inline static bool IsImmediatelyConsumed(String * t) { return ptr::IsImmediatelyConsumed(t); }
    inline static int GetCost(String * i) { return ptr::GetCost(i); }
    inline static bool _HasSeenItem(String * arg1) { return ptr::_HasSeenItem(arg1); }
    inline static bool IsDisabled(String * item) { return ptr::IsDisabled(item); }
    inline static String * GetSet(XMLNode * n) { return ptr::GetSet(n); }
    inline static void CreateItemPools() { ptr::CreateItemPools(); }
    inline static String * RandomHardModeHelperItem() { return ptr::RandomHardModeHelperItem(); }
    inline static void FilterDisabledItems(List11 * list) { ptr::FilterDisabledItems(list); }
    inline static void InitAll() { ptr::InitAll(); }
    inline static int ConsumeCoinsRemainingOnLevel() { return ptr::ConsumeCoinsRemainingOnLevel(); }
    inline virtual void CheckAdjacentItems() { ptr::CheckAdjacentItems(this); }
    inline virtual void Move() { ptr::Move(this); }
    inline static void MoveAll() { ptr::MoveAll(); }
    inline static void RenderItemImageAt(Sprite * img, int xVal, int yVal, int zVal, bool inWorld, float scale, float alpha, int frame) { ptr::RenderItemImageAt(img, xVal, yVal, zVal, inWorld, scale, alpha, frame); }
    inline static void RenderItemAt(String * iType, int xVal, int yVal, int zVal, bool inWorld, float scale, float alpha, int frame) { ptr::RenderItemAt(iType, xVal, yVal, zVal, inWorld, scale, alpha, frame); }
    inline static int GetHeavyGlassFrame(int quantity) { return ptr::GetHeavyGlassFrame(quantity); }
    inline void Update() { ptr::Update(this); }
    inline bool IsVisible() { return ptr::IsVisible(this); }
    inline void Render() { ptr::Render(this); }
    inline bool _Hit(String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) { return ptr::_Hit(this, arg1, arg2, arg3, arg4, arg5, arg6); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static bool (*IsItemOfType)(String * i, String * query);
        static bool (*IsItemOfType_2)(Item * self, String * query);
        static String * (*GetSlot)(XMLNode * n);
        static String * (*GetSlot2)(String * i);
        static String * (*GetSlot_2)(Item * self);
        static int (*GetValue)(Item * self);
        static int (*GetValue_2)(String * t);
        static String * (*GetAppropriateCoinItemForQuantity)(int quantity);
        static List18 * (*GetPickupsAt)(int xVal, int yVal, Item * slf);
        static String * (*GetFlyawayText)(String * i);
        static String * (*GetFlyawayText_2)(Item * self);
        static void (*AddToSeenItems)(String * itemName);
        static Item * (*New)(Item * self, int xVal, int yVal, String * type, bool drop, int utl, bool isTrainingWeapon);
        static Item * (*_new2)();
        static Item * (*DropItem)(int xVal, int yVal, String * t);
        static bool (*IsDamageReductionItem)(XMLNode * n);
        static bool (*IsHealthBonusItem)(XMLNode * n);
        static bool (*IsPainItem)(XMLNode * n);
        static bool (*IsDamageBonusItem)(XMLNode * n);
        static bool (*IsItemOfClass)(XMLNode * n, String * itemClass);
        static XMLNode * (*GetItemXML)(String * i);
        static bool (*IsItemOfClass_2)(Item * self, String * itemClass);
        static bool (*IsGoldGeneratingItem)(XMLNode * n);
        static bool (*IsCourageItem)(XMLNode * n);
        static bool (*IsDiscountItem)(XMLNode * n);
        static bool (*IsValidItemForCurrentChars)(XMLNode * n);
        static bool (*IsValidItemForCurrentChars2)(String * name);
        static bool (*HasSeenItemXTimes)(String * itemName, int x);
        static String * (*GetRandomItemInClassByPredicate)(IItemPredicate * predicate, int requestedLevel, String * randomType, bool nonDeterministic);
        static String * (*GetRandomItemInClass)(String * itemClass, int requestedLevel, String * randomType, int chestColor, bool ignorePendingMetaGameItems, String * itemSlot, bool nonDeterministic);
        static List * (*GetAllItemsInClass)(String * itemClass);
        static String * (*GetWeaponShapeClass)(String * t);
        static String * (*ChangeWeaponMaterial)(String * t, String * materialClass);
        static void (*CreateAmountOfCoins)(int xVal, int yVal, int amt);
        static int (*GetIntAttribute)(String * i, String * attr, int dflt);
        static int (*GetIntAttribute_2)(Item * self, String * attr, int dflt);
        static void (*SetMystery)(Item * self);
        static String * (*GetWeaponBaseType)(String * t);
        static void (*Die)(Item * self);
        static String * (*GetStringAttribute)(String * i, String * attr, String * dflt);
        static String * (*GetStringAttribute_2)(Item * self, String * attr, String * dflt);
        static bool (*IsUnlocked)(String * t);
        static Item * (*GetPickupAt)(int xVal, int yVal, Item * slf);
        static void (*Transmute)(Item * self);
        static void (*TransmuteAllItems)();
        static void (*TransmuteNearbyItems)(int xVal, int yVal);
        static bool (*IsValidRandomItem)(String * t);
        static List18 * (*FindAllGoldPiles)();
        static void (*ClearAllSingleChoiceItems)(Item * takenItem);
        static String * (*Pickup)(Item * self, Player * player);
        static bool (*IsImmediatelyConsumed)(String * t);
        static int (*GetCost)(String * i);
        static bool (*_HasSeenItem)(String * arg1);
        static bool (*IsDisabled)(String * item);
        static String * (*GetSet)(XMLNode * n);
        static void (*CreateItemPools)();
        static String * (*RandomHardModeHelperItem)();
        static void (*FilterDisabledItems)(List11 * list);
        static void (*InitAll)();
        static int (*ConsumeCoinsRemainingOnLevel)();
        static void (*CheckAdjacentItems)(Item * self);
        static void (*Move)(Item * self);
        static void (*MoveAll)();
        static void (*RenderItemImageAt)(Sprite * img, int xVal, int yVal, int zVal, bool inWorld, float scale, float alpha, int frame);
        static void (*RenderItemAt)(String * iType, int xVal, int yVal, int zVal, bool inWorld, float scale, float alpha, int frame);
        static int (*GetHeavyGlassFrame)(int quantity);
        static void (*Update)(Item * self);
        static bool (*IsVisible)(Item * self);
        static void (*Render)(Item * self);
        static bool (*_Hit)(Item * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6);
        static void (*mark)(Item * self);
        static void (*CSTR_Item)(Item * self);
    };
};

#ifdef _WIN32
String * * Item::lastChestItemClass1 = (String* *) 0x833f6c;
String * * Item::lastChestItemClass2 = (String* *) 0x833f70;
List18 * * Item::pickupList = (List18* *) 0x835978;
StringMap9 * * Item::itemImages = (StringMap9* *) 0x835890;
StringMap5 * * Item::seenItems = (StringMap5* *) 0x8356dc;
bool * Item::debugTrailerMode = (bool*) 0x83570b;
List * * Item::itemPoolRandom = (List* *) 0x8356d8;
List * * Item::itemPoolRandom2 = (List* *) 0x8356d4;
Array<List *> * * Item::itemPoolChest = (Array<List *>* *) 0x833f74;
Array<List *> * * Item::itemPoolChest2 = (Array<List *>* *) 0x833f78;
Array<List *> * * Item::itemPoolLockedChest = (Array<List *>* *) 0x833f7c;
Array<List *> * * Item::itemPoolLockedChest2 = (Array<List *>* *) 0x833f80;
Array<List *> * * Item::itemPoolAnyChest = (Array<List *>* *) 0x833f84;
Array<List *> * * Item::itemPoolAnyChest2 = (Array<List *>* *) 0x833f88;
Array<List *> * * Item::itemPoolShop = (Array<List *>* *) 0x833f8c;
Array<List *> * * Item::itemPoolShop2 = (Array<List *>* *) 0x833f90;
Array<List *> * * Item::itemPoolLockedShop = (Array<List *>* *) 0x833f94;
Array<List *> * * Item::itemPoolLockedShop2 = (Array<List *>* *) 0x833f98;
Array<List *> * * Item::itemPoolUrn = (Array<List *>* *) 0x833f9c;
Array<List *> * * Item::itemPoolUrn2 = (Array<List *>* *) 0x833fa0;
List11 * * Item::hephItems1 = (List11* *) 0x835a04;
List11 * * Item::hephItems2 = (List11* *) 0x835a00;
List11 * * Item::hephItems3 = (List11* *) 0x8359fc;
List11 * * Item::merlinItems1 = (List11* *) 0x8359f8;
List11 * * Item::merlinItems2 = (List11* *) 0x8359f4;
List11 * * Item::merlinItems3 = (List11* *) 0x8359f0;
List11 * * Item::diamondDealerItems1 = (List11* *) 0x8359ec;
List11 * * Item::diamondDealerItems2 = (List11* *) 0x8359e8;
List11 * * Item::diamondDealerItems3 = (List11* *) 0x8359e4;

bool (*Item::ptr::IsItemOfType)(String * i, String * query) = (bool (*)(String * i, String * query)) 0x5814a0;
bool (*Item::ptr::IsItemOfType_2)(Item * self, String * query) = (bool (*)(Item * self, String * query)) 0x5815d0;
String * (*Item::ptr::GetSlot)(XMLNode * n) = (String * (*)(XMLNode * n)) 0x581670;
String * (*Item::ptr::GetSlot2)(String * i) = (String * (*)(String * i)) 0x581780;
String * (*Item::ptr::GetSlot_2)(Item * self) = (String * (*)(Item * self)) 0x581890;
int (*Item::ptr::GetValue)(Item * self) = (int (*)(Item * self)) 0x581910;
int (*Item::ptr::GetValue_2)(String * t) = (int (*)(String * t)) 0x581920;
String * (*Item::ptr::GetAppropriateCoinItemForQuantity)(int quantity) = (String * (*)(int quantity)) 0x581a80;
List18 * (*Item::ptr::GetPickupsAt)(int xVal, int yVal, Item * slf) = (List18 * (*)(int xVal, int yVal, Item * slf)) 0x581b80;
String * (*Item::ptr::GetFlyawayText)(String * i) = (String * (*)(String * i)) 0x581c60;
String * (*Item::ptr::GetFlyawayText_2)(Item * self) = (String * (*)(Item * self)) 0x581ef0;
void (*Item::ptr::AddToSeenItems)(String * itemName) = (void (*)(String * itemName)) 0x5820c0;
Item * (*Item::ptr::New)(Item * self, int xVal, int yVal, String * type, bool drop, int utl, bool isTrainingWeapon) = (Item * (*)(Item * self, int xVal, int yVal, String * type, bool drop, int utl, bool isTrainingWeapon)) 0x5821b0;
Item * (*Item::ptr::_new2)() = (Item * (*)()) 0x0;
Item * (*Item::ptr::DropItem)(int xVal, int yVal, String * t) = (Item * (*)(int xVal, int yVal, String * t)) 0x583f50;
bool (*Item::ptr::IsDamageReductionItem)(XMLNode * n) = (bool (*)(XMLNode * n)) 0x5840a0;
bool (*Item::ptr::IsHealthBonusItem)(XMLNode * n) = (bool (*)(XMLNode * n)) 0x5845d0;
bool (*Item::ptr::IsPainItem)(XMLNode * n) = (bool (*)(XMLNode * n)) 0x584d10;
bool (*Item::ptr::IsDamageBonusItem)(XMLNode * n) = (bool (*)(XMLNode * n)) 0x584eb0;
bool (*Item::ptr::IsItemOfClass)(XMLNode * n, String * itemClass) = (bool (*)(XMLNode * n, String * itemClass)) 0x585630;
XMLNode * (*Item::ptr::GetItemXML)(String * i) = (XMLNode * (*)(String * i)) 0x5857e0;
bool (*Item::ptr::IsItemOfClass_2)(Item * self, String * itemClass) = (bool (*)(Item * self, String * itemClass)) 0x5858d0;
bool (*Item::ptr::IsGoldGeneratingItem)(XMLNode * n) = (bool (*)(XMLNode * n)) 0x585980;
bool (*Item::ptr::IsCourageItem)(XMLNode * n) = (bool (*)(XMLNode * n)) 0x585be0;
bool (*Item::ptr::IsDiscountItem)(XMLNode * n) = (bool (*)(XMLNode * n)) 0x585d80;
bool (*Item::ptr::IsValidItemForCurrentChars)(XMLNode * n) = (bool (*)(XMLNode * n)) 0x585f20;
bool (*Item::ptr::IsValidItemForCurrentChars2)(String * name) = (bool (*)(String * name)) 0x5885e0;
bool (*Item::ptr::HasSeenItemXTimes)(String * itemName, int x) = (bool (*)(String * itemName, int x)) 0x5886e0;
String * (*Item::ptr::GetRandomItemInClassByPredicate)(IItemPredicate * predicate, int requestedLevel, String * randomType, bool nonDeterministic) = (String * (*)(IItemPredicate * predicate, int requestedLevel, String * randomType, bool nonDeterministic)) 0x5887a0;
String * (*Item::ptr::GetRandomItemInClass)(String * itemClass, int requestedLevel, String * randomType, int chestColor, bool ignorePendingMetaGameItems, String * itemSlot, bool nonDeterministic) = (String * (*)(String * itemClass, int requestedLevel, String * randomType, int chestColor, bool ignorePendingMetaGameItems, String * itemSlot, bool nonDeterministic)) 0x588c80;
List * (*Item::ptr::GetAllItemsInClass)(String * itemClass) = (List * (*)(String * itemClass)) 0x5890b0;
String * (*Item::ptr::GetWeaponShapeClass)(String * t) = (String * (*)(String * t)) 0x589200;
String * (*Item::ptr::ChangeWeaponMaterial)(String * t, String * materialClass) = (String * (*)(String * t, String * materialClass)) 0x589820;
void (*Item::ptr::CreateAmountOfCoins)(int xVal, int yVal, int amt) = (void (*)(int xVal, int yVal, int amt)) 0x589a60;
int (*Item::ptr::GetIntAttribute)(String * i, String * attr, int dflt) = (int (*)(String * i, String * attr, int dflt)) 0x589b00;
int (*Item::ptr::GetIntAttribute_2)(Item * self, String * attr, int dflt) = (int (*)(Item * self, String * attr, int dflt)) 0x589c30;
void (*Item::ptr::SetMystery)(Item * self) = (void (*)(Item * self)) 0x589cd0;
String * (*Item::ptr::GetWeaponBaseType)(String * t) = (String * (*)(String * t)) 0x58a050;
void (*Item::ptr::Die)(Item * self) = (void (*)(Item * self)) 0x58a670;
String * (*Item::ptr::GetStringAttribute)(String * i, String * attr, String * dflt) = (String * (*)(String * i, String * attr, String * dflt)) 0x58a6c0;
String * (*Item::ptr::GetStringAttribute_2)(Item * self, String * attr, String * dflt) = (String * (*)(Item * self, String * attr, String * dflt)) 0x58a830;
bool (*Item::ptr::IsUnlocked)(String * t) = (bool (*)(String * t)) 0x58a910;
Item * (*Item::ptr::GetPickupAt)(int xVal, int yVal, Item * slf) = (Item * (*)(int xVal, int yVal, Item * slf)) 0x58ab30;
void (*Item::ptr::Transmute)(Item * self) = (void (*)(Item * self)) 0x58aca0;
void (*Item::ptr::TransmuteAllItems)() = (void (*)()) 0x58b1b0;
void (*Item::ptr::TransmuteNearbyItems)(int xVal, int yVal) = (void (*)(int xVal, int yVal)) 0x58b290;
bool (*Item::ptr::IsValidRandomItem)(String * t) = (bool (*)(String * t)) 0x58b460;
List18 * (*Item::ptr::FindAllGoldPiles)() = (List18 * (*)()) 0x58b620;
void (*Item::ptr::ClearAllSingleChoiceItems)(Item * takenItem) = (void (*)(Item * takenItem)) 0x58b760;
String * (*Item::ptr::Pickup)(Item * self, Player * player) = (String * (*)(Item * self, Player * player)) 0x58b8b0;
bool (*Item::ptr::IsImmediatelyConsumed)(String * t) = (bool (*)(String * t)) 0x58c7c0;
int (*Item::ptr::GetCost)(String * i) = (int (*)(String * i)) 0x58c920;
bool (*Item::ptr::_HasSeenItem)(String * arg1) = (bool (*)(String * arg1)) 0x0;
bool (*Item::ptr::IsDisabled)(String * item) = (bool (*)(String * item)) 0x58ca80;
String * (*Item::ptr::GetSet)(XMLNode * n) = (String * (*)(XMLNode * n)) 0x58cb80;
void (*Item::ptr::CreateItemPools)() = (void (*)()) 0x58cc90;
String * (*Item::ptr::RandomHardModeHelperItem)() = (String * (*)()) 0x58dc50;
void (*Item::ptr::FilterDisabledItems)(List11 * list) = (void (*)(List11 * list)) 0x58e150;
void (*Item::ptr::InitAll)() = (void (*)()) 0x58e200;
int (*Item::ptr::ConsumeCoinsRemainingOnLevel)() = (int (*)()) 0x5922c0;
void (*Item::ptr::CheckAdjacentItems)(Item * self) = (void (*)(Item * self)) 0x592410;
void (*Item::ptr::Move)(Item * self) = (void (*)(Item * self)) 0x5925c0;
void (*Item::ptr::MoveAll)() = (void (*)()) 0x592830;
void (*Item::ptr::RenderItemImageAt)(Sprite * img, int xVal, int yVal, int zVal, bool inWorld, float scale, float alpha, int frame) = (void (*)(Sprite * img, int xVal, int yVal, int zVal, bool inWorld, float scale, float alpha, int frame)) 0x592890;
void (*Item::ptr::RenderItemAt)(String * iType, int xVal, int yVal, int zVal, bool inWorld, float scale, float alpha, int frame) = (void (*)(String * iType, int xVal, int yVal, int zVal, bool inWorld, float scale, float alpha, int frame)) 0x592950;
int (*Item::ptr::GetHeavyGlassFrame)(int quantity) = (int (*)(int quantity)) 0x592be0;
void (*Item::ptr::Update)(Item * self) = (void (*)(Item * self)) 0x592c00;
bool (*Item::ptr::IsVisible)(Item * self) = (bool (*)(Item * self)) 0x592c80;
void (*Item::ptr::Render)(Item * self) = (void (*)(Item * self)) 0x592cc0;
bool (*Item::ptr::_Hit)(Item * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(Item * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x0;
void (*Item::ptr::mark)(Item * self) = (void (*)(Item * self)) 0x593360;
void (*Item::ptr::CSTR_Item)(Item * self) = (void (*)(Item * self)) 0x5811b0;
#endif

#ifdef __linux__
String * * Item::lastChestItemClass1 = (String* *) 0x856a650;
String * * Item::lastChestItemClass2 = (String* *) 0x856a64c;
List18 * * Item::pickupList = (List18* *) 0x856a648;
StringMap9 * * Item::itemImages = (StringMap9* *) 0x856a644;
StringMap5 * * Item::seenItems = (StringMap5* *) 0x856a640;
bool * Item::debugTrailerMode = (bool*) 0x856a63c;
List * * Item::itemPoolRandom = (List* *) 0x856a638;
List * * Item::itemPoolRandom2 = (List* *) 0x856a634;
Array<List *> * * Item::itemPoolChest = (Array<List *>* *) 0x856a630;
Array<List *> * * Item::itemPoolChest2 = (Array<List *>* *) 0x856a62c;
Array<List *> * * Item::itemPoolLockedChest = (Array<List *>* *) 0x856a628;
Array<List *> * * Item::itemPoolLockedChest2 = (Array<List *>* *) 0x856a624;
Array<List *> * * Item::itemPoolAnyChest = (Array<List *>* *) 0x856a620;
Array<List *> * * Item::itemPoolAnyChest2 = (Array<List *>* *) 0x856a61c;
Array<List *> * * Item::itemPoolShop = (Array<List *>* *) 0x856a618;
Array<List *> * * Item::itemPoolShop2 = (Array<List *>* *) 0x856a614;
Array<List *> * * Item::itemPoolLockedShop = (Array<List *>* *) 0x856a610;
Array<List *> * * Item::itemPoolLockedShop2 = (Array<List *>* *) 0x856a60c;
Array<List *> * * Item::itemPoolUrn = (Array<List *>* *) 0x856a608;
Array<List *> * * Item::itemPoolUrn2 = (Array<List *>* *) 0x856a604;
List11 * * Item::hephItems1 = (List11* *) 0x856a600;
List11 * * Item::hephItems2 = (List11* *) 0x856a5fc;
List11 * * Item::hephItems3 = (List11* *) 0x856a5f8;
List11 * * Item::merlinItems1 = (List11* *) 0x856a5f4;
List11 * * Item::merlinItems2 = (List11* *) 0x856a5f0;
List11 * * Item::merlinItems3 = (List11* *) 0x856a5ec;
List11 * * Item::diamondDealerItems1 = (List11* *) 0x856a5e8;
List11 * * Item::diamondDealerItems2 = (List11* *) 0x856a5e4;
List11 * * Item::diamondDealerItems3 = (List11* *) 0x856a5e0;

bool (*Item::ptr::IsItemOfType)(String * i, String * query) = (bool (*)(String * i, String * query)) 0x815a940;
bool (*Item::ptr::IsItemOfType_2)(Item * self, String * query) = (bool (*)(Item * self, String * query)) 0x815af80;
String * (*Item::ptr::GetSlot)(XMLNode * n) = (String * (*)(XMLNode * n)) 0x815cec0;
String * (*Item::ptr::GetSlot2)(String * i) = (String * (*)(String * i)) 0x815cf90;
String * (*Item::ptr::GetSlot_2)(Item * self) = (String * (*)(Item * self)) 0x815d0e0;
int (*Item::ptr::GetValue)(Item * self) = (int (*)(Item * self)) 0x8070500;
int (*Item::ptr::GetValue_2)(String * t) = (int (*)(String * t)) 0x815dfd0;
String * (*Item::ptr::GetAppropriateCoinItemForQuantity)(int quantity) = (String * (*)(int quantity)) 0x815e0c0;
List18 * (*Item::ptr::GetPickupsAt)(int xVal, int yVal, Item * slf) = (List18 * (*)(int xVal, int yVal, Item * slf)) 0x8195f00;
String * (*Item::ptr::GetFlyawayText)(String * i) = (String * (*)(String * i)) 0x815e160;
String * (*Item::ptr::GetFlyawayText_2)(Item * self) = (String * (*)(Item * self)) 0x815c170;
void (*Item::ptr::AddToSeenItems)(String * itemName) = (void (*)(String * itemName)) 0x815e3d0;
Item * (*Item::ptr::New)(Item * self, int xVal, int yVal, String * type, bool drop, int utl, bool isTrainingWeapon) = (Item * (*)(Item * self, int xVal, int yVal, String * type, bool drop, int utl, bool isTrainingWeapon)) 0x8297ce0;
Item * (*Item::ptr::_new2)() = (Item * (*)()) 0x815e500;
Item * (*Item::ptr::DropItem)(int xVal, int yVal, String * t) = (Item * (*)(int xVal, int yVal, String * t)) 0x829b1e0;
bool (*Item::ptr::IsDamageReductionItem)(XMLNode * n) = (bool (*)(XMLNode * n)) 0x815e560;
bool (*Item::ptr::IsHealthBonusItem)(XMLNode * n) = (bool (*)(XMLNode * n)) 0x815e980;
bool (*Item::ptr::IsPainItem)(XMLNode * n) = (bool (*)(XMLNode * n)) 0x815ef50;
bool (*Item::ptr::IsDamageBonusItem)(XMLNode * n) = (bool (*)(XMLNode * n)) 0x815efe0;
bool (*Item::ptr::IsItemOfClass)(XMLNode * n, String * itemClass) = (bool (*)(XMLNode * n, String * itemClass)) 0x815f400;
XMLNode * (*Item::ptr::GetItemXML)(String * i) = (XMLNode * (*)(String * i)) 0x815f530;
bool (*Item::ptr::IsItemOfClass_2)(Item * self, String * itemClass) = (bool (*)(Item * self, String * itemClass)) 0x80d76e0;
bool (*Item::ptr::IsGoldGeneratingItem)(XMLNode * n) = (bool (*)(XMLNode * n)) 0x815f5e0;
bool (*Item::ptr::IsCourageItem)(XMLNode * n) = (bool (*)(XMLNode * n)) 0x815f6b0;
bool (*Item::ptr::IsDiscountItem)(XMLNode * n) = (bool (*)(XMLNode * n)) 0x815f740;
bool (*Item::ptr::IsValidItemForCurrentChars)(XMLNode * n) = (bool (*)(XMLNode * n)) 0x815f7d0;
bool (*Item::ptr::IsValidItemForCurrentChars2)(String * name) = (bool (*)(String * name)) 0x8162fd0;
bool (*Item::ptr::HasSeenItemXTimes)(String * itemName, int x) = (bool (*)(String * itemName, int x)) 0x8163090;
String * (*Item::ptr::GetRandomItemInClassByPredicate)(IItemPredicate * predicate, int requestedLevel, String * randomType, bool nonDeterministic) = (String * (*)(IItemPredicate * predicate, int requestedLevel, String * randomType, bool nonDeterministic)) 0x82abe40;
String * (*Item::ptr::GetRandomItemInClass)(String * itemClass, int requestedLevel, String * randomType, int chestColor, bool ignorePendingMetaGameItems, String * itemSlot, bool nonDeterministic) = (String * (*)(String * itemClass, int requestedLevel, String * randomType, int chestColor, bool ignorePendingMetaGameItems, String * itemSlot, bool nonDeterministic)) 0x82ac320;
List * (*Item::ptr::GetAllItemsInClass)(String * itemClass) = (List * (*)(String * itemClass)) 0x8163160;
String * (*Item::ptr::GetWeaponShapeClass)(String * t) = (String * (*)(String * t)) 0x8164300;
String * (*Item::ptr::ChangeWeaponMaterial)(String * t, String * materialClass) = (String * (*)(String * t, String * materialClass)) 0x8164c60;
void (*Item::ptr::CreateAmountOfCoins)(int xVal, int yVal, int amt) = (void (*)(int xVal, int yVal, int amt)) 0x829b0e0;
int (*Item::ptr::GetIntAttribute)(String * i, String * attr, int dflt) = (int (*)(String * i, String * attr, int dflt)) 0x8164dc0;
int (*Item::ptr::GetIntAttribute_2)(Item * self, String * attr, int dflt) = (int (*)(Item * self, String * attr, int dflt)) 0x80d3750;
void (*Item::ptr::SetMystery)(Item * self) = (void (*)(Item * self)) 0x82a3c90;
String * (*Item::ptr::GetWeaponBaseType)(String * t) = (String * (*)(String * t)) 0x8164ea0;
void (*Item::ptr::Die)(Item * self) = (void (*)(Item * self)) 0x8093370;
String * (*Item::ptr::GetStringAttribute)(String * i, String * attr, String * dflt) = (String * (*)(String * i, String * attr, String * dflt)) 0x81657f0;
String * (*Item::ptr::GetStringAttribute_2)(Item * self, String * attr, String * dflt) = (String * (*)(Item * self, String * attr, String * dflt)) 0x8165920;
bool (*Item::ptr::IsUnlocked)(String * t) = (bool (*)(String * t)) 0x81659e0;
Item * (*Item::ptr::GetPickupAt)(int xVal, int yVal, Item * slf) = (Item * (*)(int xVal, int yVal, Item * slf)) 0x8165bc0;
void (*Item::ptr::Transmute)(Item * self) = (void (*)(Item * self)) 0x82b9f50;
void (*Item::ptr::TransmuteAllItems)() = (void (*)()) 0x8195e20;
void (*Item::ptr::TransmuteNearbyItems)(int xVal, int yVal) = (void (*)(int xVal, int yVal)) 0x8195b70;
bool (*Item::ptr::IsValidRandomItem)(String * t) = (bool (*)(String * t)) 0x8165cf0;
List18 * (*Item::ptr::FindAllGoldPiles)() = (List18 * (*)()) 0x8195a40;
void (*Item::ptr::ClearAllSingleChoiceItems)(Item * takenItem) = (void (*)(Item * takenItem)) 0x8165db0;
String * (*Item::ptr::Pickup)(Item * self, Player * player) = (String * (*)(Item * self, Player * player)) 0x831c020;
bool (*Item::ptr::IsImmediatelyConsumed)(String * t) = (bool (*)(String * t)) 0x8165ec0;
int (*Item::ptr::GetCost)(String * i) = (int (*)(String * i)) 0x8165fb0;
bool (*Item::ptr::_HasSeenItem)(String * arg1) = (bool (*)(String * arg1)) 0x81660a0;
bool (*Item::ptr::IsDisabled)(String * item) = (bool (*)(String * item)) 0x8166100;
String * (*Item::ptr::GetSet)(XMLNode * n) = (String * (*)(XMLNode * n)) 0x8166160;
void (*Item::ptr::CreateItemPools)() = (void (*)()) 0x827d9a0;
String * (*Item::ptr::RandomHardModeHelperItem)() = (String * (*)()) 0x8166230;
void (*Item::ptr::FilterDisabledItems)(List11 * list) = (void (*)(List11 * list)) 0x81668d0;
void (*Item::ptr::InitAll)() = (void (*)()) 0x81669d0;
int (*Item::ptr::ConsumeCoinsRemainingOnLevel)() = (int (*)()) 0x8195900;
void (*Item::ptr::CheckAdjacentItems)(Item * self) = (void (*)(Item * self)) 0x81130c0;
void (*Item::ptr::Move)(Item * self) = (void (*)(Item * self)) 0x83d8ce0;
void (*Item::ptr::MoveAll)() = (void (*)()) 0x816b470;
void (*Item::ptr::RenderItemImageAt)(Sprite * img, int xVal, int yVal, int zVal, bool inWorld, float scale, float alpha, int frame) = (void (*)(Sprite * img, int xVal, int yVal, int zVal, bool inWorld, float scale, float alpha, int frame)) 0x816b4f0;
void (*Item::ptr::RenderItemAt)(String * iType, int xVal, int yVal, int zVal, bool inWorld, float scale, float alpha, int frame) = (void (*)(String * iType, int xVal, int yVal, int zVal, bool inWorld, float scale, float alpha, int frame)) 0x816b820;
int (*Item::ptr::GetHeavyGlassFrame)(int quantity) = (int (*)(int quantity)) 0x816ba30;
void (*Item::ptr::Update)(Item * self) = (void (*)(Item * self)) 0x812ccf0;
bool (*Item::ptr::IsVisible)(Item * self) = (bool (*)(Item * self)) 0x812e020;
void (*Item::ptr::Render)(Item * self) = (void (*)(Item * self)) 0x8267390;
bool (*Item::ptr::_Hit)(Item * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(Item * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x8070510;
void (*Item::ptr::mark)(Item * self) = (void (*)(Item * self)) 0x80a5230;
void (*Item::ptr::CSTR_Item)(Item * self) = (void (*)(Item * self)) 0x815a7f0;
#endif
#endif
