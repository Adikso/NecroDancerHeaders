// Generated automatically. Do not edit!
#ifndef _ControllerCalibration_
#define _ControllerCalibration_
class GuiBorder;
class Sprite;
class TextLabel;
#include "Controller.hpp"

class ControllerCalibration : public Controller  {
public:
    bool cachedScaleVal;
    Sprite * overlayWhite;
    Sprite * cadenceBody;
    Sprite * cadenceHead;
    int lastTime;
    int state;
    int audioLatencySum;
    int audioLatencyNum;
    int audioLatencyAdjust;
    int videoLatencySum;
    int videoLatencyNum;
    int videoLatencyAdjust;
    int lastInputDelay;
    float lastAudioLatency;
    float lastVideoLatency;
    GuiBorder * border;
    TextLabel * audioLatencyTitle;
    TextLabel * audioLatencyInstructions;
    TextLabel * timeInsturction;
    TextLabel * skipInstructions;
    TextLabel * videoLatencyTitle;
    TextLabel * videoLatencyInstructions;
    TextLabel * results1;
    TextLabel * results2;
    TextLabel * results3;
    TextLabel * results4;
    TextLabel * results5;
    TextLabel * results6;

    // Wrappers
    ControllerCalibration() {
        ptr::CSTR_ControllerCalibration(this);
        ptr::New(this);
    }

    inline ControllerCalibration * New() { return ptr::New(this); }
    inline void RegainFocus() { ptr::RegainFocus(this); }
    inline virtual float GetAudioLatency() { return ptr::GetAudioLatency(this); }
    inline virtual float GetVideoLatency() { return ptr::GetVideoLatency(this); }
    inline virtual bool UpWasHit() { return ptr::UpWasHit(this); }
    inline virtual void DoBounce() { ptr::DoBounce(this); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline void Destructor() { ptr::Destructor(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static ControllerCalibration * (*New)(ControllerCalibration * self);
        static void (*RegainFocus)(ControllerCalibration * self);
        static float (*GetAudioLatency)(ControllerCalibration * self);
        static float (*GetVideoLatency)(ControllerCalibration * self);
        static bool (*UpWasHit)(ControllerCalibration * self);
        static void (*DoBounce)(ControllerCalibration * self);
        static void (*Update)(ControllerCalibration * self);
        static void (*Render)(ControllerCalibration * self);
        static void (*Destructor)(ControllerCalibration * self);
        static void (*mark)(ControllerCalibration * self);
        static void (*CSTR_ControllerCalibration)(ControllerCalibration * self);
    };
};

#ifdef _WIN32

ControllerCalibration * (*ControllerCalibration::ptr::New)(ControllerCalibration * self) = (ControllerCalibration * (*)(ControllerCalibration * self)) 0x67dff0;
void (*ControllerCalibration::ptr::RegainFocus)(ControllerCalibration * self) = (void (*)(ControllerCalibration * self)) 0x67e320;
float (*ControllerCalibration::ptr::GetAudioLatency)(ControllerCalibration * self) = (float (*)(ControllerCalibration * self)) 0x67e330;
float (*ControllerCalibration::ptr::GetVideoLatency)(ControllerCalibration * self) = (float (*)(ControllerCalibration * self)) 0x67e370;
bool (*ControllerCalibration::ptr::UpWasHit)(ControllerCalibration * self) = (bool (*)(ControllerCalibration * self)) 0x67e3b0;
void (*ControllerCalibration::ptr::DoBounce)(ControllerCalibration * self) = (void (*)(ControllerCalibration * self)) 0x67e450;
void (*ControllerCalibration::ptr::Update)(ControllerCalibration * self) = (void (*)(ControllerCalibration * self)) 0x67e4a0;
void (*ControllerCalibration::ptr::Render)(ControllerCalibration * self) = (void (*)(ControllerCalibration * self)) 0x67ea70;
void (*ControllerCalibration::ptr::Destructor)(ControllerCalibration * self) = (void (*)(ControllerCalibration * self)) 0x67f090;
void (*ControllerCalibration::ptr::mark)(ControllerCalibration * self) = (void (*)(ControllerCalibration * self)) 0x67f100;
void (*ControllerCalibration::ptr::CSTR_ControllerCalibration)(ControllerCalibration * self) = (void (*)(ControllerCalibration * self)) 0x67d7e0;
#endif

#ifdef __linux__

ControllerCalibration * (*ControllerCalibration::ptr::New)(ControllerCalibration * self) = (ControllerCalibration * (*)(ControllerCalibration * self)) 0x83142a0;
void (*ControllerCalibration::ptr::RegainFocus)(ControllerCalibration * self) = (void (*)(ControllerCalibration * self)) 0x8078110;
float (*ControllerCalibration::ptr::GetAudioLatency)(ControllerCalibration * self) = (float (*)(ControllerCalibration * self)) 0x8078120;
float (*ControllerCalibration::ptr::GetVideoLatency)(ControllerCalibration * self) = (float (*)(ControllerCalibration * self)) 0x8078140;
bool (*ControllerCalibration::ptr::UpWasHit)(ControllerCalibration * self) = (bool (*)(ControllerCalibration * self)) 0x81118b0;
void (*ControllerCalibration::ptr::DoBounce)(ControllerCalibration * self) = (void (*)(ControllerCalibration * self)) 0x8078160;
void (*ControllerCalibration::ptr::Update)(ControllerCalibration * self) = (void (*)(ControllerCalibration * self)) 0x8316f00;
void (*ControllerCalibration::ptr::Render)(ControllerCalibration * self) = (void (*)(ControllerCalibration * self)) 0x8407be0;
void (*ControllerCalibration::ptr::Destructor)(ControllerCalibration * self) = (void (*)(ControllerCalibration * self)) 0x80781d0;
void (*ControllerCalibration::ptr::mark)(ControllerCalibration * self) = (void (*)(ControllerCalibration * self)) 0x80a6ec0;
void (*ControllerCalibration::ptr::CSTR_ControllerCalibration)(ControllerCalibration * self) = (void (*)(ControllerCalibration * self)) 0x81dd7e0;
#endif
#endif
