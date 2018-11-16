// Generated automatically. Do not edit!
#ifndef _TextInput_
#define _TextInput_
class Sprite;
class String;
#include "TextLabel.hpp"

class TextInput : public TextLabel  {
public:
    int maxSize;
    Sprite * caretSpr;

    // Wrappers
    inline TextInput * New(String * t, int j, float sc, int size) { return ptr::New(this, t, j, sc, size); }
    inline TextInput * _new2() { return ptr::_new2(); }
    inline virtual void Append(String * c) { ptr::Append(this, c); }
    inline virtual void Backspace() { ptr::Backspace(this); }
    inline void Draw2(float x, float y, int frameOverride) { ptr::Draw2(this, x, y, frameOverride); }
    inline void Discard() { ptr::Discard(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static TextInput * (*New)(TextInput * self, String * t, int j, float sc, int size);
        static TextInput * (*_new2)();
        static void (*Append)(TextInput * self, String * c);
        static void (*Backspace)(TextInput * self);
        static void (*Draw2)(TextInput * self, float x, float y, int frameOverride);
        static void (*Discard)(TextInput * self);
        static void (*mark)(TextInput * self);
    };
};

#ifdef _WIN32

inline TextInput * (*TextInput::ptr::New)(TextInput * self, String * t, int j, float sc, int size) = (TextInput * (*)(TextInput * self, String * t, int j, float sc, int size)) 0x6836b0;
inline TextInput * (*TextInput::ptr::_new2)() = (TextInput * (*)()) 0x0;
inline void (*TextInput::ptr::Append)(TextInput * self, String * c) = (void (*)(TextInput * self, String * c)) 0x683830;
inline void (*TextInput::ptr::Backspace)(TextInput * self) = (void (*)(TextInput * self)) 0x683920;
inline void (*TextInput::ptr::Draw2)(TextInput * self, float x, float y, int frameOverride) = (void (*)(TextInput * self, float x, float y, int frameOverride)) 0x683a10;
inline void (*TextInput::ptr::Discard)(TextInput * self) = (void (*)(TextInput * self)) 0x683aa0;
inline void (*TextInput::ptr::mark)(TextInput * self) = (void (*)(TextInput * self)) 0x683ac0;
#endif

#ifdef __linux__

inline TextInput * (*TextInput::ptr::New)(TextInput * self, String * t, int j, float sc, int size) = (TextInput * (*)(TextInput * self, String * t, int j, float sc, int size)) 0x8210540;
inline TextInput * (*TextInput::ptr::_new2)() = (TextInput * (*)()) 0x81e0420;
inline void (*TextInput::ptr::Append)(TextInput * self, String * c) = (void (*)(TextInput * self, String * c)) 0x80c9220;
inline void (*TextInput::ptr::Backspace)(TextInput * self) = (void (*)(TextInput * self)) 0x80d2750;
inline void (*TextInput::ptr::Draw2)(TextInput * self, float x, float y, int frameOverride) = (void (*)(TextInput * self, float x, float y, int frameOverride)) 0x8085700;
inline void (*TextInput::ptr::Discard)(TextInput * self) = (void (*)(TextInput * self)) 0x8078a40;
inline void (*TextInput::ptr::mark)(TextInput * self) = (void (*)(TextInput * self)) 0x80a4b30;
#endif
#endif
