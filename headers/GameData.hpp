// Generated automatically. Do not edit!
#ifndef _GameData_
#define _GameData_
class String;
class XMLDoc;
#include "Object.hpp"

class GameData : public Object  {
public:
    static XMLDoc * * xmlSaveData;
    static bool * playerDataLoaded;
    static bool * modGamedataChanges;
    static String * * activeMod;
    static bool * playerDataLoadPending;
    static bool * gameDataLoaded;
    static bool * cachedAudioLatency;
    static int * cachedAudioLatencyVal;
    static bool * cachedAutocalibration;
    static int * cachedAutocalibrationVal;
    static bool * cachedVideoLatency;
    static int * cachedVideoLatencyVal;
    static XMLDoc * * replaySaveData;
    static int * lastNumCoins;
    static int * lastNumDiamonds;
    static int * lastDailyWithScore;

    // Wrappers
    inline static bool GetDebugLogging() { return ptr::GetDebugLogging(); }
    inline static int GetViewMultiplier() { return ptr::GetViewMultiplier(); }
    inline static void Save() { ptr::Save(); }
    inline static void LoadGameDataXML(bool bypassChecksum) { ptr::LoadGameDataXML(bypassChecksum); }
    inline static String * GetFreshString() { return ptr::GetFreshString(); }
    inline static bool LoadPlayerDataXML(bool forceCloud) { return ptr::LoadPlayerDataXML(forceCloud); }
    inline static String * GetDefaultMod() { return ptr::GetDefaultMod(); }
    inline static bool GetVSync() { return ptr::GetVSync(); }
    inline static bool GetFullscreen() { return ptr::GetFullscreen(); }
    inline static int GetResolutionW() { return ptr::GetResolutionW(); }
    inline static int GetResolutionH() { return ptr::GetResolutionH(); }
    inline static String * GetLanguage() { return ptr::GetLanguage(); }
    inline static bool GetShownSeizureWarning() { return ptr::GetShownSeizureWarning(); }
    inline static bool GetEnableSubtitles() { return ptr::GetEnableSubtitles(); }
    inline static void SetLobbyMove(bool m) { ptr::SetLobbyMove(m); }
    inline static void SetMentorLevelClear(int num) { ptr::SetMentorLevelClear(num); }
    inline static bool GetEnableCutscenes() { return ptr::GetEnableCutscenes(); }
    inline static int GetAlternateSkin(int charID) { return ptr::GetAlternateSkin(charID); }
    inline static bool GetUseChoral() { return ptr::GetUseChoral(); }
    inline static int GetAudioLatency() { return ptr::GetAudioLatency(); }
    inline static int GetAutocalibration() { return ptr::GetAutocalibration(); }
    inline static int GetVideoLatency() { return ptr::GetVideoLatency(); }
    inline static float GetMusicVolume() { return ptr::GetMusicVolume(); }
    inline static float GetSoundVolume() { return ptr::GetSoundVolume(); }
    inline static bool GetItemUnlocked(String * itemName, bool includeClean) { return ptr::GetItemUnlocked(itemName, includeClean); }
    inline static int GetNumPendingSpawnItems() { return ptr::GetNumPendingSpawnItems(); }
    inline static String * GetPendingSpawnItem(int num) { return ptr::GetPendingSpawnItem(num); }
    inline static void SetPendingSpawnItem(int num, String * i) { ptr::SetPendingSpawnItem(num, i); }
    inline static void SetNumPendingSpawnItems(int num) { ptr::SetNumPendingSpawnItems(num); }
    inline static void RemovePendingSpawnItem(String * item) { ptr::RemovePendingSpawnItem(item); }
    inline static String * GetCustomMusic(int index, int num, bool fromList) { return ptr::GetCustomMusic(index, num, fromList); }
    inline static int GetMusicMode() { return ptr::GetMusicMode(); }
    inline static void SetKilledEnemy(String * enemyName, int type, bool val) { ptr::SetKilledEnemy(enemyName, type, val); }
    inline static void SetNPCUnlock(String * npcName, bool unlock) { ptr::SetNPCUnlock(npcName, unlock); }
    inline static int GetPlayerHealthMax() { return ptr::GetPlayerHealthMax(); }
    inline static bool GetNPCUnlock(String * npcName) { return ptr::GetNPCUnlock(npcName); }
    inline static String * GetDiamondDealerSoldItem(int num) { return ptr::GetDiamondDealerSoldItem(num); }
    inline static bool _GetItemCleaned(String * arg1) { return ptr::_GetItemCleaned(arg1); }
    inline static void SetDiamondDealerSoldItem(int num, String * itemName) { ptr::SetDiamondDealerSoldItem(num, itemName); }
    inline static void SetPlayerCoins(int val) { ptr::SetPlayerCoins(val); }
    inline static void SetPlayerDiamonds(int val) { ptr::SetPlayerDiamonds(val); }
    inline static void SetItemCleaned(String * itemName, bool clean) { ptr::SetItemCleaned(itemName, clean); }
    inline static void AddDiamondDealerItem(String * itemName) { ptr::AddDiamondDealerItem(itemName); }
    inline static void SetItemUnlocked(String * itemName) { ptr::SetItemUnlocked(itemName); }
    inline static void AddPendingSpawnItem(String * i) { ptr::AddPendingSpawnItem(i); }
    inline static void SetZoneHoardCollected(int zone) { ptr::SetZoneHoardCollected(zone); }
    inline static void SetItemUsed(String * itemName) { ptr::SetItemUsed(itemName); }
    inline static void SetPlayerHealthMax(int val) { ptr::SetPlayerHealthMax(val); }
    inline static bool GetTutorialComplete() { return ptr::GetTutorialComplete(); }
    inline static int GetDefaultCharacter() { return ptr::GetDefaultCharacter(); }
    inline static int GetPlayerDiamonds() { return ptr::GetPlayerDiamonds(); }
    inline static void SetLastDailyRunNum(int val) { ptr::SetLastDailyRunNum(val); }
    inline static bool GetLobbyMove() { return ptr::GetLobbyMove(); }
    inline static bool HasFoughtNecrodancer2() { return ptr::HasFoughtNecrodancer2(); }
    inline static void SetFoughtNecrodancer2() { ptr::SetFoughtNecrodancer2(); }
    inline static bool IsCharUnlocked(int charNum) { return ptr::IsCharUnlocked(charNum); }
    inline static void SetCharUnlocked(int charNum, bool val) { ptr::SetCharUnlocked(charNum, val); }
    inline static bool HasFoughtNecrodancer() { return ptr::HasFoughtNecrodancer(); }
    inline static void SetFoughtNecrodancer() { ptr::SetFoughtNecrodancer(); }
    inline static bool HasFoughtLuteDragon() { return ptr::HasFoughtLuteDragon(); }
    inline static void SetFoughtLuteDragon() { ptr::SetFoughtLuteDragon(); }
    inline static bool GetZone3Unlocked(int characterID) { return ptr::GetZone3Unlocked(characterID); }
    inline static bool GetZone2Unlocked(int characterID) { return ptr::GetZone2Unlocked(characterID); }
    inline static bool GetZone2UnlockedCurrentCharacters() { return ptr::GetZone2UnlockedCurrentCharacters(); }
    inline static void SetZone3Unlocked(int characterID) { ptr::SetZone3Unlocked(characterID); }
    inline static void SetZone2Unlocked(int characterID) { ptr::SetZone2Unlocked(characterID); }
    inline static void SetZone2UnlockedCurrentCharacters() { ptr::SetZone2UnlockedCurrentCharacters(); }
    inline static bool GetZone4Unlocked(int characterID) { return ptr::GetZone4Unlocked(characterID); }
    inline static bool GetZone1UnlockedCurrentCharacters() { return ptr::GetZone1UnlockedCurrentCharacters(); }
    inline static void _SetZone4Unlocked(int arg1) { ptr::_SetZone4Unlocked(arg1); }
    inline static void SetZone1UnlockedCurrentCharacters() { ptr::SetZone1UnlockedCurrentCharacters(); }
    inline static bool GetZone3UnlockedCurrentCharacters() { return ptr::GetZone3UnlockedCurrentCharacters(); }
    inline static void SetZone3UnlockedCurrentCharacters() { ptr::SetZone3UnlockedCurrentCharacters(); }
    inline static bool GetZone4UnlockedCurrentCharacters() { return ptr::GetZone4UnlockedCurrentCharacters(); }
    inline static void SetZone4UnlockedCurrentCharacters() { ptr::SetZone4UnlockedCurrentCharacters(); }
    inline static bool GetShowDiamondReminder() { return ptr::GetShowDiamondReminder(); }
    inline static bool HasKilledEnemy(String * enemyName, int type) { return ptr::HasKilledEnemy(enemyName, type); }
    inline static bool GetBossTraining(String * bossName) { return ptr::GetBossTraining(bossName); }
    inline static bool _GetZone2UnlockedAnyCharacter() { return ptr::_GetZone2UnlockedAnyCharacter(); }
    inline static bool _GetZone3UnlockedAnyCharacter() { return ptr::_GetZone3UnlockedAnyCharacter(); }
    inline static bool _GetZone4UnlockedAnyCharacter() { return ptr::_GetZone4UnlockedAnyCharacter(); }
    inline static bool HasFoughtDeadRinger() { return ptr::HasFoughtDeadRinger(); }
    inline static void SetBossTraining(String * bossName, bool val) { ptr::SetBossTraining(bossName, val); }
    inline static void SetFoughtDeadRinger() { ptr::SetFoughtDeadRinger(); }
    inline static bool GetNPCVisited(String * npcName) { return ptr::GetNPCVisited(npcName); }
    inline static bool HasItemBeenUsed(String * itemName) { return ptr::HasItemBeenUsed(itemName); }
    inline static bool GetMentorLevelClear(int num) { return ptr::GetMentorLevelClear(num); }
    inline static bool CanDoDailyRun() { return ptr::CanDoDailyRun(); }
    inline static void SetHavePlayedHardcore(bool val) { ptr::SetHavePlayedHardcore(val); }
    inline static String * GetDiamondDealerItems() { return ptr::GetDiamondDealerItems(); }
    inline static void EraseDiamondDealerItems() { ptr::EraseDiamondDealerItems(); }
    inline static String * SoundtrackNameAttr(int charID) { return ptr::SoundtrackNameAttr(charID); }
    inline static int LookupSoundtrackId(String * name) { return ptr::LookupSoundtrackId(name); }
    inline static String * SoundtrackNumAttr(int charID) { return ptr::SoundtrackNumAttr(charID); }
    inline static int GetSoundtrackId(int i) { return ptr::GetSoundtrackId(i); }
    inline static String * GetSoundtrackSuffix(int charID) { return ptr::GetSoundtrackSuffix(charID); }
    inline static bool GetDoubleSpeed(int index) { return ptr::GetDoubleSpeed(index); }
    inline static bool GetHalfSpeed(int index) { return ptr::GetHalfSpeed(index); }
    inline static bool GetEnableBossIntros() { return ptr::GetEnableBossIntros(); }
    inline static bool GetScreenShake() { return ptr::GetScreenShake(); }
    inline static bool GetChangeLogShownForCurrentVersion() { return ptr::GetChangeLogShownForCurrentVersion(); }
    inline static void SetChangeLogShownForCurrentVersion() { ptr::SetChangeLogShownForCurrentVersion(); }
    inline static bool GetLatencyCalibrated() { return ptr::GetLatencyCalibrated(); }
    inline static bool GetPrebossAudio() { return ptr::GetPrebossAudio(); }
    inline static int GetKeyBinding(int player, int index) { return ptr::GetKeyBinding(player, index); }
    inline static bool GetIgnoreMultipress() { return ptr::GetIgnoreMultipress(); }
    inline static void SetShownSeizureWarning(bool b) { ptr::SetShownSeizureWarning(b); }
    inline static void SetShowHints(int h) { ptr::SetShowHints(h); }
    inline static int GetShowHints() { return ptr::GetShowHints(); }
    inline static bool GetHavePlayedHardcore() { return ptr::GetHavePlayedHardcore(); }
    inline static void SetTutorialComplete() { ptr::SetTutorialComplete(); }
    inline static void LoadReplayPlayerDataXML(String * data) { ptr::LoadReplayPlayerDataXML(data); }
    inline static void SetDebugLogging(bool m) { ptr::SetDebugLogging(m); }
    inline static bool HasAskedLobbyMove() { return ptr::HasAskedLobbyMove(); }
    inline static void SetAskedLobbyMove(bool a) { ptr::SetAskedLobbyMove(a); }
    inline static void SetAutocalibration(int val) { ptr::SetAutocalibration(val); }
    inline static void SetDefaultMod(String * m) { ptr::SetDefaultMod(m); }
    inline static bool GetZoneHoardCollected(int zone) { return ptr::GetZoneHoardCollected(zone); }
    inline static bool GetShowItemNames() { return ptr::GetShowItemNames(); }
    inline static bool GetDiscoFloor() { return ptr::GetDiscoFloor(); }
    inline static bool GetHUDHeart() { return ptr::GetHUDHeart(); }
    inline static bool GetHUDBeatBars() { return ptr::GetHUDBeatBars(); }
    inline static bool GetDefaultHUDKeys() { return ptr::GetDefaultHUDKeys(); }
    inline static bool GetSpeedrunTimer() { return ptr::GetSpeedrunTimer(); }
    inline static bool GetPostDeathReplay() { return ptr::GetPostDeathReplay(); }
    inline static bool GetPauseOnMinimize() { return ptr::GetPauseOnMinimize(); }
    inline static bool GetShowEnemyHearts() { return ptr::GetShowEnemyHearts(); }
    inline static void SetNPCVisited(String * npcName, bool visited) { ptr::SetNPCVisited(npcName, visited); }
    inline static void SetLatencyValues(int audioLatency, int videoLatency) { ptr::SetLatencyValues(audioLatency, videoLatency); }
    inline static String * GetMusicPath() { return ptr::GetMusicPath(); }
    inline static void SetMusicMode(int m) { ptr::SetMusicMode(m); }
    inline static int SetCustomMusic(int index, String * filename, bool addToPlaylist) { return ptr::SetCustomMusic(index, filename, addToPlaylist); }
    inline static void SetDoubleSpeed(int index, bool d) { ptr::SetDoubleSpeed(index, d); }
    inline static void SetHalfSpeed(int index, bool d) { ptr::SetHalfSpeed(index, d); }
    inline static void SetMusicPath(String * path) { ptr::SetMusicPath(path); }
    inline static void WipeProgress() { ptr::WipeProgress(); }
    inline static void SetUseChoral(bool b) { ptr::SetUseChoral(b); }
    inline static void SetDefaultCharacter(int c) { ptr::SetDefaultCharacter(c); }
    inline static void SetShowItemNames(bool b) { ptr::SetShowItemNames(b); }
    inline static void SetShowEnemyHearts(bool b) { ptr::SetShowEnemyHearts(b); }
    inline static void SetShowDiamondReminder(bool b) { ptr::SetShowDiamondReminder(b); }
    inline static void SetPauseOnMinimize(bool b) { ptr::SetPauseOnMinimize(b); }
    inline static void SetEnableCutscenes(bool e) { ptr::SetEnableCutscenes(e); }
    inline static void SetEnableBossIntros(bool e) { ptr::SetEnableBossIntros(e); }
    inline static void SetSoundVolume(float val) { ptr::SetSoundVolume(val); }
    inline static void SetMusicVolume(float val) { ptr::SetMusicVolume(val); }
    inline static void SetPreBossAudio(bool b) { ptr::SetPreBossAudio(b); }
    inline static void SetFullscreen(bool val) { ptr::SetFullscreen(val); }
    inline static void SetResolution(int w, int h) { ptr::SetResolution(w, h); }
    inline static void SetVSync(bool v) { ptr::SetVSync(v); }
    inline static void SetViewMultiplier(int mult) { ptr::SetViewMultiplier(mult); }
    inline static void SetHUDHeart(bool val) { ptr::SetHUDHeart(val); }
    inline static void SetHUDBeatBars(bool val) { ptr::SetHUDBeatBars(val); }
    inline static void SetScreenShake(bool val) { ptr::SetScreenShake(val); }
    inline static void SetSpeedrunTimer(bool val) { ptr::SetSpeedrunTimer(val); }
    inline static void SetDiscoFloor(bool val) { ptr::SetDiscoFloor(val); }
    inline static void SetPostDeathReplay(bool p) { ptr::SetPostDeathReplay(p); }
    inline static void SetKeyBinding(int player, int index, int key) { ptr::SetKeyBinding(player, index, key); }
    inline static void SetIgnoreMultipress(bool b) { ptr::SetIgnoreMultipress(b); }
    inline static void SetDefaultHUDKeys(bool b) { ptr::SetDefaultHUDKeys(b); }
    inline static String * LookupSoundtrackName(int id) { return ptr::LookupSoundtrackName(id); }
    inline static void SetSoundtrackId(int i, int id) { ptr::SetSoundtrackId(i, id); }
    inline static void _IncrementSoundtrack(int arg1) { ptr::_IncrementSoundtrack(arg1); }
    inline static void SetAlternateSkin(int charID, int skinNum) { ptr::SetAlternateSkin(charID, skinNum); }
    inline static void SetLanguage(String * l) { ptr::SetLanguage(l); }
    inline static void SetEnableSubtitles(bool e) { ptr::SetEnableSubtitles(e); }
    inline void _mark() { ptr::_mark(); }
    inline static bool GetShownNocturnaIntro() { return ptr::GetShownNocturnaIntro(); }
    inline static bool GetDLCPlayed() { return ptr::GetDLCPlayed(); }
    inline static void SetShownNocturnaIntro(bool b) { ptr::SetShownNocturnaIntro(b); }
    inline static bool GetParticles() { return ptr::GetParticles(); }
    inline static void SetDLCPlayed() { ptr::SetDLCPlayed(); }
    inline static bool GetDaoustVocals() { return ptr::GetDaoustVocals(); }
    inline static bool HasFoughtConductor() { return ptr::HasFoughtConductor(); }
    inline static void SetFoughtConductor() { ptr::SetFoughtConductor(); }
    inline static void SetZone5Visited() { ptr::SetZone5Visited(); }
    inline static bool HasFoughtFrankensteinway() { return ptr::HasFoughtFrankensteinway(); }
    inline static void SetFoughtFrankensteinway() { ptr::SetFoughtFrankensteinway(); }
    inline static bool GetZone5Visited() { return ptr::GetZone5Visited(); }
    inline static void SetHardModeComplete() { ptr::SetHardModeComplete(); }
    inline static bool GetStoryModeComplete() { return ptr::GetStoryModeComplete(); }
    inline static bool GetPhasingModeComplete() { return ptr::GetPhasingModeComplete(); }
    inline static bool GetMysteryModeComplete() { return ptr::GetMysteryModeComplete(); }
    inline static bool GetRandomizerModeComplete() { return ptr::GetRandomizerModeComplete(); }
    inline static bool GetHardModeComplete() { return ptr::GetHardModeComplete(); }
    inline static bool GetNoReturnModeComplete() { return ptr::GetNoReturnModeComplete(); }
    inline static void SetNoReturnModeComplete() { ptr::SetNoReturnModeComplete(); }
    inline static void SetPhasingModeComplete() { ptr::SetPhasingModeComplete(); }
    inline static void SetRandomizerModeComplete() { ptr::SetRandomizerModeComplete(); }
    inline static void SetMysteryModeComplete() { ptr::SetMysteryModeComplete(); }
    inline static void SetStoryModeComplete() { ptr::SetStoryModeComplete(); }
    inline static void SetDaoustVocals(bool b) { ptr::SetDaoustVocals(b); }
    inline static void SetParticles(bool p) { ptr::SetParticles(p); }

    class ptr {
    public:
        static bool (*GetDebugLogging)();
        static int (*GetViewMultiplier)();
        static void (*Save)();
        static void (*LoadGameDataXML)(bool bypassChecksum);
        static String * (*GetFreshString)();
        static bool (*LoadPlayerDataXML)(bool forceCloud);
        static String * (*GetDefaultMod)();
        static bool (*GetVSync)();
        static bool (*GetFullscreen)();
        static int (*GetResolutionW)();
        static int (*GetResolutionH)();
        static String * (*GetLanguage)();
        static bool (*GetShownSeizureWarning)();
        static bool (*GetEnableSubtitles)();
        static void (*SetLobbyMove)(bool m);
        static void (*SetMentorLevelClear)(int num);
        static bool (*GetEnableCutscenes)();
        static int (*GetAlternateSkin)(int charID);
        static bool (*GetUseChoral)();
        static int (*GetAudioLatency)();
        static int (*GetAutocalibration)();
        static int (*GetVideoLatency)();
        static float (*GetMusicVolume)();
        static float (*GetSoundVolume)();
        static bool (*GetItemUnlocked)(String * itemName, bool includeClean);
        static int (*GetNumPendingSpawnItems)();
        static String * (*GetPendingSpawnItem)(int num);
        static void (*SetPendingSpawnItem)(int num, String * i);
        static void (*SetNumPendingSpawnItems)(int num);
        static void (*RemovePendingSpawnItem)(String * item);
        static String * (*GetCustomMusic)(int index, int num, bool fromList);
        static int (*GetMusicMode)();
        static void (*SetKilledEnemy)(String * enemyName, int type, bool val);
        static void (*SetNPCUnlock)(String * npcName, bool unlock);
        static int (*GetPlayerHealthMax)();
        static bool (*GetNPCUnlock)(String * npcName);
        static String * (*GetDiamondDealerSoldItem)(int num);
        static bool (*_GetItemCleaned)(String * arg1);
        static void (*SetDiamondDealerSoldItem)(int num, String * itemName);
        static void (*SetPlayerCoins)(int val);
        static void (*SetPlayerDiamonds)(int val);
        static void (*SetItemCleaned)(String * itemName, bool clean);
        static void (*AddDiamondDealerItem)(String * itemName);
        static void (*SetItemUnlocked)(String * itemName);
        static void (*AddPendingSpawnItem)(String * i);
        static void (*SetZoneHoardCollected)(int zone);
        static void (*SetItemUsed)(String * itemName);
        static void (*SetPlayerHealthMax)(int val);
        static bool (*GetTutorialComplete)();
        static int (*GetDefaultCharacter)();
        static int (*GetPlayerDiamonds)();
        static void (*SetLastDailyRunNum)(int val);
        static bool (*GetLobbyMove)();
        static bool (*HasFoughtNecrodancer2)();
        static void (*SetFoughtNecrodancer2)();
        static bool (*IsCharUnlocked)(int charNum);
        static void (*SetCharUnlocked)(int charNum, bool val);
        static bool (*HasFoughtNecrodancer)();
        static void (*SetFoughtNecrodancer)();
        static bool (*HasFoughtLuteDragon)();
        static void (*SetFoughtLuteDragon)();
        static bool (*GetZone3Unlocked)(int characterID);
        static bool (*GetZone2Unlocked)(int characterID);
        static bool (*GetZone2UnlockedCurrentCharacters)();
        static void (*SetZone3Unlocked)(int characterID);
        static void (*SetZone2Unlocked)(int characterID);
        static void (*SetZone2UnlockedCurrentCharacters)();
        static bool (*GetZone4Unlocked)(int characterID);
        static bool (*GetZone1UnlockedCurrentCharacters)();
        static void (*_SetZone4Unlocked)(int arg1);
        static void (*SetZone1UnlockedCurrentCharacters)();
        static bool (*GetZone3UnlockedCurrentCharacters)();
        static void (*SetZone3UnlockedCurrentCharacters)();
        static bool (*GetZone4UnlockedCurrentCharacters)();
        static void (*SetZone4UnlockedCurrentCharacters)();
        static bool (*GetShowDiamondReminder)();
        static bool (*HasKilledEnemy)(String * enemyName, int type);
        static bool (*GetBossTraining)(String * bossName);
        static bool (*_GetZone2UnlockedAnyCharacter)();
        static bool (*_GetZone3UnlockedAnyCharacter)();
        static bool (*_GetZone4UnlockedAnyCharacter)();
        static bool (*HasFoughtDeadRinger)();
        static void (*SetBossTraining)(String * bossName, bool val);
        static void (*SetFoughtDeadRinger)();
        static bool (*GetNPCVisited)(String * npcName);
        static bool (*HasItemBeenUsed)(String * itemName);
        static bool (*GetMentorLevelClear)(int num);
        static bool (*CanDoDailyRun)();
        static void (*SetHavePlayedHardcore)(bool val);
        static String * (*GetDiamondDealerItems)();
        static void (*EraseDiamondDealerItems)();
        static String * (*SoundtrackNameAttr)(int charID);
        static int (*LookupSoundtrackId)(String * name);
        static String * (*SoundtrackNumAttr)(int charID);
        static int (*GetSoundtrackId)(int i);
        static String * (*GetSoundtrackSuffix)(int charID);
        static bool (*GetDoubleSpeed)(int index);
        static bool (*GetHalfSpeed)(int index);
        static bool (*GetEnableBossIntros)();
        static bool (*GetScreenShake)();
        static bool (*GetChangeLogShownForCurrentVersion)();
        static void (*SetChangeLogShownForCurrentVersion)();
        static bool (*GetLatencyCalibrated)();
        static bool (*GetPrebossAudio)();
        static int (*GetKeyBinding)(int player, int index);
        static bool (*GetIgnoreMultipress)();
        static void (*SetShownSeizureWarning)(bool b);
        static void (*SetShowHints)(int h);
        static int (*GetShowHints)();
        static bool (*GetHavePlayedHardcore)();
        static void (*SetTutorialComplete)();
        static void (*LoadReplayPlayerDataXML)(String * data);
        static void (*SetDebugLogging)(bool m);
        static bool (*HasAskedLobbyMove)();
        static void (*SetAskedLobbyMove)(bool a);
        static void (*SetAutocalibration)(int val);
        static void (*SetDefaultMod)(String * m);
        static bool (*GetZoneHoardCollected)(int zone);
        static bool (*GetShowItemNames)();
        static bool (*GetDiscoFloor)();
        static bool (*GetHUDHeart)();
        static bool (*GetHUDBeatBars)();
        static bool (*GetDefaultHUDKeys)();
        static bool (*GetSpeedrunTimer)();
        static bool (*GetPostDeathReplay)();
        static bool (*GetPauseOnMinimize)();
        static bool (*GetShowEnemyHearts)();
        static void (*SetNPCVisited)(String * npcName, bool visited);
        static void (*SetLatencyValues)(int audioLatency, int videoLatency);
        static String * (*GetMusicPath)();
        static void (*SetMusicMode)(int m);
        static int (*SetCustomMusic)(int index, String * filename, bool addToPlaylist);
        static void (*SetDoubleSpeed)(int index, bool d);
        static void (*SetHalfSpeed)(int index, bool d);
        static void (*SetMusicPath)(String * path);
        static void (*WipeProgress)();
        static void (*SetUseChoral)(bool b);
        static void (*SetDefaultCharacter)(int c);
        static void (*SetShowItemNames)(bool b);
        static void (*SetShowEnemyHearts)(bool b);
        static void (*SetShowDiamondReminder)(bool b);
        static void (*SetPauseOnMinimize)(bool b);
        static void (*SetEnableCutscenes)(bool e);
        static void (*SetEnableBossIntros)(bool e);
        static void (*SetSoundVolume)(float val);
        static void (*SetMusicVolume)(float val);
        static void (*SetPreBossAudio)(bool b);
        static void (*SetFullscreen)(bool val);
        static void (*SetResolution)(int w, int h);
        static void (*SetVSync)(bool v);
        static void (*SetViewMultiplier)(int mult);
        static void (*SetHUDHeart)(bool val);
        static void (*SetHUDBeatBars)(bool val);
        static void (*SetScreenShake)(bool val);
        static void (*SetSpeedrunTimer)(bool val);
        static void (*SetDiscoFloor)(bool val);
        static void (*SetPostDeathReplay)(bool p);
        static void (*SetKeyBinding)(int player, int index, int key);
        static void (*SetIgnoreMultipress)(bool b);
        static void (*SetDefaultHUDKeys)(bool b);
        static String * (*LookupSoundtrackName)(int id);
        static void (*SetSoundtrackId)(int i, int id);
        static void (*_IncrementSoundtrack)(int arg1);
        static void (*SetAlternateSkin)(int charID, int skinNum);
        static void (*SetLanguage)(String * l);
        static void (*SetEnableSubtitles)(bool e);
        static void (*_mark)();
        static bool (*GetShownNocturnaIntro)();
        static bool (*GetDLCPlayed)();
        static void (*SetShownNocturnaIntro)(bool b);
        static bool (*GetParticles)();
        static void (*SetDLCPlayed)();
        static bool (*GetDaoustVocals)();
        static bool (*HasFoughtConductor)();
        static void (*SetFoughtConductor)();
        static void (*SetZone5Visited)();
        static bool (*HasFoughtFrankensteinway)();
        static void (*SetFoughtFrankensteinway)();
        static bool (*GetZone5Visited)();
        static void (*SetHardModeComplete)();
        static bool (*GetStoryModeComplete)();
        static bool (*GetPhasingModeComplete)();
        static bool (*GetMysteryModeComplete)();
        static bool (*GetRandomizerModeComplete)();
        static bool (*GetHardModeComplete)();
        static bool (*GetNoReturnModeComplete)();
        static void (*SetNoReturnModeComplete)();
        static void (*SetPhasingModeComplete)();
        static void (*SetRandomizerModeComplete)();
        static void (*SetMysteryModeComplete)();
        static void (*SetStoryModeComplete)();
        static void (*SetDaoustVocals)(bool b);
        static void (*SetParticles)(bool p);
    };
};

#ifdef _WIN32
XMLDoc * * GameData::xmlSaveData = (XMLDoc* *) 0x835bac;
bool * GameData::playerDataLoaded = (bool*) 0x835c74;
bool * GameData::modGamedataChanges = (bool*) 0x835c04;
String * * GameData::activeMod = (String* *) 0x833eb8;
bool * GameData::playerDataLoadPending = (bool*) 0x835baa;
bool * GameData::gameDataLoaded = (bool*) 0x835ba8;
bool * GameData::cachedAudioLatency = (bool*) 0x835b8b;
int * GameData::cachedAudioLatencyVal = (int*) 0x835ba0;
bool * GameData::cachedAutocalibration = (bool*) 0x835b8a;
int * GameData::cachedAutocalibrationVal = (int*) 0x835b9c;
bool * GameData::cachedVideoLatency = (bool*) 0x835b89;
int * GameData::cachedVideoLatencyVal = (int*) 0x835b98;
XMLDoc * * GameData::replaySaveData = (XMLDoc* *) 0x835b94;
int * GameData::lastNumCoins = (int*) 0x835b90;
int * GameData::lastNumDiamonds = (int*) 0x835b8c;
int * GameData::lastDailyWithScore = (int*) 0x835bc4;

bool (*GameData::ptr::GetDebugLogging)() = (bool (*)()) 0x42ea40;
int (*GameData::ptr::GetViewMultiplier)() = (int (*)()) 0x42eb80;
void (*GameData::ptr::Save)() = (void (*)()) 0x42eca0;
void (*GameData::ptr::LoadGameDataXML)(bool bypassChecksum) = (void (*)(bool bypassChecksum)) 0x42f670;
String * (*GameData::ptr::GetFreshString)() = (String * (*)()) 0x42fd40;
bool (*GameData::ptr::LoadPlayerDataXML)(bool forceCloud) = (bool (*)(bool forceCloud)) 0x4305c0;
String * (*GameData::ptr::GetDefaultMod)() = (String * (*)()) 0x431b20;
bool (*GameData::ptr::GetVSync)() = (bool (*)()) 0x4323a0;
bool (*GameData::ptr::GetFullscreen)() = (bool (*)()) 0x4324c0;
int (*GameData::ptr::GetResolutionW)() = (int (*)()) 0x4325e0;
int (*GameData::ptr::GetResolutionH)() = (int (*)()) 0x432700;
String * (*GameData::ptr::GetLanguage)() = (String * (*)()) 0x432820;
bool (*GameData::ptr::GetShownSeizureWarning)() = (bool (*)()) 0x432960;
bool (*GameData::ptr::GetEnableSubtitles)() = (bool (*)()) 0x432a80;
void (*GameData::ptr::SetLobbyMove)(bool m) = (void (*)(bool m)) 0x432ba0;
void (*GameData::ptr::SetMentorLevelClear)(int num) = (void (*)(int num)) 0x432cc0;
bool (*GameData::ptr::GetEnableCutscenes)() = (bool (*)()) 0x432e30;
int (*GameData::ptr::GetAlternateSkin)(int charID) = (int (*)(int charID)) 0x432f50;
bool (*GameData::ptr::GetUseChoral)() = (bool (*)()) 0x4330c0;
int (*GameData::ptr::GetAudioLatency)() = (int (*)()) 0x4331e0;
int (*GameData::ptr::GetAutocalibration)() = (int (*)()) 0x4332d0;
int (*GameData::ptr::GetVideoLatency)() = (int (*)()) 0x4333c0;
float (*GameData::ptr::GetMusicVolume)() = (float (*)()) 0x4334b0;
float (*GameData::ptr::GetSoundVolume)() = (float (*)()) 0x4335e0;
bool (*GameData::ptr::GetItemUnlocked)(String * itemName, bool includeClean) = (bool (*)(String * itemName, bool includeClean)) 0x434a20;
int (*GameData::ptr::GetNumPendingSpawnItems)() = (int (*)()) 0x433830;
String * (*GameData::ptr::GetPendingSpawnItem)(int num) = (String * (*)(int num)) 0x433a40;
void (*GameData::ptr::SetPendingSpawnItem)(int num, String * i) = (void (*)(int num, String * i)) 0x433d10;
void (*GameData::ptr::SetNumPendingSpawnItems)(int num) = (void (*)(int num)) 0x433fd0;
void (*GameData::ptr::RemovePendingSpawnItem)(String * item) = (void (*)(String * item)) 0x4341e0;
String * (*GameData::ptr::GetCustomMusic)(int index, int num, bool fromList) = (String * (*)(int index, int num, bool fromList)) 0x434330;
int (*GameData::ptr::GetMusicMode)() = (int (*)()) 0x434900;
void (*GameData::ptr::SetKilledEnemy)(String * enemyName, int type, bool val) = (void (*)(String * enemyName, int type, bool val)) 0x434eb0;
void (*GameData::ptr::SetNPCUnlock)(String * npcName, bool unlock) = (void (*)(String * npcName, bool unlock)) 0x435730;
int (*GameData::ptr::GetPlayerHealthMax)() = (int (*)()) 0x435070;
bool (*GameData::ptr::GetNPCUnlock)(String * npcName) = (bool (*)(String * npcName)) 0x435280;
String * (*GameData::ptr::GetDiamondDealerSoldItem)(int num) = (String * (*)(int num)) 0x435410;
bool (*GameData::ptr::_GetItemCleaned)(String * arg1) = (bool (*)(String * arg1)) 0x0;
void (*GameData::ptr::SetDiamondDealerSoldItem)(int num, String * itemName) = (void (*)(int num, String * itemName)) 0x4355a0;
void (*GameData::ptr::SetPlayerCoins)(int val) = (void (*)(int val)) 0x435ad0;
void (*GameData::ptr::SetPlayerDiamonds)(int val) = (void (*)(int val)) 0x435c00;
void (*GameData::ptr::SetItemCleaned)(String * itemName, bool clean) = (void (*)(String * itemName, bool clean)) 0x435d30;
void (*GameData::ptr::AddDiamondDealerItem)(String * itemName) = (void (*)(String * itemName)) 0x435f80;
void (*GameData::ptr::SetItemUnlocked)(String * itemName) = (void (*)(String * itemName)) 0x436300;
void (*GameData::ptr::AddPendingSpawnItem)(String * i) = (void (*)(String * i)) 0x4364b0;
void (*GameData::ptr::SetZoneHoardCollected)(int zone) = (void (*)(int zone)) 0x436710;
void (*GameData::ptr::SetItemUsed)(String * itemName) = (void (*)(String * itemName)) 0x435920;
void (*GameData::ptr::SetPlayerHealthMax)(int val) = (void (*)(int val)) 0x4368e0;
bool (*GameData::ptr::GetTutorialComplete)() = (bool (*)()) 0x436a10;
int (*GameData::ptr::GetDefaultCharacter)() = (int (*)()) 0x436b30;
int (*GameData::ptr::GetPlayerDiamonds)() = (int (*)()) 0x436dd0;
void (*GameData::ptr::SetLastDailyRunNum)(int val) = (void (*)(int val)) 0x436ef0;
bool (*GameData::ptr::GetLobbyMove)() = (bool (*)()) 0x437020;
bool (*GameData::ptr::HasFoughtNecrodancer2)() = (bool (*)()) 0x437700;
void (*GameData::ptr::SetFoughtNecrodancer2)() = (void (*)()) 0x437820;
bool (*GameData::ptr::IsCharUnlocked)(int charNum) = (bool (*)(int charNum)) 0x432110;
void (*GameData::ptr::SetCharUnlocked)(int charNum, bool val) = (void (*)(int charNum, bool val)) 0x437950;
bool (*GameData::ptr::HasFoughtNecrodancer)() = (bool (*)()) 0x437ac0;
void (*GameData::ptr::SetFoughtNecrodancer)() = (void (*)()) 0x437be0;
bool (*GameData::ptr::HasFoughtLuteDragon)() = (bool (*)()) 0x4374b0;
void (*GameData::ptr::SetFoughtLuteDragon)() = (void (*)()) 0x4375d0;
bool (*GameData::ptr::GetZone3Unlocked)(int characterID) = (bool (*)(int characterID)) 0x437d10;
bool (*GameData::ptr::GetZone2Unlocked)(int characterID) = (bool (*)(int characterID)) 0x431ea0;
bool (*GameData::ptr::GetZone2UnlockedCurrentCharacters)() = (bool (*)()) 0x437f80;
void (*GameData::ptr::SetZone3Unlocked)(int characterID) = (void (*)(int characterID)) 0x437ff0;
void (*GameData::ptr::SetZone2Unlocked)(int characterID) = (void (*)(int characterID)) 0x438300;
void (*GameData::ptr::SetZone2UnlockedCurrentCharacters)() = (void (*)()) 0x438610;
bool (*GameData::ptr::GetZone4Unlocked)(int characterID) = (bool (*)(int characterID)) 0x438720;
bool (*GameData::ptr::GetZone1UnlockedCurrentCharacters)() = (bool (*)()) 0x439140;
void (*GameData::ptr::_SetZone4Unlocked)(int arg1) = (void (*)(int arg1)) 0x0;
void (*GameData::ptr::SetZone1UnlockedCurrentCharacters)() = (void (*)()) 0x439310;
bool (*GameData::ptr::GetZone3UnlockedCurrentCharacters)() = (bool (*)()) 0x438660;
void (*GameData::ptr::SetZone3UnlockedCurrentCharacters)() = (void (*)()) 0x4386d0;
bool (*GameData::ptr::GetZone4UnlockedCurrentCharacters)() = (bool (*)()) 0x438990;
void (*GameData::ptr::SetZone4UnlockedCurrentCharacters)() = (void (*)()) 0x438c60;
bool (*GameData::ptr::GetShowDiamondReminder)() = (bool (*)()) 0x439520;
bool (*GameData::ptr::HasKilledEnemy)(String * enemyName, int type) = (bool (*)(String * enemyName, int type)) 0x439640;
bool (*GameData::ptr::GetBossTraining)(String * bossName) = (bool (*)(String * bossName)) 0x4397f0;
bool (*GameData::ptr::_GetZone2UnlockedAnyCharacter)() = (bool (*)()) 0x0;
bool (*GameData::ptr::_GetZone3UnlockedAnyCharacter)() = (bool (*)()) 0x0;
bool (*GameData::ptr::_GetZone4UnlockedAnyCharacter)() = (bool (*)()) 0x0;
bool (*GameData::ptr::HasFoughtDeadRinger)() = (bool (*)()) 0x439950;
void (*GameData::ptr::SetBossTraining)(String * bossName, bool val) = (void (*)(String * bossName, bool val)) 0x439b90;
void (*GameData::ptr::SetFoughtDeadRinger)() = (void (*)()) 0x439ce0;
bool (*GameData::ptr::GetNPCVisited)(String * npcName) = (bool (*)(String * npcName)) 0x439f40;
bool (*GameData::ptr::HasItemBeenUsed)(String * itemName) = (bool (*)(String * itemName)) 0x43a190;
bool (*GameData::ptr::GetMentorLevelClear)(int num) = (bool (*)(int num)) 0x43a2f0;
bool (*GameData::ptr::CanDoDailyRun)() = (bool (*)()) 0x43a580;
void (*GameData::ptr::SetHavePlayedHardcore)(bool val) = (void (*)(bool val)) 0x43a700;
String * (*GameData::ptr::GetDiamondDealerItems)() = (String * (*)()) 0x43a820;
void (*GameData::ptr::EraseDiamondDealerItems)() = (void (*)()) 0x43aa50;
String * (*GameData::ptr::SoundtrackNameAttr)(int charID) = (String * (*)(int charID)) 0x43ab80;
int (*GameData::ptr::LookupSoundtrackId)(String * name) = (int (*)(String * name)) 0x43ac70;
String * (*GameData::ptr::SoundtrackNumAttr)(int charID) = (String * (*)(int charID)) 0x43b0d0;
int (*GameData::ptr::GetSoundtrackId)(int i) = (int (*)(int i)) 0x43b1c0;
String * (*GameData::ptr::GetSoundtrackSuffix)(int charID) = (String * (*)(int charID)) 0x43b410;
bool (*GameData::ptr::GetDoubleSpeed)(int index) = (bool (*)(int index)) 0x43b610;
bool (*GameData::ptr::GetHalfSpeed)(int index) = (bool (*)(int index)) 0x43b780;
bool (*GameData::ptr::GetEnableBossIntros)() = (bool (*)()) 0x43b8f0;
bool (*GameData::ptr::GetScreenShake)() = (bool (*)()) 0x43ba10;
bool (*GameData::ptr::GetChangeLogShownForCurrentVersion)() = (bool (*)()) 0x43bb30;
void (*GameData::ptr::SetChangeLogShownForCurrentVersion)() = (void (*)()) 0x43bca0;
bool (*GameData::ptr::GetLatencyCalibrated)() = (bool (*)()) 0x43be10;
bool (*GameData::ptr::GetPrebossAudio)() = (bool (*)()) 0x43bf30;
int (*GameData::ptr::GetKeyBinding)(int player, int index) = (int (*)(int player, int index)) 0x43c050;
bool (*GameData::ptr::GetIgnoreMultipress)() = (bool (*)()) 0x43c2b0;
void (*GameData::ptr::SetShownSeizureWarning)(bool b) = (void (*)(bool b)) 0x43c3d0;
void (*GameData::ptr::SetShowHints)(int h) = (void (*)(int h)) 0x43c4f0;
int (*GameData::ptr::GetShowHints)() = (int (*)()) 0x43c610;
bool (*GameData::ptr::GetHavePlayedHardcore)() = (bool (*)()) 0x43c730;
void (*GameData::ptr::SetTutorialComplete)() = (void (*)()) 0x43d5d0;
void (*GameData::ptr::LoadReplayPlayerDataXML)(String * data) = (void (*)(String * data)) 0x43d750;
void (*GameData::ptr::SetDebugLogging)(bool m) = (void (*)(bool m)) 0x43d910;
bool (*GameData::ptr::HasAskedLobbyMove)() = (bool (*)()) 0x43da30;
void (*GameData::ptr::SetAskedLobbyMove)(bool a) = (void (*)(bool a)) 0x43db50;
void (*GameData::ptr::SetAutocalibration)(int val) = (void (*)(int val)) 0x43dc70;
void (*GameData::ptr::SetDefaultMod)(String * m) = (void (*)(String * m)) 0x43ddb0;
bool (*GameData::ptr::GetZoneHoardCollected)(int zone) = (bool (*)(int zone)) 0x43def0;
bool (*GameData::ptr::GetShowItemNames)() = (bool (*)()) 0x43e1a0;
bool (*GameData::ptr::GetDiscoFloor)() = (bool (*)()) 0x43e2c0;
bool (*GameData::ptr::GetHUDHeart)() = (bool (*)()) 0x43e3e0;
bool (*GameData::ptr::GetHUDBeatBars)() = (bool (*)()) 0x43e500;
bool (*GameData::ptr::GetDefaultHUDKeys)() = (bool (*)()) 0x43e620;
bool (*GameData::ptr::GetSpeedrunTimer)() = (bool (*)()) 0x43e740;
bool (*GameData::ptr::GetPostDeathReplay)() = (bool (*)()) 0x43e860;
bool (*GameData::ptr::GetPauseOnMinimize)() = (bool (*)()) 0x43e980;
bool (*GameData::ptr::GetShowEnemyHearts)() = (bool (*)()) 0x43eaa0;
void (*GameData::ptr::SetNPCVisited)(String * npcName, bool visited) = (void (*)(String * npcName, bool visited)) 0x43ebc0;
void (*GameData::ptr::SetLatencyValues)(int audioLatency, int videoLatency) = (void (*)(int audioLatency, int videoLatency)) 0x43ee10;
String * (*GameData::ptr::GetMusicPath)() = (String * (*)()) 0x43f160;
void (*GameData::ptr::SetMusicMode)(int m) = (void (*)(int m)) 0x43f2f0;
int (*GameData::ptr::SetCustomMusic)(int index, String * filename, bool addToPlaylist) = (int (*)(int index, String * filename, bool addToPlaylist)) 0x43f410;
void (*GameData::ptr::SetDoubleSpeed)(int index, bool d) = (void (*)(int index, bool d)) 0x43fd40;
void (*GameData::ptr::SetHalfSpeed)(int index, bool d) = (void (*)(int index, bool d)) 0x43feb0;
void (*GameData::ptr::SetMusicPath)(String * path) = (void (*)(String * path)) 0x440020;
void (*GameData::ptr::WipeProgress)() = (void (*)()) 0x440160;
void (*GameData::ptr::SetUseChoral)(bool b) = (void (*)(bool b)) 0x440210;
void (*GameData::ptr::SetDefaultCharacter)(int c) = (void (*)(int c)) 0x4304a0;
void (*GameData::ptr::SetShowItemNames)(bool b) = (void (*)(bool b)) 0x440330;
void (*GameData::ptr::SetShowEnemyHearts)(bool b) = (void (*)(bool b)) 0x440450;
void (*GameData::ptr::SetShowDiamondReminder)(bool b) = (void (*)(bool b)) 0x440570;
void (*GameData::ptr::SetPauseOnMinimize)(bool b) = (void (*)(bool b)) 0x440690;
void (*GameData::ptr::SetEnableCutscenes)(bool e) = (void (*)(bool e)) 0x4407b0;
void (*GameData::ptr::SetEnableBossIntros)(bool e) = (void (*)(bool e)) 0x4408d0;
void (*GameData::ptr::SetSoundVolume)(float val) = (void (*)(float val)) 0x4409f0;
void (*GameData::ptr::SetMusicVolume)(float val) = (void (*)(float val)) 0x440b20;
void (*GameData::ptr::SetPreBossAudio)(bool b) = (void (*)(bool b)) 0x440c50;
void (*GameData::ptr::SetFullscreen)(bool val) = (void (*)(bool val)) 0x440e90;
void (*GameData::ptr::SetResolution)(int w, int h) = (void (*)(int w, int h)) 0x440fb0;
void (*GameData::ptr::SetVSync)(bool v) = (void (*)(bool v)) 0x4411b0;
void (*GameData::ptr::SetViewMultiplier)(int mult) = (void (*)(int mult)) 0x4412d0;
void (*GameData::ptr::SetHUDHeart)(bool val) = (void (*)(bool val)) 0x4413f0;
void (*GameData::ptr::SetHUDBeatBars)(bool val) = (void (*)(bool val)) 0x441510;
void (*GameData::ptr::SetScreenShake)(bool val) = (void (*)(bool val)) 0x441630;
void (*GameData::ptr::SetSpeedrunTimer)(bool val) = (void (*)(bool val)) 0x441750;
void (*GameData::ptr::SetDiscoFloor)(bool val) = (void (*)(bool val)) 0x441870;
void (*GameData::ptr::SetPostDeathReplay)(bool p) = (void (*)(bool p)) 0x441990;
void (*GameData::ptr::SetKeyBinding)(int player, int index, int key) = (void (*)(int player, int index, int key)) 0x441bd0;
void (*GameData::ptr::SetIgnoreMultipress)(bool b) = (void (*)(bool b)) 0x441e20;
void (*GameData::ptr::SetDefaultHUDKeys)(bool b) = (void (*)(bool b)) 0x441f40;
String * (*GameData::ptr::LookupSoundtrackName)(int id) = (String * (*)(int id)) 0x442060;
void (*GameData::ptr::SetSoundtrackId)(int i, int id) = (void (*)(int i, int id)) 0x442260;
void (*GameData::ptr::_IncrementSoundtrack)(int arg1) = (void (*)(int arg1)) 0x0;
void (*GameData::ptr::SetAlternateSkin)(int charID, int skinNum) = (void (*)(int charID, int skinNum)) 0x4423e0;
void (*GameData::ptr::SetLanguage)(String * l) = (void (*)(String * l)) 0x442550;
void (*GameData::ptr::SetEnableSubtitles)(bool e) = (void (*)(bool e)) 0x442690;
void (*GameData::ptr::_mark)() = (void (*)()) 0x0;
bool (*GameData::ptr::GetShownNocturnaIntro)() = (bool (*)()) 0x431c60;
bool (*GameData::ptr::GetDLCPlayed)() = (bool (*)()) 0x431d80;
void (*GameData::ptr::SetShownNocturnaIntro)(bool b) = (void (*)(bool b)) 0x432280;
bool (*GameData::ptr::GetParticles)() = (bool (*)()) 0x433710;
void (*GameData::ptr::SetDLCPlayed)() = (void (*)()) 0x436c60;
bool (*GameData::ptr::GetDaoustVocals)() = (bool (*)()) 0x437140;
bool (*GameData::ptr::HasFoughtConductor)() = (bool (*)()) 0x437260;
void (*GameData::ptr::SetFoughtConductor)() = (void (*)()) 0x437380;
void (*GameData::ptr::SetZone5Visited)() = (void (*)()) 0x438fc0;
bool (*GameData::ptr::HasFoughtFrankensteinway)() = (bool (*)()) 0x439a70;
void (*GameData::ptr::SetFoughtFrankensteinway)() = (void (*)()) 0x439e10;
bool (*GameData::ptr::GetZone5Visited)() = (bool (*)()) 0x43a460;
void (*GameData::ptr::SetHardModeComplete)() = (void (*)()) 0x43c850;
bool (*GameData::ptr::GetStoryModeComplete)() = (bool (*)()) 0x43c970;
bool (*GameData::ptr::GetPhasingModeComplete)() = (bool (*)()) 0x43ca90;
bool (*GameData::ptr::GetMysteryModeComplete)() = (bool (*)()) 0x43cbb0;
bool (*GameData::ptr::GetRandomizerModeComplete)() = (bool (*)()) 0x43ccd0;
bool (*GameData::ptr::GetHardModeComplete)() = (bool (*)()) 0x43cdf0;
bool (*GameData::ptr::GetNoReturnModeComplete)() = (bool (*)()) 0x43cf10;
void (*GameData::ptr::SetNoReturnModeComplete)() = (void (*)()) 0x43d030;
void (*GameData::ptr::SetPhasingModeComplete)() = (void (*)()) 0x43d150;
void (*GameData::ptr::SetRandomizerModeComplete)() = (void (*)()) 0x43d270;
void (*GameData::ptr::SetMysteryModeComplete)() = (void (*)()) 0x43d390;
void (*GameData::ptr::SetStoryModeComplete)() = (void (*)()) 0x43d4b0;
void (*GameData::ptr::SetDaoustVocals)(bool b) = (void (*)(bool b)) 0x440d70;
void (*GameData::ptr::SetParticles)(bool p) = (void (*)(bool p)) 0x441ab0;
#endif

#ifdef __linux__
XMLDoc * * GameData::xmlSaveData = (XMLDoc* *) 0x856ab64;
bool * GameData::playerDataLoaded = (bool*) 0x856ab61;
bool * GameData::modGamedataChanges = (bool*) 0x856ab60;
String * * GameData::activeMod = (String* *) 0x856ab5c;
bool * GameData::playerDataLoadPending = (bool*) 0x856ab5a;
bool * GameData::gameDataLoaded = (bool*) 0x856ab59;
bool * GameData::cachedAudioLatency = (bool*) 0x856ab58;
int * GameData::cachedAudioLatencyVal = (int*) 0x856ab54;
bool * GameData::cachedAutocalibration = (bool*) 0x856ab50;
int * GameData::cachedAutocalibrationVal = (int*) 0x856ab4c;
bool * GameData::cachedVideoLatency = (bool*) 0x856ab48;
int * GameData::cachedVideoLatencyVal = (int*) 0x856ab44;
XMLDoc * * GameData::replaySaveData = (XMLDoc* *) 0x856ab40;
int * GameData::lastNumCoins = (int*) 0x856ab3c;
int * GameData::lastNumDiamonds = (int*) 0x856ab38;
int * GameData::lastDailyWithScore = (int*) 0x856ab34;

bool (*GameData::ptr::GetDebugLogging)() = (bool (*)()) 0x8106d60;
int (*GameData::ptr::GetViewMultiplier)() = (int (*)()) 0x8106e40;
void (*GameData::ptr::Save)() = (void (*)()) 0x82d9ae0;
void (*GameData::ptr::LoadGameDataXML)(bool bypassChecksum) = (void (*)(bool bypassChecksum)) 0x83db170;
String * (*GameData::ptr::GetFreshString)() = (String * (*)()) 0x81070c0;
bool (*GameData::ptr::LoadPlayerDataXML)(bool forceCloud) = (bool (*)(bool forceCloud)) 0x8376880;
String * (*GameData::ptr::GetDefaultMod)() = (String * (*)()) 0x8107570;
bool (*GameData::ptr::GetVSync)() = (bool (*)()) 0x8108040;
bool (*GameData::ptr::GetFullscreen)() = (bool (*)()) 0x8108110;
int (*GameData::ptr::GetResolutionW)() = (int (*)()) 0x81081e0;
int (*GameData::ptr::GetResolutionH)() = (int (*)()) 0x81082b0;
String * (*GameData::ptr::GetLanguage)() = (String * (*)()) 0x8108380;
bool (*GameData::ptr::GetShownSeizureWarning)() = (bool (*)()) 0x8108690;
bool (*GameData::ptr::GetEnableSubtitles)() = (bool (*)()) 0x8108760;
void (*GameData::ptr::SetLobbyMove)(bool m) = (void (*)(bool m)) 0x8108830;
void (*GameData::ptr::SetMentorLevelClear)(int num) = (void (*)(int num)) 0x8108910;
bool (*GameData::ptr::GetEnableCutscenes)() = (bool (*)()) 0x8108a40;
int (*GameData::ptr::GetAlternateSkin)(int charID) = (int (*)(int charID)) 0x8108b10;
bool (*GameData::ptr::GetUseChoral)() = (bool (*)()) 0x8109140;
int (*GameData::ptr::GetAudioLatency)() = (int (*)()) 0x8109210;
int (*GameData::ptr::GetAutocalibration)() = (int (*)()) 0x8109320;
int (*GameData::ptr::GetVideoLatency)() = (int (*)()) 0x8109430;
float (*GameData::ptr::GetMusicVolume)() = (float (*)()) 0x8109540;
float (*GameData::ptr::GetSoundVolume)() = (float (*)()) 0x8109610;
bool (*GameData::ptr::GetItemUnlocked)(String * itemName, bool includeClean) = (bool (*)(String * itemName, bool includeClean)) 0x810b9c0;
int (*GameData::ptr::GetNumPendingSpawnItems)() = (int (*)()) 0x81098b0;
String * (*GameData::ptr::GetPendingSpawnItem)(int num) = (String * (*)(int num)) 0x8109a40;
void (*GameData::ptr::SetPendingSpawnItem)(int num, String * i) = (void (*)(int num, String * i)) 0x8109cf0;
void (*GameData::ptr::SetNumPendingSpawnItems)(int num) = (void (*)(int num)) 0x8109f90;
void (*GameData::ptr::RemovePendingSpawnItem)(String * item) = (void (*)(String * item)) 0x810a120;
String * (*GameData::ptr::GetCustomMusic)(int index, int num, bool fromList) = (String * (*)(int index, int num, bool fromList)) 0x810a490;
int (*GameData::ptr::GetMusicMode)() = (int (*)()) 0x810b110;
void (*GameData::ptr::SetKilledEnemy)(String * enemyName, int type, bool val) = (void (*)(String * enemyName, int type, bool val)) 0x810bdd0;
void (*GameData::ptr::SetNPCUnlock)(String * npcName, bool unlock) = (void (*)(String * npcName, bool unlock)) 0x810c580;
int (*GameData::ptr::GetPlayerHealthMax)() = (int (*)()) 0x810bf50;
bool (*GameData::ptr::GetNPCUnlock)(String * npcName) = (bool (*)(String * npcName)) 0x810c140;
String * (*GameData::ptr::GetDiamondDealerSoldItem)(int num) = (String * (*)(int num)) 0x810c2b0;
bool (*GameData::ptr::_GetItemCleaned)(String * arg1) = (bool (*)(String * arg1)) 0x0;
void (*GameData::ptr::SetDiamondDealerSoldItem)(int num, String * itemName) = (void (*)(int num, String * itemName)) 0x810c420;
void (*GameData::ptr::SetPlayerCoins)(int val) = (void (*)(int val)) 0x810c830;
void (*GameData::ptr::SetPlayerDiamonds)(int val) = (void (*)(int val)) 0x810c910;
void (*GameData::ptr::SetItemCleaned)(String * itemName, bool clean) = (void (*)(String * itemName, bool clean)) 0x810c9f0;
void (*GameData::ptr::AddDiamondDealerItem)(String * itemName) = (void (*)(String * itemName)) 0x810cbb0;
void (*GameData::ptr::SetItemUnlocked)(String * itemName) = (void (*)(String * itemName)) 0x810ceb0;
void (*GameData::ptr::AddPendingSpawnItem)(String * i) = (void (*)(String * i)) 0x810d000;
void (*GameData::ptr::SetZoneHoardCollected)(int zone) = (void (*)(int zone)) 0x810d1f0;
void (*GameData::ptr::SetItemUsed)(String * itemName) = (void (*)(String * itemName)) 0x810c6e0;
void (*GameData::ptr::SetPlayerHealthMax)(int val) = (void (*)(int val)) 0x810d370;
bool (*GameData::ptr::GetTutorialComplete)() = (bool (*)()) 0x810d450;
int (*GameData::ptr::GetDefaultCharacter)() = (int (*)()) 0x810d520;
int (*GameData::ptr::GetPlayerDiamonds)() = (int (*)()) 0x810d710;
void (*GameData::ptr::SetLastDailyRunNum)(int val) = (void (*)(int val)) 0x810d7e0;
bool (*GameData::ptr::GetLobbyMove)() = (bool (*)()) 0x810d8c0;
bool (*GameData::ptr::HasFoughtNecrodancer2)() = (bool (*)()) 0x810ddc0;
void (*GameData::ptr::SetFoughtNecrodancer2)() = (void (*)()) 0x810de90;
bool (*GameData::ptr::IsCharUnlocked)(int charNum) = (bool (*)(int charNum)) 0x8107a10;
void (*GameData::ptr::SetCharUnlocked)(int charNum, bool val) = (void (*)(int charNum, bool val)) 0x810df70;
bool (*GameData::ptr::HasFoughtNecrodancer)() = (bool (*)()) 0x810e0c0;
void (*GameData::ptr::SetFoughtNecrodancer)() = (void (*)()) 0x810e190;
bool (*GameData::ptr::HasFoughtLuteDragon)() = (bool (*)()) 0x810dc10;
void (*GameData::ptr::SetFoughtLuteDragon)() = (void (*)()) 0x810dce0;
bool (*GameData::ptr::GetZone3Unlocked)(int characterID) = (bool (*)(int characterID)) 0x810e270;
bool (*GameData::ptr::GetZone2Unlocked)(int characterID) = (bool (*)(int characterID)) 0x8107820;
bool (*GameData::ptr::GetZone2UnlockedCurrentCharacters)() = (bool (*)()) 0x810e460;
void (*GameData::ptr::SetZone3Unlocked)(int characterID) = (void (*)(int characterID)) 0x810e4d0;
void (*GameData::ptr::SetZone2Unlocked)(int characterID) = (void (*)(int characterID)) 0x810e730;
void (*GameData::ptr::SetZone2UnlockedCurrentCharacters)() = (void (*)()) 0x810e990;
bool (*GameData::ptr::GetZone4Unlocked)(int characterID) = (bool (*)(int characterID)) 0x810eac0;
bool (*GameData::ptr::GetZone1UnlockedCurrentCharacters)() = (bool (*)()) 0x810f0d0;
void (*GameData::ptr::_SetZone4Unlocked)(int arg1) = (void (*)(int arg1)) 0x810ed20;
void (*GameData::ptr::SetZone1UnlockedCurrentCharacters)() = (void (*)()) 0x810f130;
bool (*GameData::ptr::GetZone3UnlockedCurrentCharacters)() = (bool (*)()) 0x810e9f0;
void (*GameData::ptr::SetZone3UnlockedCurrentCharacters)() = (void (*)()) 0x810ea60;
bool (*GameData::ptr::GetZone4UnlockedCurrentCharacters)() = (bool (*)()) 0x810ecb0;
void (*GameData::ptr::SetZone4UnlockedCurrentCharacters)() = (void (*)()) 0x810ef80;
bool (*GameData::ptr::GetShowDiamondReminder)() = (bool (*)()) 0x810f190;
bool (*GameData::ptr::HasKilledEnemy)(String * enemyName, int type) = (bool (*)(String * enemyName, int type)) 0x810f260;
bool (*GameData::ptr::GetBossTraining)(String * bossName) = (bool (*)(String * bossName)) 0x810f3d0;
bool (*GameData::ptr::_GetZone2UnlockedAnyCharacter)() = (bool (*)()) 0x810f4e0;
bool (*GameData::ptr::_GetZone3UnlockedAnyCharacter)() = (bool (*)()) 0x810f5f0;
bool (*GameData::ptr::_GetZone4UnlockedAnyCharacter)() = (bool (*)()) 0x810f700;
bool (*GameData::ptr::HasFoughtDeadRinger)() = (bool (*)()) 0x810f810;
void (*GameData::ptr::SetBossTraining)(String * bossName, bool val) = (void (*)(String * bossName, bool val)) 0x810f9b0;
void (*GameData::ptr::SetFoughtDeadRinger)() = (void (*)()) 0x810fac0;
bool (*GameData::ptr::GetNPCVisited)(String * npcName) = (bool (*)(String * npcName)) 0x810fc80;
bool (*GameData::ptr::HasItemBeenUsed)(String * itemName) = (bool (*)(String * itemName)) 0x810fe90;
bool (*GameData::ptr::GetMentorLevelClear)(int num) = (bool (*)(int num)) 0x810ffa0;
bool (*GameData::ptr::CanDoDailyRun)() = (bool (*)()) 0x81101b0;
void (*GameData::ptr::SetHavePlayedHardcore)(bool val) = (void (*)(bool val)) 0x81102d0;
String * (*GameData::ptr::GetDiamondDealerItems)() = (String * (*)()) 0x81103b0;
void (*GameData::ptr::EraseDiamondDealerItems)() = (void (*)()) 0x81105a0;
String * (*GameData::ptr::SoundtrackNameAttr)(int charID) = (String * (*)(int charID)) 0x81106a0;
int (*GameData::ptr::LookupSoundtrackId)(String * name) = (int (*)(String * name)) 0x8246820;
String * (*GameData::ptr::SoundtrackNumAttr)(int charID) = (String * (*)(int charID)) 0x8110730;
int (*GameData::ptr::GetSoundtrackId)(int i) = (int (*)(int i)) 0x8246b30;
String * (*GameData::ptr::GetSoundtrackSuffix)(int charID) = (String * (*)(int charID)) 0x8247280;
bool (*GameData::ptr::GetDoubleSpeed)(int index) = (bool (*)(int index)) 0x81107c0;
bool (*GameData::ptr::GetHalfSpeed)(int index) = (bool (*)(int index)) 0x8110900;
bool (*GameData::ptr::GetEnableBossIntros)() = (bool (*)()) 0x8110a40;
bool (*GameData::ptr::GetScreenShake)() = (bool (*)()) 0x8110b10;
bool (*GameData::ptr::GetChangeLogShownForCurrentVersion)() = (bool (*)()) 0x8110be0;
void (*GameData::ptr::SetChangeLogShownForCurrentVersion)() = (void (*)()) 0x8110d20;
bool (*GameData::ptr::GetLatencyCalibrated)() = (bool (*)()) 0x8110e50;
bool (*GameData::ptr::GetPrebossAudio)() = (bool (*)()) 0x8110f20;
int (*GameData::ptr::GetKeyBinding)(int player, int index) = (int (*)(int player, int index)) 0x8110ff0;
bool (*GameData::ptr::GetIgnoreMultipress)() = (bool (*)()) 0x8111a30;
void (*GameData::ptr::SetShownSeizureWarning)(bool b) = (void (*)(bool b)) 0x8111b00;
void (*GameData::ptr::SetShowHints)(int h) = (void (*)(int h)) 0x8111be0;
int (*GameData::ptr::GetShowHints)() = (int (*)()) 0x8111cb0;
bool (*GameData::ptr::GetHavePlayedHardcore)() = (bool (*)()) 0x8111d80;
void (*GameData::ptr::SetTutorialComplete)() = (void (*)()) 0x8112810;
void (*GameData::ptr::LoadReplayPlayerDataXML)(String * data) = (void (*)(String * data)) 0x8378850;
void (*GameData::ptr::SetDebugLogging)(bool m) = (void (*)(bool m)) 0x8112920;
bool (*GameData::ptr::HasAskedLobbyMove)() = (bool (*)()) 0x8112a00;
void (*GameData::ptr::SetAskedLobbyMove)(bool a) = (void (*)(bool a)) 0x8112ad0;
void (*GameData::ptr::SetAutocalibration)(int val) = (void (*)(int val)) 0x8112bb0;
void (*GameData::ptr::SetDefaultMod)(String * m) = (void (*)(String * m)) 0x8112ca0;
bool (*GameData::ptr::GetZoneHoardCollected)(int zone) = (bool (*)(int zone)) 0x8112d90;
bool (*GameData::ptr::GetShowItemNames)() = (bool (*)()) 0x8112ff0;
bool (*GameData::ptr::GetDiscoFloor)() = (bool (*)()) 0x8113570;
bool (*GameData::ptr::GetHUDHeart)() = (bool (*)()) 0x8113640;
bool (*GameData::ptr::GetHUDBeatBars)() = (bool (*)()) 0x8113710;
bool (*GameData::ptr::GetDefaultHUDKeys)() = (bool (*)()) 0x81137e0;
bool (*GameData::ptr::GetSpeedrunTimer)() = (bool (*)()) 0x81138b0;
bool (*GameData::ptr::GetPostDeathReplay)() = (bool (*)()) 0x8113980;
bool (*GameData::ptr::GetPauseOnMinimize)() = (bool (*)()) 0x8113a50;
bool (*GameData::ptr::GetShowEnemyHearts)() = (bool (*)()) 0x8113b20;
void (*GameData::ptr::SetNPCVisited)(String * npcName, bool visited) = (void (*)(String * npcName, bool visited)) 0x8113bf0;
void (*GameData::ptr::SetLatencyValues)(int audioLatency, int videoLatency) = (void (*)(int audioLatency, int videoLatency)) 0x8113db0;
String * (*GameData::ptr::GetMusicPath)() = (String * (*)()) 0x8114020;
void (*GameData::ptr::SetMusicMode)(int m) = (void (*)(int m)) 0x81142e0;
int (*GameData::ptr::SetCustomMusic)(int index, String * filename, bool addToPlaylist) = (int (*)(int index, String * filename, bool addToPlaylist)) 0x81143b0;
void (*GameData::ptr::SetDoubleSpeed)(int index, bool d) = (void (*)(int index, bool d)) 0x8114b90;
void (*GameData::ptr::SetHalfSpeed)(int index, bool d) = (void (*)(int index, bool d)) 0x8114cd0;
void (*GameData::ptr::SetMusicPath)(String * path) = (void (*)(String * path)) 0x8115af0;
void (*GameData::ptr::WipeProgress)() = (void (*)()) 0x812bed0;
void (*GameData::ptr::SetUseChoral)(bool b) = (void (*)(bool b)) 0x8115be0;
void (*GameData::ptr::SetDefaultCharacter)(int c) = (void (*)(int c)) 0x81074a0;
void (*GameData::ptr::SetShowItemNames)(bool b) = (void (*)(bool b)) 0x8115cc0;
void (*GameData::ptr::SetShowEnemyHearts)(bool b) = (void (*)(bool b)) 0x8115da0;
void (*GameData::ptr::SetShowDiamondReminder)(bool b) = (void (*)(bool b)) 0x8115e80;
void (*GameData::ptr::SetPauseOnMinimize)(bool b) = (void (*)(bool b)) 0x8115f60;
void (*GameData::ptr::SetEnableCutscenes)(bool e) = (void (*)(bool e)) 0x8116040;
void (*GameData::ptr::SetEnableBossIntros)(bool e) = (void (*)(bool e)) 0x8116120;
void (*GameData::ptr::SetSoundVolume)(float val) = (void (*)(float val)) 0x8116200;
void (*GameData::ptr::SetMusicVolume)(float val) = (void (*)(float val)) 0x81162d0;
void (*GameData::ptr::SetPreBossAudio)(bool b) = (void (*)(bool b)) 0x81163a0;
void (*GameData::ptr::SetFullscreen)(bool val) = (void (*)(bool val)) 0x8116560;
void (*GameData::ptr::SetResolution)(int w, int h) = (void (*)(int w, int h)) 0x8116640;
void (*GameData::ptr::SetVSync)(bool v) = (void (*)(bool v)) 0x81167a0;
void (*GameData::ptr::SetViewMultiplier)(int mult) = (void (*)(int mult)) 0x8116880;
void (*GameData::ptr::SetHUDHeart)(bool val) = (void (*)(bool val)) 0x8116950;
void (*GameData::ptr::SetHUDBeatBars)(bool val) = (void (*)(bool val)) 0x8116a30;
void (*GameData::ptr::SetScreenShake)(bool val) = (void (*)(bool val)) 0x8116b10;
void (*GameData::ptr::SetSpeedrunTimer)(bool val) = (void (*)(bool val)) 0x8116bf0;
void (*GameData::ptr::SetDiscoFloor)(bool val) = (void (*)(bool val)) 0x8116cd0;
void (*GameData::ptr::SetPostDeathReplay)(bool p) = (void (*)(bool p)) 0x8116db0;
void (*GameData::ptr::SetKeyBinding)(int player, int index, int key) = (void (*)(int player, int index, int key)) 0x8116f70;
void (*GameData::ptr::SetIgnoreMultipress)(bool b) = (void (*)(bool b)) 0x8117160;
void (*GameData::ptr::SetDefaultHUDKeys)(bool b) = (void (*)(bool b)) 0x8117240;
String * (*GameData::ptr::LookupSoundtrackName)(int id) = (String * (*)(int id)) 0x8297830;
void (*GameData::ptr::SetSoundtrackId)(int i, int id) = (void (*)(int i, int id)) 0x8297a90;
void (*GameData::ptr::_IncrementSoundtrack)(int arg1) = (void (*)(int arg1)) 0x8297cb0;
void (*GameData::ptr::SetAlternateSkin)(int charID, int skinNum) = (void (*)(int charID, int skinNum)) 0x8117320;
void (*GameData::ptr::SetLanguage)(String * l) = (void (*)(String * l)) 0x8117450;
void (*GameData::ptr::SetEnableSubtitles)(bool e) = (void (*)(bool e)) 0x8117540;
void (*GameData::ptr::_mark)() = (void (*)()) 0x806d580;
bool (*GameData::ptr::GetShownNocturnaIntro)() = (bool (*)()) 0x8107680;
bool (*GameData::ptr::GetDLCPlayed)() = (bool (*)()) 0x8107750;
void (*GameData::ptr::SetShownNocturnaIntro)(bool b) = (void (*)(bool b)) 0x8107f00;
bool (*GameData::ptr::GetParticles)() = (bool (*)()) 0x81097e0;
void (*GameData::ptr::SetDLCPlayed)() = (void (*)()) 0x810d610;
bool (*GameData::ptr::GetDaoustVocals)() = (bool (*)()) 0x810d990;
bool (*GameData::ptr::HasFoughtConductor)() = (bool (*)()) 0x810da60;
void (*GameData::ptr::SetFoughtConductor)() = (void (*)()) 0x810db30;
void (*GameData::ptr::SetZone5Visited)() = (void (*)()) 0x810efc0;
bool (*GameData::ptr::HasFoughtFrankensteinway)() = (bool (*)()) 0x810f8e0;
void (*GameData::ptr::SetFoughtFrankensteinway)() = (void (*)()) 0x810fba0;
bool (*GameData::ptr::GetZone5Visited)() = (bool (*)()) 0x81100e0;
void (*GameData::ptr::SetHardModeComplete)() = (void (*)()) 0x8111e50;
bool (*GameData::ptr::GetStoryModeComplete)() = (bool (*)()) 0x8111f20;
bool (*GameData::ptr::GetPhasingModeComplete)() = (bool (*)()) 0x8111ff0;
bool (*GameData::ptr::GetMysteryModeComplete)() = (bool (*)()) 0x81120c0;
bool (*GameData::ptr::GetRandomizerModeComplete)() = (bool (*)()) 0x8112190;
bool (*GameData::ptr::GetHardModeComplete)() = (bool (*)()) 0x8112260;
bool (*GameData::ptr::GetNoReturnModeComplete)() = (bool (*)()) 0x8112330;
void (*GameData::ptr::SetNoReturnModeComplete)() = (void (*)()) 0x8112400;
void (*GameData::ptr::SetPhasingModeComplete)() = (void (*)()) 0x81124d0;
void (*GameData::ptr::SetRandomizerModeComplete)() = (void (*)()) 0x81125a0;
void (*GameData::ptr::SetMysteryModeComplete)() = (void (*)()) 0x8112670;
void (*GameData::ptr::SetStoryModeComplete)() = (void (*)()) 0x8112740;
void (*GameData::ptr::SetDaoustVocals)(bool b) = (void (*)(bool b)) 0x8116480;
void (*GameData::ptr::SetParticles)(bool p) = (void (*)(bool p)) 0x8116e90;
#endif
#endif
