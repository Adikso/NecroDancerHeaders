// Generated automatically. Do not edit!
#ifndef _ControllerInputPopup_
#define _ControllerInputPopup_
class GuiBorder;
class Sprite;
class String;
class TextInput;
class TextSprite;
#include "Controller.hpp"

class ControllerInputPopup : public Controller  {
public:
    String * result;
    Controller * cGame;
    String * text1;
    String * text2;
    bool isDebug;
    TextInput * inputText;
    TextInput * inputText2;
    Sprite * overlayBlack;
    TextSprite * popupText;
    TextSprite * popupText2;
    bool useInput2;
    GuiBorder * border;

    // Wrappers
    ControllerInputPopup(Controller * game, String * txt1, String * txt2, bool dbg) {
        ptr::CSTR_ControllerInputPopup(this);
        ptr::New(this, game, txt1, txt2, dbg);
    }

    inline ControllerInputPopup * New(Controller * game, String * txt1, String * txt2, bool dbg) { return ptr::New(this, game, txt1, txt2, dbg); }
    inline ControllerInputPopup * _new2() { return ptr::_new2(); }
    inline void GUICallback(int index, bool left) { ptr::GUICallback(this, index, left); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline void _RegainFocus() { ptr::_RegainFocus(); }
    inline void Destructor() { ptr::Destructor(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static ControllerInputPopup * (*New)(ControllerInputPopup * self, Controller * game, String * txt1, String * txt2, bool dbg);
        static ControllerInputPopup * (*_new2)();
        static void (*GUICallback)(ControllerInputPopup * self, int index, bool left);
        static void (*Update)(ControllerInputPopup * self);
        static void (*Render)(ControllerInputPopup * self);
        static void (*_RegainFocus)();
        static void (*Destructor)(ControllerInputPopup * self);
        static void (*mark)(ControllerInputPopup * self);
        static void (*CSTR_ControllerInputPopup)(ControllerInputPopup * self);
    };
};

#ifdef _WIN32

inline ControllerInputPopup * (*ControllerInputPopup::ptr::New)(ControllerInputPopup * self, Controller * game, String * txt1, String * txt2, bool dbg) = (ControllerInputPopup * (*)(ControllerInputPopup * self, Controller * game, String * txt1, String * txt2, bool dbg)) 0x682370;
inline ControllerInputPopup * (*ControllerInputPopup::ptr::_new2)() = (ControllerInputPopup * (*)()) 0x0;
inline void (*ControllerInputPopup::ptr::GUICallback)(ControllerInputPopup * self, int index, bool left) = (void (*)(ControllerInputPopup * self, int index, bool left)) 0x682770;
inline void (*ControllerInputPopup::ptr::Update)(ControllerInputPopup * self) = (void (*)(ControllerInputPopup * self)) 0x682810;
inline void (*ControllerInputPopup::ptr::Render)(ControllerInputPopup * self) = (void (*)(ControllerInputPopup * self)) 0x6831e0;
inline void (*ControllerInputPopup::ptr::_RegainFocus)() = (void (*)()) 0x0;
inline void (*ControllerInputPopup::ptr::Destructor)(ControllerInputPopup * self) = (void (*)(ControllerInputPopup * self)) 0x683430;
inline void (*ControllerInputPopup::ptr::mark)(ControllerInputPopup * self) = (void (*)(ControllerInputPopup * self)) 0x683460;
inline void (*ControllerInputPopup::ptr::CSTR_ControllerInputPopup)(ControllerInputPopup * self) = (void (*)(ControllerInputPopup * self)) 0x682000;
#endif

#ifdef __linux__

inline ControllerInputPopup * (*ControllerInputPopup::ptr::New)(ControllerInputPopup * self, Controller * game, String * txt1, String * txt2, bool dbg) = (ControllerInputPopup * (*)(ControllerInputPopup * self, Controller * game, String * txt1, String * txt2, bool dbg)) 0x820d670;
inline ControllerInputPopup * (*ControllerInputPopup::ptr::_new2)() = (ControllerInputPopup * (*)()) 0x81e0330;
inline void (*ControllerInputPopup::ptr::GUICallback)(ControllerInputPopup * self, int index, bool left) = (void (*)(ControllerInputPopup * self, int index, bool left)) 0x80e0510;
inline void (*ControllerInputPopup::ptr::Update)(ControllerInputPopup * self) = (void (*)(ControllerInputPopup * self)) 0x8154290;
inline void (*ControllerInputPopup::ptr::Render)(ControllerInputPopup * self) = (void (*)(ControllerInputPopup * self)) 0x80c5150;
inline void (*ControllerInputPopup::ptr::_RegainFocus)() = (void (*)()) 0x80789f0;
inline void (*ControllerInputPopup::ptr::Destructor)(ControllerInputPopup * self) = (void (*)(ControllerInputPopup * self)) 0x8078a00;
inline void (*ControllerInputPopup::ptr::mark)(ControllerInputPopup * self) = (void (*)(ControllerInputPopup * self)) 0x80a9c20;
inline void (*ControllerInputPopup::ptr::CSTR_ControllerInputPopup)(ControllerInputPopup * self) = (void (*)(ControllerInputPopup * self)) 0x81dff20;
#endif
#endif
