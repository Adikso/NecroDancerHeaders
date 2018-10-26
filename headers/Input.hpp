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
ControllerPopUp * * Input::popUpController = (ControllerPopUp* *) 0x835784;
int * Input::popupFrame = (int*) 0x835780;
Array<bool> * * Input::stickLeft = (Array<bool>* *) 0x833f0c;
Array<bool> * * Input::stickRight = (Array<bool>* *) 0x833f10;
Array<bool> * * Input::stickUp = (Array<bool>* *) 0x833f14;
Array<bool> * * Input::stickDown = (Array<bool>* *) 0x833f18;
Array<float> * * Input::lastJoyX = (Array<float>* *) 0x833f1c;
Array<float> * * Input::lastJoyY = (Array<float>* *) 0x833f20;
Array<bool> * * Input::stickLeft2 = (Array<bool>* *) 0x833f24;
Array<bool> * * Input::stickRight2 = (Array<bool>* *) 0x833f28;
Array<bool> * * Input::stickUp2 = (Array<bool>* *) 0x833f2c;
Array<bool> * * Input::stickDown2 = (Array<bool>* *) 0x833f30;
Array<float> * * Input::lastJoyX2 = (Array<float>* *) 0x833f34;
Array<float> * * Input::lastJoyY2 = (Array<float>* *) 0x833f38;
Array<int> * * Input::movementBuffer = (Array<int>* *) 0x833f3c;
Array<int> * * Input::movementBufferFrame = (Array<int>* *) 0x833f40;
Array<int> * * Input::offbeatMovementBuffer = (Array<int>* *) 0x833f44;
Array<int> * * Input::offbeatMovementBufferFrame = (Array<int>* *) 0x833f48;
Array<int> * * Input::lastBeatMovedOn = (Array<int>* *) 0x833f4c;
Array<int> * * Input::lastOffbeatMovedOn = (Array<int>* *) 0x833f50;
Array<int> * * Input::lastBeatMissed = (Array<int>* *) 0x833f54;
Array<int> * * Input::punishmentBeatToSkip = (Array<int>* *) 0x833f58;
Array<int> * * Input::punishmentBeatToSkipQueue = (Array<int>* *) 0x833f5c;
Array<bool> * * Input::keysHitLastFrame = (Array<bool>* *) 0x833f60;
Array<bool> * * Input::keysHit2FramesAgo = (Array<bool>* *) 0x833f64;
int * Input::lastBeatSkippedFlyaway = (int*) 0x83577c;

void (*Input::ptr::Init)() = (void (*)()) 0x557440;
void (*Input::ptr::ResetMovementCounters)() = (void (*)()) 0x557580;
void (*Input::ptr::Update)() = (void (*)()) 0x557670;
int (*Input::ptr::KeyWasHit)(int keyID) = (int (*)(int keyID)) 0x557e50;
bool (*Input::ptr::IsRedefined)(int key) = (bool (*)(int key)) 0x558170;
List25 * (*Input::ptr::GetDirectionsHit)(int playerNum, bool takeReplayIntoAccount) = (List25 * (*)(int playerNum, bool takeReplayIntoAccount)) 0x558410;
void (*Input::ptr::UpdateKeysHit)() = (void (*)()) 0x558de0;
bool (*Input::ptr::_IsPlayerWithinMovementLeeway)() = (bool (*)()) 0x0;
String * (*Input::ptr::GetRedefineKeyText)() = (String * (*)()) 0x558e20;
void (*Input::ptr::SpawnDebugItem)(String * type) = (void (*)(String * type)) 0x558ec0;
void (*Input::ptr::_Autocalibrate)(bool arg1) = (void (*)(bool arg1)) 0x0;
void (*Input::ptr::HandleMovementKeys)() = (void (*)()) 0x558f80;
bool (*Input::ptr::GameUpdate)() = (bool (*)()) 0x55b940;
String * (*Input::ptr::GetDefaultHUDText)(int moveDir, int num) = (String * (*)(int moveDir, int num)) 0x567200;
String * (*Input::ptr::GetKeyName)(int val, bool forHud, int num, int moveDir) = (String * (*)(int val, bool forHud, int num, int moveDir)) 0x567410;
String * (*Input::ptr::GetTextForHUD)(int playerNum, int moveDir, int num) = (String * (*)(int playerNum, int moveDir, int num)) 0x5699d0;
String * (*Input::ptr::GetKeyNameBigText)(int val) = (String * (*)(int val)) 0x569a70;
String * (*Input::ptr::GetUpDownText)() = (String * (*)()) 0x569c40;
void (*Input::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__
ControllerPopUp * * Input::popUpController = (ControllerPopUp* *) 0x856a754;
int * Input::popupFrame = (int*) 0x856a750;
Array<bool> * * Input::stickLeft = (Array<bool>* *) 0x856a74c;
Array<bool> * * Input::stickRight = (Array<bool>* *) 0x856a748;
Array<bool> * * Input::stickUp = (Array<bool>* *) 0x856a744;
Array<bool> * * Input::stickDown = (Array<bool>* *) 0x856a740;
Array<float> * * Input::lastJoyX = (Array<float>* *) 0x856a73c;
Array<float> * * Input::lastJoyY = (Array<float>* *) 0x856a738;
Array<bool> * * Input::stickLeft2 = (Array<bool>* *) 0x856a734;
Array<bool> * * Input::stickRight2 = (Array<bool>* *) 0x856a730;
Array<bool> * * Input::stickUp2 = (Array<bool>* *) 0x856a72c;
Array<bool> * * Input::stickDown2 = (Array<bool>* *) 0x856a728;
Array<float> * * Input::lastJoyX2 = (Array<float>* *) 0x856a724;
Array<float> * * Input::lastJoyY2 = (Array<float>* *) 0x856a720;
Array<int> * * Input::movementBuffer = (Array<int>* *) 0x856a71c;
Array<int> * * Input::movementBufferFrame = (Array<int>* *) 0x856a718;
Array<int> * * Input::offbeatMovementBuffer = (Array<int>* *) 0x856a714;
Array<int> * * Input::offbeatMovementBufferFrame = (Array<int>* *) 0x856a710;
Array<int> * * Input::lastBeatMovedOn = (Array<int>* *) 0x856a70c;
Array<int> * * Input::lastOffbeatMovedOn = (Array<int>* *) 0x856a708;
Array<int> * * Input::lastBeatMissed = (Array<int>* *) 0x856a704;
Array<int> * * Input::punishmentBeatToSkip = (Array<int>* *) 0x856a700;
Array<int> * * Input::punishmentBeatToSkipQueue = (Array<int>* *) 0x856a6fc;
Array<bool> * * Input::keysHitLastFrame = (Array<bool>* *) 0x856a6f8;
Array<bool> * * Input::keysHit2FramesAgo = (Array<bool>* *) 0x856a6f4;
int * Input::lastBeatSkippedFlyaway = (int*) 0x856a6f0;

void (*Input::ptr::Init)() = (void (*)()) 0x8151800;
void (*Input::ptr::ResetMovementCounters)() = (void (*)()) 0x8151b70;
void (*Input::ptr::Update)() = (void (*)()) 0x8365f60;
int (*Input::ptr::KeyWasHit)(int keyID) = (int (*)(int keyID)) 0x8151c70;
bool (*Input::ptr::IsRedefined)(int key) = (bool (*)(int key)) 0x8151cf0;
List25 * (*Input::ptr::GetDirectionsHit)(int playerNum, bool takeReplayIntoAccount) = (List25 * (*)(int playerNum, bool takeReplayIntoAccount)) 0x8265220;
void (*Input::ptr::UpdateKeysHit)() = (void (*)()) 0x8152400;
bool (*Input::ptr::_IsPlayerWithinMovementLeeway)() = (bool (*)()) 0x8257ca0;
String * (*Input::ptr::GetRedefineKeyText)() = (String * (*)()) 0x8152450;
void (*Input::ptr::SpawnDebugItem)(String * type) = (void (*)(String * type)) 0x82a1250;
void (*Input::ptr::_Autocalibrate)(bool arg1) = (void (*)(bool arg1)) 0x8256ee0;
void (*Input::ptr::HandleMovementKeys)() = (void (*)()) 0x8341130;
bool (*Input::ptr::GameUpdate)() = (bool (*)()) 0x83e7c20;
String * (*Input::ptr::GetDefaultHUDText)(int moveDir, int num) = (String * (*)(int moveDir, int num)) 0x8152480;
String * (*Input::ptr::GetKeyName)(int val, bool forHud, int num, int moveDir) = (String * (*)(int val, bool forHud, int num, int moveDir)) 0x81526c0;
String * (*Input::ptr::GetTextForHUD)(int playerNum, int moveDir, int num) = (String * (*)(int playerNum, int moveDir, int num)) 0x81569d0;
String * (*Input::ptr::GetKeyNameBigText)(int val) = (String * (*)(int val)) 0x8156a60;
String * (*Input::ptr::GetUpDownText)() = (String * (*)()) 0x8156ba0;
void (*Input::ptr::_mark)() = (void (*)()) 0x806f790;
#endif
#endif
