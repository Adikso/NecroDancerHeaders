// Generated automatically. Do not edit!
#ifndef _Tweenable_
#define _Tweenable_
class Point2;
#include "Object.hpp"

class Tweenable : public Object  {
public:
    int alphaTweenDuration;
    float alphaTweenCurrentStep;
    float alphaTweenInitial;
    float alphaTweenFinal;
    int tweenDuration;
    float tweenCurrentStep;
    int tweenType;
    float tweenX;
    float tweenY;
    int bufferedType;
    float bufferedX;
    float bufferedY;
    int tweenPointOffX;
    int tweenPointOffY;
    static Point2 * * tweenPoint;

    // Wrappers
    Tweenable() {
        ptr::CSTR_Tweenable(this);
    }

    inline Tweenable * _New() { return ptr::_New(); }
    inline virtual float ProcessAlphaTween() { return ptr::ProcessAlphaTween(this); }
    inline virtual void SetCutoffY(int cY) { ptr::SetCutoffY(this, cY); }
    inline virtual void CancelTween() { ptr::CancelTween(this); }
    inline virtual void Tween(float xVal, float yVal, int type, bool buffer) { ptr::Tween(this, xVal, yVal, type, buffer); }
    inline virtual Point2 * ProcessTween() { return ptr::ProcessTween(this); }
    inline virtual void SetAlphaTween(float initialVal, float finalVal, int duration) { ptr::SetAlphaTween(this, initialVal, finalVal, duration); }
    inline virtual int GetTweenDurationRemaining() { return ptr::GetTweenDurationRemaining(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Tweenable * (*_New)();
        static float (*ProcessAlphaTween)(Tweenable * self);
        static void (*SetCutoffY)(Tweenable * self, int cY);
        static void (*CancelTween)(Tweenable * self);
        static void (*Tween)(Tweenable * self, float xVal, float yVal, int type, bool buffer);
        static Point2 * (*ProcessTween)(Tweenable * self);
        static void (*SetAlphaTween)(Tweenable * self, float initialVal, float finalVal, int duration);
        static int (*GetTweenDurationRemaining)(Tweenable * self);
        static void (*_mark)();
        static void (*CSTR_Tweenable)(Tweenable * self);
    };
};

#ifdef _WIN32
inline Point2 * * Tweenable::tweenPoint = (Point2* *) 0x835b78;

inline Tweenable * (*Tweenable::ptr::_New)() = (Tweenable * (*)()) 0x0;
inline float (*Tweenable::ptr::ProcessAlphaTween)(Tweenable * self) = (float (*)(Tweenable * self)) 0x44b8a0;
inline void (*Tweenable::ptr::SetCutoffY)(Tweenable * self, int cY) = (void (*)(Tweenable * self, int cY)) 0x4040c0;
inline void (*Tweenable::ptr::CancelTween)(Tweenable * self) = (void (*)(Tweenable * self)) 0x44b940;
inline void (*Tweenable::ptr::Tween)(Tweenable * self, float xVal, float yVal, int type, bool buffer) = (void (*)(Tweenable * self, float xVal, float yVal, int type, bool buffer)) 0x44b970;
inline Point2 * (*Tweenable::ptr::ProcessTween)(Tweenable * self) = (Point2 * (*)(Tweenable * self)) 0x44ba40;
inline void (*Tweenable::ptr::SetAlphaTween)(Tweenable * self, float initialVal, float finalVal, int duration) = (void (*)(Tweenable * self, float initialVal, float finalVal, int duration)) 0x44c380;
inline int (*Tweenable::ptr::GetTweenDurationRemaining)(Tweenable * self) = (int (*)(Tweenable * self)) 0x44c360;
inline void (*Tweenable::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Tweenable::ptr::CSTR_Tweenable)(Tweenable * self) = (void (*)(Tweenable * self)) 0x44b7e0;
#endif

#ifdef __linux__
inline Point2 * * Tweenable::tweenPoint = (Point2* *) 0x856ab10;

inline Tweenable * (*Tweenable::ptr::_New)() = (Tweenable * (*)()) 0x811b1b0;
inline float (*Tweenable::ptr::ProcessAlphaTween)(Tweenable * self) = (float (*)(Tweenable * self)) 0x807dec0;
inline void (*Tweenable::ptr::SetCutoffY)(Tweenable * self, int cY) = (void (*)(Tweenable * self, int cY)) 0x806da30;
inline void (*Tweenable::ptr::CancelTween)(Tweenable * self) = (void (*)(Tweenable * self)) 0x806da40;
inline void (*Tweenable::ptr::Tween)(Tweenable * self, float xVal, float yVal, int type, bool buffer) = (void (*)(Tweenable * self, float xVal, float yVal, int type, bool buffer)) 0x807df50;
inline Point2 * (*Tweenable::ptr::ProcessTween)(Tweenable * self) = (Point2 * (*)(Tweenable * self)) 0x807fa80;
inline void (*Tweenable::ptr::SetAlphaTween)(Tweenable * self, float initialVal, float finalVal, int duration) = (void (*)(Tweenable * self, float initialVal, float finalVal, int duration)) 0x806da60;
inline int (*Tweenable::ptr::GetTweenDurationRemaining)(Tweenable * self) = (int (*)(Tweenable * self)) 0x807e030;
inline void (*Tweenable::ptr::_mark)() = (void (*)()) 0x806da90;
inline void (*Tweenable::ptr::CSTR_Tweenable)(Tweenable * self) = (void (*)(Tweenable * self)) 0x811b160;
#endif
#endif
