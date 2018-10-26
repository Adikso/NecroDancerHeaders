// Generated automatically. Do not edit!
#ifndef _ControllerGameplayOptions_
#define _ControllerGameplayOptions_
class Checkbox;
class ControllerPopUp;
class GuiBorder;
class OptionList;
class Sprite;
class TextLabel;
class TextSprite;
#include "Controller.hpp"

class ControllerGameplayOptions : public Controller  {
public:
    Controller * cGame;
    Sprite * overlayBlack;
    TextSprite * optionsText;
    Sprite * cadenceBody;
    Sprite * cadenceHead;
    Sprite * defaultBody;
    Sprite * defaultHead;
    OptionList * gui;
    TextLabel * defaultPlayer1Text;
    TextLabel * defaultCharText;
    Checkbox * itemHintBox;
    Checkbox * itemNameBox;
    Checkbox * showHeartsBox;
    Checkbox * lobbyBox;
    Checkbox * diamondBox;
    Checkbox * pauseBox;
    Checkbox * cutscenesBox;
    Checkbox * bossIntrosBox;
    TextLabel * deleteText;
    TextLabel * exitText;
    ControllerPopUp * popUpController;
    GuiBorder * border;

    // Wrappers
    ControllerGameplayOptions(Controller * game) {
        ptr::CSTR_ControllerGameplayOptions(this);
        ptr::New(this, game);
    }

    inline virtual void ReloadSprites() { ptr::ReloadSprites(this); }
    inline ControllerGameplayOptions * New(Controller * game) { return ptr::New(this, game); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline void _RegainFocus() { ptr::_RegainFocus(); }
    inline void GUICallback(int index, bool left) { ptr::GUICallback(this, index, left); }
    inline void Destructor() { ptr::Destructor(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static void (*ReloadSprites)(ControllerGameplayOptions * self);
        static ControllerGameplayOptions * (*New)(ControllerGameplayOptions * self, Controller * game);
        static void (*Update)(ControllerGameplayOptions * self);
        static void (*Render)(ControllerGameplayOptions * self);
        static void (*_RegainFocus)();
        static void (*GUICallback)(ControllerGameplayOptions * self, int index, bool left);
        static void (*Destructor)(ControllerGameplayOptions * self);
        static void (*mark)(ControllerGameplayOptions * self);
        static void (*CSTR_ControllerGameplayOptions)(ControllerGameplayOptions * self);
    };
};

#ifdef _WIN32

void (*ControllerGameplayOptions::ptr::ReloadSprites)(ControllerGameplayOptions * self) = (void (*)(ControllerGameplayOptions * self)) 0x69f050;
ControllerGameplayOptions * (*ControllerGameplayOptions::ptr::New)(ControllerGameplayOptions * self, Controller * game) = (ControllerGameplayOptions * (*)(ControllerGameplayOptions * self, Controller * game)) 0x69f430;
void (*ControllerGameplayOptions::ptr::Update)(ControllerGameplayOptions * self) = (void (*)(ControllerGameplayOptions * self)) 0x69f740;
void (*ControllerGameplayOptions::ptr::Render)(ControllerGameplayOptions * self) = (void (*)(ControllerGameplayOptions * self)) 0x69f790;
void (*ControllerGameplayOptions::ptr::_RegainFocus)() = (void (*)()) 0x0;
void (*ControllerGameplayOptions::ptr::GUICallback)(ControllerGameplayOptions * self, int index, bool left) = (void (*)(ControllerGameplayOptions * self, int index, bool left)) 0x69fcb0;
void (*ControllerGameplayOptions::ptr::Destructor)(ControllerGameplayOptions * self) = (void (*)(ControllerGameplayOptions * self)) 0x69ffa0;
void (*ControllerGameplayOptions::ptr::mark)(ControllerGameplayOptions * self) = (void (*)(ControllerGameplayOptions * self)) 0x6a0010;
void (*ControllerGameplayOptions::ptr::CSTR_ControllerGameplayOptions)(ControllerGameplayOptions * self) = (void (*)(ControllerGameplayOptions * self)) 0x69e6f0;
#endif

#ifdef __linux__

void (*ControllerGameplayOptions::ptr::ReloadSprites)(ControllerGameplayOptions * self) = (void (*)(ControllerGameplayOptions * self)) 0x81278b0;
ControllerGameplayOptions * (*ControllerGameplayOptions::ptr::New)(ControllerGameplayOptions * self, Controller * game) = (ControllerGameplayOptions * (*)(ControllerGameplayOptions * self, Controller * game)) 0x81eda80;
void (*ControllerGameplayOptions::ptr::Update)(ControllerGameplayOptions * self) = (void (*)(ControllerGameplayOptions * self)) 0x8365d40;
void (*ControllerGameplayOptions::ptr::Render)(ControllerGameplayOptions * self) = (void (*)(ControllerGameplayOptions * self)) 0x80c5e30;
void (*ControllerGameplayOptions::ptr::_RegainFocus)() = (void (*)()) 0x8079d00;
void (*ControllerGameplayOptions::ptr::GUICallback)(ControllerGameplayOptions * self, int index, bool left) = (void (*)(ControllerGameplayOptions * self, int index, bool left)) 0x82dba00;
void (*ControllerGameplayOptions::ptr::Destructor)(ControllerGameplayOptions * self) = (void (*)(ControllerGameplayOptions * self)) 0x8079d10;
void (*ControllerGameplayOptions::ptr::mark)(ControllerGameplayOptions * self) = (void (*)(ControllerGameplayOptions * self)) 0x80aa6f0;
void (*ControllerGameplayOptions::ptr::CSTR_ControllerGameplayOptions)(ControllerGameplayOptions * self) = (void (*)(ControllerGameplayOptions * self)) 0x81ed070;
#endif
#endif
