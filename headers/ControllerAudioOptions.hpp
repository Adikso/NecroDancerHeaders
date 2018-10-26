// Generated automatically. Do not edit!
#ifndef _ControllerAudioOptions_
#define _ControllerAudioOptions_
class Checkbox;
class GuiBorder;
class OptionList;
class Slider;
class Sprite;
class TextLabel;
class TextSprite;
#include "Controller.hpp"

class ControllerAudioOptions : public Controller  {
public:
    Controller * cGame;
    Sprite * overlayBlack;
    TextSprite * optionsText;
    OptionList * gui;
    int indexSound;
    Slider * soundSlider;
    int indexMusic;
    Slider * musicSlider;
    int indexPreBoss;
    Checkbox * enablePreBossEffectBox;
    int indexDaoust;
    Checkbox * enableDaoustVocalsBox;
    int indexExit;
    TextLabel * exitText;
    GuiBorder * border;
    int sfxChangeSound;

    // Wrappers
    ControllerAudioOptions(Controller * game) {
        ptr::CSTR_ControllerAudioOptions(this);
        ptr::New(this, game);
    }

    inline ControllerAudioOptions * New(Controller * game) { return ptr::New(this, game); }
    inline void _Update() { ptr::_Update(); }
    inline void Render() { ptr::Render(this); }
    inline void _RegainFocus() { ptr::_RegainFocus(); }
    inline void GUICallback(int index, bool left) { ptr::GUICallback(this, index, left); }
    inline void Destructor() { ptr::Destructor(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static ControllerAudioOptions * (*New)(ControllerAudioOptions * self, Controller * game);
        static void (*_Update)();
        static void (*Render)(ControllerAudioOptions * self);
        static void (*_RegainFocus)();
        static void (*GUICallback)(ControllerAudioOptions * self, int index, bool left);
        static void (*Destructor)(ControllerAudioOptions * self);
        static void (*mark)(ControllerAudioOptions * self);
        static void (*CSTR_ControllerAudioOptions)(ControllerAudioOptions * self);
    };
};

#ifdef _WIN32

ControllerAudioOptions * (*ControllerAudioOptions::ptr::New)(ControllerAudioOptions * self, Controller * game) = (ControllerAudioOptions * (*)(ControllerAudioOptions * self, Controller * game)) 0x6a0b70;
void (*ControllerAudioOptions::ptr::_Update)() = (void (*)()) 0x0;
void (*ControllerAudioOptions::ptr::Render)(ControllerAudioOptions * self) = (void (*)(ControllerAudioOptions * self)) 0x6a0e50;
void (*ControllerAudioOptions::ptr::_RegainFocus)() = (void (*)()) 0x0;
void (*ControllerAudioOptions::ptr::GUICallback)(ControllerAudioOptions * self, int index, bool left) = (void (*)(ControllerAudioOptions * self, int index, bool left)) 0x6a1120;
void (*ControllerAudioOptions::ptr::Destructor)(ControllerAudioOptions * self) = (void (*)(ControllerAudioOptions * self)) 0x6a11b0;
void (*ControllerAudioOptions::ptr::mark)(ControllerAudioOptions * self) = (void (*)(ControllerAudioOptions * self)) 0x6a11f0;
void (*ControllerAudioOptions::ptr::CSTR_ControllerAudioOptions)(ControllerAudioOptions * self) = (void (*)(ControllerAudioOptions * self)) 0x6a06a0;
#endif

#ifdef __linux__

ControllerAudioOptions * (*ControllerAudioOptions::ptr::New)(ControllerAudioOptions * self, Controller * game) = (ControllerAudioOptions * (*)(ControllerAudioOptions * self, Controller * game)) 0x81ee3a0;
void (*ControllerAudioOptions::ptr::_Update)() = (void (*)()) 0x8079db0;
void (*ControllerAudioOptions::ptr::Render)(ControllerAudioOptions * self) = (void (*)(ControllerAudioOptions * self)) 0x80c5b20;
void (*ControllerAudioOptions::ptr::_RegainFocus)() = (void (*)()) 0x8079dd0;
void (*ControllerAudioOptions::ptr::GUICallback)(ControllerAudioOptions * self, int index, bool left) = (void (*)(ControllerAudioOptions * self, int index, bool left)) 0x82db950;
void (*ControllerAudioOptions::ptr::Destructor)(ControllerAudioOptions * self) = (void (*)(ControllerAudioOptions * self)) 0x8079de0;
void (*ControllerAudioOptions::ptr::mark)(ControllerAudioOptions * self) = (void (*)(ControllerAudioOptions * self)) 0x80aadc0;
void (*ControllerAudioOptions::ptr::CSTR_ControllerAudioOptions)(ControllerAudioOptions * self) = (void (*)(ControllerAudioOptions * self)) 0x81ede40;
#endif
#endif
