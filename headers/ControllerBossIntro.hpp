// Generated automatically. Do not edit!
#ifndef _ControllerBossIntro_
#define _ControllerBossIntro_
class ControllerGame;
class Sprite;
class String;
class TextSprite;
#include "Controller.hpp"

class ControllerBossIntro : public Controller  {
public:
    ControllerGame * cGame;
    Sprite * overlayBlack;
    String * bossNameStr;
    Sprite * bossImg;
    Sprite * bgGradient;
    Sprite * bgBottom;
    Sprite * bgTop;
    TextSprite * bossName;
    int numFrames;
    bool isEnding;
    int numEndFrames;
    static bool * showingBossIntro;

    // Wrappers
    ControllerBossIntro(ControllerGame * game, int bossNum) {
        ptr::CSTR_ControllerBossIntro(this);
        ptr::New(this, game, bossNum);
    }

    inline ControllerBossIntro * New(ControllerGame * game, int bossNum) { return ptr::New(this, game, bossNum); }
    inline ControllerBossIntro * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline void Suspend() { ptr::Suspend(this); }
    inline void RegainFocus() { ptr::RegainFocus(this); }
    inline void Destructor() { ptr::Destructor(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static ControllerBossIntro * (*New)(ControllerBossIntro * self, ControllerGame * game, int bossNum);
        static ControllerBossIntro * (*_new2)();
        static void (*Update)(ControllerBossIntro * self);
        static void (*Render)(ControllerBossIntro * self);
        static void (*Suspend)(ControllerBossIntro * self);
        static void (*RegainFocus)(ControllerBossIntro * self);
        static void (*Destructor)(ControllerBossIntro * self);
        static void (*mark)(ControllerBossIntro * self);
        static void (*CSTR_ControllerBossIntro)(ControllerBossIntro * self);
    };
};

#ifdef _WIN32
bool * ControllerBossIntro::showingBossIntro = (bool*) 0x83557c;

ControllerBossIntro * (*ControllerBossIntro::ptr::New)(ControllerBossIntro * self, ControllerGame * game, int bossNum) = (ControllerBossIntro * (*)(ControllerBossIntro * self, ControllerGame * game, int bossNum)) 0x66d630;
ControllerBossIntro * (*ControllerBossIntro::ptr::_new2)() = (ControllerBossIntro * (*)()) 0x0;
void (*ControllerBossIntro::ptr::Update)(ControllerBossIntro * self) = (void (*)(ControllerBossIntro * self)) 0x66e6a0;
void (*ControllerBossIntro::ptr::Render)(ControllerBossIntro * self) = (void (*)(ControllerBossIntro * self)) 0x66eaa0;
void (*ControllerBossIntro::ptr::Suspend)(ControllerBossIntro * self) = (void (*)(ControllerBossIntro * self)) 0x66f2d0;
void (*ControllerBossIntro::ptr::RegainFocus)(ControllerBossIntro * self) = (void (*)(ControllerBossIntro * self)) 0x5c3c30;
void (*ControllerBossIntro::ptr::Destructor)(ControllerBossIntro * self) = (void (*)(ControllerBossIntro * self)) 0x66f2e0;
void (*ControllerBossIntro::ptr::mark)(ControllerBossIntro * self) = (void (*)(ControllerBossIntro * self)) 0x66f2f0;
void (*ControllerBossIntro::ptr::CSTR_ControllerBossIntro)(ControllerBossIntro * self) = (void (*)(ControllerBossIntro * self)) 0x66d450;
#endif

#ifdef __linux__
bool * ControllerBossIntro::showingBossIntro = (bool*) 0x856a338;

ControllerBossIntro * (*ControllerBossIntro::ptr::New)(ControllerBossIntro * self, ControllerGame * game, int bossNum) = (ControllerBossIntro * (*)(ControllerBossIntro * self, ControllerGame * game, int bossNum)) 0x8317710;
ControllerBossIntro * (*ControllerBossIntro::ptr::_new2)() = (ControllerBossIntro * (*)()) 0x81db510;
void (*ControllerBossIntro::ptr::Update)(ControllerBossIntro * self) = (void (*)(ControllerBossIntro * self)) 0x80a3300;
void (*ControllerBossIntro::ptr::Render)(ControllerBossIntro * self) = (void (*)(ControllerBossIntro * self)) 0x80c2690;
void (*ControllerBossIntro::ptr::Suspend)(ControllerBossIntro * self) = (void (*)(ControllerBossIntro * self)) 0x8077f00;
void (*ControllerBossIntro::ptr::RegainFocus)(ControllerBossIntro * self) = (void (*)(ControllerBossIntro * self)) 0x8077f20;
void (*ControllerBossIntro::ptr::Destructor)(ControllerBossIntro * self) = (void (*)(ControllerBossIntro * self)) 0x8077f40;
void (*ControllerBossIntro::ptr::mark)(ControllerBossIntro * self) = (void (*)(ControllerBossIntro * self)) 0x80a9150;
void (*ControllerBossIntro::ptr::CSTR_ControllerBossIntro)(ControllerBossIntro * self) = (void (*)(ControllerBossIntro * self)) 0x81db470;
#endif
#endif
