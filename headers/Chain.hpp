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
inline int * Chain::kills = (int*) 0x835aa4;
inline Array<bool> * * Chain::waitingForFirstMovement = (Array<bool>* *) 0x833fac;
inline Player * * Chain::lastActor = (Player* *) 0x835770;
inline TextSprite * * Chain::GrooveText = (TextSprite* *) 0x8356a4;
inline int * Chain::lastGrooveColor = (int*) 0x8356a0;
inline bool * Chain::lastShrineVal = (bool*) 0x835629;
inline int * Chain::lastGrooveLevel = (int*) 0x83569c;

inline int (*Chain::ptr::GetGrooveLevel)() = (int (*)()) 0x5c4e00;
inline void (*Chain::ptr::Break)(Player * player, bool gotHit, bool plSound, bool lackOfMovement) = (void (*)(Player * player, bool gotHit, bool plSound, bool lackOfMovement)) 0x5c4e20;
inline float (*Chain::ptr::GetMultiplier)() = (float (*)()) 0x5c50d0;
inline void (*Chain::ptr::Kill)(Player * player) = (void (*)(Player * player)) 0x5c5290;
inline float (*Chain::ptr::_GetDisplayMultiplier)() = (float (*)()) 0x0;
inline float (*Chain::ptr::GetMaxMultiplier)() = (float (*)()) 0x5c5500;
inline String * (*Chain::ptr::GetDisplayMultiplierString)() = (String * (*)()) 0x5c56a0;
inline void (*Chain::ptr::Render)() = (void (*)()) 0x5c5790;
inline void (*Chain::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__
inline int * Chain::kills = (int*) 0x856a564;
inline Array<bool> * * Chain::waitingForFirstMovement = (Array<bool>* *) 0x856a560;
inline Player * * Chain::lastActor = (Player* *) 0x856a55c;
inline TextSprite * * Chain::GrooveText = (TextSprite* *) 0x856a558;
inline int * Chain::lastGrooveColor = (int*) 0x856a554;
inline bool * Chain::lastShrineVal = (bool*) 0x856a550;
inline int * Chain::lastGrooveLevel = (int*) 0x856a54c;

inline int (*Chain::ptr::GetGrooveLevel)() = (int (*)()) 0x8186a90;
inline void (*Chain::ptr::Break)(Player * player, bool gotHit, bool plSound, bool lackOfMovement) = (void (*)(Player * player, bool gotHit, bool plSound, bool lackOfMovement)) 0x83283b0;
inline float (*Chain::ptr::GetMultiplier)() = (float (*)()) 0x8186e10;
inline void (*Chain::ptr::Kill)(Player * player) = (void (*)(Player * player)) 0x831be40;
inline float (*Chain::ptr::_GetDisplayMultiplier)() = (float (*)()) 0x8186f60;
inline float (*Chain::ptr::GetMaxMultiplier)() = (float (*)()) 0x81870b0;
inline String * (*Chain::ptr::GetDisplayMultiplierString)() = (String * (*)()) 0x81871b0;
inline void (*Chain::ptr::Render)() = (void (*)()) 0x82619b0;
inline void (*Chain::ptr::_mark)() = (void (*)()) 0x8070d10;
#endif
#endif
