// Generated automatically. Do not edit!
#ifndef _ControllerLoadDungeon_
#define _ControllerLoadDungeon_
template<class T> class Array;
class Checkbox;
class List12;
class OptionList;
class Sprite;
class String;
class TextLabel;
class TextSprite;
#include "Controller.hpp"

class ControllerLoadDungeon : public Controller  {
public:
    Controller * cGame;
    Sprite * overlayBlack;
    TextSprite * dungeonText;
    List12 * dungeonList;
    List12 * workshopDungeonList;
    OptionList * gui;
    TextLabel * pgUpText;
    Array<TextLabel *> * dungeonLabels;
    TextLabel * pgDownText;
    Checkbox * workshopBox;
    TextLabel * exitText;
    bool workshopToggle;
    int dungeonIndex;
    Array<String> * dungeonFilenames;
    String * chosenDungeon;

    // Wrappers
    ControllerLoadDungeon(Controller * game) {
        ptr::CSTR_ControllerLoadDungeon(this);
        ptr::New(this, game);
    }

    inline virtual void Refresh() { ptr::Refresh(this); }
    inline ControllerLoadDungeon * New(Controller * game) { return ptr::New(this, game); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline void _RegainFocus() { ptr::_RegainFocus(); }
    inline void GUICallback(int index, bool left) { ptr::GUICallback(this, index, left); }
    inline void Destructor() { ptr::Destructor(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static void (*Refresh)(ControllerLoadDungeon * self);
        static ControllerLoadDungeon * (*New)(ControllerLoadDungeon * self, Controller * game);
        static void (*Update)(ControllerLoadDungeon * self);
        static void (*Render)(ControllerLoadDungeon * self);
        static void (*_RegainFocus)();
        static void (*GUICallback)(ControllerLoadDungeon * self, int index, bool left);
        static void (*Destructor)(ControllerLoadDungeon * self);
        static void (*mark)(ControllerLoadDungeon * self);
        static void (*CSTR_ControllerLoadDungeon)(ControllerLoadDungeon * self);
    };
};

#ifdef _WIN32

void (*ControllerLoadDungeon::ptr::Refresh)(ControllerLoadDungeon * self) = (void (*)(ControllerLoadDungeon * self)) 0x68bf20;
ControllerLoadDungeon * (*ControllerLoadDungeon::ptr::New)(ControllerLoadDungeon * self, Controller * game) = (ControllerLoadDungeon * (*)(ControllerLoadDungeon * self, Controller * game)) 0x68c230;
void (*ControllerLoadDungeon::ptr::Update)(ControllerLoadDungeon * self) = (void (*)(ControllerLoadDungeon * self)) 0x68caf0;
void (*ControllerLoadDungeon::ptr::Render)(ControllerLoadDungeon * self) = (void (*)(ControllerLoadDungeon * self)) 0x68cb00;
void (*ControllerLoadDungeon::ptr::_RegainFocus)() = (void (*)()) 0x0;
void (*ControllerLoadDungeon::ptr::GUICallback)(ControllerLoadDungeon * self, int index, bool left) = (void (*)(ControllerLoadDungeon * self, int index, bool left)) 0x68ce50;
void (*ControllerLoadDungeon::ptr::Destructor)(ControllerLoadDungeon * self) = (void (*)(ControllerLoadDungeon * self)) 0x68cf40;
void (*ControllerLoadDungeon::ptr::mark)(ControllerLoadDungeon * self) = (void (*)(ControllerLoadDungeon * self)) 0x68cf90;
void (*ControllerLoadDungeon::ptr::CSTR_ControllerLoadDungeon)(ControllerLoadDungeon * self) = (void (*)(ControllerLoadDungeon * self)) 0x68b9c0;
#endif

#ifdef __linux__

void (*ControllerLoadDungeon::ptr::Refresh)(ControllerLoadDungeon * self) = (void (*)(ControllerLoadDungeon * self)) 0x80e4a40;
ControllerLoadDungeon * (*ControllerLoadDungeon::ptr::New)(ControllerLoadDungeon * self, Controller * game) = (ControllerLoadDungeon * (*)(ControllerLoadDungeon * self, Controller * game)) 0x81e38f0;
void (*ControllerLoadDungeon::ptr::Update)(ControllerLoadDungeon * self) = (void (*)(ControllerLoadDungeon * self)) 0x80790b0;
void (*ControllerLoadDungeon::ptr::Render)(ControllerLoadDungeon * self) = (void (*)(ControllerLoadDungeon * self)) 0x80d0270;
void (*ControllerLoadDungeon::ptr::_RegainFocus)() = (void (*)()) 0x80790d0;
void (*ControllerLoadDungeon::ptr::GUICallback)(ControllerLoadDungeon * self, int index, bool left) = (void (*)(ControllerLoadDungeon * self, int index, bool left)) 0x80e0570;
void (*ControllerLoadDungeon::ptr::Destructor)(ControllerLoadDungeon * self) = (void (*)(ControllerLoadDungeon * self)) 0x80790e0;
void (*ControllerLoadDungeon::ptr::mark)(ControllerLoadDungeon * self) = (void (*)(ControllerLoadDungeon * self)) 0x80af5d0;
void (*ControllerLoadDungeon::ptr::CSTR_ControllerLoadDungeon)(ControllerLoadDungeon * self) = (void (*)(ControllerLoadDungeon * self)) 0x81e3140;
#endif
#endif
