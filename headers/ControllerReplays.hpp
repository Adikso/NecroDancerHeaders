// Generated automatically. Do not edit!
#ifndef _ControllerReplays_
#define _ControllerReplays_
template<class T> class Array;
class GuiBorder;
class List12;
class OptionList;
class Sprite;
class String;
class TextLabel;
class TextSprite;
#include "Controller.hpp"

class ControllerReplays : public Controller  {
public:
    Controller * cGame;
    Sprite * overlayBlack;
    TextSprite * replayText;
    List12 * replayList;
    OptionList * gui;
    TextLabel * pgUpText;
    Array<TextLabel *> * replayLabels;
    TextLabel * pgDownText;
    TextLabel * exitText;
    int replayIndex;
    Array<String> * replayFilenames;
    GuiBorder * border;

    // Wrappers
    ControllerReplays(Controller * game) {
        ptr::CSTR_ControllerReplays(this);
        ptr::New(this, game);
    }

    inline virtual String * FormatReplayString(String * filename) { return ptr::FormatReplayString(this, filename); }
    inline virtual void Refresh() { ptr::Refresh(this); }
    inline ControllerReplays * New(Controller * game) { return ptr::New(this, game); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline void _RegainFocus() { ptr::_RegainFocus(); }
    inline void GUICallback(int index, bool left) { ptr::GUICallback(this, index, left); }
    inline void Destructor() { ptr::Destructor(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static String * (*FormatReplayString)(ControllerReplays * self, String * filename);
        static void (*Refresh)(ControllerReplays * self);
        static ControllerReplays * (*New)(ControllerReplays * self, Controller * game);
        static void (*Update)(ControllerReplays * self);
        static void (*Render)(ControllerReplays * self);
        static void (*_RegainFocus)();
        static void (*GUICallback)(ControllerReplays * self, int index, bool left);
        static void (*Destructor)(ControllerReplays * self);
        static void (*mark)(ControllerReplays * self);
        static void (*CSTR_ControllerReplays)(ControllerReplays * self);
    };
};

#ifdef _WIN32

inline String * (*ControllerReplays::ptr::FormatReplayString)(ControllerReplays * self, String * filename) = (String * (*)(ControllerReplays * self, String * filename)) 0x6941e0;
inline void (*ControllerReplays::ptr::Refresh)(ControllerReplays * self) = (void (*)(ControllerReplays * self)) 0x6955e0;
inline ControllerReplays * (*ControllerReplays::ptr::New)(ControllerReplays * self, Controller * game) = (ControllerReplays * (*)(ControllerReplays * self, Controller * game)) 0x695840;
inline void (*ControllerReplays::ptr::Update)(ControllerReplays * self) = (void (*)(ControllerReplays * self)) 0x695f20;
inline void (*ControllerReplays::ptr::Render)(ControllerReplays * self) = (void (*)(ControllerReplays * self)) 0x695f30;
inline void (*ControllerReplays::ptr::_RegainFocus)() = (void (*)()) 0x0;
inline void (*ControllerReplays::ptr::GUICallback)(ControllerReplays * self, int index, bool left) = (void (*)(ControllerReplays * self, int index, bool left)) 0x6961f0;
inline void (*ControllerReplays::ptr::Destructor)(ControllerReplays * self) = (void (*)(ControllerReplays * self)) 0x6963b0;
inline void (*ControllerReplays::ptr::mark)(ControllerReplays * self) = (void (*)(ControllerReplays * self)) 0x696400;
inline void (*ControllerReplays::ptr::CSTR_ControllerReplays)(ControllerReplays * self) = (void (*)(ControllerReplays * self)) 0x693e30;
#endif

#ifdef __linux__

inline String * (*ControllerReplays::ptr::FormatReplayString)(ControllerReplays * self, String * filename) = (String * (*)(ControllerReplays * self, String * filename)) 0x8118ed0;
inline void (*ControllerReplays::ptr::Refresh)(ControllerReplays * self) = (void (*)(ControllerReplays * self)) 0x80d8550;
inline ControllerReplays * (*ControllerReplays::ptr::New)(ControllerReplays * self, Controller * game) = (ControllerReplays * (*)(ControllerReplays * self, Controller * game)) 0x81e7e90;
inline void (*ControllerReplays::ptr::Update)(ControllerReplays * self) = (void (*)(ControllerReplays * self)) 0x8079900;
inline void (*ControllerReplays::ptr::Render)(ControllerReplays * self) = (void (*)(ControllerReplays * self)) 0x80cfdd0;
inline void (*ControllerReplays::ptr::_RegainFocus)() = (void (*)()) 0x8079920;
inline void (*ControllerReplays::ptr::GUICallback)(ControllerReplays * self, int index, bool left) = (void (*)(ControllerReplays * self, int index, bool left)) 0x837ab90;
inline void (*ControllerReplays::ptr::Destructor)(ControllerReplays * self) = (void (*)(ControllerReplays * self)) 0x8079930;
inline void (*ControllerReplays::ptr::mark)(ControllerReplays * self) = (void (*)(ControllerReplays * self)) 0x80af240;
inline void (*ControllerReplays::ptr::CSTR_ControllerReplays)(ControllerReplays * self) = (void (*)(ControllerReplays * self)) 0x81e77b0;
#endif
#endif
