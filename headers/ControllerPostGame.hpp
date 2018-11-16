// Generated automatically. Do not edit!
#ifndef _ControllerPostGame_
#define _ControllerPostGame_
class ControllerGame;
class OptionList;
class Sprite;
class TextLabel;
class TextSprite;
#include "Controller.hpp"

class ControllerPostGame : public Controller  {
public:
    ControllerGame * cGame;
    bool playerDied;
    bool isDaily;
    bool isHardcore;
    bool isDeathless;
    Sprite * overlayBlack;
    TextSprite * headerText;
    TextSprite * resultImage;
    TextSprite * scoreImage;
    TextSprite * speedImage;
    TextSprite * deathlessImage;
    OptionList * gui;
    TextLabel * lobbyText;
    TextLabel * replayText;
    TextLabel * quickRestartText;
    TextLabel * highscoreText;
    TextLabel * speedrunText;
    TextSprite * diamondText;
    TextSprite * coinText;
    TextSprite * seedText;
    TextSprite * lowPercentText;

    // Wrappers
    ControllerPostGame(ControllerGame * game, bool hardcore, bool daily, bool allChars, bool deathless, bool died, int coinVal, int timeVal) {
        ptr::CSTR_ControllerPostGame(this);
        ptr::New(this, game, hardcore, daily, allChars, deathless, died, coinVal, timeVal);
    }

    inline ControllerPostGame * New(ControllerGame * game, bool hardcore, bool daily, bool allChars, bool deathless, bool died, int coinVal, int timeVal) { return ptr::New(this, game, hardcore, daily, allChars, deathless, died, coinVal, timeVal); }
    inline ControllerPostGame * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline void _RegainFocus() { ptr::_RegainFocus(); }
    inline void GUICallback(int index, bool left) { ptr::GUICallback(this, index, left); }
    inline void Destructor() { ptr::Destructor(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static ControllerPostGame * (*New)(ControllerPostGame * self, ControllerGame * game, bool hardcore, bool daily, bool allChars, bool deathless, bool died, int coinVal, int timeVal);
        static ControllerPostGame * (*_new2)();
        static void (*Update)(ControllerPostGame * self);
        static void (*Render)(ControllerPostGame * self);
        static void (*_RegainFocus)();
        static void (*GUICallback)(ControllerPostGame * self, int index, bool left);
        static void (*Destructor)(ControllerPostGame * self);
        static void (*mark)(ControllerPostGame * self);
        static void (*CSTR_ControllerPostGame)(ControllerPostGame * self);
    };
};

#ifdef _WIN32

inline ControllerPostGame * (*ControllerPostGame::ptr::New)(ControllerPostGame * self, ControllerGame * game, bool hardcore, bool daily, bool allChars, bool deathless, bool died, int coinVal, int timeVal) = (ControllerPostGame * (*)(ControllerPostGame * self, ControllerGame * game, bool hardcore, bool daily, bool allChars, bool deathless, bool died, int coinVal, int timeVal)) 0x661d20;
inline ControllerPostGame * (*ControllerPostGame::ptr::_new2)() = (ControllerPostGame * (*)()) 0x0;
inline void (*ControllerPostGame::ptr::Update)(ControllerPostGame * self) = (void (*)(ControllerPostGame * self)) 0x6628e0;
inline void (*ControllerPostGame::ptr::Render)(ControllerPostGame * self) = (void (*)(ControllerPostGame * self)) 0x6628f0;
inline void (*ControllerPostGame::ptr::_RegainFocus)() = (void (*)()) 0x0;
inline void (*ControllerPostGame::ptr::GUICallback)(ControllerPostGame * self, int index, bool left) = (void (*)(ControllerPostGame * self, int index, bool left)) 0x663160;
inline void (*ControllerPostGame::ptr::Destructor)(ControllerPostGame * self) = (void (*)(ControllerPostGame * self)) 0x6636b0;
inline void (*ControllerPostGame::ptr::mark)(ControllerPostGame * self) = (void (*)(ControllerPostGame * self)) 0x663730;
inline void (*ControllerPostGame::ptr::CSTR_ControllerPostGame)(ControllerPostGame * self) = (void (*)(ControllerPostGame * self)) 0x661830;
#endif

#ifdef __linux__

inline ControllerPostGame * (*ControllerPostGame::ptr::New)(ControllerPostGame * self, ControllerGame * game, bool hardcore, bool daily, bool allChars, bool deathless, bool died, int coinVal, int timeVal) = (ControllerPostGame * (*)(ControllerPostGame * self, ControllerGame * game, bool hardcore, bool daily, bool allChars, bool deathless, bool died, int coinVal, int timeVal)) 0x82455b0;
inline ControllerPostGame * (*ControllerPostGame::ptr::_new2)() = (ControllerPostGame * (*)()) 0x81d79b0;
inline void (*ControllerPostGame::ptr::Update)(ControllerPostGame * self) = (void (*)(ControllerPostGame * self)) 0x83133e0;
inline void (*ControllerPostGame::ptr::Render)(ControllerPostGame * self) = (void (*)(ControllerPostGame * self)) 0x84227d0;
inline void (*ControllerPostGame::ptr::_RegainFocus)() = (void (*)()) 0x80777a0;
inline void (*ControllerPostGame::ptr::GUICallback)(ControllerPostGame * self, int index, bool left) = (void (*)(ControllerPostGame * self, int index, bool left)) 0x83e2e90;
inline void (*ControllerPostGame::ptr::Destructor)(ControllerPostGame * self) = (void (*)(ControllerPostGame * self)) 0x80777b0;
inline void (*ControllerPostGame::ptr::mark)(ControllerPostGame * self) = (void (*)(ControllerPostGame * self)) 0x80a93c0;
inline void (*ControllerPostGame::ptr::CSTR_ControllerPostGame)(ControllerPostGame * self) = (void (*)(ControllerPostGame * self)) 0x81d70e0;
#endif
#endif
