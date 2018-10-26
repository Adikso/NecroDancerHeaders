// Generated automatically. Do not edit!
#ifndef _Crate_
#define _Crate_
class Bouncer;
class Entity;
class List10;
class List9;
class Point;
class Sprite;
class String;
#include "Enemy.hpp"

class Crate : public Enemy  {
public:
    int crateType;
    String * contents;
    int initialYOff;
    String * contents2;
    String * contents3;
    bool beEmpty;
    int emptyCoins;
    bool determinedContents;
    Sprite * image2;
    Bouncer * bounce2;
    int chargingDir;
    bool gorgonFlipX;
    int gorgonFlashFrames;
    static List9 * * fallenCrates;
    static List10 * * fallenGargoyles;
    static List9 * * crateList;
    static int * TYPE_URN;
    static int * TYPE_GREEN_GORGON_STATUE;
    static int * TYPE_GOLD_GORGON_STATUE;
    static int * TYPE_BARREL;
    static int * TYPE_CRATE;

    // Wrappers
    Crate(int xVal, int yVal, int type, String * cont) {
        ptr::CSTR_Crate(this);
        ptr::New(this, xVal, yVal, type, cont);
    }

    inline static String * SelectItem(int itemLevel) { return ptr::SelectItem(itemLevel); }
    inline virtual void DecideIfStayingEmpty() { ptr::DecideIfStayingEmpty(this); }
    inline virtual void DetermineContents() { ptr::DetermineContents(this); }
    inline Crate * New(int xVal, int yVal, int type, String * cont) { return ptr::New(this, xVal, yVal, type, cont); }
    inline Crate * _new2() { return ptr::_new2(); }
    inline static int _GetNumCrates() { return ptr::_GetNumCrates(); }
    inline static void _ClearFallenCrates() { ptr::_ClearFallenCrates(); }
    inline virtual String * DetermineContentsNowPlayerDoesntOwn() { return ptr::DetermineContentsNowPlayerDoesntOwn(this); }
    inline virtual bool IsGorgonStatue() { return ptr::IsGorgonStatue(this); }
    inline void Die() { ptr::Die(this); }
    inline virtual bool Open2(bool playSound) { return ptr::Open2(this, playSound); }
    inline static void ProcessFallenCrates() { ptr::ProcessFallenCrates(); }
    inline bool _IsVisible() { return ptr::_IsVisible(); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void Knockback(int dir) { ptr::Knockback(this, dir); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline void MoveFail() { ptr::MoveFail(this); }
    inline int MoveImmediate(int xVal, int yVal, String * movementSource) { return ptr::MoveImmediate(this, xVal, yVal, movementSource); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static String * (*SelectItem)(int itemLevel);
        static void (*DecideIfStayingEmpty)(Crate * self);
        static void (*DetermineContents)(Crate * self);
        static Crate * (*New)(Crate * self, int xVal, int yVal, int type, String * cont);
        static Crate * (*_new2)();
        static int (*_GetNumCrates)();
        static void (*_ClearFallenCrates)();
        static String * (*DetermineContentsNowPlayerDoesntOwn)(Crate * self);
        static bool (*IsGorgonStatue)(Crate * self);
        static void (*Die)(Crate * self);
        static bool (*Open2)(Crate * self, bool playSound);
        static void (*ProcessFallenCrates)();
        static bool (*_IsVisible)();
        static void (*Update)(Crate * self);
        static void (*Render)(Crate * self);
        static Point * (*GetMovementDirection)(Crate * self);
        static void (*Knockback)(Crate * self, int dir);
        static bool (*Hit)(Crate * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*MoveFail)(Crate * self);
        static int (*MoveImmediate)(Crate * self, int xVal, int yVal, String * movementSource);
        static void (*MoveSucceed)(Crate * self, bool hitPlayer, bool moveDelayed);
        static void (*mark)(Crate * self);
        static void (*CSTR_Crate)(Crate * self);
    };
};

#ifdef _WIN32
List9 * * Crate::fallenCrates = (List9* *) 0x835ab0;
List10 * * Crate::fallenGargoyles = (List10* *) 0x835aac;
List9 * * Crate::crateList = (List9* *) 0x8356ac;
int * Crate::TYPE_URN = (int*) 0x835984;
int * Crate::TYPE_GREEN_GORGON_STATUE = (int*) 0x83575c;
int * Crate::TYPE_GOLD_GORGON_STATUE = (int*) 0x8356a8;
int * Crate::TYPE_BARREL = (int*) 0x835760;
int * Crate::TYPE_CRATE = (int*) 0x835764;

String * (*Crate::ptr::SelectItem)(int itemLevel) = (String * (*)(int itemLevel)) 0x5be8e0;
void (*Crate::ptr::DecideIfStayingEmpty)(Crate * self) = (void (*)(Crate * self)) 0x5bebe0;
void (*Crate::ptr::DetermineContents)(Crate * self) = (void (*)(Crate * self)) 0x5beed0;
Crate * (*Crate::ptr::New)(Crate * self, int xVal, int yVal, int type, String * cont) = (Crate * (*)(Crate * self, int xVal, int yVal, int type, String * cont)) 0x5bf420;
Crate * (*Crate::ptr::_new2)() = (Crate * (*)()) 0x0;
int (*Crate::ptr::_GetNumCrates)() = (int (*)()) 0x0;
void (*Crate::ptr::_ClearFallenCrates)() = (void (*)()) 0x0;
String * (*Crate::ptr::DetermineContentsNowPlayerDoesntOwn)(Crate * self) = (String * (*)(Crate * self)) 0x5bf620;
bool (*Crate::ptr::IsGorgonStatue)(Crate * self) = (bool (*)(Crate * self)) 0x5bf690;
void (*Crate::ptr::Die)(Crate * self) = (void (*)(Crate * self)) 0x5bf6b0;
bool (*Crate::ptr::Open2)(Crate * self, bool playSound) = (bool (*)(Crate * self, bool playSound)) 0x5bf6f0;
void (*Crate::ptr::ProcessFallenCrates)() = (void (*)()) 0x5c0300;
bool (*Crate::ptr::_IsVisible)() = (bool (*)()) 0x0;
void (*Crate::ptr::Update)(Crate * self) = (void (*)(Crate * self)) 0x5c0430;
void (*Crate::ptr::Render)(Crate * self) = (void (*)(Crate * self)) 0x5c0a90;
Point * (*Crate::ptr::GetMovementDirection)(Crate * self) = (Point * (*)(Crate * self)) 0x5c0b30;
void (*Crate::ptr::Knockback)(Crate * self, int dir) = (void (*)(Crate * self, int dir)) 0x5c0c30;
bool (*Crate::ptr::Hit)(Crate * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Crate * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x5c0c50;
void (*Crate::ptr::MoveFail)(Crate * self) = (void (*)(Crate * self)) 0x5c10b0;
int (*Crate::ptr::MoveImmediate)(Crate * self, int xVal, int yVal, String * movementSource) = (int (*)(Crate * self, int xVal, int yVal, String * movementSource)) 0x5c1240;
void (*Crate::ptr::MoveSucceed)(Crate * self, bool hitPlayer, bool moveDelayed) = (void (*)(Crate * self, bool hitPlayer, bool moveDelayed)) 0x5c1430;
void (*Crate::ptr::mark)(Crate * self) = (void (*)(Crate * self)) 0x5c1460;
void (*Crate::ptr::CSTR_Crate)(Crate * self) = (void (*)(Crate * self)) 0x5be570;
#endif

#ifdef __linux__
List9 * * Crate::fallenCrates = (List9* *) 0x856a588;
List10 * * Crate::fallenGargoyles = (List10* *) 0x856a584;
List9 * * Crate::crateList = (List9* *) 0x856a580;
int * Crate::TYPE_URN = (int*) 0x856a57c;
int * Crate::TYPE_GREEN_GORGON_STATUE = (int*) 0x856a578;
int * Crate::TYPE_GOLD_GORGON_STATUE = (int*) 0x856a574;
int * Crate::TYPE_BARREL = (int*) 0x856a570;
int * Crate::TYPE_CRATE = (int*) 0x856a56c;

String * (*Crate::ptr::SelectItem)(int itemLevel) = (String * (*)(int itemLevel)) 0x82ace50;
void (*Crate::ptr::DecideIfStayingEmpty)(Crate * self) = (void (*)(Crate * self)) 0x82ad2b0;
void (*Crate::ptr::DetermineContents)(Crate * self) = (void (*)(Crate * self)) 0x82aca20;
Crate * (*Crate::ptr::New)(Crate * self, int xVal, int yVal, int type, String * cont) = (Crate * (*)(Crate * self, int xVal, int yVal, int type, String * cont)) 0x817e010;
Crate * (*Crate::ptr::_new2)() = (Crate * (*)()) 0x817e1a0;
int (*Crate::ptr::_GetNumCrates)() = (int (*)()) 0x817e1c0;
void (*Crate::ptr::_ClearFallenCrates)() = (void (*)()) 0x817e1e0;
String * (*Crate::ptr::DetermineContentsNowPlayerDoesntOwn)(Crate * self) = (String * (*)(Crate * self)) 0x80708f0;
bool (*Crate::ptr::IsGorgonStatue)(Crate * self) = (bool (*)(Crate * self)) 0x8070940;
void (*Crate::ptr::Die)(Crate * self) = (void (*)(Crate * self)) 0x83b7140;
bool (*Crate::ptr::Open2)(Crate * self, bool playSound) = (bool (*)(Crate * self, bool playSound)) 0x839d0f0;
void (*Crate::ptr::ProcessFallenCrates)() = (void (*)()) 0x817e210;
bool (*Crate::ptr::_IsVisible)() = (bool (*)()) 0x812df60;
void (*Crate::ptr::Update)(Crate * self) = (void (*)(Crate * self)) 0x8388060;
void (*Crate::ptr::Render)(Crate * self) = (void (*)(Crate * self)) 0x830dfb0;
Point * (*Crate::ptr::GetMovementDirection)(Crate * self) = (Point * (*)(Crate * self)) 0x80b5220;
void (*Crate::ptr::Knockback)(Crate * self, int dir) = (void (*)(Crate * self, int dir)) 0x8103240;
bool (*Crate::ptr::Hit)(Crate * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Crate * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x839df70;
void (*Crate::ptr::MoveFail)(Crate * self) = (void (*)(Crate * self)) 0x839e740;
int (*Crate::ptr::MoveImmediate)(Crate * self, int xVal, int yVal, String * movementSource) = (int (*)(Crate * self, int xVal, int yVal, String * movementSource)) 0x8394450;
void (*Crate::ptr::MoveSucceed)(Crate * self, bool hitPlayer, bool moveDelayed) = (void (*)(Crate * self, bool hitPlayer, bool moveDelayed)) 0x8070970;
void (*Crate::ptr::mark)(Crate * self) = (void (*)(Crate * self)) 0x80b1d90;
void (*Crate::ptr::CSTR_Crate)(Crate * self) = (void (*)(Crate * self)) 0x817dea0;
#endif
#endif
