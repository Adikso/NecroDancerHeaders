// Generated automatically. Do not edit!
#ifndef _LeaderboardRow_
#define _LeaderboardRow_
class TextLabel;
class TextSprite;
#include "Object.hpp"

class LeaderboardRow : public Object  {
public:
    TextSprite * rankText;
    TextSprite * nameText;
    TextSprite * scoreText;
    TextSprite * zoneText;
    TextSprite * levelText;
    TextSprite * killedByText;
    TextLabel * replayText;
    bool addedToGUI;
    int replayVersion;

    // Wrappers
    LeaderboardRow() {
        ptr::CSTR_LeaderboardRow(this);
    }

    inline LeaderboardRow * _New() { return ptr::_New(); }
    inline virtual void Discard() { ptr::Discard(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static LeaderboardRow * (*_New)();
        static void (*Discard)(LeaderboardRow * self);
        static void (*mark)(LeaderboardRow * self);
        static void (*CSTR_LeaderboardRow)(LeaderboardRow * self);
    };
};

#ifdef _WIN32

inline LeaderboardRow * (*LeaderboardRow::ptr::_New)() = (LeaderboardRow * (*)()) 0x0;
inline void (*LeaderboardRow::ptr::Discard)(LeaderboardRow * self) = (void (*)(LeaderboardRow * self)) 0x692840;
inline void (*LeaderboardRow::ptr::mark)(LeaderboardRow * self) = (void (*)(LeaderboardRow * self)) 0x692880;
inline void (*LeaderboardRow::ptr::CSTR_LeaderboardRow)(LeaderboardRow * self) = (void (*)(LeaderboardRow * self)) 0x692590;
#endif

#ifdef __linux__

inline LeaderboardRow * (*LeaderboardRow::ptr::_New)() = (LeaderboardRow * (*)()) 0x81e6aa0;
inline void (*LeaderboardRow::ptr::Discard)(LeaderboardRow * self) = (void (*)(LeaderboardRow * self)) 0x8079810;
inline void (*LeaderboardRow::ptr::mark)(LeaderboardRow * self) = (void (*)(LeaderboardRow * self)) 0x80a3460;
inline void (*LeaderboardRow::ptr::CSTR_LeaderboardRow)(LeaderboardRow * self) = (void (*)(LeaderboardRow * self)) 0x81e5a00;
#endif
#endif
