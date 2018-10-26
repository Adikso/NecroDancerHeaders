// Generated automatically. Do not edit!
#ifndef _Spells_
#define _Spells_
template<class T> class Array;
class Enemy;
class Entity;
class List45;
class List46;
class Player;
class Sprite;
class Stack;
class String;
class StringMap5;
#include "Object.hpp"

class Spells : public Object  {
public:
    static String * * spellSlot1;
    static String * * spellSlot2;
    static StringMap5 * * spellCoolKills;
    static int * SHIELD_BEATS;
    static int * EARTHQUAKE_RADIUS;
    static int * CHARM_RADIUS;
    static List45 * * fireballDisplay;
    static List46 * * pulseDisplay;
    static int * FREEZE_RADIUS;
    static Array<Sprite *> * * fireballInWorld;
    static Sprite * * pulseInWorld;
    static Stack * * pulseAnim;

    // Wrappers
    inline static void CooldownAllSpells() { ptr::CooldownAllSpells(); }
    inline static void InitLearnedSpells() { ptr::InitLearnedSpells(); }
    inline static int GetKillsUntilCooldown(String * sp) { return ptr::GetKillsUntilCooldown(sp); }
    inline static bool IsSpellCooled(String * sp) { return ptr::IsSpellCooled(sp); }
    inline static void Kill() { ptr::Kill(); }
    inline static void CastDescend(Player * player) { ptr::CastDescend(player); }
    inline static int GetSpellCooldownKills(String * sp) { return ptr::GetSpellCooldownKills(sp); }
    inline static void _CastTransmute(Player * arg1, bool arg2) { ptr::_CastTransmute(arg1, arg2); }
    inline static void CastFireball(int xVal, int yVal, bool dirLeft, Player * player, int displayX, bool scroll, bool fireTrap) { ptr::CastFireball(xVal, yVal, dirLeft, player, displayX, scroll, fireTrap); }
    inline static void PulseDir(Entity * ent, bool useGreater, int dir) { ptr::PulseDir(ent, useGreater, dir); }
    inline static void CastPulse(Entity * ent, bool useGreater) { ptr::CastPulse(ent, useGreater); }
    inline static void ForceKnockback(Player * player, Enemy * e, int dir) { ptr::ForceKnockback(player, e, dir); }
    inline static void EarthPushAt(Player * player, int dx, int dy) { ptr::EarthPushAt(player, dx, dy); }
    inline static void CastEarth(Player * player, bool useGreater) { ptr::CastEarth(player, useGreater); }
    inline static void CastTransform(Player * player) { ptr::CastTransform(player); }
    inline static int GetBloodMagicDamage(String * sp) { return ptr::GetBloodMagicDamage(sp); }
    inline static void ImmediatelyCastSpell(String * sp, bool useGreater, Player * player, bool scroll, bool skipFlyawayAndVO) { ptr::ImmediatelyCastSpell(sp, useGreater, player, scroll, skipFlyawayAndVO); }
    inline static String * LearnSpell(String * sp) { return ptr::LearnSpell(sp); }
    inline static void _Reset() { ptr::_Reset(); }
    inline static void Init() { ptr::Init(); }
    inline static bool CastSpell(String * sp, bool forceGreater, Player * player, bool scroll) { return ptr::CastSpell(sp, forceGreater, player, scroll); }
    inline static bool CastSpell1(Player * player) { return ptr::CastSpell1(player); }
    inline static bool CastSpell2(Player * player) { return ptr::CastSpell2(player); }
    inline static String * GetKillsUntilCooldownString(String * sp) { return ptr::GetKillsUntilCooldownString(sp); }
    inline static String * GetBloodMagicDamageString(String * sp) { return ptr::GetBloodMagicDamageString(sp); }
    inline static void RenderPulse() { ptr::RenderPulse(); }
    inline static void Render() { ptr::Render(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static void (*CooldownAllSpells)();
        static void (*InitLearnedSpells)();
        static int (*GetKillsUntilCooldown)(String * sp);
        static bool (*IsSpellCooled)(String * sp);
        static void (*Kill)();
        static void (*CastDescend)(Player * player);
        static int (*GetSpellCooldownKills)(String * sp);
        static void (*_CastTransmute)(Player * arg1, bool arg2);
        static void (*CastFireball)(int xVal, int yVal, bool dirLeft, Player * player, int displayX, bool scroll, bool fireTrap);
        static void (*PulseDir)(Entity * ent, bool useGreater, int dir);
        static void (*CastPulse)(Entity * ent, bool useGreater);
        static void (*ForceKnockback)(Player * player, Enemy * e, int dir);
        static void (*EarthPushAt)(Player * player, int dx, int dy);
        static void (*CastEarth)(Player * player, bool useGreater);
        static void (*CastTransform)(Player * player);
        static int (*GetBloodMagicDamage)(String * sp);
        static void (*ImmediatelyCastSpell)(String * sp, bool useGreater, Player * player, bool scroll, bool skipFlyawayAndVO);
        static String * (*LearnSpell)(String * sp);
        static void (*_Reset)();
        static void (*Init)();
        static bool (*CastSpell)(String * sp, bool forceGreater, Player * player, bool scroll);
        static bool (*CastSpell1)(Player * player);
        static bool (*CastSpell2)(Player * player);
        static String * (*GetKillsUntilCooldownString)(String * sp);
        static String * (*GetBloodMagicDamageString)(String * sp);
        static void (*RenderPulse)();
        static void (*Render)();
        static void (*_mark)();
    };
};

#ifdef _WIN32
String * * Spells::spellSlot1 = (String* *) 0x833fb0;
String * * Spells::spellSlot2 = (String* *) 0x833fb4;
StringMap5 * * Spells::spellCoolKills = (StringMap5* *) 0x83560c;
int * Spells::SHIELD_BEATS = (int*) 0x8358a0;
int * Spells::EARTHQUAKE_RADIUS = (int*) 0x8359d8;
int * Spells::CHARM_RADIUS = (int*) 0x8356b0;
List45 * * Spells::fireballDisplay = (List45* *) 0x835608;
List46 * * Spells::pulseDisplay = (List46* *) 0x835604;
int * Spells::FREEZE_RADIUS = (int*) 0x8359d4;
Array<Sprite *> * * Spells::fireballInWorld = (Array<Sprite *>* *) 0x833fb8;
Sprite * * Spells::pulseInWorld = (Sprite* *) 0x835600;
Stack * * Spells::pulseAnim = (Stack* *) 0x8355fc;

void (*Spells::ptr::CooldownAllSpells)() = (void (*)()) 0x5edb00;
void (*Spells::ptr::InitLearnedSpells)() = (void (*)()) 0x5edbe0;
int (*Spells::ptr::GetKillsUntilCooldown)(String * sp) = (int (*)(String * sp)) 0x5edd40;
bool (*Spells::ptr::IsSpellCooled)(String * sp) = (bool (*)(String * sp)) 0x5ede00;
void (*Spells::ptr::Kill)() = (void (*)()) 0x5ede80;
void (*Spells::ptr::CastDescend)(Player * player) = (void (*)(Player * player)) 0x5ee1e0;
int (*Spells::ptr::GetSpellCooldownKills)(String * sp) = (int (*)(String * sp)) 0x5ee2c0;
void (*Spells::ptr::_CastTransmute)(Player * arg1, bool arg2) = (void (*)(Player * arg1, bool arg2)) 0x0;
void (*Spells::ptr::CastFireball)(int xVal, int yVal, bool dirLeft, Player * player, int displayX, bool scroll, bool fireTrap) = (void (*)(int xVal, int yVal, bool dirLeft, Player * player, int displayX, bool scroll, bool fireTrap)) 0x5ee3a0;
void (*Spells::ptr::PulseDir)(Entity * ent, bool useGreater, int dir) = (void (*)(Entity * ent, bool useGreater, int dir)) 0x5eed30;
void (*Spells::ptr::CastPulse)(Entity * ent, bool useGreater) = (void (*)(Entity * ent, bool useGreater)) 0x5eeec0;
void (*Spells::ptr::ForceKnockback)(Player * player, Enemy * e, int dir) = (void (*)(Player * player, Enemy * e, int dir)) 0x5eefb0;
void (*Spells::ptr::EarthPushAt)(Player * player, int dx, int dy) = (void (*)(Player * player, int dx, int dy)) 0x5ef0a0;
void (*Spells::ptr::CastEarth)(Player * player, bool useGreater) = (void (*)(Player * player, bool useGreater)) 0x5ef2a0;
void (*Spells::ptr::CastTransform)(Player * player) = (void (*)(Player * player)) 0x5ef5d0;
int (*Spells::ptr::GetBloodMagicDamage)(String * sp) = (int (*)(String * sp)) 0x5ef690;
void (*Spells::ptr::ImmediatelyCastSpell)(String * sp, bool useGreater, Player * player, bool scroll, bool skipFlyawayAndVO) = (void (*)(String * sp, bool useGreater, Player * player, bool scroll, bool skipFlyawayAndVO)) 0x5ef750;
String * (*Spells::ptr::LearnSpell)(String * sp) = (String * (*)(String * sp)) 0x5f14d0;
void (*Spells::ptr::_Reset)() = (void (*)()) 0x0;
void (*Spells::ptr::Init)() = (void (*)()) 0x5f1850;
bool (*Spells::ptr::CastSpell)(String * sp, bool forceGreater, Player * player, bool scroll) = (bool (*)(String * sp, bool forceGreater, Player * player, bool scroll)) 0x5f1fc0;
bool (*Spells::ptr::CastSpell1)(Player * player) = (bool (*)(Player * player)) 0x5f22c0;
bool (*Spells::ptr::CastSpell2)(Player * player) = (bool (*)(Player * player)) 0x5f23e0;
String * (*Spells::ptr::GetKillsUntilCooldownString)(String * sp) = (String * (*)(String * sp)) 0x5f2500;
String * (*Spells::ptr::GetBloodMagicDamageString)(String * sp) = (String * (*)(String * sp)) 0x5f26a0;
void (*Spells::ptr::RenderPulse)() = (void (*)()) 0x5f2830;
void (*Spells::ptr::Render)() = (void (*)()) 0x5f2920;
void (*Spells::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__
String * * Spells::spellSlot1 = (String* *) 0x856a480;
String * * Spells::spellSlot2 = (String* *) 0x856a47c;
StringMap5 * * Spells::spellCoolKills = (StringMap5* *) 0x856a478;
int * Spells::SHIELD_BEATS = (int*) 0x856a474;
int * Spells::EARTHQUAKE_RADIUS = (int*) 0x856a470;
int * Spells::CHARM_RADIUS = (int*) 0x856a46c;
List45 * * Spells::fireballDisplay = (List45* *) 0x856a468;
List46 * * Spells::pulseDisplay = (List46* *) 0x856a464;
int * Spells::FREEZE_RADIUS = (int*) 0x856a460;
Array<Sprite *> * * Spells::fireballInWorld = (Array<Sprite *>* *) 0x856a45c;
Sprite * * Spells::pulseInWorld = (Sprite* *) 0x856a458;
Stack * * Spells::pulseAnim = (Stack* *) 0x856a454;

void (*Spells::ptr::CooldownAllSpells)() = (void (*)()) 0x819b560;
void (*Spells::ptr::InitLearnedSpells)() = (void (*)()) 0x819b5d0;
int (*Spells::ptr::GetKillsUntilCooldown)(String * sp) = (int (*)(String * sp)) 0x819b6c0;
bool (*Spells::ptr::IsSpellCooled)(String * sp) = (bool (*)(String * sp)) 0x819b780;
void (*Spells::ptr::Kill)() = (void (*)()) 0x819b7d0;
void (*Spells::ptr::CastDescend)(Player * player) = (void (*)(Player * player)) 0x81b76d0;
int (*Spells::ptr::GetSpellCooldownKills)(String * sp) = (int (*)(String * sp)) 0x819bba0;
void (*Spells::ptr::_CastTransmute)(Player * arg1, bool arg2) = (void (*)(Player * arg1, bool arg2)) 0x819bc20;
void (*Spells::ptr::CastFireball)(int xVal, int yVal, bool dirLeft, Player * player, int displayX, bool scroll, bool fireTrap) = (void (*)(int xVal, int yVal, bool dirLeft, Player * player, int displayX, bool scroll, bool fireTrap)) 0x83be180;
void (*Spells::ptr::PulseDir)(Entity * ent, bool useGreater, int dir) = (void (*)(Entity * ent, bool useGreater, int dir)) 0x83bd5b0;
void (*Spells::ptr::CastPulse)(Entity * ent, bool useGreater) = (void (*)(Entity * ent, bool useGreater)) 0x83bd7a0;
void (*Spells::ptr::ForceKnockback)(Player * player, Enemy * e, int dir) = (void (*)(Player * player, Enemy * e, int dir)) 0x819bc60;
void (*Spells::ptr::EarthPushAt)(Player * player, int dx, int dy) = (void (*)(Player * player, int dx, int dy)) 0x819be50;
void (*Spells::ptr::CastEarth)(Player * player, bool useGreater) = (void (*)(Player * player, bool useGreater)) 0x819c160;
void (*Spells::ptr::CastTransform)(Player * player) = (void (*)(Player * player)) 0x819c3c0;
int (*Spells::ptr::GetBloodMagicDamage)(String * sp) = (int (*)(String * sp)) 0x819c470;
void (*Spells::ptr::ImmediatelyCastSpell)(String * sp, bool useGreater, Player * player, bool scroll, bool skipFlyawayAndVO) = (void (*)(String * sp, bool useGreater, Player * player, bool scroll, bool skipFlyawayAndVO)) 0x83beb80;
String * (*Spells::ptr::LearnSpell)(String * sp) = (String * (*)(String * sp)) 0x819c590;
void (*Spells::ptr::_Reset)() = (void (*)()) 0x819c7d0;
void (*Spells::ptr::Init)() = (void (*)()) 0x819c840;
bool (*Spells::ptr::CastSpell)(String * sp, bool forceGreater, Player * player, bool scroll) = (bool (*)(String * sp, bool forceGreater, Player * player, bool scroll)) 0x83c1fa0;
bool (*Spells::ptr::CastSpell1)(Player * player) = (bool (*)(Player * player)) 0x83c8590;
bool (*Spells::ptr::CastSpell2)(Player * player) = (bool (*)(Player * player)) 0x83c8630;
String * (*Spells::ptr::GetKillsUntilCooldownString)(String * sp) = (String * (*)(String * sp)) 0x819d080;
String * (*Spells::ptr::GetBloodMagicDamageString)(String * sp) = (String * (*)(String * sp)) 0x819d190;
void (*Spells::ptr::RenderPulse)() = (void (*)()) 0x819d290;
void (*Spells::ptr::Render)() = (void (*)()) 0x819d3b0;
void (*Spells::ptr::_mark)() = (void (*)()) 0x8072e10;
#endif
#endif
