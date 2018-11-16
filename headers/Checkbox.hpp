// Generated automatically. Do not edit!
#ifndef _Checkbox_
#define _Checkbox_
class Sprite;
class String;
#include "TextLabel.hpp"

class Checkbox : public TextLabel  {
public:
    bool checked;
    float scale;
    Sprite * checkboxSpr;

    // Wrappers
    inline Checkbox * New(bool c, String * t, int j, float sc) { return ptr::New(this, c, t, j, sc); }
    inline Checkbox * _new2() { return ptr::_new2(); }
    inline void Draw2(float x, float y, int frameOverride) { ptr::Draw2(this, x, y, frameOverride); }
    inline bool Right() { return ptr::Right(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static Checkbox * (*New)(Checkbox * self, bool c, String * t, int j, float sc);
        static Checkbox * (*_new2)();
        static void (*Draw2)(Checkbox * self, float x, float y, int frameOverride);
        static bool (*Right)(Checkbox * self);
        static void (*mark)(Checkbox * self);
    };
};

#ifdef _WIN32

inline Checkbox * (*Checkbox::ptr::New)(Checkbox * self, bool c, String * t, int j, float sc) = (Checkbox * (*)(Checkbox * self, bool c, String * t, int j, float sc)) 0x680990;
inline Checkbox * (*Checkbox::ptr::_new2)() = (Checkbox * (*)()) 0x0;
inline void (*Checkbox::ptr::Draw2)(Checkbox * self, float x, float y, int frameOverride) = (void (*)(Checkbox * self, float x, float y, int frameOverride)) 0x680b60;
inline bool (*Checkbox::ptr::Right)(Checkbox * self) = (bool (*)(Checkbox * self)) 0x680c00;
inline void (*Checkbox::ptr::mark)(Checkbox * self) = (void (*)(Checkbox * self)) 0x680c10;
#endif

#ifdef __linux__

inline Checkbox * (*Checkbox::ptr::New)(Checkbox * self, bool c, String * t, int j, float sc) = (Checkbox * (*)(Checkbox * self, bool c, String * t, int j, float sc)) 0x81df140;
inline Checkbox * (*Checkbox::ptr::_new2)() = (Checkbox * (*)()) 0x81df2f0;
inline void (*Checkbox::ptr::Draw2)(Checkbox * self, float x, float y, int frameOverride) = (void (*)(Checkbox * self, float x, float y, int frameOverride)) 0x80857c0;
inline bool (*Checkbox::ptr::Right)(Checkbox * self) = (bool (*)(Checkbox * self)) 0x8078450;
inline void (*Checkbox::ptr::mark)(Checkbox * self) = (void (*)(Checkbox * self)) 0x80a4c20;
#endif
#endif
