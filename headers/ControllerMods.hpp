// Generated automatically. Do not edit!
#ifndef _ControllerMods_
#define _ControllerMods_
template<class T> class Array;
class Checkbox;
class ControllerPopUp;
class GuiBorder;
class OptionList;
class Sprite;
class Stack5;
class String;
class TextLabel;
class TextSprite;
#include "Controller.hpp"

class ControllerMods : public Controller  {
public:
    Controller * cGame;
    bool isForPublishing;
    Sprite * overlayBlack;
    TextSprite * modText;
    TextSprite * infoText;
    TextSprite * publishingText;
    Stack5 * modList;
    OptionList * gui;
    int modStartIndex;
    Array<TextLabel *> * modLabels;
    int modEndIndex;
    int prevPageIndex;
    TextLabel * prevPageText;
    int nextPageIndex;
    TextLabel * nextPageText;
    Checkbox * defaultBox;
    int exitIndex;
    TextLabel * exitText;
    int modListOffset;
    ControllerPopUp * popUpController;
    bool wasPublishing;
    int publishedFrames;
    GuiBorder * border;

    // Wrappers
    ControllerMods(Controller * game, bool publish) {
        ptr::CSTR_ControllerMods(this);
        ptr::New(this, game, publish);
    }

    inline static String * GetModName(String * modPath) { return ptr::GetModName(modPath); }
    inline virtual void Refresh() { ptr::Refresh(this); }
    inline ControllerMods * New(Controller * game, bool publish) { return ptr::New(this, game, publish); }
    inline ControllerMods * _new2() { return ptr::_new2(); }
    inline virtual String * getModPath(int guiIndex) { return ptr::getModPath(this, guiIndex); }
    inline virtual void ActivateMod(String * modName) { ptr::ActivateMod(this, modName); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline void _RegainFocus() { ptr::_RegainFocus(); }
    inline virtual void Zip(String * modName, String * folder) { ptr::Zip(this, modName, folder); }
    inline void GUICallback(int index, bool left) { ptr::GUICallback(this, index, left); }
    inline void Destructor() { ptr::Destructor(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static String * (*GetModName)(String * modPath);
        static void (*Refresh)(ControllerMods * self);
        static ControllerMods * (*New)(ControllerMods * self, Controller * game, bool publish);
        static ControllerMods * (*_new2)();
        static String * (*getModPath)(ControllerMods * self, int guiIndex);
        static void (*ActivateMod)(ControllerMods * self, String * modName);
        static void (*Update)(ControllerMods * self);
        static void (*Render)(ControllerMods * self);
        static void (*_RegainFocus)();
        static void (*Zip)(ControllerMods * self, String * modName, String * folder);
        static void (*GUICallback)(ControllerMods * self, int index, bool left);
        static void (*Destructor)(ControllerMods * self);
        static void (*mark)(ControllerMods * self);
        static void (*CSTR_ControllerMods)(ControllerMods * self);
    };
};

#ifdef _WIN32

String * (*ControllerMods::ptr::GetModName)(String * modPath) = (String * (*)(String * modPath)) 0x6ab1e0;
void (*ControllerMods::ptr::Refresh)(ControllerMods * self) = (void (*)(ControllerMods * self)) 0x6ab2c0;
ControllerMods * (*ControllerMods::ptr::New)(ControllerMods * self, Controller * game, bool publish) = (ControllerMods * (*)(ControllerMods * self, Controller * game, bool publish)) 0x6ab480;
ControllerMods * (*ControllerMods::ptr::_new2)() = (ControllerMods * (*)()) 0x0;
String * (*ControllerMods::ptr::getModPath)(ControllerMods * self, int guiIndex) = (String * (*)(ControllerMods * self, int guiIndex)) 0x6abe50;
void (*ControllerMods::ptr::ActivateMod)(ControllerMods * self, String * modName) = (void (*)(ControllerMods * self, String * modName)) 0x6abec0;
void (*ControllerMods::ptr::Update)(ControllerMods * self) = (void (*)(ControllerMods * self)) 0x6ac220;
void (*ControllerMods::ptr::Render)(ControllerMods * self) = (void (*)(ControllerMods * self)) 0x6ac2c0;
void (*ControllerMods::ptr::_RegainFocus)() = (void (*)()) 0x0;
void (*ControllerMods::ptr::Zip)(ControllerMods * self, String * modName, String * folder) = (void (*)(ControllerMods * self, String * modName, String * folder)) 0x6ac870;
void (*ControllerMods::ptr::GUICallback)(ControllerMods * self, int index, bool left) = (void (*)(ControllerMods * self, int index, bool left)) 0x6acb90;
void (*ControllerMods::ptr::Destructor)(ControllerMods * self) = (void (*)(ControllerMods * self)) 0x6ad2e0;
void (*ControllerMods::ptr::mark)(ControllerMods * self) = (void (*)(ControllerMods * self)) 0x6ad340;
void (*ControllerMods::ptr::CSTR_ControllerMods)(ControllerMods * self) = (void (*)(ControllerMods * self)) 0x6aace0;
#endif

#ifdef __linux__

String * (*ControllerMods::ptr::GetModName)(String * modPath) = (String * (*)(String * modPath)) 0x81f3c80;
void (*ControllerMods::ptr::Refresh)(ControllerMods * self) = (void (*)(ControllerMods * self)) 0x80e5950;
ControllerMods * (*ControllerMods::ptr::New)(ControllerMods * self, Controller * game, bool publish) = (ControllerMods * (*)(ControllerMods * self, Controller * game, bool publish)) 0x81f3d00;
ControllerMods * (*ControllerMods::ptr::_new2)() = (ControllerMods * (*)()) 0x81f4eb0;
String * (*ControllerMods::ptr::getModPath)(ControllerMods * self, int guiIndex) = (String * (*)(ControllerMods * self, int guiIndex)) 0x807a3e0;
void (*ControllerMods::ptr::ActivateMod)(ControllerMods * self, String * modName) = (void (*)(ControllerMods * self, String * modName)) 0x83dbab0;
void (*ControllerMods::ptr::Update)(ControllerMods * self) = (void (*)(ControllerMods * self)) 0x80c5090;
void (*ControllerMods::ptr::Render)(ControllerMods * self) = (void (*)(ControllerMods * self)) 0x80ce5a0;
void (*ControllerMods::ptr::_RegainFocus)() = (void (*)()) 0x807a430;
void (*ControllerMods::ptr::Zip)(ControllerMods * self, String * modName, String * folder) = (void (*)(ControllerMods * self, String * modName, String * folder)) 0x80f6540;
void (*ControllerMods::ptr::GUICallback)(ControllerMods * self, int index, bool left) = (void (*)(ControllerMods * self, int index, bool left)) 0x827c420;
void (*ControllerMods::ptr::Destructor)(ControllerMods * self) = (void (*)(ControllerMods * self)) 0x807a440;
void (*ControllerMods::ptr::mark)(ControllerMods * self) = (void (*)(ControllerMods * self)) 0x80ace00;
void (*ControllerMods::ptr::CSTR_ControllerMods)(ControllerMods * self) = (void (*)(ControllerMods * self)) 0x81f3360;
#endif
#endif
