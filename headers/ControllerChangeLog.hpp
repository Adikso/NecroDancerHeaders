// Generated automatically. Do not edit!
#ifndef _ControllerChangeLog_
#define _ControllerChangeLog_
class GuiBorder;
class OptionList;
class Sprite;
class TextLabel;
class TextSprite;
#include "Controller.hpp"

class ControllerChangeLog : public Controller  {
public:
    int numPages;
    int pageNum;
    Sprite * overlayBlack;
    TextSprite * headerText;
    TextSprite * footerText;
    TextSprite * line1Text;
    TextSprite * line2Text;
    TextSprite * line3Text;
    TextSprite * line4Text;
    TextSprite * line5Text;
    TextSprite * line6Text;
    TextSprite * line7Text;
    TextSprite * line8Text;
    TextSprite * line9Text;
    TextSprite * line10Text;
    TextSprite * line11Text;
    OptionList * gui;
    TextLabel * previousPageText;
    TextLabel * nextPageText;
    TextLabel * doneText;
    GuiBorder * border;

    // Wrappers
    ControllerChangeLog() {
        ptr::CSTR_ControllerChangeLog(this);
        ptr::New(this);
    }

    inline ControllerChangeLog * New() { return ptr::New(this); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline void _RegainFocus() { ptr::_RegainFocus(); }
    inline void GUICallback(int index, bool left) { ptr::GUICallback(this, index, left); }
    inline void Destructor() { ptr::Destructor(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static ControllerChangeLog * (*New)(ControllerChangeLog * self);
        static void (*Update)(ControllerChangeLog * self);
        static void (*Render)(ControllerChangeLog * self);
        static void (*_RegainFocus)();
        static void (*GUICallback)(ControllerChangeLog * self, int index, bool left);
        static void (*Destructor)(ControllerChangeLog * self);
        static void (*mark)(ControllerChangeLog * self);
        static void (*CSTR_ControllerChangeLog)(ControllerChangeLog * self);
    };
};

#ifdef _WIN32

ControllerChangeLog * (*ControllerChangeLog::ptr::New)(ControllerChangeLog * self) = (ControllerChangeLog * (*)(ControllerChangeLog * self)) 0x6706c0;
void (*ControllerChangeLog::ptr::Update)(ControllerChangeLog * self) = (void (*)(ControllerChangeLog * self)) 0x6709b0;
void (*ControllerChangeLog::ptr::Render)(ControllerChangeLog * self) = (void (*)(ControllerChangeLog * self)) 0x6709d0;
void (*ControllerChangeLog::ptr::_RegainFocus)() = (void (*)()) 0x0;
void (*ControllerChangeLog::ptr::GUICallback)(ControllerChangeLog * self, int index, bool left) = (void (*)(ControllerChangeLog * self, int index, bool left)) 0x67d0e0;
void (*ControllerChangeLog::ptr::Destructor)(ControllerChangeLog * self) = (void (*)(ControllerChangeLog * self)) 0x67d1a0;
void (*ControllerChangeLog::ptr::mark)(ControllerChangeLog * self) = (void (*)(ControllerChangeLog * self)) 0x67d230;
void (*ControllerChangeLog::ptr::CSTR_ControllerChangeLog)(ControllerChangeLog * self) = (void (*)(ControllerChangeLog * self)) 0x6700c0;
#endif

#ifdef __linux__

ControllerChangeLog * (*ControllerChangeLog::ptr::New)(ControllerChangeLog * self) = (ControllerChangeLog * (*)(ControllerChangeLog * self)) 0x81dd480;
void (*ControllerChangeLog::ptr::Update)(ControllerChangeLog * self) = (void (*)(ControllerChangeLog * self)) 0x8078020;
void (*ControllerChangeLog::ptr::Render)(ControllerChangeLog * self) = (void (*)(ControllerChangeLog * self)) 0x84082c0;
void (*ControllerChangeLog::ptr::_RegainFocus)() = (void (*)()) 0x8078040;
void (*ControllerChangeLog::ptr::GUICallback)(ControllerChangeLog * self, int index, bool left) = (void (*)(ControllerChangeLog * self, int index, bool left)) 0x8365470;
void (*ControllerChangeLog::ptr::Destructor)(ControllerChangeLog * self) = (void (*)(ControllerChangeLog * self)) 0x8078050;
void (*ControllerChangeLog::ptr::mark)(ControllerChangeLog * self) = (void (*)(ControllerChangeLog * self)) 0x80a73d0;
void (*ControllerChangeLog::ptr::CSTR_ControllerChangeLog)(ControllerChangeLog * self) = (void (*)(ControllerChangeLog * self)) 0x81dc390;
#endif
#endif
