// Generated automatically. Do not edit!
#ifndef _NPC_
#define _NPC_
class List44;
class Sprite;
class String;
#include "Enemy.hpp"

class NPC : public Enemy  {
public:
    bool attackedByPlayer;
    bool captive;
    bool glassCage;
    int flyawayDelay;
    bool wasCaptive;
    Sprite * cageFrontImage;
    Sprite * cageBackImage;
    bool isMainShopkeeper;
    bool saysHi;
    bool saidHi;
    static List44 * * npcList;

    // Wrappers
    NPC() {
        ptr::CSTR_NPC(this);
    }

    inline static NPC * GetCaptiveNPCAt(int xVal, int yVal) { return ptr::GetCaptiveNPCAt(xVal, yVal); }
    inline virtual void ReleaseFromCage() { ptr::ReleaseFromCage(this); }
    inline NPC * _New() { return ptr::_New(); }
    inline virtual void NPCInit(int xVal, int yVal, int l, String * name, bool captv, bool glCage) { ptr::NPCInit(this, xVal, yVal, l, name, captv, glCage); }
    inline static float GetDistFromClosestNPC(int xVal, int yVal) { return ptr::GetDistFromClosestNPC(xVal, yVal); }
    inline void Die() { ptr::Die(this); }
    inline void Delete() { ptr::Delete(this); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline bool _CanBeDamaged(bool arg1, bool arg2) { return ptr::_CanBeDamaged(this, arg1, arg2); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static NPC * (*GetCaptiveNPCAt)(int xVal, int yVal);
        static void (*ReleaseFromCage)(NPC * self);
        static NPC * (*_New)();
        static void (*NPCInit)(NPC * self, int xVal, int yVal, int l, String * name, bool captv, bool glCage);
        static float (*GetDistFromClosestNPC)(int xVal, int yVal);
        static void (*Die)(NPC * self);
        static void (*Delete)(NPC * self);
        static void (*Update)(NPC * self);
        static void (*Render)(NPC * self);
        static bool (*_CanBeDamaged)(NPC * self, bool arg1, bool arg2);
        static void (*mark)(NPC * self);
        static void (*CSTR_NPC)(NPC * self);
    };
};

#ifdef _WIN32
inline List44 * * NPC::npcList = (List44* *) 0x8356cc;

inline NPC * (*NPC::ptr::GetCaptiveNPCAt)(int xVal, int yVal) = (NPC * (*)(int xVal, int yVal)) 0x5fb140;
inline void (*NPC::ptr::ReleaseFromCage)(NPC * self) = (void (*)(NPC * self)) 0x5fb190;
inline NPC * (*NPC::ptr::_New)() = (NPC * (*)()) 0x0;
inline void (*NPC::ptr::NPCInit)(NPC * self, int xVal, int yVal, int l, String * name, bool captv, bool glCage) = (void (*)(NPC * self, int xVal, int yVal, int l, String * name, bool captv, bool glCage)) 0x5fb3d0;
inline float (*NPC::ptr::GetDistFromClosestNPC)(int xVal, int yVal) = (float (*)(int xVal, int yVal)) 0x5fb650;
inline void (*NPC::ptr::Die)(NPC * self) = (void (*)(NPC * self)) 0x5fb700;
inline void (*NPC::ptr::Delete)(NPC * self) = (void (*)(NPC * self)) 0x5fb720;
inline void (*NPC::ptr::Update)(NPC * self) = (void (*)(NPC * self)) 0x5fb760;
inline void (*NPC::ptr::Render)(NPC * self) = (void (*)(NPC * self)) 0x5fbcd0;
inline bool (*NPC::ptr::_CanBeDamaged)(NPC * self, bool arg1, bool arg2) = (bool (*)(NPC * self, bool arg1, bool arg2)) 0x0;
inline void (*NPC::ptr::mark)(NPC * self) = (void (*)(NPC * self)) 0x5fbe30;
inline void (*NPC::ptr::CSTR_NPC)(NPC * self) = (void (*)(NPC * self)) 0x5fb0a0;
#endif

#ifdef __linux__
inline List44 * * NPC::npcList = (List44* *) 0x856a3e8;

inline NPC * (*NPC::ptr::GetCaptiveNPCAt)(int xVal, int yVal) = (NPC * (*)(int xVal, int yVal)) 0x81a4a60;
inline void (*NPC::ptr::ReleaseFromCage)(NPC * self) = (void (*)(NPC * self)) 0x83a03a0;
inline NPC * (*NPC::ptr::_New)() = (NPC * (*)()) 0x81a4ac0;
inline void (*NPC::ptr::NPCInit)(NPC * self, int xVal, int yVal, int l, String * name, bool captv, bool glCage) = (void (*)(NPC * self, int xVal, int yVal, int l, String * name, bool captv, bool glCage)) 0x811d810;
inline float (*NPC::ptr::GetDistFromClosestNPC)(int xVal, int yVal) = (float (*)(int xVal, int yVal)) 0x81a4ae0;
inline void (*NPC::ptr::Die)(NPC * self) = (void (*)(NPC * self)) 0x83b7230;
inline void (*NPC::ptr::Delete)(NPC * self) = (void (*)(NPC * self)) 0x8093500;
inline void (*NPC::ptr::Update)(NPC * self) = (void (*)(NPC * self)) 0x8386650;
inline void (*NPC::ptr::Render)(NPC * self) = (void (*)(NPC * self)) 0x830d970;
inline bool (*NPC::ptr::_CanBeDamaged)(NPC * self, bool arg1, bool arg2) = (bool (*)(NPC * self, bool arg1, bool arg2)) 0x8073a60;
inline void (*NPC::ptr::mark)(NPC * self) = (void (*)(NPC * self)) 0x80b1a70;
inline void (*NPC::ptr::CSTR_NPC)(NPC * self) = (void (*)(NPC * self)) 0x81a49f0;
#endif
#endif
