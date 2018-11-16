// Generated automatically. Do not edit!
#ifndef _Audio_
#define _Audio_
template<class T> class Array;
class List27;
class Necrodancer;
class Sprite;
class String;
class StringMap5;
class SubtitleData;
class XMLDoc;
#include "Object.hpp"

class Audio : public Object  {
public:
    static XMLDoc * * soundData;
    static int * BEAT_TARGET_X;
    static int * BEAT_TARGET_Y;
    static Sprite * * beatTarget;
    static Sprite * * beatMarker;
    static Sprite * * beatMarkerRed;
    static Sprite * * beatMarkerGreen;
    static int * fixedBeatNum;
    static int * cachedSongPositionFrame;
    static bool * necrodancerSong2Active;
    static bool * includeVideoLatency;
    static int * cachedSongPosition;
    static bool * songLoops;
    static int * numLoops;
    static int * songDuration;
    static float * musicSpeed;
    static SubtitleData * * curSubtitle;
    static int * subtitleStartTime;
    static Sprite * * subtitleImg;
    static StringMap5 * * lastRndSnd;
    static StringMap5 * * lastSoundTime;
    static StringMap5 * * soundMap;
    static List27 * * delayList;
    static int * lastSFXChannel;
    static bool * debugEnablePlaceholders;
    static int * loadedSongHot;
    static float * musicVol;
    static float * fadeFactor;
    static bool * bansheeEffectEnabled;
    static int * songFortissimole;
    static bool * songShopOpen;
    static int * songShopkeeper;
    static int * songRiff0;
    static int * songRiff1;
    static int * songRiff2;
    static int * songRiff3;
    static int * songRiff4;
    static int * songNecrodancer;
    static bool * songPaused;
    static String * * songName;
    static int * loadedSong;
    static String * * beatDataString;
    static bool * cheatingDetected;
    static Array<int> * * beatIndicatorData;
    static Array<int> * * beatIndicatorFade;
    static float * songAverageMillisecondsPerBeat;
    static bool * startSong;
    static int * fadeFrames;
    static String * * beatDataString2;
    static float * shopkeeperVolAdjustment;
    static int * lastBeatNum;
    static String * * lastSongName;
    static int * musicPitchSemitones;
    static bool * firstUpdate;
    static int * startFadeFrames;
    static int * musicTransitionStartBeat;
    static String * * customPlaylist;

    // Wrappers
    inline static void LoadSoundDataXML() { ptr::LoadSoundDataXML(); }
    inline static void _SetBeatTargetLoc() { ptr::_SetBeatTargetLoc(); }
    inline static void Init() { ptr::Init(); }
    inline static bool _IsFixedBeatSet() { return ptr::_IsFixedBeatSet(); }
    inline static int _FixedBeatCurrentBeat() { return ptr::_FixedBeatCurrentBeat(); }
    inline static int GetSongPosition() { return ptr::GetSongPosition(); }
    inline static int GetCurrentBeatNumber(int beatOffset, bool useFixed) { return ptr::GetCurrentBeatNumber(beatOffset, useFixed); }
    inline static int _GetSongFinalBeatNumber() { return ptr::_GetSongFinalBeatNumber(); }
    inline static int GetCurrentBeatNumberIncludingLoops(int beatOffset, bool useFixed) { return ptr::GetCurrentBeatNumberIncludingLoops(beatOffset, useFixed); }
    inline static int _GetSongDuration() { return ptr::_GetSongDuration(); }
    inline static int TimeUntilSpecificBeat(int beatNum) { return ptr::TimeUntilSpecificBeat(beatNum); }
    inline static int GetClosestBeatNum(bool useFixed) { return ptr::GetClosestBeatNum(useFixed); }
    inline static void LoadSubtitle(String * snd) { ptr::LoadSubtitle(snd); }
    inline static int _GetPlayerVOChannel() { return ptr::_GetPlayerVOChannel(); }
    inline static int _GetNecrodancerVOChannel() { return ptr::_GetNecrodancerVOChannel(); }
    inline static int GetSoundFromFilename(String * snd) { return ptr::GetSoundFromFilename(snd); }
    inline static void PlayGameSoundAtWithDelay(int xVal, int yVal, int snd, int delayVal, int ch, bool loop, float vol, float spd, int voNum) { ptr::PlayGameSoundAtWithDelay(xVal, yVal, snd, delayVal, ch, loop, vol, spd, voNum); }
    inline static void PlayGameSoundFromFileAtWithDelay(int xVal, int yVal, String * snd, int delayVal, int ch, bool loop, float vol, float spd, int voNum) { ptr::PlayGameSoundFromFileAtWithDelay(xVal, yVal, snd, delayVal, ch, loop, vol, spd, voNum); }
    inline static int _GetNextSFXChannel() { return ptr::_GetNextSFXChannel(); }
    inline static void PlayGameSound(int snd, int ch, bool loop, float pan, float vol, int rememberMusicChannel, int rememberVOChannel, bool startPaused, bool isMusic) { ptr::PlayGameSound(snd, ch, loop, pan, vol, rememberMusicChannel, rememberVOChannel, startPaused, isMusic); }
    inline static void PlayGameSoundAt(int xVal, int yVal, int snd, int ch, bool loop, bool fullVol, int maxDist, float volumeMult, int voNum) { ptr::PlayGameSoundAt(xVal, yVal, snd, ch, loop, fullVol, maxDist, volumeMult, voNum); }
    inline static void PlayGameSoundFromFileAt(int xVal, int yVal, String * snd, int ch, bool loop, bool fullVol, int maxDist, float volumeMult, int voNum) { ptr::PlayGameSoundFromFileAt(xVal, yVal, snd, ch, loop, fullVol, maxDist, volumeMult, voNum); }
    inline static void PlayGameSoundAt(String * snd, int xVal, int yVal, int ch, bool fullVol, int maxDist, bool loop, float spd) { ptr::PlayGameSoundAt_2(snd, xVal, yVal, ch, fullVol, maxDist, loop, spd); }
    inline static void PlayGameSoundFromFileWithDelay(String * snd, int delayVal, int ch, bool loop, float pan, float vol, float spd, int voNum) { ptr::PlayGameSoundFromFileWithDelay(snd, delayVal, ch, loop, pan, vol, spd, voNum); }
    inline static void PlayGameSoundFromFile(String * snd, int ch, bool loop, float pan, float vol, int voNum) { ptr::PlayGameSoundFromFile(snd, ch, loop, pan, vol, voNum); }
    inline static void PlayGameSound(String * snd, int ch, float spd) { ptr::PlayGameSound_2(snd, ch, spd); }
    inline static int _GetNonOverlappingSFXChannel() { return ptr::_GetNonOverlappingSFXChannel(); }
    inline static bool _IsZone3SplitSong() { return ptr::_IsZone3SplitSong(); }
    inline static void _SetMusicVolHelper(float arg1, int arg2) { ptr::_SetMusicVolHelper(arg1, arg2); }
    inline static void SetMusicVolPercent(float percent, int tmpSongNum) { ptr::SetMusicVolPercent(percent, tmpSongNum); }
    inline static void UpdateZone3Volume(int xVal, int yVal) { ptr::UpdateZone3Volume(xVal, yVal); }
    inline static bool _IsFortissimoleSong() { return ptr::_IsFortissimoleSong(); }
    inline static void _UpdateFortissimoleVolume(float arg1) { ptr::_UpdateFortissimoleVolume(arg1); }
    inline static void _SetShopOpen(bool arg1) { ptr::_SetShopOpen(arg1); }
    inline static void _UnsetFixedBeat() { ptr::_UnsetFixedBeat(); }
    inline static void _InitFixedBeat() { ptr::_InitFixedBeat(); }
    inline static void PauseSong(bool pause) { ptr::PauseSong(pause); }
    inline static void _PauseSong2() { ptr::_PauseSong2(); }
    inline static void _StopShopkeeper() { ptr::_StopShopkeeper(); }
    inline static void StopCoralRiff() { ptr::StopCoralRiff(); }
    inline static void _StopFortissimole() { ptr::_StopFortissimole(); }
    inline static void _StopNecrodancer() { ptr::_StopNecrodancer(); }
    inline static String * GetCustomMusicFolder(bool forList) { return ptr::GetCustomMusicFolder(forList); }
    inline static void ResetBeatMarkers(bool doubleTime, bool halfSpeed, bool useShrine, bool customMusicForConga) { ptr::ResetBeatMarkers(doubleTime, halfSpeed, useShrine, customMusicForConga); }
    inline static bool LoadSong(String * sName, bool hasPrefix, String * suffix, int zoneSpecial, bool custom, bool doubleTime, bool halfSpeed, String * origSongName, bool useCustom) { return ptr::LoadSong(sName, hasPrefix, suffix, zoneSpecial, custom, doubleTime, halfSpeed, origSongName, useCustom); }
    inline static void LoadSongForLevel(int lvl, int zone, bool useCustom) { ptr::LoadSongForLevel(lvl, zone, useCustom); }
    inline static void _UnpauseSong() { ptr::_UnpauseSong(); }
    inline static void ModifyMusicSpeed(float spd) { ptr::ModifyMusicSpeed(spd); }
    inline static void _UpdateNumLoops() { ptr::_UpdateNumLoops(); }
    inline static void AdjustMusicVolume() { ptr::AdjustMusicVolume(); }
    inline static void FinishNecrodancerTransition(Necrodancer * necrodancer) { ptr::FinishNecrodancerTransition(necrodancer); }
    inline static void CheckNecrodancerTransition() { ptr::CheckNecrodancerTransition(); }
    inline static void Update(bool hasLoadedGameData) { ptr::Update(hasLoadedGameData); }
    inline static bool _PastLastBeat() { return ptr::_PastLastBeat(); }
    inline static int GetNonAbsoluteDistanceFromNearestBeat() { return ptr::GetNonAbsoluteDistanceFromNearestBeat(); }
    inline static int GetNextBeatDuration() { return ptr::GetNextBeatDuration(); }
    inline static float _GetNonAbsolutePercentDistanceFromNearestBeat() { return ptr::_GetNonAbsolutePercentDistanceFromNearestBeat(); }
    inline static int GetDistanceFromNearestBeat() { return ptr::GetDistanceFromNearestBeat(); }
    inline static float _GetPercentDistanceFromNearestBeat() { return ptr::_GetPercentDistanceFromNearestBeat(); }
    inline static void _FadeOutMusic(int arg1) { ptr::_FadeOutMusic(arg1); }
    inline static void GeneratePlaylist() { ptr::GeneratePlaylist(); }
    inline static String * GetPlaylist() { return ptr::GetPlaylist(); }
    inline static void AdjustMusicPitch(int diffSemitones) { ptr::AdjustMusicPitch(diffSemitones); }
    inline static String * GetSongPathPrefixFromPlaylist(int tmpNum) { return ptr::GetSongPathPrefixFromPlaylist(tmpNum); }
    inline static String * GetSongPathSuffixFromPlaylist(int tmpNum) { return ptr::GetSongPathSuffixFromPlaylist(tmpNum); }
    inline static void LoadSongFromPlaylist(int tmpNum) { ptr::LoadSongFromPlaylist(tmpNum); }
    inline static void ToggleSongPause() { ptr::ToggleSongPause(); }
    inline static int _GetClosestBeatNumWithoutLoops(bool arg1) { return ptr::_GetClosestBeatNumWithoutLoops(arg1); }
    inline static void _SetFixedBeatCurrentBeat(int arg1) { ptr::_SetFixedBeatCurrentBeat(arg1); }
    inline static int GetDistanceFromNearestHalfBeat() { return ptr::GetDistanceFromNearestHalfBeat(); }
    inline static bool IsLastFrameOfBeat() { return ptr::IsLastFrameOfBeat(); }
    inline static int TimeUntilBeat(int beatOffset) { return ptr::TimeUntilBeat(beatOffset); }
    inline static int _CalculateBeatIndicatorXVal(int arg1) { return ptr::_CalculateBeatIndicatorXVal(arg1); }
    inline static void HitBeat(int bNum) { ptr::HitBeat(bNum); }
    inline static bool _HasSongEnded() { return ptr::_HasSongEnded(); }
    inline static bool _DoingNecrodancerTransition() { return ptr::_DoingNecrodancerTransition(); }
    inline static void _IncrementFixedBeat() { ptr::_IncrementFixedBeat(); }
    inline static int GetBeatAnimFrame4() { return ptr::GetBeatAnimFrame4(); }
    inline static bool _IsBeatAnimTime(bool arg1, bool arg2) { return ptr::_IsBeatAnimTime(arg1, arg2); }
    inline static float _GetAverageMillisecondsPerBeat() { return ptr::_GetAverageMillisecondsPerBeat(); }
    inline static void RenderBeatIndicator() { ptr::RenderBeatIndicator(); }
    inline static void RenderSubtitle() { ptr::RenderSubtitle(); }
    inline static int GetBeatAnimFrame2() { return ptr::GetBeatAnimFrame2(); }
    inline static float GetPercentDistanceFromNextBeat() { return ptr::GetPercentDistanceFromNextBeat(); }
    inline static int GetBeatAnimFrame3() { return ptr::GetBeatAnimFrame3(); }
    inline static void StartBansheeEffect(int xVal, int yVal) { ptr::StartBansheeEffect(xVal, yVal); }
    inline static void EndBansheeEffect() { ptr::EndBansheeEffect(); }
    inline static void UpdateShopkeeperVolume(int xVal, int yVal) { ptr::UpdateShopkeeperVolume(xVal, yVal); }
    inline static void StartNecrodancerTransition(Necrodancer * necrodancer) { ptr::StartNecrodancerTransition(necrodancer); }
    inline static void UpdateCoralRiffVolume(float num1, float num2, float num3, float num4) { ptr::UpdateCoralRiffVolume(num1, num2, num3, num4); }
    inline static bool CloserToNextBeatThanPrevious() { return ptr::CloserToNextBeatThanPrevious(); }
    inline static bool _CloserToPreviousBeatThanNext() { return ptr::_CloserToPreviousBeatThanNext(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static void (*LoadSoundDataXML)();
        static void (*_SetBeatTargetLoc)();
        static void (*Init)();
        static bool (*_IsFixedBeatSet)();
        static int (*_FixedBeatCurrentBeat)();
        static int (*GetSongPosition)();
        static int (*GetCurrentBeatNumber)(int beatOffset, bool useFixed);
        static int (*_GetSongFinalBeatNumber)();
        static int (*GetCurrentBeatNumberIncludingLoops)(int beatOffset, bool useFixed);
        static int (*_GetSongDuration)();
        static int (*TimeUntilSpecificBeat)(int beatNum);
        static int (*GetClosestBeatNum)(bool useFixed);
        static void (*LoadSubtitle)(String * snd);
        static int (*_GetPlayerVOChannel)();
        static int (*_GetNecrodancerVOChannel)();
        static int (*GetSoundFromFilename)(String * snd);
        static void (*PlayGameSoundAtWithDelay)(int xVal, int yVal, int snd, int delayVal, int ch, bool loop, float vol, float spd, int voNum);
        static void (*PlayGameSoundFromFileAtWithDelay)(int xVal, int yVal, String * snd, int delayVal, int ch, bool loop, float vol, float spd, int voNum);
        static int (*_GetNextSFXChannel)();
        static void (*PlayGameSound)(int snd, int ch, bool loop, float pan, float vol, int rememberMusicChannel, int rememberVOChannel, bool startPaused, bool isMusic);
        static void (*PlayGameSoundAt)(int xVal, int yVal, int snd, int ch, bool loop, bool fullVol, int maxDist, float volumeMult, int voNum);
        static void (*PlayGameSoundFromFileAt)(int xVal, int yVal, String * snd, int ch, bool loop, bool fullVol, int maxDist, float volumeMult, int voNum);
        static void (*PlayGameSoundAt_2)(String * snd, int xVal, int yVal, int ch, bool fullVol, int maxDist, bool loop, float spd);
        static void (*PlayGameSoundFromFileWithDelay)(String * snd, int delayVal, int ch, bool loop, float pan, float vol, float spd, int voNum);
        static void (*PlayGameSoundFromFile)(String * snd, int ch, bool loop, float pan, float vol, int voNum);
        static void (*PlayGameSound_2)(String * snd, int ch, float spd);
        static int (*_GetNonOverlappingSFXChannel)();
        static bool (*_IsZone3SplitSong)();
        static void (*_SetMusicVolHelper)(float arg1, int arg2);
        static void (*SetMusicVolPercent)(float percent, int tmpSongNum);
        static void (*UpdateZone3Volume)(int xVal, int yVal);
        static bool (*_IsFortissimoleSong)();
        static void (*_UpdateFortissimoleVolume)(float arg1);
        static void (*_SetShopOpen)(bool arg1);
        static void (*_UnsetFixedBeat)();
        static void (*_InitFixedBeat)();
        static void (*PauseSong)(bool pause);
        static void (*_PauseSong2)();
        static void (*_StopShopkeeper)();
        static void (*StopCoralRiff)();
        static void (*_StopFortissimole)();
        static void (*_StopNecrodancer)();
        static String * (*GetCustomMusicFolder)(bool forList);
        static void (*ResetBeatMarkers)(bool doubleTime, bool halfSpeed, bool useShrine, bool customMusicForConga);
        static bool (*LoadSong)(String * sName, bool hasPrefix, String * suffix, int zoneSpecial, bool custom, bool doubleTime, bool halfSpeed, String * origSongName, bool useCustom);
        static void (*LoadSongForLevel)(int lvl, int zone, bool useCustom);
        static void (*_UnpauseSong)();
        static void (*ModifyMusicSpeed)(float spd);
        static void (*_UpdateNumLoops)();
        static void (*AdjustMusicVolume)();
        static void (*FinishNecrodancerTransition)(Necrodancer * necrodancer);
        static void (*CheckNecrodancerTransition)();
        static void (*Update)(bool hasLoadedGameData);
        static bool (*_PastLastBeat)();
        static int (*GetNonAbsoluteDistanceFromNearestBeat)();
        static int (*GetNextBeatDuration)();
        static float (*_GetNonAbsolutePercentDistanceFromNearestBeat)();
        static int (*GetDistanceFromNearestBeat)();
        static float (*_GetPercentDistanceFromNearestBeat)();
        static void (*_FadeOutMusic)(int arg1);
        static void (*GeneratePlaylist)();
        static String * (*GetPlaylist)();
        static void (*AdjustMusicPitch)(int diffSemitones);
        static String * (*GetSongPathPrefixFromPlaylist)(int tmpNum);
        static String * (*GetSongPathSuffixFromPlaylist)(int tmpNum);
        static void (*LoadSongFromPlaylist)(int tmpNum);
        static void (*ToggleSongPause)();
        static int (*_GetClosestBeatNumWithoutLoops)(bool arg1);
        static void (*_SetFixedBeatCurrentBeat)(int arg1);
        static int (*GetDistanceFromNearestHalfBeat)();
        static bool (*IsLastFrameOfBeat)();
        static int (*TimeUntilBeat)(int beatOffset);
        static int (*_CalculateBeatIndicatorXVal)(int arg1);
        static void (*HitBeat)(int bNum);
        static bool (*_HasSongEnded)();
        static bool (*_DoingNecrodancerTransition)();
        static void (*_IncrementFixedBeat)();
        static int (*GetBeatAnimFrame4)();
        static bool (*_IsBeatAnimTime)(bool arg1, bool arg2);
        static float (*_GetAverageMillisecondsPerBeat)();
        static void (*RenderBeatIndicator)();
        static void (*RenderSubtitle)();
        static int (*GetBeatAnimFrame2)();
        static float (*GetPercentDistanceFromNextBeat)();
        static int (*GetBeatAnimFrame3)();
        static void (*StartBansheeEffect)(int xVal, int yVal);
        static void (*EndBansheeEffect)();
        static void (*UpdateShopkeeperVolume)(int xVal, int yVal);
        static void (*StartNecrodancerTransition)(Necrodancer * necrodancer);
        static void (*UpdateCoralRiffVolume)(float num1, float num2, float num3, float num4);
        static bool (*CloserToNextBeatThanPrevious)();
        static bool (*_CloserToPreviousBeatThanNext)();
        static void (*_mark)();
    };
};

#ifdef _WIN32
inline XMLDoc * * Audio::soundData = (XMLDoc* *) 0x835824;
inline int * Audio::BEAT_TARGET_X = (int*) 0x835830;
inline int * Audio::BEAT_TARGET_Y = (int*) 0x835834;
inline Sprite * * Audio::beatTarget = (Sprite* *) 0x835820;
inline Sprite * * Audio::beatMarker = (Sprite* *) 0x83581c;
inline Sprite * * Audio::beatMarkerRed = (Sprite* *) 0x835818;
inline Sprite * * Audio::beatMarkerGreen = (Sprite* *) 0x835814;
inline int * Audio::fixedBeatNum = (int*) 0x835810;
inline int * Audio::cachedSongPositionFrame = (int*) 0x83580c;
inline bool * Audio::necrodancerSong2Active = (bool*) 0x8357cf;
inline bool * Audio::includeVideoLatency = (bool*) 0x8357ce;
inline int * Audio::cachedSongPosition = (int*) 0x835808;
inline bool * Audio::songLoops = (bool*) 0x83583a;
inline int * Audio::numLoops = (int*) 0x835804;
inline int * Audio::songDuration = (int*) 0x835800;
inline float * Audio::musicSpeed = (float*) 0x835b7c;
inline SubtitleData * * Audio::curSubtitle = (SubtitleData* *) 0x8357fc;
inline int * Audio::subtitleStartTime = (int*) 0x8357f8;
inline Sprite * * Audio::subtitleImg = (Sprite* *) 0x8357f4;
inline StringMap5 * * Audio::lastRndSnd = (StringMap5* *) 0x8357f0;
inline StringMap5 * * Audio::lastSoundTime = (StringMap5* *) 0x8357ec;
inline StringMap5 * * Audio::soundMap = (StringMap5* *) 0x8358fc;
inline List27 * * Audio::delayList = (List27* *) 0x8357e8;
inline int * Audio::lastSFXChannel = (int*) 0x8357e4;
inline bool * Audio::debugEnablePlaceholders = (bool*) 0x835895;
inline int * Audio::loadedSongHot = (int*) 0x8357dc;
inline float * Audio::musicVol = (float*) 0x8357d8;
inline float * Audio::fadeFactor = (float*) 0x8357d4;
inline bool * Audio::bansheeEffectEnabled = (bool*) 0x8357cd;
inline int * Audio::songFortissimole = (int*) 0x8357d0;
inline bool * Audio::songShopOpen = (bool*) 0x8357cc;
inline int * Audio::songShopkeeper = (int*) 0x8357c8;
inline int * Audio::songRiff0 = (int*) 0x8357c4;
inline int * Audio::songRiff1 = (int*) 0x8357c0;
inline int * Audio::songRiff2 = (int*) 0x8357bc;
inline int * Audio::songRiff3 = (int*) 0x8357b8;
inline int * Audio::songRiff4 = (int*) 0x8357b4;
inline int * Audio::songNecrodancer = (int*) 0x8357b0;
inline bool * Audio::songPaused = (bool*) 0x835793;
inline String * * Audio::songName = (String* *) 0x833ef0;
inline int * Audio::loadedSong = (int*) 0x8357ac;
inline String * * Audio::beatDataString = (String* *) 0x833ef4;
inline bool * Audio::cheatingDetected = (bool*) 0x835862;
inline Array<int> * * Audio::beatIndicatorData = (Array<int>* *) 0x833ef8;
inline Array<int> * * Audio::beatIndicatorFade = (Array<int>* *) 0x833efc;
inline float * Audio::songAverageMillisecondsPerBeat = (float*) 0x8357a8;
inline bool * Audio::startSong = (bool*) 0x835839;
inline int * Audio::fadeFrames = (int*) 0x8357a4;
inline String * * Audio::beatDataString2 = (String* *) 0x833f00;
inline float * Audio::shopkeeperVolAdjustment = (float*) 0x8357a0;
inline int * Audio::lastBeatNum = (int*) 0x835858;
inline String * * Audio::lastSongName = (String* *) 0x833f04;
inline int * Audio::musicPitchSemitones = (int*) 0x835794;
inline bool * Audio::firstUpdate = (bool*) 0x835790;
inline int * Audio::startFadeFrames = (int*) 0x83578c;
inline int * Audio::musicTransitionStartBeat = (int*) 0x835788;
inline String * * Audio::customPlaylist = (String* *) 0x833f08;

inline void (*Audio::ptr::LoadSoundDataXML)() = (void (*)()) 0x544a10;
inline void (*Audio::ptr::_SetBeatTargetLoc)() = (void (*)()) 0x0;
inline void (*Audio::ptr::Init)() = (void (*)()) 0x544c20;
inline bool (*Audio::ptr::_IsFixedBeatSet)() = (bool (*)()) 0x0;
inline int (*Audio::ptr::_FixedBeatCurrentBeat)() = (int (*)()) 0x0;
inline int (*Audio::ptr::GetSongPosition)() = (int (*)()) 0x545150;
inline int (*Audio::ptr::GetCurrentBeatNumber)(int beatOffset, bool useFixed) = (int (*)(int beatOffset, bool useFixed)) 0x5451f0;
inline int (*Audio::ptr::_GetSongFinalBeatNumber)() = (int (*)()) 0x0;
inline int (*Audio::ptr::GetCurrentBeatNumberIncludingLoops)(int beatOffset, bool useFixed) = (int (*)(int beatOffset, bool useFixed)) 0x545270;
inline int (*Audio::ptr::_GetSongDuration)() = (int (*)()) 0x0;
inline int (*Audio::ptr::TimeUntilSpecificBeat)(int beatNum) = (int (*)(int beatNum)) 0x5452d0;
inline int (*Audio::ptr::GetClosestBeatNum)(bool useFixed) = (int (*)(bool useFixed)) 0x5453a0;
inline void (*Audio::ptr::LoadSubtitle)(String * snd) = (void (*)(String * snd)) 0x545430;
inline int (*Audio::ptr::_GetPlayerVOChannel)() = (int (*)()) 0x0;
inline int (*Audio::ptr::_GetNecrodancerVOChannel)() = (int (*)()) 0x0;
inline int (*Audio::ptr::GetSoundFromFilename)(String * snd) = (int (*)(String * snd)) 0x545e10;
inline void (*Audio::ptr::PlayGameSoundAtWithDelay)(int xVal, int yVal, int snd, int delayVal, int ch, bool loop, float vol, float spd, int voNum) = (void (*)(int xVal, int yVal, int snd, int delayVal, int ch, bool loop, float vol, float spd, int voNum)) 0x546e40;
inline void (*Audio::ptr::PlayGameSoundFromFileAtWithDelay)(int xVal, int yVal, String * snd, int delayVal, int ch, bool loop, float vol, float spd, int voNum) = (void (*)(int xVal, int yVal, String * snd, int delayVal, int ch, bool loop, float vol, float spd, int voNum)) 0x546f00;
inline int (*Audio::ptr::_GetNextSFXChannel)() = (int (*)()) 0x0;
inline void (*Audio::ptr::PlayGameSound)(int snd, int ch, bool loop, float pan, float vol, int rememberMusicChannel, int rememberVOChannel, bool startPaused, bool isMusic) = (void (*)(int snd, int ch, bool loop, float pan, float vol, int rememberMusicChannel, int rememberVOChannel, bool startPaused, bool isMusic)) 0x546fb0;
inline void (*Audio::ptr::PlayGameSoundAt)(int xVal, int yVal, int snd, int ch, bool loop, bool fullVol, int maxDist, float volumeMult, int voNum) = (void (*)(int xVal, int yVal, int snd, int ch, bool loop, bool fullVol, int maxDist, float volumeMult, int voNum)) 0x5470e0;
inline void (*Audio::ptr::PlayGameSoundFromFileAt)(int xVal, int yVal, String * snd, int ch, bool loop, bool fullVol, int maxDist, float volumeMult, int voNum) = (void (*)(int xVal, int yVal, String * snd, int ch, bool loop, bool fullVol, int maxDist, float volumeMult, int voNum)) 0x5471f0;
inline void (*Audio::ptr::PlayGameSoundAt_2)(String * snd, int xVal, int yVal, int ch, bool fullVol, int maxDist, bool loop, float spd) = (void (*)(String * snd, int xVal, int yVal, int ch, bool fullVol, int maxDist, bool loop, float spd)) 0x5472a0;
inline void (*Audio::ptr::PlayGameSoundFromFileWithDelay)(String * snd, int delayVal, int ch, bool loop, float pan, float vol, float spd, int voNum) = (void (*)(String * snd, int delayVal, int ch, bool loop, float pan, float vol, float spd, int voNum)) 0x547b30;
inline void (*Audio::ptr::PlayGameSoundFromFile)(String * snd, int ch, bool loop, float pan, float vol, int voNum) = (void (*)(String * snd, int ch, bool loop, float pan, float vol, int voNum)) 0x547c30;
inline void (*Audio::ptr::PlayGameSound_2)(String * snd, int ch, float spd) = (void (*)(String * snd, int ch, float spd)) 0x547ce0;
inline int (*Audio::ptr::_GetNonOverlappingSFXChannel)() = (int (*)()) 0x0;
inline bool (*Audio::ptr::_IsZone3SplitSong)() = (bool (*)()) 0x0;
inline void (*Audio::ptr::_SetMusicVolHelper)(float arg1, int arg2) = (void (*)(float arg1, int arg2)) 0x0;
inline void (*Audio::ptr::SetMusicVolPercent)(float percent, int tmpSongNum) = (void (*)(float percent, int tmpSongNum)) 0x548640;
inline void (*Audio::ptr::UpdateZone3Volume)(int xVal, int yVal) = (void (*)(int xVal, int yVal)) 0x5486a0;
inline bool (*Audio::ptr::_IsFortissimoleSong)() = (bool (*)()) 0x0;
inline void (*Audio::ptr::_UpdateFortissimoleVolume)(float arg1) = (void (*)(float arg1)) 0x0;
inline void (*Audio::ptr::_SetShopOpen)(bool arg1) = (void (*)(bool arg1)) 0x0;
inline void (*Audio::ptr::_UnsetFixedBeat)() = (void (*)()) 0x0;
inline void (*Audio::ptr::_InitFixedBeat)() = (void (*)()) 0x0;
inline void (*Audio::ptr::PauseSong)(bool pause) = (void (*)(bool pause)) 0x5487a0;
inline void (*Audio::ptr::_PauseSong2)() = (void (*)()) 0x0;
inline void (*Audio::ptr::_StopShopkeeper)() = (void (*)()) 0x0;
inline void (*Audio::ptr::StopCoralRiff)() = (void (*)()) 0x548970;
inline void (*Audio::ptr::_StopFortissimole)() = (void (*)()) 0x0;
inline void (*Audio::ptr::_StopNecrodancer)() = (void (*)()) 0x0;
inline String * (*Audio::ptr::GetCustomMusicFolder)(bool forList) = (String * (*)(bool forList)) 0x548a00;
inline void (*Audio::ptr::ResetBeatMarkers)(bool doubleTime, bool halfSpeed, bool useShrine, bool customMusicForConga) = (void (*)(bool doubleTime, bool halfSpeed, bool useShrine, bool customMusicForConga)) 0x548c00;
inline bool (*Audio::ptr::LoadSong)(String * sName, bool hasPrefix, String * suffix, int zoneSpecial, bool custom, bool doubleTime, bool halfSpeed, String * origSongName, bool useCustom) = (bool (*)(String * sName, bool hasPrefix, String * suffix, int zoneSpecial, bool custom, bool doubleTime, bool halfSpeed, String * origSongName, bool useCustom)) 0x5496e0;
inline void (*Audio::ptr::LoadSongForLevel)(int lvl, int zone, bool useCustom) = (void (*)(int lvl, int zone, bool useCustom)) 0x5529c0;
inline void (*Audio::ptr::_UnpauseSong)() = (void (*)()) 0x0;
inline void (*Audio::ptr::ModifyMusicSpeed)(float spd) = (void (*)(float spd)) 0x553230;
inline void (*Audio::ptr::_UpdateNumLoops)() = (void (*)()) 0x0;
inline void (*Audio::ptr::AdjustMusicVolume)() = (void (*)()) 0x5532e0;
inline void (*Audio::ptr::FinishNecrodancerTransition)(Necrodancer * necrodancer) = (void (*)(Necrodancer * necrodancer)) 0x553420;
inline void (*Audio::ptr::CheckNecrodancerTransition)() = (void (*)()) 0x553770;
inline void (*Audio::ptr::Update)(bool hasLoadedGameData) = (void (*)(bool hasLoadedGameData)) 0x553990;
inline bool (*Audio::ptr::_PastLastBeat)() = (bool (*)()) 0x0;
inline int (*Audio::ptr::GetNonAbsoluteDistanceFromNearestBeat)() = (int (*)()) 0x554830;
inline int (*Audio::ptr::GetNextBeatDuration)() = (int (*)()) 0x554900;
inline float (*Audio::ptr::_GetNonAbsolutePercentDistanceFromNearestBeat)() = (float (*)()) 0x0;
inline int (*Audio::ptr::GetDistanceFromNearestBeat)() = (int (*)()) 0x5549c0;
inline float (*Audio::ptr::_GetPercentDistanceFromNearestBeat)() = (float (*)()) 0x0;
inline void (*Audio::ptr::_FadeOutMusic)(int arg1) = (void (*)(int arg1)) 0x0;
inline void (*Audio::ptr::GeneratePlaylist)() = (void (*)()) 0x554a90;
inline String * (*Audio::ptr::GetPlaylist)() = (String * (*)()) 0x555070;
inline void (*Audio::ptr::AdjustMusicPitch)(int diffSemitones) = (void (*)(int diffSemitones)) 0x5550d0;
inline String * (*Audio::ptr::GetSongPathPrefixFromPlaylist)(int tmpNum) = (String * (*)(int tmpNum)) 0x555110;
inline String * (*Audio::ptr::GetSongPathSuffixFromPlaylist)(int tmpNum) = (String * (*)(int tmpNum)) 0x555500;
inline void (*Audio::ptr::LoadSongFromPlaylist)(int tmpNum) = (void (*)(int tmpNum)) 0x555890;
inline void (*Audio::ptr::ToggleSongPause)() = (void (*)()) 0x555a00;
inline int (*Audio::ptr::_GetClosestBeatNumWithoutLoops)(bool arg1) = (int (*)(bool arg1)) 0x0;
inline void (*Audio::ptr::_SetFixedBeatCurrentBeat)(int arg1) = (void (*)(int arg1)) 0x0;
inline int (*Audio::ptr::GetDistanceFromNearestHalfBeat)() = (int (*)()) 0x555a20;
inline bool (*Audio::ptr::IsLastFrameOfBeat)() = (bool (*)()) 0x555b40;
inline int (*Audio::ptr::TimeUntilBeat)(int beatOffset) = (int (*)(int beatOffset)) 0x555cb0;
inline int (*Audio::ptr::_CalculateBeatIndicatorXVal)(int arg1) = (int (*)(int arg1)) 0x0;
inline void (*Audio::ptr::HitBeat)(int bNum) = (void (*)(int bNum)) 0x555d00;
inline bool (*Audio::ptr::_HasSongEnded)() = (bool (*)()) 0x0;
inline bool (*Audio::ptr::_DoingNecrodancerTransition)() = (bool (*)()) 0x0;
inline void (*Audio::ptr::_IncrementFixedBeat)() = (void (*)()) 0x0;
inline int (*Audio::ptr::GetBeatAnimFrame4)() = (int (*)()) 0x555d70;
inline bool (*Audio::ptr::_IsBeatAnimTime)(bool arg1, bool arg2) = (bool (*)(bool arg1, bool arg2)) 0x0;
inline float (*Audio::ptr::_GetAverageMillisecondsPerBeat)() = (float (*)()) 0x0;
inline void (*Audio::ptr::RenderBeatIndicator)() = (void (*)()) 0x555e90;
inline void (*Audio::ptr::RenderSubtitle)() = (void (*)()) 0x5563f0;
inline int (*Audio::ptr::GetBeatAnimFrame2)() = (int (*)()) 0x5564d0;
inline float (*Audio::ptr::GetPercentDistanceFromNextBeat)() = (float (*)()) 0x5565c0;
inline int (*Audio::ptr::GetBeatAnimFrame3)() = (int (*)()) 0x556690;
inline void (*Audio::ptr::StartBansheeEffect)(int xVal, int yVal) = (void (*)(int xVal, int yVal)) 0x5567a0;
inline void (*Audio::ptr::EndBansheeEffect)() = (void (*)()) 0x556970;
inline void (*Audio::ptr::UpdateShopkeeperVolume)(int xVal, int yVal) = (void (*)(int xVal, int yVal)) 0x556aa0;
inline void (*Audio::ptr::StartNecrodancerTransition)(Necrodancer * necrodancer) = (void (*)(Necrodancer * necrodancer)) 0x556ba0;
inline void (*Audio::ptr::UpdateCoralRiffVolume)(float num1, float num2, float num3, float num4) = (void (*)(float num1, float num2, float num3, float num4)) 0x556dd0;
inline bool (*Audio::ptr::CloserToNextBeatThanPrevious)() = (bool (*)()) 0x556f10;
inline bool (*Audio::ptr::_CloserToPreviousBeatThanNext)() = (bool (*)()) 0x0;
inline void (*Audio::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__
inline XMLDoc * * Audio::soundData = (XMLDoc* *) 0x856a844;
inline int * Audio::BEAT_TARGET_X = (int*) 0x856a840;
inline int * Audio::BEAT_TARGET_Y = (int*) 0x856a83c;
inline Sprite * * Audio::beatTarget = (Sprite* *) 0x856a838;
inline Sprite * * Audio::beatMarker = (Sprite* *) 0x856a834;
inline Sprite * * Audio::beatMarkerRed = (Sprite* *) 0x856a830;
inline Sprite * * Audio::beatMarkerGreen = (Sprite* *) 0x856a82c;
inline int * Audio::fixedBeatNum = (int*) 0x856a828;
inline int * Audio::cachedSongPositionFrame = (int*) 0x856a824;
inline bool * Audio::necrodancerSong2Active = (bool*) 0x856a821;
inline bool * Audio::includeVideoLatency = (bool*) 0x856a820;
inline int * Audio::cachedSongPosition = (int*) 0x856a81c;
inline bool * Audio::songLoops = (bool*) 0x856a818;
inline int * Audio::numLoops = (int*) 0x856a814;
inline int * Audio::songDuration = (int*) 0x856a810;
inline float * Audio::musicSpeed = (float*) 0x856a80c;
inline SubtitleData * * Audio::curSubtitle = (SubtitleData* *) 0x856a808;
inline int * Audio::subtitleStartTime = (int*) 0x856a804;
inline Sprite * * Audio::subtitleImg = (Sprite* *) 0x856a800;
inline StringMap5 * * Audio::lastRndSnd = (StringMap5* *) 0x856a7fc;
inline StringMap5 * * Audio::lastSoundTime = (StringMap5* *) 0x856a7f8;
inline StringMap5 * * Audio::soundMap = (StringMap5* *) 0x856a7f4;
inline List27 * * Audio::delayList = (List27* *) 0x856a7f0;
inline int * Audio::lastSFXChannel = (int*) 0x856a7ec;
inline bool * Audio::debugEnablePlaceholders = (bool*) 0x856a7e8;
inline int * Audio::loadedSongHot = (int*) 0x856a7e4;
inline float * Audio::musicVol = (float*) 0x856a7e0;
inline float * Audio::fadeFactor = (float*) 0x856a7dc;
inline bool * Audio::bansheeEffectEnabled = (bool*) 0x856a7d8;
inline int * Audio::songFortissimole = (int*) 0x856a7d4;
inline bool * Audio::songShopOpen = (bool*) 0x856a7d0;
inline int * Audio::songShopkeeper = (int*) 0x856a7cc;
inline int * Audio::songRiff0 = (int*) 0x856a7c8;
inline int * Audio::songRiff1 = (int*) 0x856a7c4;
inline int * Audio::songRiff2 = (int*) 0x856a7c0;
inline int * Audio::songRiff3 = (int*) 0x856a7bc;
inline int * Audio::songRiff4 = (int*) 0x856a7b8;
inline int * Audio::songNecrodancer = (int*) 0x856a7b4;
inline bool * Audio::songPaused = (bool*) 0x856a7b0;
inline String * * Audio::songName = (String* *) 0x856a7ac;
inline int * Audio::loadedSong = (int*) 0x856a7a8;
inline String * * Audio::beatDataString = (String* *) 0x856a7a4;
inline bool * Audio::cheatingDetected = (bool*) 0x856a7a0;
inline Array<int> * * Audio::beatIndicatorData = (Array<int>* *) 0x856a79c;
inline Array<int> * * Audio::beatIndicatorFade = (Array<int>* *) 0x856a798;
inline float * Audio::songAverageMillisecondsPerBeat = (float*) 0x856a794;
inline bool * Audio::startSong = (bool*) 0x856a790;
inline int * Audio::fadeFrames = (int*) 0x856a78c;
inline String * * Audio::beatDataString2 = (String* *) 0x856a788;
inline float * Audio::shopkeeperVolAdjustment = (float*) 0x856a784;
inline int * Audio::lastBeatNum = (int*) 0x856a780;
inline String * * Audio::lastSongName = (String* *) 0x856a77c;
inline int * Audio::musicPitchSemitones = (int*) 0x856a778;
inline bool * Audio::firstUpdate = (bool*) 0x856a774;
inline int * Audio::startFadeFrames = (int*) 0x856a770;
inline int * Audio::musicTransitionStartBeat = (int*) 0x856a76c;
inline String * * Audio::customPlaylist = (String* *) 0x856a768;

inline void (*Audio::ptr::LoadSoundDataXML)() = (void (*)()) 0x83789f0;
inline void (*Audio::ptr::_SetBeatTargetLoc)() = (void (*)()) 0x814d800;
inline void (*Audio::ptr::Init)() = (void (*)()) 0x8378c30;
inline bool (*Audio::ptr::_IsFixedBeatSet)() = (bool (*)()) 0x814d830;
inline int (*Audio::ptr::_FixedBeatCurrentBeat)() = (int (*)()) 0x814d840;
inline int (*Audio::ptr::GetSongPosition)() = (int (*)()) 0x8249a70;
inline int (*Audio::ptr::GetCurrentBeatNumber)(int beatOffset, bool useFixed) = (int (*)(int beatOffset, bool useFixed)) 0x82568a0;
inline int (*Audio::ptr::_GetSongFinalBeatNumber)() = (int (*)()) 0x814d850;
inline int (*Audio::ptr::GetCurrentBeatNumberIncludingLoops)(int beatOffset, bool useFixed) = (int (*)(int beatOffset, bool useFixed)) 0x8256a10;
inline int (*Audio::ptr::_GetSongDuration)() = (int (*)()) 0x814d860;
inline int (*Audio::ptr::TimeUntilSpecificBeat)(int beatNum) = (int (*)(int beatNum)) 0x82566e0;
inline int (*Audio::ptr::GetClosestBeatNum)(bool useFixed) = (int (*)(bool useFixed)) 0x8256d50;
inline void (*Audio::ptr::LoadSubtitle)(String * snd) = (void (*)(String * snd)) 0x81fdce0;
inline int (*Audio::ptr::_GetPlayerVOChannel)() = (int (*)()) 0x814d870;
inline int (*Audio::ptr::_GetNecrodancerVOChannel)() = (int (*)()) 0x814d880;
inline int (*Audio::ptr::GetSoundFromFilename)(String * snd) = (int (*)(String * snd)) 0x830f7f0;
inline void (*Audio::ptr::PlayGameSoundAtWithDelay)(int xVal, int yVal, int snd, int delayVal, int ch, bool loop, float vol, float spd, int voNum) = (void (*)(int xVal, int yVal, int snd, int delayVal, int ch, bool loop, float vol, float spd, int voNum)) 0x814d890;
inline void (*Audio::ptr::PlayGameSoundFromFileAtWithDelay)(int xVal, int yVal, String * snd, int delayVal, int ch, bool loop, float vol, float spd, int voNum) = (void (*)(int xVal, int yVal, String * snd, int delayVal, int ch, bool loop, float vol, float spd, int voNum)) 0x83162c0;
inline int (*Audio::ptr::_GetNextSFXChannel)() = (int (*)()) 0x814d960;
inline void (*Audio::ptr::PlayGameSound)(int snd, int ch, bool loop, float pan, float vol, int rememberMusicChannel, int rememberVOChannel, bool startPaused, bool isMusic) = (void (*)(int snd, int ch, bool loop, float pan, float vol, int rememberMusicChannel, int rememberVOChannel, bool startPaused, bool isMusic)) 0x826eac0;
inline void (*Audio::ptr::PlayGameSoundAt)(int xVal, int yVal, int snd, int ch, bool loop, bool fullVol, int maxDist, float volumeMult, int voNum) = (void (*)(int xVal, int yVal, int snd, int ch, bool loop, bool fullVol, int maxDist, float volumeMult, int voNum)) 0x826ed20;
inline void (*Audio::ptr::PlayGameSoundFromFileAt)(int xVal, int yVal, String * snd, int ch, bool loop, bool fullVol, int maxDist, float volumeMult, int voNum) = (void (*)(int xVal, int yVal, String * snd, int ch, bool loop, bool fullVol, int maxDist, float volumeMult, int voNum)) 0x8311880;
inline void (*Audio::ptr::PlayGameSoundAt_2)(String * snd, int xVal, int yVal, int ch, bool fullVol, int maxDist, bool loop, float spd) = (void (*)(String * snd, int xVal, int yVal, int ch, bool fullVol, int maxDist, bool loop, float spd)) 0x83d8ee0;
inline void (*Audio::ptr::PlayGameSoundFromFileWithDelay)(String * snd, int delayVal, int ch, bool loop, float pan, float vol, float spd, int voNum) = (void (*)(String * snd, int delayVal, int ch, bool loop, float pan, float vol, float spd, int voNum)) 0x8316380;
inline void (*Audio::ptr::PlayGameSoundFromFile)(String * snd, int ch, bool loop, float pan, float vol, int voNum) = (void (*)(String * snd, int ch, bool loop, float pan, float vol, int voNum)) 0x8311920;
inline void (*Audio::ptr::PlayGameSound_2)(String * snd, int ch, float spd) = (void (*)(String * snd, int ch, float spd)) 0x8316450;
inline int (*Audio::ptr::_GetNonOverlappingSFXChannel)() = (int (*)()) 0x814d990;
inline bool (*Audio::ptr::_IsZone3SplitSong)() = (bool (*)()) 0x814d9a0;
inline void (*Audio::ptr::_SetMusicVolHelper)(float arg1, int arg2) = (void (*)(float arg1, int arg2)) 0x8247e50;
inline void (*Audio::ptr::SetMusicVolPercent)(float percent, int tmpSongNum) = (void (*)(float percent, int tmpSongNum)) 0x8247e80;
inline void (*Audio::ptr::UpdateZone3Volume)(int xVal, int yVal) = (void (*)(int xVal, int yVal)) 0x8247fd0;
inline bool (*Audio::ptr::_IsFortissimoleSong)() = (bool (*)()) 0x814d9b0;
inline void (*Audio::ptr::_UpdateFortissimoleVolume)(float arg1) = (void (*)(float arg1)) 0x826dcc0;
inline void (*Audio::ptr::_SetShopOpen)(bool arg1) = (void (*)(bool arg1)) 0x814d9c0;
inline void (*Audio::ptr::_UnsetFixedBeat)() = (void (*)()) 0x814d9d0;
inline void (*Audio::ptr::_InitFixedBeat)() = (void (*)()) 0x814d9e0;
inline void (*Audio::ptr::PauseSong)(bool pause) = (void (*)(bool pause)) 0x8311bd0;
inline void (*Audio::ptr::_PauseSong2)() = (void (*)()) 0x8311d70;
inline void (*Audio::ptr::_StopShopkeeper)() = (void (*)()) 0x826e2a0;
inline void (*Audio::ptr::StopCoralRiff)() = (void (*)()) 0x826e200;
inline void (*Audio::ptr::_StopFortissimole)() = (void (*)()) 0x826e1d0;
inline void (*Audio::ptr::_StopNecrodancer)() = (void (*)()) 0x826e1a0;
inline String * (*Audio::ptr::GetCustomMusicFolder)(bool forList) = (String * (*)(bool forList)) 0x814d9f0;
inline void (*Audio::ptr::ResetBeatMarkers)(bool doubleTime, bool halfSpeed, bool useShrine, bool customMusicForConga) = (void (*)(bool doubleTime, bool halfSpeed, bool useShrine, bool customMusicForConga)) 0x814e250;
inline bool (*Audio::ptr::LoadSong)(String * sName, bool hasPrefix, String * suffix, int zoneSpecial, bool custom, bool doubleTime, bool halfSpeed, String * origSongName, bool useCustom) = (bool (*)(String * sName, bool hasPrefix, String * suffix, int zoneSpecial, bool custom, bool doubleTime, bool halfSpeed, String * origSongName, bool useCustom)) 0x8368550;
inline void (*Audio::ptr::LoadSongForLevel)(int lvl, int zone, bool useCustom) = (void (*)(int lvl, int zone, bool useCustom)) 0x8350e50;
inline void (*Audio::ptr::_UnpauseSong)() = (void (*)()) 0x8311d50;
inline void (*Audio::ptr::ModifyMusicSpeed)(float spd) = (void (*)(float spd)) 0x826f280;
inline void (*Audio::ptr::_UpdateNumLoops)() = (void (*)()) 0x826c290;
inline void (*Audio::ptr::AdjustMusicVolume)() = (void (*)()) 0x82480e0;
inline void (*Audio::ptr::FinishNecrodancerTransition)(Necrodancer * necrodancer) = (void (*)(Necrodancer * necrodancer)) 0x8270150;
inline void (*Audio::ptr::CheckNecrodancerTransition)() = (void (*)()) 0x8270650;
inline void (*Audio::ptr::Update)(bool hasLoadedGameData) = (void (*)(bool hasLoadedGameData)) 0x8311eb0;
inline bool (*Audio::ptr::_PastLastBeat)() = (bool (*)()) 0x82566c0;
inline int (*Audio::ptr::GetNonAbsoluteDistanceFromNearestBeat)() = (int (*)()) 0x8256cd0;
inline int (*Audio::ptr::GetNextBeatDuration)() = (int (*)()) 0x8256c80;
inline float (*Audio::ptr::_GetNonAbsolutePercentDistanceFromNearestBeat)() = (float (*)()) 0x8257be0;
inline int (*Audio::ptr::GetDistanceFromNearestBeat)() = (int (*)()) 0x8256c30;
inline float (*Audio::ptr::_GetPercentDistanceFromNearestBeat)() = (float (*)()) 0x8257b30;
inline void (*Audio::ptr::_FadeOutMusic)(int arg1) = (void (*)(int arg1)) 0x8150560;
inline void (*Audio::ptr::GeneratePlaylist)() = (void (*)()) 0x8150570;
inline String * (*Audio::ptr::GetPlaylist)() = (String * (*)()) 0x8150910;
inline void (*Audio::ptr::AdjustMusicPitch)(int diffSemitones) = (void (*)(int diffSemitones)) 0x8249260;
inline String * (*Audio::ptr::GetSongPathPrefixFromPlaylist)(int tmpNum) = (String * (*)(int tmpNum)) 0x8150930;
inline String * (*Audio::ptr::GetSongPathSuffixFromPlaylist)(int tmpNum) = (String * (*)(int tmpNum)) 0x8150c00;
inline void (*Audio::ptr::LoadSongFromPlaylist)(int tmpNum) = (void (*)(int tmpNum)) 0x8367670;
inline void (*Audio::ptr::ToggleSongPause)() = (void (*)()) 0x8314880;
inline int (*Audio::ptr::_GetClosestBeatNumWithoutLoops)(bool arg1) = (int (*)(bool arg1)) 0x8256930;
inline void (*Audio::ptr::_SetFixedBeatCurrentBeat)(int arg1) = (void (*)(int arg1)) 0x8150e70;
inline int (*Audio::ptr::GetDistanceFromNearestHalfBeat)() = (int (*)()) 0x8257a50;
inline bool (*Audio::ptr::IsLastFrameOfBeat)() = (bool (*)()) 0x82584c0;
inline int (*Audio::ptr::TimeUntilBeat)(int beatOffset) = (int (*)(int beatOffset)) 0x8256c00;
inline int (*Audio::ptr::_CalculateBeatIndicatorXVal)(int arg1) = (int (*)(int arg1)) 0x82567b0;
inline void (*Audio::ptr::HitBeat)(int bNum) = (void (*)(int bNum)) 0x8256800;
inline bool (*Audio::ptr::_HasSongEnded)() = (bool (*)()) 0x8249a40;
inline bool (*Audio::ptr::_DoingNecrodancerTransition)() = (bool (*)()) 0x8150e80;
inline void (*Audio::ptr::_IncrementFixedBeat)() = (void (*)()) 0x8150ea0;
inline int (*Audio::ptr::GetBeatAnimFrame4)() = (int (*)()) 0x82572a0;
inline bool (*Audio::ptr::_IsBeatAnimTime)(bool arg1, bool arg2) = (bool (*)(bool arg1, bool arg2)) 0x8257d60;
inline float (*Audio::ptr::_GetAverageMillisecondsPerBeat)() = (float (*)()) 0x8150ec0;
inline void (*Audio::ptr::RenderBeatIndicator)() = (void (*)()) 0x8257ea0;
inline void (*Audio::ptr::RenderSubtitle)() = (void (*)()) 0x8150ed0;
inline int (*Audio::ptr::GetBeatAnimFrame2)() = (int (*)()) 0x82571f0;
inline float (*Audio::ptr::GetPercentDistanceFromNextBeat)() = (float (*)()) 0x8257170;
inline int (*Audio::ptr::GetBeatAnimFrame3)() = (int (*)()) 0x8257070;
inline void (*Audio::ptr::StartBansheeEffect)(int xVal, int yVal) = (void (*)(int xVal, int yVal)) 0x8391070;
inline void (*Audio::ptr::EndBansheeEffect)() = (void (*)()) 0x83119b0;
inline void (*Audio::ptr::UpdateShopkeeperVolume)(int xVal, int yVal) = (void (*)(int xVal, int yVal)) 0x826db10;
inline void (*Audio::ptr::StartNecrodancerTransition)(Necrodancer * necrodancer) = (void (*)(Necrodancer * necrodancer)) 0x8261d30;
inline void (*Audio::ptr::UpdateCoralRiffVolume)(float num1, float num2, float num3, float num4) = (void (*)(float num1, float num2, float num3, float num4)) 0x826dad0;
inline bool (*Audio::ptr::CloserToNextBeatThanPrevious)() = (bool (*)()) 0x8256e20;
inline bool (*Audio::ptr::_CloserToPreviousBeatThanNext)() = (bool (*)()) 0x8256e80;
inline void (*Audio::ptr::_mark)() = (void (*)()) 0x806f6b0;
#endif
#endif
