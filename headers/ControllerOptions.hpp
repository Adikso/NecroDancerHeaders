// Generated automatically. Do not edit!
#ifndef _ControllerOptions_
#define _ControllerOptions_
class GuiBorder;
class OptionList;
class Sprite;
class TextLabel;
class TextSprite;
#include "Controller.hpp"

class ControllerOptions : public Controller  {
public:
    Controller * cGame;
    Sprite * overlayBlack;
    TextSprite * optionsText;
    OptionList * gui;
    TextLabel * gameplayText;
    TextLabel * audioText;
    TextLabel * graphicsText;
    TextLabel * reassignText;
    TextLabel * calibrateText;
    TextLabel * soundtrackText;
    TextLabel * skinText;
    TextLabel * languageText;
    TextLabel * exitText;
    GuiBorder * border;

    // Wrappers
    ControllerOptions(Controller * game) {
        ptr::CSTR_ControllerOptions(this);
        ptr::New(this, game);
    }

    inline ControllerOptions * New(Controller * game) { return ptr::New(this, game); }
    inline void _Update() { ptr::_Update(); }
    inline void Render() { ptr::Render(this); }
    inline void _RegainFocus() { ptr::_RegainFocus(); }
    inline void GUICallback(int index, bool left) { ptr::GUICallback(this, index, left); }
    inline void Destructor() { ptr::Destructor(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static ControllerOptions * (*New)(ControllerOptions * self, Controller * game);
        static void (*_Update)();
        static void (*Render)(ControllerOptions * self);
        static void (*_RegainFocus)();
        static void (*GUICallback)(ControllerOptions * self, int index, bool left);
        static void (*Destructor)(ControllerOptions * self);
        static void (*mark)(ControllerOptions * self);
        static void (*CSTR_ControllerOptions)(ControllerOptions * self);
    };
};

#ifdef _WIN32

inline ControllerOptions * (*ControllerOptions::ptr::New)(ControllerOptions * self, Controller * game) = (ControllerOptions * (*)(ControllerOptions * self, Controller * game)) 0x696dc0;
inline void (*ControllerOptions::ptr::_Update)() = (void (*)()) 0x0;
inline void (*ControllerOptions::ptr::Render)(ControllerOptions * self) = (void (*)(ControllerOptions * self)) 0x6970b0;
inline void (*ControllerOptions::ptr::_RegainFocus)() = (void (*)()) 0x0;
inline void (*ControllerOptions::ptr::GUICallback)(ControllerOptions * self, int index, bool left) = (void (*)(ControllerOptions * self, int index, bool left)) 0x697460;
inline void (*ControllerOptions::ptr::Destructor)(ControllerOptions * self) = (void (*)(ControllerOptions * self)) 0x697720;
inline void (*ControllerOptions::ptr::mark)(ControllerOptions * self) = (void (*)(ControllerOptions * self)) 0x697780;
inline void (*ControllerOptions::ptr::CSTR_ControllerOptions)(ControllerOptions * self) = (void (*)(ControllerOptions * self)) 0x696770;
#endif

#ifdef __linux__

inline ControllerOptions * (*ControllerOptions::ptr::New)(ControllerOptions * self, Controller * game) = (ControllerOptions * (*)(ControllerOptions * self, Controller * game)) 0x81e9820;
inline void (*ControllerOptions::ptr::_Update)() = (void (*)()) 0x80799d0;
inline void (*ControllerOptions::ptr::Render)(ControllerOptions * self) = (void (*)(ControllerOptions * self)) 0x80c6430;
inline void (*ControllerOptions::ptr::_RegainFocus)() = (void (*)()) 0x80799f0;
inline void (*ControllerOptions::ptr::GUICallback)(ControllerOptions * self, int index, bool left) = (void (*)(ControllerOptions * self, int index, bool left)) 0x8314600;
inline void (*ControllerOptions::ptr::Destructor)(ControllerOptions * self) = (void (*)(ControllerOptions * self)) 0x8079a00;
inline void (*ControllerOptions::ptr::mark)(ControllerOptions * self) = (void (*)(ControllerOptions * self)) 0x80a6a50;
inline void (*ControllerOptions::ptr::CSTR_ControllerOptions)(ControllerOptions * self) = (void (*)(ControllerOptions * self)) 0x81e90d0;
#endif
#endif
