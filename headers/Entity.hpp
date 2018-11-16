// Generated automatically. Do not edit!
#ifndef _Entity_
#define _Entity_
class Bouncer;
class List6;
class ParticleSystem;
class Player;
class Point;
class Sprite;
class String;
#include "RenderableObject.hpp"

class Entity : public RenderableObject  {
public:
    ParticleSystem * confusedParticles;
    Sprite * image;
    Sprite * shadow;
    float yOff;
    float xOff;
    int lastX;
    int lastY;
    bool floating;
    bool falling;
    int frozenDuration;
    bool hasBeenVisible;
    int entityNum;
    bool hasSilhouette;
    bool ignoreCollisionWhenMoving;
    bool canMoveOntoPlayer;
    Bouncer * bounce;
    bool ignoreWalls;
    bool isGentle;
    String * friendlyName;
    int damagePerHit;
    int hitType;
    bool invisible;
    bool hasBeenSilhouetted;
    bool isMysteried;
    int shadowYOff;
    bool flaggedForDeath;
    int flaggedForDeathCounter;
    int level;
    String * xmlName;
    int shadowXOff;
    int coinsToDrop;
    Sprite * frozenImage;
    bool frozenPermanently;
    String * overrideAttackSound;
    bool canBeFrozen;
    bool frozenStone;
    int flickerCurrentTimer;
    int flickerTimer;
    bool flickerHide;
    bool wasTeleported;
    int confusedUntil;
    bool isWraithLike;
    Sprite * frozenStoneImage;
    int frozenXOff;
    int frozenYOff;
    int waterOffset;
    bool deAggroed;
    bool renderSilhouette;
    bool neverSilhouette;
    bool showConfuseOverride;
    static List6 * * entityList;
    static List6 * * deadEntityList;
    static int * entityCount;
    static int * anyPlayerHaveCircletCachedFrame;
    static bool * anyPlayerHaveCircletCached;
    static int * anyPlayerHaveGlassTorchCachedFrame;
    static bool * anyPlayerHaveGlassTorchCached;
    static int * anyPlayerHaveForesightTorchCachedFrame;
    static bool * anyPlayerHaveForesightTorchCached;
    static int * anyPlayerHaveWallsTorchCachedFrame;
    static bool * anyPlayerHaveWallsTorchCached;
    static int * anyPlayerHaveNazarCharmCachedFrame;
    static bool * anyPlayerHaveNazarCharmCached;

    // Wrappers
    Entity() {
        ptr::CSTR_Entity(this);
    }

    inline static void _RemoveFromList(Entity * arg1) { ptr::_RemoveFromList(arg1); }
    inline void Die() { ptr::Die(this); }
    inline static void RemoveAnyPerishedEntities() { ptr::RemoveAnyPerishedEntities(); }
    inline bool _Hit(String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) { return ptr::_Hit(this, arg1, arg2, arg3, arg4, arg5, arg6); }
    inline virtual void PerformTween(int xVal, int yVal, int oldX, int oldY, int tweenType, int shadowTweenType, bool bufferTween) { ptr::PerformTween(this, xVal, yVal, oldX, oldY, tweenType, shadowTweenType, bufferTween); }
    inline virtual void BounceInPlace(bool bufferTween) { ptr::BounceInPlace(this, bufferTween); }
    inline virtual void BounceToward(Point * p, bool bufferTween) { ptr::BounceToward(this, p, bufferTween); }
    inline Entity * _New() { return ptr::_New(); }
    inline virtual void AfterHitPlayer(Player * arg1) { ptr::_AfterHitPlayer(this, arg1); }
    inline virtual int PerformMovement(int xVal, int yVal) { return ptr::PerformMovement(this, xVal, yVal); }
    inline virtual int PerformMovement2(Point * p) { return ptr::PerformMovement2(this, p); }
    inline virtual bool IsVisible() { return ptr::IsVisible(this); }
    inline virtual bool CanBeDamaged(bool arg1, bool arg2) { return ptr::_CanBeDamaged(this, arg1, arg2); }
    inline static bool AnyPlayerHaveCirclet() { return ptr::AnyPlayerHaveCirclet(); }
    inline static bool AnyPlayerHaveGlassTorch() { return ptr::AnyPlayerHaveGlassTorch(); }
    inline static bool AnyPlayerHaveCircletOrGlassTorch() { return ptr::AnyPlayerHaveCircletOrGlassTorch(); }
    inline virtual void FlagForDeath(int numFrames) { ptr::FlagForDeath(this, numFrames); }
    inline static Entity * GetEntityAt(int x, int y, bool includePlayer) { return ptr::GetEntityAt(x, y, includePlayer); }
    inline static bool AnyPlayerHaveForesightTorch() { return ptr::AnyPlayerHaveForesightTorch(); }
    inline static bool AnyPlayerHaveWallsTorch() { return ptr::AnyPlayerHaveWallsTorch(); }
    inline virtual bool Freeze(int duration, bool stone) { return ptr::Freeze(this, duration, stone); }
    inline virtual void Flicker(int duration) { ptr::Flicker(this, duration); }
    inline bool IsFrozen(bool ignoreLastBeat) { return ptr::IsFrozen(this, ignoreLastBeat); }
    inline virtual int MoveImmediate(int xVal, int yVal, String * movementSource) { return ptr::MoveImmediate(this, xVal, yVal, movementSource); }
    inline virtual void CancelTween() { ptr::CancelTween(this); }
    inline void Update() { ptr::Update(this); }
    inline virtual void Fall(bool keepMultiplier) { ptr::Fall(this, keepMultiplier); }
    inline virtual bool IsConfused() { return ptr::IsConfused(this); }
    inline virtual bool IsInAnyPlayerLineOfSight() { return ptr::IsInAnyPlayerLineOfSight(this); }
    inline static void UpdateVisibility() { ptr::UpdateVisibility(); }
    inline virtual bool CheckRingOfShadows() { return ptr::CheckRingOfShadows(this); }
    inline virtual void SkipNextDraw() { ptr::SkipNextDraw(this); }
    inline virtual void RenderSprite(Sprite * img) { ptr::RenderSprite(this, img); }
    inline void Render() { ptr::Render(this); }
    inline static void RenderAll() { ptr::RenderAll(); }
    inline static bool AnyPlayerHaveNazarCharm() { return ptr::AnyPlayerHaveNazarCharm(); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static void (*_RemoveFromList)(Entity * arg1);
        static void (*Die)(Entity * self);
        static void (*RemoveAnyPerishedEntities)();
        static bool (*_Hit)(Entity * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6);
        static void (*PerformTween)(Entity * self, int xVal, int yVal, int oldX, int oldY, int tweenType, int shadowTweenType, bool bufferTween);
        static void (*BounceInPlace)(Entity * self, bool bufferTween);
        static void (*BounceToward)(Entity * self, Point * p, bool bufferTween);
        static Entity * (*_New)();
        static void (*_AfterHitPlayer)(Entity * self, Player * arg1);
        static int (*PerformMovement)(Entity * self, int xVal, int yVal);
        static int (*PerformMovement2)(Entity * self, Point * p);
        static bool (*IsVisible)(Entity * self);
        static bool (*_CanBeDamaged)(Entity * self, bool arg1, bool arg2);
        static bool (*AnyPlayerHaveCirclet)();
        static bool (*AnyPlayerHaveGlassTorch)();
        static bool (*AnyPlayerHaveCircletOrGlassTorch)();
        static void (*FlagForDeath)(Entity * self, int numFrames);
        static Entity * (*GetEntityAt)(int x, int y, bool includePlayer);
        static bool (*AnyPlayerHaveForesightTorch)();
        static bool (*AnyPlayerHaveWallsTorch)();
        static bool (*Freeze)(Entity * self, int duration, bool stone);
        static void (*Flicker)(Entity * self, int duration);
        static bool (*IsFrozen)(Entity * self, bool ignoreLastBeat);
        static int (*MoveImmediate)(Entity * self, int xVal, int yVal, String * movementSource);
        static void (*CancelTween)(Entity * self);
        static void (*Update)(Entity * self);
        static void (*Fall)(Entity * self, bool keepMultiplier);
        static bool (*IsConfused)(Entity * self);
        static bool (*IsInAnyPlayerLineOfSight)(Entity * self);
        static void (*UpdateVisibility)();
        static bool (*CheckRingOfShadows)(Entity * self);
        static void (*SkipNextDraw)(Entity * self);
        static void (*RenderSprite)(Entity * self, Sprite * img);
        static void (*Render)(Entity * self);
        static void (*RenderAll)();
        static bool (*AnyPlayerHaveNazarCharm)();
        static void (*mark)(Entity * self);
        static void (*CSTR_Entity)(Entity * self);
    };
};

#ifdef _WIN32
inline List6 * * Entity::entityList = (List6* *) 0x8358d0;
inline List6 * * Entity::deadEntityList = (List6* *) 0x8358dc;
inline int * Entity::entityCount = (int*) 0x8358cc;
inline int * Entity::anyPlayerHaveCircletCachedFrame = (int*) 0x83591c;
inline bool * Entity::anyPlayerHaveCircletCached = (bool*) 0x8358ca;
inline int * Entity::anyPlayerHaveGlassTorchCachedFrame = (int*) 0x835918;
inline bool * Entity::anyPlayerHaveGlassTorchCached = (bool*) 0x8358c9;
inline int * Entity::anyPlayerHaveForesightTorchCachedFrame = (int*) 0x835914;
inline bool * Entity::anyPlayerHaveForesightTorchCached = (bool*) 0x8358c8;
inline int * Entity::anyPlayerHaveWallsTorchCachedFrame = (int*) 0x835910;
inline bool * Entity::anyPlayerHaveWallsTorchCached = (bool*) 0x83589b;
inline int * Entity::anyPlayerHaveNazarCharmCachedFrame = (int*) 0x83590c;
inline bool * Entity::anyPlayerHaveNazarCharmCached = (bool*) 0x83589a;

inline void (*Entity::ptr::_RemoveFromList)(Entity * arg1) = (void (*)(Entity * arg1)) 0x0;
inline void (*Entity::ptr::Die)(Entity * self) = (void (*)(Entity * self)) 0x4fb170;
inline void (*Entity::ptr::RemoveAnyPerishedEntities)() = (void (*)()) 0x4fb1d0;
inline bool (*Entity::ptr::_Hit)(Entity * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(Entity * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x0;
inline void (*Entity::ptr::PerformTween)(Entity * self, int xVal, int yVal, int oldX, int oldY, int tweenType, int shadowTweenType, bool bufferTween) = (void (*)(Entity * self, int xVal, int yVal, int oldX, int oldY, int tweenType, int shadowTweenType, bool bufferTween)) 0x4fb220;
inline void (*Entity::ptr::BounceInPlace)(Entity * self, bool bufferTween) = (void (*)(Entity * self, bool bufferTween)) 0x4fb310;
inline void (*Entity::ptr::BounceToward)(Entity * self, Point * p, bool bufferTween) = (void (*)(Entity * self, Point * p, bool bufferTween)) 0x4fb330;
inline Entity * (*Entity::ptr::_New)() = (Entity * (*)()) 0x0;
inline void (*Entity::ptr::_AfterHitPlayer)(Entity * self, Player * arg1) = (void (*)(Entity * self, Player * arg1)) 0x0;
inline int (*Entity::ptr::PerformMovement)(Entity * self, int xVal, int yVal) = (int (*)(Entity * self, int xVal, int yVal)) 0x4fb370;
inline int (*Entity::ptr::PerformMovement2)(Entity * self, Point * p) = (int (*)(Entity * self, Point * p)) 0x4fb720;
inline bool (*Entity::ptr::IsVisible)(Entity * self) = (bool (*)(Entity * self)) 0x4fb740;
inline bool (*Entity::ptr::_CanBeDamaged)(Entity * self, bool arg1, bool arg2) = (bool (*)(Entity * self, bool arg1, bool arg2)) 0x0;
inline bool (*Entity::ptr::AnyPlayerHaveCirclet)() = (bool (*)()) 0x4fb780;
inline bool (*Entity::ptr::AnyPlayerHaveGlassTorch)() = (bool (*)()) 0x4fb8d0;
inline bool (*Entity::ptr::AnyPlayerHaveCircletOrGlassTorch)() = (bool (*)()) 0x4fb9b0;
inline void (*Entity::ptr::FlagForDeath)(Entity * self, int numFrames) = (void (*)(Entity * self, int numFrames)) 0x4fb9d0;
inline Entity * (*Entity::ptr::GetEntityAt)(int x, int y, bool includePlayer) = (Entity * (*)(int x, int y, bool includePlayer)) 0x4fb9f0;
inline bool (*Entity::ptr::AnyPlayerHaveForesightTorch)() = (bool (*)()) 0x4fba70;
inline bool (*Entity::ptr::AnyPlayerHaveWallsTorch)() = (bool (*)()) 0x4fbb50;
inline bool (*Entity::ptr::Freeze)(Entity * self, int duration, bool stone) = (bool (*)(Entity * self, int duration, bool stone)) 0x4fbc30;
inline void (*Entity::ptr::Flicker)(Entity * self, int duration) = (void (*)(Entity * self, int duration)) 0x4fbc50;
inline bool (*Entity::ptr::IsFrozen)(Entity * self, bool ignoreLastBeat) = (bool (*)(Entity * self, bool ignoreLastBeat)) 0x4fbc80;
inline int (*Entity::ptr::MoveImmediate)(Entity * self, int xVal, int yVal, String * movementSource) = (int (*)(Entity * self, int xVal, int yVal, String * movementSource)) 0x4fbcb0;
inline void (*Entity::ptr::CancelTween)(Entity * self) = (void (*)(Entity * self)) 0x4fbee0;
inline void (*Entity::ptr::Update)(Entity * self) = (void (*)(Entity * self)) 0x4fbf10;
inline void (*Entity::ptr::Fall)(Entity * self, bool keepMultiplier) = (void (*)(Entity * self, bool keepMultiplier)) 0x4fc020;
inline bool (*Entity::ptr::IsConfused)(Entity * self) = (bool (*)(Entity * self)) 0x4fc120;
inline bool (*Entity::ptr::IsInAnyPlayerLineOfSight)(Entity * self) = (bool (*)(Entity * self)) 0x4fc320;
inline void (*Entity::ptr::UpdateVisibility)() = (void (*)()) 0x4fc350;
inline bool (*Entity::ptr::CheckRingOfShadows)(Entity * self) = (bool (*)(Entity * self)) 0x4fc890;
inline void (*Entity::ptr::SkipNextDraw)(Entity * self) = (void (*)(Entity * self)) 0x4fc8b0;
inline void (*Entity::ptr::RenderSprite)(Entity * self, Sprite * img) = (void (*)(Entity * self, Sprite * img)) 0x4fc8e0;
inline void (*Entity::ptr::Render)(Entity * self) = (void (*)(Entity * self)) 0x4fcad0;
inline void (*Entity::ptr::RenderAll)() = (void (*)()) 0x4fd170;
inline bool (*Entity::ptr::AnyPlayerHaveNazarCharm)() = (bool (*)()) 0x4fd2c0;
inline void (*Entity::ptr::mark)(Entity * self) = (void (*)(Entity * self)) 0x4fd3a0;
inline void (*Entity::ptr::CSTR_Entity)(Entity * self) = (void (*)(Entity * self)) 0x4fadb0;
#endif

#ifdef __linux__
inline List6 * * Entity::entityList = (List6* *) 0x856a8e8;
inline List6 * * Entity::deadEntityList = (List6* *) 0x856a8e4;
inline int * Entity::entityCount = (int*) 0x856a8e0;
inline int * Entity::anyPlayerHaveCircletCachedFrame = (int*) 0x856a8dc;
inline bool * Entity::anyPlayerHaveCircletCached = (bool*) 0x856a8d8;
inline int * Entity::anyPlayerHaveGlassTorchCachedFrame = (int*) 0x856a8d4;
inline bool * Entity::anyPlayerHaveGlassTorchCached = (bool*) 0x856a8d0;
inline int * Entity::anyPlayerHaveForesightTorchCachedFrame = (int*) 0x856a8cc;
inline bool * Entity::anyPlayerHaveForesightTorchCached = (bool*) 0x856a8c8;
inline int * Entity::anyPlayerHaveWallsTorchCachedFrame = (int*) 0x856a8c4;
inline bool * Entity::anyPlayerHaveWallsTorchCached = (bool*) 0x856a8c0;
inline int * Entity::anyPlayerHaveNazarCharmCachedFrame = (int*) 0x856a8bc;
inline bool * Entity::anyPlayerHaveNazarCharmCached = (bool*) 0x856a8b8;

inline void (*Entity::ptr::_RemoveFromList)(Entity * arg1) = (void (*)(Entity * arg1)) 0x813e950;
inline void (*Entity::ptr::Die)(Entity * self) = (void (*)(Entity * self)) 0x80932b0;
inline void (*Entity::ptr::RemoveAnyPerishedEntities)() = (void (*)()) 0x813e980;
inline bool (*Entity::ptr::_Hit)(Entity * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(Entity * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x0;
inline void (*Entity::ptr::PerformTween)(Entity * self, int xVal, int yVal, int oldX, int oldY, int tweenType, int shadowTweenType, bool bufferTween) = (void (*)(Entity * self, int xVal, int yVal, int oldX, int oldY, int tweenType, int shadowTweenType, bool bufferTween)) 0x806e0e0;
inline void (*Entity::ptr::BounceInPlace)(Entity * self, bool bufferTween) = (void (*)(Entity * self, bool bufferTween)) 0x806e260;
inline void (*Entity::ptr::BounceToward)(Entity * self, Point * p, bool bufferTween) = (void (*)(Entity * self, Point * p, bool bufferTween)) 0x806e2c0;
inline Entity * (*Entity::ptr::_New)() = (Entity * (*)()) 0x813e9c0;
inline void (*Entity::ptr::_AfterHitPlayer)(Entity * self, Player * arg1) = (void (*)(Entity * self, Player * arg1)) 0x806e330;
inline int (*Entity::ptr::PerformMovement)(Entity * self, int xVal, int yVal) = (int (*)(Entity * self, int xVal, int yVal)) 0x81a8860;
inline int (*Entity::ptr::PerformMovement2)(Entity * self, Point * p) = (int (*)(Entity * self, Point * p)) 0x806e340;
inline bool (*Entity::ptr::IsVisible)(Entity * self) = (bool (*)(Entity * self)) 0x812ddc0;
inline bool (*Entity::ptr::_CanBeDamaged)(Entity * self, bool arg1, bool arg2) = (bool (*)(Entity * self, bool arg1, bool arg2)) 0x806e370;
inline bool (*Entity::ptr::AnyPlayerHaveCirclet)() = (bool (*)()) 0x813ea20;
inline bool (*Entity::ptr::AnyPlayerHaveGlassTorch)() = (bool (*)()) 0x813eae0;
inline bool (*Entity::ptr::AnyPlayerHaveCircletOrGlassTorch)() = (bool (*)()) 0x813eb50;
inline void (*Entity::ptr::FlagForDeath)(Entity * self, int numFrames) = (void (*)(Entity * self, int numFrames)) 0x806e380;
inline Entity * (*Entity::ptr::GetEntityAt)(int x, int y, bool includePlayer) = (Entity * (*)(int x, int y, bool includePlayer)) 0x813ebe0;
inline bool (*Entity::ptr::AnyPlayerHaveForesightTorch)() = (bool (*)()) 0x813f900;
inline bool (*Entity::ptr::AnyPlayerHaveWallsTorch)() = (bool (*)()) 0x813f970;
inline bool (*Entity::ptr::Freeze)(Entity * self, int duration, bool stone) = (bool (*)(Entity * self, int duration, bool stone)) 0x806e3a0;
inline void (*Entity::ptr::Flicker)(Entity * self, int duration) = (void (*)(Entity * self, int duration)) 0x806e3d0;
inline bool (*Entity::ptr::IsFrozen)(Entity * self, bool ignoreLastBeat) = (bool (*)(Entity * self, bool ignoreLastBeat)) 0x807e070;
inline int (*Entity::ptr::MoveImmediate)(Entity * self, int xVal, int yVal, String * movementSource) = (int (*)(Entity * self, int xVal, int yVal, String * movementSource)) 0x830a170;
inline void (*Entity::ptr::CancelTween)(Entity * self) = (void (*)(Entity * self)) 0x807e0a0;
inline void (*Entity::ptr::Update)(Entity * self) = (void (*)(Entity * self)) 0x812cad0;
inline void (*Entity::ptr::Fall)(Entity * self, bool keepMultiplier) = (void (*)(Entity * self, bool keepMultiplier)) 0x837ccf0;
inline bool (*Entity::ptr::IsConfused)(Entity * self) = (bool (*)(Entity * self)) 0x825fcb0;
inline bool (*Entity::ptr::IsInAnyPlayerLineOfSight)(Entity * self) = (bool (*)(Entity * self)) 0x812ca90;
inline void (*Entity::ptr::UpdateVisibility)() = (void (*)()) 0x825d270;
inline bool (*Entity::ptr::CheckRingOfShadows)(Entity * self) = (bool (*)(Entity * self)) 0x812dd10;
inline void (*Entity::ptr::SkipNextDraw)(Entity * self) = (void (*)(Entity * self)) 0x806e3f0;
inline void (*Entity::ptr::RenderSprite)(Entity * self, Sprite * img) = (void (*)(Entity * self, Sprite * img)) 0x8257650;
inline void (*Entity::ptr::Render)(Entity * self) = (void (*)(Entity * self)) 0x82668a0;
inline void (*Entity::ptr::RenderAll)() = (void (*)()) 0x813f9e0;
inline bool (*Entity::ptr::AnyPlayerHaveNazarCharm)() = (bool (*)()) 0x813fd00;
inline void (*Entity::ptr::mark)(Entity * self) = (void (*)(Entity * self)) 0x80a5020;
inline void (*Entity::ptr::CSTR_Entity)(Entity * self) = (void (*)(Entity * self)) 0x813e680;
#endif
#endif
