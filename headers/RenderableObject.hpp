// Generated automatically. Do not edit!
#ifndef _RenderableObject_
#define _RenderableObject_
class Entity;
class List5;
class Point;
class String;
#include "Object.hpp"

class RenderableObject : public Object  {
public:
    bool perished;
    bool dead;
    int x;
    int y;
    bool collides;
    int lastFrameX;
    int lastFrameY;
    float lightSourceMin;
    float lightSourceMax;
    bool isFamiliar;
    bool isPlayer;
    bool playerOverrideCollide;
    int width;
    int height;
    bool clampedOn;
    bool isCrate;
    bool isItem;
    bool lightSource;
    float constLightSourceMax;
    bool wasHitAlreadyDuringHitTile;
    float lightSourceBrightness;
    bool isTrap;
    bool isNPC;
    bool isChest;
    bool isMobile;
    bool isEnemy;
    float constLightSourceBrightness;
    static List5 * * renderableObjectList;
    static List5 * * lightSourceList;
    static bool * deletingAll;

    // Wrappers
    RenderableObject() {
        ptr::CSTR_RenderableObject(this);
    }

    inline virtual void Die() { ptr::Die(this); }
    inline virtual bool Hit(String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) { return ptr::_Hit(this, arg1, arg2, arg3, arg4, arg5, arg6); }
    inline virtual Point * GetLocation() { return ptr::GetLocation(this); }
    inline static bool IsExplosiveDamage(String * damageSource) { return ptr::IsExplosiveDamage(damageSource); }
    inline static bool IsParryableDamage(String * damageSource) { return ptr::IsParryableDamage(damageSource); }
    inline RenderableObject * _New() { return ptr::_New(); }
    inline virtual void ActivateLight(float lMin, float lMax) { ptr::ActivateLight(this, lMin, lMax); }
    inline virtual bool IsOnTile(int px, int py) { return ptr::IsOnTile(this, px, py); }
    inline virtual bool IsFrozen(bool ignoreLastBeat) { return ptr::IsFrozen(this, ignoreLastBeat); }
    inline static bool HitTile(String * damageSource, int xVal, int yVal, int damage, int dir, Entity * hitter, bool allowSelfHits, bool phasing, bool piercing, bool confuse, bool frost) { return ptr::HitTile(damageSource, xVal, yVal, damage, dir, hitter, allowSelfHits, phasing, piercing, confuse, frost); }
    inline static void DeleteAll(bool spareThePlayers) { ptr::DeleteAll(spareThePlayers); }
    inline virtual void Update() { ptr::_Update(); }
    inline virtual bool IsOnScreen() { return ptr::IsOnScreen(this); }
    inline static void UpdateAll() { ptr::UpdateAll(); }
    inline virtual void Render() { ptr::_Render(); }
    inline static bool IsPlayerMeleeDamage(String * damageSource) { return ptr::IsPlayerMeleeDamage(damageSource); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static void (*Die)(RenderableObject * self);
        static bool (*_Hit)(RenderableObject * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6);
        static Point * (*GetLocation)(RenderableObject * self);
        static bool (*IsExplosiveDamage)(String * damageSource);
        static bool (*IsParryableDamage)(String * damageSource);
        static RenderableObject * (*_New)();
        static void (*ActivateLight)(RenderableObject * self, float lMin, float lMax);
        static bool (*IsOnTile)(RenderableObject * self, int px, int py);
        static bool (*IsFrozen)(RenderableObject * self, bool ignoreLastBeat);
        static bool (*HitTile)(String * damageSource, int xVal, int yVal, int damage, int dir, Entity * hitter, bool allowSelfHits, bool phasing, bool piercing, bool confuse, bool frost);
        static void (*DeleteAll)(bool spareThePlayers);
        static void (*_Update)();
        static bool (*IsOnScreen)(RenderableObject * self);
        static void (*UpdateAll)();
        static void (*_Render)();
        static bool (*IsPlayerMeleeDamage)(String * damageSource);
        static void (*_mark)();
        static void (*CSTR_RenderableObject)(RenderableObject * self);
    };
};

#ifdef _WIN32
List5 * * RenderableObject::renderableObjectList = (List5* *) 0x835bec;
List5 * * RenderableObject::lightSourceList = (List5* *) 0x8358e8;
bool * RenderableObject::deletingAll = (bool*) 0x8358cb;

void (*RenderableObject::ptr::Die)(RenderableObject * self) = (void (*)(RenderableObject * self)) 0x4f9790;
bool (*RenderableObject::ptr::_Hit)(RenderableObject * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(RenderableObject * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x0;
Point * (*RenderableObject::ptr::GetLocation)(RenderableObject * self) = (Point * (*)(RenderableObject * self)) 0x4f97c0;
bool (*RenderableObject::ptr::IsExplosiveDamage)(String * damageSource) = (bool (*)(String * damageSource)) 0x4f9860;
bool (*RenderableObject::ptr::IsParryableDamage)(String * damageSource) = (bool (*)(String * damageSource)) 0x4f9b80;
RenderableObject * (*RenderableObject::ptr::_New)() = (RenderableObject * (*)()) 0x0;
void (*RenderableObject::ptr::ActivateLight)(RenderableObject * self, float lMin, float lMax) = (void (*)(RenderableObject * self, float lMin, float lMax)) 0x4f9e00;
bool (*RenderableObject::ptr::IsOnTile)(RenderableObject * self, int px, int py) = (bool (*)(RenderableObject * self, int px, int py)) 0x4f9e40;
bool (*RenderableObject::ptr::IsFrozen)(RenderableObject * self, bool ignoreLastBeat) = (bool (*)(RenderableObject * self, bool ignoreLastBeat)) 0x4f9e80;
bool (*RenderableObject::ptr::HitTile)(String * damageSource, int xVal, int yVal, int damage, int dir, Entity * hitter, bool allowSelfHits, bool phasing, bool piercing, bool confuse, bool frost) = (bool (*)(String * damageSource, int xVal, int yVal, int damage, int dir, Entity * hitter, bool allowSelfHits, bool phasing, bool piercing, bool confuse, bool frost)) 0x4f9e90;
void (*RenderableObject::ptr::DeleteAll)(bool spareThePlayers) = (void (*)(bool spareThePlayers)) 0x4faa60;
void (*RenderableObject::ptr::_Update)() = (void (*)()) 0x0;
bool (*RenderableObject::ptr::IsOnScreen)(RenderableObject * self) = (bool (*)(RenderableObject * self)) 0x4faac0;
void (*RenderableObject::ptr::UpdateAll)() = (void (*)()) 0x4faae0;
void (*RenderableObject::ptr::_Render)() = (void (*)()) 0x0;
bool (*RenderableObject::ptr::IsPlayerMeleeDamage)(String * damageSource) = (bool (*)(String * damageSource)) 0x4fab70;
void (*RenderableObject::ptr::_mark)() = (void (*)()) 0x0;
void (*RenderableObject::ptr::CSTR_RenderableObject)(RenderableObject * self) = (void (*)(RenderableObject * self)) 0x4f96b0;
#endif

#ifdef __linux__
List5 * * RenderableObject::renderableObjectList = (List5* *) 0x856a8f4;
List5 * * RenderableObject::lightSourceList = (List5* *) 0x856a8f0;
bool * RenderableObject::deletingAll = (bool*) 0x856a8ec;

void (*RenderableObject::ptr::Die)(RenderableObject * self) = (void (*)(RenderableObject * self)) 0x8093200;
bool (*RenderableObject::ptr::_Hit)(RenderableObject * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(RenderableObject * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x0;
Point * (*RenderableObject::ptr::GetLocation)(RenderableObject * self) = (Point * (*)(RenderableObject * self)) 0x80b5860;
bool (*RenderableObject::ptr::IsExplosiveDamage)(String * damageSource) = (bool (*)(String * damageSource)) 0x813e140;
bool (*RenderableObject::ptr::IsParryableDamage)(String * damageSource) = (bool (*)(String * damageSource)) 0x813e250;
RenderableObject * (*RenderableObject::ptr::_New)() = (RenderableObject * (*)()) 0x813e3e0;
void (*RenderableObject::ptr::ActivateLight)(RenderableObject * self, float lMin, float lMax) = (void (*)(RenderableObject * self, float lMin, float lMax)) 0x806e030;
bool (*RenderableObject::ptr::IsOnTile)(RenderableObject * self, int px, int py) = (bool (*)(RenderableObject * self, int px, int py)) 0x806e060;
bool (*RenderableObject::ptr::IsFrozen)(RenderableObject * self, bool ignoreLastBeat) = (bool (*)(RenderableObject * self, bool ignoreLastBeat)) 0x806e0b0;
bool (*RenderableObject::ptr::HitTile)(String * damageSource, int xVal, int yVal, int damage, int dir, Entity * hitter, bool allowSelfHits, bool phasing, bool piercing, bool confuse, bool frost) = (bool (*)(String * damageSource, int xVal, int yVal, int damage, int dir, Entity * hitter, bool allowSelfHits, bool phasing, bool piercing, bool confuse, bool frost)) 0x83b9450;
void (*RenderableObject::ptr::DeleteAll)(bool spareThePlayers) = (void (*)(bool spareThePlayers)) 0x813e410;
void (*RenderableObject::ptr::_Update)() = (void (*)()) 0x806e0c0;
bool (*RenderableObject::ptr::IsOnScreen)(RenderableObject * self) = (bool (*)(RenderableObject * self)) 0x8104f30;
void (*RenderableObject::ptr::UpdateAll)() = (void (*)()) 0x813e4b0;
void (*RenderableObject::ptr::_Render)() = (void (*)()) 0x0;
bool (*RenderableObject::ptr::IsPlayerMeleeDamage)(String * damageSource) = (bool (*)(String * damageSource)) 0x813e580;
void (*RenderableObject::ptr::_mark)() = (void (*)()) 0x806e0d0;
void (*RenderableObject::ptr::CSTR_RenderableObject)(RenderableObject * self) = (void (*)(RenderableObject * self)) 0x813e0b0;
#endif
#endif
