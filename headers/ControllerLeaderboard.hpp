// Generated automatically. Do not edit!
#ifndef _ControllerLeaderboard_
#define _ControllerLeaderboard_
template<class T> class Array;
class Checkbox;
class ControllerGame;
class GuiBorder;
class LeaderboardRow;
class OptionList;
class Sprite;
class String;
class TextLabel;
class TextSprite;
#include "Controller.hpp"

class ControllerLeaderboard : public Controller  {
public:
    ControllerGame * cGame;
    bool isSpeedrun;
    bool isHardcore;
    bool isSeeded;
    bool isDaily;
    Sprite * overlayBlack;
    TextSprite * titleText;
    TextSprite * loadingText;
    Array<LeaderboardRow *> * leaderboardData;
    LeaderboardRow * leaderboardHeader;
    LeaderboardRow * leaderboardFooter;
    OptionList * gui;
    Checkbox * friendsOnlyBox;
    TextLabel * previousPageText;
    TextLabel * nextPageText;
    TextLabel * previousDayText;
    TextLabel * nextDayText;
    TextLabel * doneText;
    String * leaderboardBaseStr;
    int dayOffset;
    bool gettingPlayersScore;
    GuiBorder * border;
    TextSprite * subtitleText;
    int rankOffset;

    // Wrappers
    ControllerLeaderboard(ControllerGame * game, bool speed, bool hard, bool seeded) {
        ptr::CSTR_ControllerLeaderboard(this);
        ptr::New(this, game, speed, hard, seeded);
    }

    inline ControllerLeaderboard * New(ControllerGame * game, bool speed, bool hard, bool seeded) { return ptr::New(this, game, speed, hard, seeded); }
    inline ControllerLeaderboard * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline void _RegainFocus() { ptr::_RegainFocus(); }
    inline virtual void RefreshScores() { ptr::RefreshScores(this); }
    inline void GUICallback(int index, bool left) { ptr::GUICallback(this, index, left); }
    inline void Destructor() { ptr::Destructor(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static ControllerLeaderboard * (*New)(ControllerLeaderboard * self, ControllerGame * game, bool speed, bool hard, bool seeded);
        static ControllerLeaderboard * (*_new2)();
        static void (*Update)(ControllerLeaderboard * self);
        static void (*Render)(ControllerLeaderboard * self);
        static void (*_RegainFocus)();
        static void (*RefreshScores)(ControllerLeaderboard * self);
        static void (*GUICallback)(ControllerLeaderboard * self, int index, bool left);
        static void (*Destructor)(ControllerLeaderboard * self);
        static void (*mark)(ControllerLeaderboard * self);
        static void (*CSTR_ControllerLeaderboard)(ControllerLeaderboard * self);
    };
};

#ifdef _WIN32

ControllerLeaderboard * (*ControllerLeaderboard::ptr::New)(ControllerLeaderboard * self, ControllerGame * game, bool speed, bool hard, bool seeded) = (ControllerLeaderboard * (*)(ControllerLeaderboard * self, ControllerGame * game, bool speed, bool hard, bool seeded)) 0x68eb70;
ControllerLeaderboard * (*ControllerLeaderboard::ptr::_new2)() = (ControllerLeaderboard * (*)()) 0x0;
void (*ControllerLeaderboard::ptr::Update)(ControllerLeaderboard * self) = (void (*)(ControllerLeaderboard * self)) 0x68f420;
void (*ControllerLeaderboard::ptr::Render)(ControllerLeaderboard * self) = (void (*)(ControllerLeaderboard * self)) 0x68f430;
void (*ControllerLeaderboard::ptr::_RegainFocus)() = (void (*)()) 0x0;
void (*ControllerLeaderboard::ptr::RefreshScores)(ControllerLeaderboard * self) = (void (*)(ControllerLeaderboard * self)) 0x691a50;
void (*ControllerLeaderboard::ptr::GUICallback)(ControllerLeaderboard * self, int index, bool left) = (void (*)(ControllerLeaderboard * self, int index, bool left)) 0x691b80;
void (*ControllerLeaderboard::ptr::Destructor)(ControllerLeaderboard * self) = (void (*)(ControllerLeaderboard * self)) 0x692040;
void (*ControllerLeaderboard::ptr::mark)(ControllerLeaderboard * self) = (void (*)(ControllerLeaderboard * self)) 0x6920b0;
void (*ControllerLeaderboard::ptr::CSTR_ControllerLeaderboard)(ControllerLeaderboard * self) = (void (*)(ControllerLeaderboard * self)) 0x68e4b0;
#endif

#ifdef __linux__

ControllerLeaderboard * (*ControllerLeaderboard::ptr::New)(ControllerLeaderboard * self, ControllerGame * game, bool speed, bool hard, bool seeded) = (ControllerLeaderboard * (*)(ControllerLeaderboard * self, ControllerGame * game, bool speed, bool hard, bool seeded)) 0x83e1f30;
ControllerLeaderboard * (*ControllerLeaderboard::ptr::_new2)() = (ControllerLeaderboard * (*)()) 0x81e5950;
void (*ControllerLeaderboard::ptr::Update)(ControllerLeaderboard * self) = (void (*)(ControllerLeaderboard * self)) 0x80796e0;
void (*ControllerLeaderboard::ptr::Render)(ControllerLeaderboard * self) = (void (*)(ControllerLeaderboard * self)) 0x83fd980;
void (*ControllerLeaderboard::ptr::_RegainFocus)() = (void (*)()) 0x8079700;
void (*ControllerLeaderboard::ptr::RefreshScores)(ControllerLeaderboard * self) = (void (*)(ControllerLeaderboard * self)) 0x83e3760;
void (*ControllerLeaderboard::ptr::GUICallback)(ControllerLeaderboard * self, int index, bool left) = (void (*)(ControllerLeaderboard * self, int index, bool left)) 0x83fd550;
void (*ControllerLeaderboard::ptr::Destructor)(ControllerLeaderboard * self) = (void (*)(ControllerLeaderboard * self)) 0x8079710;
void (*ControllerLeaderboard::ptr::mark)(ControllerLeaderboard * self) = (void (*)(ControllerLeaderboard * self)) 0x80b2210;
void (*ControllerLeaderboard::ptr::CSTR_ControllerLeaderboard)(ControllerLeaderboard * self) = (void (*)(ControllerLeaderboard * self)) 0x81e6140;
#endif
#endif
