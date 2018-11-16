// Generated automatically. Do not edit!
#ifndef _ControllerGraphicsOptions_
#define _ControllerGraphicsOptions_
class Checkbox;
class GuiBorder;
class OptionList;
class Sprite;
class TextLabel;
class TextSprite;
#include "Controller.hpp"

class ControllerGraphicsOptions : public Controller  {
public:
    Controller * cGame;
    Sprite * overlayBlack;
    TextSprite * optionsText;
    TextLabel * multiplierText;
    OptionList * gui;
    Checkbox * fullscreenBox;
    Checkbox * enableVSync;
    Checkbox * enableHUDHeart;
    Checkbox * enableHUDBeatBars;
    Checkbox * enableScreenShake;
    Checkbox * enableSpeedrunTimer;
    Checkbox * enableDiscoFloor;
    Checkbox * enablePostDeathReplay;
    Checkbox * enableParticles;
    TextLabel * resolutionText;
    TextLabel * exitText;
    GuiBorder * border;

    // Wrappers
    ControllerGraphicsOptions(Controller * game) {
        ptr::CSTR_ControllerGraphicsOptions(this);
        ptr::New(this, game);
    }

    inline virtual void UpdateMultiplierText() { ptr::UpdateMultiplierText(this); }
    inline ControllerGraphicsOptions * New(Controller * game) { return ptr::New(this, game); }
    inline void _Update() { ptr::_Update(); }
    inline void Render() { ptr::Render(this); }
    inline void _RegainFocus() { ptr::_RegainFocus(); }
    inline void GUICallback(int index, bool left) { ptr::GUICallback(this, index, left); }
    inline void Destructor() { ptr::Destructor(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static void (*UpdateMultiplierText)(ControllerGraphicsOptions * self);
        static ControllerGraphicsOptions * (*New)(ControllerGraphicsOptions * self, Controller * game);
        static void (*_Update)();
        static void (*Render)(ControllerGraphicsOptions * self);
        static void (*_RegainFocus)();
        static void (*GUICallback)(ControllerGraphicsOptions * self, int index, bool left);
        static void (*Destructor)(ControllerGraphicsOptions * self);
        static void (*mark)(ControllerGraphicsOptions * self);
        static void (*CSTR_ControllerGraphicsOptions)(ControllerGraphicsOptions * self);
    };
};

#ifdef _WIN32

inline void (*ControllerGraphicsOptions::ptr::UpdateMultiplierText)(ControllerGraphicsOptions * self) = (void (*)(ControllerGraphicsOptions * self)) 0x6a2370;
inline ControllerGraphicsOptions * (*ControllerGraphicsOptions::ptr::New)(ControllerGraphicsOptions * self, Controller * game) = (ControllerGraphicsOptions * (*)(ControllerGraphicsOptions * self, Controller * game)) 0x6a2580;
inline void (*ControllerGraphicsOptions::ptr::_Update)() = (void (*)()) 0x0;
inline void (*ControllerGraphicsOptions::ptr::Render)(ControllerGraphicsOptions * self) = (void (*)(ControllerGraphicsOptions * self)) 0x6a2890;
inline void (*ControllerGraphicsOptions::ptr::_RegainFocus)() = (void (*)()) 0x0;
inline void (*ControllerGraphicsOptions::ptr::GUICallback)(ControllerGraphicsOptions * self, int index, bool left) = (void (*)(ControllerGraphicsOptions * self, int index, bool left)) 0x6a2d00;
inline void (*ControllerGraphicsOptions::ptr::Destructor)(ControllerGraphicsOptions * self) = (void (*)(ControllerGraphicsOptions * self)) 0x6a2f50;
inline void (*ControllerGraphicsOptions::ptr::mark)(ControllerGraphicsOptions * self) = (void (*)(ControllerGraphicsOptions * self)) 0x6a2fc0;
inline void (*ControllerGraphicsOptions::ptr::CSTR_ControllerGraphicsOptions)(ControllerGraphicsOptions * self) = (void (*)(ControllerGraphicsOptions * self)) 0x6a1a10;
#endif

#ifdef __linux__

inline void (*ControllerGraphicsOptions::ptr::UpdateMultiplierText)(ControllerGraphicsOptions * self) = (void (*)(ControllerGraphicsOptions * self)) 0x8106f10;
inline ControllerGraphicsOptions * (*ControllerGraphicsOptions::ptr::New)(ControllerGraphicsOptions * self, Controller * game) = (ControllerGraphicsOptions * (*)(ControllerGraphicsOptions * self, Controller * game)) 0x81ef440;
inline void (*ControllerGraphicsOptions::ptr::_Update)() = (void (*)()) 0x8079ea0;
inline void (*ControllerGraphicsOptions::ptr::Render)(ControllerGraphicsOptions * self) = (void (*)(ControllerGraphicsOptions * self)) 0x80c56b0;
inline void (*ControllerGraphicsOptions::ptr::_RegainFocus)() = (void (*)()) 0x8079ec0;
inline void (*ControllerGraphicsOptions::ptr::GUICallback)(ControllerGraphicsOptions * self, int index, bool left) = (void (*)(ControllerGraphicsOptions * self, int index, bool left)) 0x82db7c0;
inline void (*ControllerGraphicsOptions::ptr::Destructor)(ControllerGraphicsOptions * self) = (void (*)(ControllerGraphicsOptions * self)) 0x8079ed0;
inline void (*ControllerGraphicsOptions::ptr::mark)(ControllerGraphicsOptions * self) = (void (*)(ControllerGraphicsOptions * self)) 0x80aa190;
inline void (*ControllerGraphicsOptions::ptr::CSTR_ControllerGraphicsOptions)(ControllerGraphicsOptions * self) = (void (*)(ControllerGraphicsOptions * self)) 0x81eea40;
#endif
#endif
