// Generated automatically. Do not edit!
#ifndef _Util_
#define _Util_
class Entity;
class List11;
class List2;
class List33;
class List54;
class Player;
class Point;
class Point2;
class Rect;
class RenderableObject;
class Sprite;
class StackEx;
class String;
class StringMap5;
#include "Object.hpp"

class Util : public Object  {
public:
    static String * * metricString;
    static bool * pendingScoreRetrieval;
    static String * * pendingRetrievalLeaderboard;
    static String * * currentLeaderboardName;
    static int * pendingScoreRetrievalStart;
    static int * pendingScoreRetrievalEnd;
    static bool * pendingScoreFriends;
    static bool * pendingScorePlayer;
    static StringMap5 * * delayedStatSets;
    static int * storedSeed;
    static StackEx * * dirRotationOrder;
    static List11 * * delayedStatIncrements;
    static List54 * * pendingScoreSubmission;
    static String * * pendingSubmissionLeaderboardName;
    static int * numSubmissionAttempts;
    static String * * dataSeparatorString;

    // Wrappers
    inline static String * GetVersionString() { return ptr::GetVersionString(); }
    inline static String * StringLeft(String * str, int n) { return ptr::StringLeft(str, n); }
    inline static void SetAppFolder() { ptr::SetAppFolder(); }
    inline static void AddMetric(String * key, String * value, bool send, bool blocking, bool isNumber) { ptr::AddMetric(key, value, send, blocking, isNumber); }
    inline static String * GetLeaderboardSetPrefix() { return ptr::GetLeaderboardSetPrefix(); }
    inline static String * GetLeaderboardSuffix() { return ptr::GetLeaderboardSuffix(); }
    inline static void GetLeaderboardScores(int rangeStart, int rangeEnd, int dayOffset, String * specificLeaderboard, bool useTodaysSeed, bool friendsOnly, bool playerOnly) { ptr::GetLeaderboardScores(rangeStart, rangeEnd, dayOffset, specificLeaderboard, useTodaysSeed, friendsOnly, playerOnly); }
    inline static String * GetLanguagesFolderPath() { return ptr::GetLanguagesFolderPath(); }
    inline static String * GetActiveLanguagesFolderPath() { return ptr::GetActiveLanguagesFolderPath(); }
    inline static List2 * CreateScaledTextSprite(String * str, int color, int scale) { return ptr::CreateScaledTextSprite(str, color, scale); }
    inline static Sprite * CreateTextSprite(String * str, int color, bool addShadow) { return ptr::CreateTextSprite(str, color, addShadow); }
    inline static int GetSteamStat(String * statName) { return ptr::GetSteamStat(statName); }
    inline static bool _AreWeInGameplayMode() { return ptr::_AreWeInGameplayMode(); }
    inline static bool SetSteamIntStat(String * statName, int val, bool inGameplayOnly, bool allowCoop, bool delayUntilLevelLoad) { return ptr::SetSteamIntStat(statName, val, inGameplayOnly, allowCoop, delayUntilLevelLoad); }
    inline static bool IsCharacterActive(int charID) { return ptr::IsCharacterActive(charID); }
    inline static float _RndFloatRange(float arg1, float arg2, bool arg3) { return ptr::_RndFloatRange(arg1, arg2, arg3); }
    inline static int RndIntRange(int low, int high, bool useSeed, int replayConsistencyChannel) { return ptr::RndIntRange(low, high, useSeed, replayConsistencyChannel); }
    inline static int RndIntRangeFromZero(int high, bool useSeed) { return ptr::RndIntRangeFromZero(high, useSeed); }
    inline static float _GetDistSq(int arg1, int arg2, int arg3, int arg4) { return ptr::_GetDistSq(arg1, arg2, arg3, arg4); }
    inline static float _GetDist(int arg1, int arg2, int arg3, int arg4) { return ptr::_GetDist(arg1, arg2, arg3, arg4); }
    inline static float _GetDistFromObject(int arg1, int arg2, RenderableObject * arg3) { return ptr::_GetDistFromObject(arg1, arg2, arg3); }
    inline static float _GetDistFromPlayer1(int arg1, int arg2) { return ptr::_GetDistFromPlayer1(arg1, arg2); }
    inline static Point * GetPointFromDir(int dir) { return ptr::GetPointFromDir(dir); }
    inline static int GetDirFromDiff(int xDiff, int yDiff) { return ptr::GetDirFromDiff(xDiff, yDiff); }
    inline static bool RndBool(bool useSeed) { return ptr::RndBool(useSeed); }
    inline static bool IsAnyPlayerAt(int xVal, int yVal) { return ptr::IsAnyPlayerAt(xVal, yVal); }
    inline static Player * GetAnyPlayerAt(int xVal, int yVal) { return ptr::GetAnyPlayerAt(xVal, yVal); }
    inline static bool IsGlobalCollisionAt(int xVal, int yVal, bool isPlayer, bool ignoreWalls, bool includeTheNothing, bool includeShopWallsDespiteIgnoringWalls, bool skipIgnoreWalls) { return ptr::IsGlobalCollisionAt(xVal, yVal, isPlayer, ignoreWalls, includeTheNothing, includeShopWallsDespiteIgnoringWalls, skipIgnoreWalls); }
    inline static List33 * GetPlayersAt(Rect * where) { return ptr::GetPlayersAt(where); }
    inline static List33 * GetPlayersAt2(int xVal, int yVal) { return ptr::GetPlayersAt2(xVal, yVal); }
    inline static bool _IsDiagonal(int arg1) { return ptr::_IsDiagonal(arg1); }
    inline static StackEx * GetDirRotationOrder() { return ptr::GetDirRotationOrder(); }
    inline static int _DirToRotationIndex(int arg1) { return ptr::_DirToRotationIndex(arg1); }
    inline static int _RotationIndexToDir(int arg1) { return ptr::_RotationIndexToDir(arg1); }
    inline static Point * RotatePoint45DegreesClockwise(Point * p) { return ptr::RotatePoint45DegreesClockwise(p); }
    inline static Point * RotatePointInDirection(Point * original, int dir) { return ptr::RotatePointInDirection(original, dir); }
    inline static Point * RotatePointInGeneralDirection(Point * p, int dir) { return ptr::RotatePointInGeneralDirection(p, dir); }
    inline static int RotateDirInDirection(int original, int dir) { return ptr::RotateDirInDirection(original, dir); }
    inline static bool AreAriaOrCodaActive() { return ptr::AreAriaOrCodaActive(); }
    inline static bool IsWeaponlessCharacterActive() { return ptr::IsWeaponlessCharacterActive(); }
    inline static bool CustomMusicInUse() { return ptr::CustomMusicInUse(); }
    inline static bool IncrementSteamStat(String * statName, bool inGameplayOnly, bool allowCoop, bool allowSeeded, bool delayUntilLevelLoad) { return ptr::IncrementSteamStat(statName, inGameplayOnly, allowCoop, allowSeeded, delayUntilLevelLoad); }
    inline static Player * GetClosestPlayer(int xVal, int yVal) { return ptr::GetClosestPlayer(xVal, yVal); }
    inline static bool _IsGlobalOrPlayerCollisionAt(int arg1, int arg2, bool arg3, bool arg4, bool arg5) { return ptr::_IsGlobalOrPlayerCollisionAt(arg1, arg2, arg3, arg4, arg5); }
    inline static Point * FindClosestTrulyUnoccupiedSpace(int xVal, int yVal, bool ignoreWalls) { return ptr::FindClosestTrulyUnoccupiedSpace(xVal, yVal, ignoreWalls); }
    inline static float GetDistFromClosestPlayer(int xVal, int yVal, bool includeSouls) { return ptr::GetDistFromClosestPlayer(xVal, yVal, includeSouls); }
    inline static int _GetDirFromPoints(int arg1, int arg2, int arg3, int arg4) { return ptr::_GetDirFromPoints(arg1, arg2, arg3, arg4); }
    inline static Point * FindClosestUnoccupiedSpace(int xVal, int yVal, bool ignoreWalls) { return ptr::FindClosestUnoccupiedSpace(xVal, yVal, ignoreWalls); }
    inline static float _DistanceFromPointToLine(Point2 * arg1, Point2 * arg2, Point2 * arg3) { return ptr::_DistanceFromPointToLine(arg1, arg2, arg3); }
    inline static void SendEntityTo(Entity * ent, int xVal, int yVal, bool triggerBossStart) { ptr::SendEntityTo(ent, xVal, yVal, triggerBossStart); }
    inline static bool TeleportEntity(Entity * ent, float minDist, int oldX, int oldY, bool anyFloor) { return ptr::TeleportEntity(ent, minDist, oldX, oldY, anyFloor); }
    inline static int _GetDirFromPoint(Point * arg1) { return ptr::_GetDirFromPoint(arg1); }
    inline static int InvertDir(int dir) { return ptr::InvertDir(dir); }
    inline static int _DirToCardinalDir(int arg1) { return ptr::_DirToCardinalDir(arg1); }
    inline static bool IsNonMobileCollisionAt(int xVal, int yVal) { return ptr::IsNonMobileCollisionAt(xVal, yVal); }
    inline static bool IsOnScreen(int xVal, int yVal, float cameraSeekX, float cameraSeekY) { return ptr::IsOnScreen(xVal, yVal, cameraSeekX, cameraSeekY); }
    inline static bool IsEnemyAdjacent(int xVal, int yVal) { return ptr::IsEnemyAdjacent(xVal, yVal); }
    inline static Point * FindClosestTrulyUnoccupiedSpaceNotAdjacentToEnemy(int xVal, int yVal, bool ignoreWalls) { return ptr::FindClosestTrulyUnoccupiedSpaceNotAdjacentToEnemy(xVal, yVal, ignoreWalls); }
    inline static int ParseTextSeed(String * randSeedString) { return ptr::ParseTextSeed(randSeedString); }
    inline static void _SeedRnd(int arg1) { ptr::_SeedRnd(arg1); }
    inline static void ProcessDelayedStats() { ptr::ProcessDelayedStats(); }
    inline static int _GetIntervalDist(int arg1, int arg2, int arg3) { return ptr::_GetIntervalDist(arg1, arg2, arg3); }
    inline static int _GetL1Dist(int arg1, int arg2, int arg3, int arg4) { return ptr::_GetL1Dist(arg1, arg2, arg3, arg4); }
    inline static int _GetL1Dist2(Point * arg1, Rect * arg2) { return ptr::_GetL1Dist2(arg1, arg2); }
    inline static int _GetL1Dist3(Point * arg1, Point * arg2) { return ptr::_GetL1Dist3(arg1, arg2); }
    inline static bool IsBomblessCharacterActive() { return ptr::IsBomblessCharacterActive(); }
    inline static String * DirToString(int dir) { return ptr::DirToString(dir); }
    inline static String * GetTimeStringFromMilliseconds(int msecs, bool secondsOnly, bool padSeconds) { return ptr::GetTimeStringFromMilliseconds(msecs, secondsOnly, padSeconds); }
    inline static void Pump() { ptr::Pump(); }
    inline static int SongNameSoundtrackId(String * songName) { return ptr::SongNameSoundtrackId(songName); }
    inline static bool _LineSegmentTileIntersect(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6) { return ptr::_LineSegmentTileIntersect(arg1, arg2, arg3, arg4, arg5, arg6); }
    inline static bool HasLeaderboardDownloaded() { return ptr::HasLeaderboardDownloaded(); }
    inline static Player * GetClosestPlayerIncludeItemEffects(int xVal, int yVal, bool ignorePhasing) { return ptr::GetClosestPlayerIncludeItemEffects(xVal, yVal, ignorePhasing); }
    inline static Point2 * SegmentSegmentIntersection(float p0_x, float p0_y, float p1_x, float p1_y, float p2_x, float p2_y, float p3_x, float p3_y) { return ptr::SegmentSegmentIntersection(p0_x, p0_y, p1_x, p1_y, p2_x, p2_y, p3_x, p3_y); }
    inline static int GetAngleBetweenDirections(int dir1, int dir2) { return ptr::GetAngleBetweenDirections(dir1, dir2); }
    inline static bool _IsCardinal(int arg1) { return ptr::_IsCardinal(arg1); }
    inline static bool _IsPlayerAlive(int arg1) { return ptr::_IsPlayerAlive(arg1); }
    inline static Point * GetPlayerLocation(int playerNum) { return ptr::GetPlayerLocation(playerNum); }
    inline static String * GetLeaderboardSuffixForCharacterAndCoopAndDeathlessState(bool includeCadence, bool includeCustomMusic, bool includeExtraMode, bool includeChar, bool includeAllChars, bool includeTags) { return ptr::GetLeaderboardSuffixForCharacterAndCoopAndDeathlessState(includeCadence, includeCustomMusic, includeExtraMode, includeChar, includeAllChars, includeTags); }
    inline static void SubmitModeScore(String * mode, int score, int z, int l, String * suffix, String * killedBy, String * replayData) { ptr::SubmitModeScore(mode, score, z, l, suffix, killedBy, replayData); }
    inline static void SubmitDailyHardcoreScore(int score, int z, int l, String * suffix, String * killedBy, String * replayData) { ptr::SubmitDailyHardcoreScore(score, z, l, suffix, killedBy, replayData); }
    inline static void SubmitSeededScore(int score, int z, int l, String * suffix, String * killedBy, String * replayData) { ptr::SubmitSeededScore(score, z, l, suffix, killedBy, replayData); }
    inline static int _InvertSpeedrunScore(int arg1) { return ptr::_InvertSpeedrunScore(arg1); }
    inline static void SubmitSeededSpeedrunScore(int score, int z, int l, String * suffix, String * killedBy, String * replayData) { ptr::SubmitSeededSpeedrunScore(score, z, l, suffix, killedBy, replayData); }
    inline static void SubmitHardcoreScore(int score, int z, int l, String * suffix, String * killedBy, String * replayData) { ptr::SubmitHardcoreScore(score, z, l, suffix, killedBy, replayData); }
    inline static void SubmitSpeedrunScore(int score, int z, int l, String * suffix, String * killedBy, String * replayData) { ptr::SubmitSpeedrunScore(score, z, l, suffix, killedBy, replayData); }
    inline static float _GetDistSqFromObject(int arg1, int arg2, RenderableObject * arg3) { return ptr::_GetDistSqFromObject(arg1, arg2, arg3); }
    inline static float GetDistSqFromClosestPlayer(int xVal, int yVal, bool includeSouls, bool includeLambs) { return ptr::GetDistSqFromClosestPlayer(xVal, yVal, includeSouls, includeLambs); }
    inline static int GetDirAfterRotation(int dir, int rotation, bool includeDiagonals) { return ptr::GetDirAfterRotation(dir, rotation, includeDiagonals); }
    inline static bool _IsEffectFlickeringOff() { return ptr::_IsEffectFlickeringOff(); }
    inline static bool _TileCoordFractionFloatsLessThan(float arg1, float arg2) { return ptr::_TileCoordFractionFloatsLessThan(arg1, arg2); }
    inline static bool _TileCoordFractionFloatsLessThanOrEqual(float arg1, float arg2) { return ptr::_TileCoordFractionFloatsLessThanOrEqual(arg1, arg2); }
    inline static bool _TileCoordFractionFloatsGreaterThan(float arg1, float arg2) { return ptr::_TileCoordFractionFloatsGreaterThan(arg1, arg2); }
    inline static bool _IsWindows() { return ptr::_IsWindows(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static String * (*GetVersionString)();
        static String * (*StringLeft)(String * str, int n);
        static void (*SetAppFolder)();
        static void (*AddMetric)(String * key, String * value, bool send, bool blocking, bool isNumber);
        static String * (*GetLeaderboardSetPrefix)();
        static String * (*GetLeaderboardSuffix)();
        static void (*GetLeaderboardScores)(int rangeStart, int rangeEnd, int dayOffset, String * specificLeaderboard, bool useTodaysSeed, bool friendsOnly, bool playerOnly);
        static String * (*GetLanguagesFolderPath)();
        static String * (*GetActiveLanguagesFolderPath)();
        static List2 * (*CreateScaledTextSprite)(String * str, int color, int scale);
        static Sprite * (*CreateTextSprite)(String * str, int color, bool addShadow);
        static int (*GetSteamStat)(String * statName);
        static bool (*_AreWeInGameplayMode)();
        static bool (*SetSteamIntStat)(String * statName, int val, bool inGameplayOnly, bool allowCoop, bool delayUntilLevelLoad);
        static bool (*IsCharacterActive)(int charID);
        static float (*_RndFloatRange)(float arg1, float arg2, bool arg3);
        static int (*RndIntRange)(int low, int high, bool useSeed, int replayConsistencyChannel);
        static int (*RndIntRangeFromZero)(int high, bool useSeed);
        static float (*_GetDistSq)(int arg1, int arg2, int arg3, int arg4);
        static float (*_GetDist)(int arg1, int arg2, int arg3, int arg4);
        static float (*_GetDistFromObject)(int arg1, int arg2, RenderableObject * arg3);
        static float (*_GetDistFromPlayer1)(int arg1, int arg2);
        static Point * (*GetPointFromDir)(int dir);
        static int (*GetDirFromDiff)(int xDiff, int yDiff);
        static bool (*RndBool)(bool useSeed);
        static bool (*IsAnyPlayerAt)(int xVal, int yVal);
        static Player * (*GetAnyPlayerAt)(int xVal, int yVal);
        static bool (*IsGlobalCollisionAt)(int xVal, int yVal, bool isPlayer, bool ignoreWalls, bool includeTheNothing, bool includeShopWallsDespiteIgnoringWalls, bool skipIgnoreWalls);
        static List33 * (*GetPlayersAt)(Rect * where);
        static List33 * (*GetPlayersAt2)(int xVal, int yVal);
        static bool (*_IsDiagonal)(int arg1);
        static StackEx * (*GetDirRotationOrder)();
        static int (*_DirToRotationIndex)(int arg1);
        static int (*_RotationIndexToDir)(int arg1);
        static Point * (*RotatePoint45DegreesClockwise)(Point * p);
        static Point * (*RotatePointInDirection)(Point * original, int dir);
        static Point * (*RotatePointInGeneralDirection)(Point * p, int dir);
        static int (*RotateDirInDirection)(int original, int dir);
        static bool (*AreAriaOrCodaActive)();
        static bool (*IsWeaponlessCharacterActive)();
        static bool (*CustomMusicInUse)();
        static bool (*IncrementSteamStat)(String * statName, bool inGameplayOnly, bool allowCoop, bool allowSeeded, bool delayUntilLevelLoad);
        static Player * (*GetClosestPlayer)(int xVal, int yVal);
        static bool (*_IsGlobalOrPlayerCollisionAt)(int arg1, int arg2, bool arg3, bool arg4, bool arg5);
        static Point * (*FindClosestTrulyUnoccupiedSpace)(int xVal, int yVal, bool ignoreWalls);
        static float (*GetDistFromClosestPlayer)(int xVal, int yVal, bool includeSouls);
        static int (*_GetDirFromPoints)(int arg1, int arg2, int arg3, int arg4);
        static Point * (*FindClosestUnoccupiedSpace)(int xVal, int yVal, bool ignoreWalls);
        static float (*_DistanceFromPointToLine)(Point2 * arg1, Point2 * arg2, Point2 * arg3);
        static void (*SendEntityTo)(Entity * ent, int xVal, int yVal, bool triggerBossStart);
        static bool (*TeleportEntity)(Entity * ent, float minDist, int oldX, int oldY, bool anyFloor);
        static int (*_GetDirFromPoint)(Point * arg1);
        static int (*InvertDir)(int dir);
        static int (*_DirToCardinalDir)(int arg1);
        static bool (*IsNonMobileCollisionAt)(int xVal, int yVal);
        static bool (*IsOnScreen)(int xVal, int yVal, float cameraSeekX, float cameraSeekY);
        static bool (*IsEnemyAdjacent)(int xVal, int yVal);
        static Point * (*FindClosestTrulyUnoccupiedSpaceNotAdjacentToEnemy)(int xVal, int yVal, bool ignoreWalls);
        static int (*ParseTextSeed)(String * randSeedString);
        static void (*_SeedRnd)(int arg1);
        static void (*ProcessDelayedStats)();
        static int (*_GetIntervalDist)(int arg1, int arg2, int arg3);
        static int (*_GetL1Dist)(int arg1, int arg2, int arg3, int arg4);
        static int (*_GetL1Dist2)(Point * arg1, Rect * arg2);
        static int (*_GetL1Dist3)(Point * arg1, Point * arg2);
        static bool (*IsBomblessCharacterActive)();
        static String * (*DirToString)(int dir);
        static String * (*GetTimeStringFromMilliseconds)(int msecs, bool secondsOnly, bool padSeconds);
        static void (*Pump)();
        static int (*SongNameSoundtrackId)(String * songName);
        static bool (*_LineSegmentTileIntersect)(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6);
        static bool (*HasLeaderboardDownloaded)();
        static Player * (*GetClosestPlayerIncludeItemEffects)(int xVal, int yVal, bool ignorePhasing);
        static Point2 * (*SegmentSegmentIntersection)(float p0_x, float p0_y, float p1_x, float p1_y, float p2_x, float p2_y, float p3_x, float p3_y);
        static int (*GetAngleBetweenDirections)(int dir1, int dir2);
        static bool (*_IsCardinal)(int arg1);
        static bool (*_IsPlayerAlive)(int arg1);
        static Point * (*GetPlayerLocation)(int playerNum);
        static String * (*GetLeaderboardSuffixForCharacterAndCoopAndDeathlessState)(bool includeCadence, bool includeCustomMusic, bool includeExtraMode, bool includeChar, bool includeAllChars, bool includeTags);
        static void (*SubmitModeScore)(String * mode, int score, int z, int l, String * suffix, String * killedBy, String * replayData);
        static void (*SubmitDailyHardcoreScore)(int score, int z, int l, String * suffix, String * killedBy, String * replayData);
        static void (*SubmitSeededScore)(int score, int z, int l, String * suffix, String * killedBy, String * replayData);
        static int (*_InvertSpeedrunScore)(int arg1);
        static void (*SubmitSeededSpeedrunScore)(int score, int z, int l, String * suffix, String * killedBy, String * replayData);
        static void (*SubmitHardcoreScore)(int score, int z, int l, String * suffix, String * killedBy, String * replayData);
        static void (*SubmitSpeedrunScore)(int score, int z, int l, String * suffix, String * killedBy, String * replayData);
        static float (*_GetDistSqFromObject)(int arg1, int arg2, RenderableObject * arg3);
        static float (*GetDistSqFromClosestPlayer)(int xVal, int yVal, bool includeSouls, bool includeLambs);
        static int (*GetDirAfterRotation)(int dir, int rotation, bool includeDiagonals);
        static bool (*_IsEffectFlickeringOff)();
        static bool (*_TileCoordFractionFloatsLessThan)(float arg1, float arg2);
        static bool (*_TileCoordFractionFloatsLessThanOrEqual)(float arg1, float arg2);
        static bool (*_TileCoordFractionFloatsGreaterThan)(float arg1, float arg2);
        static bool (*_IsWindows)();
        static void (*_mark)();
    };
};

#ifdef _WIN32
inline String * * Util::metricString = (String* *) 0x833ea4;
inline bool * Util::pendingScoreRetrieval = (bool*) 0x835c1c;
inline String * * Util::pendingRetrievalLeaderboard = (String* *) 0x833ea8;
inline String * * Util::currentLeaderboardName = (String* *) 0x833eac;
inline int * Util::pendingScoreRetrievalStart = (int*) 0x835c18;
inline int * Util::pendingScoreRetrievalEnd = (int*) 0x835c14;
inline bool * Util::pendingScoreFriends = (bool*) 0x835c07;
inline bool * Util::pendingScorePlayer = (bool*) 0x835c06;
inline StringMap5 * * Util::delayedStatSets = (StringMap5* *) 0x835c08;
inline int * Util::storedSeed = (int*) 0x835bfc;
inline StackEx * * Util::dirRotationOrder = (StackEx* *) 0x835be8;
inline List11 * * Util::delayedStatIncrements = (List11* *) 0x835be4;
inline List54 * * Util::pendingScoreSubmission = (List54* *) 0x835bc8;
inline String * * Util::pendingSubmissionLeaderboardName = (String* *) 0x833eb0;
inline int * Util::numSubmissionAttempts = (int*) 0x835bb4;
inline String * * Util::dataSeparatorString = (String* *) 0x833eb4;

inline String * (*Util::ptr::GetVersionString)() = (String * (*)()) 0x4201e0;
inline String * (*Util::ptr::StringLeft)(String * str, int n) = (String * (*)(String * str, int n)) 0x420480;
inline void (*Util::ptr::SetAppFolder)() = (void (*)()) 0x420510;
inline void (*Util::ptr::AddMetric)(String * key, String * value, bool send, bool blocking, bool isNumber) = (void (*)(String * key, String * value, bool send, bool blocking, bool isNumber)) 0x4207b0;
inline String * (*Util::ptr::GetLeaderboardSetPrefix)() = (String * (*)()) 0x4211c0;
inline String * (*Util::ptr::GetLeaderboardSuffix)() = (String * (*)()) 0x421260;
inline void (*Util::ptr::GetLeaderboardScores)(int rangeStart, int rangeEnd, int dayOffset, String * specificLeaderboard, bool useTodaysSeed, bool friendsOnly, bool playerOnly) = (void (*)(int rangeStart, int rangeEnd, int dayOffset, String * specificLeaderboard, bool useTodaysSeed, bool friendsOnly, bool playerOnly)) 0x421360;
inline String * (*Util::ptr::GetLanguagesFolderPath)() = (String * (*)()) 0x4215b0;
inline String * (*Util::ptr::GetActiveLanguagesFolderPath)() = (String * (*)()) 0x4216f0;
inline List2 * (*Util::ptr::CreateScaledTextSprite)(String * str, int color, int scale) = (List2 * (*)(String * str, int color, int scale)) 0x421830;
inline Sprite * (*Util::ptr::CreateTextSprite)(String * str, int color, bool addShadow) = (Sprite * (*)(String * str, int color, bool addShadow)) 0x422a50;
inline int (*Util::ptr::GetSteamStat)(String * statName) = (int (*)(String * statName)) 0x425de0;
inline bool (*Util::ptr::_AreWeInGameplayMode)() = (bool (*)()) 0x0;
inline bool (*Util::ptr::SetSteamIntStat)(String * statName, int val, bool inGameplayOnly, bool allowCoop, bool delayUntilLevelLoad) = (bool (*)(String * statName, int val, bool inGameplayOnly, bool allowCoop, bool delayUntilLevelLoad)) 0x425e60;
inline bool (*Util::ptr::IsCharacterActive)(int charID) = (bool (*)(int charID)) 0x425f70;
inline float (*Util::ptr::_RndFloatRange)(float arg1, float arg2, bool arg3) = (float (*)(float arg1, float arg2, bool arg3)) 0x0;
inline int (*Util::ptr::RndIntRange)(int low, int high, bool useSeed, int replayConsistencyChannel) = (int (*)(int low, int high, bool useSeed, int replayConsistencyChannel)) 0x425fb0;
inline int (*Util::ptr::RndIntRangeFromZero)(int high, bool useSeed) = (int (*)(int high, bool useSeed)) 0x4260b0;
inline float (*Util::ptr::_GetDistSq)(int arg1, int arg2, int arg3, int arg4) = (float (*)(int arg1, int arg2, int arg3, int arg4)) 0x0;
inline float (*Util::ptr::_GetDist)(int arg1, int arg2, int arg3, int arg4) = (float (*)(int arg1, int arg2, int arg3, int arg4)) 0x0;
inline float (*Util::ptr::_GetDistFromObject)(int arg1, int arg2, RenderableObject * arg3) = (float (*)(int arg1, int arg2, RenderableObject * arg3)) 0x0;
inline float (*Util::ptr::_GetDistFromPlayer1)(int arg1, int arg2) = (float (*)(int arg1, int arg2)) 0x0;
inline Point * (*Util::ptr::GetPointFromDir)(int dir) = (Point * (*)(int dir)) 0x426140;
inline int (*Util::ptr::GetDirFromDiff)(int xDiff, int yDiff) = (int (*)(int xDiff, int yDiff)) 0x426430;
inline bool (*Util::ptr::RndBool)(bool useSeed) = (bool (*)(bool useSeed)) 0x426490;
inline bool (*Util::ptr::IsAnyPlayerAt)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x4264c0;
inline Player * (*Util::ptr::GetAnyPlayerAt)(int xVal, int yVal) = (Player * (*)(int xVal, int yVal)) 0x426530;
inline bool (*Util::ptr::IsGlobalCollisionAt)(int xVal, int yVal, bool isPlayer, bool ignoreWalls, bool includeTheNothing, bool includeShopWallsDespiteIgnoringWalls, bool skipIgnoreWalls) = (bool (*)(int xVal, int yVal, bool isPlayer, bool ignoreWalls, bool includeTheNothing, bool includeShopWallsDespiteIgnoringWalls, bool skipIgnoreWalls)) 0x4265a0;
inline List33 * (*Util::ptr::GetPlayersAt)(Rect * where) = (List33 * (*)(Rect * where)) 0x426740;
inline List33 * (*Util::ptr::GetPlayersAt2)(int xVal, int yVal) = (List33 * (*)(int xVal, int yVal)) 0x426820;
inline bool (*Util::ptr::_IsDiagonal)(int arg1) = (bool (*)(int arg1)) 0x0;
inline StackEx * (*Util::ptr::GetDirRotationOrder)() = (StackEx * (*)()) 0x4268e0;
inline int (*Util::ptr::_DirToRotationIndex)(int arg1) = (int (*)(int arg1)) 0x0;
inline int (*Util::ptr::_RotationIndexToDir)(int arg1) = (int (*)(int arg1)) 0x0;
inline Point * (*Util::ptr::RotatePoint45DegreesClockwise)(Point * p) = (Point * (*)(Point * p)) 0x4269c0;
inline Point * (*Util::ptr::RotatePointInDirection)(Point * original, int dir) = (Point * (*)(Point * original, int dir)) 0x426b30;
inline Point * (*Util::ptr::RotatePointInGeneralDirection)(Point * p, int dir) = (Point * (*)(Point * p, int dir)) 0x426cf0;
inline int (*Util::ptr::RotateDirInDirection)(int original, int dir) = (int (*)(int original, int dir)) 0x426e60;
inline bool (*Util::ptr::AreAriaOrCodaActive)() = (bool (*)()) 0x426ed0;
inline bool (*Util::ptr::IsWeaponlessCharacterActive)() = (bool (*)()) 0x426f30;
inline bool (*Util::ptr::CustomMusicInUse)() = (bool (*)()) 0x426f80;
inline bool (*Util::ptr::IncrementSteamStat)(String * statName, bool inGameplayOnly, bool allowCoop, bool allowSeeded, bool delayUntilLevelLoad) = (bool (*)(String * statName, bool inGameplayOnly, bool allowCoop, bool allowSeeded, bool delayUntilLevelLoad)) 0x427100;
inline Player * (*Util::ptr::GetClosestPlayer)(int xVal, int yVal) = (Player * (*)(int xVal, int yVal)) 0x427220;
inline bool (*Util::ptr::_IsGlobalOrPlayerCollisionAt)(int arg1, int arg2, bool arg3, bool arg4, bool arg5) = (bool (*)(int arg1, int arg2, bool arg3, bool arg4, bool arg5)) 0x0;
inline Point * (*Util::ptr::FindClosestTrulyUnoccupiedSpace)(int xVal, int yVal, bool ignoreWalls) = (Point * (*)(int xVal, int yVal, bool ignoreWalls)) 0x4272f0;
inline float (*Util::ptr::GetDistFromClosestPlayer)(int xVal, int yVal, bool includeSouls) = (float (*)(int xVal, int yVal, bool includeSouls)) 0x428190;
inline int (*Util::ptr::_GetDirFromPoints)(int arg1, int arg2, int arg3, int arg4) = (int (*)(int arg1, int arg2, int arg3, int arg4)) 0x0;
inline Point * (*Util::ptr::FindClosestUnoccupiedSpace)(int xVal, int yVal, bool ignoreWalls) = (Point * (*)(int xVal, int yVal, bool ignoreWalls)) 0x4282c0;
inline float (*Util::ptr::_DistanceFromPointToLine)(Point2 * arg1, Point2 * arg2, Point2 * arg3) = (float (*)(Point2 * arg1, Point2 * arg2, Point2 * arg3)) 0x0;
inline void (*Util::ptr::SendEntityTo)(Entity * ent, int xVal, int yVal, bool triggerBossStart) = (void (*)(Entity * ent, int xVal, int yVal, bool triggerBossStart)) 0x429420;
inline bool (*Util::ptr::TeleportEntity)(Entity * ent, float minDist, int oldX, int oldY, bool anyFloor) = (bool (*)(Entity * ent, float minDist, int oldX, int oldY, bool anyFloor)) 0x429500;
inline int (*Util::ptr::_GetDirFromPoint)(Point * arg1) = (int (*)(Point * arg1)) 0x0;
inline int (*Util::ptr::InvertDir)(int dir) = (int (*)(int dir)) 0x429b50;
inline int (*Util::ptr::_DirToCardinalDir)(int arg1) = (int (*)(int arg1)) 0x0;
inline bool (*Util::ptr::IsNonMobileCollisionAt)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x429ba0;
inline bool (*Util::ptr::IsOnScreen)(int xVal, int yVal, float cameraSeekX, float cameraSeekY) = (bool (*)(int xVal, int yVal, float cameraSeekX, float cameraSeekY)) 0x429c00;
inline bool (*Util::ptr::IsEnemyAdjacent)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x429dc0;
inline Point * (*Util::ptr::FindClosestTrulyUnoccupiedSpaceNotAdjacentToEnemy)(int xVal, int yVal, bool ignoreWalls) = (Point * (*)(int xVal, int yVal, bool ignoreWalls)) 0x429e80;
inline int (*Util::ptr::ParseTextSeed)(String * randSeedString) = (int (*)(String * randSeedString)) 0x42ae00;
inline void (*Util::ptr::_SeedRnd)(int arg1) = (void (*)(int arg1)) 0x0;
inline void (*Util::ptr::ProcessDelayedStats)() = (void (*)()) 0x42aed0;
inline int (*Util::ptr::_GetIntervalDist)(int arg1, int arg2, int arg3) = (int (*)(int arg1, int arg2, int arg3)) 0x0;
inline int (*Util::ptr::_GetL1Dist)(int arg1, int arg2, int arg3, int arg4) = (int (*)(int arg1, int arg2, int arg3, int arg4)) 0x0;
inline int (*Util::ptr::_GetL1Dist2)(Point * arg1, Rect * arg2) = (int (*)(Point * arg1, Rect * arg2)) 0x0;
inline int (*Util::ptr::_GetL1Dist3)(Point * arg1, Point * arg2) = (int (*)(Point * arg1, Point * arg2)) 0x0;
inline bool (*Util::ptr::IsBomblessCharacterActive)() = (bool (*)()) 0x42b070;
inline String * (*Util::ptr::DirToString)(int dir) = (String * (*)(int dir)) 0x42b0c0;
inline String * (*Util::ptr::GetTimeStringFromMilliseconds)(int msecs, bool secondsOnly, bool padSeconds) = (String * (*)(int msecs, bool secondsOnly, bool padSeconds)) 0x42b2e0;
inline void (*Util::ptr::Pump)() = (void (*)()) 0x42bb80;
inline int (*Util::ptr::SongNameSoundtrackId)(String * songName) = (int (*)(String * songName)) 0x42bff0;
inline bool (*Util::ptr::_LineSegmentTileIntersect)(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6) = (bool (*)(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6)) 0x0;
inline bool (*Util::ptr::HasLeaderboardDownloaded)() = (bool (*)()) 0x42c410;
inline Player * (*Util::ptr::GetClosestPlayerIncludeItemEffects)(int xVal, int yVal, bool ignorePhasing) = (Player * (*)(int xVal, int yVal, bool ignorePhasing)) 0x42c530;
inline Point2 * (*Util::ptr::SegmentSegmentIntersection)(float p0_x, float p0_y, float p1_x, float p1_y, float p2_x, float p2_y, float p3_x, float p3_y) = (Point2 * (*)(float p0_x, float p0_y, float p1_x, float p1_y, float p2_x, float p2_y, float p3_x, float p3_y)) 0x42c840;
inline int (*Util::ptr::GetAngleBetweenDirections)(int dir1, int dir2) = (int (*)(int dir1, int dir2)) 0x42c980;
inline bool (*Util::ptr::_IsCardinal)(int arg1) = (bool (*)(int arg1)) 0x0;
inline bool (*Util::ptr::_IsPlayerAlive)(int arg1) = (bool (*)(int arg1)) 0x0;
inline Point * (*Util::ptr::GetPlayerLocation)(int playerNum) = (Point * (*)(int playerNum)) 0x42cbe0;
inline String * (*Util::ptr::GetLeaderboardSuffixForCharacterAndCoopAndDeathlessState)(bool includeCadence, bool includeCustomMusic, bool includeExtraMode, bool includeChar, bool includeAllChars, bool includeTags) = (String * (*)(bool includeCadence, bool includeCustomMusic, bool includeExtraMode, bool includeChar, bool includeAllChars, bool includeTags)) 0x42cd60;
inline void (*Util::ptr::SubmitModeScore)(String * mode, int score, int z, int l, String * suffix, String * killedBy, String * replayData) = (void (*)(String * mode, int score, int z, int l, String * suffix, String * killedBy, String * replayData)) 0x42dd80;
inline void (*Util::ptr::SubmitDailyHardcoreScore)(int score, int z, int l, String * suffix, String * killedBy, String * replayData) = (void (*)(int score, int z, int l, String * suffix, String * killedBy, String * replayData)) 0x42dfe0;
inline void (*Util::ptr::SubmitSeededScore)(int score, int z, int l, String * suffix, String * killedBy, String * replayData) = (void (*)(int score, int z, int l, String * suffix, String * killedBy, String * replayData)) 0x42e1b0;
inline int (*Util::ptr::_InvertSpeedrunScore)(int arg1) = (int (*)(int arg1)) 0x0;
inline void (*Util::ptr::SubmitSeededSpeedrunScore)(int score, int z, int l, String * suffix, String * killedBy, String * replayData) = (void (*)(int score, int z, int l, String * suffix, String * killedBy, String * replayData)) 0x42e2f0;
inline void (*Util::ptr::SubmitHardcoreScore)(int score, int z, int l, String * suffix, String * killedBy, String * replayData) = (void (*)(int score, int z, int l, String * suffix, String * killedBy, String * replayData)) 0x42e430;
inline void (*Util::ptr::SubmitSpeedrunScore)(int score, int z, int l, String * suffix, String * killedBy, String * replayData) = (void (*)(int score, int z, int l, String * suffix, String * killedBy, String * replayData)) 0x42e570;
inline float (*Util::ptr::_GetDistSqFromObject)(int arg1, int arg2, RenderableObject * arg3) = (float (*)(int arg1, int arg2, RenderableObject * arg3)) 0x0;
inline float (*Util::ptr::GetDistSqFromClosestPlayer)(int xVal, int yVal, bool includeSouls, bool includeLambs) = (float (*)(int xVal, int yVal, bool includeSouls, bool includeLambs)) 0x42e6b0;
inline int (*Util::ptr::GetDirAfterRotation)(int dir, int rotation, bool includeDiagonals) = (int (*)(int dir, int rotation, bool includeDiagonals)) 0x42e830;
inline bool (*Util::ptr::_IsEffectFlickeringOff)() = (bool (*)()) 0x0;
inline bool (*Util::ptr::_TileCoordFractionFloatsLessThan)(float arg1, float arg2) = (bool (*)(float arg1, float arg2)) 0x0;
inline bool (*Util::ptr::_TileCoordFractionFloatsLessThanOrEqual)(float arg1, float arg2) = (bool (*)(float arg1, float arg2)) 0x0;
inline bool (*Util::ptr::_TileCoordFractionFloatsGreaterThan)(float arg1, float arg2) = (bool (*)(float arg1, float arg2)) 0x0;
inline bool (*Util::ptr::_IsWindows)() = (bool (*)()) 0x0;
inline void (*Util::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__
inline String * * Util::metricString = (String* *) 0x856aba4;
inline bool * Util::pendingScoreRetrieval = (bool*) 0x856aba0;
inline String * * Util::pendingRetrievalLeaderboard = (String* *) 0x856ab9c;
inline String * * Util::currentLeaderboardName = (String* *) 0x856ab98;
inline int * Util::pendingScoreRetrievalStart = (int*) 0x856ab94;
inline int * Util::pendingScoreRetrievalEnd = (int*) 0x856ab90;
inline bool * Util::pendingScoreFriends = (bool*) 0x856ab8d;
inline bool * Util::pendingScorePlayer = (bool*) 0x856ab8c;
inline StringMap5 * * Util::delayedStatSets = (StringMap5* *) 0x856ab88;
inline int * Util::storedSeed = (int*) 0x856ab84;
inline StackEx * * Util::dirRotationOrder = (StackEx* *) 0x856ab80;
inline List11 * * Util::delayedStatIncrements = (List11* *) 0x856ab7c;
inline List54 * * Util::pendingScoreSubmission = (List54* *) 0x856ab78;
inline String * * Util::pendingSubmissionLeaderboardName = (String* *) 0x856ab74;
inline int * Util::numSubmissionAttempts = (int*) 0x856ab70;
inline String * * Util::dataSeparatorString = (String* *) 0x856ab6c;

inline String * (*Util::ptr::GetVersionString)() = (String * (*)()) 0x80fef20;
inline String * (*Util::ptr::StringLeft)(String * str, int n) = (String * (*)(String * str, int n)) 0x80ff0a0;
inline void (*Util::ptr::SetAppFolder)() = (void (*)()) 0x80ff130;
inline void (*Util::ptr::AddMetric)(String * key, String * value, bool send, bool blocking, bool isNumber) = (void (*)(String * key, String * value, bool send, bool blocking, bool isNumber)) 0x80ff460;
inline String * (*Util::ptr::GetLeaderboardSetPrefix)() = (String * (*)()) 0x80fff40;
inline String * (*Util::ptr::GetLeaderboardSuffix)() = (String * (*)()) 0x80fff70;
inline void (*Util::ptr::GetLeaderboardScores)(int rangeStart, int rangeEnd, int dayOffset, String * specificLeaderboard, bool useTodaysSeed, bool friendsOnly, bool playerOnly) = (void (*)(int rangeStart, int rangeEnd, int dayOffset, String * specificLeaderboard, bool useTodaysSeed, bool friendsOnly, bool playerOnly)) 0x83e38b0;
inline String * (*Util::ptr::GetLanguagesFolderPath)() = (String * (*)()) 0x80fffd0;
inline String * (*Util::ptr::GetActiveLanguagesFolderPath)() = (String * (*)()) 0x8108530;
inline List2 * (*Util::ptr::CreateScaledTextSprite)(String * str, int color, int scale) = (List2 * (*)(String * str, int color, int scale)) 0x8148ac0;
inline Sprite * (*Util::ptr::CreateTextSprite)(String * str, int color, bool addShadow) = (Sprite * (*)(String * str, int color, bool addShadow)) 0x81ffad0;
inline int (*Util::ptr::GetSteamStat)(String * statName) = (int (*)(String * statName)) 0x81000a0;
inline bool (*Util::ptr::_AreWeInGameplayMode)() = (bool (*)()) 0x81000f0;
inline bool (*Util::ptr::SetSteamIntStat)(String * statName, int val, bool inGameplayOnly, bool allowCoop, bool delayUntilLevelLoad) = (bool (*)(String * statName, int val, bool inGameplayOnly, bool allowCoop, bool delayUntilLevelLoad)) 0x8276bd0;
inline bool (*Util::ptr::IsCharacterActive)(int charID) = (bool (*)(int charID)) 0x8100120;
inline float (*Util::ptr::_RndFloatRange)(float arg1, float arg2, bool arg3) = (float (*)(float arg1, float arg2, bool arg3)) 0x8100170;
inline int (*Util::ptr::RndIntRange)(int low, int high, bool useSeed, int replayConsistencyChannel) = (int (*)(int low, int high, bool useSeed, int replayConsistencyChannel)) 0x81001e0;
inline int (*Util::ptr::RndIntRangeFromZero)(int high, bool useSeed) = (int (*)(int high, bool useSeed)) 0x81023f0;
inline float (*Util::ptr::_GetDistSq)(int arg1, int arg2, int arg3, int arg4) = (float (*)(int arg1, int arg2, int arg3, int arg4)) 0x8102420;
inline float (*Util::ptr::_GetDist)(int arg1, int arg2, int arg3, int arg4) = (float (*)(int arg1, int arg2, int arg3, int arg4)) 0x8102450;
inline float (*Util::ptr::_GetDistFromObject)(int arg1, int arg2, RenderableObject * arg3) = (float (*)(int arg1, int arg2, RenderableObject * arg3)) 0x81024a0;
inline float (*Util::ptr::_GetDistFromPlayer1)(int arg1, int arg2) = (float (*)(int arg1, int arg2)) 0x8102500;
inline Point * (*Util::ptr::GetPointFromDir)(int dir) = (Point * (*)(int dir)) 0x8102560;
inline int (*Util::ptr::GetDirFromDiff)(int xDiff, int yDiff) = (int (*)(int xDiff, int yDiff)) 0x81037a0;
inline bool (*Util::ptr::RndBool)(bool useSeed) = (bool (*)(bool useSeed)) 0x8103850;
inline bool (*Util::ptr::IsAnyPlayerAt)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x81038d0;
inline Player * (*Util::ptr::GetAnyPlayerAt)(int xVal, int yVal) = (Player * (*)(int xVal, int yVal)) 0x8103950;
inline bool (*Util::ptr::IsGlobalCollisionAt)(int xVal, int yVal, bool isPlayer, bool ignoreWalls, bool includeTheNothing, bool includeShopWallsDespiteIgnoringWalls, bool skipIgnoreWalls) = (bool (*)(int xVal, int yVal, bool isPlayer, bool ignoreWalls, bool includeTheNothing, bool includeShopWallsDespiteIgnoringWalls, bool skipIgnoreWalls)) 0x8131c00;
inline List33 * (*Util::ptr::GetPlayersAt)(Rect * where) = (List33 * (*)(Rect * where)) 0x81a8040;
inline List33 * (*Util::ptr::GetPlayersAt2)(int xVal, int yVal) = (List33 * (*)(int xVal, int yVal)) 0x81a8140;
inline bool (*Util::ptr::_IsDiagonal)(int arg1) = (bool (*)(int arg1)) 0x81039d0;
inline StackEx * (*Util::ptr::GetDirRotationOrder)() = (StackEx * (*)()) 0x81039e0;
inline int (*Util::ptr::_DirToRotationIndex)(int arg1) = (int (*)(int arg1)) 0x8103c10;
inline int (*Util::ptr::_RotationIndexToDir)(int arg1) = (int (*)(int arg1)) 0x822bf80;
inline Point * (*Util::ptr::RotatePoint45DegreesClockwise)(Point * p) = (Point * (*)(Point * p)) 0x822bfc0;
inline Point * (*Util::ptr::RotatePointInDirection)(Point * original, int dir) = (Point * (*)(Point * original, int dir)) 0x8375160;
inline Point * (*Util::ptr::RotatePointInGeneralDirection)(Point * p, int dir) = (Point * (*)(Point * p, int dir)) 0x8375250;
inline int (*Util::ptr::RotateDirInDirection)(int original, int dir) = (int (*)(int original, int dir)) 0x8103c30;
inline bool (*Util::ptr::AreAriaOrCodaActive)() = (bool (*)()) 0x8103cd0;
inline bool (*Util::ptr::IsWeaponlessCharacterActive)() = (bool (*)()) 0x8103d30;
inline bool (*Util::ptr::CustomMusicInUse)() = (bool (*)()) 0x810b2c0;
inline bool (*Util::ptr::IncrementSteamStat)(String * statName, bool inGameplayOnly, bool allowCoop, bool allowSeeded, bool delayUntilLevelLoad) = (bool (*)(String * statName, bool inGameplayOnly, bool allowCoop, bool allowSeeded, bool delayUntilLevelLoad)) 0x8277d10;
inline Player * (*Util::ptr::GetClosestPlayer)(int xVal, int yVal) = (Player * (*)(int xVal, int yVal)) 0x8103d90;
inline bool (*Util::ptr::_IsGlobalOrPlayerCollisionAt)(int arg1, int arg2, bool arg3, bool arg4, bool arg5) = (bool (*)(int arg1, int arg2, bool arg3, bool arg4, bool arg5)) 0x8132590;
inline Point * (*Util::ptr::FindClosestTrulyUnoccupiedSpace)(int xVal, int yVal, bool ignoreWalls) = (Point * (*)(int xVal, int yVal, bool ignoreWalls)) 0x813f6b0;
inline float (*Util::ptr::GetDistFromClosestPlayer)(int xVal, int yVal, bool includeSouls) = (float (*)(int xVal, int yVal, bool includeSouls)) 0x8104660;
inline int (*Util::ptr::_GetDirFromPoints)(int arg1, int arg2, int arg3, int arg4) = (int (*)(int arg1, int arg2, int arg3, int arg4)) 0x8104ab0;
inline Point * (*Util::ptr::FindClosestUnoccupiedSpace)(int xVal, int yVal, bool ignoreWalls) = (Point * (*)(int xVal, int yVal, bool ignoreWalls)) 0x8134120;
inline float (*Util::ptr::_DistanceFromPointToLine)(Point2 * arg1, Point2 * arg2, Point2 * arg3) = (float (*)(Point2 * arg1, Point2 * arg2, Point2 * arg3)) 0x8104b70;
inline void (*Util::ptr::SendEntityTo)(Entity * ent, int xVal, int yVal, bool triggerBossStart) = (void (*)(Entity * ent, int xVal, int yVal, bool triggerBossStart)) 0x83b7910;
inline bool (*Util::ptr::TeleportEntity)(Entity * ent, float minDist, int oldX, int oldY, bool anyFloor) = (bool (*)(Entity * ent, float minDist, int oldX, int oldY, bool anyFloor)) 0x83b7a20;
inline int (*Util::ptr::_GetDirFromPoint)(Point * arg1) = (int (*)(Point * arg1)) 0x8104bf0;
inline int (*Util::ptr::InvertDir)(int dir) = (int (*)(int dir)) 0x8104ca0;
inline int (*Util::ptr::_DirToCardinalDir)(int arg1) = (int (*)(int arg1)) 0x8104cf0;
inline bool (*Util::ptr::IsNonMobileCollisionAt)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x8104d30;
inline bool (*Util::ptr::IsOnScreen)(int xVal, int yVal, float cameraSeekX, float cameraSeekY) = (bool (*)(int xVal, int yVal, float cameraSeekX, float cameraSeekY)) 0x8104d90;
inline bool (*Util::ptr::IsEnemyAdjacent)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x816e3c0;
inline Point * (*Util::ptr::FindClosestTrulyUnoccupiedSpaceNotAdjacentToEnemy)(int xVal, int yVal, bool ignoreWalls) = (Point * (*)(int xVal, int yVal, bool ignoreWalls)) 0x816f7e0;
inline int (*Util::ptr::ParseTextSeed)(String * randSeedString) = (int (*)(String * randSeedString)) 0x8104f70;
inline void (*Util::ptr::_SeedRnd)(int arg1) = (void (*)(int arg1)) 0x8104fe0;
inline void (*Util::ptr::ProcessDelayedStats)() = (void (*)()) 0x8278070;
inline int (*Util::ptr::_GetIntervalDist)(int arg1, int arg2, int arg3) = (int (*)(int arg1, int arg2, int arg3)) 0x8105000;
inline int (*Util::ptr::_GetL1Dist)(int arg1, int arg2, int arg3, int arg4) = (int (*)(int arg1, int arg2, int arg3, int arg4)) 0x8105030;
inline int (*Util::ptr::_GetL1Dist2)(Point * arg1, Rect * arg2) = (int (*)(Point * arg1, Rect * arg2)) 0x8105060;
inline int (*Util::ptr::_GetL1Dist3)(Point * arg1, Point * arg2) = (int (*)(Point * arg1, Point * arg2)) 0x81050d0;
inline bool (*Util::ptr::IsBomblessCharacterActive)() = (bool (*)()) 0x8105100;
inline String * (*Util::ptr::DirToString)(int dir) = (String * (*)(int dir)) 0x8105160;
inline String * (*Util::ptr::GetTimeStringFromMilliseconds)(int msecs, bool secondsOnly, bool padSeconds) = (String * (*)(int msecs, bool secondsOnly, bool padSeconds)) 0x8105360;
inline void (*Util::ptr::Pump)() = (void (*)()) 0x8302a70;
inline int (*Util::ptr::SongNameSoundtrackId)(String * songName) = (int (*)(String * songName)) 0x82ba960;
inline bool (*Util::ptr::_LineSegmentTileIntersect)(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6) = (bool (*)(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6)) 0x8105970;
inline bool (*Util::ptr::HasLeaderboardDownloaded)() = (bool (*)()) 0x8105a60;
inline Player * (*Util::ptr::GetClosestPlayerIncludeItemEffects)(int xVal, int yVal, bool ignorePhasing) = (Player * (*)(int xVal, int yVal, bool ignorePhasing)) 0x812f6b0;
inline Point2 * (*Util::ptr::SegmentSegmentIntersection)(float p0_x, float p0_y, float p1_x, float p1_y, float p2_x, float p2_y, float p3_x, float p3_y) = (Point2 * (*)(float p0_x, float p0_y, float p1_x, float p1_y, float p2_x, float p2_y, float p3_x, float p3_y)) 0x8105b10;
inline int (*Util::ptr::GetAngleBetweenDirections)(int dir1, int dir2) = (int (*)(int dir1, int dir2)) 0x830a4c0;
inline bool (*Util::ptr::_IsCardinal)(int arg1) = (bool (*)(int arg1)) 0x8105c10;
inline bool (*Util::ptr::_IsPlayerAlive)(int arg1) = (bool (*)(int arg1)) 0x8105c20;
inline Point * (*Util::ptr::GetPlayerLocation)(int playerNum) = (Point * (*)(int playerNum)) 0x8105c90;
inline String * (*Util::ptr::GetLeaderboardSuffixForCharacterAndCoopAndDeathlessState)(bool includeCadence, bool includeCustomMusic, bool includeExtraMode, bool includeChar, bool includeAllChars, bool includeTags) = (String * (*)(bool includeCadence, bool includeCustomMusic, bool includeExtraMode, bool includeChar, bool includeAllChars, bool includeTags)) 0x81409c0;
inline void (*Util::ptr::SubmitModeScore)(String * mode, int score, int z, int l, String * suffix, String * killedBy, String * replayData) = (void (*)(String * mode, int score, int z, int l, String * suffix, String * killedBy, String * replayData)) 0x81060e0;
inline void (*Util::ptr::SubmitDailyHardcoreScore)(int score, int z, int l, String * suffix, String * killedBy, String * replayData) = (void (*)(int score, int z, int l, String * suffix, String * killedBy, String * replayData)) 0x81063f0;
inline void (*Util::ptr::SubmitSeededScore)(int score, int z, int l, String * suffix, String * killedBy, String * replayData) = (void (*)(int score, int z, int l, String * suffix, String * killedBy, String * replayData)) 0x8106560;
inline int (*Util::ptr::_InvertSpeedrunScore)(int arg1) = (int (*)(int arg1)) 0x8106650;
inline void (*Util::ptr::SubmitSeededSpeedrunScore)(int score, int z, int l, String * suffix, String * killedBy, String * replayData) = (void (*)(int score, int z, int l, String * suffix, String * killedBy, String * replayData)) 0x8106660;
inline void (*Util::ptr::SubmitHardcoreScore)(int score, int z, int l, String * suffix, String * killedBy, String * replayData) = (void (*)(int score, int z, int l, String * suffix, String * killedBy, String * replayData)) 0x8106750;
inline void (*Util::ptr::SubmitSpeedrunScore)(int score, int z, int l, String * suffix, String * killedBy, String * replayData) = (void (*)(int score, int z, int l, String * suffix, String * killedBy, String * replayData)) 0x8106840;
inline float (*Util::ptr::_GetDistSqFromObject)(int arg1, int arg2, RenderableObject * arg3) = (float (*)(int arg1, int arg2, RenderableObject * arg3)) 0x8106930;
inline float (*Util::ptr::GetDistSqFromClosestPlayer)(int xVal, int yVal, bool includeSouls, bool includeLambs) = (float (*)(int xVal, int yVal, bool includeSouls, bool includeLambs)) 0x8106960;
inline int (*Util::ptr::GetDirAfterRotation)(int dir, int rotation, bool includeDiagonals) = (int (*)(int dir, int rotation, bool includeDiagonals)) 0x8106af0;
inline bool (*Util::ptr::_IsEffectFlickeringOff)() = (bool (*)()) 0x8106c10;
inline bool (*Util::ptr::_TileCoordFractionFloatsLessThan)(float arg1, float arg2) = (bool (*)(float arg1, float arg2)) 0x8106c40;
inline bool (*Util::ptr::_TileCoordFractionFloatsLessThanOrEqual)(float arg1, float arg2) = (bool (*)(float arg1, float arg2)) 0x8106c90;
inline bool (*Util::ptr::_TileCoordFractionFloatsGreaterThan)(float arg1, float arg2) = (bool (*)(float arg1, float arg2)) 0x8106ce0;
inline bool (*Util::ptr::_IsWindows)() = (bool (*)()) 0x8106d30;
inline void (*Util::ptr::_mark)() = (void (*)()) 0x806d560;
#endif
#endif
