// Generated automatically. Do not edit!
#ifndef _Tile_
#define _Tile_
class Entity;
class List28;
class Player;
class Sprite;
class String;
class TextSprite;
#include "RenderableObject.hpp"

class Tile : public RenderableObject  {
public:
    int type;
    int tilesetOverride;
    bool isCracked;
    int torchDir;
    Sprite * image;
    Sprite * textLabel;
    TextSprite * textLabel2;
    String * textLabelText;
    int metalDoorOpenedBeat;
    int health;
    bool unbreakable;
    bool image1HasBeenLoadedWithFloor;
    Sprite * image2;
    int hasResource;
    bool isStone;
    int tarAnimCounter;
    int tarAnimDelay;
    Sprite * imageWireSilhouette;
    Sprite * imageWire;
    Sprite * imageWireFlash;
    int wireFlashDelay;
    int wireFlashAnimDelay;
    Sprite * xImage;
    int textLabelOffX;
    int textLabelOffY;
    float textLabelDisplayDistance;
    bool textLabelFlash;
    int wireMask;
    bool activatedConductorWire;
    bool magicBarrier;
    float constAlpha;
    int trigger;
    float lightValueCached;
    int lightValueFrameNum;
    bool hasBeenSeen;
    int TORCH_LIGHT_MIN;
    int TORCH_LIGHT_MAX;
    Sprite * torchImage;
    bool animateTorch;
    int torchOffX;
    int torchOffY;
    int triggerDoor;
    int pickaxedNumTimes;
    int triggerDig;
    bool wasInLOS;
    String * flyawayText;
    Sprite * floorOverlayImage;
    int playerWasOnTileAtBeat;
    bool cachedLOS;
    int cachedLOSFrame;
    bool cachedTrueLOS;
    int cachedTrueLOSFrame;
    bool risingTriggered;
    int recedeTimer;
    int textLabelFlashDuration;
    Sprite * extraImage;
    int extraImageOffX;
    int extraImageOffY;
    float grassValue;
    int diamondSparkleDelay;
    int image2XOff;
    int image2YOff;
    int floorOverlayImageXOff;
    int floorOverlayImageYOff;
    bool playerWasOnTileLastFrame;
    int wireXOff;
    int wireYOff;
    bool doorHorizontal;
    int nextEruptionBeat;
    Player * triggerPlayer;
    int torchFlickerNext;
    float constLightValueCached;
    static List28 * * floorRisingList;
    static List28 * * floorRecededList;
    static int * totalTilesCreatedOrDestroyed;
    static List28 * * pendingTilesList;
    static int * anyPlayerHaveMonocleCachedFrame;
    static bool * anyPlayerHaveMonocleCached;
    static int * anyPlayerHaveZoneMapCachedFrame;
    static bool * anyPlayerHaveZoneMapCached;
    static int * anyPlayerHaveCompassCachedFrame;
    static bool * anyPlayerHaveCompassCached;
    static bool * playSounds;
    static bool * ignoreFailSounds;
    static int * anyPlayerHaveRingOfShadowsCachedFrame;
    static int * anyPlayerHaveRingOfLuckCachedFrame;
    static int * anyPlayerHaveSunglassesCachedFrame;
    static bool * anyPlayerHaveRingOfShadowsCached;
    static bool * anyPlayerHaveRingOfLuckCached;
    static bool * anyPlayerHaveSunglassesCached;

    // Wrappers
    Tile(int xVal, int yVal, int typeVal, bool pending, int tilesetOvrd) {
        ptr::CSTR_Tile(this);
        ptr::New(this, xVal, yVal, typeVal, pending, tilesetOvrd);
    }

    inline virtual int GetTileset() { return ptr::GetTileset(this); }
    inline virtual bool HasTorch() { return ptr::HasTorch(this); }
    inline virtual int GetType() { return ptr::GetType(this); }
    inline virtual float GetCurrentAlpha() { return ptr::GetCurrentAlpha(this); }
    inline virtual void ClearTextLabel() { ptr::ClearTextLabel(this); }
    inline void Die() { ptr::Die(this); }
    inline virtual int CalcTileset() { return ptr::CalcTileset(this); }
    inline virtual bool IsShopWall() { return ptr::IsShopWall(this); }
    inline virtual bool IsMetalDoorOpen() { return ptr::IsMetalDoorOpen(this); }
    inline virtual bool IsDoor() { return ptr::IsDoor(this); }
    inline virtual bool IsWall(bool nonCorridor, bool destructibleOnly, bool forVision, bool torchlessOnly) { return ptr::IsWall(this, nonCorridor, destructibleOnly, forVision, torchlessOnly); }
    inline virtual bool IsNecrodancerPlatform() { return ptr::IsNecrodancerPlatform(this); }
    inline virtual bool IsTileset(int t) { return ptr::IsTileset(this, t); }
    inline virtual Sprite * LoadFloor() { return ptr::LoadFloor(this); }
    inline virtual void BecomeStone() { ptr::BecomeStone(this); }
    inline virtual void BecomeHarderStone() { ptr::BecomeHarderStone(this); }
    inline virtual Sprite * GetZone2Wall() { return ptr::GetZone2Wall(this); }
    inline virtual Sprite * GetZone3Wall() { return ptr::GetZone3Wall(this); }
    inline virtual Sprite * GetZone4Wall() { return ptr::GetZone4Wall(this); }
    inline virtual Sprite * GetZone5Wall() { return ptr::GetZone5Wall(this); }
    inline virtual void BecomeDirt() { ptr::BecomeDirt(this); }
    inline virtual bool IsFloor() { return ptr::IsFloor(this); }
    inline virtual bool IsWire() { return ptr::IsWire(this); }
    inline virtual void LoadWireImages(String * mainImage, int conductorPhase) { ptr::LoadWireImages(this, mainImage, conductorPhase); }
    inline Tile * New(int xVal, int yVal, int typeVal, bool pending, int tilesetOvrd) { return ptr::New(this, xVal, yVal, typeVal, pending, tilesetOvrd); }
    inline Tile * _new2() { return ptr::_new2(); }
    inline virtual void AddTextLabel(String * filename, int tmpXOff, int tmpYOff, float displayD, bool flash, bool textString) { ptr::AddTextLabel(this, filename, tmpXOff, tmpYOff, displayD, flash, textString); }
    inline virtual int GetNumWireConnections() { return ptr::GetNumWireConnections(this); }
    inline static bool AnyPlayerHaveMonocle() { return ptr::AnyPlayerHaveMonocle(); }
    inline virtual bool IsVisible() { return ptr::IsVisible(this); }
    inline virtual void AddTorch() { ptr::AddTorch(this); }
    inline static bool AnyPlayerHaveZoneMap() { return ptr::AnyPlayerHaveZoneMap(); }
    inline static bool AnyPlayerHaveCompass() { return ptr::AnyPlayerHaveCompass(); }
    inline virtual bool HasTileBeenSeen() { return ptr::HasTileBeenSeen(this); }
    inline virtual void SetTrigger(int triggerVal) { ptr::SetTrigger(this, triggerVal); }
    inline virtual bool IsDirt() { return ptr::IsDirt(this); }
    inline virtual bool IsZone4Dirt() { return ptr::IsZone4Dirt(this); }
    inline virtual void BecomeCracked() { ptr::BecomeCracked(this); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline virtual void AddTorch2() { ptr::AddTorch2(this); }
    inline virtual bool IsNormalFloor() { return ptr::IsNormalFloor(this); }
    inline virtual bool IsEarth() { return ptr::IsEarth(this); }
    inline virtual Sprite * LoadDiamond() { return ptr::LoadDiamond(this); }
    inline virtual void BecomeDiamond() { ptr::BecomeDiamond(this); }
    inline virtual void SetDoorTrigger(int triggerVal) { ptr::SetDoorTrigger(this, triggerVal); }
    inline virtual void AddWireConnection(int dir) { ptr::AddWireConnection(this, dir); }
    inline virtual bool IsExit() { return ptr::_IsExit(); }
    inline static void GenerateWireConnections() { ptr::GenerateWireConnections(); }
    inline virtual void SetDigTrigger(int triggerVal) { ptr::SetDigTrigger(this, triggerVal); }
    inline virtual void AddFloorOverlayImage(String * imageName) { ptr::AddFloorOverlayImage(this, imageName); }
    inline virtual void BecomeDarkShopWall(String * spritePath) { ptr::BecomeDarkShopWall(this, spritePath); }
    inline virtual void DarkenShopWall() { ptr::DarkenShopWall(this); }
    inline static void CleanUpPendingTiles() { ptr::CleanUpPendingTiles(); }
    inline virtual void BecomeUnbreakable() { ptr::BecomeUnbreakable(this); }
    inline static bool CheckRingOfShadows() { return ptr::CheckRingOfShadows(); }
    inline virtual bool IsInAnyPlayerTrueLineOfSight() { return ptr::IsInAnyPlayerTrueLineOfSight(this); }
    inline virtual bool IsInAnyPlayerLineOfSight() { return ptr::IsInAnyPlayerLineOfSight(this); }
    inline virtual void BecomeBombWall() { ptr::BecomeBombWall(this); }
    inline static bool AnyPlayerHaveRingOfLuck() { return ptr::AnyPlayerHaveRingOfLuck(); }
    inline static void MoveAll() { ptr::MoveAll(); }
    inline virtual bool IsStairs() { return ptr::IsStairs(this); }
    inline virtual bool IsConductorWall() { return ptr::IsConductorWall(this); }
    inline virtual void RenderImageAs(Sprite * img, bool renderAsWall, int extraXOff, int extraYOff) { ptr::RenderImageAs(this, img, renderAsWall, extraXOff, extraYOff); }
    inline void Render() { ptr::Render(this); }
    inline static bool AnyPlayerHaveSunglasses() { return ptr::AnyPlayerHaveSunglasses(); }
    inline static bool IsNearNightmare(int xVal, int yVal) { return ptr::IsNearNightmare(xVal, yVal); }
    inline virtual bool IsNearNightmare() { return ptr::IsNearNightmare_2(this); }
    inline virtual void ToggleDoor() { ptr::ToggleDoor(this); }
    inline virtual float CalculateTileLightValue(bool forVision) { return ptr::CalculateTileLightValue(this, forVision); }
    inline virtual float CalculateTileAlpha() { return ptr::CalculateTileAlpha(this); }
    inline virtual int SelectWireFrame() { return ptr::SelectWireFrame(this); }
    inline virtual bool SelectWireFlip() { return ptr::SelectWireFlip(this); }
    inline void Update() { ptr::Update(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static int (*GetTileset)(Tile * self);
        static bool (*HasTorch)(Tile * self);
        static int (*GetType)(Tile * self);
        static float (*GetCurrentAlpha)(Tile * self);
        static void (*ClearTextLabel)(Tile * self);
        static void (*Die)(Tile * self);
        static int (*CalcTileset)(Tile * self);
        static bool (*IsShopWall)(Tile * self);
        static bool (*IsMetalDoorOpen)(Tile * self);
        static bool (*IsDoor)(Tile * self);
        static bool (*IsWall)(Tile * self, bool nonCorridor, bool destructibleOnly, bool forVision, bool torchlessOnly);
        static bool (*IsNecrodancerPlatform)(Tile * self);
        static bool (*IsTileset)(Tile * self, int t);
        static Sprite * (*LoadFloor)(Tile * self);
        static void (*BecomeStone)(Tile * self);
        static void (*BecomeHarderStone)(Tile * self);
        static Sprite * (*GetZone2Wall)(Tile * self);
        static Sprite * (*GetZone3Wall)(Tile * self);
        static Sprite * (*GetZone4Wall)(Tile * self);
        static Sprite * (*GetZone5Wall)(Tile * self);
        static void (*BecomeDirt)(Tile * self);
        static bool (*IsFloor)(Tile * self);
        static bool (*IsWire)(Tile * self);
        static void (*LoadWireImages)(Tile * self, String * mainImage, int conductorPhase);
        static Tile * (*New)(Tile * self, int xVal, int yVal, int typeVal, bool pending, int tilesetOvrd);
        static Tile * (*_new2)();
        static void (*AddTextLabel)(Tile * self, String * filename, int tmpXOff, int tmpYOff, float displayD, bool flash, bool textString);
        static int (*GetNumWireConnections)(Tile * self);
        static bool (*AnyPlayerHaveMonocle)();
        static bool (*IsVisible)(Tile * self);
        static void (*AddTorch)(Tile * self);
        static bool (*AnyPlayerHaveZoneMap)();
        static bool (*AnyPlayerHaveCompass)();
        static bool (*HasTileBeenSeen)(Tile * self);
        static void (*SetTrigger)(Tile * self, int triggerVal);
        static bool (*IsDirt)(Tile * self);
        static bool (*IsZone4Dirt)(Tile * self);
        static void (*BecomeCracked)(Tile * self);
        static bool (*Hit)(Tile * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*AddTorch2)(Tile * self);
        static bool (*IsNormalFloor)(Tile * self);
        static bool (*IsEarth)(Tile * self);
        static Sprite * (*LoadDiamond)(Tile * self);
        static void (*BecomeDiamond)(Tile * self);
        static void (*SetDoorTrigger)(Tile * self, int triggerVal);
        static void (*AddWireConnection)(Tile * self, int dir);
        static bool (*_IsExit)();
        static void (*GenerateWireConnections)();
        static void (*SetDigTrigger)(Tile * self, int triggerVal);
        static void (*AddFloorOverlayImage)(Tile * self, String * imageName);
        static void (*BecomeDarkShopWall)(Tile * self, String * spritePath);
        static void (*DarkenShopWall)(Tile * self);
        static void (*CleanUpPendingTiles)();
        static void (*BecomeUnbreakable)(Tile * self);
        static bool (*CheckRingOfShadows)();
        static bool (*IsInAnyPlayerTrueLineOfSight)(Tile * self);
        static bool (*IsInAnyPlayerLineOfSight)(Tile * self);
        static void (*BecomeBombWall)(Tile * self);
        static bool (*AnyPlayerHaveRingOfLuck)();
        static void (*MoveAll)();
        static bool (*IsStairs)(Tile * self);
        static bool (*IsConductorWall)(Tile * self);
        static void (*RenderImageAs)(Tile * self, Sprite * img, bool renderAsWall, int extraXOff, int extraYOff);
        static void (*Render)(Tile * self);
        static bool (*AnyPlayerHaveSunglasses)();
        static bool (*IsNearNightmare)(int xVal, int yVal);
        static bool (*IsNearNightmare_2)(Tile * self);
        static void (*ToggleDoor)(Tile * self);
        static float (*CalculateTileLightValue)(Tile * self, bool forVision);
        static float (*CalculateTileAlpha)(Tile * self);
        static int (*SelectWireFrame)(Tile * self);
        static bool (*SelectWireFlip)(Tile * self);
        static void (*Update)(Tile * self);
        static void (*mark)(Tile * self);
        static void (*CSTR_Tile)(Tile * self);
    };
};

#ifdef _WIN32
inline List28 * * Tile::floorRisingList = (List28* *) 0x835634;
inline List28 * * Tile::floorRecededList = (List28* *) 0x835630;
inline int * Tile::totalTilesCreatedOrDestroyed = (int*) 0x835900;
inline List28 * * Tile::pendingTilesList = (List28* *) 0x83562c;
inline int * Tile::anyPlayerHaveMonocleCachedFrame = (int*) 0x835928;
inline bool * Tile::anyPlayerHaveMonocleCached = (bool*) 0x835628;
inline int * Tile::anyPlayerHaveZoneMapCachedFrame = (int*) 0x83592c;
inline bool * Tile::anyPlayerHaveZoneMapCached = (bool*) 0x83561f;
inline int * Tile::anyPlayerHaveCompassCachedFrame = (int*) 0x835930;
inline bool * Tile::anyPlayerHaveCompassCached = (bool*) 0x83561e;
inline bool * Tile::playSounds = (bool*) 0x8359d1;
inline bool * Tile::ignoreFailSounds = (bool*) 0x835897;
inline int * Tile::anyPlayerHaveRingOfShadowsCachedFrame = (int*) 0x835934;
inline int * Tile::anyPlayerHaveRingOfLuckCachedFrame = (int*) 0x835924;
inline int * Tile::anyPlayerHaveSunglassesCachedFrame = (int*) 0x835920;
inline bool * Tile::anyPlayerHaveRingOfShadowsCached = (bool*) 0x83561d;
inline bool * Tile::anyPlayerHaveRingOfLuckCached = (bool*) 0x83561c;
inline bool * Tile::anyPlayerHaveSunglassesCached = (bool*) 0x83557f;

inline int (*Tile::ptr::GetTileset)(Tile * self) = (int (*)(Tile * self)) 0x5ca1d0;
inline bool (*Tile::ptr::HasTorch)(Tile * self) = (bool (*)(Tile * self)) 0x5ca1e0;
inline int (*Tile::ptr::GetType)(Tile * self) = (int (*)(Tile * self)) 0x5ca1f0;
inline float (*Tile::ptr::GetCurrentAlpha)(Tile * self) = (float (*)(Tile * self)) 0x5ca200;
inline void (*Tile::ptr::ClearTextLabel)(Tile * self) = (void (*)(Tile * self)) 0x5ca210;
inline void (*Tile::ptr::Die)(Tile * self) = (void (*)(Tile * self)) 0x5ca2d0;
inline int (*Tile::ptr::CalcTileset)(Tile * self) = (int (*)(Tile * self)) 0x5ca330;
inline bool (*Tile::ptr::IsShopWall)(Tile * self) = (bool (*)(Tile * self)) 0x5ca3d0;
inline bool (*Tile::ptr::IsMetalDoorOpen)(Tile * self) = (bool (*)(Tile * self)) 0x5ca3f0;
inline bool (*Tile::ptr::IsDoor)(Tile * self) = (bool (*)(Tile * self)) 0x5ca400;
inline bool (*Tile::ptr::IsWall)(Tile * self, bool nonCorridor, bool destructibleOnly, bool forVision, bool torchlessOnly) = (bool (*)(Tile * self, bool nonCorridor, bool destructibleOnly, bool forVision, bool torchlessOnly)) 0x5ca430;
inline bool (*Tile::ptr::IsNecrodancerPlatform)(Tile * self) = (bool (*)(Tile * self)) 0x5ca4f0;
inline bool (*Tile::ptr::IsTileset)(Tile * self, int t) = (bool (*)(Tile * self, int t)) 0x5ca520;
inline Sprite * (*Tile::ptr::LoadFloor)(Tile * self) = (Sprite * (*)(Tile * self)) 0x5ca540;
inline void (*Tile::ptr::BecomeStone)(Tile * self) = (void (*)(Tile * self)) 0x5caa30;
inline void (*Tile::ptr::BecomeHarderStone)(Tile * self) = (void (*)(Tile * self)) 0x5cafd0;
inline Sprite * (*Tile::ptr::GetZone2Wall)(Tile * self) = (Sprite * (*)(Tile * self)) 0x5cb480;
inline Sprite * (*Tile::ptr::GetZone3Wall)(Tile * self) = (Sprite * (*)(Tile * self)) 0x5cb6d0;
inline Sprite * (*Tile::ptr::GetZone4Wall)(Tile * self) = (Sprite * (*)(Tile * self)) 0x5cb8c0;
inline Sprite * (*Tile::ptr::GetZone5Wall)(Tile * self) = (Sprite * (*)(Tile * self)) 0x5cbb10;
inline void (*Tile::ptr::BecomeDirt)(Tile * self) = (void (*)(Tile * self)) 0x5cbd30;
inline bool (*Tile::ptr::IsFloor)(Tile * self) = (bool (*)(Tile * self)) 0x5cc000;
inline bool (*Tile::ptr::IsWire)(Tile * self) = (bool (*)(Tile * self)) 0x5cc030;
inline void (*Tile::ptr::LoadWireImages)(Tile * self, String * mainImage, int conductorPhase) = (void (*)(Tile * self, String * mainImage, int conductorPhase)) 0x5cc050;
inline Tile * (*Tile::ptr::New)(Tile * self, int xVal, int yVal, int typeVal, bool pending, int tilesetOvrd) = (Tile * (*)(Tile * self, int xVal, int yVal, int typeVal, bool pending, int tilesetOvrd)) 0x5cc4d0;
inline Tile * (*Tile::ptr::_new2)() = (Tile * (*)()) 0x0;
inline void (*Tile::ptr::AddTextLabel)(Tile * self, String * filename, int tmpXOff, int tmpYOff, float displayD, bool flash, bool textString) = (void (*)(Tile * self, String * filename, int tmpXOff, int tmpYOff, float displayD, bool flash, bool textString)) 0x5cdac0;
inline int (*Tile::ptr::GetNumWireConnections)(Tile * self) = (int (*)(Tile * self)) 0x5cdcb0;
inline bool (*Tile::ptr::AnyPlayerHaveMonocle)() = (bool (*)()) 0x5cdce0;
inline bool (*Tile::ptr::IsVisible)(Tile * self) = (bool (*)(Tile * self)) 0x5cddc0;
inline void (*Tile::ptr::AddTorch)(Tile * self) = (void (*)(Tile * self)) 0x5cde30;
inline bool (*Tile::ptr::AnyPlayerHaveZoneMap)() = (bool (*)()) 0x5ce340;
inline bool (*Tile::ptr::AnyPlayerHaveCompass)() = (bool (*)()) 0x5ce420;
inline bool (*Tile::ptr::HasTileBeenSeen)(Tile * self) = (bool (*)(Tile * self)) 0x5ce500;
inline void (*Tile::ptr::SetTrigger)(Tile * self, int triggerVal) = (void (*)(Tile * self, int triggerVal)) 0x5ce560;
inline bool (*Tile::ptr::IsDirt)(Tile * self) = (bool (*)(Tile * self)) 0x5ce570;
inline bool (*Tile::ptr::IsZone4Dirt)(Tile * self) = (bool (*)(Tile * self)) 0x5ce590;
inline void (*Tile::ptr::BecomeCracked)(Tile * self) = (void (*)(Tile * self)) 0x5ce5c0;
inline bool (*Tile::ptr::Hit)(Tile * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Tile * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x5ced10;
inline void (*Tile::ptr::AddTorch2)(Tile * self) = (void (*)(Tile * self)) 0x5d0390;
inline bool (*Tile::ptr::IsNormalFloor)(Tile * self) = (bool (*)(Tile * self)) 0x5d03c0;
inline bool (*Tile::ptr::IsEarth)(Tile * self) = (bool (*)(Tile * self)) 0x5d0400;
inline Sprite * (*Tile::ptr::LoadDiamond)(Tile * self) = (Sprite * (*)(Tile * self)) 0x5d0410;
inline void (*Tile::ptr::BecomeDiamond)(Tile * self) = (void (*)(Tile * self)) 0x5d0e20;
inline void (*Tile::ptr::SetDoorTrigger)(Tile * self, int triggerVal) = (void (*)(Tile * self, int triggerVal)) 0x5d1160;
inline void (*Tile::ptr::AddWireConnection)(Tile * self, int dir) = (void (*)(Tile * self, int dir)) 0x5d1170;
inline bool (*Tile::ptr::_IsExit)() = (bool (*)()) 0x0;
inline void (*Tile::ptr::GenerateWireConnections)() = (void (*)()) 0x5d11c0;
inline void (*Tile::ptr::SetDigTrigger)(Tile * self, int triggerVal) = (void (*)(Tile * self, int triggerVal)) 0x5d13c0;
inline void (*Tile::ptr::AddFloorOverlayImage)(Tile * self, String * imageName) = (void (*)(Tile * self, String * imageName)) 0x5d13d0;
inline void (*Tile::ptr::BecomeDarkShopWall)(Tile * self, String * spritePath) = (void (*)(Tile * self, String * spritePath)) 0x5d1510;
inline void (*Tile::ptr::DarkenShopWall)(Tile * self) = (void (*)(Tile * self)) 0x5d1670;
inline void (*Tile::ptr::CleanUpPendingTiles)() = (void (*)()) 0x5d1790;
inline void (*Tile::ptr::BecomeUnbreakable)(Tile * self) = (void (*)(Tile * self)) 0x5d17d0;
inline bool (*Tile::ptr::CheckRingOfShadows)() = (bool (*)()) 0x5d1960;
inline bool (*Tile::ptr::IsInAnyPlayerTrueLineOfSight)(Tile * self) = (bool (*)(Tile * self)) 0x5d1a40;
inline bool (*Tile::ptr::IsInAnyPlayerLineOfSight)(Tile * self) = (bool (*)(Tile * self)) 0x5d1a50;
inline void (*Tile::ptr::BecomeBombWall)(Tile * self) = (void (*)(Tile * self)) 0x5d1b90;
inline bool (*Tile::ptr::AnyPlayerHaveRingOfLuck)() = (bool (*)()) 0x5d1d40;
inline void (*Tile::ptr::MoveAll)() = (void (*)()) 0x5d1e90;
inline bool (*Tile::ptr::IsStairs)(Tile * self) = (bool (*)(Tile * self)) 0x5d1190;
inline bool (*Tile::ptr::IsConductorWall)(Tile * self) = (bool (*)(Tile * self)) 0x5d23d0;
inline void (*Tile::ptr::RenderImageAs)(Tile * self, Sprite * img, bool renderAsWall, int extraXOff, int extraYOff) = (void (*)(Tile * self, Sprite * img, bool renderAsWall, int extraXOff, int extraYOff)) 0x5d23f0;
inline void (*Tile::ptr::Render)(Tile * self) = (void (*)(Tile * self)) 0x5d2630;
inline bool (*Tile::ptr::AnyPlayerHaveSunglasses)() = (bool (*)()) 0x5d4020;
inline bool (*Tile::ptr::IsNearNightmare)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x5d4100;
inline bool (*Tile::ptr::IsNearNightmare_2)(Tile * self) = (bool (*)(Tile * self)) 0x5d4150;
inline void (*Tile::ptr::ToggleDoor)(Tile * self) = (void (*)(Tile * self)) 0x5d41a0;
inline float (*Tile::ptr::CalculateTileLightValue)(Tile * self, bool forVision) = (float (*)(Tile * self, bool forVision)) 0x5d44e0;
inline float (*Tile::ptr::CalculateTileAlpha)(Tile * self) = (float (*)(Tile * self)) 0x5d4560;
inline int (*Tile::ptr::SelectWireFrame)(Tile * self) = (int (*)(Tile * self)) 0x5d46c0;
inline bool (*Tile::ptr::SelectWireFlip)(Tile * self) = (bool (*)(Tile * self)) 0x5d47e0;
inline void (*Tile::ptr::Update)(Tile * self) = (void (*)(Tile * self)) 0x5d4810;
inline void (*Tile::ptr::mark)(Tile * self) = (void (*)(Tile * self)) 0x5d5df0;
inline void (*Tile::ptr::CSTR_Tile)(Tile * self) = (void (*)(Tile * self)) 0x5c9d80;
#endif

#ifdef __linux__
inline List28 * * Tile::floorRisingList = (List28* *) 0x856a4d4;
inline List28 * * Tile::floorRecededList = (List28* *) 0x856a4d0;
inline int * Tile::totalTilesCreatedOrDestroyed = (int*) 0x856a4cc;
inline List28 * * Tile::pendingTilesList = (List28* *) 0x856a4c8;
inline int * Tile::anyPlayerHaveMonocleCachedFrame = (int*) 0x856a4c4;
inline bool * Tile::anyPlayerHaveMonocleCached = (bool*) 0x856a4c0;
inline int * Tile::anyPlayerHaveZoneMapCachedFrame = (int*) 0x856a4bc;
inline bool * Tile::anyPlayerHaveZoneMapCached = (bool*) 0x856a4b8;
inline int * Tile::anyPlayerHaveCompassCachedFrame = (int*) 0x856a4b4;
inline bool * Tile::anyPlayerHaveCompassCached = (bool*) 0x856a4b2;
inline bool * Tile::playSounds = (bool*) 0x856a4b1;
inline bool * Tile::ignoreFailSounds = (bool*) 0x856a4b0;
inline int * Tile::anyPlayerHaveRingOfShadowsCachedFrame = (int*) 0x856a4ac;
inline int * Tile::anyPlayerHaveRingOfLuckCachedFrame = (int*) 0x856a4a8;
inline int * Tile::anyPlayerHaveSunglassesCachedFrame = (int*) 0x856a4a4;
inline bool * Tile::anyPlayerHaveRingOfShadowsCached = (bool*) 0x856a4a2;
inline bool * Tile::anyPlayerHaveRingOfLuckCached = (bool*) 0x856a4a1;
inline bool * Tile::anyPlayerHaveSunglassesCached = (bool*) 0x856a4a0;

inline int (*Tile::ptr::GetTileset)(Tile * self) = (int (*)(Tile * self)) 0x80711d0;
inline bool (*Tile::ptr::HasTorch)(Tile * self) = (bool (*)(Tile * self)) 0x80711e0;
inline int (*Tile::ptr::GetType)(Tile * self) = (int (*)(Tile * self)) 0x80711f0;
inline float (*Tile::ptr::GetCurrentAlpha)(Tile * self) = (float (*)(Tile * self)) 0x8071200;
inline void (*Tile::ptr::ClearTextLabel)(Tile * self) = (void (*)(Tile * self)) 0x80d8c00;
inline void (*Tile::ptr::Die)(Tile * self) = (void (*)(Tile * self)) 0x80842c0;
inline int (*Tile::ptr::CalcTileset)(Tile * self) = (int (*)(Tile * self)) 0x8081930;
inline bool (*Tile::ptr::IsShopWall)(Tile * self) = (bool (*)(Tile * self)) 0x8071220;
inline bool (*Tile::ptr::IsMetalDoorOpen)(Tile * self) = (bool (*)(Tile * self)) 0x8071240;
inline bool (*Tile::ptr::IsDoor)(Tile * self) = (bool (*)(Tile * self)) 0x807ed00;
inline bool (*Tile::ptr::IsWall)(Tile * self, bool nonCorridor, bool destructibleOnly, bool forVision, bool torchlessOnly) = (bool (*)(Tile * self, bool nonCorridor, bool destructibleOnly, bool forVision, bool torchlessOnly)) 0x8191b50;
inline bool (*Tile::ptr::IsNecrodancerPlatform)(Tile * self) = (bool (*)(Tile * self)) 0x8071250;
inline bool (*Tile::ptr::IsTileset)(Tile * self, int t) = (bool (*)(Tile * self, int t)) 0x8071270;
inline Sprite * (*Tile::ptr::LoadFloor)(Tile * self) = (Sprite * (*)(Tile * self)) 0x811b9c0;
inline void (*Tile::ptr::BecomeStone)(Tile * self) = (void (*)(Tile * self)) 0x8120500;
inline void (*Tile::ptr::BecomeHarderStone)(Tile * self) = (void (*)(Tile * self)) 0x811fe40;
inline Sprite * (*Tile::ptr::GetZone2Wall)(Tile * self) = (Sprite * (*)(Tile * self)) 0x811b800;
inline Sprite * (*Tile::ptr::GetZone3Wall)(Tile * self) = (Sprite * (*)(Tile * self)) 0x811b640;
inline Sprite * (*Tile::ptr::GetZone4Wall)(Tile * self) = (Sprite * (*)(Tile * self)) 0x811b480;
inline Sprite * (*Tile::ptr::GetZone5Wall)(Tile * self) = (Sprite * (*)(Tile * self)) 0x811b320;
inline void (*Tile::ptr::BecomeDirt)(Tile * self) = (void (*)(Tile * self)) 0x811fb10;
inline bool (*Tile::ptr::IsFloor)(Tile * self) = (bool (*)(Tile * self)) 0x8071290;
inline bool (*Tile::ptr::IsWire)(Tile * self) = (bool (*)(Tile * self)) 0x80712d0;
inline void (*Tile::ptr::LoadWireImages)(Tile * self, String * mainImage, int conductorPhase) = (void (*)(Tile * self, String * mainImage, int conductorPhase)) 0x811f3f0;
inline Tile * (*Tile::ptr::New)(Tile * self, int xVal, int yVal, int typeVal, bool pending, int tilesetOvrd) = (Tile * (*)(Tile * self, int xVal, int yVal, int typeVal, bool pending, int tilesetOvrd)) 0x8189e40;
inline Tile * (*Tile::ptr::_new2)() = (Tile * (*)()) 0x81904d0;
inline void (*Tile::ptr::AddTextLabel)(Tile * self, String * filename, int tmpXOff, int tmpYOff, float displayD, bool flash, bool textString) = (void (*)(Tile * self, String * filename, int tmpXOff, int tmpYOff, float displayD, bool flash, bool textString)) 0x8146550;
inline int (*Tile::ptr::GetNumWireConnections)(Tile * self) = (int (*)(Tile * self)) 0x80712f0;
inline bool (*Tile::ptr::AnyPlayerHaveMonocle)() = (bool (*)()) 0x8190500;
inline bool (*Tile::ptr::IsVisible)(Tile * self) = (bool (*)(Tile * self)) 0x80d7c70;
inline void (*Tile::ptr::AddTorch)(Tile * self) = (void (*)(Tile * self)) 0x811ee30;
inline bool (*Tile::ptr::AnyPlayerHaveZoneMap)() = (bool (*)()) 0x8190570;
inline bool (*Tile::ptr::AnyPlayerHaveCompass)() = (bool (*)()) 0x81905e0;
inline bool (*Tile::ptr::HasTileBeenSeen)(Tile * self) = (bool (*)(Tile * self)) 0x80d80b0;
inline void (*Tile::ptr::SetTrigger)(Tile * self, int triggerVal) = (void (*)(Tile * self, int triggerVal)) 0x8071320;
inline bool (*Tile::ptr::IsDirt)(Tile * self) = (bool (*)(Tile * self)) 0x8071330;
inline bool (*Tile::ptr::IsZone4Dirt)(Tile * self) = (bool (*)(Tile * self)) 0x8071360;
inline void (*Tile::ptr::BecomeCracked)(Tile * self) = (void (*)(Tile * self)) 0x8210680;
inline bool (*Tile::ptr::Hit)(Tile * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Tile * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x83b24e0;
inline void (*Tile::ptr::AddTorch2)(Tile * self) = (void (*)(Tile * self)) 0x80713a0;
inline bool (*Tile::ptr::IsNormalFloor)(Tile * self) = (bool (*)(Tile * self)) 0x807ed40;
inline bool (*Tile::ptr::IsEarth)(Tile * self) = (bool (*)(Tile * self)) 0x80713e0;
inline Sprite * (*Tile::ptr::LoadDiamond)(Tile * self) = (Sprite * (*)(Tile * self)) 0x811c2b0;
inline void (*Tile::ptr::BecomeDiamond)(Tile * self) = (void (*)(Tile * self)) 0x811e850;
inline void (*Tile::ptr::SetDoorTrigger)(Tile * self, int triggerVal) = (void (*)(Tile * self, int triggerVal)) 0x80713f0;
inline void (*Tile::ptr::AddWireConnection)(Tile * self, int dir) = (void (*)(Tile * self, int dir)) 0x8071400;
inline bool (*Tile::ptr::_IsExit)() = (bool (*)()) 0x807ed80;
inline void (*Tile::ptr::GenerateWireConnections)() = (void (*)()) 0x8190650;
inline void (*Tile::ptr::SetDigTrigger)(Tile * self, int triggerVal) = (void (*)(Tile * self, int triggerVal)) 0x8071420;
inline void (*Tile::ptr::AddFloorOverlayImage)(Tile * self, String * imageName) = (void (*)(Tile * self, String * imageName)) 0x811e720;
inline void (*Tile::ptr::BecomeDarkShopWall)(Tile * self, String * spritePath) = (void (*)(Tile * self, String * spritePath)) 0x811e5b0;
inline void (*Tile::ptr::DarkenShopWall)(Tile * self) = (void (*)(Tile * self)) 0x80c8490;
inline void (*Tile::ptr::CleanUpPendingTiles)() = (void (*)()) 0x8190ab0;
inline void (*Tile::ptr::BecomeUnbreakable)(Tile * self) = (void (*)(Tile * self)) 0x811e440;
inline bool (*Tile::ptr::CheckRingOfShadows)() = (bool (*)()) 0x8190af0;
inline bool (*Tile::ptr::IsInAnyPlayerTrueLineOfSight)(Tile * self) = (bool (*)(Tile * self)) 0x81398f0;
inline bool (*Tile::ptr::IsInAnyPlayerLineOfSight)(Tile * self) = (bool (*)(Tile * self)) 0x80d7960;
inline void (*Tile::ptr::BecomeBombWall)(Tile * self) = (void (*)(Tile * self)) 0x811e2a0;
inline bool (*Tile::ptr::AnyPlayerHaveRingOfLuck)() = (bool (*)()) 0x8190b60;
inline void (*Tile::ptr::MoveAll)() = (void (*)()) 0x839ef10;
inline bool (*Tile::ptr::IsStairs)(Tile * self) = (bool (*)(Tile * self)) 0x807edc0;
inline bool (*Tile::ptr::IsConductorWall)(Tile * self) = (bool (*)(Tile * self)) 0x8071430;
inline void (*Tile::ptr::RenderImageAs)(Tile * self, Sprite * img, bool renderAsWall, int extraXOff, int extraYOff) = (void (*)(Tile * self, Sprite * img, bool renderAsWall, int extraXOff, int extraYOff)) 0x8131630;
inline void (*Tile::ptr::Render)(Tile * self) = (void (*)(Tile * self)) 0x82620d0;
inline bool (*Tile::ptr::AnyPlayerHaveSunglasses)() = (bool (*)()) 0x8190f20;
inline bool (*Tile::ptr::IsNearNightmare)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x8190f90;
inline bool (*Tile::ptr::IsNearNightmare_2)(Tile * self) = (bool (*)(Tile * self)) 0x8096590;
inline void (*Tile::ptr::ToggleDoor)(Tile * self) = (void (*)(Tile * self)) 0x811dbe0;
inline float (*Tile::ptr::CalculateTileLightValue)(Tile * self, bool forVision) = (float (*)(Tile * self, bool forVision)) 0x813afc0;
inline float (*Tile::ptr::CalculateTileAlpha)(Tile * self) = (float (*)(Tile * self)) 0x81afbd0;
inline int (*Tile::ptr::SelectWireFrame)(Tile * self) = (int (*)(Tile * self)) 0x8071450;
inline bool (*Tile::ptr::SelectWireFlip)(Tile * self) = (bool (*)(Tile * self)) 0x8071590;
inline void (*Tile::ptr::Update)(Tile * self) = (void (*)(Tile * self)) 0x83d76e0;
inline void (*Tile::ptr::mark)(Tile * self) = (void (*)(Tile * self)) 0x80a66a0;
inline void (*Tile::ptr::CSTR_Tile)(Tile * self) = (void (*)(Tile * self)) 0x8189ac0;
#endif
#endif
