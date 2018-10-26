// Generated automatically. Do not edit!
#ifndef _Camera_
#define _Camera_
class Callback;
class Image;
class Sprite;
#include "Object.hpp"

class Camera : public Object  {
public:
    static int * fadeOutDuration;
    static int * fadeOutCurrent;
    static Callback * * fadeOutCallback;
    static int * fadeInDuration;
    static int * fadeInCurrent;
    static Callback * * fadeInCallback;
    static float * x;
    static float * shakeOffX;
    static float * y;
    static float * shakeOffY;
    static float * seekX;
    static float * seekY;
    static int * overlayWhiteDuration;
    static float * shakePower;
    static int * shakeDuration;
    static int * shakeDurationInitial;
    static int * freezeFrameNum;
    static int * freezeFrameDelay;
    static int * overlayRedDuration;
    static bool * fixed;
    static Image * * freezeImage;
    static Sprite * * overlayRed;
    static Sprite * * overlayWhite;
    static Sprite * * overlayBlack;
    static int * lastFreezeFrameW;
    static int * lastFreezeFrameH;

    // Wrappers
    inline static void _CancelFade() { ptr::_CancelFade(); }
    inline static float _GetX() { return ptr::_GetX(); }
    inline static float _WorldToScreenX(int arg1) { return ptr::_WorldToScreenX(arg1); }
    inline static float _GetY() { return ptr::_GetY(); }
    inline static float _WorldToScreenY(int arg1) { return ptr::_WorldToScreenY(arg1); }
    inline static float _GetSeekX() { return ptr::_GetSeekX(); }
    inline static float _GetSeekY() { return ptr::_GetSeekY(); }
    inline static bool IsOnScreenStandardizedRelativeToPoint(int xVal, int yVal, int pointX, int pointY) { return ptr::IsOnScreenStandardizedRelativeToPoint(xVal, yVal, pointX, pointY); }
    inline static bool IsOnScreenStandardized(int xVal, int yVal) { return ptr::IsOnScreenStandardized(xVal, yVal); }
    inline static void _OverlayWhite(int arg1) { ptr::_OverlayWhite(arg1); }
    inline static void _ShakeNoPlayer(int arg1, float arg2) { ptr::_ShakeNoPlayer(arg1, arg2); }
    inline static void _ShakeNoPlayer2(int arg1) { ptr::_ShakeNoPlayer2(arg1); }
    inline static void _Shake(int arg1, float arg2, int arg3, int arg4) { ptr::_Shake(arg1, arg2, arg3, arg4); }
    inline static void Shake2(int type, int xVal, int yVal) { ptr::Shake2(type, xVal, yVal); }
    inline static int _GetFixedWidth() { return ptr::_GetFixedWidth(); }
    inline static int _GetFixedHeight() { return ptr::_GetFixedHeight(); }
    inline static bool IsOnScreen(int xVal, int yVal) { return ptr::IsOnScreen(xVal, yVal); }
    inline static void SetFreezeFrames(int num, int delay, int xVal, int yVal) { ptr::SetFreezeFrames(num, delay, xVal, yVal); }
    inline static void _OverlayRed(int arg1) { ptr::_OverlayRed(arg1); }
    inline static void _SetX(float arg1) { ptr::_SetX(arg1); }
    inline static void _SetY(float arg1) { ptr::_SetY(arg1); }
    inline static void _SetFixed(float arg1, float arg2) { ptr::_SetFixed(arg1, arg2); }
    inline static void _SetSeek(float arg1, float arg2) { ptr::_SetSeek(arg1, arg2); }
    inline static void _Reset() { ptr::_Reset(); }
    inline static void _FadeIn(int arg1) { ptr::_FadeIn(arg1); }
    inline static bool _CheckFreezeFrame() { return ptr::_CheckFreezeFrame(); }
    inline static void Update() { ptr::Update(); }
    inline static void CaptureFreezeFrame() { ptr::CaptureFreezeFrame(); }
    inline static void Init() { ptr::Init(); }
    inline static void _FadeInThenExecute(int arg1, Callback * arg2) { ptr::_FadeInThenExecute(arg1, arg2); }
    inline static void _FadeOut(int arg1) { ptr::_FadeOut(arg1); }
    inline static void FadeOutThenExecute(int dur, Callback * cBack) { ptr::FadeOutThenExecute(dur, cBack); }
    inline static void _ClearFixed() { ptr::_ClearFixed(); }
    inline static bool _IsWorldRectOffScreen(float arg1, float arg2, float arg3, float arg4) { return ptr::_IsWorldRectOffScreen(arg1, arg2, arg3, arg4); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static void (*_CancelFade)();
        static float (*_GetX)();
        static float (*_WorldToScreenX)(int arg1);
        static float (*_GetY)();
        static float (*_WorldToScreenY)(int arg1);
        static float (*_GetSeekX)();
        static float (*_GetSeekY)();
        static bool (*IsOnScreenStandardizedRelativeToPoint)(int xVal, int yVal, int pointX, int pointY);
        static bool (*IsOnScreenStandardized)(int xVal, int yVal);
        static void (*_OverlayWhite)(int arg1);
        static void (*_ShakeNoPlayer)(int arg1, float arg2);
        static void (*_ShakeNoPlayer2)(int arg1);
        static void (*_Shake)(int arg1, float arg2, int arg3, int arg4);
        static void (*Shake2)(int type, int xVal, int yVal);
        static int (*_GetFixedWidth)();
        static int (*_GetFixedHeight)();
        static bool (*IsOnScreen)(int xVal, int yVal);
        static void (*SetFreezeFrames)(int num, int delay, int xVal, int yVal);
        static void (*_OverlayRed)(int arg1);
        static void (*_SetX)(float arg1);
        static void (*_SetY)(float arg1);
        static void (*_SetFixed)(float arg1, float arg2);
        static void (*_SetSeek)(float arg1, float arg2);
        static void (*_Reset)();
        static void (*_FadeIn)(int arg1);
        static bool (*_CheckFreezeFrame)();
        static void (*Update)();
        static void (*CaptureFreezeFrame)();
        static void (*Init)();
        static void (*_FadeInThenExecute)(int arg1, Callback * arg2);
        static void (*_FadeOut)(int arg1);
        static void (*FadeOutThenExecute)(int dur, Callback * cBack);
        static void (*_ClearFixed)();
        static bool (*_IsWorldRectOffScreen)(float arg1, float arg2, float arg3, float arg4);
        static void (*_mark)();
    };
};

#ifdef _WIN32
int * Camera::fadeOutDuration = (int*) 0x835690;
int * Camera::fadeOutCurrent = (int*) 0x83568c;
Callback * * Camera::fadeOutCallback = (Callback* *) 0x835688;
int * Camera::fadeInDuration = (int*) 0x835684;
int * Camera::fadeInCurrent = (int*) 0x835680;
Callback * * Camera::fadeInCallback = (Callback* *) 0x83567c;
float * Camera::x = (float*) 0x835678;
float * Camera::shakeOffX = (float*) 0x835674;
float * Camera::y = (float*) 0x835670;
float * Camera::shakeOffY = (float*) 0x83566c;
float * Camera::seekX = (float*) 0x8358d4;
float * Camera::seekY = (float*) 0x8358d8;
int * Camera::overlayWhiteDuration = (int*) 0x835668;
float * Camera::shakePower = (float*) 0x835664;
int * Camera::shakeDuration = (int*) 0x835660;
int * Camera::shakeDurationInitial = (int*) 0x83565c;
int * Camera::freezeFrameNum = (int*) 0x835658;
int * Camera::freezeFrameDelay = (int*) 0x835654;
int * Camera::overlayRedDuration = (int*) 0x835650;
bool * Camera::fixed = (bool*) 0x835898;
Image * * Camera::freezeImage = (Image* *) 0x83564c;
Sprite * * Camera::overlayRed = (Sprite* *) 0x835648;
Sprite * * Camera::overlayWhite = (Sprite* *) 0x835644;
Sprite * * Camera::overlayBlack = (Sprite* *) 0x835640;
int * Camera::lastFreezeFrameW = (int*) 0x83563c;
int * Camera::lastFreezeFrameH = (int*) 0x835638;

void (*Camera::ptr::_CancelFade)() = (void (*)()) 0x0;
float (*Camera::ptr::_GetX)() = (float (*)()) 0x0;
float (*Camera::ptr::_WorldToScreenX)(int arg1) = (float (*)(int arg1)) 0x0;
float (*Camera::ptr::_GetY)() = (float (*)()) 0x0;
float (*Camera::ptr::_WorldToScreenY)(int arg1) = (float (*)(int arg1)) 0x0;
float (*Camera::ptr::_GetSeekX)() = (float (*)()) 0x0;
float (*Camera::ptr::_GetSeekY)() = (float (*)()) 0x0;
bool (*Camera::ptr::IsOnScreenStandardizedRelativeToPoint)(int xVal, int yVal, int pointX, int pointY) = (bool (*)(int xVal, int yVal, int pointX, int pointY)) 0x5c6410;
bool (*Camera::ptr::IsOnScreenStandardized)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x5c6450;
void (*Camera::ptr::_OverlayWhite)(int arg1) = (void (*)(int arg1)) 0x0;
void (*Camera::ptr::_ShakeNoPlayer)(int arg1, float arg2) = (void (*)(int arg1, float arg2)) 0x0;
void (*Camera::ptr::_ShakeNoPlayer2)(int arg1) = (void (*)(int arg1)) 0x0;
void (*Camera::ptr::_Shake)(int arg1, float arg2, int arg3, int arg4) = (void (*)(int arg1, float arg2, int arg3, int arg4)) 0x0;
void (*Camera::ptr::Shake2)(int type, int xVal, int yVal) = (void (*)(int type, int xVal, int yVal)) 0x5c64a0;
int (*Camera::ptr::_GetFixedWidth)() = (int (*)()) 0x0;
int (*Camera::ptr::_GetFixedHeight)() = (int (*)()) 0x0;
bool (*Camera::ptr::IsOnScreen)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x5c6620;
void (*Camera::ptr::SetFreezeFrames)(int num, int delay, int xVal, int yVal) = (void (*)(int num, int delay, int xVal, int yVal)) 0x5c67f0;
void (*Camera::ptr::_OverlayRed)(int arg1) = (void (*)(int arg1)) 0x0;
void (*Camera::ptr::_SetX)(float arg1) = (void (*)(float arg1)) 0x0;
void (*Camera::ptr::_SetY)(float arg1) = (void (*)(float arg1)) 0x0;
void (*Camera::ptr::_SetFixed)(float arg1, float arg2) = (void (*)(float arg1, float arg2)) 0x0;
void (*Camera::ptr::_SetSeek)(float arg1, float arg2) = (void (*)(float arg1, float arg2)) 0x0;
void (*Camera::ptr::_Reset)() = (void (*)()) 0x0;
void (*Camera::ptr::_FadeIn)(int arg1) = (void (*)(int arg1)) 0x0;
bool (*Camera::ptr::_CheckFreezeFrame)() = (bool (*)()) 0x0;
void (*Camera::ptr::Update)() = (void (*)()) 0x5c6820;
void (*Camera::ptr::CaptureFreezeFrame)() = (void (*)()) 0x5c6c80;
void (*Camera::ptr::Init)() = (void (*)()) 0x5c6d20;
void (*Camera::ptr::_FadeInThenExecute)(int arg1, Callback * arg2) = (void (*)(int arg1, Callback * arg2)) 0x0;
void (*Camera::ptr::_FadeOut)(int arg1) = (void (*)(int arg1)) 0x0;
void (*Camera::ptr::FadeOutThenExecute)(int dur, Callback * cBack) = (void (*)(int dur, Callback * cBack)) 0x5c70d0;
void (*Camera::ptr::_ClearFixed)() = (void (*)()) 0x0;
bool (*Camera::ptr::_IsWorldRectOffScreen)(float arg1, float arg2, float arg3, float arg4) = (bool (*)(float arg1, float arg2, float arg3, float arg4)) 0x0;
void (*Camera::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__
int * Camera::fadeOutDuration = (int*) 0x856a540;
int * Camera::fadeOutCurrent = (int*) 0x856a53c;
Callback * * Camera::fadeOutCallback = (Callback* *) 0x856a538;
int * Camera::fadeInDuration = (int*) 0x856a534;
int * Camera::fadeInCurrent = (int*) 0x856a530;
Callback * * Camera::fadeInCallback = (Callback* *) 0x856a52c;
float * Camera::x = (float*) 0x856a528;
float * Camera::shakeOffX = (float*) 0x856a524;
float * Camera::y = (float*) 0x856a520;
float * Camera::shakeOffY = (float*) 0x856a51c;
float * Camera::seekX = (float*) 0x856a518;
float * Camera::seekY = (float*) 0x856a514;
int * Camera::overlayWhiteDuration = (int*) 0x856a510;
float * Camera::shakePower = (float*) 0x856a50c;
int * Camera::shakeDuration = (int*) 0x856a508;
int * Camera::shakeDurationInitial = (int*) 0x856a504;
int * Camera::freezeFrameNum = (int*) 0x856a500;
int * Camera::freezeFrameDelay = (int*) 0x856a4fc;
int * Camera::overlayRedDuration = (int*) 0x856a4f8;
bool * Camera::fixed = (bool*) 0x856a4f4;
Image * * Camera::freezeImage = (Image* *) 0x856a4f0;
Sprite * * Camera::overlayRed = (Sprite* *) 0x856a4ec;
Sprite * * Camera::overlayWhite = (Sprite* *) 0x856a4e8;
Sprite * * Camera::overlayBlack = (Sprite* *) 0x856a4e4;
int * Camera::lastFreezeFrameW = (int*) 0x856a4e0;
int * Camera::lastFreezeFrameH = (int*) 0x856a4dc;

void (*Camera::ptr::_CancelFade)() = (void (*)()) 0x8187d30;
float (*Camera::ptr::_GetX)() = (float (*)()) 0x8187d70;
float (*Camera::ptr::_WorldToScreenX)(int arg1) = (float (*)(int arg1)) 0x8187d80;
float (*Camera::ptr::_GetY)() = (float (*)()) 0x8187dc0;
float (*Camera::ptr::_WorldToScreenY)(int arg1) = (float (*)(int arg1)) 0x8187dd0;
float (*Camera::ptr::_GetSeekX)() = (float (*)()) 0x8187e10;
float (*Camera::ptr::_GetSeekY)() = (float (*)()) 0x8187e20;
bool (*Camera::ptr::IsOnScreenStandardizedRelativeToPoint)(int xVal, int yVal, int pointX, int pointY) = (bool (*)(int xVal, int yVal, int pointX, int pointY)) 0x8187e30;
bool (*Camera::ptr::IsOnScreenStandardized)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x8187e70;
void (*Camera::ptr::_OverlayWhite)(int arg1) = (void (*)(int arg1)) 0x8187ef0;
void (*Camera::ptr::_ShakeNoPlayer)(int arg1, float arg2) = (void (*)(int arg1, float arg2)) 0x8187f00;
void (*Camera::ptr::_ShakeNoPlayer2)(int arg1) = (void (*)(int arg1)) 0x8187f20;
void (*Camera::ptr::_Shake)(int arg1, float arg2, int arg3, int arg4) = (void (*)(int arg1, float arg2, int arg3, int arg4)) 0x8187fb0;
void (*Camera::ptr::Shake2)(int type, int xVal, int yVal) = (void (*)(int type, int xVal, int yVal)) 0x8188060;
int (*Camera::ptr::_GetFixedWidth)() = (int (*)()) 0x8188210;
int (*Camera::ptr::_GetFixedHeight)() = (int (*)()) 0x8188250;
bool (*Camera::ptr::IsOnScreen)(int xVal, int yVal) = (bool (*)(int xVal, int yVal)) 0x8188290;
void (*Camera::ptr::SetFreezeFrames)(int num, int delay, int xVal, int yVal) = (void (*)(int num, int delay, int xVal, int yVal)) 0x81889a0;
void (*Camera::ptr::_OverlayRed)(int arg1) = (void (*)(int arg1)) 0x81889e0;
void (*Camera::ptr::_SetX)(float arg1) = (void (*)(float arg1)) 0x81889f0;
void (*Camera::ptr::_SetY)(float arg1) = (void (*)(float arg1)) 0x8188a00;
void (*Camera::ptr::_SetFixed)(float arg1, float arg2) = (void (*)(float arg1, float arg2)) 0x8188a10;
void (*Camera::ptr::_SetSeek)(float arg1, float arg2) = (void (*)(float arg1, float arg2)) 0x8188a30;
void (*Camera::ptr::_Reset)() = (void (*)()) 0x8188a50;
void (*Camera::ptr::_FadeIn)(int arg1) = (void (*)(int arg1)) 0x8188a70;
bool (*Camera::ptr::_CheckFreezeFrame)() = (bool (*)()) 0x81dc050;
void (*Camera::ptr::Update)() = (void (*)()) 0x8188a80;
void (*Camera::ptr::CaptureFreezeFrame)() = (void (*)()) 0x8189060;
void (*Camera::ptr::Init)() = (void (*)()) 0x8189330;
void (*Camera::ptr::_FadeInThenExecute)(int arg1, Callback * arg2) = (void (*)(int arg1, Callback * arg2)) 0x81896a0;
void (*Camera::ptr::_FadeOut)(int arg1) = (void (*)(int arg1)) 0x8189730;
void (*Camera::ptr::FadeOutThenExecute)(int dur, Callback * cBack) = (void (*)(int dur, Callback * cBack)) 0x8189740;
void (*Camera::ptr::_ClearFixed)() = (void (*)()) 0x81897d0;
bool (*Camera::ptr::_IsWorldRectOffScreen)(float arg1, float arg2, float arg3, float arg4) = (bool (*)(float arg1, float arg2, float arg3, float arg4)) 0x81897e0;
void (*Camera::ptr::_mark)() = (void (*)()) 0x8070df0;
#endif
#endif
