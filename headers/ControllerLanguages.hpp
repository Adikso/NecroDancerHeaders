// Generated automatically. Do not edit!
#ifndef _ControllerLanguages_
#define _ControllerLanguages_
class Checkbox;
class GuiBorder;
class List12;
class OptionList;
class Sprite;
class String;
class TextLabel;
class TextSprite;
#include "Controller.hpp"

class ControllerLanguages : public Controller  {
public:
    Controller * cGame;
    Sprite * overlayBlack;
    TextSprite * optionsText;
    OptionList * gui;
    TextLabel * languageText;
    Checkbox * subtitlesBox;
    TextLabel * exitText;
    String * origLanguage;
    String * curLanguage;
    int curLanguageIndex;
    List12 * languageList;
    GuiBorder * border;

    // Wrappers
    ControllerLanguages(Controller * game) {
        ptr::CSTR_ControllerLanguages(this);
        ptr::New(this, game);
    }

    inline virtual void UpdateLanguageText() { ptr::UpdateLanguageText(this); }
    inline ControllerLanguages * New(Controller * game) { return ptr::New(this, game); }
    inline void _Update() { ptr::_Update(); }
    inline void Render() { ptr::Render(this); }
    inline void _RegainFocus() { ptr::_RegainFocus(); }
    inline void GUICallback(int index, bool left) { ptr::GUICallback(this, index, left); }
    inline void Destructor() { ptr::Destructor(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static void (*UpdateLanguageText)(ControllerLanguages * self);
        static ControllerLanguages * (*New)(ControllerLanguages * self, Controller * game);
        static void (*_Update)();
        static void (*Render)(ControllerLanguages * self);
        static void (*_RegainFocus)();
        static void (*GUICallback)(ControllerLanguages * self, int index, bool left);
        static void (*Destructor)(ControllerLanguages * self);
        static void (*mark)(ControllerLanguages * self);
        static void (*CSTR_ControllerLanguages)(ControllerLanguages * self);
    };
};

#ifdef _WIN32

void (*ControllerLanguages::ptr::UpdateLanguageText)(ControllerLanguages * self) = (void (*)(ControllerLanguages * self)) 0x6a86d0;
ControllerLanguages * (*ControllerLanguages::ptr::New)(ControllerLanguages * self, Controller * game) = (ControllerLanguages * (*)(ControllerLanguages * self, Controller * game)) 0x6a8830;
void (*ControllerLanguages::ptr::_Update)() = (void (*)()) 0x0;
void (*ControllerLanguages::ptr::Render)(ControllerLanguages * self) = (void (*)(ControllerLanguages * self)) 0x6a9340;
void (*ControllerLanguages::ptr::_RegainFocus)() = (void (*)()) 0x0;
void (*ControllerLanguages::ptr::GUICallback)(ControllerLanguages * self, int index, bool left) = (void (*)(ControllerLanguages * self, int index, bool left)) 0x6a9580;
void (*ControllerLanguages::ptr::Destructor)(ControllerLanguages * self) = (void (*)(ControllerLanguages * self)) 0x6a9750;
void (*ControllerLanguages::ptr::mark)(ControllerLanguages * self) = (void (*)(ControllerLanguages * self)) 0x6a9780;
void (*ControllerLanguages::ptr::CSTR_ControllerLanguages)(ControllerLanguages * self) = (void (*)(ControllerLanguages * self)) 0x6a8260;
#endif

#ifdef __linux__

void (*ControllerLanguages::ptr::UpdateLanguageText)(ControllerLanguages * self) = (void (*)(ControllerLanguages * self)) 0x80c8d90;
ControllerLanguages * (*ControllerLanguages::ptr::New)(ControllerLanguages * self, Controller * game) = (ControllerLanguages * (*)(ControllerLanguages * self, Controller * game)) 0x81f2030;
void (*ControllerLanguages::ptr::_Update)() = (void (*)()) 0x807a320;
void (*ControllerLanguages::ptr::Render)(ControllerLanguages * self) = (void (*)(ControllerLanguages * self)) 0x80c5440;
void (*ControllerLanguages::ptr::_RegainFocus)() = (void (*)()) 0x807a340;
void (*ControllerLanguages::ptr::GUICallback)(ControllerLanguages * self, int index, bool left) = (void (*)(ControllerLanguages * self, int index, bool left)) 0x8365750;
void (*ControllerLanguages::ptr::Destructor)(ControllerLanguages * self) = (void (*)(ControllerLanguages * self)) 0x807a350;
void (*ControllerLanguages::ptr::mark)(ControllerLanguages * self) = (void (*)(ControllerLanguages * self)) 0x80a9e90;
void (*ControllerLanguages::ptr::CSTR_ControllerLanguages)(ControllerLanguages * self) = (void (*)(ControllerLanguages * self)) 0x81f1b40;
#endif
#endif
