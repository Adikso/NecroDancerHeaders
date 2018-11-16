// Generated automatically. Do not edit!
#ifndef _Level_
#define _Level_
template<class T> class Array;
class Conjurer;
class ControllerPopUp;
class Enemy;
class Entity;
class ExitMap;
class IntList;
class IntMap;
class IntMap5;
class IntPointList;
class IntSet;
class LevelObject;
class List26;
class List37;
class List38;
class List48;
class Minimap;
class Pawnbroker;
class Point;
class PortalSeg;
class RNG;
class Rect;
class RenderableObject;
class Replay;
class RoomBase;
class RoomData;
class RoomWithDoor;
class Shriner;
class Sprite;
class Stack;
class StackEx;
class StackEx2;
class StackEx3;
class String;
class Tile;
class Transmogrifier;
class Trap;
class XMLNode;
#include "Object.hpp"

class Level : public Object  {
public:
    static bool * isReplaying;
    static ControllerPopUp * * popUpController;
    static int * popUpType;
    static bool * outsideBossChamber;
    static bool * pacifismModeOn;
    static bool * shopkeeperDead;
    static bool * shopkeeperFell;
    static int * placeLordOnLevel;
    static IntMap * * placeShrineOnLevel;
    static int * placeTransmogrifierOnLevel;
    static int * placeTransmogrifierOnDepth;
    static int * placeArenaOnLevel;
    static int * placeArenaOnDepth;
    static bool * placedArena;
    static int * placeGlassShopOnLevel;
    static int * placeGlassShopOnDepth;
    static int * placeBloodShopOnLevel;
    static int * placeBloodShopOnDepth;
    static int * placeFoodShopOnLevel;
    static int * placeFoodShopOnDepth;
    static int * placeConjurerOnLevel;
    static int * placeConjurerOnDepth;
    static int * placeShrinerOnLevel;
    static int * placeShrinerOnDepth;
    static int * placePawnbrokerOnLevel;
    static int * placePawnbrokerOnDepth;
    static int * randSeed;
    static int * nonDeterministicMSStart;
    static RNG * * wholeRunRNG;
    static RNG * * currentFloorRNG;
    static IntSet * * usedBosses;
    static bool * isSeededMode;
    static bool * isHardcoreMode;
    static bool * isDailyChallenge;
    static bool * isDDRMode;
    static bool * isSwarmMode;
    static bool * isNoReturnMode;
    static bool * isSoulMode;
    static bool * isHardMode;
    static bool * isFloorIsLavaMode;
    static bool * isPhasingMode;
    static bool * isRandomizerMode;
    static bool * isMysteryMode;
    static bool * isTrainingMode;
    static bool * isBeastmaster;
    static bool * playedVictoryCutscene;
    static int * mentorLevel;
    static bool * isStoryMode;
    static bool * isDeathlessMode;
    static int * deathlessWinCount;
    static bool * isAllCharactersMode;
    static bool * isAllCharactersDLCMode;
    static int * continuedRunCoinScore;
    static bool * isLevelEditor;
    static bool * lockedShopPlaced;
    static bool * secretRockRoomPlaced;
    static bool * isRunNoItemsNoShrines;
    static bool * placedUrnThisRun;
    static bool * usedCustomMusic;
    static int * shopkeeperGhostLevel;
    static int * shopkeeperGhostDepth;
    static IntMap5 * * tiles;
    static int * forceBoss;
    static ExitMap * * exits;
    static bool * creatingMap;
    static Replay * * replay;
    static int * bossNumber;
    static bool * isAnyTar;
    static float * zone3DividingLineX;
    static float * zone3DividingLineY;
    static bool * isConductorLevel;
    static IntMap5 * * pendingTiles;
    static Transmogrifier * * transmogrifier;
    static Conjurer * * conjurer;
    static bool * flawlessVictory;
    static int * secretAtX;
    static int * secretAtY;
    static IntList * * triggerList;
    static int * levelConstraintX;
    static int * levelConstraintY;
    static int * levelConstraintW;
    static int * levelConstraintH;
    static int * levelConstraintNum;
    static int * shopX;
    static int * shopY;
    static int * shopW;
    static int * shopH;
    static int * lastCreatedRoomType;
    static int * minLevelX;
    static int * minLevelY;
    static int * maxLevelX;
    static int * maxLevelY;
    static int * minLevelMinimapX;
    static int * minLevelMinimapY;
    static int * maxLevelMinimapX;
    static int * maxLevelMinimapY;
    static bool * mapLightValuesInitialized;
    static int * mapLightValuesCachedFrame;
    static Minimap * * minimap;
    static int * arenaNum;
    static int * specialRoomEntranceX;
    static int * specialRoomEntranceY;
    static Shriner * * shriner;
    static bool * skipNextPenaltyBox;
    static bool * enemiesDropSingleCoinForThisLevel;
    static List38 * * minibossFormerWall;
    static Pawnbroker * * pawnbroker;
    static bool * isAllCharsRunNoItemsNoShrines;
    static Array<bool> * * allCharsCompletion;
    static Array<bool> * * allCharsCompletionDLC;
    static bool * isLevelEnding;
    static StackEx * * previousLevelUnkilledStairLockingMinibosses;
    static String * * todaysRandSeedString;
    static String * * randSeedString;
    static List48 * * rooms;
    static bool * addKeyInSecretChest;
    static bool * startedShrinerFight;
    static int * carveX;
    static int * carveY;
    static bool * placedAdditionalRedChest;
    static bool * placedAdditionalWhiteChest;
    static bool * placedAdditionalBlackChest;
    static bool * wasMinibossLockedInBattle;
    static RoomData * * firstRoom;
    static bool * levelJustStarted;
    static List26 * * charactersJustUnlocked;
    static Stack * * zoneOrder;
    static String * * justUnlocked;
    static StackEx * * previousLevelMinibosses;
    static bool * debugForceMonstrousShop;
    static List37 * * tempTileWalk;
    static int * chestsStillToPlace;
    static RoomBase * * hallwayZone5;
    static bool * quickRestart;
    static int * practiceEnemyNum;
    static int * dailyChallengeX;
    static int * dailyChallengeY;
    static int * lastTileCount;
    static IntPointList * * tileObstructionList;
    static Sprite * * exitArrow;
    static float * exitArrowX;
    static float * exitArrowY;
    static Array<float> * * constMapLightValues;
    static Array<float> * * mapLightValues;

    // Wrappers
    inline static void ShowModPopup(String * imageName) { ptr::ShowModPopup(imageName); }
    inline static void ResetSpecialRoomVariables() { ptr::ResetSpecialRoomVariables(); }
    inline static void DoRestartCommon(bool continuedRun, bool cancelFade) { ptr::DoRestartCommon(continuedRun, cancelFade); }
    inline static int _GetMaxDepth() { return ptr::_GetMaxDepth(); }
    inline static bool HaveFinalBoss() { return ptr::HaveFinalBoss(); }
    inline static Point * GetExitValue(int xVal, int yVal) { return ptr::GetExitValue(xVal, yVal); }
    inline static bool _IsExit(int arg1, int arg2) { return ptr::_IsExit(arg1, arg2); }
    inline static bool IsLockedExit(int xVal, int yVal) { return ptr::IsLockedExit(xVal, yVal); }
    inline static void _RecordRand(int arg1, int arg2) { ptr::_RecordRand(arg1, arg2); }
    inline static Tile * GetTileAt(int xVal, int yVal) { return ptr::GetTileAt(xVal, yVal); }
    inline static int GetTileTypeAt(int xVal, int yVal) { return ptr::GetTileTypeAt(xVal, yVal); }
    inline static bool _IsWireAt(int arg1, int arg2) { return ptr::_IsWireAt(arg1, arg2); }
    inline static bool IsWaterOrTarAt(int xVal, int yVal) { return ptr::IsWaterOrTarAt(xVal, yVal); }
    inline static bool _IsWaterAt(int arg1, int arg2) { return ptr::_IsWaterAt(arg1, arg2); }
    inline static bool _IsZone(int arg1) { return ptr::_IsZone(arg1); }
    inline static bool IsIcePartOfLevel(int xVal, int yVal) { return ptr::IsIcePartOfLevel(xVal, yVal); }
    inline static bool IsFinalBoss() { return ptr::IsFinalBoss(); }
    inline static bool IsWallAt(int xVal, int yVal, bool destructibleOnly, bool torchlessOnly) { return ptr::IsWallAt(xVal, yVal, destructibleOnly, torchlessOnly); }
    inline static bool _IsDeepWaterAt(int arg1, int arg2) { return ptr::_IsDeepWaterAt(arg1, arg2); }
    inline static void SplashWater(int xVal, int yVal, bool destroyWater) { ptr::SplashWater(xVal, yVal, destroyWater); }
    inline static bool _IsIceAt(int arg1, int arg2) { return ptr::_IsIceAt(arg1, arg2); }
    inline static void BreakIce(int xVal, int yVal) { ptr::BreakIce(xVal, yVal); }
    inline static bool IsPeaceful() { return ptr::IsPeaceful(); }
    inline static void ResetCosts() { ptr::ResetCosts(); }
    inline static bool _IsConductorWireAt(int arg1, int arg2) { return ptr::_IsConductorWireAt(arg1, arg2); }
    inline static bool _IsConductorWire2At(int arg1, int arg2) { return ptr::_IsConductorWire2At(arg1, arg2); }
    inline static bool _IsMagneticFloorAt(int arg1, int arg2) { return ptr::_IsMagneticFloorAt(arg1, arg2); }
    inline static bool _IsNonPracticeBossLevel() { return ptr::_IsNonPracticeBossLevel(); }
    inline static bool IsBossLevel() { return ptr::IsBossLevel(); }
    inline static Tile * PlaceTileRemovingExistingTiles(int xVal, int yVal, int tileType, bool pending, int tilesetOverride, bool fromEarthSpell) { return ptr::PlaceTileRemovingExistingTiles(xVal, yVal, tileType, pending, tilesetOverride, fromEarthSpell); }
    inline static bool _IsTileEmpty(int arg1, int arg2) { return ptr::_IsTileEmpty(arg1, arg2); }
    inline static bool CreateRoom(int xVal, int yVal, int wVal, int hVal, bool pending, int roomType, int originX, int originY, int originX2, int originY2, bool wideCorridor, int wallType, bool allowWallOverlap, bool allowWaterTarOoze) { return ptr::CreateRoom(xVal, yVal, wVal, hVal, pending, roomType, originX, originY, originX2, originY2, wideCorridor, wallType, allowWallOverlap, allowWaterTarOoze); }
    inline static bool IsFloorAt(int xVal, int yVal) { return ptr::IsFloorAt(xVal, yVal); }
    inline static void RecalcLevelBoundaries() { ptr::RecalcLevelBoundaries(); }
    inline static bool _IsCustomLevelNonBoss() { return ptr::_IsCustomLevelNonBoss(); }
    inline static bool _IsSingleZoneMode() { return ptr::_IsSingleZoneMode(); }
    inline static void _SkipNextPenaltyBox() { ptr::_SkipNextPenaltyBox(); }
    inline static void ClearMinibossWall() { ptr::ClearMinibossWall(); }
    inline static bool _IsLavaAt(int arg1, int arg2) { return ptr::_IsLavaAt(arg1, arg2); }
    inline static float DistanceFromZone3DividingLine(int xVal, int yVal) { return ptr::DistanceFromZone3DividingLine(xVal, yVal); }
    inline static void TransmogrifySlot(String * slotName, Entity * ent) { ptr::TransmogrifySlot(slotName, ent); }
    inline static void ConjureSlot(String * slotName, Entity * ent) { ptr::ConjureSlot(slotName, ent); }
    inline static void PawnSlot(String * slotName, Entity * ent) { ptr::PawnSlot(slotName, ent); }
    inline static void TransmogrifyWeaponToType(Entity * ent, int type) { ptr::TransmogrifyWeaponToType(ent, type); }
    inline static String * GetNPCSaleItem(int npcNum, int slotNum, String * exclude1, String * exclude2) { return ptr::GetNPCSaleItem(npcNum, slotNum, exclude1, exclude2); }
    inline static void GenerateJanitorItems() { ptr::GenerateJanitorItems(); }
    inline static void RemoveTileAt(int xVal, int yVal) { ptr::RemoveTileAt(xVal, yVal); }
    inline static void _SetMagicBarrierAt(int arg1, int arg2, bool arg3) { ptr::_SetMagicBarrierAt(arg1, arg2, arg3); }
    inline static void SetMagicBarrier(bool on) { ptr::SetMagicBarrier(on); }
    inline static bool IsDoorAt(int xVal, int yVal) { return ptr::IsDoorAt(xVal, yVal); }
    inline static void CloseInOuterWalls() { ptr::CloseInOuterWalls(); }
    inline static int ActivateTrigger(int triggerNum, Entity * ent, RenderableObject * target) { return ptr::ActivateTrigger(triggerNum, ent, target); }
    inline static bool IsNormalFloorAt(int xVal, int yVal) { return ptr::IsNormalFloorAt(xVal, yVal); }
    inline static void Earthquake(int xVal, int yVal) { ptr::Earthquake(xVal, yVal); }
    inline static bool _IsHotCoalAt(int arg1, int arg2) { return ptr::_IsHotCoalAt(arg1, arg2); }
    inline static void PlaceIceTileAt(int xVal, int yVal) { ptr::PlaceIceTileAt(xVal, yVal); }
    inline static void FreezeTilesNear(int xVal, int yVal, bool allTiles) { ptr::FreezeTilesNear(xVal, yVal, allTiles); }
    inline static bool _AllowEarthSpell() { return ptr::_AllowEarthSpell(); }
    inline static Point * GetStandardExitCoords() { return ptr::GetStandardExitCoords(); }
    inline static bool _AllCharsAnyComplete() { return ptr::_AllCharsAnyComplete(); }
    inline static bool _AllCharsDLCAnyComplete() { return ptr::_AllCharsDLCAnyComplete(); }
    inline static int GetSingleZoneModeFinalBossZone() { return ptr::GetSingleZoneModeFinalBossZone(); }
    inline static bool IsFinalBossZone() { return ptr::IsFinalBossZone(); }
    inline static void MakeHelper() { ptr::MakeHelper(); }
    inline static bool IsSeededMode(int mode) { return ptr::IsSeededMode(mode); }
    inline static void DeleteMap() { ptr::DeleteMap(); }
    inline static void InitNewMap(bool saveGameData) { ptr::InitNewMap(saveGameData); }
    inline static bool IsSecretRoom(int rmType) { return ptr::IsSecretRoom(rmType); }
    inline static void CarveCorridorTile(int xVal, int yVal, bool horiz, bool pending, bool skipWalls, int roomType, bool wideCorridor) { ptr::CarveCorridorTile(xVal, yVal, horiz, pending, skipWalls, roomType, wideCorridor); }
    inline static void AddExit(int xVal, int yVal, int levelPointer, int zonePointer) { ptr::AddExit(xVal, yVal, levelPointer, zonePointer); }
    inline static bool _IsNotIndestructibleWallAt(int arg1, int arg2) { return ptr::_IsNotIndestructibleWallAt(arg1, arg2); }
    inline static void CreateIndestructibleBorder() { ptr::CreateIndestructibleBorder(); }
    inline static void CreateTutorialMap() { ptr::CreateTutorialMap(); }
    inline static void _DisableLevelConstraints() { ptr::_DisableLevelConstraints(); }
    inline static void PaintTriggerInterior(int x, int y, int w, int h, int trigger) { ptr::PaintTriggerInterior(x, y, w, h, trigger); }
    inline static Point * GetRandomOffsetPoint() { return ptr::GetRandomOffsetPoint(); }
    inline static bool IsExitAt(int x, int y) { return ptr::IsExitAt(x, y); }
    inline static void CreateFinalBossBattleConductor() { ptr::CreateFinalBossBattleConductor(); }
    inline static void CreateFinalBossBattle3() { ptr::CreateFinalBossBattle3(); }
    inline static void CreateFinalBossBattle2() { ptr::CreateFinalBossBattle2(); }
    inline static void UnlockChar(int characterID) { ptr::UnlockChar(characterID); }
    inline static void CreateFinalBossBattle() { ptr::CreateFinalBossBattle(); }
    inline static bool IsFreeLevelForSpecialRoom(int tempLevel, int tempDepth) { return ptr::IsFreeLevelForSpecialRoom(tempLevel, tempDepth); }
    inline static void CreateExit(int exitX, int exitY) { ptr::CreateExit(exitX, exitY); }
    inline static bool IsWireLikeAt(int x, int y) { return ptr::IsWireLikeAt(x, y); }
    inline static bool _IsFloorAdjacent(int arg1, int arg2) { return ptr::_IsFloorAdjacent(arg1, arg2); }
    inline static void AddCrackedWall(int roomType) { ptr::AddCrackedWall(roomType); }
    inline static String * RandomFood() { return ptr::RandomFood(); }
    inline static void PlaceSecondarySpecialShop(bool useBloodCost, bool isFoodShop) { ptr::PlaceSecondarySpecialShop(useBloodCost, isFoodShop); }
    inline static void AddSpecialRoom(int roomType, bool addCrack) { ptr::AddSpecialRoom(roomType, addCrack); }
    inline static void CreateSwarmMap() { ptr::CreateSwarmMap(); }
    inline static RoomData * PlaceFirstRoom() { return ptr::PlaceFirstRoom(); }
    inline static void DumpMap() { ptr::DumpMap(); }
    inline static void FillTiles(Rect * rect, int tileType, int tileTypeEdge) { ptr::FillTiles(rect, tileType, tileTypeEdge); }
    inline static void PlaceConnectedWireDoor(Point * p) { ptr::PlaceConnectedWireDoor(p); }
    inline static bool IsZone5RoomLegal(Rect * loc) { return ptr::IsZone5RoomLegal(loc); }
    inline static RoomWithDoor * PlaceRoomZone5(PortalSeg * pseg, int width, int height, int minEntryDist) { return ptr::PlaceRoomZone5(pseg, width, height, minEntryDist); }
    inline static bool IsDoorAdjacent(int x, int y) { return ptr::IsDoorAdjacent(x, y); }
    inline static void PlaceShopItemsAt(int tmpX, int tmpY, Rect * door) { ptr::PlaceShopItemsAt(tmpX, tmpY, door); }
    inline static void CreateRoomZone5(RoomWithDoor * rm, int roomType) { ptr::CreateRoomZone5(rm, roomType); }
    inline static RoomWithDoor * PlaceRoomZone52(StackEx3 * portalSegs, int width, int height, int minEntryDist, int roomType) { return ptr::PlaceRoomZone52(portalSegs, width, height, minEntryDist, roomType); }
    inline static bool IsWallAdjacent8(int xVal, int yVal) { return ptr::IsWallAdjacent8(xVal, yVal); }
    inline static bool PlaceWire(Point * src, Point * dst) { return ptr::PlaceWire(src, dst); }
    inline static void _DecorateTerminalZone5(Point * arg1) { ptr::_DecorateTerminalZone5(arg1); }
    inline static bool IsTileTypeAdjacent(int xVal, int yVal, int tempType) { return ptr::IsTileTypeAdjacent(xVal, yVal, tempType); }
    inline static void RandomWalkOfTempTiles(int xVal, int yVal, int distCounter) { ptr::RandomWalkOfTempTiles(xVal, yVal, distCounter); }
    inline static void PadWalls() { ptr::PadWalls(); }
    inline static void ProcessSpecialRoom() { ptr::ProcessSpecialRoom(); }
    inline static bool _IsCorridorOrRoomWallAt(int arg1, int arg2) { return ptr::_IsCorridorOrRoomWallAt(arg1, arg2); }
    inline static bool IsSurroundedByDestructibleWalls(int xVal, int yVal) { return ptr::IsSurroundedByDestructibleWalls(xVal, yVal); }
    inline static bool IsCrackedWallAt(int xVal, int yVal) { return ptr::IsCrackedWallAt(xVal, yVal); }
    inline static bool IsCrackedWallAdjacent(int xVal, int yVal) { return ptr::IsCrackedWallAdjacent(xVal, yVal); }
    inline static void PlaceSecretRooms(int numRooms) { ptr::PlaceSecretRooms(numRooms); }
    inline static void FillVault(RoomData * tmpRoom) { ptr::FillVault(tmpRoom); }
    inline static Point * GetRandPointInRoomWithOptions(RoomBase * room, bool skipCollisions, bool skipExit, bool skipTraps, bool skipWater, bool nearWallIsOk, bool secretRoomOK) { return ptr::GetRandPointInRoomWithOptions(room, skipCollisions, skipExit, skipTraps, skipWater, nearWallIsOk, secretRoomOK); }
    inline static Point * GetRandPointInRoomWithOptions2(int xVal, int yVal, int wVal, int hVal, bool skipCollisions, bool skipExit, bool skipTraps, bool skipWater, bool nearWallIsOk, bool secretRoomOK) { return ptr::GetRandPointInRoomWithOptions2(xVal, yVal, wVal, hVal, skipCollisions, skipExit, skipTraps, skipWater, nearWallIsOk, secretRoomOK); }
    inline static int _GetAppropriateCoins() { return ptr::_GetAppropriateCoins(); }
    inline static void PutCrateOrBarrel(int x, int y) { ptr::PutCrateOrBarrel(x, y); }
    inline static void MakeInvisibleChestAt(int tmpX, int tmpY) { ptr::MakeInvisibleChestAt(tmpX, tmpY); }
    inline static bool AllowSpirit() { return ptr::AllowSpirit(); }
    inline static bool FillSecretRoomsZone4() { return ptr::FillSecretRoomsZone4(); }
    inline static bool FillSecretRoomsZone2() { return ptr::FillSecretRoomsZone2(); }
    inline static bool MaybeForbidTrapdoor() { return ptr::MaybeForbidTrapdoor(); }
    inline static bool FillSecretRoomsZone1() { return ptr::FillSecretRoomsZone1(); }
    inline static bool FillSecretRooms() { return ptr::FillSecretRooms(); }
    inline static void AddStone() { ptr::AddStone(); }
    inline static bool IsCorridorFloorOrDoorAdjacent(int xVal, int yVal) { return ptr::IsCorridorFloorOrDoorAdjacent(xVal, yVal); }
    inline static Trap * PlaceTrapInRoom(int xVal, int yVal, int wVal, int hVal, int trapType, int bounceDir, Trap * twoAwayTrap) { return ptr::PlaceTrapInRoom(xVal, yVal, wVal, hVal, trapType, bounceDir, twoAwayTrap); }
    inline static void PlaceTrapZone5(int xVal, int yVal, int wVal, int hVal) { ptr::PlaceTrapZone5(xVal, yVal, wVal, hVal); }
    inline static void PlaceTrapsZone5() { ptr::PlaceTrapsZone5(); }
    inline static void PlaceTrapZone4(int xVal, int yVal, int wVal, int hVal) { ptr::PlaceTrapZone4(xVal, yVal, wVal, hVal); }
    inline static void PlaceTrapsZone4() { ptr::PlaceTrapsZone4(); }
    inline static void PlaceTrapZone3(int xVal, int yVal, int wVal, int hVal) { ptr::PlaceTrapZone3(xVal, yVal, wVal, hVal); }
    inline static void PlaceTrapsZone3() { ptr::PlaceTrapsZone3(); }
    inline static void PlaceTrapsZone2() { ptr::PlaceTrapsZone2(); }
    inline static void PlaceTrapsZone1() { ptr::PlaceTrapsZone1(); }
    inline static void PlaceTraps() { ptr::PlaceTraps(); }
    inline static XMLNode * GetHardModeXML() { return ptr::GetHardModeXML(); }
    inline static Enemy * PlaceMinibossOfShapeAt(int newMiniboss, int xVal, int yVal) { return ptr::PlaceMinibossOfShapeAt(newMiniboss, xVal, yVal); }
    inline static void _PostProcessMiniboss(Enemy * arg1) { ptr::_PostProcessMiniboss(arg1); }
    inline static void PlaceAppropriateMinibosses(RoomBase * room) { ptr::PlaceAppropriateMinibosses(room); }
    inline static void PlaceShopkeeperGhostIfNeededAt(int xVal, int yVal) { ptr::PlaceShopkeeperGhostIfNeededAt(xVal, yVal); }
    inline static void _PlaceExitRoomMiniboss(RoomBase * arg1) { ptr::_PlaceExitRoomMiniboss(arg1); }
    inline static int _GetZone3ElementalType(int arg1, int arg2) { return ptr::_GetZone3ElementalType(arg1, arg2); }
    inline static int _GetZone3YetiHellhoundType(int arg1, int arg2) { return ptr::_GetZone3YetiHellhoundType(arg1, arg2); }
    inline static int _GetZone3BeetleType(int arg1, int arg2) { return ptr::_GetZone3BeetleType(arg1, arg2); }
    inline static void PlaceRareEnemies(RoomBase * room, bool hasExit) { ptr::PlaceRareEnemies(room, hasExit); }
    inline static Point * GetRandPointInRoomOfTileType(RoomBase * room, int tileType, bool skipCollisions) { return ptr::GetRandPointInRoomOfTileType(room, tileType, skipCollisions); }
    inline static Point * GetRandPointInRoomOfTileType2(int xVal, int yVal, int wVal, int hVal, int tileType, bool skipCollisions) { return ptr::GetRandPointInRoomOfTileType2(xVal, yVal, wVal, hVal, tileType, skipCollisions); }
    inline static int GetHardModeExtraEnemies() { return ptr::GetHardModeExtraEnemies(); }
    inline static int GetExtraEnemiesBase() { return ptr::GetExtraEnemiesBase(); }
    inline static void PutVariedEnemiesZone5(StackEx2 * pts) { ptr::PutVariedEnemiesZone5(pts); }
    inline static void PutEnemyZone5(int x, int y) { ptr::PutEnemyZone5(x, y); }
    inline static void PutRoomEnemiesZone5(RoomBase * room, bool hasExit) { ptr::PutRoomEnemiesZone5(room, hasExit); }
    inline static void PlaceRandomEnemyForTempo(int xVal, int yVal) { ptr::PlaceRandomEnemyForTempo(xVal, yVal); }
    inline static void PlaceEnemiesZone5() { ptr::PlaceEnemiesZone5(); }
    inline static Enemy * PlaceGargoyle(int xVal, int yVal, int l) { return ptr::PlaceGargoyle(xVal, yVal, l); }
    inline static void PlaceEnemiesZone4() { ptr::PlaceEnemiesZone4(); }
    inline static Enemy * PlaceZone3Cauldron(int xVal, int yVal) { return ptr::PlaceZone3Cauldron(xVal, yVal); }
    inline static Enemy * PlaceZone3YetiHellhound(int xVal, int yVal) { return ptr::PlaceZone3YetiHellhound(xVal, yVal); }
    inline static Enemy * PlaceZone3Elemental(int xVal, int yVal) { return ptr::PlaceZone3Elemental(xVal, yVal); }
    inline static Enemy * PlaceZone3Slime(int xVal, int yVal) { return ptr::PlaceZone3Slime(xVal, yVal); }
    inline static Enemy * PlaceZone3Beetle(int xVal, int yVal) { return ptr::PlaceZone3Beetle(xVal, yVal); }
    inline static void PlaceEnemiesZone3() { ptr::PlaceEnemiesZone3(); }
    inline static void PlaceEnemiesZone2() { ptr::PlaceEnemiesZone2(); }
    inline static void PlaceEnemiesZone1() { ptr::PlaceEnemiesZone1(); }
    inline static void PlaceEnemies() { ptr::PlaceEnemies(); }
    inline static Point * FindTileOfType(int tileType, bool ignoreCrackedWalls) { return ptr::FindTileOfType(tileType, ignoreCrackedWalls); }
    inline static float GetDistanceToNearestTorch(RenderableObject * r) { return ptr::GetDistanceToNearestTorch(r); }
    inline static void PlaceTorchesAnywhere() { ptr::PlaceTorchesAnywhere(); }
    inline static bool IsCorridorFloorAt(int xVal, int yVal) { return ptr::IsCorridorFloorAt(xVal, yVal); }
    inline static void PlaceCrateOrBarrel() { ptr::PlaceCrateOrBarrel(); }
    inline static bool DoWePlaceAdditionalChestThisLevel() { return ptr::DoWePlaceAdditionalChestThisLevel(); }
    inline static bool PlaceAdditionalChestAt(int xVal, int yVal) { return ptr::PlaceAdditionalChestAt(xVal, yVal); }
    inline static void PlaceZoneAppropriateNumberOfDiamondsAt(int xVal, int yVal) { ptr::PlaceZoneAppropriateNumberOfDiamondsAt(xVal, yVal); }
    inline static void PlaceChests(bool freeBroadSword) { ptr::PlaceChests(freeBroadSword); }
    inline static void PlaceResourceWall() { ptr::PlaceResourceWall(); }
    inline static void PlaceLockedChests() { ptr::PlaceLockedChests(); }
    inline static bool _IsShrineFriendlyPoint(int arg1, int arg2) { return ptr::_IsShrineFriendlyPoint(arg1, arg2); }
    inline static Point * GetShrinePoint() { return ptr::GetShrinePoint(); }
    inline static void PlaceShrine() { ptr::PlaceShrine(); }
    inline static bool CreateMapZone5(bool recursive) { return ptr::CreateMapZone5(recursive); }
    inline static RoomData * PlaceRoomZone4(int roomType) { return ptr::PlaceRoomZone4(roomType); }
    inline static void AddHarderStone() { ptr::AddHarderStone(); }
    inline static void CheckMapConsistency() { ptr::CheckMapConsistency(); }
    inline static void PlaceNocturnaArea() { ptr::PlaceNocturnaArea(); }
    inline static bool CreateMapZone4(bool recursive) { return ptr::CreateMapZone4(recursive); }
    inline static bool CarveNewCorridor(int moveX, int moveY, bool horiz, bool pending, bool secondaryCarve, int roomType, bool wideCorridor) { return ptr::CarveNewCorridor(moveX, moveY, horiz, pending, secondaryCarve, roomType, wideCorridor); }
    inline static RoomData * PlaceRoomZone3(int roomType, RoomData * roomToAttachTo) { return ptr::PlaceRoomZone3(roomType, roomToAttachTo); }
    inline static bool PlaceExit(RoomData * rdExit) { return ptr::PlaceExit(rdExit); }
    inline static void RemoveSomeWallsAwayFromCorridors(float percentToRemove, bool includeCorridors, int maxHealth) { ptr::RemoveSomeWallsAwayFromCorridors(percentToRemove, includeCorridors, maxHealth); }
    inline static void WidenCorridors() { ptr::WidenCorridors(); }
    inline static bool IsTrapOrExitAbove(int xVal, int yVal) { return ptr::IsTrapOrExitAbove(xVal, yVal); }
    inline static void AddSomePillarsInOpenSpace() { ptr::AddSomePillarsInOpenSpace(); }
    inline static Point * GetRandomWallInRoom(int xVal, int yVal, int wVal, int hVal) { return ptr::GetRandomWallInRoom(xVal, yVal, wVal, hVal); }
    inline static bool CreateMapZone3() { return ptr::CreateMapZone3(); }
    inline static RoomData * PlaceRoomZone2(int roomType, RoomData * roomToAttachTo) { return ptr::PlaceRoomZone2(roomType, roomToAttachTo); }
    inline static bool CreateMapZone2() { return ptr::CreateMapZone2(); }
    inline static RoomData * PlaceRoomZone1(int roomType, RoomData * roomToAttachTo) { return ptr::PlaceRoomZone1(roomType, roomToAttachTo); }
    inline static bool CreateMapZone1() { return ptr::CreateMapZone1(); }
    inline static bool IsPassable() { return ptr::IsPassable(); }
    inline static bool WantPenaltyBox() { return ptr::WantPenaltyBox(); }
    inline static void PlacePenaltyBoxEnemies() { ptr::PlacePenaltyBoxEnemies(); }
    inline static void AddMinibossWall(int xVal, int yVal, int wallType) { ptr::AddMinibossWall(xVal, yVal, wallType); }
    inline static bool CreateMap(LevelObject * levelObj) { return ptr::CreateMap(levelObj); }
    inline static bool _AllCharsAllComplete() { return ptr::_AllCharsAllComplete(); }
    inline static bool _AllCharsDLCAllComplete() { return ptr::_AllCharsDLCAllComplete(); }
    inline static int GetInitialZone() { return ptr::GetInitialZone(); }
    inline static void DoQuickRestart(bool continuedRun, bool showPopups, bool playIntroCutscene) { ptr::DoQuickRestart(continuedRun, showPopups, playIntroCutscene); }
    inline static void PutFutureStair(int x, int y) { ptr::PutFutureStair(x, y); }
    inline static void MakeAllWallsUnbreakable() { ptr::MakeAllWallsUnbreakable(); }
    inline static void CreateCharSelect() { ptr::CreateCharSelect(); }
    inline static void CreateBeastmasterZone1() { ptr::CreateBeastmasterZone1(); }
    inline static void CreateBeastmasterZone2() { ptr::CreateBeastmasterZone2(); }
    inline static void CreateBeastmasterZone3() { ptr::CreateBeastmasterZone3(); }
    inline static void CreateBeastmasterZone4() { ptr::CreateBeastmasterZone4(); }
    inline static void PutBeastmasterStairs(int x, int y, String * stairName, String * enemyName, int enemyType, int enemyId, String * stairNamePrefix) { ptr::PutBeastmasterStairs(x, y, stairName, enemyName, enemyType, enemyId, stairNamePrefix); }
    inline static void CreateBeastmasterZone5() { ptr::CreateBeastmasterZone5(); }
    inline static void PutMinibossStair(int x, int y, String * minibossName, int enemyType, String * label, int labelXOff) { ptr::PutMinibossStair(x, y, minibossName, enemyType, label, labelXOff); }
    inline static void CreateBossmasterMinibosses() { ptr::CreateBossmasterMinibosses(); }
    inline static void PutBossStair(int x, int y, String * bossName, int enemyType, int zone, String * label, int labelXOff) { ptr::PutBossStair(x, y, bossName, enemyType, zone, label, labelXOff); }
    inline static void CreateBossmasterBosses() { ptr::CreateBossmasterBosses(); }
    inline static void CreateExtraModesSelect() { ptr::CreateExtraModesSelect(); }
    inline static void EnsureBossTraining(String * name) { ptr::EnsureBossTraining(name); }
    inline static bool QueryHarderBosses() { return ptr::QueryHarderBosses(); }
    inline static void TrySpawnBossMinibossAt(int x, int y, int etype) { ptr::TrySpawnBossMinibossAt(x, y, etype); }
    inline static void BossMaybeMinibossesAt(int x1, int y1, int x2, int y2) { ptr::BossMaybeMinibossesAt(x1, y1, x2, y2); }
    inline static void CreateBossBattle1() { ptr::CreateBossBattle1(); }
    inline static void CreateBossBattle2() { ptr::CreateBossBattle2(); }
    inline static void CreateBossBattle3() { ptr::CreateBossBattle3(); }
    inline static void CreateBossBattle4() { ptr::CreateBossBattle4(); }
    inline static void CreateBossBattle5() { ptr::CreateBossBattle5(); }
    inline static void CreateBossBattle9() { ptr::CreateBossBattle9(); }
    inline static void CreateBossBattleFrankensteinway() { ptr::CreateBossBattleFrankensteinway(); }
    inline static void CreateBossBattle() { ptr::CreateBossBattle(); }
    inline static void CreateTrainingMap() { ptr::CreateTrainingMap(); }
    inline static void CreateTestMap() { ptr::CreateTestMap(); }
    inline static void CreateDungeonMaster() { ptr::CreateDungeonMaster(); }
    inline static void CreateMerlin() { ptr::CreateMerlin(); }
    inline static void CreateHephaestus() { ptr::CreateHephaestus(); }
    inline static void CreateBeastmaster() { ptr::CreateBeastmaster(); }
    inline static void CreateBossmaster() { ptr::CreateBossmaster(); }
    inline static void CreateWeaponmaster() { ptr::CreateWeaponmaster(); }
    inline static void CreateTrainer() { ptr::CreateTrainer(); }
    inline static void CreateJanitor() { ptr::CreateJanitor(); }
    inline static void CreateDiamondDealer() { ptr::CreateDiamondDealer(); }
    inline static void CreateLobby() { ptr::CreateLobby(); }
    inline static void CreateAllCharsSelect() { ptr::CreateAllCharsSelect(); }
    inline static void CreateAllCharsDLCSelect() { ptr::CreateAllCharsDLCSelect(); }
    inline static void GenerateHardcoreZoneOrder() { ptr::GenerateHardcoreZoneOrder(); }
    inline static void LoadLevelSong(LevelObject * levelObj) { ptr::LoadLevelSong(levelObj); }
    inline static void NewLevel(int level, int zone, int playerID, bool inEditor, LevelObject * levelObj, bool continuedRun) { ptr::NewLevel(level, zone, playerID, inEditor, levelObj, continuedRun); }
    inline static void DoRestart() { ptr::DoRestart(); }
    inline static IntPointList * GetTileObstructionList(bool includeOffscreen) { return ptr::GetTileObstructionList(includeOffscreen); }
    inline static void RefreshLineOfSightTiles() { ptr::RefreshLineOfSightTiles(); }
    inline static bool _IsTarAt(int arg1, int arg2) { return ptr::_IsTarAt(arg1, arg2); }
    inline static String * GetTileFlyawayAt(int xVal, int yVal) { return ptr::GetTileFlyawayAt(xVal, yVal); }
    inline static void _ModifyReplayBeatOffset(int arg1) { ptr::_ModifyReplayBeatOffset(arg1); }
    inline static void StartReplayPlayback() { ptr::StartReplayPlayback(); }
    inline static void PlaceHotCoalTileAt(int xVal, int yVal) { ptr::PlaceHotCoalTileAt(xVal, yVal); }
    inline static void AdvanceLevel() { ptr::AdvanceLevel(); }
    inline static void _RecordBeat(int arg1) { ptr::_RecordBeat(arg1); }
    inline static void _RecordMove(int arg1, int arg2, int arg3, bool arg4) { ptr::_RecordMove(arg1, arg2, arg3, arg4); }
    inline static void _RecordMissedBeat(int arg1, int arg2) { ptr::_RecordMissedBeat(arg1, arg2); }
    inline static void TakeActionAfterAllCharsScoreSubmit() { ptr::TakeActionAfterAllCharsScoreSubmit(); }
    inline static int _PixelToTileCoord(float arg1) { return ptr::_PixelToTileCoord(arg1); }
    inline static void JanitorReset() { ptr::JanitorReset(); }
    inline static void MarkAllTilesAsSeen() { ptr::MarkAllTilesAsSeen(); }
    inline static void Update() { ptr::Update(); }
    inline static void RenderAll() { ptr::RenderAll(); }
    inline static void RenderExitArrow() { ptr::RenderExitArrow(); }
    inline static void _RenderMinimap() { ptr::_RenderMinimap(); }
    inline static int GetAdjustedZoneForAllChars() { return ptr::GetAdjustedZoneForAllChars(); }
    inline static int GetAdjustedZoneForAllCharsDLC() { return ptr::GetAdjustedZoneForAllCharsDLC(); }
    inline static int GetAdjustedZoneForStoryMode() { return ptr::GetAdjustedZoneForStoryMode(); }
    inline static bool ShopkeeperMissing() { return ptr::ShopkeeperMissing(); }
    inline static bool _IsInShop(int arg1, int arg2, int arg3) { return ptr::_IsInShop(arg1, arg2, arg3); }
    inline static void RemoveExit(int xVal, int yVal) { ptr::RemoveExit(xVal, yVal); }
    inline static float ActuallyGetMapTileLightValue(int xVal, int yVal, bool forVision) { return ptr::ActuallyGetMapTileLightValue(xVal, yVal, forVision); }
    inline static void _SetMapTileLightValue(int arg1, int arg2, float arg3) { ptr::_SetMapTileLightValue(arg1, arg2, arg3); }
    inline static void _AddToMapTileLightValue(int arg1, int arg2, float arg3, bool arg4) { ptr::_AddToMapTileLightValue(arg1, arg2, arg3, arg4); }
    inline static float GetMapTileLightValue(int xVal, int yVal, bool forVision) { return ptr::GetMapTileLightValue(xVal, yVal, forVision); }
    inline static void ClearTextLabelAt(int xVal, int yVal) { ptr::ClearTextLabelAt(xVal, yVal); }
    inline static bool IsAnyWallAt(Rect * r) { return ptr::IsAnyWallAt(r); }
    inline static bool IsAnyPlayerWithinShop() { return ptr::IsAnyPlayerWithinShop(); }
    inline static bool IsWallAdjacent(int xVal, int yVal) { return ptr::IsWallAdjacent(xVal, yVal); }
    inline static bool IsAnyWaterAt(int xVal, int yVal) { return ptr::IsAnyWaterAt(xVal, yVal); }
    inline static void DryUpAllWater(int replacementFloor) { ptr::DryUpAllWater(replacementFloor); }
    inline static bool IsVisibleTileAt(int xVal, int yVal) { return ptr::IsVisibleTileAt(xVal, yVal); }
    inline static void PlaceTileTypeAt(int xVal, int yVal, int tileType) { ptr::PlaceTileTypeAt(xVal, yVal, tileType); }
    inline static void _PlaceMagneticTileAt(int arg1, int arg2) { ptr::_PlaceMagneticTileAt(arg1, arg2); }
    inline static void _PlaceTarTileAt(int arg1, int arg2) { ptr::_PlaceTarTileAt(arg1, arg2); }
    inline static bool CheckLOS(int x1, int y1, int x2, int y2, bool includeOffscreen) { return ptr::CheckLOS(x1, y1, x2, y2, includeOffscreen); }
    inline static void _PlaceWaterTileAt(int arg1, int arg2) { ptr::_PlaceWaterTileAt(arg1, arg2); }
    inline static bool IsTrapAdjacent(int xVal, int yVal) { return ptr::IsTrapAdjacent(xVal, yVal); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static void (*ShowModPopup)(String * imageName);
        static void (*ResetSpecialRoomVariables)();
        static void (*DoRestartCommon)(bool continuedRun, bool cancelFade);
        static int (*_GetMaxDepth)();
        static bool (*HaveFinalBoss)();
        static Point * (*GetExitValue)(int xVal, int yVal);
        static bool (*_IsExit)(int arg1, int arg2);
        static bool (*IsLockedExit)(int xVal, int yVal);
        static void (*_RecordRand)(int arg1, int arg2);
        static Tile * (*GetTileAt)(int xVal, int yVal);
        static int (*GetTileTypeAt)(int xVal, int yVal);
        static bool (*_IsWireAt)(int arg1, int arg2);
        static bool (*IsWaterOrTarAt)(int xVal, int yVal);
        static bool (*_IsWaterAt)(int arg1, int arg2);
        static bool (*_IsZone)(int arg1);
        static bool (*IsIcePartOfLevel)(int xVal, int yVal);
        static bool (*IsFinalBoss)();
        static bool (*IsWallAt)(int xVal, int yVal, bool destructibleOnly, bool torchlessOnly);
        static bool (*_IsDeepWaterAt)(int arg1, int arg2);
        static void (*SplashWater)(int xVal, int yVal, bool destroyWater);
        static bool (*_IsIceAt)(int arg1, int arg2);
        static void (*BreakIce)(int xVal, int yVal);
        static bool (*IsPeaceful)();
        static void (*ResetCosts)();
        static bool (*_IsConductorWireAt)(int arg1, int arg2);
        static bool (*_IsConductorWire2At)(int arg1, int arg2);
        static bool (*_IsMagneticFloorAt)(int arg1, int arg2);
        static bool (*_IsNonPracticeBossLevel)();
        static bool (*IsBossLevel)();
        static Tile * (*PlaceTileRemovingExistingTiles)(int xVal, int yVal, int tileType, bool pending, int tilesetOverride, bool fromEarthSpell);
        static bool (*_IsTileEmpty)(int arg1, int arg2);
        static bool (*CreateRoom)(int xVal, int yVal, int wVal, int hVal, bool pending, int roomType, int originX, int originY, int originX2, int originY2, bool wideCorridor, int wallType, bool allowWallOverlap, bool allowWaterTarOoze);
        static bool (*IsFloorAt)(int xVal, int yVal);
        static void (*RecalcLevelBoundaries)();
        static bool (*_IsCustomLevelNonBoss)();
        static bool (*_IsSingleZoneMode)();
        static void (*_SkipNextPenaltyBox)();
        static void (*ClearMinibossWall)();
        static bool (*_IsLavaAt)(int arg1, int arg2);
        static float (*DistanceFromZone3DividingLine)(int xVal, int yVal);
        static void (*TransmogrifySlot)(String * slotName, Entity * ent);
        static void (*ConjureSlot)(String * slotName, Entity * ent);
        static void (*PawnSlot)(String * slotName, Entity * ent);
        static void (*TransmogrifyWeaponToType)(Entity * ent, int type);
        static String * (*GetNPCSaleItem)(int npcNum, int slotNum, String * exclude1, String * exclude2);
        static void (*GenerateJanitorItems)();
        static void (*RemoveTileAt)(int xVal, int yVal);
        static void (*_SetMagicBarrierAt)(int arg1, int arg2, bool arg3);
        static void (*SetMagicBarrier)(bool on);
        static bool (*IsDoorAt)(int xVal, int yVal);
        static void (*CloseInOuterWalls)();
        static int (*ActivateTrigger)(int triggerNum, Entity * ent, RenderableObject * target);
        static bool (*IsNormalFloorAt)(int xVal, int yVal);
        static void (*Earthquake)(int xVal, int yVal);
        static bool (*_IsHotCoalAt)(int arg1, int arg2);
        static void (*PlaceIceTileAt)(int xVal, int yVal);
        static void (*FreezeTilesNear)(int xVal, int yVal, bool allTiles);
        static bool (*_AllowEarthSpell)();
        static Point * (*GetStandardExitCoords)();
        static bool (*_AllCharsAnyComplete)();
        static bool (*_AllCharsDLCAnyComplete)();
        static int (*GetSingleZoneModeFinalBossZone)();
        static bool (*IsFinalBossZone)();
        static void (*MakeHelper)();
        static bool (*IsSeededMode)(int mode);
        static void (*DeleteMap)();
        static void (*InitNewMap)(bool saveGameData);
        static bool (*IsSecretRoom)(int rmType);
        static void (*CarveCorridorTile)(int xVal, int yVal, bool horiz, bool pending, bool skipWalls, int roomType, bool wideCorridor);
        static void (*AddExit)(int xVal, int yVal, int levelPointer, int zonePointer);
        static bool (*_IsNotIndestructibleWallAt)(int arg1, int arg2);
        static void (*CreateIndestructibleBorder)();
        static void (*CreateTutorialMap)();
        static void (*_DisableLevelConstraints)();
        static void (*PaintTriggerInterior)(int x, int y, int w, int h, int trigger);
        static Point * (*GetRandomOffsetPoint)();
        static bool (*IsExitAt)(int x, int y);
        static void (*CreateFinalBossBattleConductor)();
        static void (*CreateFinalBossBattle3)();
        static void (*CreateFinalBossBattle2)();
        static void (*UnlockChar)(int characterID);
        static void (*CreateFinalBossBattle)();
        static bool (*IsFreeLevelForSpecialRoom)(int tempLevel, int tempDepth);
        static void (*CreateExit)(int exitX, int exitY);
        static bool (*IsWireLikeAt)(int x, int y);
        static bool (*_IsFloorAdjacent)(int arg1, int arg2);
        static void (*AddCrackedWall)(int roomType);
        static String * (*RandomFood)();
        static void (*PlaceSecondarySpecialShop)(bool useBloodCost, bool isFoodShop);
        static void (*AddSpecialRoom)(int roomType, bool addCrack);
        static void (*CreateSwarmMap)();
        static RoomData * (*PlaceFirstRoom)();
        static void (*DumpMap)();
        static void (*FillTiles)(Rect * rect, int tileType, int tileTypeEdge);
        static void (*PlaceConnectedWireDoor)(Point * p);
        static bool (*IsZone5RoomLegal)(Rect * loc);
        static RoomWithDoor * (*PlaceRoomZone5)(PortalSeg * pseg, int width, int height, int minEntryDist);
        static bool (*IsDoorAdjacent)(int x, int y);
        static void (*PlaceShopItemsAt)(int tmpX, int tmpY, Rect * door);
        static void (*CreateRoomZone5)(RoomWithDoor * rm, int roomType);
        static RoomWithDoor * (*PlaceRoomZone52)(StackEx3 * portalSegs, int width, int height, int minEntryDist, int roomType);
        static bool (*IsWallAdjacent8)(int xVal, int yVal);
        static bool (*PlaceWire)(Point * src, Point * dst);
        static void (*_DecorateTerminalZone5)(Point * arg1);
        static bool (*IsTileTypeAdjacent)(int xVal, int yVal, int tempType);
        static void (*RandomWalkOfTempTiles)(int xVal, int yVal, int distCounter);
        static void (*PadWalls)();
        static void (*ProcessSpecialRoom)();
        static bool (*_IsCorridorOrRoomWallAt)(int arg1, int arg2);
        static bool (*IsSurroundedByDestructibleWalls)(int xVal, int yVal);
        static bool (*IsCrackedWallAt)(int xVal, int yVal);
        static bool (*IsCrackedWallAdjacent)(int xVal, int yVal);
        static void (*PlaceSecretRooms)(int numRooms);
        static void (*FillVault)(RoomData * tmpRoom);
        static Point * (*GetRandPointInRoomWithOptions)(RoomBase * room, bool skipCollisions, bool skipExit, bool skipTraps, bool skipWater, bool nearWallIsOk, bool secretRoomOK);
        static Point * (*GetRandPointInRoomWithOptions2)(int xVal, int yVal, int wVal, int hVal, bool skipCollisions, bool skipExit, bool skipTraps, bool skipWater, bool nearWallIsOk, bool secretRoomOK);
        static int (*_GetAppropriateCoins)();
        static void (*PutCrateOrBarrel)(int x, int y);
        static void (*MakeInvisibleChestAt)(int tmpX, int tmpY);
        static bool (*AllowSpirit)();
        static bool (*FillSecretRoomsZone4)();
        static bool (*FillSecretRoomsZone2)();
        static bool (*MaybeForbidTrapdoor)();
        static bool (*FillSecretRoomsZone1)();
        static bool (*FillSecretRooms)();
        static void (*AddStone)();
        static bool (*IsCorridorFloorOrDoorAdjacent)(int xVal, int yVal);
        static Trap * (*PlaceTrapInRoom)(int xVal, int yVal, int wVal, int hVal, int trapType, int bounceDir, Trap * twoAwayTrap);
        static void (*PlaceTrapZone5)(int xVal, int yVal, int wVal, int hVal);
        static void (*PlaceTrapsZone5)();
        static void (*PlaceTrapZone4)(int xVal, int yVal, int wVal, int hVal);
        static void (*PlaceTrapsZone4)();
        static void (*PlaceTrapZone3)(int xVal, int yVal, int wVal, int hVal);
        static void (*PlaceTrapsZone3)();
        static void (*PlaceTrapsZone2)();
        static void (*PlaceTrapsZone1)();
        static void (*PlaceTraps)();
        static XMLNode * (*GetHardModeXML)();
        static Enemy * (*PlaceMinibossOfShapeAt)(int newMiniboss, int xVal, int yVal);
        static void (*_PostProcessMiniboss)(Enemy * arg1);
        static void (*PlaceAppropriateMinibosses)(RoomBase * room);
        static void (*PlaceShopkeeperGhostIfNeededAt)(int xVal, int yVal);
        static void (*_PlaceExitRoomMiniboss)(RoomBase * arg1);
        static int (*_GetZone3ElementalType)(int arg1, int arg2);
        static int (*_GetZone3YetiHellhoundType)(int arg1, int arg2);
        static int (*_GetZone3BeetleType)(int arg1, int arg2);
        static void (*PlaceRareEnemies)(RoomBase * room, bool hasExit);
        static Point * (*GetRandPointInRoomOfTileType)(RoomBase * room, int tileType, bool skipCollisions);
        static Point * (*GetRandPointInRoomOfTileType2)(int xVal, int yVal, int wVal, int hVal, int tileType, bool skipCollisions);
        static int (*GetHardModeExtraEnemies)();
        static int (*GetExtraEnemiesBase)();
        static void (*PutVariedEnemiesZone5)(StackEx2 * pts);
        static void (*PutEnemyZone5)(int x, int y);
        static void (*PutRoomEnemiesZone5)(RoomBase * room, bool hasExit);
        static void (*PlaceRandomEnemyForTempo)(int xVal, int yVal);
        static void (*PlaceEnemiesZone5)();
        static Enemy * (*PlaceGargoyle)(int xVal, int yVal, int l);
        static void (*PlaceEnemiesZone4)();
        static Enemy * (*PlaceZone3Cauldron)(int xVal, int yVal);
        static Enemy * (*PlaceZone3YetiHellhound)(int xVal, int yVal);
        static Enemy * (*PlaceZone3Elemental)(int xVal, int yVal);
        static Enemy * (*PlaceZone3Slime)(int xVal, int yVal);
        static Enemy * (*PlaceZone3Beetle)(int xVal, int yVal);
        static void (*PlaceEnemiesZone3)();
        static void (*PlaceEnemiesZone2)();
        static void (*PlaceEnemiesZone1)();
        static void (*PlaceEnemies)();
        static Point * (*FindTileOfType)(int tileType, bool ignoreCrackedWalls);
        static float (*GetDistanceToNearestTorch)(RenderableObject * r);
        static void (*PlaceTorchesAnywhere)();
        static bool (*IsCorridorFloorAt)(int xVal, int yVal);
        static void (*PlaceCrateOrBarrel)();
        static bool (*DoWePlaceAdditionalChestThisLevel)();
        static bool (*PlaceAdditionalChestAt)(int xVal, int yVal);
        static void (*PlaceZoneAppropriateNumberOfDiamondsAt)(int xVal, int yVal);
        static void (*PlaceChests)(bool freeBroadSword);
        static void (*PlaceResourceWall)();
        static void (*PlaceLockedChests)();
        static bool (*_IsShrineFriendlyPoint)(int arg1, int arg2);
        static Point * (*GetShrinePoint)();
        static void (*PlaceShrine)();
        static bool (*CreateMapZone5)(bool recursive);
        static RoomData * (*PlaceRoomZone4)(int roomType);
        static void (*AddHarderStone)();
        static void (*CheckMapConsistency)();
        static void (*PlaceNocturnaArea)();
        static bool (*CreateMapZone4)(bool recursive);
        static bool (*CarveNewCorridor)(int moveX, int moveY, bool horiz, bool pending, bool secondaryCarve, int roomType, bool wideCorridor);
        static RoomData * (*PlaceRoomZone3)(int roomType, RoomData * roomToAttachTo);
        static bool (*PlaceExit)(RoomData * rdExit);
        static void (*RemoveSomeWallsAwayFromCorridors)(float percentToRemove, bool includeCorridors, int maxHealth);
        static void (*WidenCorridors)();
        static bool (*IsTrapOrExitAbove)(int xVal, int yVal);
        static void (*AddSomePillarsInOpenSpace)();
        static Point * (*GetRandomWallInRoom)(int xVal, int yVal, int wVal, int hVal);
        static bool (*CreateMapZone3)();
        static RoomData * (*PlaceRoomZone2)(int roomType, RoomData * roomToAttachTo);
        static bool (*CreateMapZone2)();
        static RoomData * (*PlaceRoomZone1)(int roomType, RoomData * roomToAttachTo);
        static bool (*CreateMapZone1)();
        static bool (*IsPassable)();
        static bool (*WantPenaltyBox)();
        static void (*PlacePenaltyBoxEnemies)();
        static void (*AddMinibossWall)(int xVal, int yVal, int wallType);
        static bool (*CreateMap)(LevelObject * levelObj);
        static bool (*_AllCharsAllComplete)();
        static bool (*_AllCharsDLCAllComplete)();
        static int (*GetInitialZone)();
        static void (*DoQuickRestart)(bool continuedRun, bool showPopups, bool playIntroCutscene);
        static void (*PutFutureStair)(int x, int y);
        static void (*MakeAllWallsUnbreakable)();
        static void (*CreateCharSelect)();
        static void (*CreateBeastmasterZone1)();
        static void (*CreateBeastmasterZone2)();
        static void (*CreateBeastmasterZone3)();
        static void (*CreateBeastmasterZone4)();
        static void (*PutBeastmasterStairs)(int x, int y, String * stairName, String * enemyName, int enemyType, int enemyId, String * stairNamePrefix);
        static void (*CreateBeastmasterZone5)();
        static void (*PutMinibossStair)(int x, int y, String * minibossName, int enemyType, String * label, int labelXOff);
        static void (*CreateBossmasterMinibosses)();
        static void (*PutBossStair)(int x, int y, String * bossName, int enemyType, int zone, String * label, int labelXOff);
        static void (*CreateBossmasterBosses)();
        static void (*CreateExtraModesSelect)();
        static void (*EnsureBossTraining)(String * name);
        static bool (*QueryHarderBosses)();
        static void (*TrySpawnBossMinibossAt)(int x, int y, int etype);
        static void (*BossMaybeMinibossesAt)(int x1, int y1, int x2, int y2);
        static void (*CreateBossBattle1)();
        static void (*CreateBossBattle2)();
        static void (*CreateBossBattle3)();
        static void (*CreateBossBattle4)();
        static void (*CreateBossBattle5)();
        static void (*CreateBossBattle9)();
        static void (*CreateBossBattleFrankensteinway)();
        static void (*CreateBossBattle)();
        static void (*CreateTrainingMap)();
        static void (*CreateTestMap)();
        static void (*CreateDungeonMaster)();
        static void (*CreateMerlin)();
        static void (*CreateHephaestus)();
        static void (*CreateBeastmaster)();
        static void (*CreateBossmaster)();
        static void (*CreateWeaponmaster)();
        static void (*CreateTrainer)();
        static void (*CreateJanitor)();
        static void (*CreateDiamondDealer)();
        static void (*CreateLobby)();
        static void (*CreateAllCharsSelect)();
        static void (*CreateAllCharsDLCSelect)();
        static void (*GenerateHardcoreZoneOrder)();
        static void (*LoadLevelSong)(LevelObject * levelObj);
        static void (*NewLevel)(int level, int zone, int playerID, bool inEditor, LevelObject * levelObj, bool continuedRun);
        static void (*DoRestart)();
        static IntPointList * (*GetTileObstructionList)(bool includeOffscreen);
        static void (*RefreshLineOfSightTiles)();
        static bool (*_IsTarAt)(int arg1, int arg2);
        static String * (*GetTileFlyawayAt)(int xVal, int yVal);
        static void (*_ModifyReplayBeatOffset)(int arg1);
        static void (*StartReplayPlayback)();
        static void (*PlaceHotCoalTileAt)(int xVal, int yVal);
        static void (*AdvanceLevel)();
        static void (*_RecordBeat)(int arg1);
        static void (*_RecordMove)(int arg1, int arg2, int arg3, bool arg4);
        static void (*_RecordMissedBeat)(int arg1, int arg2);
        static void (*TakeActionAfterAllCharsScoreSubmit)();
        static int (*_PixelToTileCoord)(float arg1);
        static void (*JanitorReset)();
        static void (*MarkAllTilesAsSeen)();
        static void (*Update)();
        static void (*RenderAll)();
        static void (*RenderExitArrow)();
        static void (*_RenderMinimap)();
        static int (*GetAdjustedZoneForAllChars)();
        static int (*GetAdjustedZoneForAllCharsDLC)();
        static int (*GetAdjustedZoneForStoryMode)();
        static bool (*ShopkeeperMissing)();
        static bool (*_IsInShop)(int arg1, int arg2, int arg3);
        static void (*RemoveExit)(int xVal, int yVal);
        static float (*ActuallyGetMapTileLightValue)(int xVal, int yVal, bool forVision);
        static void (*_SetMapTileLightValue)(int arg1, int arg2, float arg3);
        static void (*_AddToMapTileLightValue)(int arg1, int arg2, float arg3, bool arg4);
        static float (*GetMapTileLightValue)(int xVal, int yVal, bool forVision);
        static void (*ClearTextLabelAt)(int xVal, int yVal);
        static bool (*IsAnyWallAt)(Rect * r);
        static bool (*IsAnyPlayerWithinShop)();
        static bool (*IsWallAdjacent)(int xVal, int yVal);
        static bool (*IsAnyWaterAt)(int xVal, int yVal);
        static void (*DryUpAllWater)(int replacementFloor);
        static bool (*IsVisibleTileAt)(int xVal, int yVal);
        static void (*PlaceTileTypeAt)(int xVal, int yVal, int tileType);
        static void (*_PlaceMagneticTileAt)(int arg1, int arg2);
        static void (*_PlaceTarTileAt)(int arg1, int arg2);
        static bool (*CheckLOS)(int x1, int y1, int x2, int y2, bool includeOffscreen);
        static void (*_PlaceWaterTileAt)(int arg1, int arg2);
        static bool (*IsTrapAdjacent)(int xVal, int yVal);
        static void (*_mark)();
    };
};

#ifdef _WIN32
inline bool * Level::isReplaying = (bool*) 0x835c1d;
inline ControllerPopUp * * Level::popUpController = (ControllerPopUp* *) 0x835b4c;
inline int * Level::popUpType = (int*) 0x835b48;
inline bool * Level::outsideBossChamber = (bool*) 0x835b42;
inline bool * Level::pacifismModeOn = (bool*) 0x835b41;
inline bool * Level::shopkeeperDead = (bool*) 0x835b40;
inline bool * Level::shopkeeperFell = (bool*) 0x835ae3;
inline int * Level::placeLordOnLevel = (int*) 0x835b3c;
inline IntMap * * Level::placeShrineOnLevel = (IntMap* *) 0x835b38;
inline int * Level::placeTransmogrifierOnLevel = (int*) 0x835b34;
inline int * Level::placeTransmogrifierOnDepth = (int*) 0x835b30;
inline int * Level::placeArenaOnLevel = (int*) 0x835b2c;
inline int * Level::placeArenaOnDepth = (int*) 0x835b28;
inline bool * Level::placedArena = (bool*) 0x835ae2;
inline int * Level::placeGlassShopOnLevel = (int*) 0x835b24;
inline int * Level::placeGlassShopOnDepth = (int*) 0x835b20;
inline int * Level::placeBloodShopOnLevel = (int*) 0x835b1c;
inline int * Level::placeBloodShopOnDepth = (int*) 0x835b18;
inline int * Level::placeFoodShopOnLevel = (int*) 0x835b14;
inline int * Level::placeFoodShopOnDepth = (int*) 0x835b10;
inline int * Level::placeConjurerOnLevel = (int*) 0x835b0c;
inline int * Level::placeConjurerOnDepth = (int*) 0x835b08;
inline int * Level::placeShrinerOnLevel = (int*) 0x835b04;
inline int * Level::placeShrinerOnDepth = (int*) 0x835b00;
inline int * Level::placePawnbrokerOnLevel = (int*) 0x835afc;
inline int * Level::placePawnbrokerOnDepth = (int*) 0x835af8;
inline int * Level::randSeed = (int*) 0x835af4;
inline int * Level::nonDeterministicMSStart = (int*) 0x835af0;
inline RNG * * Level::wholeRunRNG = (RNG* *) 0x835aec;
inline RNG * * Level::currentFloorRNG = (RNG* *) 0x835ae8;
inline IntSet * * Level::usedBosses = (IntSet* *) 0x835ae4;
inline bool * Level::isSeededMode = (bool*) 0x835bc2;
inline bool * Level::isHardcoreMode = (bool*) 0x835ae1;
inline bool * Level::isDailyChallenge = (bool*) 0x835ae0;
inline bool * Level::isDDRMode = (bool*) 0x835adf;
inline bool * Level::isSwarmMode = (bool*) 0x835ade;
inline bool * Level::isNoReturnMode = (bool*) 0x835bbc;
inline bool * Level::isSoulMode = (bool*) 0x835add;
inline bool * Level::isHardMode = (bool*) 0x835bbb;
inline bool * Level::isFloorIsLavaMode = (bool*) 0x835adc;
inline bool * Level::isPhasingMode = (bool*) 0x835bba;
inline bool * Level::isRandomizerMode = (bool*) 0x835bb9;
inline bool * Level::isMysteryMode = (bool*) 0x835bb8;
inline bool * Level::isTrainingMode = (bool*) 0x835acf;
inline bool * Level::isBeastmaster = (bool*) 0x835ace;
inline bool * Level::playedVictoryCutscene = (bool*) 0x835acd;
inline int * Level::mentorLevel = (int*) 0x835ad8;
inline bool * Level::isStoryMode = (bool*) 0x835bbe;
inline bool * Level::isDeathlessMode = (bool*) 0x835bbd;
inline int * Level::deathlessWinCount = (int*) 0x835ad4;
inline bool * Level::isAllCharactersMode = (bool*) 0x835bc0;
inline bool * Level::isAllCharactersDLCMode = (bool*) 0x835bbf;
inline int * Level::continuedRunCoinScore = (int*) 0x835ad0;
inline bool * Level::isLevelEditor = (bool*) 0x835c05;
inline bool * Level::lockedShopPlaced = (bool*) 0x835acc;
inline bool * Level::secretRockRoomPlaced = (bool*) 0x835ac3;
inline bool * Level::isRunNoItemsNoShrines = (bool*) 0x835ac2;
inline bool * Level::placedUrnThisRun = (bool*) 0x835ac1;
inline bool * Level::usedCustomMusic = (bool*) 0x835bab;
inline int * Level::shopkeeperGhostLevel = (int*) 0x835ac8;
inline int * Level::shopkeeperGhostDepth = (int*) 0x835ac4;
inline IntMap5 * * Level::tiles = (IntMap5* *) 0x835aa0;
inline int * Level::forceBoss = (int*) 0x835a9c;
inline ExitMap * * Level::exits = (ExitMap* *) 0x835a98;
inline bool * Level::creatingMap = (bool*) 0x835bc3;
inline Replay * * Level::replay = (Replay* *) 0x835bf4;
inline int * Level::bossNumber = (int*) 0x835a94;
inline bool * Level::isAnyTar = (bool*) 0x835a89;
inline float * Level::zone3DividingLineX = (float*) 0x835a90;
inline float * Level::zone3DividingLineY = (float*) 0x835a8c;
inline bool * Level::isConductorLevel = (bool*) 0x835a88;
inline IntMap5 * * Level::pendingTiles = (IntMap5* *) 0x835a84;
inline Transmogrifier * * Level::transmogrifier = (Transmogrifier* *) 0x835a78;
inline Conjurer * * Level::conjurer = (Conjurer* *) 0x835a74;
inline bool * Level::flawlessVictory = (bool*) 0x835a13;
inline int * Level::secretAtX = (int*) 0x835a6c;
inline int * Level::secretAtY = (int*) 0x835a68;
inline IntList * * Level::triggerList = (IntList* *) 0x835a64;
inline int * Level::levelConstraintX = (int*) 0x835a60;
inline int * Level::levelConstraintY = (int*) 0x835a5c;
inline int * Level::levelConstraintW = (int*) 0x835a58;
inline int * Level::levelConstraintH = (int*) 0x835a54;
inline int * Level::levelConstraintNum = (int*) 0x835a50;
inline int * Level::shopX = (int*) 0x835a4c;
inline int * Level::shopY = (int*) 0x835a48;
inline int * Level::shopW = (int*) 0x835a44;
inline int * Level::shopH = (int*) 0x835a40;
inline int * Level::lastCreatedRoomType = (int*) 0x835a3c;
inline int * Level::minLevelX = (int*) 0x835bd4;
inline int * Level::minLevelY = (int*) 0x835bcc;
inline int * Level::maxLevelX = (int*) 0x835bd8;
inline int * Level::maxLevelY = (int*) 0x835bd0;
inline int * Level::minLevelMinimapX = (int*) 0x835a38;
inline int * Level::minLevelMinimapY = (int*) 0x835a34;
inline int * Level::maxLevelMinimapX = (int*) 0x835a30;
inline int * Level::maxLevelMinimapY = (int*) 0x835a2c;
inline bool * Level::mapLightValuesInitialized = (bool*) 0x835a12;
inline int * Level::mapLightValuesCachedFrame = (int*) 0x835a28;
inline Minimap * * Level::minimap = (Minimap* *) 0x835a24;
inline int * Level::arenaNum = (int*) 0x835a20;
inline int * Level::specialRoomEntranceX = (int*) 0x835a1c;
inline int * Level::specialRoomEntranceY = (int*) 0x835a18;
inline Shriner * * Level::shriner = (Shriner* *) 0x835a14;
inline bool * Level::skipNextPenaltyBox = (bool*) 0x835a11;
inline bool * Level::enemiesDropSingleCoinForThisLevel = (bool*) 0x835a10;
inline List38 * * Level::minibossFormerWall = (List38* *) 0x835a0c;
inline Pawnbroker * * Level::pawnbroker = (Pawnbroker* *) 0x835a08;
inline bool * Level::isAllCharsRunNoItemsNoShrines = (bool*) 0x8359d2;
inline Array<bool> * * Level::allCharsCompletion = (Array<bool>* *) 0x833ec4;
inline Array<bool> * * Level::allCharsCompletionDLC = (Array<bool>* *) 0x833ec8;
inline bool * Level::isLevelEnding = (bool*) 0x8359d0;
inline StackEx * * Level::previousLevelUnkilledStairLockingMinibosses = (StackEx* *) 0x8359cc;
inline String * * Level::todaysRandSeedString = (String* *) 0x833ecc;
inline String * * Level::randSeedString = (String* *) 0x833ed0;
inline List48 * * Level::rooms = (List48* *) 0x8359c8;
inline bool * Level::addKeyInSecretChest = (bool*) 0x8359bf;
inline bool * Level::startedShrinerFight = (bool*) 0x8359be;
inline int * Level::carveX = (int*) 0x8359c4;
inline int * Level::carveY = (int*) 0x8359c0;
inline bool * Level::placedAdditionalRedChest = (bool*) 0x8359bd;
inline bool * Level::placedAdditionalWhiteChest = (bool*) 0x8359bc;
inline bool * Level::placedAdditionalBlackChest = (bool*) 0x83599b;
inline bool * Level::wasMinibossLockedInBattle = (bool*) 0x83599a;
inline RoomData * * Level::firstRoom = (RoomData* *) 0x8359b8;
inline bool * Level::levelJustStarted = (bool*) 0x835999;
inline List26 * * Level::charactersJustUnlocked = (List26* *) 0x8359b0;
inline Stack * * Level::zoneOrder = (Stack* *) 0x8359ac;
inline String * * Level::justUnlocked = (String* *) 0x833ed4;
inline StackEx * * Level::previousLevelMinibosses = (StackEx* *) 0x8359a8;
inline bool * Level::debugForceMonstrousShop = (bool*) 0x835998;
inline List37 * * Level::tempTileWalk = (List37* *) 0x835994;
inline int * Level::chestsStillToPlace = (int*) 0x835990;
inline RoomBase * * Level::hallwayZone5 = (RoomBase* *) 0x835980;
inline bool * Level::quickRestart = (bool*) 0x83596d;
inline int * Level::practiceEnemyNum = (int*) 0x835974;
inline int * Level::dailyChallengeX = (int*) 0x835958;
inline int * Level::dailyChallengeY = (int*) 0x835954;
inline int * Level::lastTileCount = (int*) 0x835908;
inline IntPointList * * Level::tileObstructionList = (IntPointList* *) 0x835904;
inline Sprite * * Level::exitArrow = (Sprite* *) 0x8358f4;
inline float * Level::exitArrowX = (float*) 0x8358f0;
inline float * Level::exitArrowY = (float*) 0x8358ec;
inline Array<float> * * Level::constMapLightValues = (Array<float>* *) 0x833ed8;
inline Array<float> * * Level::mapLightValues = (Array<float>* *) 0x833edc;

inline void (*Level::ptr::ShowModPopup)(String * imageName) = (void (*)(String * imageName)) 0x4544e0;
inline void (*Level::ptr::ResetSpecialRoomVariables)() = (void (*)()) 0x4547b0;
inline void (*Level::ptr::DoRestartCommon)(bool continuedRun, bool cancelFade) = (void (*)(bool continuedRun, bool cancelFade)) 0x454860;
inline int (*Level::ptr::_GetMaxDepth)() = (int (*)()) 0x0;
inline bool (*Level::ptr::HaveFinalBoss)() = (bool (*)()) 0x454de0;
inline Point * (*Level::ptr::GetExitValue)(int xVal, int yVal) = (Point * (*)(int xVal, int yVal)) 0x454e50;
inline bool (*Level::ptr::_IsExit)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x0;
inline bool (*Level::ptr::IsLockedExit)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x454f50;
inline void (*Level::ptr::_RecordRand)(int arg1, int arg2) = (void (*)(int arg1, int arg2)) 0x0;
inline Tile * (*Level::ptr::GetTileAt)(int xVal, int yVal) = (Tile * (*)(int xVal, int yVal)) 0x454f80;
inline int (*Level::ptr::GetTileTypeAt)(int xVal, int yVal) = (int (*)(int xVal, int yVal)) 0x454fd0;
inline bool (*Level::ptr::_IsWireAt)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x0;
inline bool (*Level::ptr::IsWaterOrTarAt)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x455030;
inline bool (*Level::ptr::_IsWaterAt)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x0;
inline bool (*Level::ptr::_IsZone)(int arg1) = (bool (*)(int arg1)) 0x0;
inline bool (*Level::ptr::IsIcePartOfLevel)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x455070;
inline bool (*Level::ptr::IsFinalBoss)() = (bool (*)()) 0x4550a0;
inline bool (*Level::ptr::IsWallAt)(int xVal, int yVal, bool destructibleOnly, bool torchlessOnly) = (bool (*)(int xVal, int yVal, bool destructibleOnly, bool torchlessOnly)) 0x4550d0;
inline bool (*Level::ptr::_IsDeepWaterAt)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x0;
inline void (*Level::ptr::SplashWater)(int xVal, int yVal, bool destroyWater) = (void (*)(int xVal, int yVal, bool destroyWater)) 0x455140;
inline bool (*Level::ptr::_IsIceAt)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x0;
inline void (*Level::ptr::BreakIce)(int xVal, int yVal) = (void (*)(int xVal, int yVal)) 0x455440;
inline bool (*Level::ptr::IsPeaceful)() = (bool (*)()) 0x455580;
inline void (*Level::ptr::ResetCosts)() = (void (*)()) 0x4555a0;
inline bool (*Level::ptr::_IsConductorWireAt)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x0;
inline bool (*Level::ptr::_IsConductorWire2At)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x0;
inline bool (*Level::ptr::_IsMagneticFloorAt)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x0;
inline bool (*Level::ptr::_IsNonPracticeBossLevel)() = (bool (*)()) 0x0;
inline bool (*Level::ptr::IsBossLevel)() = (bool (*)()) 0x4555f0;
inline Tile * (*Level::ptr::PlaceTileRemovingExistingTiles)(int xVal, int yVal, int tileType, bool pending, int tilesetOverride, bool fromEarthSpell) = (Tile * (*)(int xVal, int yVal, int tileType, bool pending, int tilesetOverride, bool fromEarthSpell)) 0x455620;
inline bool (*Level::ptr::_IsTileEmpty)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x0;
inline bool (*Level::ptr::CreateRoom)(int xVal, int yVal, int wVal, int hVal, bool pending, int roomType, int originX, int originY, int originX2, int originY2, bool wideCorridor, int wallType, bool allowWallOverlap, bool allowWaterTarOoze) = (bool (*)(int xVal, int yVal, int wVal, int hVal, bool pending, int roomType, int originX, int originY, int originX2, int originY2, bool wideCorridor, int wallType, bool allowWallOverlap, bool allowWaterTarOoze)) 0x4557b0;
inline bool (*Level::ptr::IsFloorAt)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x457e30;
inline void (*Level::ptr::RecalcLevelBoundaries)() = (void (*)()) 0x457e90;
inline bool (*Level::ptr::_IsCustomLevelNonBoss)() = (bool (*)()) 0x0;
inline bool (*Level::ptr::_IsSingleZoneMode)() = (bool (*)()) 0x0;
inline void (*Level::ptr::_SkipNextPenaltyBox)() = (void (*)()) 0x0;
inline void (*Level::ptr::ClearMinibossWall)() = (void (*)()) 0x458160;
inline bool (*Level::ptr::_IsLavaAt)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x0;
inline float (*Level::ptr::DistanceFromZone3DividingLine)(int xVal, int yVal) = (float (*)(int xVal, int yVal)) 0x458390;
inline void (*Level::ptr::TransmogrifySlot)(String * slotName, Entity * ent) = (void (*)(String * slotName, Entity * ent)) 0x4585f0;
inline void (*Level::ptr::ConjureSlot)(String * slotName, Entity * ent) = (void (*)(String * slotName, Entity * ent)) 0x458e90;
inline void (*Level::ptr::PawnSlot)(String * slotName, Entity * ent) = (void (*)(String * slotName, Entity * ent)) 0x4594a0;
inline void (*Level::ptr::TransmogrifyWeaponToType)(Entity * ent, int type) = (void (*)(Entity * ent, int type)) 0x459a20;
inline String * (*Level::ptr::GetNPCSaleItem)(int npcNum, int slotNum, String * exclude1, String * exclude2) = (String * (*)(int npcNum, int slotNum, String * exclude1, String * exclude2)) 0x459d30;
inline void (*Level::ptr::GenerateJanitorItems)() = (void (*)()) 0x45b070;
inline void (*Level::ptr::RemoveTileAt)(int xVal, int yVal) = (void (*)(int xVal, int yVal)) 0x45b630;
inline void (*Level::ptr::_SetMagicBarrierAt)(int arg1, int arg2, bool arg3) = (void (*)(int arg1, int arg2, bool arg3)) 0x0;
inline void (*Level::ptr::SetMagicBarrier)(bool on) = (void (*)(bool on)) 0x45b6d0;
inline bool (*Level::ptr::IsDoorAt)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x45b8b0;
inline void (*Level::ptr::CloseInOuterWalls)() = (void (*)()) 0x45b910;
inline int (*Level::ptr::ActivateTrigger)(int triggerNum, Entity * ent, RenderableObject * target) = (int (*)(int triggerNum, Entity * ent, RenderableObject * target)) 0x45be80;
inline bool (*Level::ptr::IsNormalFloorAt)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x45fbf0;
inline void (*Level::ptr::Earthquake)(int xVal, int yVal) = (void (*)(int xVal, int yVal)) 0x45fc50;
inline bool (*Level::ptr::_IsHotCoalAt)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x0;
inline void (*Level::ptr::PlaceIceTileAt)(int xVal, int yVal) = (void (*)(int xVal, int yVal)) 0x45fec0;
inline void (*Level::ptr::FreezeTilesNear)(int xVal, int yVal, bool allTiles) = (void (*)(int xVal, int yVal, bool allTiles)) 0x45ffb0;
inline bool (*Level::ptr::_AllowEarthSpell)() = (bool (*)()) 0x0;
inline Point * (*Level::ptr::GetStandardExitCoords)() = (Point * (*)()) 0x4603a0;
inline bool (*Level::ptr::_AllCharsAnyComplete)() = (bool (*)()) 0x0;
inline bool (*Level::ptr::_AllCharsDLCAnyComplete)() = (bool (*)()) 0x0;
inline int (*Level::ptr::GetSingleZoneModeFinalBossZone)() = (int (*)()) 0x460410;
inline bool (*Level::ptr::IsFinalBossZone)() = (bool (*)()) 0x460480;
inline void (*Level::ptr::MakeHelper)() = (void (*)()) 0x4604b0;
inline bool (*Level::ptr::IsSeededMode)(int mode) = (bool (*)(int mode)) 0x460780;
inline void (*Level::ptr::DeleteMap)() = (void (*)()) 0x4607b0;
inline void (*Level::ptr::InitNewMap)(bool saveGameData) = (void (*)(bool saveGameData)) 0x460b80;
inline bool (*Level::ptr::IsSecretRoom)(int rmType) = (bool (*)(int rmType)) 0x460cf0;
inline void (*Level::ptr::CarveCorridorTile)(int xVal, int yVal, bool horiz, bool pending, bool skipWalls, int roomType, bool wideCorridor) = (void (*)(int xVal, int yVal, bool horiz, bool pending, bool skipWalls, int roomType, bool wideCorridor)) 0x460d00;
inline void (*Level::ptr::AddExit)(int xVal, int yVal, int levelPointer, int zonePointer) = (void (*)(int xVal, int yVal, int levelPointer, int zonePointer)) 0x460fe0;
inline bool (*Level::ptr::_IsNotIndestructibleWallAt)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x0;
inline void (*Level::ptr::CreateIndestructibleBorder)() = (void (*)()) 0x4610e0;
inline void (*Level::ptr::CreateTutorialMap)() = (void (*)()) 0x462120;
inline void (*Level::ptr::_DisableLevelConstraints)() = (void (*)()) 0x0;
inline void (*Level::ptr::PaintTriggerInterior)(int x, int y, int w, int h, int trigger) = (void (*)(int x, int y, int w, int h, int trigger)) 0x464520;
inline Point * (*Level::ptr::GetRandomOffsetPoint)() = (Point * (*)()) 0x4645c0;
inline bool (*Level::ptr::IsExitAt)(int x, int y) = (bool (*)(int x, int y)) 0x464840;
inline void (*Level::ptr::CreateFinalBossBattleConductor)() = (void (*)()) 0x4648b0;
inline void (*Level::ptr::CreateFinalBossBattle3)() = (void (*)()) 0x466cb0;
inline void (*Level::ptr::CreateFinalBossBattle2)() = (void (*)()) 0x468ba0;
inline void (*Level::ptr::UnlockChar)(int characterID) = (void (*)(int characterID)) 0x46a7a0;
inline void (*Level::ptr::CreateFinalBossBattle)() = (void (*)()) 0x46a910;
inline bool (*Level::ptr::IsFreeLevelForSpecialRoom)(int tempLevel, int tempDepth) = (bool (*)(int tempLevel, int tempDepth)) 0x46ec30;
inline void (*Level::ptr::CreateExit)(int exitX, int exitY) = (void (*)(int exitX, int exitY)) 0x46ecd0;
inline bool (*Level::ptr::IsWireLikeAt)(int x, int y) = (bool (*)(int x, int y)) 0x46ee40;
inline bool (*Level::ptr::_IsFloorAdjacent)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x0;
inline void (*Level::ptr::AddCrackedWall)(int roomType) = (void (*)(int roomType)) 0x46ee80;
inline String * (*Level::ptr::RandomFood)() = (String * (*)()) 0x46f320;
inline void (*Level::ptr::PlaceSecondarySpecialShop)(bool useBloodCost, bool isFoodShop) = (void (*)(bool useBloodCost, bool isFoodShop)) 0x46f4e0;
inline void (*Level::ptr::AddSpecialRoom)(int roomType, bool addCrack) = (void (*)(int roomType, bool addCrack)) 0x46f8a0;
inline void (*Level::ptr::CreateSwarmMap)() = (void (*)()) 0x472700;
inline RoomData * (*Level::ptr::PlaceFirstRoom)() = (RoomData * (*)()) 0x4727d0;
inline void (*Level::ptr::DumpMap)() = (void (*)()) 0x4729a0;
inline void (*Level::ptr::FillTiles)(Rect * rect, int tileType, int tileTypeEdge) = (void (*)(Rect * rect, int tileType, int tileTypeEdge)) 0x472f90;
inline void (*Level::ptr::PlaceConnectedWireDoor)(Point * p) = (void (*)(Point * p)) 0x473180;
inline bool (*Level::ptr::IsZone5RoomLegal)(Rect * loc) = (bool (*)(Rect * loc)) 0x473380;
inline RoomWithDoor * (*Level::ptr::PlaceRoomZone5)(PortalSeg * pseg, int width, int height, int minEntryDist) = (RoomWithDoor * (*)(PortalSeg * pseg, int width, int height, int minEntryDist)) 0x473430;
inline bool (*Level::ptr::IsDoorAdjacent)(int x, int y) = (bool (*)(int x, int y)) 0x4737a0;
inline void (*Level::ptr::PlaceShopItemsAt)(int tmpX, int tmpY, Rect * door) = (void (*)(int tmpX, int tmpY, Rect * door)) 0x473840;
inline void (*Level::ptr::CreateRoomZone5)(RoomWithDoor * rm, int roomType) = (void (*)(RoomWithDoor * rm, int roomType)) 0x4750d0;
inline RoomWithDoor * (*Level::ptr::PlaceRoomZone52)(StackEx3 * portalSegs, int width, int height, int minEntryDist, int roomType) = (RoomWithDoor * (*)(StackEx3 * portalSegs, int width, int height, int minEntryDist, int roomType)) 0x475460;
inline bool (*Level::ptr::IsWallAdjacent8)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x4754e0;
inline bool (*Level::ptr::PlaceWire)(Point * src, Point * dst) = (bool (*)(Point * src, Point * dst)) 0x4755a0;
inline void (*Level::ptr::_DecorateTerminalZone5)(Point * arg1) = (void (*)(Point * arg1)) 0x0;
inline bool (*Level::ptr::IsTileTypeAdjacent)(int xVal, int yVal, int tempType) = (bool (*)(int xVal, int yVal, int tempType)) 0x475cb0;
inline void (*Level::ptr::RandomWalkOfTempTiles)(int xVal, int yVal, int distCounter) = (void (*)(int xVal, int yVal, int distCounter)) 0x475d00;
inline void (*Level::ptr::PadWalls)() = (void (*)()) 0x475f60;
inline void (*Level::ptr::ProcessSpecialRoom)() = (void (*)()) 0x4761b0;
inline bool (*Level::ptr::_IsCorridorOrRoomWallAt)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x0;
inline bool (*Level::ptr::IsSurroundedByDestructibleWalls)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x4763d0;
inline bool (*Level::ptr::IsCrackedWallAt)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x476480;
inline bool (*Level::ptr::IsCrackedWallAdjacent)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x4764e0;
inline void (*Level::ptr::PlaceSecretRooms)(int numRooms) = (void (*)(int numRooms)) 0x4765b0;
inline void (*Level::ptr::FillVault)(RoomData * tmpRoom) = (void (*)(RoomData * tmpRoom)) 0x476ef0;
inline Point * (*Level::ptr::GetRandPointInRoomWithOptions)(RoomBase * room, bool skipCollisions, bool skipExit, bool skipTraps, bool skipWater, bool nearWallIsOk, bool secretRoomOK) = (Point * (*)(RoomBase * room, bool skipCollisions, bool skipExit, bool skipTraps, bool skipWater, bool nearWallIsOk, bool secretRoomOK)) 0x477fb0;
inline Point * (*Level::ptr::GetRandPointInRoomWithOptions2)(int xVal, int yVal, int wVal, int hVal, bool skipCollisions, bool skipExit, bool skipTraps, bool skipWater, bool nearWallIsOk, bool secretRoomOK) = (Point * (*)(int xVal, int yVal, int wVal, int hVal, bool skipCollisions, bool skipExit, bool skipTraps, bool skipWater, bool nearWallIsOk, bool secretRoomOK)) 0x478250;
inline int (*Level::ptr::_GetAppropriateCoins)() = (int (*)()) 0x0;
inline void (*Level::ptr::PutCrateOrBarrel)(int x, int y) = (void (*)(int x, int y)) 0x4783b0;
inline void (*Level::ptr::MakeInvisibleChestAt)(int tmpX, int tmpY) = (void (*)(int tmpX, int tmpY)) 0x478650;
inline bool (*Level::ptr::AllowSpirit)() = (bool (*)()) 0x478780;
inline bool (*Level::ptr::FillSecretRoomsZone4)() = (bool (*)()) 0x4787a0;
inline bool (*Level::ptr::FillSecretRoomsZone2)() = (bool (*)()) 0x479fd0;
inline bool (*Level::ptr::MaybeForbidTrapdoor)() = (bool (*)()) 0x47b6c0;
inline bool (*Level::ptr::FillSecretRoomsZone1)() = (bool (*)()) 0x47b770;
inline bool (*Level::ptr::FillSecretRooms)() = (bool (*)()) 0x47d280;
inline void (*Level::ptr::AddStone)() = (void (*)()) 0x47d2b0;
inline bool (*Level::ptr::IsCorridorFloorOrDoorAdjacent)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x47d720;
inline Trap * (*Level::ptr::PlaceTrapInRoom)(int xVal, int yVal, int wVal, int hVal, int trapType, int bounceDir, Trap * twoAwayTrap) = (Trap * (*)(int xVal, int yVal, int wVal, int hVal, int trapType, int bounceDir, Trap * twoAwayTrap)) 0x47d7f0;
inline void (*Level::ptr::PlaceTrapZone5)(int xVal, int yVal, int wVal, int hVal) = (void (*)(int xVal, int yVal, int wVal, int hVal)) 0x47e250;
inline void (*Level::ptr::PlaceTrapsZone5)() = (void (*)()) 0x47e340;
inline void (*Level::ptr::PlaceTrapZone4)(int xVal, int yVal, int wVal, int hVal) = (void (*)(int xVal, int yVal, int wVal, int hVal)) 0x47e930;
inline void (*Level::ptr::PlaceTrapsZone4)() = (void (*)()) 0x47ea20;
inline void (*Level::ptr::PlaceTrapZone3)(int xVal, int yVal, int wVal, int hVal) = (void (*)(int xVal, int yVal, int wVal, int hVal)) 0x47f6a0;
inline void (*Level::ptr::PlaceTrapsZone3)() = (void (*)()) 0x47f780;
inline void (*Level::ptr::PlaceTrapsZone2)() = (void (*)()) 0x47ffd0;
inline void (*Level::ptr::PlaceTrapsZone1)() = (void (*)()) 0x480bb0;
inline void (*Level::ptr::PlaceTraps)() = (void (*)()) 0x4815f0;
inline XMLNode * (*Level::ptr::GetHardModeXML)() = (XMLNode * (*)()) 0x481730;
inline Enemy * (*Level::ptr::PlaceMinibossOfShapeAt)(int newMiniboss, int xVal, int yVal) = (Enemy * (*)(int newMiniboss, int xVal, int yVal)) 0x481850;
inline void (*Level::ptr::_PostProcessMiniboss)(Enemy * arg1) = (void (*)(Enemy * arg1)) 0x0;
inline void (*Level::ptr::PlaceAppropriateMinibosses)(RoomBase * room) = (void (*)(RoomBase * room)) 0x481e10;
inline void (*Level::ptr::PlaceShopkeeperGhostIfNeededAt)(int xVal, int yVal) = (void (*)(int xVal, int yVal)) 0x4824a0;
inline void (*Level::ptr::_PlaceExitRoomMiniboss)(RoomBase * arg1) = (void (*)(RoomBase * arg1)) 0x0;
inline int (*Level::ptr::_GetZone3ElementalType)(int arg1, int arg2) = (int (*)(int arg1, int arg2)) 0x0;
inline int (*Level::ptr::_GetZone3YetiHellhoundType)(int arg1, int arg2) = (int (*)(int arg1, int arg2)) 0x0;
inline int (*Level::ptr::_GetZone3BeetleType)(int arg1, int arg2) = (int (*)(int arg1, int arg2)) 0x0;
inline void (*Level::ptr::PlaceRareEnemies)(RoomBase * room, bool hasExit) = (void (*)(RoomBase * room, bool hasExit)) 0x482550;
inline Point * (*Level::ptr::GetRandPointInRoomOfTileType)(RoomBase * room, int tileType, bool skipCollisions) = (Point * (*)(RoomBase * room, int tileType, bool skipCollisions)) 0x482df0;
inline Point * (*Level::ptr::GetRandPointInRoomOfTileType2)(int xVal, int yVal, int wVal, int hVal, int tileType, bool skipCollisions) = (Point * (*)(int xVal, int yVal, int wVal, int hVal, int tileType, bool skipCollisions)) 0x482f40;
inline int (*Level::ptr::GetHardModeExtraEnemies)() = (int (*)()) 0x4830a0;
inline int (*Level::ptr::GetExtraEnemiesBase)() = (int (*)()) 0x483190;
inline void (*Level::ptr::PutVariedEnemiesZone5)(StackEx2 * pts) = (void (*)(StackEx2 * pts)) 0x483260;
inline void (*Level::ptr::PutEnemyZone5)(int x, int y) = (void (*)(int x, int y)) 0x4839e0;
inline void (*Level::ptr::PutRoomEnemiesZone5)(RoomBase * room, bool hasExit) = (void (*)(RoomBase * room, bool hasExit)) 0x483af0;
inline void (*Level::ptr::PlaceRandomEnemyForTempo)(int xVal, int yVal) = (void (*)(int xVal, int yVal)) 0x4844f0;
inline void (*Level::ptr::PlaceEnemiesZone5)() = (void (*)()) 0x4853c0;
inline Enemy * (*Level::ptr::PlaceGargoyle)(int xVal, int yVal, int l) = (Enemy * (*)(int xVal, int yVal, int l)) 0x485820;
inline void (*Level::ptr::PlaceEnemiesZone4)() = (void (*)()) 0x485980;
inline Enemy * (*Level::ptr::PlaceZone3Cauldron)(int xVal, int yVal) = (Enemy * (*)(int xVal, int yVal)) 0x487030;
inline Enemy * (*Level::ptr::PlaceZone3YetiHellhound)(int xVal, int yVal) = (Enemy * (*)(int xVal, int yVal)) 0x487180;
inline Enemy * (*Level::ptr::PlaceZone3Elemental)(int xVal, int yVal) = (Enemy * (*)(int xVal, int yVal)) 0x4871d0;
inline Enemy * (*Level::ptr::PlaceZone3Slime)(int xVal, int yVal) = (Enemy * (*)(int xVal, int yVal)) 0x487210;
inline Enemy * (*Level::ptr::PlaceZone3Beetle)(int xVal, int yVal) = (Enemy * (*)(int xVal, int yVal)) 0x487320;
inline void (*Level::ptr::PlaceEnemiesZone3)() = (void (*)()) 0x487360;
inline void (*Level::ptr::PlaceEnemiesZone2)() = (void (*)()) 0x4898e0;
inline void (*Level::ptr::PlaceEnemiesZone1)() = (void (*)()) 0x48d130;
inline void (*Level::ptr::PlaceEnemies)() = (void (*)()) 0x490ab0;
inline Point * (*Level::ptr::FindTileOfType)(int tileType, bool ignoreCrackedWalls) = (Point * (*)(int tileType, bool ignoreCrackedWalls)) 0x490e90;
inline float (*Level::ptr::GetDistanceToNearestTorch)(RenderableObject * r) = (float (*)(RenderableObject * r)) 0x491130;
inline void (*Level::ptr::PlaceTorchesAnywhere)() = (void (*)()) 0x491260;
inline bool (*Level::ptr::IsCorridorFloorAt)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x491450;
inline void (*Level::ptr::PlaceCrateOrBarrel)() = (void (*)()) 0x4914b0;
inline bool (*Level::ptr::DoWePlaceAdditionalChestThisLevel)() = (bool (*)()) 0x491800;
inline bool (*Level::ptr::PlaceAdditionalChestAt)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x491a00;
inline void (*Level::ptr::PlaceZoneAppropriateNumberOfDiamondsAt)(int xVal, int yVal) = (void (*)(int xVal, int yVal)) 0x491d70;
inline void (*Level::ptr::PlaceChests)(bool freeBroadSword) = (void (*)(bool freeBroadSword)) 0x491f90;
inline void (*Level::ptr::PlaceResourceWall)() = (void (*)()) 0x493270;
inline void (*Level::ptr::PlaceLockedChests)() = (void (*)()) 0x493420;
inline bool (*Level::ptr::_IsShrineFriendlyPoint)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x0;
inline Point * (*Level::ptr::GetShrinePoint)() = (Point * (*)()) 0x4935b0;
inline void (*Level::ptr::PlaceShrine)() = (void (*)()) 0x4937b0;
inline bool (*Level::ptr::CreateMapZone5)(bool recursive) = (bool (*)(bool recursive)) 0x493a60;
inline RoomData * (*Level::ptr::PlaceRoomZone4)(int roomType) = (RoomData * (*)(int roomType)) 0x495cb0;
inline void (*Level::ptr::AddHarderStone)() = (void (*)()) 0x496590;
inline void (*Level::ptr::CheckMapConsistency)() = (void (*)()) 0x496a40;
inline void (*Level::ptr::PlaceNocturnaArea)() = (void (*)()) 0x4975c0;
inline bool (*Level::ptr::CreateMapZone4)(bool recursive) = (bool (*)(bool recursive)) 0x499910;
inline bool (*Level::ptr::CarveNewCorridor)(int moveX, int moveY, bool horiz, bool pending, bool secondaryCarve, int roomType, bool wideCorridor) = (bool (*)(int moveX, int moveY, bool horiz, bool pending, bool secondaryCarve, int roomType, bool wideCorridor)) 0x49bc10;
inline RoomData * (*Level::ptr::PlaceRoomZone3)(int roomType, RoomData * roomToAttachTo) = (RoomData * (*)(int roomType, RoomData * roomToAttachTo)) 0x49bd50;
inline bool (*Level::ptr::PlaceExit)(RoomData * rdExit) = (bool (*)(RoomData * rdExit)) 0x49cae0;
inline void (*Level::ptr::RemoveSomeWallsAwayFromCorridors)(float percentToRemove, bool includeCorridors, int maxHealth) = (void (*)(float percentToRemove, bool includeCorridors, int maxHealth)) 0x49ce70;
inline void (*Level::ptr::WidenCorridors)() = (void (*)()) 0x49d450;
inline bool (*Level::ptr::IsTrapOrExitAbove)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x49d750;
inline void (*Level::ptr::AddSomePillarsInOpenSpace)() = (void (*)()) 0x49d7d0;
inline Point * (*Level::ptr::GetRandomWallInRoom)(int xVal, int yVal, int wVal, int hVal) = (Point * (*)(int xVal, int yVal, int wVal, int hVal)) 0x49de30;
inline bool (*Level::ptr::CreateMapZone3)() = (bool (*)()) 0x49e170;
inline RoomData * (*Level::ptr::PlaceRoomZone2)(int roomType, RoomData * roomToAttachTo) = (RoomData * (*)(int roomType, RoomData * roomToAttachTo)) 0x49f080;
inline bool (*Level::ptr::CreateMapZone2)() = (bool (*)()) 0x49fbe0;
inline RoomData * (*Level::ptr::PlaceRoomZone1)(int roomType, RoomData * roomToAttachTo) = (RoomData * (*)(int roomType, RoomData * roomToAttachTo)) 0x4a1320;
inline bool (*Level::ptr::CreateMapZone1)() = (bool (*)()) 0x4a23c0;
inline bool (*Level::ptr::IsPassable)() = (bool (*)()) 0x4a3570;
inline bool (*Level::ptr::WantPenaltyBox)() = (bool (*)()) 0x4a3850;
inline void (*Level::ptr::PlacePenaltyBoxEnemies)() = (void (*)()) 0x4a3890;
inline void (*Level::ptr::AddMinibossWall)(int xVal, int yVal, int wallType) = (void (*)(int xVal, int yVal, int wallType)) 0x4a3f50;
inline bool (*Level::ptr::CreateMap)(LevelObject * levelObj) = (bool (*)(LevelObject * levelObj)) 0x4a4160;
inline bool (*Level::ptr::_AllCharsAllComplete)() = (bool (*)()) 0x0;
inline bool (*Level::ptr::_AllCharsDLCAllComplete)() = (bool (*)()) 0x0;
inline int (*Level::ptr::GetInitialZone)() = (int (*)()) 0x4a5480;
inline void (*Level::ptr::DoQuickRestart)(bool continuedRun, bool showPopups, bool playIntroCutscene) = (void (*)(bool continuedRun, bool showPopups, bool playIntroCutscene)) 0x4a54c0;
inline void (*Level::ptr::PutFutureStair)(int x, int y) = (void (*)(int x, int y)) 0x4a5eb0;
inline void (*Level::ptr::MakeAllWallsUnbreakable)() = (void (*)()) 0x4a6170;
inline void (*Level::ptr::CreateCharSelect)() = (void (*)()) 0x4a6210;
inline void (*Level::ptr::CreateBeastmasterZone1)() = (void (*)()) 0x4a76f0;
inline void (*Level::ptr::CreateBeastmasterZone2)() = (void (*)()) 0x4ab9a0;
inline void (*Level::ptr::CreateBeastmasterZone3)() = (void (*)()) 0x4b0030;
inline void (*Level::ptr::CreateBeastmasterZone4)() = (void (*)()) 0x4b46d0;
inline void (*Level::ptr::PutBeastmasterStairs)(int x, int y, String * stairName, String * enemyName, int enemyType, int enemyId, String * stairNamePrefix) = (void (*)(int x, int y, String * stairName, String * enemyName, int enemyType, int enemyId, String * stairNamePrefix)) 0x4b9380;
inline void (*Level::ptr::CreateBeastmasterZone5)() = (void (*)()) 0x4b97f0;
inline void (*Level::ptr::PutMinibossStair)(int x, int y, String * minibossName, int enemyType, String * label, int labelXOff) = (void (*)(int x, int y, String * minibossName, int enemyType, String * label, int labelXOff)) 0x4bd320;
inline void (*Level::ptr::CreateBossmasterMinibosses)() = (void (*)()) 0x4bd640;
inline void (*Level::ptr::PutBossStair)(int x, int y, String * bossName, int enemyType, int zone, String * label, int labelXOff) = (void (*)(int x, int y, String * bossName, int enemyType, int zone, String * label, int labelXOff)) 0x4bfff0;
inline void (*Level::ptr::CreateBossmasterBosses)() = (void (*)()) 0x4c04c0;
inline void (*Level::ptr::CreateExtraModesSelect)() = (void (*)()) 0x4c3b60;
inline void (*Level::ptr::EnsureBossTraining)(String * name) = (void (*)(String * name)) 0x4c7020;
inline bool (*Level::ptr::QueryHarderBosses)() = (bool (*)()) 0x4c70d0;
inline void (*Level::ptr::TrySpawnBossMinibossAt)(int x, int y, int etype) = (void (*)(int x, int y, int etype)) 0x4c71b0;
inline void (*Level::ptr::BossMaybeMinibossesAt)(int x1, int y1, int x2, int y2) = (void (*)(int x1, int y1, int x2, int y2)) 0x4c7420;
inline void (*Level::ptr::CreateBossBattle1)() = (void (*)()) 0x4c74f0;
inline void (*Level::ptr::CreateBossBattle2)() = (void (*)()) 0x4cad60;
inline void (*Level::ptr::CreateBossBattle3)() = (void (*)()) 0x4ccca0;
inline void (*Level::ptr::CreateBossBattle4)() = (void (*)()) 0x4cf4f0;
inline void (*Level::ptr::CreateBossBattle5)() = (void (*)()) 0x4d1420;
inline void (*Level::ptr::CreateBossBattle9)() = (void (*)()) 0x4d35f0;
inline void (*Level::ptr::CreateBossBattleFrankensteinway)() = (void (*)()) 0x4d5710;
inline void (*Level::ptr::CreateBossBattle)() = (void (*)()) 0x4d7350;
inline void (*Level::ptr::CreateTrainingMap)() = (void (*)()) 0x4d7f10;
inline void (*Level::ptr::CreateTestMap)() = (void (*)()) 0x4d9670;
inline void (*Level::ptr::CreateDungeonMaster)() = (void (*)()) 0x4d9e00;
inline void (*Level::ptr::CreateMerlin)() = (void (*)()) 0x4dae90;
inline void (*Level::ptr::CreateHephaestus)() = (void (*)()) 0x4dc140;
inline void (*Level::ptr::CreateBeastmaster)() = (void (*)()) 0x4dd110;
inline void (*Level::ptr::CreateBossmaster)() = (void (*)()) 0x4deca0;
inline void (*Level::ptr::CreateWeaponmaster)() = (void (*)()) 0x4dfa50;
inline void (*Level::ptr::CreateTrainer)() = (void (*)()) 0x4e2c80;
inline void (*Level::ptr::CreateJanitor)() = (void (*)()) 0x4e4490;
inline void (*Level::ptr::CreateDiamondDealer)() = (void (*)()) 0x4e4c00;
inline void (*Level::ptr::CreateLobby)() = (void (*)()) 0x4e5d20;
inline void (*Level::ptr::CreateAllCharsSelect)() = (void (*)()) 0x4e9760;
inline void (*Level::ptr::CreateAllCharsDLCSelect)() = (void (*)()) 0x4ea1d0;
inline void (*Level::ptr::GenerateHardcoreZoneOrder)() = (void (*)()) 0x4eac40;
inline void (*Level::ptr::LoadLevelSong)(LevelObject * levelObj) = (void (*)(LevelObject * levelObj)) 0x4eafb0;
inline void (*Level::ptr::NewLevel)(int level, int zone, int playerID, bool inEditor, LevelObject * levelObj, bool continuedRun) = (void (*)(int level, int zone, int playerID, bool inEditor, LevelObject * levelObj, bool continuedRun)) 0x4ebda0;
inline void (*Level::ptr::DoRestart)() = (void (*)()) 0x4f26d0;
inline IntPointList * (*Level::ptr::GetTileObstructionList)(bool includeOffscreen) = (IntPointList * (*)(bool includeOffscreen)) 0x4f2710;
inline void (*Level::ptr::RefreshLineOfSightTiles)() = (void (*)()) 0x4f2870;
inline bool (*Level::ptr::_IsTarAt)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x0;
inline String * (*Level::ptr::GetTileFlyawayAt)(int xVal, int yVal) = (String * (*)(int xVal, int yVal)) 0x4f3160;
inline void (*Level::ptr::_ModifyReplayBeatOffset)(int arg1) = (void (*)(int arg1)) 0x0;
inline void (*Level::ptr::StartReplayPlayback)() = (void (*)()) 0x4f3210;
inline void (*Level::ptr::PlaceHotCoalTileAt)(int xVal, int yVal) = (void (*)(int xVal, int yVal)) 0x4f3640;
inline void (*Level::ptr::AdvanceLevel)() = (void (*)()) 0x4f3760;
inline void (*Level::ptr::_RecordBeat)(int arg1) = (void (*)(int arg1)) 0x0;
inline void (*Level::ptr::_RecordMove)(int arg1, int arg2, int arg3, bool arg4) = (void (*)(int arg1, int arg2, int arg3, bool arg4)) 0x0;
inline void (*Level::ptr::_RecordMissedBeat)(int arg1, int arg2) = (void (*)(int arg1, int arg2)) 0x0;
inline void (*Level::ptr::TakeActionAfterAllCharsScoreSubmit)() = (void (*)()) 0x4f37d0;
inline int (*Level::ptr::_PixelToTileCoord)(float arg1) = (int (*)(float arg1)) 0x0;
inline void (*Level::ptr::JanitorReset)() = (void (*)()) 0x4f3a40;
inline void (*Level::ptr::MarkAllTilesAsSeen)() = (void (*)()) 0x4f3d50;
inline void (*Level::ptr::Update)() = (void (*)()) 0x4f3dd0;
inline void (*Level::ptr::RenderAll)() = (void (*)()) 0x4f5840;
inline void (*Level::ptr::RenderExitArrow)() = (void (*)()) 0x4f58c0;
inline void (*Level::ptr::_RenderMinimap)() = (void (*)()) 0x0;
inline int (*Level::ptr::GetAdjustedZoneForAllChars)() = (int (*)()) 0x4f5d80;
inline int (*Level::ptr::GetAdjustedZoneForAllCharsDLC)() = (int (*)()) 0x4f5e20;
inline int (*Level::ptr::GetAdjustedZoneForStoryMode)() = (int (*)()) 0x4f5e90;
inline bool (*Level::ptr::ShopkeeperMissing)() = (bool (*)()) 0x4f5f20;
inline bool (*Level::ptr::_IsInShop)(int arg1, int arg2, int arg3) = (bool (*)(int arg1, int arg2, int arg3)) 0x0;
inline void (*Level::ptr::RemoveExit)(int xVal, int yVal) = (void (*)(int xVal, int yVal)) 0x4f5f40;
inline float (*Level::ptr::ActuallyGetMapTileLightValue)(int xVal, int yVal, bool forVision) = (float (*)(int xVal, int yVal, bool forVision)) 0x4f5fe0;
inline void (*Level::ptr::_SetMapTileLightValue)(int arg1, int arg2, float arg3) = (void (*)(int arg1, int arg2, float arg3)) 0x0;
inline void (*Level::ptr::_AddToMapTileLightValue)(int arg1, int arg2, float arg3, bool arg4) = (void (*)(int arg1, int arg2, float arg3, bool arg4)) 0x0;
inline float (*Level::ptr::GetMapTileLightValue)(int xVal, int yVal, bool forVision) = (float (*)(int xVal, int yVal, bool forVision)) 0x4f6040;
inline void (*Level::ptr::ClearTextLabelAt)(int xVal, int yVal) = (void (*)(int xVal, int yVal)) 0x4f65a0;
inline bool (*Level::ptr::IsAnyWallAt)(Rect * r) = (bool (*)(Rect * r)) 0x4f6600;
inline bool (*Level::ptr::IsAnyPlayerWithinShop)() = (bool (*)()) 0x4f66c0;
inline bool (*Level::ptr::IsWallAdjacent)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x4f6750;
inline bool (*Level::ptr::IsAnyWaterAt)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x4f67c0;
inline void (*Level::ptr::DryUpAllWater)(int replacementFloor) = (void (*)(int replacementFloor)) 0x4f67f0;
inline bool (*Level::ptr::IsVisibleTileAt)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x4f6ab0;
inline void (*Level::ptr::PlaceTileTypeAt)(int xVal, int yVal, int tileType) = (void (*)(int xVal, int yVal, int tileType)) 0x4f6b10;
inline void (*Level::ptr::_PlaceMagneticTileAt)(int arg1, int arg2) = (void (*)(int arg1, int arg2)) 0x0;
inline void (*Level::ptr::_PlaceTarTileAt)(int arg1, int arg2) = (void (*)(int arg1, int arg2)) 0x0;
inline bool (*Level::ptr::CheckLOS)(int x1, int y1, int x2, int y2, bool includeOffscreen) = (bool (*)(int x1, int y1, int x2, int y2, bool includeOffscreen)) 0x4f6cc0;
inline void (*Level::ptr::_PlaceWaterTileAt)(int arg1, int arg2) = (void (*)(int arg1, int arg2)) 0x0;
inline bool (*Level::ptr::IsTrapAdjacent)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x4f73b0;
inline void (*Level::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__
inline bool * Level::isReplaying = (bool*) 0x856aadc;
inline ControllerPopUp * * Level::popUpController = (ControllerPopUp* *) 0x856aad8;
inline int * Level::popUpType = (int*) 0x856aad4;
inline bool * Level::outsideBossChamber = (bool*) 0x856aad3;
inline bool * Level::pacifismModeOn = (bool*) 0x856aad2;
inline bool * Level::shopkeeperDead = (bool*) 0x856aad1;
inline bool * Level::shopkeeperFell = (bool*) 0x856aad0;
inline int * Level::placeLordOnLevel = (int*) 0x856aacc;
inline IntMap * * Level::placeShrineOnLevel = (IntMap* *) 0x856aac8;
inline int * Level::placeTransmogrifierOnLevel = (int*) 0x856aac4;
inline int * Level::placeTransmogrifierOnDepth = (int*) 0x856aac0;
inline int * Level::placeArenaOnLevel = (int*) 0x856aabc;
inline int * Level::placeArenaOnDepth = (int*) 0x856aab8;
inline bool * Level::placedArena = (bool*) 0x856aab4;
inline int * Level::placeGlassShopOnLevel = (int*) 0x856aab0;
inline int * Level::placeGlassShopOnDepth = (int*) 0x856aaac;
inline int * Level::placeBloodShopOnLevel = (int*) 0x856aaa8;
inline int * Level::placeBloodShopOnDepth = (int*) 0x856aaa4;
inline int * Level::placeFoodShopOnLevel = (int*) 0x856aaa0;
inline int * Level::placeFoodShopOnDepth = (int*) 0x856aa9c;
inline int * Level::placeConjurerOnLevel = (int*) 0x856aa98;
inline int * Level::placeConjurerOnDepth = (int*) 0x856aa94;
inline int * Level::placeShrinerOnLevel = (int*) 0x856aa90;
inline int * Level::placeShrinerOnDepth = (int*) 0x856aa8c;
inline int * Level::placePawnbrokerOnLevel = (int*) 0x856aa88;
inline int * Level::placePawnbrokerOnDepth = (int*) 0x856aa84;
inline int * Level::randSeed = (int*) 0x856aa80;
inline int * Level::nonDeterministicMSStart = (int*) 0x856aa7c;
inline RNG * * Level::wholeRunRNG = (RNG* *) 0x856aa78;
inline RNG * * Level::currentFloorRNG = (RNG* *) 0x856aa74;
inline IntSet * * Level::usedBosses = (IntSet* *) 0x856aa70;
inline bool * Level::isSeededMode = (bool*) 0x856aa6e;
inline bool * Level::isHardcoreMode = (bool*) 0x856aa6d;
inline bool * Level::isDailyChallenge = (bool*) 0x856aa6c;
inline bool * Level::isDDRMode = (bool*) 0x856aa6b;
inline bool * Level::isSwarmMode = (bool*) 0x856aa6a;
inline bool * Level::isNoReturnMode = (bool*) 0x856aa69;
inline bool * Level::isSoulMode = (bool*) 0x856aa68;
inline bool * Level::isHardMode = (bool*) 0x856aa67;
inline bool * Level::isFloorIsLavaMode = (bool*) 0x856aa66;
inline bool * Level::isPhasingMode = (bool*) 0x856aa65;
inline bool * Level::isRandomizerMode = (bool*) 0x856aa64;
inline bool * Level::isMysteryMode = (bool*) 0x856aa63;
inline bool * Level::isTrainingMode = (bool*) 0x856aa62;
inline bool * Level::isBeastmaster = (bool*) 0x856aa61;
inline bool * Level::playedVictoryCutscene = (bool*) 0x856aa60;
inline int * Level::mentorLevel = (int*) 0x856aa5c;
inline bool * Level::isStoryMode = (bool*) 0x856aa59;
inline bool * Level::isDeathlessMode = (bool*) 0x856aa58;
inline int * Level::deathlessWinCount = (int*) 0x856aa54;
inline bool * Level::isAllCharactersMode = (bool*) 0x856aa51;
inline bool * Level::isAllCharactersDLCMode = (bool*) 0x856aa50;
inline int * Level::continuedRunCoinScore = (int*) 0x856aa4c;
inline bool * Level::isLevelEditor = (bool*) 0x856aa49;
inline bool * Level::lockedShopPlaced = (bool*) 0x856aa48;
inline bool * Level::secretRockRoomPlaced = (bool*) 0x856aa47;
inline bool * Level::isRunNoItemsNoShrines = (bool*) 0x856aa46;
inline bool * Level::placedUrnThisRun = (bool*) 0x856aa45;
inline bool * Level::usedCustomMusic = (bool*) 0x856aa44;
inline int * Level::shopkeeperGhostLevel = (int*) 0x856aa40;
inline int * Level::shopkeeperGhostDepth = (int*) 0x856aa3c;
inline IntMap5 * * Level::tiles = (IntMap5* *) 0x856aa38;
inline int * Level::forceBoss = (int*) 0x856aa34;
inline ExitMap * * Level::exits = (ExitMap* *) 0x856aa30;
inline bool * Level::creatingMap = (bool*) 0x856aa2c;
inline Replay * * Level::replay = (Replay* *) 0x856aa28;
inline int * Level::bossNumber = (int*) 0x856aa24;
inline bool * Level::isAnyTar = (bool*) 0x856aa20;
inline float * Level::zone3DividingLineX = (float*) 0x856aa1c;
inline float * Level::zone3DividingLineY = (float*) 0x856aa18;
inline bool * Level::isConductorLevel = (bool*) 0x856aa14;
inline IntMap5 * * Level::pendingTiles = (IntMap5* *) 0x856aa10;
inline Transmogrifier * * Level::transmogrifier = (Transmogrifier* *) 0x856aa0c;
inline Conjurer * * Level::conjurer = (Conjurer* *) 0x856aa08;
inline bool * Level::flawlessVictory = (bool*) 0x856aa04;
inline int * Level::secretAtX = (int*) 0x856aa00;
inline int * Level::secretAtY = (int*) 0x856a9fc;
inline IntList * * Level::triggerList = (IntList* *) 0x856a9f8;
inline int * Level::levelConstraintX = (int*) 0x856a9f4;
inline int * Level::levelConstraintY = (int*) 0x856a9f0;
inline int * Level::levelConstraintW = (int*) 0x856a9ec;
inline int * Level::levelConstraintH = (int*) 0x856a9e8;
inline int * Level::levelConstraintNum = (int*) 0x856a9e4;
inline int * Level::shopX = (int*) 0x856a9e0;
inline int * Level::shopY = (int*) 0x856a9dc;
inline int * Level::shopW = (int*) 0x856a9d8;
inline int * Level::shopH = (int*) 0x856a9d4;
inline int * Level::lastCreatedRoomType = (int*) 0x856a9d0;
inline int * Level::minLevelX = (int*) 0x856a9cc;
inline int * Level::minLevelY = (int*) 0x856a9c8;
inline int * Level::maxLevelX = (int*) 0x856a9c4;
inline int * Level::maxLevelY = (int*) 0x856a9c0;
inline int * Level::minLevelMinimapX = (int*) 0x856a9bc;
inline int * Level::minLevelMinimapY = (int*) 0x856a9b8;
inline int * Level::maxLevelMinimapX = (int*) 0x856a9b4;
inline int * Level::maxLevelMinimapY = (int*) 0x856a9b0;
inline bool * Level::mapLightValuesInitialized = (bool*) 0x856a9ac;
inline int * Level::mapLightValuesCachedFrame = (int*) 0x856a9a8;
inline Minimap * * Level::minimap = (Minimap* *) 0x856a9a4;
inline int * Level::arenaNum = (int*) 0x856a9a0;
inline int * Level::specialRoomEntranceX = (int*) 0x856a99c;
inline int * Level::specialRoomEntranceY = (int*) 0x856a998;
inline Shriner * * Level::shriner = (Shriner* *) 0x856a994;
inline bool * Level::skipNextPenaltyBox = (bool*) 0x856a991;
inline bool * Level::enemiesDropSingleCoinForThisLevel = (bool*) 0x856a990;
inline List38 * * Level::minibossFormerWall = (List38* *) 0x856a98c;
inline Pawnbroker * * Level::pawnbroker = (Pawnbroker* *) 0x856a988;
inline bool * Level::isAllCharsRunNoItemsNoShrines = (bool*) 0x856a984;
inline Array<bool> * * Level::allCharsCompletion = (Array<bool>* *) 0x856a980;
inline Array<bool> * * Level::allCharsCompletionDLC = (Array<bool>* *) 0x856a97c;
inline bool * Level::isLevelEnding = (bool*) 0x856a978;
inline StackEx * * Level::previousLevelUnkilledStairLockingMinibosses = (StackEx* *) 0x856a974;
inline String * * Level::todaysRandSeedString = (String* *) 0x856a970;
inline String * * Level::randSeedString = (String* *) 0x856a96c;
inline List48 * * Level::rooms = (List48* *) 0x856a968;
inline bool * Level::addKeyInSecretChest = (bool*) 0x856a965;
inline bool * Level::startedShrinerFight = (bool*) 0x856a964;
inline int * Level::carveX = (int*) 0x856a960;
inline int * Level::carveY = (int*) 0x856a95c;
inline bool * Level::placedAdditionalRedChest = (bool*) 0x856a95b;
inline bool * Level::placedAdditionalWhiteChest = (bool*) 0x856a95a;
inline bool * Level::placedAdditionalBlackChest = (bool*) 0x856a959;
inline bool * Level::wasMinibossLockedInBattle = (bool*) 0x856a958;
inline RoomData * * Level::firstRoom = (RoomData* *) 0x856a954;
inline bool * Level::levelJustStarted = (bool*) 0x856a950;
inline List26 * * Level::charactersJustUnlocked = (List26* *) 0x856a94c;
inline Stack * * Level::zoneOrder = (Stack* *) 0x856a948;
inline String * * Level::justUnlocked = (String* *) 0x856a944;
inline StackEx * * Level::previousLevelMinibosses = (StackEx* *) 0x856a940;
inline bool * Level::debugForceMonstrousShop = (bool*) 0x856a93c;
inline List37 * * Level::tempTileWalk = (List37* *) 0x856a938;
inline int * Level::chestsStillToPlace = (int*) 0x856a934;
inline RoomBase * * Level::hallwayZone5 = (RoomBase* *) 0x856a930;
inline bool * Level::quickRestart = (bool*) 0x856a92c;
inline int * Level::practiceEnemyNum = (int*) 0x856a928;
inline int * Level::dailyChallengeX = (int*) 0x856a924;
inline int * Level::dailyChallengeY = (int*) 0x856a920;
inline int * Level::lastTileCount = (int*) 0x856a91c;
inline IntPointList * * Level::tileObstructionList = (IntPointList* *) 0x856a918;
inline Sprite * * Level::exitArrow = (Sprite* *) 0x856a914;
inline float * Level::exitArrowX = (float*) 0x856a910;
inline float * Level::exitArrowY = (float*) 0x856a90c;
inline Array<float> * * Level::constMapLightValues = (Array<float>* *) 0x856a908;
inline Array<float> * * Level::mapLightValues = (Array<float>* *) 0x856a904;

inline void (*Level::ptr::ShowModPopup)(String * imageName) = (void (*)(String * imageName)) 0x814d490;
inline void (*Level::ptr::ResetSpecialRoomVariables)() = (void (*)()) 0x812c760;
inline void (*Level::ptr::DoRestartCommon)(bool continuedRun, bool cancelFade) = (void (*)(bool continuedRun, bool cancelFade)) 0x8277340;
inline int (*Level::ptr::_GetMaxDepth)() = (int (*)()) 0x812c810;
inline bool (*Level::ptr::HaveFinalBoss)() = (bool (*)()) 0x812c820;
inline Point * (*Level::ptr::GetExitValue)(int xVal, int yVal) = (Point * (*)(int xVal, int yVal)) 0x812c8d0;
inline bool (*Level::ptr::_IsExit)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x812c960;
inline bool (*Level::ptr::IsLockedExit)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x812c990;
inline void (*Level::ptr::_RecordRand)(int arg1, int arg2) = (void (*)(int arg1, int arg2)) 0x812c9e0;
inline Tile * (*Level::ptr::GetTileAt)(int xVal, int yVal) = (Tile * (*)(int xVal, int yVal)) 0x812ca20;
inline int (*Level::ptr::GetTileTypeAt)(int xVal, int yVal) = (int (*)(int xVal, int yVal)) 0x8135f60;
inline bool (*Level::ptr::_IsWireAt)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x8135fa0;
inline bool (*Level::ptr::IsWaterOrTarAt)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x8136000;
inline bool (*Level::ptr::_IsWaterAt)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x8136080;
inline bool (*Level::ptr::_IsZone)(int arg1) = (bool (*)(int arg1)) 0x81360c0;
inline bool (*Level::ptr::IsIcePartOfLevel)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x81360d0;
inline bool (*Level::ptr::IsFinalBoss)() = (bool (*)()) 0x8136100;
inline bool (*Level::ptr::IsWallAt)(int xVal, int yVal, bool destructibleOnly, bool torchlessOnly) = (bool (*)(int xVal, int yVal, bool destructibleOnly, bool torchlessOnly)) 0x8136140;
inline bool (*Level::ptr::_IsDeepWaterAt)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x81361a0;
inline void (*Level::ptr::SplashWater)(int xVal, int yVal, bool destroyWater) = (void (*)(int xVal, int yVal, bool destroyWater)) 0x837b720;
inline bool (*Level::ptr::_IsIceAt)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x81361e0;
inline void (*Level::ptr::BreakIce)(int xVal, int yVal) = (void (*)(int xVal, int yVal)) 0x837bc10;
inline bool (*Level::ptr::IsPeaceful)() = (bool (*)()) 0x8136220;
inline void (*Level::ptr::ResetCosts)() = (void (*)()) 0x8136240;
inline bool (*Level::ptr::_IsConductorWireAt)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x81362a0;
inline bool (*Level::ptr::_IsConductorWire2At)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x81362e0;
inline bool (*Level::ptr::_IsMagneticFloorAt)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x8136320;
inline bool (*Level::ptr::_IsNonPracticeBossLevel)() = (bool (*)()) 0x8136360;
inline bool (*Level::ptr::IsBossLevel)() = (bool (*)()) 0x8136370;
inline Tile * (*Level::ptr::PlaceTileRemovingExistingTiles)(int xVal, int yVal, int tileType, bool pending, int tilesetOverride, bool fromEarthSpell) = (Tile * (*)(int xVal, int yVal, int tileType, bool pending, int tilesetOverride, bool fromEarthSpell)) 0x818d6f0;
inline bool (*Level::ptr::_IsTileEmpty)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x81363a0;
inline bool (*Level::ptr::CreateRoom)(int xVal, int yVal, int wVal, int hVal, bool pending, int roomType, int originX, int originY, int originX2, int originY2, bool wideCorridor, int wallType, bool allowWallOverlap, bool allowWaterTarOoze) = (bool (*)(int xVal, int yVal, int wVal, int hVal, bool pending, int roomType, int originX, int originY, int originX2, int originY2, bool wideCorridor, int wallType, bool allowWallOverlap, bool allowWaterTarOoze)) 0x82c0b10;
inline bool (*Level::ptr::IsFloorAt)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x81363e0;
inline void (*Level::ptr::RecalcLevelBoundaries)() = (void (*)()) 0x81aeb40;
inline bool (*Level::ptr::_IsCustomLevelNonBoss)() = (bool (*)()) 0x8136420;
inline bool (*Level::ptr::_IsSingleZoneMode)() = (bool (*)()) 0x8136430;
inline void (*Level::ptr::_SkipNextPenaltyBox)() = (void (*)()) 0x8136470;
inline void (*Level::ptr::ClearMinibossWall)() = (void (*)()) 0x818f5d0;
inline bool (*Level::ptr::_IsLavaAt)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x8136480;
inline float (*Level::ptr::DistanceFromZone3DividingLine)(int xVal, int yVal) = (float (*)(int xVal, int yVal)) 0x81364c0;
inline void (*Level::ptr::TransmogrifySlot)(String * slotName, Entity * ent) = (void (*)(String * slotName, Entity * ent)) 0x83d49f0;
inline void (*Level::ptr::ConjureSlot)(String * slotName, Entity * ent) = (void (*)(String * slotName, Entity * ent)) 0x83d3f50;
inline void (*Level::ptr::PawnSlot)(String * slotName, Entity * ent) = (void (*)(String * slotName, Entity * ent)) 0x837bd90;
inline void (*Level::ptr::TransmogrifyWeaponToType)(Entity * ent, int type) = (void (*)(Entity * ent, int type)) 0x83268b0;
inline String * (*Level::ptr::GetNPCSaleItem)(int npcNum, int slotNum, String * exclude1, String * exclude2) = (String * (*)(int npcNum, int slotNum, String * exclude1, String * exclude2)) 0x8185360;
inline void (*Level::ptr::GenerateJanitorItems)() = (void (*)()) 0x829aaa0;
inline void (*Level::ptr::RemoveTileAt)(int xVal, int yVal) = (void (*)(int xVal, int yVal)) 0x8136640;
inline void (*Level::ptr::_SetMagicBarrierAt)(int arg1, int arg2, bool arg3) = (void (*)(int arg1, int arg2, bool arg3)) 0x81366b0;
inline void (*Level::ptr::SetMagicBarrier)(bool on) = (void (*)(bool on)) 0x81366e0;
inline bool (*Level::ptr::IsDoorAt)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x81367b0;
inline void (*Level::ptr::CloseInOuterWalls)() = (void (*)()) 0x818ef10;
inline int (*Level::ptr::ActivateTrigger)(int triggerNum, Entity * ent, RenderableObject * target) = (int (*)(int triggerNum, Entity * ent, RenderableObject * target)) 0x83ae5d0;
inline bool (*Level::ptr::IsNormalFloorAt)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x81367f0;
inline void (*Level::ptr::Earthquake)(int xVal, int yVal) = (void (*)(int xVal, int yVal)) 0x8136830;
inline bool (*Level::ptr::_IsHotCoalAt)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x81369d0;
inline void (*Level::ptr::PlaceIceTileAt)(int xVal, int yVal) = (void (*)(int xVal, int yVal)) 0x837c700;
inline void (*Level::ptr::FreezeTilesNear)(int xVal, int yVal, bool allTiles) = (void (*)(int xVal, int yVal, bool allTiles)) 0x837c8a0;
inline bool (*Level::ptr::_AllowEarthSpell)() = (bool (*)()) 0x8136a10;
inline Point * (*Level::ptr::GetStandardExitCoords)() = (Point * (*)()) 0x8136a30;
inline bool (*Level::ptr::_AllCharsAnyComplete)() = (bool (*)()) 0x8136a90;
inline bool (*Level::ptr::_AllCharsDLCAnyComplete)() = (bool (*)()) 0x8136ae0;
inline int (*Level::ptr::GetSingleZoneModeFinalBossZone)() = (int (*)()) 0x8136b40;
inline bool (*Level::ptr::IsFinalBossZone)() = (bool (*)()) 0x8136bb0;
inline void (*Level::ptr::MakeHelper)() = (void (*)()) 0x81ad990;
inline bool (*Level::ptr::IsSeededMode)(int mode) = (bool (*)(int mode)) 0x8136c40;
inline void (*Level::ptr::DeleteMap)() = (void (*)()) 0x8278210;
inline void (*Level::ptr::InitNewMap)(bool saveGameData) = (void (*)(bool saveGameData)) 0x82dbde0;
inline bool (*Level::ptr::IsSecretRoom)(int rmType) = (bool (*)(int rmType)) 0x8136c80;
inline void (*Level::ptr::CarveCorridorTile)(int xVal, int yVal, bool horiz, bool pending, bool skipWalls, int roomType, bool wideCorridor) = (void (*)(int xVal, int yVal, bool horiz, bool pending, bool skipWalls, int roomType, bool wideCorridor)) 0x818d070;
inline void (*Level::ptr::AddExit)(int xVal, int yVal, int levelPointer, int zonePointer) = (void (*)(int xVal, int yVal, int levelPointer, int zonePointer)) 0x8136ca0;
inline bool (*Level::ptr::_IsNotIndestructibleWallAt)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x8136d40;
inline void (*Level::ptr::CreateIndestructibleBorder)() = (void (*)()) 0x82816c0;
inline void (*Level::ptr::CreateTutorialMap)() = (void (*)()) 0x82ff890;
inline void (*Level::ptr::_DisableLevelConstraints)() = (void (*)()) 0x8136d70;
inline void (*Level::ptr::PaintTriggerInterior)(int x, int y, int w, int h, int trigger) = (void (*)(int x, int y, int w, int h, int trigger)) 0x8136db0;
inline Point * (*Level::ptr::GetRandomOffsetPoint)() = (Point * (*)()) 0x8136e30;
inline bool (*Level::ptr::IsExitAt)(int x, int y) = (bool (*)(int x, int y)) 0x8136f20;
inline void (*Level::ptr::CreateFinalBossBattleConductor)() = (void (*)()) 0x82fe020;
inline void (*Level::ptr::CreateFinalBossBattle3)() = (void (*)()) 0x82fbe90;
inline void (*Level::ptr::CreateFinalBossBattle2)() = (void (*)()) 0x82fafc0;
inline void (*Level::ptr::UnlockChar)(int characterID) = (void (*)(int characterID)) 0x82815b0;
inline void (*Level::ptr::CreateFinalBossBattle)() = (void (*)()) 0x82f8c80;
inline bool (*Level::ptr::IsFreeLevelForSpecialRoom)(int tempLevel, int tempDepth) = (bool (*)(int tempLevel, int tempDepth)) 0x8136f60;
inline void (*Level::ptr::CreateExit)(int exitX, int exitY) = (void (*)(int exitX, int exitY)) 0x818cf50;
inline bool (*Level::ptr::IsWireLikeAt)(int x, int y) = (bool (*)(int x, int y)) 0x8137050;
inline bool (*Level::ptr::_IsFloorAdjacent)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x81370e0;
inline void (*Level::ptr::AddCrackedWall)(int roomType) = (void (*)(int roomType)) 0x8281130;
inline String * (*Level::ptr::RandomFood)() = (String * (*)()) 0x81371a0;
inline void (*Level::ptr::PlaceSecondarySpecialShop)(bool useBloodCost, bool isFoodShop) = (void (*)(bool useBloodCost, bool isFoodShop)) 0x82d1ad0;
inline void (*Level::ptr::AddSpecialRoom)(int roomType, bool addCrack) = (void (*)(int roomType, bool addCrack)) 0x82d20c0;
inline void (*Level::ptr::CreateSwarmMap)() = (void (*)()) 0x82ec310;
inline RoomData * (*Level::ptr::PlaceFirstRoom)() = (RoomData * (*)()) 0x82d1950;
inline void (*Level::ptr::DumpMap)() = (void (*)()) 0x827d2c0;
inline void (*Level::ptr::FillTiles)(Rect * rect, int tileType, int tileTypeEdge) = (void (*)(Rect * rect, int tileType, int tileTypeEdge)) 0x818ee10;
inline void (*Level::ptr::PlaceConnectedWireDoor)(Point * p) = (void (*)(Point * p)) 0x818ec60;
inline bool (*Level::ptr::IsZone5RoomLegal)(Rect * loc) = (bool (*)(Rect * loc)) 0x81372d0;
inline RoomWithDoor * (*Level::ptr::PlaceRoomZone5)(PortalSeg * pseg, int width, int height, int minEntryDist) = (RoomWithDoor * (*)(PortalSeg * pseg, int width, int height, int minEntryDist)) 0x8230b40;
inline bool (*Level::ptr::IsDoorAdjacent)(int x, int y) = (bool (*)(int x, int y)) 0x8137370;
inline void (*Level::ptr::PlaceShopItemsAt)(int tmpX, int tmpY, Rect * door) = (void (*)(int tmpX, int tmpY, Rect * door)) 0x82bad30;
inline void (*Level::ptr::CreateRoomZone5)(RoomWithDoor * rm, int roomType) = (void (*)(RoomWithDoor * rm, int roomType)) 0x82d1370;
inline RoomWithDoor * (*Level::ptr::PlaceRoomZone52)(StackEx3 * portalSegs, int width, int height, int minEntryDist, int roomType) = (RoomWithDoor * (*)(StackEx3 * portalSegs, int width, int height, int minEntryDist, int roomType)) 0x82d18b0;
inline bool (*Level::ptr::IsWallAdjacent8)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x8137470;
inline bool (*Level::ptr::PlaceWire)(Point * src, Point * dst) = (bool (*)(Point * src, Point * dst)) 0x82a30d0;
inline void (*Level::ptr::_DecorateTerminalZone5)(Point * arg1) = (void (*)(Point * arg1)) 0x8137580;
inline bool (*Level::ptr::IsTileTypeAdjacent)(int xVal, int yVal, int tempType) = (bool (*)(int xVal, int yVal, int tempType)) 0x8137590;
inline void (*Level::ptr::RandomWalkOfTempTiles)(int xVal, int yVal, int distCounter) = (void (*)(int xVal, int yVal, int distCounter)) 0x8137680;
inline void (*Level::ptr::PadWalls)() = (void (*)()) 0x8280c40;
inline void (*Level::ptr::ProcessSpecialRoom)() = (void (*)()) 0x82d8440;
inline bool (*Level::ptr::_IsCorridorOrRoomWallAt)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x8137840;
inline bool (*Level::ptr::IsSurroundedByDestructibleWalls)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x8137890;
inline bool (*Level::ptr::IsCrackedWallAt)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x8137930;
inline bool (*Level::ptr::IsCrackedWallAdjacent)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x8137960;
inline void (*Level::ptr::PlaceSecretRooms)(int numRooms) = (void (*)(int numRooms)) 0x82d0860;
inline void (*Level::ptr::FillVault)(RoomData * tmpRoom) = (void (*)(RoomData * tmpRoom)) 0x82a1550;
inline Point * (*Level::ptr::GetRandPointInRoomWithOptions)(RoomBase * room, bool skipCollisions, bool skipExit, bool skipTraps, bool skipWater, bool nearWallIsOk, bool secretRoomOK) = (Point * (*)(RoomBase * room, bool skipCollisions, bool skipExit, bool skipTraps, bool skipWater, bool nearWallIsOk, bool secretRoomOK)) 0x816ef50;
inline Point * (*Level::ptr::GetRandPointInRoomWithOptions2)(int xVal, int yVal, int wVal, int hVal, bool skipCollisions, bool skipExit, bool skipTraps, bool skipWater, bool nearWallIsOk, bool secretRoomOK) = (Point * (*)(int xVal, int yVal, int wVal, int hVal, bool skipCollisions, bool skipExit, bool skipTraps, bool skipWater, bool nearWallIsOk, bool secretRoomOK)) 0x816f360;
inline int (*Level::ptr::_GetAppropriateCoins)() = (int (*)()) 0x8137aa0;
inline void (*Level::ptr::PutCrateOrBarrel)(int x, int y) = (void (*)(int x, int y)) 0x81b7dd0;
inline void (*Level::ptr::MakeInvisibleChestAt)(int tmpX, int tmpY) = (void (*)(int tmpX, int tmpY)) 0x82b4270;
inline bool (*Level::ptr::AllowSpirit)() = (bool (*)()) 0x8137ac0;
inline bool (*Level::ptr::FillSecretRoomsZone4)() = (bool (*)()) 0x82ce650;
inline bool (*Level::ptr::FillSecretRoomsZone2)() = (bool (*)()) 0x82b7cc0;
inline bool (*Level::ptr::MaybeForbidTrapdoor)() = (bool (*)()) 0x8137ae0;
inline bool (*Level::ptr::FillSecretRoomsZone1)() = (bool (*)()) 0x82b5600;
inline bool (*Level::ptr::FillSecretRooms)() = (bool (*)()) 0x82d0830;
inline void (*Level::ptr::AddStone)() = (void (*)()) 0x82a6f80;
inline bool (*Level::ptr::IsCorridorFloorOrDoorAdjacent)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x8137b80;
inline Trap * (*Level::ptr::PlaceTrapInRoom)(int xVal, int yVal, int wVal, int hVal, int trapType, int bounceDir, Trap * twoAwayTrap) = (Trap * (*)(int xVal, int yVal, int wVal, int hVal, int trapType, int bounceDir, Trap * twoAwayTrap)) 0x8291140;
inline void (*Level::ptr::PlaceTrapZone5)(int xVal, int yVal, int wVal, int hVal) = (void (*)(int xVal, int yVal, int wVal, int hVal)) 0x8292de0;
inline void (*Level::ptr::PlaceTrapsZone5)() = (void (*)()) 0x8293220;
inline void (*Level::ptr::PlaceTrapZone4)(int xVal, int yVal, int wVal, int hVal) = (void (*)(int xVal, int yVal, int wVal, int hVal)) 0x8293640;
inline void (*Level::ptr::PlaceTrapsZone4)() = (void (*)()) 0x82937a0;
inline void (*Level::ptr::PlaceTrapZone3)(int xVal, int yVal, int wVal, int hVal) = (void (*)(int xVal, int yVal, int wVal, int hVal)) 0x82940b0;
inline void (*Level::ptr::PlaceTrapsZone3)() = (void (*)()) 0x82941d0;
inline void (*Level::ptr::PlaceTrapsZone2)() = (void (*)()) 0x8294790;
inline void (*Level::ptr::PlaceTrapsZone1)() = (void (*)()) 0x8295040;
inline void (*Level::ptr::PlaceTraps)() = (void (*)()) 0x8295790;
inline XMLNode * (*Level::ptr::GetHardModeXML)() = (XMLNode * (*)()) 0x8137ec0;
inline Enemy * (*Level::ptr::PlaceMinibossOfShapeAt)(int newMiniboss, int xVal, int yVal) = (Enemy * (*)(int newMiniboss, int xVal, int yVal)) 0x81c77e0;
inline void (*Level::ptr::_PostProcessMiniboss)(Enemy * arg1) = (void (*)(Enemy * arg1)) 0x8137f90;
inline void (*Level::ptr::PlaceAppropriateMinibosses)(RoomBase * room) = (void (*)(RoomBase * room)) 0x822e370;
inline void (*Level::ptr::PlaceShopkeeperGhostIfNeededAt)(int xVal, int yVal) = (void (*)(int xVal, int yVal)) 0x8173f70;
inline void (*Level::ptr::_PlaceExitRoomMiniboss)(RoomBase * arg1) = (void (*)(RoomBase * arg1)) 0x822f000;
inline int (*Level::ptr::_GetZone3ElementalType)(int arg1, int arg2) = (int (*)(int arg1, int arg2)) 0x8137ff0;
inline int (*Level::ptr::_GetZone3YetiHellhoundType)(int arg1, int arg2) = (int (*)(int arg1, int arg2)) 0x8138020;
inline int (*Level::ptr::_GetZone3BeetleType)(int arg1, int arg2) = (int (*)(int arg1, int arg2)) 0x8138050;
inline void (*Level::ptr::PlaceRareEnemies)(RoomBase * room, bool hasExit) = (void (*)(RoomBase * room, bool hasExit)) 0x822c170;
inline Point * (*Level::ptr::GetRandPointInRoomOfTileType)(RoomBase * room, int tileType, bool skipCollisions) = (Point * (*)(RoomBase * room, int tileType, bool skipCollisions)) 0x816e0e0;
inline Point * (*Level::ptr::GetRandPointInRoomOfTileType2)(int xVal, int yVal, int wVal, int hVal, int tileType, bool skipCollisions) = (Point * (*)(int xVal, int yVal, int wVal, int hVal, int tileType, bool skipCollisions)) 0x816e1f0;
inline int (*Level::ptr::GetHardModeExtraEnemies)() = (int (*)()) 0x8138080;
inline int (*Level::ptr::GetExtraEnemiesBase)() = (int (*)()) 0x8138130;
inline void (*Level::ptr::PutVariedEnemiesZone5)(StackEx2 * pts) = (void (*)(StackEx2 * pts)) 0x81cb000;
inline void (*Level::ptr::PutEnemyZone5)(int x, int y) = (void (*)(int x, int y)) 0x81cb840;
inline void (*Level::ptr::PutRoomEnemiesZone5)(RoomBase * room, bool hasExit) = (void (*)(RoomBase * room, bool hasExit)) 0x822f0b0;
inline void (*Level::ptr::PlaceRandomEnemyForTempo)(int xVal, int yVal) = (void (*)(int xVal, int yVal)) 0x81ca500;
inline void (*Level::ptr::PlaceEnemiesZone5)() = (void (*)()) 0x8290ac0;
inline Enemy * (*Level::ptr::PlaceGargoyle)(int xVal, int yVal, int l) = (Enemy * (*)(int xVal, int yVal, int l)) 0x817ecf0;
inline void (*Level::ptr::PlaceEnemiesZone4)() = (void (*)()) 0x828f480;
inline Enemy * (*Level::ptr::PlaceZone3Cauldron)(int xVal, int yVal) = (Enemy * (*)(int xVal, int yVal)) 0x81c47e0;
inline Enemy * (*Level::ptr::PlaceZone3YetiHellhound)(int xVal, int yVal) = (Enemy * (*)(int xVal, int yVal)) 0x81d0b60;
inline Enemy * (*Level::ptr::PlaceZone3Elemental)(int xVal, int yVal) = (Enemy * (*)(int xVal, int yVal)) 0x81d0b10;
inline Enemy * (*Level::ptr::PlaceZone3Slime)(int xVal, int yVal) = (Enemy * (*)(int xVal, int yVal)) 0x81bfbd0;
inline Enemy * (*Level::ptr::PlaceZone3Beetle)(int xVal, int yVal) = (Enemy * (*)(int xVal, int yVal)) 0x81d0ac0;
inline void (*Level::ptr::PlaceEnemiesZone3)() = (void (*)()) 0x828c610;
inline void (*Level::ptr::PlaceEnemiesZone2)() = (void (*)()) 0x82875e0;
inline void (*Level::ptr::PlaceEnemiesZone1)() = (void (*)()) 0x82820f0;
inline void (*Level::ptr::PlaceEnemies)() = (void (*)()) 0x8295ca0;
inline Point * (*Level::ptr::FindTileOfType)(int tileType, bool ignoreCrackedWalls) = (Point * (*)(int tileType, bool ignoreCrackedWalls)) 0x8138270;
inline float (*Level::ptr::GetDistanceToNearestTorch)(RenderableObject * r) = (float (*)(RenderableObject * r)) 0x8138410;
inline void (*Level::ptr::PlaceTorchesAnywhere)() = (void (*)()) 0x8280b10;
inline bool (*Level::ptr::IsCorridorFloorAt)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x8138540;
inline void (*Level::ptr::PlaceCrateOrBarrel)() = (void (*)()) 0x82a4110;
inline bool (*Level::ptr::DoWePlaceAdditionalChestThisLevel)() = (bool (*)()) 0x8138570;
inline bool (*Level::ptr::PlaceAdditionalChestAt)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x82ae090;
inline void (*Level::ptr::PlaceZoneAppropriateNumberOfDiamondsAt)(int xVal, int yVal) = (void (*)(int xVal, int yVal)) 0x82a1300;
inline void (*Level::ptr::PlaceChests)(bool freeBroadSword) = (void (*)(bool freeBroadSword)) 0x82ae660;
inline void (*Level::ptr::PlaceResourceWall)() = (void (*)()) 0x8296670;
inline void (*Level::ptr::PlaceLockedChests)() = (void (*)()) 0x82976e0;
inline bool (*Level::ptr::_IsShrineFriendlyPoint)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x816e040;
inline Point * (*Level::ptr::GetShrinePoint)() = (Point * (*)()) 0x816f590;
inline void (*Level::ptr::PlaceShrine)() = (void (*)()) 0x82b3a70;
inline bool (*Level::ptr::CreateMapZone5)(bool recursive) = (bool (*)(bool recursive)) 0x82ec6e0;
inline RoomData * (*Level::ptr::PlaceRoomZone4)(int roomType) = (RoomData * (*)(int roomType)) 0x82cddd0;
inline void (*Level::ptr::AddHarderStone)() = (void (*)()) 0x82a6bb0;
inline void (*Level::ptr::CheckMapConsistency)() = (void (*)()) 0x8296d20;
inline void (*Level::ptr::PlaceNocturnaArea)() = (void (*)()) 0x82a4450;
inline bool (*Level::ptr::CreateMapZone4)(bool recursive) = (bool (*)(bool recursive)) 0x82f62f0;
inline bool (*Level::ptr::CarveNewCorridor)(int moveX, int moveY, bool horiz, bool pending, bool secondaryCarve, int roomType, bool wideCorridor) = (bool (*)(int moveX, int moveY, bool horiz, bool pending, bool secondaryCarve, int roomType, bool wideCorridor)) 0x818d3b0;
inline RoomData * (*Level::ptr::PlaceRoomZone3)(int roomType, RoomData * roomToAttachTo) = (RoomData * (*)(int roomType, RoomData * roomToAttachTo)) 0x82cc990;
inline bool (*Level::ptr::PlaceExit)(RoomData * rdExit) = (bool (*)(RoomData * rdExit)) 0x82efa40;
inline void (*Level::ptr::RemoveSomeWallsAwayFromCorridors)(float percentToRemove, bool includeCorridors, int maxHealth) = (void (*)(float percentToRemove, bool includeCorridors, int maxHealth)) 0x82aaf90;
inline void (*Level::ptr::WidenCorridors)() = (void (*)()) 0x81b1360;
inline bool (*Level::ptr::IsTrapOrExitAbove)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x8138700;
inline void (*Level::ptr::AddSomePillarsInOpenSpace)() = (void (*)()) 0x82aa9e0;
inline Point * (*Level::ptr::GetRandomWallInRoom)(int xVal, int yVal, int wVal, int hVal) = (Point * (*)(int xVal, int yVal, int wVal, int hVal)) 0x81387a0;
inline bool (*Level::ptr::CreateMapZone3)() = (bool (*)()) 0x82f4760;
inline RoomData * (*Level::ptr::PlaceRoomZone2)(int roomType, RoomData * roomToAttachTo) = (RoomData * (*)(int roomType, RoomData * roomToAttachTo)) 0x82cbda0;
inline bool (*Level::ptr::CreateMapZone2)() = (bool (*)()) 0x82f1bf0;
inline RoomData * (*Level::ptr::PlaceRoomZone1)(int roomType, RoomData * roomToAttachTo) = (RoomData * (*)(int roomType, RoomData * roomToAttachTo)) 0x82ca6d0;
inline bool (*Level::ptr::CreateMapZone1)() = (bool (*)()) 0x82efcb0;
inline bool (*Level::ptr::IsPassable)() = (bool (*)()) 0x81b1510;
inline bool (*Level::ptr::WantPenaltyBox)() = (bool (*)()) 0x8138920;
inline void (*Level::ptr::PlacePenaltyBoxEnemies)() = (void (*)()) 0x822cf00;
inline void (*Level::ptr::AddMinibossWall)(int xVal, int yVal, int wallType) = (void (*)(int xVal, int yVal, int wallType)) 0x818eb90;
inline bool (*Level::ptr::CreateMap)(LevelObject * levelObj) = (bool (*)(LevelObject * levelObj)) 0x82ee960;
inline bool (*Level::ptr::_AllCharsAllComplete)() = (bool (*)()) 0x8138970;
inline bool (*Level::ptr::_AllCharsDLCAllComplete)() = (bool (*)()) 0x81389b0;
inline int (*Level::ptr::GetInitialZone)() = (int (*)()) 0x8138a10;
inline void (*Level::ptr::DoQuickRestart)(bool continuedRun, bool showPopups, bool playIntroCutscene) = (void (*)(bool continuedRun, bool showPopups, bool playIntroCutscene)) 0x83629e0;
inline void (*Level::ptr::PutFutureStair)(int x, int y) = (void (*)(int x, int y)) 0x818e9f0;
inline void (*Level::ptr::MakeAllWallsUnbreakable)() = (void (*)()) 0x8138a50;
inline void (*Level::ptr::CreateCharSelect)() = (void (*)()) 0x83405e0;
inline void (*Level::ptr::CreateBeastmasterZone1)() = (void (*)()) 0x833d6d0;
inline void (*Level::ptr::CreateBeastmasterZone2)() = (void (*)()) 0x8339dd0;
inline void (*Level::ptr::CreateBeastmasterZone3)() = (void (*)()) 0x83365f0;
inline void (*Level::ptr::CreateBeastmasterZone4)() = (void (*)()) 0x8331fd0;
inline void (*Level::ptr::PutBeastmasterStairs)(int x, int y, String * stairName, String * enemyName, int enemyType, int enemyId, String * stairNamePrefix) = (void (*)(int x, int y, String * stairName, String * enemyName, int enemyType, int enemyId, String * stairNamePrefix)) 0x818e6a0;
inline void (*Level::ptr::CreateBeastmasterZone5)() = (void (*)()) 0x8330030;
inline void (*Level::ptr::PutMinibossStair)(int x, int y, String * minibossName, int enemyType, String * label, int labelXOff) = (void (*)(int x, int y, String * minibossName, int enemyType, String * label, int labelXOff)) 0x818e4b0;
inline void (*Level::ptr::CreateBossmasterMinibosses)() = (void (*)()) 0x832eb40;
inline void (*Level::ptr::PutBossStair)(int x, int y, String * bossName, int enemyType, int zone, String * label, int labelXOff) = (void (*)(int x, int y, String * bossName, int enemyType, int zone, String * label, int labelXOff)) 0x818def0;
inline void (*Level::ptr::CreateBossmasterBosses)() = (void (*)()) 0x832be20;
inline void (*Level::ptr::CreateExtraModesSelect)() = (void (*)()) 0x82ea350;
inline void (*Level::ptr::EnsureBossTraining)(String * name) = (void (*)(String * name)) 0x8138ae0;
inline bool (*Level::ptr::QueryHarderBosses)() = (bool (*)()) 0x8138b90;
inline void (*Level::ptr::TrySpawnBossMinibossAt)(int x, int y, int etype) = (void (*)(int x, int y, int etype)) 0x8296150;
inline void (*Level::ptr::BossMaybeMinibossesAt)(int x1, int y1, int x2, int y2) = (void (*)(int x1, int y1, int x2, int y2)) 0x82963c0;
inline void (*Level::ptr::CreateBossBattle1)() = (void (*)()) 0x82e5ec0;
inline void (*Level::ptr::CreateBossBattle2)() = (void (*)()) 0x82e48a0;
inline void (*Level::ptr::CreateBossBattle3)() = (void (*)()) 0x82e2730;
inline void (*Level::ptr::CreateBossBattle4)() = (void (*)()) 0x82e0340;
inline void (*Level::ptr::CreateBossBattle5)() = (void (*)()) 0x82dee50;
inline void (*Level::ptr::CreateBossBattle9)() = (void (*)()) 0x82ddb70;
inline void (*Level::ptr::CreateBossBattleFrankensteinway)() = (void (*)()) 0x82dcff0;
inline void (*Level::ptr::CreateBossBattle)() = (void (*)()) 0x82e98c0;
inline void (*Level::ptr::CreateTrainingMap)() = (void (*)()) 0x82dc2a0;
inline void (*Level::ptr::CreateTestMap)() = (void (*)()) 0x82dbf10;
inline void (*Level::ptr::CreateDungeonMaster)() = (void (*)()) 0x82c9b60;
inline void (*Level::ptr::CreateMerlin)() = (void (*)()) 0x82c8e50;
inline void (*Level::ptr::CreateHephaestus)() = (void (*)()) 0x82c8300;
inline void (*Level::ptr::CreateBeastmaster)() = (void (*)()) 0x82c7160;
inline void (*Level::ptr::CreateBossmaster)() = (void (*)()) 0x82c6990;
inline void (*Level::ptr::CreateWeaponmaster)() = (void (*)()) 0x82c45c0;
inline void (*Level::ptr::CreateTrainer)() = (void (*)()) 0x82c38e0;
inline void (*Level::ptr::CreateJanitor)() = (void (*)()) 0x82c33f0;
inline void (*Level::ptr::CreateDiamondDealer)() = (void (*)()) 0x82c28d0;
inline void (*Level::ptr::CreateLobby)() = (void (*)()) 0x83296a0;
inline void (*Level::ptr::CreateAllCharsSelect)() = (void (*)()) 0x83290d0;
inline void (*Level::ptr::CreateAllCharsDLCSelect)() = (void (*)()) 0x8328ae0;
inline void (*Level::ptr::GenerateHardcoreZoneOrder)() = (void (*)()) 0x8138c40;
inline void (*Level::ptr::LoadLevelSong)(LevelObject * levelObj) = (void (*)(LevelObject * levelObj)) 0x8351740;
inline void (*Level::ptr::NewLevel)(int level, int zone, int playerID, bool inEditor, LevelObject * levelObj, bool continuedRun) = (void (*)(int level, int zone, int playerID, bool inEditor, LevelObject * levelObj, bool continuedRun)) 0x8352d70;
inline void (*Level::ptr::DoRestart)() = (void (*)()) 0x835fc20;
inline IntPointList * (*Level::ptr::GetTileObstructionList)(bool includeOffscreen) = (IntPointList * (*)(bool includeOffscreen)) 0x81392a0;
inline void (*Level::ptr::RefreshLineOfSightTiles)() = (void (*)()) 0x81393c0;
inline bool (*Level::ptr::_IsTarAt)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x8139910;
inline String * (*Level::ptr::GetTileFlyawayAt)(int xVal, int yVal) = (String * (*)(int xVal, int yVal)) 0x8139950;
inline void (*Level::ptr::_ModifyReplayBeatOffset)(int arg1) = (void (*)(int arg1)) 0x81399a0;
inline void (*Level::ptr::StartReplayPlayback)() = (void (*)()) 0x837a630;
inline void (*Level::ptr::PlaceHotCoalTileAt)(int xVal, int yVal) = (void (*)(int xVal, int yVal)) 0x837cb00;
inline void (*Level::ptr::AdvanceLevel)() = (void (*)()) 0x835fba0;
inline void (*Level::ptr::_RecordBeat)(int arg1) = (void (*)(int arg1)) 0x81399c0;
inline void (*Level::ptr::_RecordMove)(int arg1, int arg2, int arg3, bool arg4) = (void (*)(int arg1, int arg2, int arg3, bool arg4)) 0x81399f0;
inline void (*Level::ptr::_RecordMissedBeat)(int arg1, int arg2) = (void (*)(int arg1, int arg2)) 0x8139a40;
inline void (*Level::ptr::TakeActionAfterAllCharsScoreSubmit)() = (void (*)()) 0x83640f0;
inline int (*Level::ptr::_PixelToTileCoord)(float arg1) = (int (*)(float arg1)) 0x8139a80;
inline void (*Level::ptr::JanitorReset)() = (void (*)()) 0x8139ac0;
inline void (*Level::ptr::MarkAllTilesAsSeen)() = (void (*)()) 0x8139d60;
inline void (*Level::ptr::Update)() = (void (*)()) 0x83dc210;
inline void (*Level::ptr::RenderAll)() = (void (*)()) 0x8139dd0;
inline void (*Level::ptr::RenderExitArrow)() = (void (*)()) 0x8188460;
inline void (*Level::ptr::_RenderMinimap)() = (void (*)()) 0x8139e40;
inline int (*Level::ptr::GetAdjustedZoneForAllChars)() = (int (*)()) 0x8139e60;
inline int (*Level::ptr::GetAdjustedZoneForAllCharsDLC)() = (int (*)()) 0x8139f10;
inline int (*Level::ptr::GetAdjustedZoneForStoryMode)() = (int (*)()) 0x8139ff0;
inline bool (*Level::ptr::ShopkeeperMissing)() = (bool (*)()) 0x813a0a0;
inline bool (*Level::ptr::_IsInShop)(int arg1, int arg2, int arg3) = (bool (*)(int arg1, int arg2, int arg3)) 0x813a0c0;
inline void (*Level::ptr::RemoveExit)(int xVal, int yVal) = (void (*)(int xVal, int yVal)) 0x813a120;
inline float (*Level::ptr::ActuallyGetMapTileLightValue)(int xVal, int yVal, bool forVision) = (float (*)(int xVal, int yVal, bool forVision)) 0x813a180;
inline void (*Level::ptr::_SetMapTileLightValue)(int arg1, int arg2, float arg3) = (void (*)(int arg1, int arg2, float arg3)) 0x813a220;
inline void (*Level::ptr::_AddToMapTileLightValue)(int arg1, int arg2, float arg3, bool arg4) = (void (*)(int arg1, int arg2, float arg3, bool arg4)) 0x813a2a0;
inline float (*Level::ptr::GetMapTileLightValue)(int xVal, int yVal, bool forVision) = (float (*)(int xVal, int yVal, bool forVision)) 0x813a350;
inline void (*Level::ptr::ClearTextLabelAt)(int xVal, int yVal) = (void (*)(int xVal, int yVal)) 0x813b070;
inline bool (*Level::ptr::IsAnyWallAt)(Rect * r) = (bool (*)(Rect * r)) 0x813b0b0;
inline bool (*Level::ptr::IsAnyPlayerWithinShop)() = (bool (*)()) 0x813b140;
inline bool (*Level::ptr::IsWallAdjacent)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x813b1d0;
inline bool (*Level::ptr::IsAnyWaterAt)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x813b490;
inline void (*Level::ptr::DryUpAllWater)(int replacementFloor) = (void (*)(int replacementFloor)) 0x818ddd0;
inline bool (*Level::ptr::IsVisibleTileAt)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x813b500;
inline void (*Level::ptr::PlaceTileTypeAt)(int xVal, int yVal, int tileType) = (void (*)(int xVal, int yVal, int tileType)) 0x8190260;
inline void (*Level::ptr::_PlaceMagneticTileAt)(int arg1, int arg2) = (void (*)(int arg1, int arg2)) 0x8190330;
inline void (*Level::ptr::_PlaceTarTileAt)(int arg1, int arg2) = (void (*)(int arg1, int arg2)) 0x8190190;
inline bool (*Level::ptr::CheckLOS)(int x1, int y1, int x2, int y2, bool includeOffscreen) = (bool (*)(int x1, int y1, int x2, int y2, bool includeOffscreen)) 0x813b540;
inline void (*Level::ptr::_PlaceWaterTileAt)(int arg1, int arg2) = (void (*)(int arg1, int arg2)) 0x8190400;
inline bool (*Level::ptr::IsTrapAdjacent)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x8191c60;
inline void (*Level::ptr::_mark)() = (void (*)()) 0x806df20;
#endif
#endif
