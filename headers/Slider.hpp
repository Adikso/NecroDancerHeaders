// Generated automatically. Do not edit!
#ifndef _Slider_
#define _Slider_
class Sprite;
class String;
#include "TextLabel.hpp"

class Slider : public TextLabel  {
public:
    float sliderVal;
    Sprite * sliderTrack;
    Sprite * sliderKnob;

    // Wrappers
    inline Slider * New(float v, String * t, int j, float sc) { return ptr::New(this, v, t, j, sc); }
    inline Slider * _new2() { return ptr::_new2(); }
    inline void Draw2(float x, float y, int frameOverride) { ptr::Draw2(this, x, y, frameOverride); }
    inline bool Left() { return ptr::Left(this); }
    inline bool Right() { return ptr::Right(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static Slider * (*New)(Slider * self, float v, String * t, int j, float sc);
        static Slider * (*_new2)();
        static void (*Draw2)(Slider * self, float x, float y, int frameOverride);
        static bool (*Left)(Slider * self);
        static bool (*Right)(Slider * self);
        static void (*mark)(Slider * self);
    };
};

#ifdef _WIN32

Slider * (*Slider::ptr::New)(Slider * self, float v, String * t, int j, float sc) = (Slider * (*)(Slider * self, float v, String * t, int j, float sc)) 0x6a1520;
Slider * (*Slider::ptr::_new2)() = (Slider * (*)()) 0x0;
void (*Slider::ptr::Draw2)(Slider * self, float x, float y, int frameOverride) = (void (*)(Slider * self, float x, float y, int frameOverride)) 0x6a1800;
bool (*Slider::ptr::Left)(Slider * self) = (bool (*)(Slider * self)) 0x6a1900;
bool (*Slider::ptr::Right)(Slider * self) = (bool (*)(Slider * self)) 0x6a1930;
void (*Slider::ptr::mark)(Slider * self) = (void (*)(Slider * self)) 0x6a1960;
#endif

#ifdef __linux__

Slider * (*Slider::ptr::New)(Slider * self, float v, String * t, int j, float sc) = (Slider * (*)(Slider * self, float v, String * t, int j, float sc)) 0x81ee750;
Slider * (*Slider::ptr::_new2)() = (Slider * (*)()) 0x81eea30;
void (*Slider::ptr::Draw2)(Slider * self, float x, float y, int frameOverride) = (void (*)(Slider * self, float x, float y, int frameOverride)) 0x80858a0;
bool (*Slider::ptr::Left)(Slider * self) = (bool (*)(Slider * self)) 0x8079e40;
bool (*Slider::ptr::Right)(Slider * self) = (bool (*)(Slider * self)) 0x8079e70;
void (*Slider::ptr::mark)(Slider * self) = (void (*)(Slider * self)) 0x80a49f0;
#endif
#endif
