// Generated automatically. Do not edit!
#ifndef _ControllerResolution_
#define _ControllerResolution_
class GuiBorder;
class OptionList;
class Sprite;
class String;
class TextInput;
class TextLabel;
class TextSprite;
#include "Controller.hpp"

class ControllerResolution : public Controller  {
public:
    Controller * cGame;
    int oldWidth;
    int oldHeight;
    String * text1;
    String * text2;
    TextInput * inputText;
    Sprite * overlayBlack;
    TextSprite * popupText;
    TextSprite * popupText2;
    TextLabel * option1Text;
    TextLabel * option2Text;
    OptionList * gui;
    int progressStep;
    int timerStart;
    int width;
    int height;
    GuiBorder * border;

    // Wrappers
    ControllerResolution(Controller * game) {
        ptr::CSTR_ControllerResolution(this);
        ptr::New(this, game);
    }

    inline ControllerResolution * New(Controller * game) { return ptr::New(this, game); }
    inline ControllerResolution * _new2() { return ptr::_new2(); }
    inline void GUICallback(int index, bool left) { ptr::GUICallback(this, index, left); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline void _RegainFocus() { ptr::_RegainFocus(); }
    inline void Destructor() { ptr::Destructor(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static ControllerResolution * (*New)(ControllerResolution * self, Controller * game);
        static ControllerResolution * (*_new2)();
        static void (*GUICallback)(ControllerResolution * self, int index, bool left);
        static void (*Update)(ControllerResolution * self);
        static void (*Render)(ControllerResolution * self);
        static void (*_RegainFocus)();
        static void (*Destructor)(ControllerResolution * self);
        static void (*mark)(ControllerResolution * self);
        static void (*CSTR_ControllerResolution)(ControllerResolution * self);
    };
};

#ifdef _WIN32

ControllerResolution * (*ControllerResolution::ptr::New)(ControllerResolution * self, Controller * game) = (ControllerResolution * (*)(ControllerResolution * self, Controller * game)) 0x6adb00;
ControllerResolution * (*ControllerResolution::ptr::_new2)() = (ControllerResolution * (*)()) 0x0;
void (*ControllerResolution::ptr::GUICallback)(ControllerResolution * self, int index, bool left) = (void (*)(ControllerResolution * self, int index, bool left)) 0x6ae110;
void (*ControllerResolution::ptr::Update)(ControllerResolution * self) = (void (*)(ControllerResolution * self)) 0x6ae6d0;
void (*ControllerResolution::ptr::Render)(ControllerResolution * self) = (void (*)(ControllerResolution * self)) 0x6ae950;
void (*ControllerResolution::ptr::_RegainFocus)() = (void (*)()) 0x0;
void (*ControllerResolution::ptr::Destructor)(ControllerResolution * self) = (void (*)(ControllerResolution * self)) 0x6aecb0;
void (*ControllerResolution::ptr::mark)(ControllerResolution * self) = (void (*)(ControllerResolution * self)) 0x6aece0;
void (*ControllerResolution::ptr::CSTR_ControllerResolution)(ControllerResolution * self) = (void (*)(ControllerResolution * self)) 0x6ad790;
#endif

#ifdef __linux__

ControllerResolution * (*ControllerResolution::ptr::New)(ControllerResolution * self, Controller * game) = (ControllerResolution * (*)(ControllerResolution * self, Controller * game)) 0x820d0f0;
ControllerResolution * (*ControllerResolution::ptr::_new2)() = (ControllerResolution * (*)()) 0x81f5480;
void (*ControllerResolution::ptr::GUICallback)(ControllerResolution * self, int index, bool left) = (void (*)(ControllerResolution * self, int index, bool left)) 0x81fd8e0;
void (*ControllerResolution::ptr::Update)(ControllerResolution * self) = (void (*)(ControllerResolution * self)) 0x8155910;
void (*ControllerResolution::ptr::Render)(ControllerResolution * self) = (void (*)(ControllerResolution * self)) 0x80e06a0;
void (*ControllerResolution::ptr::_RegainFocus)() = (void (*)()) 0x807a500;
void (*ControllerResolution::ptr::Destructor)(ControllerResolution * self) = (void (*)(ControllerResolution * self)) 0x807a510;
void (*ControllerResolution::ptr::mark)(ControllerResolution * self) = (void (*)(ControllerResolution * self)) 0x80a9920;
void (*ControllerResolution::ptr::CSTR_ControllerResolution)(ControllerResolution * self) = (void (*)(ControllerResolution * self)) 0x81f4f60;
#endif
#endif
