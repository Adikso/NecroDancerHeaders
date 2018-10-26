// Generated automatically. Do not edit!
#ifndef _Chest_
#define _Chest_
class Bouncer;
class List19;
class Player;
class Sprite;
class String;
#include "Entity.hpp"

class Chest : public Entity  {
public:
    int chestColor;
    String * contents;
    bool singleChoiceChest;
    bool secretChest;
    bool saleChest;
    bool locked;
    bool lockChest;
    Sprite * image2;
    int image2XOff;
    int image2YOff;
    Bouncer * bounce2;
    static int * CHEST_COLOR_NONE;
    static int * lastChestColor;
    static int * lastChestColor2;
    static List19 * * chestList;
    static int * CHEST_COLOR_BLUE;
    static int * CHEST_COLOR_BLACK;
    static int * CHEST_COLOR_WHITE;
    static int * CHEST_COLOR_RED;

    // Wrappers
    Chest(int xVal, int yVal, String * cont, bool invis, bool isLocked, bool isSecret, int tmpColor) {
        ptr::CSTR_Chest(this);
        ptr::New(this, xVal, yVal, cont, invis, isLocked, isSecret, tmpColor);
    }

    inline static Chest * GetChestAt(int xVal, int yVal) { return ptr::GetChestAt(xVal, yVal); }
    inline static bool IsItemAppropriateForChestColor(String * cont, int tmpColor) { return ptr::IsItemAppropriateForChestColor(cont, tmpColor); }
    inline virtual String * DetermineContentsNowPlayerDoesntOwn() { return ptr::DetermineContentsNowPlayerDoesntOwn(this); }
    inline void Die() { ptr::Die(this); }
    inline static void ClearAllSingleChoiceChests(Chest * except) { ptr::ClearAllSingleChoiceChests(except); }
    inline virtual bool Open(Player * player) { return ptr::Open(this, player); }
    inline Chest * New(int xVal, int yVal, String * cont, bool invis, bool isLocked, bool isSecret, int tmpColor) { return ptr::New(this, xVal, yVal, cont, invis, isLocked, isSecret, tmpColor); }
    inline Chest * _new2() { return ptr::_new2(); }
    inline static int GetNumEmptySecretChests() { return ptr::GetNumEmptySecretChests(); }
    inline static int GetNumEmptyNonSecretChests() { return ptr::GetNumEmptyNonSecretChests(); }
    inline static Chest * GetEmptySecretChest() { return ptr::GetEmptySecretChest(); }
    inline virtual void AddKeyToContents() { ptr::AddKeyToContents(this); }
    inline static Chest * GetEmptyNonSecretChest() { return ptr::GetEmptyNonSecretChest(); }
    inline virtual void BecomeLocked() { ptr::BecomeLocked(this); }
    inline bool _IsVisible() { return ptr::_IsVisible(); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline bool _Hit(String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) { return ptr::_Hit(this, arg1, arg2, arg3, arg4, arg5, arg6); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static Chest * (*GetChestAt)(int xVal, int yVal);
        static bool (*IsItemAppropriateForChestColor)(String * cont, int tmpColor);
        static String * (*DetermineContentsNowPlayerDoesntOwn)(Chest * self);
        static void (*Die)(Chest * self);
        static void (*ClearAllSingleChoiceChests)(Chest * except);
        static bool (*Open)(Chest * self, Player * player);
        static Chest * (*New)(Chest * self, int xVal, int yVal, String * cont, bool invis, bool isLocked, bool isSecret, int tmpColor);
        static Chest * (*_new2)();
        static int (*GetNumEmptySecretChests)();
        static int (*GetNumEmptyNonSecretChests)();
        static Chest * (*GetEmptySecretChest)();
        static void (*AddKeyToContents)(Chest * self);
        static Chest * (*GetEmptyNonSecretChest)();
        static void (*BecomeLocked)(Chest * self);
        static bool (*_IsVisible)();
        static void (*Update)(Chest * self);
        static void (*Render)(Chest * self);
        static bool (*_Hit)(Chest * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6);
        static void (*mark)(Chest * self);
        static void (*CSTR_Chest)(Chest * self);
    };
};

#ifdef _WIN32
int * Chest::CHEST_COLOR_NONE = (int*) 0x835ab8;
int * Chest::lastChestColor = (int*) 0x835abc;
int * Chest::lastChestColor2 = (int*) 0x835ab4;
List19 * * Chest::chestList = (List19* *) 0x835938;
int * Chest::CHEST_COLOR_BLUE = (int*) 0x8356c8;
int * Chest::CHEST_COLOR_BLACK = (int*) 0x83599c;
int * Chest::CHEST_COLOR_WHITE = (int*) 0x8359a0;
int * Chest::CHEST_COLOR_RED = (int*) 0x8359a4;

Chest * (*Chest::ptr::GetChestAt)(int xVal, int yVal) = (Chest * (*)(int xVal, int yVal)) 0x596390;
bool (*Chest::ptr::IsItemAppropriateForChestColor)(String * cont, int tmpColor) = (bool (*)(String * cont, int tmpColor)) 0x5963e0;
String * (*Chest::ptr::DetermineContentsNowPlayerDoesntOwn)(Chest * self) = (String * (*)(Chest * self)) 0x596840;
void (*Chest::ptr::Die)(Chest * self) = (void (*)(Chest * self)) 0x596ae0;
void (*Chest::ptr::ClearAllSingleChoiceChests)(Chest * except) = (void (*)(Chest * except)) 0x596b00;
bool (*Chest::ptr::Open)(Chest * self, Player * player) = (bool (*)(Chest * self, Player * player)) 0x596b50;
Chest * (*Chest::ptr::New)(Chest * self, int xVal, int yVal, String * cont, bool invis, bool isLocked, bool isSecret, int tmpColor) = (Chest * (*)(Chest * self, int xVal, int yVal, String * cont, bool invis, bool isLocked, bool isSecret, int tmpColor)) 0x596e30;
Chest * (*Chest::ptr::_new2)() = (Chest * (*)()) 0x0;
int (*Chest::ptr::GetNumEmptySecretChests)() = (int (*)()) 0x597510;
int (*Chest::ptr::GetNumEmptyNonSecretChests)() = (int (*)()) 0x5976d0;
Chest * (*Chest::ptr::GetEmptySecretChest)() = (Chest * (*)()) 0x597890;
void (*Chest::ptr::AddKeyToContents)(Chest * self) = (void (*)(Chest * self)) 0x597a50;
Chest * (*Chest::ptr::GetEmptyNonSecretChest)() = (Chest * (*)()) 0x597b40;
void (*Chest::ptr::BecomeLocked)(Chest * self) = (void (*)(Chest * self)) 0x597d00;
bool (*Chest::ptr::_IsVisible)() = (bool (*)()) 0x0;
void (*Chest::ptr::Update)(Chest * self) = (void (*)(Chest * self)) 0x597e50;
void (*Chest::ptr::Render)(Chest * self) = (void (*)(Chest * self)) 0x5986d0;
bool (*Chest::ptr::_Hit)(Chest * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(Chest * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x0;
void (*Chest::ptr::mark)(Chest * self) = (void (*)(Chest * self)) 0x598790;
void (*Chest::ptr::CSTR_Chest)(Chest * self) = (void (*)(Chest * self)) 0x596130;
#endif

#ifdef __linux__
int * Chest::CHEST_COLOR_NONE = (int*) 0x856a5c8;
int * Chest::lastChestColor = (int*) 0x856a5c4;
int * Chest::lastChestColor2 = (int*) 0x856a5c0;
List19 * * Chest::chestList = (List19* *) 0x856a5bc;
int * Chest::CHEST_COLOR_BLUE = (int*) 0x856a5b8;
int * Chest::CHEST_COLOR_BLACK = (int*) 0x856a5b4;
int * Chest::CHEST_COLOR_WHITE = (int*) 0x856a5b0;
int * Chest::CHEST_COLOR_RED = (int*) 0x856a5ac;

Chest * (*Chest::ptr::GetChestAt)(int xVal, int yVal) = (Chest * (*)(int xVal, int yVal)) 0x816cfa0;
bool (*Chest::ptr::IsItemAppropriateForChestColor)(String * cont, int tmpColor) = (bool (*)(String * cont, int tmpColor)) 0x816d000;
String * (*Chest::ptr::DetermineContentsNowPlayerDoesntOwn)(Chest * self) = (String * (*)(Chest * self)) 0x82b04d0;
void (*Chest::ptr::Die)(Chest * self) = (void (*)(Chest * self)) 0x80935b0;
void (*Chest::ptr::ClearAllSingleChoiceChests)(Chest * except) = (void (*)(Chest * except)) 0x816d2b0;
bool (*Chest::ptr::Open)(Chest * self, Player * player) = (bool (*)(Chest * self, Player * player)) 0x8391930;
Chest * (*Chest::ptr::New)(Chest * self, int xVal, int yVal, String * cont, bool invis, bool isLocked, bool isSecret, int tmpColor) = (Chest * (*)(Chest * self, int xVal, int yVal, String * cont, bool invis, bool isLocked, bool isSecret, int tmpColor)) 0x82ad640;
Chest * (*Chest::ptr::_new2)() = (Chest * (*)()) 0x816d310;
int (*Chest::ptr::GetNumEmptySecretChests)() = (int (*)()) 0x816d370;
int (*Chest::ptr::GetNumEmptyNonSecretChests)() = (int (*)()) 0x816d430;
Chest * (*Chest::ptr::GetEmptySecretChest)() = (Chest * (*)()) 0x816d4f0;
void (*Chest::ptr::AddKeyToContents)(Chest * self) = (void (*)(Chest * self)) 0x829a860;
Chest * (*Chest::ptr::GetEmptyNonSecretChest)() = (Chest * (*)()) 0x816d5a0;
void (*Chest::ptr::BecomeLocked)(Chest * self) = (void (*)(Chest * self)) 0x81221b0;
bool (*Chest::ptr::_IsVisible)() = (bool (*)()) 0x812dea0;
void (*Chest::ptr::Update)(Chest * self) = (void (*)(Chest * self)) 0x8327b10;
void (*Chest::ptr::Render)(Chest * self) = (void (*)(Chest * self)) 0x8266f60;
bool (*Chest::ptr::_Hit)(Chest * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(Chest * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x8070600;
void (*Chest::ptr::mark)(Chest * self) = (void (*)(Chest * self)) 0x80a6450;
void (*Chest::ptr::CSTR_Chest)(Chest * self) = (void (*)(Chest * self)) 0x816ced0;
#endif
#endif
