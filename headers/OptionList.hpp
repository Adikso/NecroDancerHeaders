// Generated automatically. Do not edit!
#ifndef _OptionList_
#define _OptionList_
template<class T> class Array;
class GuiComponent;
class GuiContainer;
#include "Object.hpp"

class OptionList : public Object  {
public:
    GuiContainer * cont;
    bool wrap;
    int callbackOffset;
    int numOptions;
    Array<GuiComponent *> * options;
    int selectedIndex;

    // Wrappers
    OptionList(GuiContainer * c, bool w, int cOff) {
        ptr::CSTR_OptionList(this);
        ptr::New(this, c, w, cOff);
    }

    inline OptionList * New(GuiContainer * c, bool w, int cOff) { return ptr::New(this, c, w, cOff); }
    inline OptionList * _new2() { return ptr::_new2(); }
    inline virtual void Add5(GuiComponent * g) { ptr::Add5(this, g); }
    inline virtual void SetSelectedIndex(int index) { ptr::SetSelectedIndex(this, index); }
    inline virtual void Cancel() { ptr::Cancel(this); }
    inline virtual void Confirm() { ptr::Confirm(this); }
    inline virtual void PrevOption() { ptr::PrevOption(this); }
    inline virtual void NextOption() { ptr::NextOption(this); }
    inline virtual void PollInput() { ptr::PollInput(this); }
    inline virtual GuiComponent * GetSelected() { return ptr::GetSelected(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static OptionList * (*New)(OptionList * self, GuiContainer * c, bool w, int cOff);
        static OptionList * (*_new2)();
        static void (*Add5)(OptionList * self, GuiComponent * g);
        static void (*SetSelectedIndex)(OptionList * self, int index);
        static void (*Cancel)(OptionList * self);
        static void (*Confirm)(OptionList * self);
        static void (*PrevOption)(OptionList * self);
        static void (*NextOption)(OptionList * self);
        static void (*PollInput)(OptionList * self);
        static GuiComponent * (*GetSelected)(OptionList * self);
        static void (*mark)(OptionList * self);
        static void (*CSTR_OptionList)(OptionList * self);
    };
};

#ifdef _WIN32

inline OptionList * (*OptionList::ptr::New)(OptionList * self, GuiContainer * c, bool w, int cOff) = (OptionList * (*)(OptionList * self, GuiContainer * c, bool w, int cOff)) 0x5423d0;
inline OptionList * (*OptionList::ptr::_new2)() = (OptionList * (*)()) 0x0;
inline void (*OptionList::ptr::Add5)(OptionList * self, GuiComponent * g) = (void (*)(OptionList * self, GuiComponent * g)) 0x542440;
inline void (*OptionList::ptr::SetSelectedIndex)(OptionList * self, int index) = (void (*)(OptionList * self, int index)) 0x542490;
inline void (*OptionList::ptr::Cancel)(OptionList * self) = (void (*)(OptionList * self)) 0x5424d0;
inline void (*OptionList::ptr::Confirm)(OptionList * self) = (void (*)(OptionList * self)) 0x542590;
inline void (*OptionList::ptr::PrevOption)(OptionList * self) = (void (*)(OptionList * self)) 0x5426c0;
inline void (*OptionList::ptr::NextOption)(OptionList * self) = (void (*)(OptionList * self)) 0x5427e0;
inline void (*OptionList::ptr::PollInput)(OptionList * self) = (void (*)(OptionList * self)) 0x542900;
inline GuiComponent * (*OptionList::ptr::GetSelected)(OptionList * self) = (GuiComponent * (*)(OptionList * self)) 0x542af0;
inline void (*OptionList::ptr::mark)(OptionList * self) = (void (*)(OptionList * self)) 0x542b00;
inline void (*OptionList::ptr::CSTR_OptionList)(OptionList * self) = (void (*)(OptionList * self)) 0x542320;
#endif

#ifdef __linux__

inline OptionList * (*OptionList::ptr::New)(OptionList * self, GuiContainer * c, bool w, int cOff) = (OptionList * (*)(OptionList * self, GuiContainer * c, bool w, int cOff)) 0x814d760;
inline OptionList * (*OptionList::ptr::_new2)() = (OptionList * (*)()) 0x814d7e0;
inline void (*OptionList::ptr::Add5)(OptionList * self, GuiComponent * g) = (void (*)(OptionList * self, GuiComponent * g)) 0x8082540;
inline void (*OptionList::ptr::SetSelectedIndex)(OptionList * self, int index) = (void (*)(OptionList * self, int index)) 0x806f630;
inline void (*OptionList::ptr::Cancel)(OptionList * self) = (void (*)(OptionList * self)) 0x8323610;
inline void (*OptionList::ptr::Confirm)(OptionList * self) = (void (*)(OptionList * self)) 0x8323550;
inline void (*OptionList::ptr::PrevOption)(OptionList * self) = (void (*)(OptionList * self)) 0x8323460;
inline void (*OptionList::ptr::NextOption)(OptionList * self) = (void (*)(OptionList * self)) 0x8323370;
inline void (*OptionList::ptr::PollInput)(OptionList * self) = (void (*)(OptionList * self)) 0x83230a0;
inline GuiComponent * (*OptionList::ptr::GetSelected)(OptionList * self) = (GuiComponent * (*)(OptionList * self)) 0x806f690;
inline void (*OptionList::ptr::mark)(OptionList * self) = (void (*)(OptionList * self)) 0x80851c0;
inline void (*OptionList::ptr::CSTR_OptionList)(OptionList * self) = (void (*)(OptionList * self)) 0x814c140;
#endif
#endif
