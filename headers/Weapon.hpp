// Generated automatically. Do not edit!
#ifndef _Weapon_
#define _Weapon_
class IntMap6;
class List25;
class List41;
class Player;
class Point;
class Sprite;
class String;
class TextSprite;
#include "Object.hpp"

class Weapon : public Object  {
public:
    String * type;
    int startingRenderTime;
    bool hasObsSwipe;
    IntMap6 * swipeImage;
    bool flipEachHit;
    Sprite * glowHUD;
    int numSwipeFrames;
    int glowXOff;
    int glowYOff;
    List25 * attackPoints;
    bool arrowWeapon;
    int reloadTime;
    int clipSize;
    int startingRenderTime2;
    IntMap6 * swipeImage2;
    int numSwipeFramesPerImage;
    bool daggerSwipeAdjacent;
    bool hasObsSwipe2;
    int numSwipeFrames2;
    int currentClipSize;
    Sprite * imageHUD;
    bool clipEmptyAttack;
    int currentReloadDelay;
    int attackDir;
    int playerX;
    int playerY;
    int playerDir;
    bool warhammerObstructed;
    Point * lastPointHit;
    int swipeImageHitFrame;
    bool useMeleeSwipe;
    int renderTime;
    Player * renderPlayer;
    int aura;
    TextSprite * textHUD;
    int numSwipeFramesPerImage2;
    static List41 * * swipingWeapons;

    // Wrappers
    Weapon(String * t) {
        ptr::CSTR_Weapon(this);
        ptr::New(this, t);
    }

    inline virtual bool IsDagger() { return ptr::IsDagger(this); }
    inline virtual bool IsLongsword() { return ptr::IsLongsword(this); }
    inline virtual bool IsBroadsword() { return ptr::IsBroadsword(this); }
    inline virtual bool IsBow() { return ptr::IsBow(this); }
    inline virtual bool IsCrossbow() { return ptr::IsCrossbow(this); }
    inline virtual bool IsWhip() { return ptr::IsWhip(this); }
    inline virtual bool IsFlail() { return ptr::IsFlail(this); }
    inline virtual bool IsCat() { return ptr::IsCat(this); }
    inline virtual bool IsRapier() { return ptr::IsRapier(this); }
    inline virtual bool IsSpear() { return ptr::IsSpear(this); }
    inline virtual bool IsBlunderbuss() { return ptr::IsBlunderbuss(this); }
    inline virtual bool IsRifle() { return ptr::IsRifle(this); }
    inline virtual bool IsAxe() { return ptr::IsAxe(this); }
    inline virtual bool IsHarp() { return ptr::IsHarp(this); }
    inline virtual bool IsWarhammer() { return ptr::IsWarhammer(this); }
    inline virtual bool IsStaff() { return ptr::IsStaff(this); }
    inline virtual bool IsCutlass() { return ptr::IsCutlass(this); }
    inline Weapon * New(String * t) { return ptr::New(this, t); }
    inline Weapon * _new2() { return ptr::_new2(); }
    inline virtual bool IsWeaponCurrentlyPhasing() { return ptr::IsWeaponCurrentlyPhasing(this); }
    inline static bool IsObstructed(int x, int y, bool isPhasing) { return ptr::IsObstructed(x, y, isPhasing); }
    inline virtual bool IsObstructed(int x, int y) { return ptr::IsObstructed_2(this, x, y); }
    inline virtual bool IsWeaponCurrentlyPiercing(Player * player) { return ptr::IsWeaponCurrentlyPiercing(this, player); }
    inline virtual bool CanHitEnemyInDirection(Player * player, int dir, bool isThrow, List25 * attPoints) { return ptr::CanHitEnemyInDirection(this, player, dir, isThrow, attPoints); }
    inline virtual void ResetStrikes(List25 * attPoints) { ptr::ResetStrikes(this, attPoints); }
    inline virtual int GetDamage() { return ptr::GetDamage(this); }
    inline virtual bool IsWeaponMultiHit() { return ptr::IsWeaponMultiHit(this); }
    inline virtual bool HitCoord(int x, int y, int damage, int dir, Player * player, bool isThrow) { return ptr::HitCoord(this, x, y, damage, dir, player, isThrow); }
    inline virtual void StartSwipe(int tmpRenderTime, Player * player) { ptr::StartSwipe(this, tmpRenderTime, player); }
    inline virtual void DecrementStrikesForChildren(List25 * attPoints) { ptr::DecrementStrikesForChildren(this, attPoints); }
    inline virtual bool AttackPoints(Player * player, int dir, bool isThrow, List25 * attPoints) { return ptr::AttackPoints(this, player, dir, isThrow, attPoints); }
    inline virtual bool Attack(Player * player, int dir, bool isThrow) { return ptr::Attack(this, player, dir, isThrow); }
    inline virtual bool KnockPlayerBack() { return ptr::KnockPlayerBack(this); }
    inline virtual bool IsKeepable() { return ptr::IsKeepable(this); }
    inline virtual bool IsThrowable() { return ptr::IsThrowable(this); }
    inline virtual bool HasAura(int a) { return ptr::HasAura(this, a); }
    inline virtual bool IsLute() { return ptr::IsLute(this); }
    inline virtual bool IsHealing() { return ptr::IsHealing(this); }
    inline virtual TextSprite * GetTextHUD() { return ptr::GetTextHUD(this); }
    inline virtual void RenderOnHUD(Player * player, int xVal, int yVal, int zVal, float scale, float alpha) { ptr::RenderOnHUD(this, player, xVal, yVal, zVal, scale, alpha); }
    inline virtual void Render() { ptr::Render(this); }
    inline static void RenderAll() { ptr::RenderAll(); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static bool (*IsDagger)(Weapon * self);
        static bool (*IsLongsword)(Weapon * self);
        static bool (*IsBroadsword)(Weapon * self);
        static bool (*IsBow)(Weapon * self);
        static bool (*IsCrossbow)(Weapon * self);
        static bool (*IsWhip)(Weapon * self);
        static bool (*IsFlail)(Weapon * self);
        static bool (*IsCat)(Weapon * self);
        static bool (*IsRapier)(Weapon * self);
        static bool (*IsSpear)(Weapon * self);
        static bool (*IsBlunderbuss)(Weapon * self);
        static bool (*IsRifle)(Weapon * self);
        static bool (*IsAxe)(Weapon * self);
        static bool (*IsHarp)(Weapon * self);
        static bool (*IsWarhammer)(Weapon * self);
        static bool (*IsStaff)(Weapon * self);
        static bool (*IsCutlass)(Weapon * self);
        static Weapon * (*New)(Weapon * self, String * t);
        static Weapon * (*_new2)();
        static bool (*IsWeaponCurrentlyPhasing)(Weapon * self);
        static bool (*IsObstructed)(int x, int y, bool isPhasing);
        static bool (*IsObstructed_2)(Weapon * self, int x, int y);
        static bool (*IsWeaponCurrentlyPiercing)(Weapon * self, Player * player);
        static bool (*CanHitEnemyInDirection)(Weapon * self, Player * player, int dir, bool isThrow, List25 * attPoints);
        static void (*ResetStrikes)(Weapon * self, List25 * attPoints);
        static int (*GetDamage)(Weapon * self);
        static bool (*IsWeaponMultiHit)(Weapon * self);
        static bool (*HitCoord)(Weapon * self, int x, int y, int damage, int dir, Player * player, bool isThrow);
        static void (*StartSwipe)(Weapon * self, int tmpRenderTime, Player * player);
        static void (*DecrementStrikesForChildren)(Weapon * self, List25 * attPoints);
        static bool (*AttackPoints)(Weapon * self, Player * player, int dir, bool isThrow, List25 * attPoints);
        static bool (*Attack)(Weapon * self, Player * player, int dir, bool isThrow);
        static bool (*KnockPlayerBack)(Weapon * self);
        static bool (*IsKeepable)(Weapon * self);
        static bool (*IsThrowable)(Weapon * self);
        static bool (*HasAura)(Weapon * self, int a);
        static bool (*IsLute)(Weapon * self);
        static bool (*IsHealing)(Weapon * self);
        static TextSprite * (*GetTextHUD)(Weapon * self);
        static void (*RenderOnHUD)(Weapon * self, Player * player, int xVal, int yVal, int zVal, float scale, float alpha);
        static void (*Render)(Weapon * self);
        static void (*RenderAll)();
        static void (*mark)(Weapon * self);
        static void (*CSTR_Weapon)(Weapon * self);
    };
};

#ifdef _WIN32
List41 * * Weapon::swipingWeapons = (List41* *) 0x835610;

bool (*Weapon::ptr::IsDagger)(Weapon * self) = (bool (*)(Weapon * self)) 0x5e1e10;
bool (*Weapon::ptr::IsLongsword)(Weapon * self) = (bool (*)(Weapon * self)) 0x5e24c0;
bool (*Weapon::ptr::IsBroadsword)(Weapon * self) = (bool (*)(Weapon * self)) 0x5e2870;
bool (*Weapon::ptr::IsBow)(Weapon * self) = (bool (*)(Weapon * self)) 0x5e2c20;
bool (*Weapon::ptr::IsCrossbow)(Weapon * self) = (bool (*)(Weapon * self)) 0x5e2fd0;
bool (*Weapon::ptr::IsWhip)(Weapon * self) = (bool (*)(Weapon * self)) 0x5e3380;
bool (*Weapon::ptr::IsFlail)(Weapon * self) = (bool (*)(Weapon * self)) 0x5e3730;
bool (*Weapon::ptr::IsCat)(Weapon * self) = (bool (*)(Weapon * self)) 0x5e3ae0;
bool (*Weapon::ptr::IsRapier)(Weapon * self) = (bool (*)(Weapon * self)) 0x5e3e90;
bool (*Weapon::ptr::IsSpear)(Weapon * self) = (bool (*)(Weapon * self)) 0x5e4240;
bool (*Weapon::ptr::IsBlunderbuss)(Weapon * self) = (bool (*)(Weapon * self)) 0x5e45f0;
bool (*Weapon::ptr::IsRifle)(Weapon * self) = (bool (*)(Weapon * self)) 0x5e46d0;
bool (*Weapon::ptr::IsAxe)(Weapon * self) = (bool (*)(Weapon * self)) 0x5e47b0;
bool (*Weapon::ptr::IsHarp)(Weapon * self) = (bool (*)(Weapon * self)) 0x5e4870;
bool (*Weapon::ptr::IsWarhammer)(Weapon * self) = (bool (*)(Weapon * self)) 0x5e4930;
bool (*Weapon::ptr::IsStaff)(Weapon * self) = (bool (*)(Weapon * self)) 0x5e49f0;
bool (*Weapon::ptr::IsCutlass)(Weapon * self) = (bool (*)(Weapon * self)) 0x5e4ab0;
Weapon * (*Weapon::ptr::New)(Weapon * self, String * t) = (Weapon * (*)(Weapon * self, String * t)) 0x5e4b90;
Weapon * (*Weapon::ptr::_new2)() = (Weapon * (*)()) 0x0;
bool (*Weapon::ptr::IsWeaponCurrentlyPhasing)(Weapon * self) = (bool (*)(Weapon * self)) 0x5e8fb0;
bool (*Weapon::ptr::IsObstructed)(int x, int y, bool isPhasing) = (bool (*)(int x, int y, bool isPhasing)) 0x5e9070;
bool (*Weapon::ptr::IsObstructed_2)(Weapon * self, int x, int y) = (bool (*)(Weapon * self, int x, int y)) 0x5e9150;
bool (*Weapon::ptr::IsWeaponCurrentlyPiercing)(Weapon * self, Player * player) = (bool (*)(Weapon * self, Player * player)) 0x5e9170;
bool (*Weapon::ptr::CanHitEnemyInDirection)(Weapon * self, Player * player, int dir, bool isThrow, List25 * attPoints) = (bool (*)(Weapon * self, Player * player, int dir, bool isThrow, List25 * attPoints)) 0x5e92f0;
void (*Weapon::ptr::ResetStrikes)(Weapon * self, List25 * attPoints) = (void (*)(Weapon * self, List25 * attPoints)) 0x5e9590;
int (*Weapon::ptr::GetDamage)(Weapon * self) = (int (*)(Weapon * self)) 0x5e95f0;
bool (*Weapon::ptr::IsWeaponMultiHit)(Weapon * self) = (bool (*)(Weapon * self)) 0x5e9a50;
bool (*Weapon::ptr::HitCoord)(Weapon * self, int x, int y, int damage, int dir, Player * player, bool isThrow) = (bool (*)(Weapon * self, int x, int y, int damage, int dir, Player * player, bool isThrow)) 0x5e9ad0;
void (*Weapon::ptr::StartSwipe)(Weapon * self, int tmpRenderTime, Player * player) = (void (*)(Weapon * self, int tmpRenderTime, Player * player)) 0x5e9e30;
void (*Weapon::ptr::DecrementStrikesForChildren)(Weapon * self, List25 * attPoints) = (void (*)(Weapon * self, List25 * attPoints)) 0x5e9ec0;
bool (*Weapon::ptr::AttackPoints)(Weapon * self, Player * player, int dir, bool isThrow, List25 * attPoints) = (bool (*)(Weapon * self, Player * player, int dir, bool isThrow, List25 * attPoints)) 0x5e9f10;
bool (*Weapon::ptr::Attack)(Weapon * self, Player * player, int dir, bool isThrow) = (bool (*)(Weapon * self, Player * player, int dir, bool isThrow)) 0x5ea720;
bool (*Weapon::ptr::KnockPlayerBack)(Weapon * self) = (bool (*)(Weapon * self)) 0x5eafe0;
bool (*Weapon::ptr::IsKeepable)(Weapon * self) = (bool (*)(Weapon * self)) 0x5eb0c0;
bool (*Weapon::ptr::IsThrowable)(Weapon * self) = (bool (*)(Weapon * self)) 0x5eb1a0;
bool (*Weapon::ptr::HasAura)(Weapon * self, int a) = (bool (*)(Weapon * self, int a)) 0x5eb3c0;
bool (*Weapon::ptr::IsLute)(Weapon * self) = (bool (*)(Weapon * self)) 0x5eb3e0;
bool (*Weapon::ptr::IsHealing)(Weapon * self) = (bool (*)(Weapon * self)) 0x5eb4c0;
TextSprite * (*Weapon::ptr::GetTextHUD)(Weapon * self) = (TextSprite * (*)(Weapon * self)) 0x5eb640;
void (*Weapon::ptr::RenderOnHUD)(Weapon * self, Player * player, int xVal, int yVal, int zVal, float scale, float alpha) = (void (*)(Weapon * self, Player * player, int xVal, int yVal, int zVal, float scale, float alpha)) 0x5eb6e0;
void (*Weapon::ptr::Render)(Weapon * self) = (void (*)(Weapon * self)) 0x5ebf60;
void (*Weapon::ptr::RenderAll)() = (void (*)()) 0x5ec550;
void (*Weapon::ptr::mark)(Weapon * self) = (void (*)(Weapon * self)) 0x5ec5a0;
void (*Weapon::ptr::CSTR_Weapon)(Weapon * self) = (void (*)(Weapon * self)) 0x5e1b80;
#endif

#ifdef __linux__
List41 * * Weapon::swipingWeapons = (List41* *) 0x856a484;

bool (*Weapon::ptr::IsDagger)(Weapon * self) = (bool (*)(Weapon * self)) 0x80cb3e0;
bool (*Weapon::ptr::IsLongsword)(Weapon * self) = (bool (*)(Weapon * self)) 0x80cb1c0;
bool (*Weapon::ptr::IsBroadsword)(Weapon * self) = (bool (*)(Weapon * self)) 0x80cafa0;
bool (*Weapon::ptr::IsBow)(Weapon * self) = (bool (*)(Weapon * self)) 0x80cad80;
bool (*Weapon::ptr::IsCrossbow)(Weapon * self) = (bool (*)(Weapon * self)) 0x80cab60;
bool (*Weapon::ptr::IsWhip)(Weapon * self) = (bool (*)(Weapon * self)) 0x80ca940;
bool (*Weapon::ptr::IsFlail)(Weapon * self) = (bool (*)(Weapon * self)) 0x80ca720;
bool (*Weapon::ptr::IsCat)(Weapon * self) = (bool (*)(Weapon * self)) 0x80ca500;
bool (*Weapon::ptr::IsRapier)(Weapon * self) = (bool (*)(Weapon * self)) 0x80ca2e0;
bool (*Weapon::ptr::IsSpear)(Weapon * self) = (bool (*)(Weapon * self)) 0x80ca0c0;
bool (*Weapon::ptr::IsBlunderbuss)(Weapon * self) = (bool (*)(Weapon * self)) 0x80ca070;
bool (*Weapon::ptr::IsRifle)(Weapon * self) = (bool (*)(Weapon * self)) 0x80ca020;
bool (*Weapon::ptr::IsAxe)(Weapon * self) = (bool (*)(Weapon * self)) 0x815aef0;
bool (*Weapon::ptr::IsHarp)(Weapon * self) = (bool (*)(Weapon * self)) 0x815ae60;
bool (*Weapon::ptr::IsWarhammer)(Weapon * self) = (bool (*)(Weapon * self)) 0x815add0;
bool (*Weapon::ptr::IsStaff)(Weapon * self) = (bool (*)(Weapon * self)) 0x815ad40;
bool (*Weapon::ptr::IsCutlass)(Weapon * self) = (bool (*)(Weapon * self)) 0x815acb0;
Weapon * (*Weapon::ptr::New)(Weapon * self, String * t) = (Weapon * (*)(Weapon * self, String * t)) 0x8211880;
Weapon * (*Weapon::ptr::_new2)() = (Weapon * (*)()) 0x819a890;
bool (*Weapon::ptr::IsWeaponCurrentlyPhasing)(Weapon * self) = (bool (*)(Weapon * self)) 0x815ac20;
bool (*Weapon::ptr::IsObstructed)(int x, int y, bool isPhasing) = (bool (*)(int x, int y, bool isPhasing)) 0x819a8a0;
bool (*Weapon::ptr::IsObstructed_2)(Weapon * self, int x, int y) = (bool (*)(Weapon * self, int x, int y)) 0x819a9e0;
bool (*Weapon::ptr::IsWeaponCurrentlyPiercing)(Weapon * self, Player * player) = (bool (*)(Weapon * self, Player * player)) 0x815aad0;
bool (*Weapon::ptr::CanHitEnemyInDirection)(Weapon * self, Player * player, int dir, bool isThrow, List25 * attPoints) = (bool (*)(Weapon * self, Player * player, int dir, bool isThrow, List25 * attPoints)) 0x8375c40;
void (*Weapon::ptr::ResetStrikes)(Weapon * self, List25 * attPoints) = (void (*)(Weapon * self, List25 * attPoints)) 0x8072810;
int (*Weapon::ptr::GetDamage)(Weapon * self) = (int (*)(Weapon * self)) 0x8186ac0;
bool (*Weapon::ptr::IsWeaponMultiHit)(Weapon * self) = (bool (*)(Weapon * self)) 0x807ef90;
bool (*Weapon::ptr::HitCoord)(Weapon * self, int x, int y, int damage, int dir, Player * player, bool isThrow) = (bool (*)(Weapon * self, int x, int y, int damage, int dir, Player * player, bool isThrow)) 0x83c8980;
void (*Weapon::ptr::StartSwipe)(Weapon * self, int tmpRenderTime, Player * player) = (void (*)(Weapon * self, int tmpRenderTime, Player * player)) 0x80a0a10;
void (*Weapon::ptr::DecrementStrikesForChildren)(Weapon * self, List25 * attPoints) = (void (*)(Weapon * self, List25 * attPoints)) 0x8072870;
bool (*Weapon::ptr::AttackPoints)(Weapon * self, Player * player, int dir, bool isThrow, List25 * attPoints) = (bool (*)(Weapon * self, Player * player, int dir, bool isThrow, List25 * attPoints)) 0x839f9d0;
bool (*Weapon::ptr::Attack)(Weapon * self, Player * player, int dir, bool isThrow) = (bool (*)(Weapon * self, Player * player, int dir, bool isThrow)) 0x8375e80;
bool (*Weapon::ptr::KnockPlayerBack)(Weapon * self) = (bool (*)(Weapon * self)) 0x815aa20;
bool (*Weapon::ptr::IsKeepable)(Weapon * self) = (bool (*)(Weapon * self)) 0x80cd170;
bool (*Weapon::ptr::IsThrowable)(Weapon * self) = (bool (*)(Weapon * self)) 0x80cd000;
bool (*Weapon::ptr::HasAura)(Weapon * self, int a) = (bool (*)(Weapon * self, int a)) 0x80728d0;
bool (*Weapon::ptr::IsLute)(Weapon * self) = (bool (*)(Weapon * self)) 0x80c9fd0;
bool (*Weapon::ptr::IsHealing)(Weapon * self) = (bool (*)(Weapon * self)) 0x815b3a0;
TextSprite * (*Weapon::ptr::GetTextHUD)(Weapon * self) = (TextSprite * (*)(Weapon * self)) 0x81463c0;
void (*Weapon::ptr::RenderOnHUD)(Weapon * self, Player * player, int xVal, int yVal, int zVal, float scale, float alpha) = (void (*)(Weapon * self, Player * player, int xVal, int yVal, int zVal, float scale, float alpha)) 0x826b820;
void (*Weapon::ptr::Render)(Weapon * self) = (void (*)(Weapon * self)) 0x8375350;
void (*Weapon::ptr::RenderAll)() = (void (*)()) 0x819aa20;
void (*Weapon::ptr::mark)(Weapon * self) = (void (*)(Weapon * self)) 0x80a7e50;
void (*Weapon::ptr::CSTR_Weapon)(Weapon * self) = (void (*)(Weapon * self)) 0x819b2f0;
#endif
#endif
