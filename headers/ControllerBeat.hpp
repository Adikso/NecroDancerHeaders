// Generated automatically. Do not edit!
#ifndef _ControllerBeat_
#define _ControllerBeat_
class List25;
class Sprite;
class String;
class TextLabel;
#include "Controller.hpp"

class ControllerBeat : public Controller  {
public:
    int retval;
    Sprite * beatTarget;
    List25 * beats;
    String * filename;
    String * songName;
    int state;
    int beatFrames;
    TextLabel * title;
    TextLabel * instructions;
    TextLabel * instructions2;
    TextLabel * instructions3;

    // Wrappers
    ControllerBeat(String * fName, int songIndex, int playlistIndex) {
        ptr::CSTR_ControllerBeat(this);
        ptr::New(this, fName, songIndex, playlistIndex);
    }

    inline ControllerBeat * New(String * fName, int songIndex, int playlistIndex) { return ptr::New(this, fName, songIndex, playlistIndex); }
    inline ControllerBeat * _new2() { return ptr::_new2(); }
    inline void _RegainFocus() { ptr::_RegainFocus(); }
    inline virtual void WriteBeatFile() { ptr::WriteBeatFile(this); }
    inline virtual bool DirWasHit() { return ptr::DirWasHit(this); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline void Destructor() { ptr::Destructor(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static ControllerBeat * (*New)(ControllerBeat * self, String * fName, int songIndex, int playlistIndex);
        static ControllerBeat * (*_new2)();
        static void (*_RegainFocus)();
        static void (*WriteBeatFile)(ControllerBeat * self);
        static bool (*DirWasHit)(ControllerBeat * self);
        static void (*Update)(ControllerBeat * self);
        static void (*Render)(ControllerBeat * self);
        static void (*Destructor)(ControllerBeat * self);
        static void (*mark)(ControllerBeat * self);
        static void (*CSTR_ControllerBeat)(ControllerBeat * self);
    };
};

#ifdef _WIN32

ControllerBeat * (*ControllerBeat::ptr::New)(ControllerBeat * self, String * fName, int songIndex, int playlistIndex) = (ControllerBeat * (*)(ControllerBeat * self, String * fName, int songIndex, int playlistIndex)) 0x6a9ee0;
ControllerBeat * (*ControllerBeat::ptr::_new2)() = (ControllerBeat * (*)()) 0x0;
void (*ControllerBeat::ptr::_RegainFocus)() = (void (*)()) 0x0;
void (*ControllerBeat::ptr::WriteBeatFile)(ControllerBeat * self) = (void (*)(ControllerBeat * self)) 0x6aa280;
bool (*ControllerBeat::ptr::DirWasHit)(ControllerBeat * self) = (bool (*)(ControllerBeat * self)) 0x6aa5b0;
void (*ControllerBeat::ptr::Update)(ControllerBeat * self) = (void (*)(ControllerBeat * self)) 0x6aa820;
void (*ControllerBeat::ptr::Render)(ControllerBeat * self) = (void (*)(ControllerBeat * self)) 0x6aa900;
void (*ControllerBeat::ptr::Destructor)(ControllerBeat * self) = (void (*)(ControllerBeat * self)) 0x6aaaa0;
void (*ControllerBeat::ptr::mark)(ControllerBeat * self) = (void (*)(ControllerBeat * self)) 0x6aaad0;
void (*ControllerBeat::ptr::CSTR_ControllerBeat)(ControllerBeat * self) = (void (*)(ControllerBeat * self)) 0x6a9a60;
#endif

#ifdef __linux__

ControllerBeat * (*ControllerBeat::ptr::New)(ControllerBeat * self, String * fName, int songIndex, int playlistIndex) = (ControllerBeat * (*)(ControllerBeat * self, String * fName, int songIndex, int playlistIndex)) 0x8367820;
ControllerBeat * (*ControllerBeat::ptr::_new2)() = (ControllerBeat * (*)()) 0x81f32b0;
void (*ControllerBeat::ptr::_RegainFocus)() = (void (*)()) 0x807a390;
void (*ControllerBeat::ptr::WriteBeatFile)(ControllerBeat * self) = (void (*)(ControllerBeat * self)) 0x8301a10;
bool (*ControllerBeat::ptr::DirWasHit)(ControllerBeat * self) = (bool (*)(ControllerBeat * self)) 0x81112e0;
void (*ControllerBeat::ptr::Update)(ControllerBeat * self) = (void (*)(ControllerBeat * self)) 0x8314180;
void (*ControllerBeat::ptr::Render)(ControllerBeat * self) = (void (*)(ControllerBeat * self)) 0x84079c0;
void (*ControllerBeat::ptr::Destructor)(ControllerBeat * self) = (void (*)(ControllerBeat * self)) 0x807a3a0;
void (*ControllerBeat::ptr::mark)(ControllerBeat * self) = (void (*)(ControllerBeat * self)) 0x80a8340;
void (*ControllerBeat::ptr::CSTR_ControllerBeat)(ControllerBeat * self) = (void (*)(ControllerBeat * self)) 0x81f2f90;
#endif
#endif
