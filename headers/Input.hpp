// Generated automatically. Do not edit!
#ifndef _Input_
#define _Input_
template<class T> class Array;
class ControllerPopUp;
class List25;
class String;
#include "Object.hpp"

class Input : public Object  {
public:
    static ControllerPopUp * * popUpController;
    static int * popupFrame;
    static Array<bool> * * stickLeft;
    static Array<bool> * * stickRight;
    static Array<bool> * * stickUp;
    static Array<bool> * * stickDown;
    static Array<float> * * lastJoyX;
    static Array<float> * * lastJoyY;
    static Array<bool> * * stickLeft2;
    static Array<bool> * * stickRight2;
    static Array<bool> * * stickUp2;
    static Array<bool> * * stickDown2;
    static Array<float> * * lastJoyX2;
    static Array<float> * * lastJoyY2;
    static Array<int> * * movementBuffer;
    static Array<int> * * movementBufferFrame;
    static Array<int> * * offbeatMovementBuffer;
    static Array<int> * * offbeatMovementBufferFrame;
    static Array<int> * * lastBeatMovedOn;
    static Array<int> * * lastOffbeatMovedOn;
    static Array<int> * * lastBeatMissed;
    static Array<int> * * punishmentBeatToSkip;
    static Array<int> * * punishmentBeatToSkipQueue;
    static Array<bool> * * keysHitLastFrame;
    static Array<bool> * * keysHit2FramesAgo;
    static int * lastBeatSkippedFlyaway;

    // Wrappers
    inline static void Init() { ptr::Init(); }
    inline static void ResetMovementCounters() { ptr::ResetMovementCounters(); }
    inline static void Update() { ptr::Update(); }
    inline static int KeyWasHit(int keyID) { return ptr::KeyWasHit(keyID); }
    inline static bool IsRedefined(int key) { return ptr::IsRedefined(key); }
    inline static List25 * GetDirectionsHit(int playerNum, bool takeReplayIntoAccount) { return ptr::GetDirectionsHit(playerNum, takeReplayIntoAccount); }
    inline static void UpdateKeysHit() { ptr::UpdateKeysHit(); }
    inline static bool _IsPlayerWithinMovementLeeway() { return ptr::_IsPlayerWithinMovementLeeway(); }
    inline static String * GetRedefineKeyText() { return ptr::GetRedefineKeyText(); }
    inline static void SpawnDebugItem(String * type) { ptr::SpawnDebugItem(type); }
    inline static void _Autocalibrate(bool arg1) { ptr::_Autocalibrate(arg1); }
    inline static void HandleMovementKeys() { ptr::HandleMovementKeys(); }
    inline static bool GameUpdate() { return ptr::GameUpdate(); }
    inline static String * GetDefaultHUDText(int moveDir, int num) { return ptr::GetDefaultHUDText(moveDir, num); }
    inline static String * GetKeyName(int val, bool forHud, int num, int moveDir) { return ptr::GetKeyName(val, forHud, num, moveDir); }
    inline static String * GetTextForHUD(int playerNum, int moveDir, int num) { return ptr::GetTextForHUD(playerNum, moveDir, num); }
    inline static String * GetKeyNameBigText(int val) { return ptr::GetKeyNameBigText(val); }
    inline static String * GetUpDownText() { return ptr::GetUpDownText(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static void (*Init)();
        static void (*ResetMovementCounters)();
        static void (*Update)();
        static int (*KeyWasHit)(int keyID);
        static bool (*IsRedefined)(int key);
        static List25 * (*GetDirectionsHit)(int playerNum, bool takeReplayIntoAccount);
        static void (*UpdateKeysHit)();
        static bool (*_IsPlayerWithinMovementLeeway)();
        static String * (*GetRedefineKeyText)();
        static void (*SpawnDebugItem)(String * type);
        static void (*_Autocalibrate)(bool arg1);
        static void (*HandleMovementKeys)();
        static bool (*GameUpdate)();
        static String * (*GetDefaultHUDText)(int moveDir, int num);
        static String * (*GetKeyName)(int val, bool forHud, int num, int moveDir);
        static String * (*GetTextForHUD)(int playerNum, int moveDir, int num);
        static String * (*GetKeyNameBigText)(int val);
        static String * (*GetUpDownText)();
        static void (*_mark)();
    };
};

#ifdef _WIN32
inline ControllerPopUp * * Input::popUpController = (ControllerPopUp* *) 0x835784;
inline int * Input::popupFrame = (int*) 0x835780;
inline Array<bool> * * Input::stickLeft = (Array<bool>* *) 0x833f0c;
inline Array<bool> * * Input::stickRight = (Array<bool>* *) 0x833f10;
inline Array<bool> * * Input::stickUp = (Array<bool>* *) 0x833f14;
inline Array<bool> * * Input::stickDown = (Array<bool>* *) 0x833f18;
inline Array<float> * * Input::lastJoyX = (Array<float>* *) 0x833f1c;
inline Array<float> * * Input::lastJoyY = (Array<float>* *) 0x833f20;
inline Array<bool> * * Input::stickLeft2 = (Array<bool>* *) 0x833f24;
inline Array<bool> * * Input::stickRight2 = (Array<bool>* *) 0x833f28;
inline Array<bool> * * Input::stickUp2 = (Array<bool>* *) 0x833f2c;
inline Array<bool> * * Input::stickDown2 = (Array<bool>* *) 0x833f30;
inline Array<float> * * Input::lastJoyX2 = (Array<float>* *) 0x833f34;
inline Array<float> * * Input::lastJoyY2 = (Array<float>* *) 0x833f38;
inline Array<int> * * Input::movementBuffer = (Array<int>* *) 0x833f3c;
inline Array<int> * * Input::movementBufferFrame = (Array<int>* *) 0x833f40;
inline Array<int> * * Input::offbeatMovementBuffer = (Array<int>* *) 0x833f44;
inline Array<int> * * Input::offbeatMovementBufferFrame = (Array<int>* *) 0x833f48;
inline Array<int> * * Input::lastBeatMovedOn = (Array<int>* *) 0x833f4c;
inline Array<int> * * Input::lastOffbeatMovedOn = (Array<int>* *) 0x833f50;
inline Array<int> * * Input::lastBeatMissed = (Array<int>* *) 0x833f54;
inline Array<int> * * Input::punishmentBeatToSkip = (Array<int>* *) 0x833f58;
inline Array<int> * * Input::punishmentBeatToSkipQueue = (Array<int>* *) 0x833f5c;
inline Array<bool> * * Input::keysHitLastFrame = (Array<bool>* *) 0x833f60;
inline Array<bool> * * Input::keysHit2FramesAgo = (Array<bool>* *) 0x833f64;
inline int * Input::lastBeatSkippedFlyaway = (int*) 0x83577c;

inline void (*Input::ptr::Init)() = (void (*)()) 0x557440;
inline void (*Input::ptr::ResetMovementCounters)() = (void (*)()) 0x557580;
inline void (*Input::ptr::Update)() = (void (*)()) 0x557670;
inline int (*Input::ptr::KeyWasHit)(int keyID) = (int (*)(int keyID)) 0x557e50;
inline bool (*Input::ptr::IsRedefined)(int key) = (bool (*)(int key)) 0x558170;
inline List25 * (*Input::ptr::GetDirectionsHit)(int playerNum, bool takeReplayIntoAccount) = (List25 * (*)(int playerNum, bool takeReplayIntoAccount)) 0x558410;
inline void (*Input::ptr::UpdateKeysHit)() = (void (*)()) 0x558de0;
inline bool (*Input::ptr::_IsPlayerWithinMovementLeeway)() = (bool (*)()) 0x0;
inline String * (*Input::ptr::GetRedefineKeyText)() = (String * (*)()) 0x558e20;
inline void (*Input::ptr::SpawnDebugItem)(String * type) = (void (*)(String * type)) 0x558ec0;
inline void (*Input::ptr::_Autocalibrate)(bool arg1) = (void (*)(bool arg1)) 0x0;
inline void (*Input::ptr::HandleMovementKeys)() = (void (*)()) 0x558f80;
inline bool (*Input::ptr::GameUpdate)() = (bool (*)()) 0x55b940;
inline String * (*Input::ptr::GetDefaultHUDText)(int moveDir, int num) = (String * (*)(int moveDir, int num)) 0x567200;
inline String * (*Input::ptr::GetKeyName)(int val, bool forHud, int num, int moveDir) = (String * (*)(int val, bool forHud, int num, int moveDir)) 0x567410;
inline String * (*Input::ptr::GetTextForHUD)(int playerNum, int moveDir, int num) = (String * (*)(int playerNum, int moveDir, int num)) 0x5699d0;
inline String * (*Input::ptr::GetKeyNameBigText)(int val) = (String * (*)(int val)) 0x569a70;
inline String * (*Input::ptr::GetUpDownText)() = (String * (*)()) 0x569c40;
inline void (*Input::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__
inline ControllerPopUp * * Input::popUpController = (ControllerPopUp* *) 0x856a754;
inline int * Input::popupFrame = (int*) 0x856a750;
inline Array<bool> * * Input::stickLeft = (Array<bool>* *) 0x856a74c;
inline Array<bool> * * Input::stickRight = (Array<bool>* *) 0x856a748;
inline Array<bool> * * Input::stickUp = (Array<bool>* *) 0x856a744;
inline Array<bool> * * Input::stickDown = (Array<bool>* *) 0x856a740;
inline Array<float> * * Input::lastJoyX = (Array<float>* *) 0x856a73c;
inline Array<float> * * Input::lastJoyY = (Array<float>* *) 0x856a738;
inline Array<bool> * * Input::stickLeft2 = (Array<bool>* *) 0x856a734;
inline Array<bool> * * Input::stickRight2 = (Array<bool>* *) 0x856a730;
inline Array<bool> * * Input::stickUp2 = (Array<bool>* *) 0x856a72c;
inline Array<bool> * * Input::stickDown2 = (Array<bool>* *) 0x856a728;
inline Array<float> * * Input::lastJoyX2 = (Array<float>* *) 0x856a724;
inline Array<float> * * Input::lastJoyY2 = (Array<float>* *) 0x856a720;
inline Array<int> * * Input::movementBuffer = (Array<int>* *) 0x856a71c;
inline Array<int> * * Input::movementBufferFrame = (Array<int>* *) 0x856a718;
inline Array<int> * * Input::offbeatMovementBuffer = (Array<int>* *) 0x856a714;
inline Array<int> * * Input::offbeatMovementBufferFrame = (Array<int>* *) 0x856a710;
inline Array<int> * * Input::lastBeatMovedOn = (Array<int>* *) 0x856a70c;
inline Array<int> * * Input::lastOffbeatMovedOn = (Array<int>* *) 0x856a708;
inline Array<int> * * Input::lastBeatMissed = (Array<int>* *) 0x856a704;
inline Array<int> * * Input::punishmentBeatToSkip = (Array<int>* *) 0x856a700;
inline Array<int> * * Input::punishmentBeatToSkipQueue = (Array<int>* *) 0x856a6fc;
inline Array<bool> * * Input::keysHitLastFrame = (Array<bool>* *) 0x856a6f8;
inline Array<bool> * * Input::keysHit2FramesAgo = (Array<bool>* *) 0x856a6f4;
inline int * Input::lastBeatSkippedFlyaway = (int*) 0x856a6f0;

inline void (*Input::ptr::Init)() = (void (*)()) 0x8151800;
inline void (*Input::ptr::ResetMovementCounters)() = (void (*)()) 0x8151b70;
inline void (*Input::ptr::Update)() = (void (*)()) 0x8365f60;
inline int (*Input::ptr::KeyWasHit)(int keyID) = (int (*)(int keyID)) 0x8151c70;
inline bool (*Input::ptr::IsRedefined)(int key) = (bool (*)(int key)) 0x8151cf0;
inline List25 * (*Input::ptr::GetDirectionsHit)(int playerNum, bool takeReplayIntoAccount) = (List25 * (*)(int playerNum, bool takeReplayIntoAccount)) 0x8265220;
inline void (*Input::ptr::UpdateKeysHit)() = (void (*)()) 0x8152400;
inline bool (*Input::ptr::_IsPlayerWithinMovementLeeway)() = (bool (*)()) 0x8257ca0;
inline String * (*Input::ptr::GetRedefineKeyText)() = (String * (*)()) 0x8152450;
inline void (*Input::ptr::SpawnDebugItem)(String * type) = (void (*)(String * type)) 0x82a1250;
inline void (*Input::ptr::_Autocalibrate)(bool arg1) = (void (*)(bool arg1)) 0x8256ee0;
inline void (*Input::ptr::HandleMovementKeys)() = (void (*)()) 0x8341130;
inline bool (*Input::ptr::GameUpdate)() = (bool (*)()) 0x83e7c20;
inline String * (*Input::ptr::GetDefaultHUDText)(int moveDir, int num) = (String * (*)(int moveDir, int num)) 0x8152480;
inline String * (*Input::ptr::GetKeyName)(int val, bool forHud, int num, int moveDir) = (String * (*)(int val, bool forHud, int num, int moveDir)) 0x81526c0;
inline String * (*Input::ptr::GetTextForHUD)(int playerNum, int moveDir, int num) = (String * (*)(int playerNum, int moveDir, int num)) 0x81569d0;
inline String * (*Input::ptr::GetKeyNameBigText)(int val) = (String * (*)(int val)) 0x8156a60;
inline String * (*Input::ptr::GetUpDownText)() = (String * (*)()) 0x8156ba0;
inline void (*Input::ptr::_mark)() = (void (*)()) 0x806f790;
#endif
#endif
