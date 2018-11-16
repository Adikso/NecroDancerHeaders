// Generated automatically. Do not edit!
#ifndef _ControllerPause_
#define _ControllerPause_
class ControllerGame;
class GuiBorder;
class OptionList;
class Sprite;
class TextLabel;
class TextSprite;
#include "Controller.hpp"

class ControllerPause : public Controller  {
public:
    ControllerGame * cGame;
    bool quickRestartActive;
    bool quitToLobbyActive;
    bool exitActive;
    TextLabel * lobbyText;
    Sprite * overlayBlack;
    TextSprite * pausedText;
    TextSprite * seedText;
    TextSprite * lowPercentText;
    OptionList * gui;
    TextLabel * continueText;
    TextLabel * leaderboardsText;
    TextLabel * replaysText;
    TextLabel * optionsText;
    TextLabel * musicText;
    TextLabel * modsText;
    TextLabel * quickRestartText;
    TextLabel * exitText;
    GuiBorder * border;

    // Wrappers
    ControllerPause(ControllerGame * game) {
        ptr::CSTR_ControllerPause(this);
        ptr::New(this, game);
    }

    inline ControllerPause * New(ControllerGame * game) { return ptr::New(this, game); }
    inline ControllerPause * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline void _RegainFocus() { ptr::_RegainFocus(); }
    inline virtual void ExitGame() { ptr::ExitGame(this); }
    inline void GUICallback(int index, bool left) { ptr::GUICallback(this, index, left); }
    inline void Destructor() { ptr::Destructor(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static ControllerPause * (*New)(ControllerPause * self, ControllerGame * game);
        static ControllerPause * (*_new2)();
        static void (*Update)(ControllerPause * self);
        static void (*Render)(ControllerPause * self);
        static void (*_RegainFocus)();
        static void (*ExitGame)(ControllerPause * self);
        static void (*GUICallback)(ControllerPause * self, int index, bool left);
        static void (*Destructor)(ControllerPause * self);
        static void (*mark)(ControllerPause * self);
        static void (*CSTR_ControllerPause)(ControllerPause * self);
    };
};

#ifdef _WIN32

inline ControllerPause * (*ControllerPause::ptr::New)(ControllerPause * self, ControllerGame * game) = (ControllerPause * (*)(ControllerPause * self, ControllerGame * game)) 0x68a250;
inline ControllerPause * (*ControllerPause::ptr::_new2)() = (ControllerPause * (*)()) 0x0;
inline void (*ControllerPause::ptr::Update)(ControllerPause * self) = (void (*)(ControllerPause * self)) 0x68a620;
inline void (*ControllerPause::ptr::Render)(ControllerPause * self) = (void (*)(ControllerPause * self)) 0x68a640;
inline void (*ControllerPause::ptr::_RegainFocus)() = (void (*)()) 0x0;
inline void (*ControllerPause::ptr::ExitGame)(ControllerPause * self) = (void (*)(ControllerPause * self)) 0x68ab40;
inline void (*ControllerPause::ptr::GUICallback)(ControllerPause * self, int index, bool left) = (void (*)(ControllerPause * self, int index, bool left)) 0x68ac10;
inline void (*ControllerPause::ptr::Destructor)(ControllerPause * self) = (void (*)(ControllerPause * self)) 0x68ae70;
inline void (*ControllerPause::ptr::mark)(ControllerPause * self) = (void (*)(ControllerPause * self)) 0x68af00;
inline void (*ControllerPause::ptr::CSTR_ControllerPause)(ControllerPause * self) = (void (*)(ControllerPause * self)) 0x689b70;
#endif

#ifdef __linux__

inline ControllerPause * (*ControllerPause::ptr::New)(ControllerPause * self, ControllerGame * game) = (ControllerPause * (*)(ControllerPause * self, ControllerGame * game)) 0x82313e0;
inline ControllerPause * (*ControllerPause::ptr::_new2)() = (ControllerPause * (*)()) 0x81e23a0;
inline void (*ControllerPause::ptr::Update)(ControllerPause * self) = (void (*)(ControllerPause * self)) 0x83148c0;
inline void (*ControllerPause::ptr::Render)(ControllerPause * self) = (void (*)(ControllerPause * self)) 0x80c6b90;
inline void (*ControllerPause::ptr::_RegainFocus)() = (void (*)()) 0x8078ba0;
inline void (*ControllerPause::ptr::ExitGame)(ControllerPause * self) = (void (*)(ControllerPause * self)) 0x830a0d0;
inline void (*ControllerPause::ptr::GUICallback)(ControllerPause * self, int index, bool left) = (void (*)(ControllerPause * self, int index, bool left)) 0x8363ef0;
inline void (*ControllerPause::ptr::Destructor)(ControllerPause * self) = (void (*)(ControllerPause * self)) 0x8078bb0;
inline void (*ControllerPause::ptr::mark)(ControllerPause * self) = (void (*)(ControllerPause * self)) 0x80a8c40;
inline void (*ControllerPause::ptr::CSTR_ControllerPause)(ControllerPause * self) = (void (*)(ControllerPause * self)) 0x81e1a00;
#endif
#endif
