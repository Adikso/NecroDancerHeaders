// Generated automatically. Do not edit!
#ifndef _ControllerLeaderboardSelect_
#define _ControllerLeaderboardSelect_
class ControllerGame;
class GuiBorder;
class OptionList;
class Sprite;
class TextLabel;
class TextSprite;
#include "Controller.hpp"

class ControllerLeaderboardSelect : public Controller  {
public:
    ControllerGame * cGame;
    Sprite * overlayBlack;
    TextSprite * pausedText;
    OptionList * gui;
    TextLabel * dailyText;
    TextLabel * hardcoreText;
    TextLabel * speedrunText;
    TextLabel * seededText;
    TextLabel * seededSpeedrunText;
    TextLabel * exitText;
    GuiBorder * border;

    // Wrappers
    ControllerLeaderboardSelect(ControllerGame * game) {
        ptr::CSTR_ControllerLeaderboardSelect(this);
        ptr::New(this, game);
    }

    inline ControllerLeaderboardSelect * New(ControllerGame * game) { return ptr::New(this, game); }
    inline ControllerLeaderboardSelect * _new2() { return ptr::_new2(); }
    inline void _Update() { ptr::_Update(); }
    inline void Render() { ptr::Render(this); }
    inline void _RegainFocus() { ptr::_RegainFocus(); }
    inline void GUICallback(int index, bool left) { ptr::GUICallback(this, index, left); }
    inline void Destructor() { ptr::Destructor(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static ControllerLeaderboardSelect * (*New)(ControllerLeaderboardSelect * self, ControllerGame * game);
        static ControllerLeaderboardSelect * (*_new2)();
        static void (*_Update)();
        static void (*Render)(ControllerLeaderboardSelect * self);
        static void (*_RegainFocus)();
        static void (*GUICallback)(ControllerLeaderboardSelect * self, int index, bool left);
        static void (*Destructor)(ControllerLeaderboardSelect * self);
        static void (*mark)(ControllerLeaderboardSelect * self);
        static void (*CSTR_ControllerLeaderboardSelect)(ControllerLeaderboardSelect * self);
    };
};

#ifdef _WIN32

inline ControllerLeaderboardSelect * (*ControllerLeaderboardSelect::ptr::New)(ControllerLeaderboardSelect * self, ControllerGame * game) = (ControllerLeaderboardSelect * (*)(ControllerLeaderboardSelect * self, ControllerGame * game)) 0x693050;
inline ControllerLeaderboardSelect * (*ControllerLeaderboardSelect::ptr::_new2)() = (ControllerLeaderboardSelect * (*)()) 0x0;
inline void (*ControllerLeaderboardSelect::ptr::_Update)() = (void (*)()) 0x0;
inline void (*ControllerLeaderboardSelect::ptr::Render)(ControllerLeaderboardSelect * self) = (void (*)(ControllerLeaderboardSelect * self)) 0x6935b0;
inline void (*ControllerLeaderboardSelect::ptr::_RegainFocus)() = (void (*)()) 0x0;
inline void (*ControllerLeaderboardSelect::ptr::GUICallback)(ControllerLeaderboardSelect * self, int index, bool left) = (void (*)(ControllerLeaderboardSelect * self, int index, bool left)) 0x6938b0;
inline void (*ControllerLeaderboardSelect::ptr::Destructor)(ControllerLeaderboardSelect * self) = (void (*)(ControllerLeaderboardSelect * self)) 0x693a80;
inline void (*ControllerLeaderboardSelect::ptr::mark)(ControllerLeaderboardSelect * self) = (void (*)(ControllerLeaderboardSelect * self)) 0x693ac0;
inline void (*ControllerLeaderboardSelect::ptr::CSTR_ControllerLeaderboardSelect)(ControllerLeaderboardSelect * self) = (void (*)(ControllerLeaderboardSelect * self)) 0x692bc0;
#endif

#ifdef __linux__

inline ControllerLeaderboardSelect * (*ControllerLeaderboardSelect::ptr::New)(ControllerLeaderboardSelect * self, ControllerGame * game) = (ControllerLeaderboardSelect * (*)(ControllerLeaderboardSelect * self, ControllerGame * game)) 0x81e7150;
inline ControllerLeaderboardSelect * (*ControllerLeaderboardSelect::ptr::_new2)() = (ControllerLeaderboardSelect * (*)()) 0x81e7700;
inline void (*ControllerLeaderboardSelect::ptr::_Update)() = (void (*)()) 0x8079870;
inline void (*ControllerLeaderboardSelect::ptr::Render)(ControllerLeaderboardSelect * self) = (void (*)(ControllerLeaderboardSelect * self)) 0x80c6850;
inline void (*ControllerLeaderboardSelect::ptr::_RegainFocus)() = (void (*)()) 0x8079890;
inline void (*ControllerLeaderboardSelect::ptr::GUICallback)(ControllerLeaderboardSelect * self, int index, bool left) = (void (*)(ControllerLeaderboardSelect * self, int index, bool left)) 0x83e2cc0;
inline void (*ControllerLeaderboardSelect::ptr::Destructor)(ControllerLeaderboardSelect * self) = (void (*)(ControllerLeaderboardSelect * self)) 0x80798a0;
inline void (*ControllerLeaderboardSelect::ptr::mark)(ControllerLeaderboardSelect * self) = (void (*)(ControllerLeaderboardSelect * self)) 0x80a88b0;
inline void (*ControllerLeaderboardSelect::ptr::CSTR_ControllerLeaderboardSelect)(ControllerLeaderboardSelect * self) = (void (*)(ControllerLeaderboardSelect * self)) 0x81e6bd0;
#endif
#endif
