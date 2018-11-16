// Generated automatically. Do not edit!
#ifndef _Shrine_
#define _Shrine_
template<class T> class Array;
class Bouncer;
class IntSet;
class List22;
class Player;
class RNG;
class Sprite;
class String;
class TextSprite;
#include "Entity.hpp"

class Shrine : public Entity  {
public:
    int type;
    bool isForSale;
    int cost;
    Array<int> * digitVal;
    Array<Sprite *> * digits;
    bool active;
    int numKills;
    int painItemCount;
    TextSprite * hintText;
    String * contents1;
    String * contents2;
    String * contents3;
    String * contents4;
    String * contents5;
    String * contents6;
    RNG * rng;
    int chanceItemNum;
    Sprite * image2;
    Bouncer * bounce2;
    static bool * darknessShrineActive;
    static bool * rhythmShrineActive;
    static bool * riskShrineActive;
    static Player * * riskShrinePlayer;
    static bool * spaceShrineActive;
    static bool * warShrineActive;
    static bool * noReturnShrineActive;
    static Player * * noReturnShrinePlayer;
    static bool * paceShrineActive;
    static bool * bossShrineActive;
    static IntSet * * usedShrines;
    static int * usedShrinerInZone;
    static List22 * * shrineList;
    static int * SHRINE_CHANCE;
    static int * SHRINE_SACRIFICE;
    static int * SHRINE_PAIN;
    static int * SHRINE_BLOOD;
    static int * SHRINE_DARKNESS;
    static int * SHRINE_GLASS;
    static int * SHRINE_PEACE;
    static int * SHRINE_RHYTHM;
    static int * SHRINE_RISK;
    static int * SHRINE_SPACE;
    static int * SHRINE_WAR;
    static int * SHRINE_NO_RETURN;
    static int * SHRINE_PHASING;
    static int * SHRINE_PACE;
    static int * SHRINE_UNCERTAINTY;
    static int * SHRINE_BOSS;
    static int * NUM_SHRINES;

    // Wrappers
    Shrine(int xVal, int yVal, int cType, RNG * rng_, bool saleShrine, bool pending) {
        ptr::CSTR_Shrine(this);
        ptr::New(this, xVal, yVal, cType, rng_, saleShrine, pending);
    }

    inline static void ResetShrines() { ptr::ResetShrines(); }
    inline virtual void SetCost() { ptr::SetCost(this); }
    inline static void ResetCosts() { ptr::ResetCosts(); }
    inline static Shrine * GetShrineAt(int xVal, int yVal) { return ptr::GetShrineAt(xVal, yVal); }
    inline static Shrine * GetAdjacentShrine(int x, int y) { return ptr::GetAdjacentShrine(x, y); }
    inline static bool _IsSpecialActivation(int arg1) { return ptr::_IsSpecialActivation(arg1); }
    inline virtual bool CanSteal() { return ptr::CanSteal(this); }
    inline void Die() { ptr::Die(this); }
    inline virtual void SpawnChoiceOfThree(String * item1, String * item2, String * item3) { ptr::SpawnChoiceOfThree(this, item1, item2, item3); }
    inline virtual String * RandomGlassWeapon() { return ptr::RandomGlassWeapon(this); }
    inline virtual bool TryYourLuck() { return ptr::TryYourLuck(this); }
    inline virtual void GiveOutChanceItem(int xVal, int yVal, bool forceHere) { ptr::GiveOutChanceItem(this, xVal, yVal, forceHere); }
    inline virtual void GenUncertaintyContents() { ptr::GenUncertaintyContents(this); }
    inline virtual void GenBossContents() { ptr::GenBossContents(this); }
    inline virtual void GenPainContents() { ptr::GenPainContents(this); }
    inline virtual void GiveOutPainItem(int targetX, int targetY) { ptr::GiveOutPainItem(this, targetX, targetY); }
    inline virtual bool Activate(Player * player, int dir, bool fromMiniboss) { return ptr::Activate(this, player, dir, fromMiniboss); }
    inline virtual void AdjacentKill(bool wasMiniboss) { ptr::AdjacentKill(this, wasMiniboss); }
    inline virtual void AdjacentPain(Player * player, int damage) { ptr::AdjacentPain(this, player, damage); }
    inline static bool IsValidShrine(int shrineType) { return ptr::IsValidShrine(shrineType); }
    inline static int GetRandomShrineInt(bool isShriner, int banType1, int banType2) { return ptr::GetRandomShrineInt(isShriner, banType1, banType2); }
    inline static String * GetHintText(int shrineType) { return ptr::GetHintText(shrineType); }
    inline Shrine * New(int xVal, int yVal, int cType, RNG * rng_, bool saleShrine, bool pending) { return ptr::New(this, xVal, yVal, cType, rng_, saleShrine, pending); }
    inline Shrine * _new2() { return ptr::_new2(); }
    inline static void AddPendingShrinesToUsedList() { ptr::AddPendingShrinesToUsedList(); }
    inline virtual String * GetBombItem() { return ptr::GetBombItem(this); }
    inline virtual void LoadBombImage() { ptr::LoadBombImage(this); }
    inline void Update() { ptr::Update(this); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline void Render() { ptr::Render(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static void (*ResetShrines)();
        static void (*SetCost)(Shrine * self);
        static void (*ResetCosts)();
        static Shrine * (*GetShrineAt)(int xVal, int yVal);
        static Shrine * (*GetAdjacentShrine)(int x, int y);
        static bool (*_IsSpecialActivation)(int arg1);
        static bool (*CanSteal)(Shrine * self);
        static void (*Die)(Shrine * self);
        static void (*SpawnChoiceOfThree)(Shrine * self, String * item1, String * item2, String * item3);
        static String * (*RandomGlassWeapon)(Shrine * self);
        static bool (*TryYourLuck)(Shrine * self);
        static void (*GiveOutChanceItem)(Shrine * self, int xVal, int yVal, bool forceHere);
        static void (*GenUncertaintyContents)(Shrine * self);
        static void (*GenBossContents)(Shrine * self);
        static void (*GenPainContents)(Shrine * self);
        static void (*GiveOutPainItem)(Shrine * self, int targetX, int targetY);
        static bool (*Activate)(Shrine * self, Player * player, int dir, bool fromMiniboss);
        static void (*AdjacentKill)(Shrine * self, bool wasMiniboss);
        static void (*AdjacentPain)(Shrine * self, Player * player, int damage);
        static bool (*IsValidShrine)(int shrineType);
        static int (*GetRandomShrineInt)(bool isShriner, int banType1, int banType2);
        static String * (*GetHintText)(int shrineType);
        static Shrine * (*New)(Shrine * self, int xVal, int yVal, int cType, RNG * rng_, bool saleShrine, bool pending);
        static Shrine * (*_new2)();
        static void (*AddPendingShrinesToUsedList)();
        static String * (*GetBombItem)(Shrine * self);
        static void (*LoadBombImage)(Shrine * self);
        static void (*Update)(Shrine * self);
        static bool (*Hit)(Shrine * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*Render)(Shrine * self);
        static void (*mark)(Shrine * self);
        static void (*CSTR_Shrine)(Shrine * self);
    };
};

#ifdef _WIN32
inline bool * Shrine::darknessShrineActive = (bool*) 0x8358e4;
inline bool * Shrine::rhythmShrineActive = (bool*) 0x835792;
inline bool * Shrine::riskShrineActive = (bool*) 0x83576d;
inline Player * * Shrine::riskShrinePlayer = (Player* *) 0x835774;
inline bool * Shrine::spaceShrineActive = (bool*) 0x83596e;
inline bool * Shrine::warShrineActive = (bool*) 0x835709;
inline bool * Shrine::noReturnShrineActive = (bool*) 0x835708;
inline Player * * Shrine::noReturnShrinePlayer = (Player* *) 0x835704;
inline bool * Shrine::paceShrineActive = (bool*) 0x8358e5;
inline bool * Shrine::bossShrineActive = (bool*) 0x83596f;
inline IntSet * * Shrine::usedShrines = (IntSet* *) 0x835700;
inline int * Shrine::usedShrinerInZone = (int*) 0x8356fc;
inline List22 * * Shrine::shrineList = (List22* *) 0x8356f8;
inline int * Shrine::SHRINE_CHANCE = (int*) 0x835724;
inline int * Shrine::SHRINE_SACRIFICE = (int*) 0x83573c;
inline int * Shrine::SHRINE_PAIN = (int*) 0x83571c;
inline int * Shrine::SHRINE_BLOOD = (int*) 0x835754;
inline int * Shrine::SHRINE_DARKNESS = (int*) 0x835750;
inline int * Shrine::SHRINE_GLASS = (int*) 0x83574c;
inline int * Shrine::SHRINE_PEACE = (int*) 0x835748;
inline int * Shrine::SHRINE_RHYTHM = (int*) 0x835744;
inline int * Shrine::SHRINE_RISK = (int*) 0x835740;
inline int * Shrine::SHRINE_SPACE = (int*) 0x835738;
inline int * Shrine::SHRINE_WAR = (int*) 0x835734;
inline int * Shrine::SHRINE_NO_RETURN = (int*) 0x835730;
inline int * Shrine::SHRINE_PHASING = (int*) 0x83572c;
inline int * Shrine::SHRINE_PACE = (int*) 0x835728;
inline int * Shrine::SHRINE_UNCERTAINTY = (int*) 0x835718;
inline int * Shrine::SHRINE_BOSS = (int*) 0x835720;
inline int * Shrine::NUM_SHRINES = (int*) 0x835758;

inline void (*Shrine::ptr::ResetShrines)() = (void (*)()) 0x576ea0;
inline void (*Shrine::ptr::SetCost)(Shrine * self) = (void (*)(Shrine * self)) 0x576f10;
inline void (*Shrine::ptr::ResetCosts)() = (void (*)()) 0x577100;
inline Shrine * (*Shrine::ptr::GetShrineAt)(int xVal, int yVal) = (Shrine * (*)(int xVal, int yVal)) 0x577140;
inline Shrine * (*Shrine::ptr::GetAdjacentShrine)(int x, int y) = (Shrine * (*)(int x, int y)) 0x577190;
inline bool (*Shrine::ptr::_IsSpecialActivation)(int arg1) = (bool (*)(int arg1)) 0x0;
inline bool (*Shrine::ptr::CanSteal)(Shrine * self) = (bool (*)(Shrine * self)) 0x5771d0;
inline void (*Shrine::ptr::Die)(Shrine * self) = (void (*)(Shrine * self)) 0x5772b0;
inline void (*Shrine::ptr::SpawnChoiceOfThree)(Shrine * self, String * item1, String * item2, String * item3) = (void (*)(Shrine * self, String * item1, String * item2, String * item3)) 0x5772e0;
inline String * (*Shrine::ptr::RandomGlassWeapon)(Shrine * self) = (String * (*)(Shrine * self)) 0x5774e0;
inline bool (*Shrine::ptr::TryYourLuck)(Shrine * self) = (bool (*)(Shrine * self)) 0x577700;
inline void (*Shrine::ptr::GiveOutChanceItem)(Shrine * self, int xVal, int yVal, bool forceHere) = (void (*)(Shrine * self, int xVal, int yVal, bool forceHere)) 0x5777e0;
inline void (*Shrine::ptr::GenUncertaintyContents)(Shrine * self) = (void (*)(Shrine * self)) 0x578170;
inline void (*Shrine::ptr::GenBossContents)(Shrine * self) = (void (*)(Shrine * self)) 0x5783b0;
inline void (*Shrine::ptr::GenPainContents)(Shrine * self) = (void (*)(Shrine * self)) 0x5786a0;
inline void (*Shrine::ptr::GiveOutPainItem)(Shrine * self, int targetX, int targetY) = (void (*)(Shrine * self, int targetX, int targetY)) 0x5787f0;
inline bool (*Shrine::ptr::Activate)(Shrine * self, Player * player, int dir, bool fromMiniboss) = (bool (*)(Shrine * self, Player * player, int dir, bool fromMiniboss)) 0x578950;
inline void (*Shrine::ptr::AdjacentKill)(Shrine * self, bool wasMiniboss) = (void (*)(Shrine * self, bool wasMiniboss)) 0x57b0e0;
inline void (*Shrine::ptr::AdjacentPain)(Shrine * self, Player * player, int damage) = (void (*)(Shrine * self, Player * player, int damage)) 0x57b290;
inline bool (*Shrine::ptr::IsValidShrine)(int shrineType) = (bool (*)(int shrineType)) 0x57b2d0;
inline int (*Shrine::ptr::GetRandomShrineInt)(bool isShriner, int banType1, int banType2) = (int (*)(bool isShriner, int banType1, int banType2)) 0x57b430;
inline String * (*Shrine::ptr::GetHintText)(int shrineType) = (String * (*)(int shrineType)) 0x57b630;
inline Shrine * (*Shrine::ptr::New)(Shrine * self, int xVal, int yVal, int cType, RNG * rng_, bool saleShrine, bool pending) = (Shrine * (*)(Shrine * self, int xVal, int yVal, int cType, RNG * rng_, bool saleShrine, bool pending)) 0x57b890;
inline Shrine * (*Shrine::ptr::_new2)() = (Shrine * (*)()) 0x0;
inline void (*Shrine::ptr::AddPendingShrinesToUsedList)() = (void (*)()) 0x57cc50;
inline String * (*Shrine::ptr::GetBombItem)(Shrine * self) = (String * (*)(Shrine * self)) 0x57cca0;
inline void (*Shrine::ptr::LoadBombImage)(Shrine * self) = (void (*)(Shrine * self)) 0x57d320;
inline void (*Shrine::ptr::Update)(Shrine * self) = (void (*)(Shrine * self)) 0x57d920;
inline bool (*Shrine::ptr::Hit)(Shrine * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Shrine * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x57d990;
inline void (*Shrine::ptr::Render)(Shrine * self) = (void (*)(Shrine * self)) 0x57db40;
inline void (*Shrine::ptr::mark)(Shrine * self) = (void (*)(Shrine * self)) 0x57de50;
inline void (*Shrine::ptr::CSTR_Shrine)(Shrine * self) = (void (*)(Shrine * self)) 0x576970;
#endif

#ifdef __linux__
inline bool * Shrine::darknessShrineActive = (bool*) 0x856a6de;
inline bool * Shrine::rhythmShrineActive = (bool*) 0x856a6dd;
inline bool * Shrine::riskShrineActive = (bool*) 0x856a6dc;
inline Player * * Shrine::riskShrinePlayer = (Player* *) 0x856a6d8;
inline bool * Shrine::spaceShrineActive = (bool*) 0x856a6d6;
inline bool * Shrine::warShrineActive = (bool*) 0x856a6d5;
inline bool * Shrine::noReturnShrineActive = (bool*) 0x856a6d4;
inline Player * * Shrine::noReturnShrinePlayer = (Player* *) 0x856a6d0;
inline bool * Shrine::paceShrineActive = (bool*) 0x856a6cd;
inline bool * Shrine::bossShrineActive = (bool*) 0x856a6cc;
inline IntSet * * Shrine::usedShrines = (IntSet* *) 0x856a6c8;
inline int * Shrine::usedShrinerInZone = (int*) 0x856a6c4;
inline List22 * * Shrine::shrineList = (List22* *) 0x856a6c0;
inline int * Shrine::SHRINE_CHANCE = (int*) 0x856a6bc;
inline int * Shrine::SHRINE_SACRIFICE = (int*) 0x856a6b8;
inline int * Shrine::SHRINE_PAIN = (int*) 0x856a6b4;
inline int * Shrine::SHRINE_BLOOD = (int*) 0x856a6b0;
inline int * Shrine::SHRINE_DARKNESS = (int*) 0x856a6ac;
inline int * Shrine::SHRINE_GLASS = (int*) 0x856a6a8;
inline int * Shrine::SHRINE_PEACE = (int*) 0x856a6a4;
inline int * Shrine::SHRINE_RHYTHM = (int*) 0x856a6a0;
inline int * Shrine::SHRINE_RISK = (int*) 0x856a69c;
inline int * Shrine::SHRINE_SPACE = (int*) 0x856a698;
inline int * Shrine::SHRINE_WAR = (int*) 0x856a694;
inline int * Shrine::SHRINE_NO_RETURN = (int*) 0x856a690;
inline int * Shrine::SHRINE_PHASING = (int*) 0x856a68c;
inline int * Shrine::SHRINE_PACE = (int*) 0x856a688;
inline int * Shrine::SHRINE_UNCERTAINTY = (int*) 0x856a684;
inline int * Shrine::SHRINE_BOSS = (int*) 0x856a680;
inline int * Shrine::NUM_SHRINES = (int*) 0x856a67c;

inline void (*Shrine::ptr::ResetShrines)() = (void (*)()) 0x8157270;
inline void (*Shrine::ptr::SetCost)(Shrine * self) = (void (*)(Shrine * self)) 0x80d39b0;
inline void (*Shrine::ptr::ResetCosts)() = (void (*)()) 0x81572e0;
inline Shrine * (*Shrine::ptr::GetShrineAt)(int xVal, int yVal) = (Shrine * (*)(int xVal, int yVal)) 0x8157320;
inline Shrine * (*Shrine::ptr::GetAdjacentShrine)(int x, int y) = (Shrine * (*)(int x, int y)) 0x8157380;
inline bool (*Shrine::ptr::_IsSpecialActivation)(int arg1) = (bool (*)(int arg1)) 0x8157490;
inline bool (*Shrine::ptr::CanSteal)(Shrine * self) = (bool (*)(Shrine * self)) 0x80d3d70;
inline void (*Shrine::ptr::Die)(Shrine * self) = (void (*)(Shrine * self)) 0x80932d0;
inline void (*Shrine::ptr::SpawnChoiceOfThree)(Shrine * self, String * item1, String * item2, String * item3) = (void (*)(Shrine * self, String * item1, String * item2, String * item3)) 0x82a0f80;
inline String * (*Shrine::ptr::RandomGlassWeapon)(Shrine * self) = (String * (*)(Shrine * self)) 0x82b4040;
inline bool (*Shrine::ptr::TryYourLuck)(Shrine * self) = (bool (*)(Shrine * self)) 0x8101200;
inline void (*Shrine::ptr::GiveOutChanceItem)(Shrine * self, int xVal, int yVal, bool forceHere) = (void (*)(Shrine * self, int xVal, int yVal, bool forceHere)) 0x82b4730;
inline void (*Shrine::ptr::GenUncertaintyContents)(Shrine * self) = (void (*)(Shrine * self)) 0x82b9df0;
inline void (*Shrine::ptr::GenBossContents)(Shrine * self) = (void (*)(Shrine * self)) 0x82b3d30;
inline void (*Shrine::ptr::GenPainContents)(Shrine * self) = (void (*)(Shrine * self)) 0x80d8ae0;
inline void (*Shrine::ptr::GiveOutPainItem)(Shrine * self, int targetX, int targetY) = (void (*)(Shrine * self, int targetX, int targetY)) 0x82b4470;
inline bool (*Shrine::ptr::Activate)(Shrine * self, Player * player, int dir, bool fromMiniboss) = (bool (*)(Shrine * self, Player * player, int dir, bool fromMiniboss)) 0x831e680;
inline void (*Shrine::ptr::AdjacentKill)(Shrine * self, bool wasMiniboss) = (void (*)(Shrine * self, bool wasMiniboss)) 0x8391230;
inline void (*Shrine::ptr::AdjacentPain)(Shrine * self, Player * player, int damage) = (void (*)(Shrine * self, Player * player, int damage)) 0x807e810;
inline bool (*Shrine::ptr::IsValidShrine)(int shrineType) = (bool (*)(int shrineType)) 0x81574b0;
inline int (*Shrine::ptr::GetRandomShrineInt)(bool isShriner, int banType1, int banType2) = (int (*)(bool isShriner, int banType1, int banType2)) 0x8157780;
inline String * (*Shrine::ptr::GetHintText)(int shrineType) = (String * (*)(int shrineType)) 0x8157cd0;
inline Shrine * (*Shrine::ptr::New)(Shrine * self, int xVal, int yVal, int cType, RNG * rng_, bool saleShrine, bool pending) = (Shrine * (*)(Shrine * self, int xVal, int yVal, int cType, RNG * rng_, bool saleShrine, bool pending)) 0x82b0f20;
inline Shrine * (*Shrine::ptr::_new2)() = (Shrine * (*)()) 0x8157fc0;
inline void (*Shrine::ptr::AddPendingShrinesToUsedList)() = (void (*)()) 0x8158020;
inline String * (*Shrine::ptr::GetBombItem)(Shrine * self) = (String * (*)(Shrine * self)) 0x8162340;
inline void (*Shrine::ptr::LoadBombImage)(Shrine * self) = (void (*)(Shrine * self)) 0x81245e0;
inline void (*Shrine::ptr::Update)(Shrine * self) = (void (*)(Shrine * self)) 0x812ce80;
inline bool (*Shrine::ptr::Hit)(Shrine * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Shrine * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x8391410;
inline void (*Shrine::ptr::Render)(Shrine * self) = (void (*)(Shrine * self)) 0x8267ef0;
inline void (*Shrine::ptr::mark)(Shrine * self) = (void (*)(Shrine * self)) 0x80ab910;
inline void (*Shrine::ptr::CSTR_Shrine)(Shrine * self) = (void (*)(Shrine * self)) 0x8156d80;
#endif
#endif
