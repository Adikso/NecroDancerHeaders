// Generated automatically. Do not edit!
#ifndef _ControllerMainMenu_
#define _ControllerMainMenu_
class ControllerPopUp;
class Sprite;
class String;
class TextSprite;
#include "Controller.hpp"

class ControllerMainMenu : public Controller  {
public:
    bool showCloudSavePopup;
    String * mainmenuSongName;
    String * mainmenuTitlescreen;
    Sprite * mainMenu;
    Sprite * continueImage;
    Sprite * alphaWarning;
    bool haveShownAlphaWarning;
    Sprite * seizureWarning;
    bool haveShownSeizureWarning;
    bool passingToCalibration;
    bool hasSentToGameplay;
    ControllerPopUp * popUpController;
    bool showingAlphaWarning;
    bool showingSeizureWarning;
    bool loaded;
    bool gameLoadedAndStatsCallbackReceived;
    int startedWaitingForStatsCallback;
    int firstRun;
    bool gameLoaded;
    TextSprite * versionImage;
    TextSprite * loadingImage;
    static bool * waitingForScore;

    // Wrappers
    ControllerMainMenu() {
        ptr::CSTR_ControllerMainMenu(this);
        ptr::New(this);
    }

    inline ControllerMainMenu * New() { return ptr::New(this); }
    inline virtual void PassFocusToNextController() { ptr::PassFocusToNextController(this); }
    inline void RegainFocus() { ptr::RegainFocus(this); }
    inline virtual void LoadGame() { ptr::LoadGame(this); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline void Destructor() { ptr::Destructor(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static ControllerMainMenu * (*New)(ControllerMainMenu * self);
        static void (*PassFocusToNextController)(ControllerMainMenu * self);
        static void (*RegainFocus)(ControllerMainMenu * self);
        static void (*LoadGame)(ControllerMainMenu * self);
        static void (*Update)(ControllerMainMenu * self);
        static void (*Render)(ControllerMainMenu * self);
        static void (*Destructor)(ControllerMainMenu * self);
        static void (*mark)(ControllerMainMenu * self);
        static void (*CSTR_ControllerMainMenu)(ControllerMainMenu * self);
    };
};

#ifdef _WIN32
inline bool * ControllerMainMenu::waitingForScore = (bool*) 0x835bc1;

inline ControllerMainMenu * (*ControllerMainMenu::ptr::New)(ControllerMainMenu * self) = (ControllerMainMenu * (*)(ControllerMainMenu * self)) 0x449480;
inline void (*ControllerMainMenu::ptr::PassFocusToNextController)(ControllerMainMenu * self) = (void (*)(ControllerMainMenu * self)) 0x449e40;
inline void (*ControllerMainMenu::ptr::RegainFocus)(ControllerMainMenu * self) = (void (*)(ControllerMainMenu * self)) 0x449f70;
inline void (*ControllerMainMenu::ptr::LoadGame)(ControllerMainMenu * self) = (void (*)(ControllerMainMenu * self)) 0x44a0b0;
inline void (*ControllerMainMenu::ptr::Update)(ControllerMainMenu * self) = (void (*)(ControllerMainMenu * self)) 0x44ae10;
inline void (*ControllerMainMenu::ptr::Render)(ControllerMainMenu * self) = (void (*)(ControllerMainMenu * self)) 0x44b350;
inline void (*ControllerMainMenu::ptr::Destructor)(ControllerMainMenu * self) = (void (*)(ControllerMainMenu * self)) 0x44b550;
inline void (*ControllerMainMenu::ptr::mark)(ControllerMainMenu * self) = (void (*)(ControllerMainMenu * self)) 0x44b590;
inline void (*ControllerMainMenu::ptr::CSTR_ControllerMainMenu)(ControllerMainMenu * self) = (void (*)(ControllerMainMenu * self)) 0x449140;
#endif

#ifdef __linux__
inline bool * ControllerMainMenu::waitingForScore = (bool*) 0x856ab14;

inline ControllerMainMenu * (*ControllerMainMenu::ptr::New)(ControllerMainMenu * self) = (ControllerMainMenu * (*)(ControllerMainMenu * self)) 0x83e04c0;
inline void (*ControllerMainMenu::ptr::PassFocusToNextController)(ControllerMainMenu * self) = (void (*)(ControllerMainMenu * self)) 0x8365520;
inline void (*ControllerMainMenu::ptr::RegainFocus)(ControllerMainMenu * self) = (void (*)(ControllerMainMenu * self)) 0x8378750;
inline void (*ControllerMainMenu::ptr::LoadGame)(ControllerMainMenu * self) = (void (*)(ControllerMainMenu * self)) 0x8315560;
inline void (*ControllerMainMenu::ptr::Update)(ControllerMainMenu * self) = (void (*)(ControllerMainMenu * self)) 0x83d9890;
inline void (*ControllerMainMenu::ptr::Render)(ControllerMainMenu * self) = (void (*)(ControllerMainMenu * self)) 0x8422540;
inline void (*ControllerMainMenu::ptr::Destructor)(ControllerMainMenu * self) = (void (*)(ControllerMainMenu * self)) 0x806d9e0;
inline void (*ControllerMainMenu::ptr::mark)(ControllerMainMenu * self) = (void (*)(ControllerMainMenu * self)) 0x80a4d10;
inline void (*ControllerMainMenu::ptr::CSTR_ControllerMainMenu)(ControllerMainMenu * self) = (void (*)(ControllerMainMenu * self)) 0x8147720;
#endif
#endif
