// Generated automatically. Do not edit!
#ifndef _ControllerControls_
#define _ControllerControls_
template<class T> class Array;
class Checkbox;
class GuiBorder;
class OptionList;
class Sprite;
class String;
class TextLabel;
class TextSprite;
#include "Controller.hpp"

class ControllerControls : public Controller  {
public:
    Controller * cGame;
    Sprite * overlayBlack;
    TextSprite * reassignText;
    OptionList * gui;
    TextLabel * playerText;
    int playerNum;
    Array<TextLabel *> * keyLabels;
    TextLabel * defaultsText;
    Checkbox * defaultsBox;
    Checkbox * multiBox;
    TextLabel * exitText;
    int keyIndex;
    GuiBorder * border;

    // Wrappers
    ControllerControls(Controller * game) {
        ptr::CSTR_ControllerControls(this);
        ptr::New(this, game);
    }

    inline virtual String * GetControlName(int index) { return ptr::GetControlName(this, index); }
    inline virtual int KeyFromProfile(int key) { return ptr::KeyFromProfile(this, key); }
    inline virtual bool AllCombosBound() { return ptr::AllCombosBound(this); }
    inline ControllerControls * New(Controller * game) { return ptr::New(this, game); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline void _RegainFocus() { ptr::_RegainFocus(); }
    inline void GUICallback(int index, bool left) { ptr::GUICallback(this, index, left); }
    inline void Destructor() { ptr::Destructor(this); }
    inline void mark() { ptr::mark(this); }
    inline void RefreshControlText() { ptr::RefreshControlText(this); }

    class ptr {
    public:
        static String * (*GetControlName)(ControllerControls * self, int index);
        static int (*KeyFromProfile)(ControllerControls * self, int key);
        static bool (*AllCombosBound)(ControllerControls * self);
        static ControllerControls * (*New)(ControllerControls * self, Controller * game);
        static void (*Update)(ControllerControls * self);
        static void (*Render)(ControllerControls * self);
        static void (*_RegainFocus)();
        static void (*GUICallback)(ControllerControls * self, int index, bool left);
        static void (*Destructor)(ControllerControls * self);
        static void (*mark)(ControllerControls * self);
        static void (*CSTR_ControllerControls)(ControllerControls * self);
        static void (*RefreshControlText)(ControllerControls * self);
    };
};

#ifdef _WIN32

String * (*ControllerControls::ptr::GetControlName)(ControllerControls * self, int index) = (String * (*)(ControllerControls * self, int index)) 0x6a3a50;
int (*ControllerControls::ptr::KeyFromProfile)(ControllerControls * self, int key) = (int (*)(ControllerControls * self, int key)) 0x6a3990;
bool (*ControllerControls::ptr::AllCombosBound)(ControllerControls * self) = (bool (*)(ControllerControls * self)) 0x6a39b0;
ControllerControls * (*ControllerControls::ptr::New)(ControllerControls * self, Controller * game) = (ControllerControls * (*)(ControllerControls * self, Controller * game)) 0x6a3e30;
void (*ControllerControls::ptr::Update)(ControllerControls * self) = (void (*)(ControllerControls * self)) 0x6a4220;
void (*ControllerControls::ptr::Render)(ControllerControls * self) = (void (*)(ControllerControls * self)) 0x6a43f0;
void (*ControllerControls::ptr::_RegainFocus)() = (void (*)()) 0x0;
void (*ControllerControls::ptr::GUICallback)(ControllerControls * self, int index, bool left) = (void (*)(ControllerControls * self, int index, bool left)) 0x6a4750;
void (*ControllerControls::ptr::Destructor)(ControllerControls * self) = (void (*)(ControllerControls * self)) 0x6a49d0;
void (*ControllerControls::ptr::mark)(ControllerControls * self) = (void (*)(ControllerControls * self)) 0x6a4a30;
void (*ControllerControls::ptr::CSTR_ControllerControls)(ControllerControls * self) = (void (*)(ControllerControls * self)) 0x6a34e0;
void (*ControllerControls::ptr::RefreshControlText)(ControllerControls * self) = (void (*)(ControllerControls * self)) 0x6a3c70;
#endif

#ifdef __linux__

String * (*ControllerControls::ptr::GetControlName)(ControllerControls * self, int index) = (String * (*)(ControllerControls * self, int index)) 0x80c1fd0;
int (*ControllerControls::ptr::KeyFromProfile)(ControllerControls * self, int key) = (int (*)(ControllerControls * self, int key)) 0x8079f70;
bool (*ControllerControls::ptr::AllCombosBound)(ControllerControls * self) = (bool (*)(ControllerControls * self)) 0x81111e0;
ControllerControls * (*ControllerControls::ptr::New)(ControllerControls * self, Controller * game) = (ControllerControls * (*)(ControllerControls * self, Controller * game)) 0x81efe50;
void (*ControllerControls::ptr::Update)(ControllerControls * self) = (void (*)(ControllerControls * self)) 0x8155470;
void (*ControllerControls::ptr::Render)(ControllerControls * self) = (void (*)(ControllerControls * self)) 0x80ceda0;
void (*ControllerControls::ptr::_RegainFocus)() = (void (*)()) 0x8079f90;
void (*ControllerControls::ptr::GUICallback)(ControllerControls * self, int index, bool left) = (void (*)(ControllerControls * self, int index, bool left)) 0x82db390;
void (*ControllerControls::ptr::Destructor)(ControllerControls * self) = (void (*)(ControllerControls * self)) 0x8079fa0;
void (*ControllerControls::ptr::mark)(ControllerControls * self) = (void (*)(ControllerControls * self)) 0x80ad570;
void (*ControllerControls::ptr::CSTR_ControllerControls)(ControllerControls * self) = (void (*)(ControllerControls * self)) 0x81ef7e0;
void (*ControllerControls::ptr::RefreshControlText)(ControllerControls * self) = (void (*)(ControllerControls * self)) 0x8155710;
#endif
#endif
