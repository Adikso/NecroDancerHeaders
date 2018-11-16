// Generated automatically. Do not edit!
#ifndef _PlayerHealth_
#define _PlayerHealth_
#include "Object.hpp"

class PlayerHealth : public Object  {
public:
    bool fragile;
    int bonusMax;
    int cursedMax;
    int baseMax;
    int cursedCurrent;
    int current;

    // Wrappers
    inline PlayerHealth * _New() { return ptr::_New(); }
    inline virtual int GetNormalMax() { return ptr::GetNormalMax(this); }
    inline virtual int GetMax() { return ptr::GetMax(this); }
    inline virtual int GetHearts() { return ptr::GetHearts(this); }
    inline virtual int ApplyMax() { return ptr::ApplyMax(this); }
    inline virtual void GainBonusHeart() { ptr::GainBonusHeart(this); }
    inline virtual void LoseBonusHeart() { ptr::LoseBonusHeart(this); }
    inline virtual int GetNormal() { return ptr::GetNormal(this); }
    inline virtual int Get3() { return ptr::Get3(this); }
    inline static int _RoundUpToHeart(int arg1) { return ptr::_RoundUpToHeart(arg1); }
    inline virtual bool Heal2(int amount, bool allowGluttony) { return ptr::Heal2(this, amount, allowGluttony); }
    inline virtual void ProcessCurse() { ptr::ProcessCurse(this); }
    inline virtual void Damage(int damage) { ptr::Damage(this, damage); }
    inline virtual void GainHearts(int hearts, bool full) { ptr::GainHearts(this, hearts, full); }
    inline virtual void Refill() { ptr::Refill(this); }
    inline virtual void RefillTo(int amount) { ptr::RefillTo(this, amount); }
    inline virtual void GainCursedHearts(int hearts) { ptr::GainCursedHearts(this, hearts); }
    inline virtual void Reset2(int newMax) { ptr::Reset2(this, newMax); }
    inline virtual void ResetFragile() { ptr::ResetFragile(this); }
    inline virtual void Revive() { ptr::Revive(this); }
    inline virtual void RefillAsCursed() { ptr::RefillAsCursed(this); }
    inline virtual int GetHeartValue(int offset) { return ptr::GetHeartValue(this, offset); }
    inline virtual bool IsEmptyHeart(int offset) { return ptr::IsEmptyHeart(this, offset); }
    inline virtual bool IsFullHeart(int offset) { return ptr::IsFullHeart(this, offset); }
    inline virtual bool IsCursedHeart(int offset) { return ptr::IsCursedHeart(this, offset); }
    inline virtual bool IsHalfHeart(int offset) { return ptr::IsHalfHeart(this, offset); }
    inline virtual void CurseAllHearts() { ptr::CurseAllHearts(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static PlayerHealth * (*_New)();
        static int (*GetNormalMax)(PlayerHealth * self);
        static int (*GetMax)(PlayerHealth * self);
        static int (*GetHearts)(PlayerHealth * self);
        static int (*ApplyMax)(PlayerHealth * self);
        static void (*GainBonusHeart)(PlayerHealth * self);
        static void (*LoseBonusHeart)(PlayerHealth * self);
        static int (*GetNormal)(PlayerHealth * self);
        static int (*Get3)(PlayerHealth * self);
        static int (*_RoundUpToHeart)(int arg1);
        static bool (*Heal2)(PlayerHealth * self, int amount, bool allowGluttony);
        static void (*ProcessCurse)(PlayerHealth * self);
        static void (*Damage)(PlayerHealth * self, int damage);
        static void (*GainHearts)(PlayerHealth * self, int hearts, bool full);
        static void (*Refill)(PlayerHealth * self);
        static void (*RefillTo)(PlayerHealth * self, int amount);
        static void (*GainCursedHearts)(PlayerHealth * self, int hearts);
        static void (*Reset2)(PlayerHealth * self, int newMax);
        static void (*ResetFragile)(PlayerHealth * self);
        static void (*Revive)(PlayerHealth * self);
        static void (*RefillAsCursed)(PlayerHealth * self);
        static int (*GetHeartValue)(PlayerHealth * self, int offset);
        static bool (*IsEmptyHeart)(PlayerHealth * self, int offset);
        static bool (*IsFullHeart)(PlayerHealth * self, int offset);
        static bool (*IsCursedHeart)(PlayerHealth * self, int offset);
        static bool (*IsHalfHeart)(PlayerHealth * self, int offset);
        static void (*CurseAllHearts)(PlayerHealth * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline PlayerHealth * (*PlayerHealth::ptr::_New)() = (PlayerHealth * (*)()) 0x0;
inline int (*PlayerHealth::ptr::GetNormalMax)(PlayerHealth * self) = (int (*)(PlayerHealth * self)) 0x5ed510;
inline int (*PlayerHealth::ptr::GetMax)(PlayerHealth * self) = (int (*)(PlayerHealth * self)) 0x5ed530;
inline int (*PlayerHealth::ptr::GetHearts)(PlayerHealth * self) = (int (*)(PlayerHealth * self)) 0x5ed540;
inline int (*PlayerHealth::ptr::ApplyMax)(PlayerHealth * self) = (int (*)(PlayerHealth * self)) 0x5ed550;
inline void (*PlayerHealth::ptr::GainBonusHeart)(PlayerHealth * self) = (void (*)(PlayerHealth * self)) 0x5ed6f0;
inline void (*PlayerHealth::ptr::LoseBonusHeart)(PlayerHealth * self) = (void (*)(PlayerHealth * self)) 0x5ed710;
inline int (*PlayerHealth::ptr::GetNormal)(PlayerHealth * self) = (int (*)(PlayerHealth * self)) 0x5ed730;
inline int (*PlayerHealth::ptr::Get3)(PlayerHealth * self) = (int (*)(PlayerHealth * self)) 0x5ed740;
inline int (*PlayerHealth::ptr::_RoundUpToHeart)(int arg1) = (int (*)(int arg1)) 0x0;
inline bool (*PlayerHealth::ptr::Heal2)(PlayerHealth * self, int amount, bool allowGluttony) = (bool (*)(PlayerHealth * self, int amount, bool allowGluttony)) 0x5ed750;
inline void (*PlayerHealth::ptr::ProcessCurse)(PlayerHealth * self) = (void (*)(PlayerHealth * self)) 0x5ed830;
inline void (*PlayerHealth::ptr::Damage)(PlayerHealth * self, int damage) = (void (*)(PlayerHealth * self, int damage)) 0x5ed850;
inline void (*PlayerHealth::ptr::GainHearts)(PlayerHealth * self, int hearts, bool full) = (void (*)(PlayerHealth * self, int hearts, bool full)) 0x5ed890;
inline void (*PlayerHealth::ptr::Refill)(PlayerHealth * self) = (void (*)(PlayerHealth * self)) 0x5ed8d0;
inline void (*PlayerHealth::ptr::RefillTo)(PlayerHealth * self, int amount) = (void (*)(PlayerHealth * self, int amount)) 0x5ed8e0;
inline void (*PlayerHealth::ptr::GainCursedHearts)(PlayerHealth * self, int hearts) = (void (*)(PlayerHealth * self, int hearts)) 0x5ed900;
inline void (*PlayerHealth::ptr::Reset2)(PlayerHealth * self, int newMax) = (void (*)(PlayerHealth * self, int newMax)) 0x5ed920;
inline void (*PlayerHealth::ptr::ResetFragile)(PlayerHealth * self) = (void (*)(PlayerHealth * self)) 0x5ed970;
inline void (*PlayerHealth::ptr::Revive)(PlayerHealth * self) = (void (*)(PlayerHealth * self)) 0x5ed9a0;
inline void (*PlayerHealth::ptr::RefillAsCursed)(PlayerHealth * self) = (void (*)(PlayerHealth * self)) 0x5ed9d0;
inline int (*PlayerHealth::ptr::GetHeartValue)(PlayerHealth * self, int offset) = (int (*)(PlayerHealth * self, int offset)) 0x5eda00;
inline bool (*PlayerHealth::ptr::IsEmptyHeart)(PlayerHealth * self, int offset) = (bool (*)(PlayerHealth * self, int offset)) 0x5eda50;
inline bool (*PlayerHealth::ptr::IsFullHeart)(PlayerHealth * self, int offset) = (bool (*)(PlayerHealth * self, int offset)) 0x5eda70;
inline bool (*PlayerHealth::ptr::IsCursedHeart)(PlayerHealth * self, int offset) = (bool (*)(PlayerHealth * self, int offset)) 0x5eda90;
inline bool (*PlayerHealth::ptr::IsHalfHeart)(PlayerHealth * self, int offset) = (bool (*)(PlayerHealth * self, int offset)) 0x5edab0;
inline void (*PlayerHealth::ptr::CurseAllHearts)(PlayerHealth * self) = (void (*)(PlayerHealth * self)) 0x5edad0;
inline void (*PlayerHealth::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline PlayerHealth * (*PlayerHealth::ptr::_New)() = (PlayerHealth * (*)()) 0x819b520;
inline int (*PlayerHealth::ptr::GetNormalMax)(PlayerHealth * self) = (int (*)(PlayerHealth * self)) 0x8072b60;
inline int (*PlayerHealth::ptr::GetMax)(PlayerHealth * self) = (int (*)(PlayerHealth * self)) 0x8072b80;
inline int (*PlayerHealth::ptr::GetHearts)(PlayerHealth * self) = (int (*)(PlayerHealth * self)) 0x8072ba0;
inline int (*PlayerHealth::ptr::ApplyMax)(PlayerHealth * self) = (int (*)(PlayerHealth * self)) 0x8277a00;
inline void (*PlayerHealth::ptr::GainBonusHeart)(PlayerHealth * self) = (void (*)(PlayerHealth * self)) 0x807f020;
inline void (*PlayerHealth::ptr::LoseBonusHeart)(PlayerHealth * self) = (void (*)(PlayerHealth * self)) 0x8072bc0;
inline int (*PlayerHealth::ptr::GetNormal)(PlayerHealth * self) = (int (*)(PlayerHealth * self)) 0x8072bf0;
inline int (*PlayerHealth::ptr::Get3)(PlayerHealth * self) = (int (*)(PlayerHealth * self)) 0x8072c00;
inline int (*PlayerHealth::ptr::_RoundUpToHeart)(int arg1) = (int (*)(int arg1)) 0x819b530;
inline bool (*PlayerHealth::ptr::Heal2)(PlayerHealth * self, int amount, bool allowGluttony) = (bool (*)(PlayerHealth * self, int amount, bool allowGluttony)) 0x8081b80;
inline void (*PlayerHealth::ptr::ProcessCurse)(PlayerHealth * self) = (void (*)(PlayerHealth * self)) 0x8072c10;
inline void (*PlayerHealth::ptr::Damage)(PlayerHealth * self, int damage) = (void (*)(PlayerHealth * self, int damage)) 0x8072c40;
inline void (*PlayerHealth::ptr::GainHearts)(PlayerHealth * self, int hearts, bool full) = (void (*)(PlayerHealth * self, int hearts, bool full)) 0x807f050;
inline void (*PlayerHealth::ptr::Refill)(PlayerHealth * self) = (void (*)(PlayerHealth * self)) 0x8072c70;
inline void (*PlayerHealth::ptr::RefillTo)(PlayerHealth * self, int amount) = (void (*)(PlayerHealth * self, int amount)) 0x8072c90;
inline void (*PlayerHealth::ptr::GainCursedHearts)(PlayerHealth * self, int hearts) = (void (*)(PlayerHealth * self, int hearts)) 0x807f0e0;
inline void (*PlayerHealth::ptr::Reset2)(PlayerHealth * self, int newMax) = (void (*)(PlayerHealth * self, int newMax)) 0x810c0e0;
inline void (*PlayerHealth::ptr::ResetFragile)(PlayerHealth * self) = (void (*)(PlayerHealth * self)) 0x8072cc0;
inline void (*PlayerHealth::ptr::Revive)(PlayerHealth * self) = (void (*)(PlayerHealth * self)) 0x807f100;
inline void (*PlayerHealth::ptr::RefillAsCursed)(PlayerHealth * self) = (void (*)(PlayerHealth * self)) 0x8072cf0;
inline int (*PlayerHealth::ptr::GetHeartValue)(PlayerHealth * self, int offset) = (int (*)(PlayerHealth * self, int offset)) 0x822fdc0;
inline bool (*PlayerHealth::ptr::IsEmptyHeart)(PlayerHealth * self, int offset) = (bool (*)(PlayerHealth * self, int offset)) 0x8072d20;
inline bool (*PlayerHealth::ptr::IsFullHeart)(PlayerHealth * self, int offset) = (bool (*)(PlayerHealth * self, int offset)) 0x8072d40;
inline bool (*PlayerHealth::ptr::IsCursedHeart)(PlayerHealth * self, int offset) = (bool (*)(PlayerHealth * self, int offset)) 0x8072d70;
inline bool (*PlayerHealth::ptr::IsHalfHeart)(PlayerHealth * self, int offset) = (bool (*)(PlayerHealth * self, int offset)) 0x8072d90;
inline void (*PlayerHealth::ptr::CurseAllHearts)(PlayerHealth * self) = (void (*)(PlayerHealth * self)) 0x8072dc0;
inline void (*PlayerHealth::ptr::_mark)() = (void (*)()) 0x8072e00;
#endif
#endif
