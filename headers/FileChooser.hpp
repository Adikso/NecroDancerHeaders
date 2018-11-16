// Generated automatically. Do not edit!
#ifndef _FileChooser_
#define _FileChooser_
template<class T> class Array;
class Checkbox;
class GuiContainer;
class List12;
class OptionList;
class String;
class TextLabel;
#include "GuiComponent.hpp"

class FileChooser : public GuiComponent  {
public:
    GuiContainer * cont;
    OptionList * songList;
    TextLabel * defaultText;
    TextLabel * parentText;
    TextLabel * pgUpText;
    Array<TextLabel *> * songLabels;
    TextLabel * pgDownText;
    Checkbox * addToPlaylistBox;
    String * curPath;
    List12 * fileList;
    int fileIndex;
    Array<String> * songFilenameWithPreservedCase;
    bool visible;
    int chosenIndex;

    // Wrappers
    FileChooser(GuiContainer * c) {
        ptr::CSTR_FileChooser(this);
        ptr::New(this, c);
    }

    inline virtual String * SlashPadPath(String * p) { return ptr::SlashPadPath(this, p); }
    inline virtual void Refresh() { ptr::Refresh(this); }
    inline virtual void Reload() { ptr::Reload(this); }
    inline FileChooser * New(GuiContainer * c) { return ptr::New(this, c); }
    inline FileChooser * _new2() { return ptr::_new2(); }
    inline virtual void SetVisible(bool v) { ptr::SetVisible(this, v); }
    inline virtual void PollInput() { ptr::PollInput(this); }
    inline virtual String * GetFilename() { return ptr::GetFilename(this); }
    inline virtual void Draw4(float x, float y) { ptr::Draw4(this, x, y); }
    inline virtual void Discard() { ptr::Discard(this); }
    inline void GUICallback(int index, bool left) { ptr::GUICallback(this, index, left); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static String * (*SlashPadPath)(FileChooser * self, String * p);
        static void (*Refresh)(FileChooser * self);
        static void (*Reload)(FileChooser * self);
        static FileChooser * (*New)(FileChooser * self, GuiContainer * c);
        static FileChooser * (*_new2)();
        static void (*SetVisible)(FileChooser * self, bool v);
        static void (*PollInput)(FileChooser * self);
        static String * (*GetFilename)(FileChooser * self);
        static void (*Draw4)(FileChooser * self, float x, float y);
        static void (*Discard)(FileChooser * self);
        static void (*GUICallback)(FileChooser * self, int index, bool left);
        static void (*mark)(FileChooser * self);
        static void (*CSTR_FileChooser)(FileChooser * self);
    };
};

#ifdef _WIN32

inline String * (*FileChooser::ptr::SlashPadPath)(FileChooser * self, String * p) = (String * (*)(FileChooser * self, String * p)) 0x69bdb0;
inline void (*FileChooser::ptr::Refresh)(FileChooser * self) = (void (*)(FileChooser * self)) 0x69bf70;
inline void (*FileChooser::ptr::Reload)(FileChooser * self) = (void (*)(FileChooser * self)) 0x69c190;
inline FileChooser * (*FileChooser::ptr::New)(FileChooser * self, GuiContainer * c) = (FileChooser * (*)(FileChooser * self, GuiContainer * c)) 0x69c770;
inline FileChooser * (*FileChooser::ptr::_new2)() = (FileChooser * (*)()) 0x0;
inline void (*FileChooser::ptr::SetVisible)(FileChooser * self, bool v) = (void (*)(FileChooser * self, bool v)) 0x69cb90;
inline void (*FileChooser::ptr::PollInput)(FileChooser * self) = (void (*)(FileChooser * self)) 0x69cba0;
inline String * (*FileChooser::ptr::GetFilename)(FileChooser * self) = (String * (*)(FileChooser * self)) 0x69cbb0;
inline void (*FileChooser::ptr::Draw4)(FileChooser * self, float x, float y) = (void (*)(FileChooser * self, float x, float y)) 0x69cc80;
inline void (*FileChooser::ptr::Discard)(FileChooser * self) = (void (*)(FileChooser * self)) 0x69cdb0;
inline void (*FileChooser::ptr::GUICallback)(FileChooser * self, int index, bool left) = (void (*)(FileChooser * self, int index, bool left)) 0x69ce00;
inline void (*FileChooser::ptr::mark)(FileChooser * self) = (void (*)(FileChooser * self)) 0x69d420;
inline void (*FileChooser::ptr::CSTR_FileChooser)(FileChooser * self) = (void (*)(FileChooser * self)) 0x69b820;
#endif

#ifdef __linux__

inline String * (*FileChooser::ptr::SlashPadPath)(FileChooser * self, String * p) = (String * (*)(FileChooser * self, String * p)) 0x80cde80;
inline void (*FileChooser::ptr::Refresh)(FileChooser * self) = (void (*)(FileChooser * self)) 0x80d82b0;
inline void (*FileChooser::ptr::Reload)(FileChooser * self) = (void (*)(FileChooser * self)) 0x80dd4d0;
inline FileChooser * (*FileChooser::ptr::New)(FileChooser * self, GuiContainer * c) = (FileChooser * (*)(FileChooser * self, GuiContainer * c)) 0x81eb0a0;
inline FileChooser * (*FileChooser::ptr::_new2)() = (FileChooser * (*)()) 0x81ec6c0;
inline void (*FileChooser::ptr::SetVisible)(FileChooser * self, bool v) = (void (*)(FileChooser * self, bool v)) 0x8079b60;
inline void (*FileChooser::ptr::PollInput)(FileChooser * self) = (void (*)(FileChooser * self)) 0x8079b70;
inline String * (*FileChooser::ptr::GetFilename)(FileChooser * self) = (String * (*)(FileChooser * self)) 0x80c23f0;
inline void (*FileChooser::ptr::Draw4)(FileChooser * self, float x, float y) = (void (*)(FileChooser * self, float x, float y)) 0x8082610;
inline void (*FileChooser::ptr::Discard)(FileChooser * self) = (void (*)(FileChooser * self)) 0x8079b90;
inline void (*FileChooser::ptr::GUICallback)(FileChooser * self, int index, bool left) = (void (*)(FileChooser * self, int index, bool left)) 0x80e9940;
inline void (*FileChooser::ptr::mark)(FileChooser * self) = (void (*)(FileChooser * self)) 0x80a3000;
inline void (*FileChooser::ptr::CSTR_FileChooser)(FileChooser * self) = (void (*)(FileChooser * self)) 0x81eaa10;
#endif
#endif
