// Generated automatically. Do not edit!
#ifndef _ControllerGame_
#define _ControllerGame_
template<class T> class Array;
class Bouncer;
class String;
class TextSprite;
#include "Controller.hpp"

class ControllerGame : public Controller  {
public:
    bool specialScoreSubmit;
    Array<bool> * postDeathReplay;
    int postDeathFrame;
    int postDeathCounter;
    int coinVal;
    int timeVal;
    TextSprite * restartImage;
    TextSprite * scoresImage;
    TextSprite * scoresImage2;
    TextSprite * songEndedImage;
    TextSprite * songEndedImage2;
    Bouncer * restartBounce;
    TextSprite * replayInstructions;
    bool viewingLeaderboard;
    bool ignoreInput;
    int movementBufferFrame;
    int movementBuffer;
    int pendingScores;
    int originalNumScores;
    int score;
    int originalFailures;
    int scoreSubmitTime;
    TextSprite * speedrunImage;
    String * lastSpeedrunString;
    TextSprite * heartTransplantTimerImage;
    TextSprite * fpsImage;
    TextSprite * levelImage;

    // Wrappers
    ControllerGame() {
        ptr::CSTR_ControllerGame(this);
        ptr::New(this);
    }

    inline virtual void ResetPostDeathReplay() { ptr::ResetPostDeathReplay(this); }
    inline ControllerGame * New() { return ptr::New(this); }
    inline void RegainFocus() { ptr::RegainFocus(this); }
    inline void Update() { ptr::Update(this); }
    inline virtual bool ScoreSubmitFailed() { return ptr::ScoreSubmitFailed(this); }
    inline virtual void PrepareToSubmitScores(int numScores) { ptr::PrepareToSubmitScores(this, numScores); }
    inline void Render() { ptr::Render(this); }
    inline void Suspend() { ptr::Suspend(this); }
    inline void Destructor() { ptr::Destructor(this); }
    inline virtual void RenderPostGameReplay() { ptr::RenderPostGameReplay(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static void (*ResetPostDeathReplay)(ControllerGame * self);
        static ControllerGame * (*New)(ControllerGame * self);
        static void (*RegainFocus)(ControllerGame * self);
        static void (*Update)(ControllerGame * self);
        static bool (*ScoreSubmitFailed)(ControllerGame * self);
        static void (*PrepareToSubmitScores)(ControllerGame * self, int numScores);
        static void (*Render)(ControllerGame * self);
        static void (*Suspend)(ControllerGame * self);
        static void (*Destructor)(ControllerGame * self);
        static void (*RenderPostGameReplay)(ControllerGame * self);
        static void (*mark)(ControllerGame * self);
        static void (*CSTR_ControllerGame)(ControllerGame * self);
    };
};

#ifdef _WIN32

inline void (*ControllerGame::ptr::ResetPostDeathReplay)(ControllerGame * self) = (void (*)(ControllerGame * self)) 0x53d9d0;
inline ControllerGame * (*ControllerGame::ptr::New)(ControllerGame * self) = (ControllerGame * (*)(ControllerGame * self)) 0x53da90;
inline void (*ControllerGame::ptr::RegainFocus)(ControllerGame * self) = (void (*)(ControllerGame * self)) 0x53de40;
inline void (*ControllerGame::ptr::Update)(ControllerGame * self) = (void (*)(ControllerGame * self)) 0x53dfc0;
inline bool (*ControllerGame::ptr::ScoreSubmitFailed)(ControllerGame * self) = (bool (*)(ControllerGame * self)) 0x53ef20;
inline void (*ControllerGame::ptr::PrepareToSubmitScores)(ControllerGame * self, int numScores) = (void (*)(ControllerGame * self, int numScores)) 0x53ef50;
inline void (*ControllerGame::ptr::Render)(ControllerGame * self) = (void (*)(ControllerGame * self)) 0x53efa0;
inline void (*ControllerGame::ptr::Suspend)(ControllerGame * self) = (void (*)(ControllerGame * self)) 0x540fc0;
inline void (*ControllerGame::ptr::Destructor)(ControllerGame * self) = (void (*)(ControllerGame * self)) 0x5410c0;
inline void (*ControllerGame::ptr::RenderPostGameReplay)(ControllerGame * self) = (void (*)(ControllerGame * self)) 0x5410d0;
inline void (*ControllerGame::ptr::mark)(ControllerGame * self) = (void (*)(ControllerGame * self)) 0x541120;
inline void (*ControllerGame::ptr::CSTR_ControllerGame)(ControllerGame * self) = (void (*)(ControllerGame * self)) 0x53d520;
#endif

#ifdef __linux__

inline void (*ControllerGame::ptr::ResetPostDeathReplay)(ControllerGame * self) = (void (*)(ControllerGame * self)) 0x80d7490;
inline ControllerGame * (*ControllerGame::ptr::New)(ControllerGame * self) = (ControllerGame * (*)(ControllerGame * self)) 0x8364d90;
inline void (*ControllerGame::ptr::RegainFocus)(ControllerGame * self) = (void (*)(ControllerGame * self)) 0x8311d90;
inline void (*ControllerGame::ptr::Update)(ControllerGame * self) = (void (*)(ControllerGame * self)) 0x83fae80;
inline bool (*ControllerGame::ptr::ScoreSubmitFailed)(ControllerGame * self) = (bool (*)(ControllerGame * self)) 0x8081b40;
inline void (*ControllerGame::ptr::PrepareToSubmitScores)(ControllerGame * self, int numScores) = (void (*)(ControllerGame * self, int numScores)) 0x806f440;
inline void (*ControllerGame::ptr::Render)(ControllerGame * self) = (void (*)(ControllerGame * self)) 0x841f4c0;
inline void (*ControllerGame::ptr::Suspend)(ControllerGame * self) = (void (*)(ControllerGame * self)) 0x83148f0;
inline void (*ControllerGame::ptr::Destructor)(ControllerGame * self) = (void (*)(ControllerGame * self)) 0x83148b0;
inline void (*ControllerGame::ptr::RenderPostGameReplay)(ControllerGame * self) = (void (*)(ControllerGame * self)) 0x830a040;
inline void (*ControllerGame::ptr::mark)(ControllerGame * self) = (void (*)(ControllerGame * self)) 0x80a3900;
inline void (*ControllerGame::ptr::CSTR_ControllerGame)(ControllerGame * self) = (void (*)(ControllerGame * self)) 0x8147a80;
#endif
#endif
