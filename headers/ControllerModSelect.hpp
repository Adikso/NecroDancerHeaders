// Generated automatically. Do not edit!
#ifndef _ControllerModSelect_
#define _ControllerModSelect_
class ControllerGame;
class GuiBorder;
class OptionList;
class Sprite;
class TextLabel;
class TextSprite;
#include "Controller.hpp"

class ControllerModSelect : public Controller  {
public:
    ControllerGame * cGame;
    Sprite * overlayBlack;
    TextSprite * pausedText;
    TextSprite * infoText;
    OptionList * gui;
    TextLabel * playText;
    TextLabel * publishText;
    TextLabel * stopText;
    TextLabel * exitText;
    GuiBorder * border;

    // Wrappers
    ControllerModSelect(ControllerGame * game) {
        ptr::CSTR_ControllerModSelect(this);
        ptr::New(this, game);
    }

    inline ControllerModSelect * New(ControllerGame * game) { return ptr::New(this, game); }
    inline ControllerModSelect * _new2() { return ptr::_new2(); }
    inline void _Update() { ptr::_Update(); }
    inline void Render() { ptr::Render(this); }
    inline void _RegainFocus() { ptr::_RegainFocus(); }
    inline void GUICallback(int index, bool left) { ptr::GUICallback(this, index, left); }
    inline void Destructor() { ptr::Destructor(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static ControllerModSelect * (*New)(ControllerModSelect * self, ControllerGame * game);
        static ControllerModSelect * (*_new2)();
        static void (*_Update)();
        static void (*Render)(ControllerModSelect * self);
        static void (*_RegainFocus)();
        static void (*GUICallback)(ControllerModSelect * self, int index, bool left);
        static void (*Destructor)(ControllerModSelect * self);
        static void (*_mark)();
        static void (*CSTR_ControllerModSelect)(ControllerModSelect * self);
    };
};

#ifdef _WIN32

ControllerModSelect * (*ControllerModSelect::ptr::New)(ControllerModSelect * self, ControllerGame * game) = (ControllerModSelect * (*)(ControllerModSelect * self, ControllerGame * game)) 0x69dab0;
ControllerModSelect * (*ControllerModSelect::ptr::_new2)() = (ControllerModSelect * (*)()) 0x0;
void (*ControllerModSelect::ptr::_Update)() = (void (*)()) 0x0;
void (*ControllerModSelect::ptr::Render)(ControllerModSelect * self) = (void (*)(ControllerModSelect * self)) 0x69ddd0;
void (*ControllerModSelect::ptr::_RegainFocus)() = (void (*)()) 0x0;
void (*ControllerModSelect::ptr::GUICallback)(ControllerModSelect * self, int index, bool left) = (void (*)(ControllerModSelect * self, int index, bool left)) 0x69e160;
void (*ControllerModSelect::ptr::Destructor)(ControllerModSelect * self) = (void (*)(ControllerModSelect * self)) 0x69e380;
void (*ControllerModSelect::ptr::_mark)() = (void (*)()) 0x0;
void (*ControllerModSelect::ptr::CSTR_ControllerModSelect)(ControllerModSelect * self) = (void (*)(ControllerModSelect * self)) 0x69d700;
#endif

#ifdef __linux__

ControllerModSelect * (*ControllerModSelect::ptr::New)(ControllerModSelect * self, ControllerGame * game) = (ControllerModSelect * (*)(ControllerModSelect * self, ControllerGame * game)) 0x81ecc40;
ControllerModSelect * (*ControllerModSelect::ptr::_new2)() = (ControllerModSelect * (*)()) 0x81ecfc0;
void (*ControllerModSelect::ptr::_Update)() = (void (*)()) 0x8079c70;
void (*ControllerModSelect::ptr::Render)(ControllerModSelect * self) = (void (*)(ControllerModSelect * self)) 0x80ccc30;
void (*ControllerModSelect::ptr::_RegainFocus)() = (void (*)()) 0x8079c90;
void (*ControllerModSelect::ptr::GUICallback)(ControllerModSelect * self, int index, bool left) = (void (*)(ControllerModSelect * self, int index, bool left)) 0x83dbf60;
void (*ControllerModSelect::ptr::Destructor)(ControllerModSelect * self) = (void (*)(ControllerModSelect * self)) 0x8079ca0;
void (*ControllerModSelect::ptr::_mark)() = (void (*)()) 0x80a8560;
void (*ControllerModSelect::ptr::CSTR_ControllerModSelect)(ControllerModSelect * self) = (void (*)(ControllerModSelect * self)) 0x81ec6d0;
#endif
#endif
