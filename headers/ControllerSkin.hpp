// Generated automatically. Do not edit!
#ifndef _ControllerSkin_
#define _ControllerSkin_
template<class T> class Array;
class GuiBorder;
class OptionList;
class Sprite;
class String;
class TextLabel;
class TextSprite;
#include "Controller.hpp"

class ControllerSkin : public Controller  {
public:
    Controller * cGame;
    Sprite * overlayBlack;
    TextSprite * optionsText;
    OptionList * gui;
    Array<Sprite *> * charBodies;
    Array<Sprite *> * charHeads;
    Array<TextLabel *> * charLabels;
    Array<String> * skinNames;
    TextLabel * exitText;
    GuiBorder * border;

    // Wrappers
    ControllerSkin(Controller * game) {
        ptr::CSTR_ControllerSkin(this);
        ptr::New(this, game);
    }

    inline virtual void ReloadSprites2(int characterID) { ptr::ReloadSprites2(this, characterID); }
    inline virtual void ReloadLabel(int characterID) { ptr::ReloadLabel(this, characterID); }
    inline ControllerSkin * New(Controller * game) { return ptr::New(this, game); }
    inline void _Update() { ptr::_Update(); }
    inline void Render() { ptr::Render(this); }
    inline void _RegainFocus() { ptr::_RegainFocus(); }
    inline void GUICallback(int index, bool left) { ptr::GUICallback(this, index, left); }
    inline void Destructor() { ptr::Destructor(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static void (*ReloadSprites2)(ControllerSkin * self, int characterID);
        static void (*ReloadLabel)(ControllerSkin * self, int characterID);
        static ControllerSkin * (*New)(ControllerSkin * self, Controller * game);
        static void (*_Update)();
        static void (*Render)(ControllerSkin * self);
        static void (*_RegainFocus)();
        static void (*GUICallback)(ControllerSkin * self, int index, bool left);
        static void (*Destructor)(ControllerSkin * self);
        static void (*mark)(ControllerSkin * self);
        static void (*CSTR_ControllerSkin)(ControllerSkin * self);
    };
};

#ifdef _WIN32

void (*ControllerSkin::ptr::ReloadSprites2)(ControllerSkin * self, int characterID) = (void (*)(ControllerSkin * self, int characterID)) 0x6a6750;
void (*ControllerSkin::ptr::ReloadLabel)(ControllerSkin * self, int characterID) = (void (*)(ControllerSkin * self, int characterID)) 0x6a7830;
ControllerSkin * (*ControllerSkin::ptr::New)(ControllerSkin * self, Controller * game) = (ControllerSkin * (*)(ControllerSkin * self, Controller * game)) 0x6a79b0;
void (*ControllerSkin::ptr::_Update)() = (void (*)()) 0x0;
void (*ControllerSkin::ptr::Render)(ControllerSkin * self) = (void (*)(ControllerSkin * self)) 0x6a7d70;
void (*ControllerSkin::ptr::_RegainFocus)() = (void (*)()) 0x0;
void (*ControllerSkin::ptr::GUICallback)(ControllerSkin * self, int index, bool left) = (void (*)(ControllerSkin * self, int index, bool left)) 0x6a80f0;
void (*ControllerSkin::ptr::Destructor)(ControllerSkin * self) = (void (*)(ControllerSkin * self)) 0x6a8220;
void (*ControllerSkin::ptr::mark)(ControllerSkin * self) = (void (*)(ControllerSkin * self)) 0x69e3c0;
void (*ControllerSkin::ptr::CSTR_ControllerSkin)(ControllerSkin * self) = (void (*)(ControllerSkin * self)) 0x6a6090;
#endif

#ifdef __linux__

void (*ControllerSkin::ptr::ReloadSprites2)(ControllerSkin * self, int characterID) = (void (*)(ControllerSkin * self, int characterID)) 0x81222d0;
void (*ControllerSkin::ptr::ReloadLabel)(ControllerSkin * self, int characterID) = (void (*)(ControllerSkin * self, int characterID)) 0x8109010;
ControllerSkin * (*ControllerSkin::ptr::New)(ControllerSkin * self, Controller * game) = (ControllerSkin * (*)(ControllerSkin * self, Controller * game)) 0x81f1730;
void (*ControllerSkin::ptr::_Update)() = (void (*)()) 0x807a200;
void (*ControllerSkin::ptr::Render)(ControllerSkin * self) = (void (*)(ControllerSkin * self)) 0x8108c50;
void (*ControllerSkin::ptr::_RegainFocus)() = (void (*)()) 0x807a220;
void (*ControllerSkin::ptr::GUICallback)(ControllerSkin * self, int index, bool left) = (void (*)(ControllerSkin * self, int index, bool left)) 0x8365ac0;
void (*ControllerSkin::ptr::Destructor)(ControllerSkin * self) = (void (*)(ControllerSkin * self)) 0x807a230;
void (*ControllerSkin::ptr::mark)(ControllerSkin * self) = (void (*)(ControllerSkin * self)) 0x80aeef0;
void (*ControllerSkin::ptr::CSTR_ControllerSkin)(ControllerSkin * self) = (void (*)(ControllerSkin * self)) 0x81f0d30;
#endif
#endif
