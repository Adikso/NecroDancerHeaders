// Generated automatically. Do not edit!
#ifndef _ControllerMusic_
#define _ControllerMusic_
template<class T> class Array;
class Checkbox;
class ControllerBeat;
class FileChooser;
class GuiBorder;
class OptionList;
class Sprite;
class String;
class TextLabel;
class TextSprite;
#include "Controller.hpp"

class ControllerMusic : public Controller  {
public:
    Controller * cGame;
    Sprite * overlayBlack;
    TextSprite * musicText;
    TextSprite * musicText2;
    TextSprite * processingText;
    TextSprite * acknowledgementText;
    OptionList * gui;
    Array<TextLabel *> * songLabels;
    TextLabel * modeText;
    TextLabel * exitText;
    OptionList * gui2;
    TextLabel * chooseText;
    TextLabel * defaultText;
    Checkbox * doubleSpeedBox;
    Checkbox * halfSpeedBox;
    TextLabel * manualBeatLabel;
    TextLabel * backText;
    FileChooser * fileChooser;
    bool songSelected;
    String * filebrowserResult;
    bool wasFullscreen;
    int songIndex;
    bool useFilebrowser;
    int processStep;
    bool gui2Active;
    GuiBorder * border;
    ControllerBeat * cBeat;

    // Wrappers
    ControllerMusic(Controller * game) {
        ptr::CSTR_ControllerMusic(this);
        ptr::New(this, game);
    }

    inline virtual String * GetBaseTextForIndex(int index) { return ptr::GetBaseTextForIndex(this, index); }
    inline virtual void RefreshModeText() { ptr::RefreshModeText(this); }
    inline ControllerMusic * New(Controller * game) { return ptr::New(this, game); }
    inline virtual void ProcessCustomSong(String * filepath, String * filename) { ptr::ProcessCustomSong(this, filepath, filename); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline void RegainFocus() { ptr::RegainFocus(this); }
    inline void GUICallback(int index, bool left) { ptr::GUICallback(this, index, left); }
    inline void Destructor() { ptr::Destructor(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static String * (*GetBaseTextForIndex)(ControllerMusic * self, int index);
        static void (*RefreshModeText)(ControllerMusic * self);
        static ControllerMusic * (*New)(ControllerMusic * self, Controller * game);
        static void (*ProcessCustomSong)(ControllerMusic * self, String * filepath, String * filename);
        static void (*Update)(ControllerMusic * self);
        static void (*Render)(ControllerMusic * self);
        static void (*RegainFocus)(ControllerMusic * self);
        static void (*GUICallback)(ControllerMusic * self, int index, bool left);
        static void (*Destructor)(ControllerMusic * self);
        static void (*mark)(ControllerMusic * self);
        static void (*CSTR_ControllerMusic)(ControllerMusic * self);
    };
};

#ifdef _WIN32

inline String * (*ControllerMusic::ptr::GetBaseTextForIndex)(ControllerMusic * self, int index) = (String * (*)(ControllerMusic * self, int index)) 0x698370;
inline void (*ControllerMusic::ptr::RefreshModeText)(ControllerMusic * self) = (void (*)(ControllerMusic * self)) 0x698800;
inline ControllerMusic * (*ControllerMusic::ptr::New)(ControllerMusic * self, Controller * game) = (ControllerMusic * (*)(ControllerMusic * self, Controller * game)) 0x698910;
inline void (*ControllerMusic::ptr::ProcessCustomSong)(ControllerMusic * self, String * filepath, String * filename) = (void (*)(ControllerMusic * self, String * filepath, String * filename)) 0x6993e0;
inline void (*ControllerMusic::ptr::Update)(ControllerMusic * self) = (void (*)(ControllerMusic * self)) 0x6995c0;
inline void (*ControllerMusic::ptr::Render)(ControllerMusic * self) = (void (*)(ControllerMusic * self)) 0x69a230;
inline void (*ControllerMusic::ptr::RegainFocus)(ControllerMusic * self) = (void (*)(ControllerMusic * self)) 0x69a9e0;
inline void (*ControllerMusic::ptr::GUICallback)(ControllerMusic * self, int index, bool left) = (void (*)(ControllerMusic * self, int index, bool left)) 0x69aa50;
inline void (*ControllerMusic::ptr::Destructor)(ControllerMusic * self) = (void (*)(ControllerMusic * self)) 0x69b0a0;
inline void (*ControllerMusic::ptr::mark)(ControllerMusic * self) = (void (*)(ControllerMusic * self)) 0x69b140;
inline void (*ControllerMusic::ptr::CSTR_ControllerMusic)(ControllerMusic * self) = (void (*)(ControllerMusic * self)) 0x697bd0;
#endif

#ifdef __linux__

inline String * (*ControllerMusic::ptr::GetBaseTextForIndex)(ControllerMusic * self, int index) = (String * (*)(ControllerMusic * self, int index)) 0x80c8eb0;
inline void (*ControllerMusic::ptr::RefreshModeText)(ControllerMusic * self) = (void (*)(ControllerMusic * self)) 0x810b1e0;
inline ControllerMusic * (*ControllerMusic::ptr::New)(ControllerMusic * self, Controller * game) = (ControllerMusic * (*)(ControllerMusic * self, Controller * game)) 0x81ebb50;
inline void (*ControllerMusic::ptr::ProcessCustomSong)(ControllerMusic * self, String * filepath, String * filename) = (void (*)(ControllerMusic * self, String * filepath, String * filename)) 0x814df30;
inline void (*ControllerMusic::ptr::Update)(ControllerMusic * self) = (void (*)(ControllerMusic * self)) 0x8114e10;
inline void (*ControllerMusic::ptr::Render)(ControllerMusic * self) = (void (*)(ControllerMusic * self)) 0x80cf5a0;
inline void (*ControllerMusic::ptr::RegainFocus)(ControllerMusic * self) = (void (*)(ControllerMusic * self)) 0x8365600;
inline void (*ControllerMusic::ptr::GUICallback)(ControllerMusic * self, int index, bool left) = (void (*)(ControllerMusic * self, int index, bool left)) 0x8367da0;
inline void (*ControllerMusic::ptr::Destructor)(ControllerMusic * self) = (void (*)(ControllerMusic * self)) 0x8079a80;
inline void (*ControllerMusic::ptr::mark)(ControllerMusic * self) = (void (*)(ControllerMusic * self)) 0x80ad900;
inline void (*ControllerMusic::ptr::CSTR_ControllerMusic)(ControllerMusic * self) = (void (*)(ControllerMusic * self)) 0x81e9ba0;
#endif
#endif
