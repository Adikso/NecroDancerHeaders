// Generated automatically. Do not edit!
#ifndef _Chain_
#define _Chain_
template<class T> class Array;
class Player;
class String;
class TextSprite;
#include "Object.hpp"

class Chain : public Object  {
public:
    static int * kills;
    static Array<bool> * * waitingForFirstMovement;
    static Player * * lastActor;
    static TextSprite * * GrooveText;
    static int * lastGrooveColor;
    static bool * lastShrineVal;
    static int * lastGrooveLevel;

    // Wrappers
    inline static int GetGrooveLevel() { return ptr::GetGrooveLevel(); }
    inline static void Break(Player * player, bool gotHit, bool plSound, bool lackOfMovement) { ptr::Break(player, gotHit, plSound, lackOfMovement); }
    inline static float GetMultiplier() { return ptr::GetMultiplier(); }
    inline static void Kill(Player * player) { ptr::Kill(player); }
    inline static float _GetDisplayMultiplier() { return ptr::_GetDisplayMultiplier(); }
    inline static float GetMaxMultiplier() { return ptr::GetMaxMultiplier(); }
    inline static String * GetDisplayMultiplierString() { return ptr::GetDisplayMultiplierString(); }
    inline static void Render() { ptr::Render(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static int (*GetGrooveLevel)();
        static void (*Break)(Player * player, bool gotHit, bool plSound, bool lackOfMovement);
        static float (*GetMultiplier)();
        static void (*Kill)(Player * player);
        static float (*_GetDisplayMultiplier)();
        static float (*GetMaxMultiplier)();
        static String * (*GetDisplayMultiplierString)();
        static void (*Render)();
        static void (*_mark)();
    };
};

#ifdef _WIN32
int * Chain::kills = (int*) 0x835aa4;
Array<bool> * * Chain::waitingForFirstMovement = (Array<bool>* *) 0x833fac;
Player * * Chain::lastActor = (Player* *) 0x835770;
TextSprite * * Chain::GrooveText = (TextSprite* *) 0x8356a4;
int * Chain::lastGrooveColor = (int*) 0x8356a0;
bool * Chain::lastShrineVal = (bool*) 0x835629;
int * Chain::lastGrooveLevel = (int*) 0x83569c;

int (*Chain::ptr::GetGrooveLevel)() = (int (*)()) 0x5c4e00;
void (*Chain::ptr::Break)(Player * player, bool gotHit, bool plSound, bool lackOfMovement) = (void (*)(Player * player, bool gotHit, bool plSound, bool lackOfMovement)) 0x5c4e20;
float (*Chain::ptr::GetMultiplier)() = (float (*)()) 0x5c50d0;
void (*Chain::ptr::Kill)(Player * player) = (void (*)(Player * player)) 0x5c5290;
float (*Chain::ptr::_GetDisplayMultiplier)() = (float (*)()) 0x0;
float (*Chain::ptr::GetMaxMultiplier)() = (float (*)()) 0x5c5500;
String * (*Chain::ptr::GetDisplayMultiplierString)() = (String * (*)()) 0x5c56a0;
void (*Chain::ptr::Render)() = (void (*)()) 0x5c5790;
void (*Chain::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__
int * Chain::kills = (int*) 0x856a564;
Array<bool> * * Chain::waitingForFirstMovement = (Array<bool>* *) 0x856a560;
Player * * Chain::lastActor = (Player* *) 0x856a55c;
TextSprite * * Chain::GrooveText = (TextSprite* *) 0x856a558;
int * Chain::lastGrooveColor = (int*) 0x856a554;
bool * Chain::lastShrineVal = (bool*) 0x856a550;
int * Chain::lastGrooveLevel = (int*) 0x856a54c;

int (*Chain::ptr::GetGrooveLevel)() = (int (*)()) 0x8186a90;
void (*Chain::ptr::Break)(Player * player, bool gotHit, bool plSound, bool lackOfMovement) = (void (*)(Player * player, bool gotHit, bool plSound, bool lackOfMovement)) 0x83283b0;
float (*Chain::ptr::GetMultiplier)() = (float (*)()) 0x8186e10;
void (*Chain::ptr::Kill)(Player * player) = (void (*)(Player * player)) 0x831be40;
float (*Chain::ptr::_GetDisplayMultiplier)() = (float (*)()) 0x8186f60;
float (*Chain::ptr::GetMaxMultiplier)() = (float (*)()) 0x81870b0;
String * (*Chain::ptr::GetDisplayMultiplierString)() = (String * (*)()) 0x81871b0;
void (*Chain::ptr::Render)() = (void (*)()) 0x82619b0;
void (*Chain::ptr::_mark)() = (void (*)()) 0x8070d10;
#endif
#endif
