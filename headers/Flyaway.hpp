// Generated automatically. Do not edit!
#ifndef _Flyaway_
#define _Flyaway_
class List13;
class Sprite;
class String;
class TextSprite;
#include "Object.hpp"

class Flyaway : public Object  {
public:
    bool noRender;
    int x;
    int y;
    float xSpeed;
    float ySpeed;
    float xOff;
    float yOff;
    Sprite * image;
    TextSprite * image2;
    bool inWorld;
    int flyawayDur;
    int frameCounter;
    float alphaMultiplier;
    static List13 * * activeFlyaways;
    static int * temporarilyDisableNewFlyaways;

    // Wrappers
    Flyaway(String * filename, int xVal, int yVal, int tempXOff, int tempYOff, bool inWrld, float xSpd, float ySpd, bool textString, int dur) {
        ptr::CSTR_Flyaway(this);
        ptr::New(this, filename, xVal, yVal, tempXOff, tempYOff, inWrld, xSpd, ySpd, textString, dur);
    }

    inline static void _StopRenderingOfAllCurrentFlyaways() { ptr::_StopRenderingOfAllCurrentFlyaways(); }
    inline Flyaway * New(String * filename, int xVal, int yVal, int tempXOff, int tempYOff, bool inWrld, float xSpd, float ySpd, bool textString, int dur) { return ptr::New(this, filename, xVal, yVal, tempXOff, tempYOff, inWrld, xSpd, ySpd, textString, dur); }
    inline Flyaway * _new2() { return ptr::_new2(); }
    inline virtual void CenterX() { ptr::CenterX(this); }
    inline virtual void Update() { ptr::Update(this); }
    inline static void UpdateAll() { ptr::UpdateAll(); }
    inline virtual void Render() { ptr::Render(this); }
    inline static void RenderAll() { ptr::RenderAll(); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static void (*_StopRenderingOfAllCurrentFlyaways)();
        static Flyaway * (*New)(Flyaway * self, String * filename, int xVal, int yVal, int tempXOff, int tempYOff, bool inWrld, float xSpd, float ySpd, bool textString, int dur);
        static Flyaway * (*_new2)();
        static void (*CenterX)(Flyaway * self);
        static void (*Update)(Flyaway * self);
        static void (*UpdateAll)();
        static void (*Render)(Flyaway * self);
        static void (*RenderAll)();
        static void (*mark)(Flyaway * self);
        static void (*CSTR_Flyaway)(Flyaway * self);
    };
};

#ifdef _WIN32
inline List13 * * Flyaway::activeFlyaways = (List13* *) 0x835698;
inline int * Flyaway::temporarilyDisableNewFlyaways = (int*) 0x835694;

inline void (*Flyaway::ptr::_StopRenderingOfAllCurrentFlyaways)() = (void (*)()) 0x0;
inline Flyaway * (*Flyaway::ptr::New)(Flyaway * self, String * filename, int xVal, int yVal, int tempXOff, int tempYOff, bool inWrld, float xSpd, float ySpd, bool textString, int dur) = (Flyaway * (*)(Flyaway * self, String * filename, int xVal, int yVal, int tempXOff, int tempYOff, bool inWrld, float xSpd, float ySpd, bool textString, int dur)) 0x5c5ce0;
inline Flyaway * (*Flyaway::ptr::_new2)() = (Flyaway * (*)()) 0x0;
inline void (*Flyaway::ptr::CenterX)(Flyaway * self) = (void (*)(Flyaway * self)) 0x5c5ec0;
inline void (*Flyaway::ptr::Update)(Flyaway * self) = (void (*)(Flyaway * self)) 0x5c5f30;
inline void (*Flyaway::ptr::UpdateAll)() = (void (*)()) 0x5c5f90;
inline void (*Flyaway::ptr::Render)(Flyaway * self) = (void (*)(Flyaway * self)) 0x5c5fe0;
inline void (*Flyaway::ptr::RenderAll)() = (void (*)()) 0x5c6130;
inline void (*Flyaway::ptr::mark)(Flyaway * self) = (void (*)(Flyaway * self)) 0x5c6170;
inline void (*Flyaway::ptr::CSTR_Flyaway)(Flyaway * self) = (void (*)(Flyaway * self)) 0x5c5c20;
#endif

#ifdef __linux__
inline List13 * * Flyaway::activeFlyaways = (List13* *) 0x856a548;
inline int * Flyaway::temporarilyDisableNewFlyaways = (int*) 0x856a544;

inline void (*Flyaway::ptr::_StopRenderingOfAllCurrentFlyaways)() = (void (*)()) 0x8187410;
inline Flyaway * (*Flyaway::ptr::New)(Flyaway * self, String * filename, int xVal, int yVal, int tempXOff, int tempYOff, bool inWrld, float xSpd, float ySpd, bool textString, int dur) = (Flyaway * (*)(Flyaway * self, String * filename, int xVal, int yVal, int tempXOff, int tempYOff, bool inWrld, float xSpd, float ySpd, bool textString, int dur)) 0x8187450;
inline Flyaway * (*Flyaway::ptr::_new2)() = (Flyaway * (*)()) 0x81877c0;
inline void (*Flyaway::ptr::CenterX)(Flyaway * self) = (void (*)(Flyaway * self)) 0x8070d20;
inline void (*Flyaway::ptr::Update)(Flyaway * self) = (void (*)(Flyaway * self)) 0x807eab0;
inline void (*Flyaway::ptr::UpdateAll)() = (void (*)()) 0x81877d0;
inline void (*Flyaway::ptr::Render)(Flyaway * self) = (void (*)(Flyaway * self)) 0x807eb20;
inline void (*Flyaway::ptr::RenderAll)() = (void (*)()) 0x8187820;
inline void (*Flyaway::ptr::mark)(Flyaway * self) = (void (*)(Flyaway * self)) 0x80a4950;
inline void (*Flyaway::ptr::CSTR_Flyaway)(Flyaway * self) = (void (*)(Flyaway * self)) 0x81873b0;
#endif
#endif
