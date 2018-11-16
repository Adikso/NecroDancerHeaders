// Generated automatically. Do not edit!
#ifndef _ControllerPopUp_
#define _ControllerPopUp_
class GuiBorder;
class OptionList;
class Sprite;
class String;
class TextLabel;
class TextSprite;
#include "Controller.hpp"

class ControllerPopUp : public Controller  {
public:
    bool cachedScaleVal;
    Controller * cGame;
    bool option1Default;
    bool option2Exists;
    String * popupTextVal;
    String * popupText2Val;
    String * popupText3Val;
    String * popupText4Val;
    bool ignoreInput;
    Sprite * overlayBlack;
    TextSprite * popupText;
    TextSprite * popupText2;
    TextLabel * option1Text;
    TextLabel * option2Text;
    OptionList * gui;
    int retval;
    Sprite * bestiaryImage;
    GuiBorder * border;

    // Wrappers
    ControllerPopUp(Controller * game, String * pText, String * pText2, String * pText3, String * option1, String * option2, bool opt1Default, bool ignoreInpt, String * pText4) {
        ptr::CSTR_ControllerPopUp(this);
        ptr::New(this, game, pText, pText2, pText3, option1, option2, opt1Default, ignoreInpt, pText4);
    }

    inline ControllerPopUp * New(Controller * game, String * pText, String * pText2, String * pText3, String * option1, String * option2, bool opt1Default, bool ignoreInpt, String * pText4) { return ptr::New(this, game, pText, pText2, pText3, option1, option2, opt1Default, ignoreInpt, pText4); }
    inline ControllerPopUp * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline void _RegainFocus() { ptr::_RegainFocus(); }
    inline void GUICallback(int index, bool left) { ptr::GUICallback(this, index, left); }
    inline void Destructor() { ptr::Destructor(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static ControllerPopUp * (*New)(ControllerPopUp * self, Controller * game, String * pText, String * pText2, String * pText3, String * option1, String * option2, bool opt1Default, bool ignoreInpt, String * pText4);
        static ControllerPopUp * (*_new2)();
        static void (*Update)(ControllerPopUp * self);
        static void (*Render)(ControllerPopUp * self);
        static void (*_RegainFocus)();
        static void (*GUICallback)(ControllerPopUp * self, int index, bool left);
        static void (*Destructor)(ControllerPopUp * self);
        static void (*mark)(ControllerPopUp * self);
        static void (*CSTR_ControllerPopUp)(ControllerPopUp * self);
    };
};

#ifdef _WIN32

inline ControllerPopUp * (*ControllerPopUp::ptr::New)(ControllerPopUp * self, Controller * game, String * pText, String * pText2, String * pText3, String * option1, String * option2, bool opt1Default, bool ignoreInpt, String * pText4) = (ControllerPopUp * (*)(ControllerPopUp * self, Controller * game, String * pText, String * pText2, String * pText3, String * option1, String * option2, bool opt1Default, bool ignoreInpt, String * pText4)) 0x53c630;
inline ControllerPopUp * (*ControllerPopUp::ptr::_new2)() = (ControllerPopUp * (*)()) 0x0;
inline void (*ControllerPopUp::ptr::Update)(ControllerPopUp * self) = (void (*)(ControllerPopUp * self)) 0x53cae0;
inline void (*ControllerPopUp::ptr::Render)(ControllerPopUp * self) = (void (*)(ControllerPopUp * self)) 0x53caf0;
inline void (*ControllerPopUp::ptr::_RegainFocus)() = (void (*)()) 0x0;
inline void (*ControllerPopUp::ptr::GUICallback)(ControllerPopUp * self, int index, bool left) = (void (*)(ControllerPopUp * self, int index, bool left)) 0x53d1d0;
inline void (*ControllerPopUp::ptr::Destructor)(ControllerPopUp * self) = (void (*)(ControllerPopUp * self)) 0x53d210;
inline void (*ControllerPopUp::ptr::mark)(ControllerPopUp * self) = (void (*)(ControllerPopUp * self)) 0x53d240;
inline void (*ControllerPopUp::ptr::CSTR_ControllerPopUp)(ControllerPopUp * self) = (void (*)(ControllerPopUp * self)) 0x53c110;
#endif

#ifdef __linux__

inline ControllerPopUp * (*ControllerPopUp::ptr::New)(ControllerPopUp * self, Controller * game, String * pText, String * pText2, String * pText3, String * option1, String * option2, bool opt1Default, bool ignoreInpt, String * pText4) = (ControllerPopUp * (*)(ControllerPopUp * self, Controller * game, String * pText, String * pText2, String * pText3, String * option1, String * option2, bool opt1Default, bool ignoreInpt, String * pText4)) 0x814c2c0;
inline ControllerPopUp * (*ControllerPopUp::ptr::_new2)() = (ControllerPopUp * (*)()) 0x8145d50;
inline void (*ControllerPopUp::ptr::Update)(ControllerPopUp * self) = (void (*)(ControllerPopUp * self)) 0x806f3c0;
inline void (*ControllerPopUp::ptr::Render)(ControllerPopUp * self) = (void (*)(ControllerPopUp * self)) 0x80cd1f0;
inline void (*ControllerPopUp::ptr::_RegainFocus)() = (void (*)()) 0x806f3e0;
inline void (*ControllerPopUp::ptr::GUICallback)(ControllerPopUp * self, int index, bool left) = (void (*)(ControllerPopUp * self, int index, bool left)) 0x807e5f0;
inline void (*ControllerPopUp::ptr::Destructor)(ControllerPopUp * self) = (void (*)(ControllerPopUp * self)) 0x806f3f0;
inline void (*ControllerPopUp::ptr::mark)(ControllerPopUp * self) = (void (*)(ControllerPopUp * self)) 0x80a79c0;
inline void (*ControllerPopUp::ptr::CSTR_ControllerPopUp)(ControllerPopUp * self) = (void (*)(ControllerPopUp * self)) 0x8146f60;
#endif
#endif
