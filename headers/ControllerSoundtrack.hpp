// Generated automatically. Do not edit!
#ifndef _ControllerSoundtrack_
#define _ControllerSoundtrack_
template<class T> class Array;
class GuiBorder;
class OptionList;
class Sprite;
class String;
class TextLabel;
class TextSprite;
#include "Controller.hpp"

class ControllerSoundtrack : public Controller  {
public:
    Controller * cGame;
    Sprite * overlayBlack;
    TextSprite * optionsText;
    OptionList * gui;
    Array<Sprite *> * charBodies;
    Array<Sprite *> * charHeads;
    Array<TextLabel *> * charLabels;
    TextLabel * exitText;
    GuiBorder * border;

    // Wrappers
    ControllerSoundtrack(Controller * game) {
        ptr::CSTR_ControllerSoundtrack(this);
        ptr::New(this, game);
    }

    inline virtual void ReloadSprites2(int characterID) { ptr::ReloadSprites2(this, characterID); }
    inline static bool _IsCharUnlocked(int arg1) { return ptr::_IsCharUnlocked(arg1); }
    inline virtual String * ArtistToText(int id) { return ptr::ArtistToText(this, id); }
    inline virtual void ReloadLabel(int characterID) { ptr::ReloadLabel(this, characterID); }
    inline ControllerSoundtrack * New(Controller * game) { return ptr::New(this, game); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline void _RegainFocus() { ptr::_RegainFocus(); }
    inline void GUICallback(int index, bool left) { ptr::GUICallback(this, index, left); }
    inline void Destructor() { ptr::Destructor(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static void (*ReloadSprites2)(ControllerSoundtrack * self, int characterID);
        static bool (*_IsCharUnlocked)(int arg1);
        static String * (*ArtistToText)(ControllerSoundtrack * self, int id);
        static void (*ReloadLabel)(ControllerSoundtrack * self, int characterID);
        static ControllerSoundtrack * (*New)(ControllerSoundtrack * self, Controller * game);
        static void (*Update)(ControllerSoundtrack * self);
        static void (*Render)(ControllerSoundtrack * self);
        static void (*_RegainFocus)();
        static void (*GUICallback)(ControllerSoundtrack * self, int index, bool left);
        static void (*Destructor)(ControllerSoundtrack * self);
        static void (*mark)(ControllerSoundtrack * self);
        static void (*CSTR_ControllerSoundtrack)(ControllerSoundtrack * self);
    };
};

#ifdef _WIN32

inline void (*ControllerSoundtrack::ptr::ReloadSprites2)(ControllerSoundtrack * self, int characterID) = (void (*)(ControllerSoundtrack * self, int characterID)) 0x6a5080;
inline bool (*ControllerSoundtrack::ptr::_IsCharUnlocked)(int arg1) = (bool (*)(int arg1)) 0x0;
inline String * (*ControllerSoundtrack::ptr::ArtistToText)(ControllerSoundtrack * self, int id) = (String * (*)(ControllerSoundtrack * self, int id)) 0x6a5290;
inline void (*ControllerSoundtrack::ptr::ReloadLabel)(ControllerSoundtrack * self, int characterID) = (void (*)(ControllerSoundtrack * self, int characterID)) 0x6a5410;
inline ControllerSoundtrack * (*ControllerSoundtrack::ptr::New)(ControllerSoundtrack * self, Controller * game) = (ControllerSoundtrack * (*)(ControllerSoundtrack * self, Controller * game)) 0x6a55c0;
inline void (*ControllerSoundtrack::ptr::Update)(ControllerSoundtrack * self) = (void (*)(ControllerSoundtrack * self)) 0x6935a0;
inline void (*ControllerSoundtrack::ptr::Render)(ControllerSoundtrack * self) = (void (*)(ControllerSoundtrack * self)) 0x6a5990;
inline void (*ControllerSoundtrack::ptr::_RegainFocus)() = (void (*)()) 0x0;
inline void (*ControllerSoundtrack::ptr::GUICallback)(ControllerSoundtrack * self, int index, bool left) = (void (*)(ControllerSoundtrack * self, int index, bool left)) 0x6a5d00;
inline void (*ControllerSoundtrack::ptr::Destructor)(ControllerSoundtrack * self) = (void (*)(ControllerSoundtrack * self)) 0x6a5d60;
inline void (*ControllerSoundtrack::ptr::mark)(ControllerSoundtrack * self) = (void (*)(ControllerSoundtrack * self)) 0x6a5db0;
inline void (*ControllerSoundtrack::ptr::CSTR_ControllerSoundtrack)(ControllerSoundtrack * self) = (void (*)(ControllerSoundtrack * self)) 0x6a4db0;
#endif

#ifdef __linux__

inline void (*ControllerSoundtrack::ptr::ReloadSprites2)(ControllerSoundtrack * self, int characterID) = (void (*)(ControllerSoundtrack * self, int characterID)) 0x8127270;
inline bool (*ControllerSoundtrack::ptr::_IsCharUnlocked)(int arg1) = (bool (*)(int arg1)) 0x81f08f0;
inline String * (*ControllerSoundtrack::ptr::ArtistToText)(ControllerSoundtrack * self, int id) = (String * (*)(ControllerSoundtrack * self, int id)) 0x80c1e60;
inline void (*ControllerSoundtrack::ptr::ReloadLabel)(ControllerSoundtrack * self, int characterID) = (void (*)(ControllerSoundtrack * self, int characterID)) 0x8247120;
inline ControllerSoundtrack * (*ControllerSoundtrack::ptr::New)(ControllerSoundtrack * self, Controller * game) = (ControllerSoundtrack * (*)(ControllerSoundtrack * self, Controller * game)) 0x81f0920;
inline void (*ControllerSoundtrack::ptr::Update)(ControllerSoundtrack * self) = (void (*)(ControllerSoundtrack * self)) 0x807a0e0;
inline void (*ControllerSoundtrack::ptr::Render)(ControllerSoundtrack * self) = (void (*)(ControllerSoundtrack * self)) 0x8107b50;
inline void (*ControllerSoundtrack::ptr::_RegainFocus)() = (void (*)()) 0x807a100;
inline void (*ControllerSoundtrack::ptr::GUICallback)(ControllerSoundtrack * self, int index, bool left) = (void (*)(ControllerSoundtrack * self, int index, bool left)) 0x82db2f0;
inline void (*ControllerSoundtrack::ptr::Destructor)(ControllerSoundtrack * self) = (void (*)(ControllerSoundtrack * self)) 0x807a110;
inline void (*ControllerSoundtrack::ptr::mark)(ControllerSoundtrack * self) = (void (*)(ControllerSoundtrack * self)) 0x80ad270;
inline void (*ControllerSoundtrack::ptr::CSTR_ControllerSoundtrack)(ControllerSoundtrack * self) = (void (*)(ControllerSoundtrack * self)) 0x81f02b0;
#endif
#endif
