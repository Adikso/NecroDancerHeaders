// Generated automatically. Do not edit!
#ifndef _LuteHead_
#define _LuteHead_
class Entity;
class LuteDragon;
class Player;
class Point;
class String;
#include "Enemy.hpp"

class LuteHead : public Enemy  {
public:
    LuteDragon * dragon;
    int angryUntil;
    bool wasAngry;
    int spellNum;
    int summonCount;
    int darkFrames;
    int attackState;
    int lastFireballBeat;
    bool facingLeft;
    bool justHit;

    // Wrappers
    LuteHead(LuteDragon * d, int xVal, int yVal, int l) {
        ptr::CSTR_LuteHead(this);
        ptr::New(this, d, xVal, yVal, l);
    }

    inline LuteHead * New(LuteDragon * d, int xVal, int yVal, int l) { return ptr::New(this, d, xVal, yVal, l); }
    inline LuteHead * _new2() { return ptr::_new2(); }
    inline virtual bool IsAngry() { return ptr::IsAngry(this); }
    inline virtual Enemy * SummonEnemy(int enemyType) { return ptr::SummonEnemy(this, enemyType); }
    inline virtual void CastSpell2() { ptr::CastSpell2(this); }
    inline virtual void DoShot() { ptr::DoShot(this); }
    inline void Update() { ptr::Update(this); }
    inline bool _IsConfused() { return ptr::_IsConfused(); }
    inline virtual bool IsValidMove(int dir) { return ptr::IsValidMove(this, dir); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline int PerformMovement(int xVal, int yVal) { return ptr::PerformMovement(this, xVal, yVal); }
    inline virtual Player * ClearShot() { return ptr::ClearShot(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline bool _ImmuneToFear() { return ptr::_ImmuneToFear(); }
    inline void Die() { ptr::Die(this); }
    inline void PerformTween(int xVal, int yVal, int oldX, int oldY, int tweenType, int shadowTweenType, bool bufferTween) { ptr::PerformTween(this, xVal, yVal, oldX, oldY, tweenType, shadowTweenType, bufferTween); }
    inline void _Knockback(int arg1) { ptr::_Knockback(this, arg1); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static LuteHead * (*New)(LuteHead * self, LuteDragon * d, int xVal, int yVal, int l);
        static LuteHead * (*_new2)();
        static bool (*IsAngry)(LuteHead * self);
        static Enemy * (*SummonEnemy)(LuteHead * self, int enemyType);
        static void (*CastSpell2)(LuteHead * self);
        static void (*DoShot)(LuteHead * self);
        static void (*Update)(LuteHead * self);
        static bool (*_IsConfused)();
        static bool (*IsValidMove)(LuteHead * self, int dir);
        static Point * (*GetMovementDirection)(LuteHead * self);
        static int (*PerformMovement)(LuteHead * self, int xVal, int yVal);
        static Player * (*ClearShot)(LuteHead * self);
        static void (*MoveSucceed)(LuteHead * self, bool hitPlayer, bool moveDelayed);
        static bool (*Hit)(LuteHead * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static bool (*_ImmuneToFear)();
        static void (*Die)(LuteHead * self);
        static void (*PerformTween)(LuteHead * self, int xVal, int yVal, int oldX, int oldY, int tweenType, int shadowTweenType, bool bufferTween);
        static void (*_Knockback)(LuteHead * self, int arg1);
        static void (*_mark)();
        static void (*CSTR_LuteHead)(LuteHead * self);
    };
};

#ifdef _WIN32

inline LuteHead * (*LuteHead::ptr::New)(LuteHead * self, LuteDragon * d, int xVal, int yVal, int l) = (LuteHead * (*)(LuteHead * self, LuteDragon * d, int xVal, int yVal, int l)) 0x6136f0;
inline LuteHead * (*LuteHead::ptr::_new2)() = (LuteHead * (*)()) 0x0;
inline bool (*LuteHead::ptr::IsAngry)(LuteHead * self) = (bool (*)(LuteHead * self)) 0x613940;
inline Enemy * (*LuteHead::ptr::SummonEnemy)(LuteHead * self, int enemyType) = (Enemy * (*)(LuteHead * self, int enemyType)) 0x613b40;
inline void (*LuteHead::ptr::CastSpell2)(LuteHead * self) = (void (*)(LuteHead * self)) 0x6140a0;
inline void (*LuteHead::ptr::DoShot)(LuteHead * self) = (void (*)(LuteHead * self)) 0x6146c0;
inline void (*LuteHead::ptr::Update)(LuteHead * self) = (void (*)(LuteHead * self)) 0x6149a0;
inline bool (*LuteHead::ptr::_IsConfused)() = (bool (*)()) 0x0;
inline bool (*LuteHead::ptr::IsValidMove)(LuteHead * self, int dir) = (bool (*)(LuteHead * self, int dir)) 0x614dc0;
inline Point * (*LuteHead::ptr::GetMovementDirection)(LuteHead * self) = (Point * (*)(LuteHead * self)) 0x614ef0;
inline int (*LuteHead::ptr::PerformMovement)(LuteHead * self, int xVal, int yVal) = (int (*)(LuteHead * self, int xVal, int yVal)) 0x615330;
inline Player * (*LuteHead::ptr::ClearShot)(LuteHead * self) = (Player * (*)(LuteHead * self)) 0x615380;
inline void (*LuteHead::ptr::MoveSucceed)(LuteHead * self, bool hitPlayer, bool moveDelayed) = (void (*)(LuteHead * self, bool hitPlayer, bool moveDelayed)) 0x6154d0;
inline bool (*LuteHead::ptr::Hit)(LuteHead * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(LuteHead * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x615670;
inline bool (*LuteHead::ptr::_ImmuneToFear)() = (bool (*)()) 0x0;
inline void (*LuteHead::ptr::Die)(LuteHead * self) = (void (*)(LuteHead * self)) 0x615fa0;
inline void (*LuteHead::ptr::PerformTween)(LuteHead * self, int xVal, int yVal, int oldX, int oldY, int tweenType, int shadowTweenType, bool bufferTween) = (void (*)(LuteHead * self, int xVal, int yVal, int oldX, int oldY, int tweenType, int shadowTweenType, bool bufferTween)) 0x615fb0;
inline void (*LuteHead::ptr::_Knockback)(LuteHead * self, int arg1) = (void (*)(LuteHead * self, int arg1)) 0x0;
inline void (*LuteHead::ptr::_mark)() = (void (*)()) 0x0;
inline void (*LuteHead::ptr::CSTR_LuteHead)(LuteHead * self) = (void (*)(LuteHead * self)) 0x613640;
#endif

#ifdef __linux__

inline LuteHead * (*LuteHead::ptr::New)(LuteHead * self, LuteDragon * d, int xVal, int yVal, int l) = (LuteHead * (*)(LuteHead * self, LuteDragon * d, int xVal, int yVal, int l)) 0x81b4750;
inline LuteHead * (*LuteHead::ptr::_new2)() = (LuteHead * (*)()) 0x81b5990;
inline bool (*LuteHead::ptr::IsAngry)(LuteHead * self) = (bool (*)(LuteHead * self)) 0x825e520;
inline Enemy * (*LuteHead::ptr::SummonEnemy)(LuteHead * self, int enemyType) = (Enemy * (*)(LuteHead * self, int enemyType)) 0x81d0560;
inline void (*LuteHead::ptr::CastSpell2)(LuteHead * self) = (void (*)(LuteHead * self)) 0x83a2150;
inline void (*LuteHead::ptr::DoShot)(LuteHead * self) = (void (*)(LuteHead * self)) 0x83be900;
inline void (*LuteHead::ptr::Update)(LuteHead * self) = (void (*)(LuteHead * self)) 0x8385230;
inline bool (*LuteHead::ptr::_IsConfused)() = (bool (*)()) 0x8074c30;
inline bool (*LuteHead::ptr::IsValidMove)(LuteHead * self, int dir) = (bool (*)(LuteHead * self, int dir)) 0x8133450;
inline Point * (*LuteHead::ptr::GetMovementDirection)(LuteHead * self) = (Point * (*)(LuteHead * self)) 0x819fd80;
inline int (*LuteHead::ptr::PerformMovement)(LuteHead * self, int xVal, int yVal) = (int (*)(LuteHead * self, int xVal, int yVal)) 0x81a8d10;
inline Player * (*LuteHead::ptr::ClearShot)(LuteHead * self) = (Player * (*)(LuteHead * self)) 0x812e2b0;
inline void (*LuteHead::ptr::MoveSucceed)(LuteHead * self, bool hitPlayer, bool moveDelayed) = (void (*)(LuteHead * self, bool hitPlayer, bool moveDelayed)) 0x8319610;
inline bool (*LuteHead::ptr::Hit)(LuteHead * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(LuteHead * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x839bcf0;
inline bool (*LuteHead::ptr::_ImmuneToFear)() = (bool (*)()) 0x8074c40;
inline void (*LuteHead::ptr::Die)(LuteHead * self) = (void (*)(LuteHead * self)) 0x83b6a90;
inline void (*LuteHead::ptr::PerformTween)(LuteHead * self, int xVal, int yVal, int oldX, int oldY, int tweenType, int shadowTweenType, bool bufferTween) = (void (*)(LuteHead * self, int xVal, int yVal, int oldX, int oldY, int tweenType, int shadowTweenType, bool bufferTween)) 0x8082160;
inline void (*LuteHead::ptr::_Knockback)(LuteHead * self, int arg1) = (void (*)(LuteHead * self, int arg1)) 0x8074c50;
inline void (*LuteHead::ptr::_mark)() = (void (*)()) 0x80b0c70;
inline void (*LuteHead::ptr::CSTR_LuteHead)(LuteHead * self) = (void (*)(LuteHead * self)) 0x81b46d0;
#endif
#endif
