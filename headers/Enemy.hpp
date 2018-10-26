// Generated automatically. Do not edit!
#ifndef _Enemy_
#define _Enemy_
template<class T> class Array;
class Entity;
class IntMap7;
class IntPointStack;
class List16;
class Player;
class Point;
class Sprite;
class String;
class XMLNode;
#include "MobileEntity.hpp"

class Enemy : public MobileEntity  {
public:
    int enemyType;
    int currentMoveDelay;
    bool isLord;
    int animOverride;
    bool isShieldedFrankensteinway;
    bool isMiniboss;
    bool isBoss;
    bool isSarcophagus;
    bool inArena;
    bool stealth;
    Array<int> * lastPlayerHitFrame;
    Array<String> * lastPlayerHitSource;
    int heartXOff;
    int heartYOff;
    int storedZOff;
    bool autoFlip;
    bool baseFlipX;
    String * shadowVal;
    bool bounceOnMovementFail;
    int beatsPerMove;
    int movePriority;
    int health;
    int healthMax;
    bool isMonkeyLike;
    String * hitParticle;
    IntMap7 * animNormal;
    IntMap7 * animNormal2;
    IntMap7 * animNormal3;
    IntMap7 * animBlink;
    IntMap7 * animTell;
    IntMap7 * animTellBlink;
    int hitTween;
    int hitShadowTween;
    int movementType;
    Sprite * attackSwipeImage;
    Sprite * jumpDirt;
    int jumpDirtTimer;
    String * overrideDeathSound;
    String * overrideHitSound;
    bool isFormationDancer;
    String * overrideCrySound;
    bool justSpawned;
    bool isDancer;
    bool charmed;
    bool freezeImmunity;
    int killCoinMultiplier;
    int bonusCoinsToDrop;
    int ringOfGoldCoinsToDrop;
    bool isStairLockingMiniboss;
    bool inPenaltyBox;
    bool dropLordScroll;
    bool dropNoCoinsOverride;
    int deathTrigger;
    int renderSwipeTime;
    int attackSwipeDir;
    Point * attackSwipePoint;
    int jumpDirtX;
    int jumpDirtY;
    String * overrideMoveSound;
    bool changedTilePositionThisFrame;
    int zapGeneration;
    bool isNecroDancer;
    bool earthquaked;
    bool movesRegardlessOfDistance;
    int blink_MIN;
    int blink_MAX;
    int blink_DUR;
    bool containsItem;
    bool enableTell;
    bool swarmCulprit;
    bool overrideAttackSwipe;
    bool allowDiagonalFlip;
    bool tramples;
    bool showHearts;
    bool inSecretRoom;
    bool dontMove;
    bool enableDeathEffects;
    int minEnemyMoveDistance;
    bool exemptFromPause;
    bool wasSeekingX;
    bool isMosh;
    bool isUnaffectedByArenas;
    bool movedThisFrame;
    bool attemptedMoveThisFrame;
    Player * seekingPlayer;
    Point * lastAttemptedMove;
    bool useLastPosForSwipe;
    bool justHitPlayer;
    bool executedCry;
    int animOverrideState;
    bool wasFrozen;
    int blinkDelay;
    int blinkDuration;
    int animOffset;
    int overrideNormal2Timing;
    int overrideTellTiming;
    int numSwipeFrames;
    int numSwipeFramesPerImage;
    bool alwaysShowHearts;
    bool spawnsDropGold;
    bool wasVisibleLastFrame;
    static List16 * * enemyList;
    static XMLNode * * randomizerXML;
    static Sprite * * heartSmall;
    static Sprite * * heartEmptySmall;
    static bool * killingAllEnemies;
    static bool * enemiesPaused;
    static int * enemiesFearfulDuration;
    static int * movesBehind;
    static int * lastWraithSpawnBeat;

    // Wrappers
    Enemy() {
        ptr::CSTR_Enemy(this);
        ptr::New(this);
    }

    inline bool _CanBeDamaged(bool arg1, bool arg2) { return ptr::_CanBeDamaged(this, arg1, arg2); }
    inline static List16 * GetDamagableEnemiesAt(int xVal, int yVal, bool phasing, bool piercing, int attackSourceX, int attackSourceY, int dVal) { return ptr::GetDamagableEnemiesAt(xVal, yVal, phasing, piercing, attackSourceX, attackSourceY, dVal); }
    inline static Enemy * GetEnemyAt(int xVal, int yVal, bool includeFalling) { return ptr::GetEnemyAt(xVal, yVal, includeFalling); }
    inline virtual bool IsStealthed() { return ptr::IsStealthed(this); }
    inline Enemy * New() { return ptr::New(this); }
    inline static XMLNode * GetEnemyXML(String * name, int level) { return ptr::GetEnemyXML(name, level); }
    inline virtual bool ExemptFromMysteryMode() { return ptr::ExemptFromMysteryMode(this); }
    inline virtual void InitImage(XMLNode * enemyXML, String * overrideSpriteName, int overrideFrameW, int overrideFrameH) { ptr::InitImage(this, enemyXML, overrideSpriteName, overrideFrameW, overrideFrameH); }
    inline virtual void ApplyMonkeyPaw() { ptr::ApplyMonkeyPaw(this); }
    inline virtual void Init3(int xVal, int yVal, int l, String * name, String * overrideSpriteName, int overrideFrameW, int overrideFrameH) { ptr::Init3(this, xVal, yVal, l, name, overrideSpriteName, overrideFrameW, overrideFrameH); }
    inline virtual bool IsDoubleHit(String * damageSource, Entity * hitter) { return ptr::IsDoubleHit(this, damageSource, hitter); }
    inline virtual void SetDoubleHitData(String * damageSource, Entity * hitter) { ptr::SetDoubleHitData(this, damageSource, hitter); }
    inline static int GetNumStairLockingMinibosses() { return ptr::GetNumStairLockingMinibosses(); }
    inline static int GetNumPenaltyBoxMinibosses() { return ptr::GetNumPenaltyBoxMinibosses(); }
    inline static void _RemoveFromEnemyList(Enemy * arg1) { ptr::_RemoveFromEnemyList(arg1); }
    inline virtual void Delete() { ptr::Delete(this); }
    inline void Die() { ptr::Die(this); }
    inline static bool DoesDamageKnockback(Player * player, String * damageSource) { return ptr::DoesDamageKnockback(player, damageSource); }
    inline virtual void AfterHitHook2(int arg1, int arg2) { ptr::_AfterHitHook2(this, arg1, arg2); }
    inline virtual void InitDirtJump(int xVal, int yVal) { ptr::InitDirtJump(this, xVal, yVal); }
    inline virtual void CheckFamiliarTouch(int dir) { ptr::CheckFamiliarTouch(this, dir); }
    inline int MoveImmediate(int xVal, int yVal, String * movementSource) { return ptr::MoveImmediate(this, xVal, yVal, movementSource); }
    inline virtual void Knockback(int dir) { ptr::Knockback(this, dir); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline static void MarkAllEnemiesAsVisible() { ptr::MarkAllEnemiesAsVisible(); }
    inline virtual void DropItem2() { ptr::_DropItem2(); }
    inline static void EarthquakeEnemiesSilentDamage(int xVal, int yVal, int damageAmount) { ptr::EarthquakeEnemiesSilentDamage(xVal, yVal, damageAmount); }
    inline static void Charm(int xVal, int yVal) { ptr::Charm(xVal, yVal); }
    inline static void FreezeEnemiesNear(int xVal, int yVal, int duration, bool allEnemies) { ptr::FreezeEnemiesNear(xVal, yVal, duration, allEnemies); }
    inline virtual bool ImmuneToEarth() { return ptr::_ImmuneToEarth(); }
    inline static void ApplyMonkeyPawAll() { ptr::ApplyMonkeyPawAll(); }
    inline static void SetEnemiesToDropNoCoins() { ptr::SetEnemiesToDropNoCoins(); }
    inline static Enemy * MakeEnemy(int xVal, int yVal, int type) { return ptr::MakeEnemy(xVal, yVal, type); }
    inline virtual void AdjustLordImage() { ptr::AdjustLordImage(this); }
    inline virtual void MakeLord() { ptr::MakeLord(this); }
    inline static int GetBaseType(int fullType) { return ptr::GetBaseType(fullType); }
    inline static bool _IsDisabled(int arg1) { return ptr::_IsDisabled(arg1); }
    inline virtual void Cull() { ptr::Cull(this); }
    inline static int _GetNumEnemies() { return ptr::_GetNumEnemies(); }
    inline static Enemy * GetRandomEnemy() { return ptr::GetRandomEnemy(); }
    inline virtual bool IsCullable() { return ptr::IsCullable(this); }
    inline static int GetNumCullableEnemies() { return ptr::GetNumCullableEnemies(); }
    inline static void CullEnemiesDownTo(int cullNum) { ptr::CullEnemiesDownTo(cullNum); }
    inline virtual bool CanBeLord() { return ptr::CanBeLord(this); }
    inline static void CreateLord() { ptr::CreateLord(); }
    inline static void MoveSwarmEnemiesAwayFromStartLocation() { ptr::MoveSwarmEnemiesAwayFromStartLocation(); }
    inline static void SetAllEnemiesMinimumMoveDistance(int dist) { ptr::SetAllEnemiesMinimumMoveDistance(dist); }
    inline static String * AddTagsToEnemyName(String * eName, int size) { return ptr::AddTagsToEnemyName(eName, size); }
    inline static void StartRandomizerRun() { ptr::StartRandomizerRun(); }
    inline static String * GetEnemyNameHelper(int type) { return ptr::GetEnemyNameHelper(type); }
    inline static String * GetEnemyName(int type) { return ptr::GetEnemyName(type); }
    inline static Sprite * LoadBestiarySprite(int type) { return ptr::LoadBestiarySprite(type); }
    inline static void KillAllEnemies() { ptr::KillAllEnemies(); }
    inline static void CullAllEnemies() { ptr::CullAllEnemies(); }
    inline static void KillAllNonConductorEnemies() { ptr::KillAllNonConductorEnemies(); }
    inline static void ResetAll() { ptr::ResetAll(); }
    inline static int GetNumArenaEnemiesRemaining() { return ptr::GetNumArenaEnemiesRemaining(); }
    inline static void KillAllNonNecroDancerEnemies() { ptr::KillAllNonNecroDancerEnemies(); }
    inline static void MakeNonNecroDancerEnemiesIntoFormationDancers() { ptr::MakeNonNecroDancerEnemiesIntoFormationDancers(); }
    inline static int GetNumEnemiesIgnoreDancers() { return ptr::GetNumEnemiesIgnoreDancers(); }
    inline static void SetEnemiesToDropNoCoinsOverride() { ptr::SetEnemiesToDropNoCoinsOverride(); }
    inline static bool EnemiesHaveMovedThisBeat() { return ptr::EnemiesHaveMovedThisBeat(); }
    inline static bool _EnemiesMovingThisFrame() { return ptr::_EnemiesMovingThisFrame(); }
    inline virtual void ImageFlipX(bool flipX) { ptr::ImageFlipX(this, flipX); }
    inline virtual Point * RandomSeek(bool trueRandom, bool ignoreRingOfLuck) { return ptr::RandomSeek(this, trueRandom, ignoreRingOfLuck); }
    inline virtual Point * GetAdjacentTileThatIsClosestToTarget(int targetX, int targetY, int moveDistVal) { return ptr::GetAdjacentTileThatIsClosestToTarget(this, targetX, targetY, moveDistVal); }
    inline virtual bool CustomMoveCheck(int newX, int newY) { return ptr::CustomMoveCheck(this, newX, newY); }
    inline virtual Point * SelectOptimalMoveFrom(int targetX, int targetY, IntPointStack * moves, bool farthest, bool allowCollisions, bool allowLiquids, bool allowTraps, bool liquidsOnly, bool wallsOnly) { return ptr::SelectOptimalMoveFrom(this, targetX, targetY, moves, farthest, allowCollisions, allowLiquids, allowTraps, liquidsOnly, wallsOnly); }
    inline virtual Point * GetClosestMovement(int targetX, int targetY, int dirVal, bool allowLiquids, bool allowTraps, bool liquidsOnly, bool wallsOnly) { return ptr::GetClosestMovement(this, targetX, targetY, dirVal, allowLiquids, allowTraps, liquidsOnly, wallsOnly); }
    inline virtual Point * BasicSeekTarget(int targetX, int targetY, int targetLastX, int targetLastY, bool ignoreLiquids, bool ignoreTraps, bool liquidsOnly, bool wallsOnly) { return ptr::BasicSeekTarget(this, targetX, targetY, targetLastX, targetLastY, ignoreLiquids, ignoreTraps, liquidsOnly, wallsOnly); }
    inline virtual Point * BasicSeek() { return ptr::BasicSeek(this); }
    inline virtual Point * BasicSeekNoTraps() { return ptr::BasicSeekNoTraps(this); }
    inline virtual Point * BasicSeekTargetIncludeDiagonalsdumb(int targetX, int targetY) { return ptr::BasicSeekTargetIncludeDiagonalsdumb(this, targetX, targetY); }
    inline virtual Point * BasicSeekIncludeDiagonals() { return ptr::BasicSeekIncludeDiagonals(this); }
    inline virtual Point * RandomIncludeDiagonals(bool trueRandom, bool ignoreRingOfLuck) { return ptr::RandomIncludeDiagonals(this, trueRandom, ignoreRingOfLuck); }
    inline virtual Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline virtual bool ImmuneToFear() { return ptr::_ImmuneToFear(); }
    inline virtual Point * GetFurthestMovement(int targetX, int targetY, bool allowCollisions, bool includeDiagonal) { return ptr::GetFurthestMovement(this, targetX, targetY, allowCollisions, includeDiagonal); }
    inline virtual Point * BasicFlee(bool includeDiagonals) { return ptr::BasicFlee(this, includeDiagonals); }
    inline virtual int AttemptMove(int xVal, int yVal) { return ptr::AttemptMove(this, xVal, yVal); }
    inline virtual int Move() { return ptr::Move(this); }
    inline virtual void AdvanceMovementDelay() { ptr::AdvanceMovementDelay(this); }
    inline virtual void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline virtual void MoveFail() { ptr::MoveFail(this); }
    inline static void MoveAll() { ptr::MoveAll(); }
    inline void Fall(bool keepMultiplier) { ptr::Fall(this, keepMultiplier); }
    inline virtual int GetBeatNum() { return ptr::GetBeatNum(this); }
    inline virtual float RelativeVideoTimeUntilBeat() { return ptr::RelativeVideoTimeUntilBeat(this); }
    inline virtual bool IsBetweenFraction(float on, float off) { return ptr::IsBetweenFraction(this, on, off); }
    inline virtual void AnimateToTheBeat() { ptr::AnimateToTheBeat(this); }
    inline void Update() { ptr::Update(this); }
    inline virtual int GetDisplayHealth() { return ptr::GetDisplayHealth(this); }
    inline virtual int GetDisplayHealthMax() { return ptr::GetDisplayHealthMax(this); }
    inline virtual bool HideHeartsWhenStealthed() { return ptr::_HideHeartsWhenStealthed(); }
    inline void Render() { ptr::Render(this); }
    inline static bool EnemiesHaveMovedClosestBeat() { return ptr::EnemiesHaveMovedClosestBeat(); }
    inline virtual Point * BasicSeekTargetIncludeDiagonals(int targetX, int targetY) { return ptr::BasicSeekTargetIncludeDiagonals(this, targetX, targetY); }
    inline virtual bool IsAt(int xVal, int yVal) { return ptr::IsAt(this, xVal, yVal); }
    inline static void SetAllNonNecroDancerEnemyMoveDelays(int cmd) { ptr::SetAllNonNecroDancerEnemyMoveDelays(cmd); }
    inline virtual Point * BasicSeekAvoidLiquids() { return ptr::BasicSeekAvoidLiquids(this); }
    inline virtual Point * DiagonalsOnlySeekTarget(int targetX, int targetY, bool bounceOnFail) { return ptr::DiagonalsOnlySeekTarget(this, targetX, targetY, bounceOnFail); }
    inline virtual Point * BasicSeekInWalls() { return ptr::BasicSeekInWalls(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static bool (*_CanBeDamaged)(Enemy * self, bool arg1, bool arg2);
        static List16 * (*GetDamagableEnemiesAt)(int xVal, int yVal, bool phasing, bool piercing, int attackSourceX, int attackSourceY, int dVal);
        static Enemy * (*GetEnemyAt)(int xVal, int yVal, bool includeFalling);
        static bool (*IsStealthed)(Enemy * self);
        static Enemy * (*New)(Enemy * self);
        static XMLNode * (*GetEnemyXML)(String * name, int level);
        static bool (*ExemptFromMysteryMode)(Enemy * self);
        static void (*InitImage)(Enemy * self, XMLNode * enemyXML, String * overrideSpriteName, int overrideFrameW, int overrideFrameH);
        static void (*ApplyMonkeyPaw)(Enemy * self);
        static void (*Init3)(Enemy * self, int xVal, int yVal, int l, String * name, String * overrideSpriteName, int overrideFrameW, int overrideFrameH);
        static bool (*IsDoubleHit)(Enemy * self, String * damageSource, Entity * hitter);
        static void (*SetDoubleHitData)(Enemy * self, String * damageSource, Entity * hitter);
        static int (*GetNumStairLockingMinibosses)();
        static int (*GetNumPenaltyBoxMinibosses)();
        static void (*_RemoveFromEnemyList)(Enemy * arg1);
        static void (*Delete)(Enemy * self);
        static void (*Die)(Enemy * self);
        static bool (*DoesDamageKnockback)(Player * player, String * damageSource);
        static void (*_AfterHitHook2)(Enemy * self, int arg1, int arg2);
        static void (*InitDirtJump)(Enemy * self, int xVal, int yVal);
        static void (*CheckFamiliarTouch)(Enemy * self, int dir);
        static int (*MoveImmediate)(Enemy * self, int xVal, int yVal, String * movementSource);
        static void (*Knockback)(Enemy * self, int dir);
        static bool (*Hit)(Enemy * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*MarkAllEnemiesAsVisible)();
        static void (*_DropItem2)();
        static void (*EarthquakeEnemiesSilentDamage)(int xVal, int yVal, int damageAmount);
        static void (*Charm)(int xVal, int yVal);
        static void (*FreezeEnemiesNear)(int xVal, int yVal, int duration, bool allEnemies);
        static bool (*_ImmuneToEarth)();
        static void (*ApplyMonkeyPawAll)();
        static void (*SetEnemiesToDropNoCoins)();
        static Enemy * (*MakeEnemy)(int xVal, int yVal, int type);
        static void (*AdjustLordImage)(Enemy * self);
        static void (*MakeLord)(Enemy * self);
        static int (*GetBaseType)(int fullType);
        static bool (*_IsDisabled)(int arg1);
        static void (*Cull)(Enemy * self);
        static int (*_GetNumEnemies)();
        static Enemy * (*GetRandomEnemy)();
        static bool (*IsCullable)(Enemy * self);
        static int (*GetNumCullableEnemies)();
        static void (*CullEnemiesDownTo)(int cullNum);
        static bool (*CanBeLord)(Enemy * self);
        static void (*CreateLord)();
        static void (*MoveSwarmEnemiesAwayFromStartLocation)();
        static void (*SetAllEnemiesMinimumMoveDistance)(int dist);
        static String * (*AddTagsToEnemyName)(String * eName, int size);
        static void (*StartRandomizerRun)();
        static String * (*GetEnemyNameHelper)(int type);
        static String * (*GetEnemyName)(int type);
        static Sprite * (*LoadBestiarySprite)(int type);
        static void (*KillAllEnemies)();
        static void (*CullAllEnemies)();
        static void (*KillAllNonConductorEnemies)();
        static void (*ResetAll)();
        static int (*GetNumArenaEnemiesRemaining)();
        static void (*KillAllNonNecroDancerEnemies)();
        static void (*MakeNonNecroDancerEnemiesIntoFormationDancers)();
        static int (*GetNumEnemiesIgnoreDancers)();
        static void (*SetEnemiesToDropNoCoinsOverride)();
        static bool (*EnemiesHaveMovedThisBeat)();
        static bool (*_EnemiesMovingThisFrame)();
        static void (*ImageFlipX)(Enemy * self, bool flipX);
        static Point * (*RandomSeek)(Enemy * self, bool trueRandom, bool ignoreRingOfLuck);
        static Point * (*GetAdjacentTileThatIsClosestToTarget)(Enemy * self, int targetX, int targetY, int moveDistVal);
        static bool (*CustomMoveCheck)(Enemy * self, int newX, int newY);
        static Point * (*SelectOptimalMoveFrom)(Enemy * self, int targetX, int targetY, IntPointStack * moves, bool farthest, bool allowCollisions, bool allowLiquids, bool allowTraps, bool liquidsOnly, bool wallsOnly);
        static Point * (*GetClosestMovement)(Enemy * self, int targetX, int targetY, int dirVal, bool allowLiquids, bool allowTraps, bool liquidsOnly, bool wallsOnly);
        static Point * (*BasicSeekTarget)(Enemy * self, int targetX, int targetY, int targetLastX, int targetLastY, bool ignoreLiquids, bool ignoreTraps, bool liquidsOnly, bool wallsOnly);
        static Point * (*BasicSeek)(Enemy * self);
        static Point * (*BasicSeekNoTraps)(Enemy * self);
        static Point * (*BasicSeekTargetIncludeDiagonalsdumb)(Enemy * self, int targetX, int targetY);
        static Point * (*BasicSeekIncludeDiagonals)(Enemy * self);
        static Point * (*RandomIncludeDiagonals)(Enemy * self, bool trueRandom, bool ignoreRingOfLuck);
        static Point * (*GetMovementDirection)(Enemy * self);
        static bool (*_ImmuneToFear)();
        static Point * (*GetFurthestMovement)(Enemy * self, int targetX, int targetY, bool allowCollisions, bool includeDiagonal);
        static Point * (*BasicFlee)(Enemy * self, bool includeDiagonals);
        static int (*AttemptMove)(Enemy * self, int xVal, int yVal);
        static int (*Move)(Enemy * self);
        static void (*AdvanceMovementDelay)(Enemy * self);
        static void (*MoveSucceed)(Enemy * self, bool hitPlayer, bool moveDelayed);
        static void (*MoveFail)(Enemy * self);
        static void (*MoveAll)();
        static void (*Fall)(Enemy * self, bool keepMultiplier);
        static int (*GetBeatNum)(Enemy * self);
        static float (*RelativeVideoTimeUntilBeat)(Enemy * self);
        static bool (*IsBetweenFraction)(Enemy * self, float on, float off);
        static void (*AnimateToTheBeat)(Enemy * self);
        static void (*Update)(Enemy * self);
        static int (*GetDisplayHealth)(Enemy * self);
        static int (*GetDisplayHealthMax)(Enemy * self);
        static bool (*_HideHeartsWhenStealthed)();
        static void (*Render)(Enemy * self);
        static bool (*EnemiesHaveMovedClosestBeat)();
        static Point * (*BasicSeekTargetIncludeDiagonals)(Enemy * self, int targetX, int targetY);
        static bool (*IsAt)(Enemy * self, int xVal, int yVal);
        static void (*SetAllNonNecroDancerEnemyMoveDelays)(int cmd);
        static Point * (*BasicSeekAvoidLiquids)(Enemy * self);
        static Point * (*DiagonalsOnlySeekTarget)(Enemy * self, int targetX, int targetY, bool bounceOnFail);
        static Point * (*BasicSeekInWalls)(Enemy * self);
        static void (*mark)(Enemy * self);
        static void (*CSTR_Enemy)(Enemy * self);
    };
};

#ifdef _WIN32
List16 * * Enemy::enemyList = (List16* *) 0x8359e0;
XMLNode * * Enemy::randomizerXML = (XMLNode* *) 0x8356c4;
Sprite * * Enemy::heartSmall = (Sprite* *) 0x8356c0;
Sprite * * Enemy::heartEmptySmall = (Sprite* *) 0x8356bc;
bool * Enemy::killingAllEnemies = (bool*) 0x83562b;
bool * Enemy::enemiesPaused = (bool*) 0x8359d3;
int * Enemy::enemiesFearfulDuration = (int*) 0x8359b4;
int * Enemy::movesBehind = (int*) 0x835854;
int * Enemy::lastWraithSpawnBeat = (int*) 0x835778;

bool (*Enemy::ptr::_CanBeDamaged)(Enemy * self, bool arg1, bool arg2) = (bool (*)(Enemy * self, bool arg1, bool arg2)) 0x0;
List16 * (*Enemy::ptr::GetDamagableEnemiesAt)(int xVal, int yVal, bool phasing, bool piercing, int attackSourceX, int attackSourceY, int dVal) = (List16 * (*)(int xVal, int yVal, bool phasing, bool piercing, int attackSourceX, int attackSourceY, int dVal)) 0x5991e0;
Enemy * (*Enemy::ptr::GetEnemyAt)(int xVal, int yVal, bool includeFalling) = (Enemy * (*)(int xVal, int yVal, bool includeFalling)) 0x599400;
bool (*Enemy::ptr::IsStealthed)(Enemy * self) = (bool (*)(Enemy * self)) 0x599490;
Enemy * (*Enemy::ptr::New)(Enemy * self) = (Enemy * (*)(Enemy * self)) 0x5994a0;
XMLNode * (*Enemy::ptr::GetEnemyXML)(String * name, int level) = (XMLNode * (*)(String * name, int level)) 0x599500;
bool (*Enemy::ptr::ExemptFromMysteryMode)(Enemy * self) = (bool (*)(Enemy * self)) 0x599770;
void (*Enemy::ptr::InitImage)(Enemy * self, XMLNode * enemyXML, String * overrideSpriteName, int overrideFrameW, int overrideFrameH) = (void (*)(Enemy * self, XMLNode * enemyXML, String * overrideSpriteName, int overrideFrameW, int overrideFrameH)) 0x599800;
void (*Enemy::ptr::ApplyMonkeyPaw)(Enemy * self) = (void (*)(Enemy * self)) 0x59a940;
void (*Enemy::ptr::Init3)(Enemy * self, int xVal, int yVal, int l, String * name, String * overrideSpriteName, int overrideFrameW, int overrideFrameH) = (void (*)(Enemy * self, int xVal, int yVal, int l, String * name, String * overrideSpriteName, int overrideFrameW, int overrideFrameH)) 0x59aa00;
bool (*Enemy::ptr::IsDoubleHit)(Enemy * self, String * damageSource, Entity * hitter) = (bool (*)(Enemy * self, String * damageSource, Entity * hitter)) 0x59dc70;
void (*Enemy::ptr::SetDoubleHitData)(Enemy * self, String * damageSource, Entity * hitter) = (void (*)(Enemy * self, String * damageSource, Entity * hitter)) 0x59dea0;
int (*Enemy::ptr::GetNumStairLockingMinibosses)() = (int (*)()) 0x59df70;
int (*Enemy::ptr::GetNumPenaltyBoxMinibosses)() = (int (*)()) 0x59dfc0;
void (*Enemy::ptr::_RemoveFromEnemyList)(Enemy * arg1) = (void (*)(Enemy * arg1)) 0x0;
void (*Enemy::ptr::Delete)(Enemy * self) = (void (*)(Enemy * self)) 0x59e010;
void (*Enemy::ptr::Die)(Enemy * self) = (void (*)(Enemy * self)) 0x59e030;
bool (*Enemy::ptr::DoesDamageKnockback)(Player * player, String * damageSource) = (bool (*)(Player * player, String * damageSource)) 0x59e340;
void (*Enemy::ptr::_AfterHitHook2)(Enemy * self, int arg1, int arg2) = (void (*)(Enemy * self, int arg1, int arg2)) 0x0;
void (*Enemy::ptr::InitDirtJump)(Enemy * self, int xVal, int yVal) = (void (*)(Enemy * self, int xVal, int yVal)) 0x59e530;
void (*Enemy::ptr::CheckFamiliarTouch)(Enemy * self, int dir) = (void (*)(Enemy * self, int dir)) 0x59e570;
int (*Enemy::ptr::MoveImmediate)(Enemy * self, int xVal, int yVal, String * movementSource) = (int (*)(Enemy * self, int xVal, int yVal, String * movementSource)) 0x59e5a0;
void (*Enemy::ptr::Knockback)(Enemy * self, int dir) = (void (*)(Enemy * self, int dir)) 0x59e900;
bool (*Enemy::ptr::Hit)(Enemy * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Enemy * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x59e9f0;
void (*Enemy::ptr::MarkAllEnemiesAsVisible)() = (void (*)()) 0x59f580;
void (*Enemy::ptr::_DropItem2)() = (void (*)()) 0x0;
void (*Enemy::ptr::EarthquakeEnemiesSilentDamage)(int xVal, int yVal, int damageAmount) = (void (*)(int xVal, int yVal, int damageAmount)) 0x59f5c0;
void (*Enemy::ptr::Charm)(int xVal, int yVal) = (void (*)(int xVal, int yVal)) 0x59f740;
void (*Enemy::ptr::FreezeEnemiesNear)(int xVal, int yVal, int duration, bool allEnemies) = (void (*)(int xVal, int yVal, int duration, bool allEnemies)) 0x59f800;
bool (*Enemy::ptr::_ImmuneToEarth)() = (bool (*)()) 0x0;
void (*Enemy::ptr::ApplyMonkeyPawAll)() = (void (*)()) 0x59f8b0;
void (*Enemy::ptr::SetEnemiesToDropNoCoins)() = (void (*)()) 0x59f8f0;
Enemy * (*Enemy::ptr::MakeEnemy)(int xVal, int yVal, int type) = (Enemy * (*)(int xVal, int yVal, int type)) 0x59f930;
void (*Enemy::ptr::AdjustLordImage)(Enemy * self) = (void (*)(Enemy * self)) 0x5a27e0;
void (*Enemy::ptr::MakeLord)(Enemy * self) = (void (*)(Enemy * self)) 0x5a2880;
int (*Enemy::ptr::GetBaseType)(int fullType) = (int (*)(int fullType)) 0x5a2950;
bool (*Enemy::ptr::_IsDisabled)(int arg1) = (bool (*)(int arg1)) 0x0;
void (*Enemy::ptr::Cull)(Enemy * self) = (void (*)(Enemy * self)) 0x5a2ce0;
int (*Enemy::ptr::_GetNumEnemies)() = (int (*)()) 0x0;
Enemy * (*Enemy::ptr::GetRandomEnemy)() = (Enemy * (*)()) 0x5a2d00;
bool (*Enemy::ptr::IsCullable)(Enemy * self) = (bool (*)(Enemy * self)) 0x5a2dc0;
int (*Enemy::ptr::GetNumCullableEnemies)() = (int (*)()) 0x5a2e20;
void (*Enemy::ptr::CullEnemiesDownTo)(int cullNum) = (void (*)(int cullNum)) 0x5a2e70;
bool (*Enemy::ptr::CanBeLord)(Enemy * self) = (bool (*)(Enemy * self)) 0x5a3330;
void (*Enemy::ptr::CreateLord)() = (void (*)()) 0x5a3360;
void (*Enemy::ptr::MoveSwarmEnemiesAwayFromStartLocation)() = (void (*)()) 0x5a3440;
void (*Enemy::ptr::SetAllEnemiesMinimumMoveDistance)(int dist) = (void (*)(int dist)) 0x5a3750;
String * (*Enemy::ptr::AddTagsToEnemyName)(String * eName, int size) = (String * (*)(String * eName, int size)) 0x5a37c0;
void (*Enemy::ptr::StartRandomizerRun)() = (void (*)()) 0x5b4ad0;
String * (*Enemy::ptr::GetEnemyNameHelper)(int type) = (String * (*)(int type)) 0x5b6310;
String * (*Enemy::ptr::GetEnemyName)(int type) = (String * (*)(int type)) 0x5b6c80;
Sprite * (*Enemy::ptr::LoadBestiarySprite)(int type) = (Sprite * (*)(int type)) 0x5b6d40;
void (*Enemy::ptr::KillAllEnemies)() = (void (*)()) 0x5ba060;
void (*Enemy::ptr::CullAllEnemies)() = (void (*)()) 0x5ba0b0;
void (*Enemy::ptr::KillAllNonConductorEnemies)() = (void (*)()) 0x5ba0f0;
void (*Enemy::ptr::ResetAll)() = (void (*)()) 0x5ba160;
int (*Enemy::ptr::GetNumArenaEnemiesRemaining)() = (int (*)()) 0x5ba210;
void (*Enemy::ptr::KillAllNonNecroDancerEnemies)() = (void (*)()) 0x5ba260;
void (*Enemy::ptr::MakeNonNecroDancerEnemiesIntoFormationDancers)() = (void (*)()) 0x5ba2b0;
int (*Enemy::ptr::GetNumEnemiesIgnoreDancers)() = (int (*)()) 0x5ba300;
void (*Enemy::ptr::SetEnemiesToDropNoCoinsOverride)() = (void (*)()) 0x5ba350;
bool (*Enemy::ptr::EnemiesHaveMovedThisBeat)() = (bool (*)()) 0x5ba390;
bool (*Enemy::ptr::_EnemiesMovingThisFrame)() = (bool (*)()) 0x0;
void (*Enemy::ptr::ImageFlipX)(Enemy * self, bool flipX) = (void (*)(Enemy * self, bool flipX)) 0x5ba490;
Point * (*Enemy::ptr::RandomSeek)(Enemy * self, bool trueRandom, bool ignoreRingOfLuck) = (Point * (*)(Enemy * self, bool trueRandom, bool ignoreRingOfLuck)) 0x5ba4e0;
Point * (*Enemy::ptr::GetAdjacentTileThatIsClosestToTarget)(Enemy * self, int targetX, int targetY, int moveDistVal) = (Point * (*)(Enemy * self, int targetX, int targetY, int moveDistVal)) 0x5ba760;
bool (*Enemy::ptr::CustomMoveCheck)(Enemy * self, int newX, int newY) = (bool (*)(Enemy * self, int newX, int newY)) 0x4fb770;
Point * (*Enemy::ptr::SelectOptimalMoveFrom)(Enemy * self, int targetX, int targetY, IntPointStack * moves, bool farthest, bool allowCollisions, bool allowLiquids, bool allowTraps, bool liquidsOnly, bool wallsOnly) = (Point * (*)(Enemy * self, int targetX, int targetY, IntPointStack * moves, bool farthest, bool allowCollisions, bool allowLiquids, bool allowTraps, bool liquidsOnly, bool wallsOnly)) 0x5baad0;
Point * (*Enemy::ptr::GetClosestMovement)(Enemy * self, int targetX, int targetY, int dirVal, bool allowLiquids, bool allowTraps, bool liquidsOnly, bool wallsOnly) = (Point * (*)(Enemy * self, int targetX, int targetY, int dirVal, bool allowLiquids, bool allowTraps, bool liquidsOnly, bool wallsOnly)) 0x5baf90;
Point * (*Enemy::ptr::BasicSeekTarget)(Enemy * self, int targetX, int targetY, int targetLastX, int targetLastY, bool ignoreLiquids, bool ignoreTraps, bool liquidsOnly, bool wallsOnly) = (Point * (*)(Enemy * self, int targetX, int targetY, int targetLastX, int targetLastY, bool ignoreLiquids, bool ignoreTraps, bool liquidsOnly, bool wallsOnly)) 0x5bb2f0;
Point * (*Enemy::ptr::BasicSeek)(Enemy * self) = (Point * (*)(Enemy * self)) 0x5bb980;
Point * (*Enemy::ptr::BasicSeekNoTraps)(Enemy * self) = (Point * (*)(Enemy * self)) 0x5bba60;
Point * (*Enemy::ptr::BasicSeekTargetIncludeDiagonalsdumb)(Enemy * self, int targetX, int targetY) = (Point * (*)(Enemy * self, int targetX, int targetY)) 0x5bbb40;
Point * (*Enemy::ptr::BasicSeekIncludeDiagonals)(Enemy * self) = (Point * (*)(Enemy * self)) 0x5bbdd0;
Point * (*Enemy::ptr::RandomIncludeDiagonals)(Enemy * self, bool trueRandom, bool ignoreRingOfLuck) = (Point * (*)(Enemy * self, bool trueRandom, bool ignoreRingOfLuck)) 0x5bbeb0;
Point * (*Enemy::ptr::GetMovementDirection)(Enemy * self) = (Point * (*)(Enemy * self)) 0x5bc170;
bool (*Enemy::ptr::_ImmuneToFear)() = (bool (*)()) 0x0;
Point * (*Enemy::ptr::GetFurthestMovement)(Enemy * self, int targetX, int targetY, bool allowCollisions, bool includeDiagonal) = (Point * (*)(Enemy * self, int targetX, int targetY, bool allowCollisions, bool includeDiagonal)) 0x5bc280;
Point * (*Enemy::ptr::BasicFlee)(Enemy * self, bool includeDiagonals) = (Point * (*)(Enemy * self, bool includeDiagonals)) 0x5bc3a0;
int (*Enemy::ptr::AttemptMove)(Enemy * self, int xVal, int yVal) = (int (*)(Enemy * self, int xVal, int yVal)) 0x5bc4c0;
int (*Enemy::ptr::Move)(Enemy * self) = (int (*)(Enemy * self)) 0x5bc5f0;
void (*Enemy::ptr::AdvanceMovementDelay)(Enemy * self) = (void (*)(Enemy * self)) 0x5bc680;
void (*Enemy::ptr::MoveSucceed)(Enemy * self, bool hitPlayer, bool moveDelayed) = (void (*)(Enemy * self, bool hitPlayer, bool moveDelayed)) 0x5bc710;
void (*Enemy::ptr::MoveFail)(Enemy * self) = (void (*)(Enemy * self)) 0x5bc730;
void (*Enemy::ptr::MoveAll)() = (void (*)()) 0x5bc7d0;
void (*Enemy::ptr::Fall)(Enemy * self, bool keepMultiplier) = (void (*)(Enemy * self, bool keepMultiplier)) 0x5bca80;
int (*Enemy::ptr::GetBeatNum)(Enemy * self) = (int (*)(Enemy * self)) 0x5bcaa0;
float (*Enemy::ptr::RelativeVideoTimeUntilBeat)(Enemy * self) = (float (*)(Enemy * self)) 0x5bcb50;
bool (*Enemy::ptr::IsBetweenFraction)(Enemy * self, float on, float off) = (bool (*)(Enemy * self, float on, float off)) 0x5bcc20;
void (*Enemy::ptr::AnimateToTheBeat)(Enemy * self) = (void (*)(Enemy * self)) 0x5bcc70;
void (*Enemy::ptr::Update)(Enemy * self) = (void (*)(Enemy * self)) 0x5bd1b0;
int (*Enemy::ptr::GetDisplayHealth)(Enemy * self) = (int (*)(Enemy * self)) 0x5bd370;
int (*Enemy::ptr::GetDisplayHealthMax)(Enemy * self) = (int (*)(Enemy * self)) 0x5bd380;
bool (*Enemy::ptr::_HideHeartsWhenStealthed)() = (bool (*)()) 0x0;
void (*Enemy::ptr::Render)(Enemy * self) = (void (*)(Enemy * self)) 0x5bd3a0;
bool (*Enemy::ptr::EnemiesHaveMovedClosestBeat)() = (bool (*)()) 0x5bd780;
Point * (*Enemy::ptr::BasicSeekTargetIncludeDiagonals)(Enemy * self, int targetX, int targetY) = (Point * (*)(Enemy * self, int targetX, int targetY)) 0x5bd970;
bool (*Enemy::ptr::IsAt)(Enemy * self, int xVal, int yVal) = (bool (*)(Enemy * self, int xVal, int yVal)) 0x5bdc30;
void (*Enemy::ptr::SetAllNonNecroDancerEnemyMoveDelays)(int cmd) = (void (*)(int cmd)) 0x5bdc70;
Point * (*Enemy::ptr::BasicSeekAvoidLiquids)(Enemy * self) = (Point * (*)(Enemy * self)) 0x5bdcc0;
Point * (*Enemy::ptr::DiagonalsOnlySeekTarget)(Enemy * self, int targetX, int targetY, bool bounceOnFail) = (Point * (*)(Enemy * self, int targetX, int targetY, bool bounceOnFail)) 0x5bdda0;
Point * (*Enemy::ptr::BasicSeekInWalls)(Enemy * self) = (Point * (*)(Enemy * self)) 0x5be0a0;
void (*Enemy::ptr::mark)(Enemy * self) = (void (*)(Enemy * self)) 0x5be180;
void (*Enemy::ptr::CSTR_Enemy)(Enemy * self) = (void (*)(Enemy * self)) 0x598840;
#endif

#ifdef __linux__
List16 * * Enemy::enemyList = (List16* *) 0x856a5a8;
XMLNode * * Enemy::randomizerXML = (XMLNode* *) 0x856a5a4;
Sprite * * Enemy::heartSmall = (Sprite* *) 0x856a5a0;
Sprite * * Enemy::heartEmptySmall = (Sprite* *) 0x856a59c;
bool * Enemy::killingAllEnemies = (bool*) 0x856a599;
bool * Enemy::enemiesPaused = (bool*) 0x856a598;
int * Enemy::enemiesFearfulDuration = (int*) 0x856a594;
int * Enemy::movesBehind = (int*) 0x856a590;
int * Enemy::lastWraithSpawnBeat = (int*) 0x856a58c;

bool (*Enemy::ptr::_CanBeDamaged)(Enemy * self, bool arg1, bool arg2) = (bool (*)(Enemy * self, bool arg1, bool arg2)) 0x8070610;
List16 * (*Enemy::ptr::GetDamagableEnemiesAt)(int xVal, int yVal, bool phasing, bool piercing, int attackSourceX, int attackSourceY, int dVal) = (List16 * (*)(int xVal, int yVal, bool phasing, bool piercing, int attackSourceX, int attackSourceY, int dVal)) 0x8194af0;
Enemy * (*Enemy::ptr::GetEnemyAt)(int xVal, int yVal, bool includeFalling) = (Enemy * (*)(int xVal, int yVal, bool includeFalling)) 0x816df10;
bool (*Enemy::ptr::IsStealthed)(Enemy * self) = (bool (*)(Enemy * self)) 0x8070620;
Enemy * (*Enemy::ptr::New)(Enemy * self) = (Enemy * (*)(Enemy * self)) 0x8170470;
XMLNode * (*Enemy::ptr::GetEnemyXML)(String * name, int level) = (XMLNode * (*)(String * name, int level)) 0x8174ee0;
bool (*Enemy::ptr::ExemptFromMysteryMode)(Enemy * self) = (bool (*)(Enemy * self)) 0x807af80;
void (*Enemy::ptr::InitImage)(Enemy * self, XMLNode * enemyXML, String * overrideSpriteName, int overrideFrameW, int overrideFrameH) = (void (*)(Enemy * self, XMLNode * enemyXML, String * overrideSpriteName, int overrideFrameW, int overrideFrameH)) 0x8120fe0;
void (*Enemy::ptr::ApplyMonkeyPaw)(Enemy * self) = (void (*)(Enemy * self)) 0x80d4050;
void (*Enemy::ptr::Init3)(Enemy * self, int xVal, int yVal, int l, String * name, String * overrideSpriteName, int overrideFrameW, int overrideFrameH) = (void (*)(Enemy * self, int xVal, int yVal, int l, String * name, String * overrideSpriteName, int overrideFrameW, int overrideFrameH)) 0x82a7530;
bool (*Enemy::ptr::IsDoubleHit)(Enemy * self, String * damageSource, Entity * hitter) = (bool (*)(Enemy * self, String * damageSource, Entity * hitter)) 0x80ce100;
void (*Enemy::ptr::SetDoubleHitData)(Enemy * self, String * damageSource, Entity * hitter) = (void (*)(Enemy * self, String * damageSource, Entity * hitter)) 0x80debf0;
int (*Enemy::ptr::GetNumStairLockingMinibosses)() = (int (*)()) 0x8175130;
int (*Enemy::ptr::GetNumPenaltyBoxMinibosses)() = (int (*)()) 0x8175170;
void (*Enemy::ptr::_RemoveFromEnemyList)(Enemy * arg1) = (void (*)(Enemy * arg1)) 0x81751d0;
void (*Enemy::ptr::Delete)(Enemy * self) = (void (*)(Enemy * self)) 0x8093680;
void (*Enemy::ptr::Die)(Enemy * self) = (void (*)(Enemy * self)) 0x83b50c0;
bool (*Enemy::ptr::DoesDamageKnockback)(Player * player, String * damageSource) = (bool (*)(Player * player, String * damageSource)) 0x81751f0;
void (*Enemy::ptr::_AfterHitHook2)(Enemy * self, int arg1, int arg2) = (void (*)(Enemy * self, int arg1, int arg2)) 0x8070630;
void (*Enemy::ptr::InitDirtJump)(Enemy * self, int xVal, int yVal) = (void (*)(Enemy * self, int xVal, int yVal)) 0x8070640;
void (*Enemy::ptr::CheckFamiliarTouch)(Enemy * self, int dir) = (void (*)(Enemy * self, int dir)) 0x80a3ce0;
int (*Enemy::ptr::MoveImmediate)(Enemy * self, int xVal, int yVal, String * movementSource) = (int (*)(Enemy * self, int xVal, int yVal, String * movementSource)) 0x83922a0;
void (*Enemy::ptr::Knockback)(Enemy * self, int dir) = (void (*)(Enemy * self, int dir)) 0x81030d0;
bool (*Enemy::ptr::Hit)(Enemy * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Enemy * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x83945a0;
void (*Enemy::ptr::MarkAllEnemiesAsVisible)() = (void (*)()) 0x8175370;
void (*Enemy::ptr::_DropItem2)() = (void (*)()) 0x8070690;
void (*Enemy::ptr::EarthquakeEnemiesSilentDamage)(int xVal, int yVal, int damageAmount) = (void (*)(int xVal, int yVal, int damageAmount)) 0x81753b0;
void (*Enemy::ptr::Charm)(int xVal, int yVal) = (void (*)(int xVal, int yVal)) 0x81755b0;
void (*Enemy::ptr::FreezeEnemiesNear)(int xVal, int yVal, int duration, bool allEnemies) = (void (*)(int xVal, int yVal, int duration, bool allEnemies)) 0x81756a0;
bool (*Enemy::ptr::_ImmuneToEarth)() = (bool (*)()) 0x80706a0;
void (*Enemy::ptr::ApplyMonkeyPawAll)() = (void (*)()) 0x8175770;
void (*Enemy::ptr::SetEnemiesToDropNoCoins)() = (void (*)()) 0x81757b0;
Enemy * (*Enemy::ptr::MakeEnemy)(int xVal, int yVal, int type) = (Enemy * (*)(int xVal, int yVal, int type)) 0x81cb8b0;
void (*Enemy::ptr::AdjustLordImage)(Enemy * self) = (void (*)(Enemy * self)) 0x80706b0;
void (*Enemy::ptr::MakeLord)(Enemy * self) = (void (*)(Enemy * self)) 0x8101190;
int (*Enemy::ptr::GetBaseType)(int fullType) = (int (*)(int fullType)) 0x822e040;
bool (*Enemy::ptr::_IsDisabled)(int arg1) = (bool (*)(int arg1)) 0x81757f0;
void (*Enemy::ptr::Cull)(Enemy * self) = (void (*)(Enemy * self)) 0x8070770;
int (*Enemy::ptr::_GetNumEnemies)() = (int (*)()) 0x8175800;
Enemy * (*Enemy::ptr::GetRandomEnemy)() = (Enemy * (*)()) 0x8175830;
bool (*Enemy::ptr::IsCullable)(Enemy * self) = (bool (*)(Enemy * self)) 0x807af00;
int (*Enemy::ptr::GetNumCullableEnemies)() = (int (*)()) 0x81758b0;
void (*Enemy::ptr::CullEnemiesDownTo)(int cullNum) = (void (*)(int cullNum)) 0x8295870;
bool (*Enemy::ptr::CanBeLord)(Enemy * self) = (bool (*)(Enemy * self)) 0x8070790;
void (*Enemy::ptr::CreateLord)() = (void (*)()) 0x8175900;
void (*Enemy::ptr::MoveSwarmEnemiesAwayFromStartLocation)() = (void (*)()) 0x81759a0;
void (*Enemy::ptr::SetAllEnemiesMinimumMoveDistance)(int dist) = (void (*)(int dist)) 0x8175b40;
String * (*Enemy::ptr::AddTagsToEnemyName)(String * eName, int size) = (String * (*)(String * eName, int size)) 0x8231990;
void (*Enemy::ptr::StartRandomizerRun)() = (void (*)()) 0x8175b80;
String * (*Enemy::ptr::GetEnemyNameHelper)(int type) = (String * (*)(int type)) 0x8177e30;
String * (*Enemy::ptr::GetEnemyName)(int type) = (String * (*)(int type)) 0x8246770;
Sprite * (*Enemy::ptr::LoadBestiarySprite)(int type) = (Sprite * (*)(int type)) 0x8179090;
void (*Enemy::ptr::KillAllEnemies)() = (void (*)()) 0x817d760;
void (*Enemy::ptr::CullAllEnemies)() = (void (*)()) 0x817d7b0;
void (*Enemy::ptr::KillAllNonConductorEnemies)() = (void (*)()) 0x817d7f0;
void (*Enemy::ptr::ResetAll)() = (void (*)()) 0x817d880;
int (*Enemy::ptr::GetNumArenaEnemiesRemaining)() = (int (*)()) 0x817d960;
void (*Enemy::ptr::KillAllNonNecroDancerEnemies)() = (void (*)()) 0x817d9a0;
void (*Enemy::ptr::MakeNonNecroDancerEnemiesIntoFormationDancers)() = (void (*)()) 0x817da10;
int (*Enemy::ptr::GetNumEnemiesIgnoreDancers)() = (int (*)()) 0x817da60;
void (*Enemy::ptr::SetEnemiesToDropNoCoinsOverride)() = (void (*)()) 0x817dab0;
bool (*Enemy::ptr::EnemiesHaveMovedThisBeat)() = (bool (*)()) 0x8256bb0;
bool (*Enemy::ptr::_EnemiesMovingThisFrame)() = (bool (*)()) 0x8263f10;
void (*Enemy::ptr::ImageFlipX)(Enemy * self, bool flipX) = (void (*)(Enemy * self, bool flipX)) 0x807e970;
Point * (*Enemy::ptr::RandomSeek)(Enemy * self, bool trueRandom, bool ignoreRingOfLuck) = (Point * (*)(Enemy * self, bool trueRandom, bool ignoreRingOfLuck)) 0x822fb40;
Point * (*Enemy::ptr::GetAdjacentTileThatIsClosestToTarget)(Enemy * self, int targetX, int targetY, int moveDistVal) = (Point * (*)(Enemy * self, int targetX, int targetY, int moveDistVal)) 0x80b53e0;
bool (*Enemy::ptr::CustomMoveCheck)(Enemy * self, int newX, int newY) = (bool (*)(Enemy * self, int newX, int newY)) 0x80707c0;
Point * (*Enemy::ptr::SelectOptimalMoveFrom)(Enemy * self, int targetX, int targetY, IntPointStack * moves, bool farthest, bool allowCollisions, bool allowLiquids, bool allowTraps, bool liquidsOnly, bool wallsOnly) = (Point * (*)(Enemy * self, int targetX, int targetY, IntPointStack * moves, bool farthest, bool allowCollisions, bool allowLiquids, bool allowTraps, bool liquidsOnly, bool wallsOnly)) 0x8131cb0;
Point * (*Enemy::ptr::GetClosestMovement)(Enemy * self, int targetX, int targetY, int dirVal, bool allowLiquids, bool allowTraps, bool liquidsOnly, bool wallsOnly) = (Point * (*)(Enemy * self, int targetX, int targetY, int dirVal, bool allowLiquids, bool allowTraps, bool liquidsOnly, bool wallsOnly)) 0x81bacc0;
Point * (*Enemy::ptr::BasicSeekTarget)(Enemy * self, int targetX, int targetY, int targetLastX, int targetLastY, bool ignoreLiquids, bool ignoreTraps, bool liquidsOnly, bool wallsOnly) = (Point * (*)(Enemy * self, int targetX, int targetY, int targetLastX, int targetLastY, bool ignoreLiquids, bool ignoreTraps, bool liquidsOnly, bool wallsOnly)) 0x8191d80;
Point * (*Enemy::ptr::BasicSeek)(Enemy * self) = (Point * (*)(Enemy * self)) 0x812ff10;
Point * (*Enemy::ptr::BasicSeekNoTraps)(Enemy * self) = (Point * (*)(Enemy * self)) 0x812fe20;
Point * (*Enemy::ptr::BasicSeekTargetIncludeDiagonalsdumb)(Enemy * self, int targetX, int targetY) = (Point * (*)(Enemy * self, int targetX, int targetY)) 0x81b0f90;
Point * (*Enemy::ptr::BasicSeekIncludeDiagonals)(Enemy * self) = (Point * (*)(Enemy * self)) 0x812fd60;
Point * (*Enemy::ptr::RandomIncludeDiagonals)(Enemy * self, bool trueRandom, bool ignoreRingOfLuck) = (Point * (*)(Enemy * self, bool trueRandom, bool ignoreRingOfLuck)) 0x8190c20;
Point * (*Enemy::ptr::GetMovementDirection)(Enemy * self) = (Point * (*)(Enemy * self)) 0x80b52b0;
bool (*Enemy::ptr::_ImmuneToFear)() = (bool (*)()) 0x80707d0;
Point * (*Enemy::ptr::GetFurthestMovement)(Enemy * self, int targetX, int targetY, bool allowCollisions, bool includeDiagonal) = (Point * (*)(Enemy * self, int targetX, int targetY, bool allowCollisions, bool includeDiagonal)) 0x81baa40;
Point * (*Enemy::ptr::BasicFlee)(Enemy * self, bool includeDiagonals) = (Point * (*)(Enemy * self, bool includeDiagonals)) 0x812f950;
int (*Enemy::ptr::AttemptMove)(Enemy * self, int xVal, int yVal) = (int (*)(Enemy * self, int xVal, int yVal)) 0x816ee00;
int (*Enemy::ptr::Move)(Enemy * self) = (int (*)(Enemy * self)) 0x807ea60;
void (*Enemy::ptr::AdvanceMovementDelay)(Enemy * self) = (void (*)(Enemy * self)) 0x8130200;
void (*Enemy::ptr::MoveSucceed)(Enemy * self, bool hitPlayer, bool moveDelayed) = (void (*)(Enemy * self, bool hitPlayer, bool moveDelayed)) 0x80707e0;
void (*Enemy::ptr::MoveFail)(Enemy * self) = (void (*)(Enemy * self)) 0x8134200;
void (*Enemy::ptr::MoveAll)() = (void (*)()) 0x817daf0;
void (*Enemy::ptr::Fall)(Enemy * self, bool keepMultiplier) = (void (*)(Enemy * self, bool keepMultiplier)) 0x837cdf0;
int (*Enemy::ptr::GetBeatNum)(Enemy * self) = (int (*)(Enemy * self)) 0x8256b80;
float (*Enemy::ptr::RelativeVideoTimeUntilBeat)(Enemy * self) = (float (*)(Enemy * self)) 0x8256ff0;
bool (*Enemy::ptr::IsBetweenFraction)(Enemy * self, float on, float off) = (bool (*)(Enemy * self, float on, float off)) 0x8070800;
void (*Enemy::ptr::AnimateToTheBeat)(Enemy * self) = (void (*)(Enemy * self)) 0x82c04c0;
void (*Enemy::ptr::Update)(Enemy * self) = (void (*)(Enemy * self)) 0x837d420;
int (*Enemy::ptr::GetDisplayHealth)(Enemy * self) = (int (*)(Enemy * self)) 0x8070870;
int (*Enemy::ptr::GetDisplayHealthMax)(Enemy * self) = (int (*)(Enemy * self)) 0x8070880;
bool (*Enemy::ptr::_HideHeartsWhenStealthed)() = (bool (*)()) 0x8070890;
void (*Enemy::ptr::Render)(Enemy * self) = (void (*)(Enemy * self)) 0x830aa30;
bool (*Enemy::ptr::EnemiesHaveMovedClosestBeat)() = (bool (*)()) 0x825ed90;
Point * (*Enemy::ptr::BasicSeekTargetIncludeDiagonals)(Enemy * self, int targetX, int targetY) = (Point * (*)(Enemy * self, int targetX, int targetY)) 0x81b0b70;
bool (*Enemy::ptr::IsAt)(Enemy * self, int xVal, int yVal) = (bool (*)(Enemy * self, int xVal, int yVal)) 0x80708a0;
void (*Enemy::ptr::SetAllNonNecroDancerEnemyMoveDelays)(int cmd) = (void (*)(int cmd)) 0x817de50;
Point * (*Enemy::ptr::BasicSeekAvoidLiquids)(Enemy * self) = (Point * (*)(Enemy * self)) 0x812fc70;
Point * (*Enemy::ptr::DiagonalsOnlySeekTarget)(Enemy * self, int targetX, int targetY, bool bounceOnFail) = (Point * (*)(Enemy * self, int targetX, int targetY, bool bounceOnFail)) 0x81b08c0;
Point * (*Enemy::ptr::BasicSeekInWalls)(Enemy * self) = (Point * (*)(Enemy * self)) 0x812fb80;
void (*Enemy::ptr::mark)(Enemy * self) = (void (*)(Enemy * self)) 0x80af9b0;
void (*Enemy::ptr::CSTR_Enemy)(Enemy * self) = (void (*)(Enemy * self)) 0x816d650;
#endif
#endif
