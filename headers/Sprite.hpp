// Generated automatically. Do not edit!
#ifndef _Sprite_
#define _Sprite_
class Image;
class String;
class StringMap10;
class StringMap3;
class StringMap4;
#include "Tweenable.hpp"

class Sprite : public Tweenable  {
public:
    String * path;
    bool zSet;
    float z;
    bool inWorld;
    bool isLocalizedText;
    int srcX;
    int srcW;
    int srcH;
    int xOffLocalization;
    float scaleX;
    float scaleY;
    float zOff;
    int frame;
    bool flipX;
    bool flipXWithOffset;
    int flipXOff;
    bool flipY;
    bool flipYWithOffset;
    float alpha;
    float renderX;
    float renderLastX;
    float renderY;
    float renderLastY;
    int srcY;
    bool cutoffYSet;
    bool cutoffXSet;
    int cutoffX;
    int cutoffY;
    bool skipNextDraw;
    float rotation;
    int blendMode;
    bool hideInReplay;
    static bool * scaleToFitScreen;
    static StringMap3 * * imageMap;
    static StringMap3 * * sourceImageMap;
    static String * * modErrorImageName;
    static StringMap4 * * imageInitData;
    static int * tempImageCounter;
    static float * newAlphaDrawVal;
    static bool * debugDumpRender;
    static float * currentScaleFactor;
    static int * currentScaleXOff;
    static int * currentScaleYOff;
    static StringMap10 * * textMap;

    // Wrappers
    Sprite(String * p, int frameWidth, int frameHeight, int frameCount, int flags) {
        ptr::CSTR_Sprite(this);
        ptr::New(this, p, frameWidth, frameHeight, frameCount, flags);
    }

    inline static bool UpdateImageMap(String * path, int frameWidth, int frameHeight, int frameCount, int flags, bool checkDimensions) { return ptr::UpdateImageMap(path, frameWidth, frameHeight, frameCount, flags, checkDimensions); }
    inline virtual void InitSprite(String * p) { ptr::InitSprite(this, p); }
    inline static Image * LoadImageFromPath(String * p, bool allowMod) { return ptr::LoadImageFromPath(p, allowMod); }
    inline static String * GetNextTempImageName() { return ptr::GetNextTempImageName(); }
    inline virtual void InitSprite2(Image * img) { ptr::InitSprite2(this, img); }
    inline Sprite * New(String * p, int frameWidth, int frameHeight, int frameCount, int flags) { return ptr::New(this, p, frameWidth, frameHeight, frameCount, flags); }
    inline Sprite * _new2(Image * arg1, int arg2) { return ptr::_new2(this, arg1, arg2); }
    inline Sprite * _new3() { return ptr::_new3(); }
    inline virtual void SetZ(float zVal) { ptr::SetZ(this, zVal); }
    inline virtual void InWorld(bool world) { ptr::InWorld(this, world); }
    inline virtual void DiscardTempImage() { ptr::DiscardTempImage(this); }
    inline static Image * _GetImage(String * arg1) { return ptr::_GetImage(arg1); }
    inline virtual Image * GetImage() { return ptr::GetImage(this); }
    inline virtual int Width() { return ptr::Width(this); }
    inline virtual int Height() { return ptr::Height(this); }
    inline virtual void InitSprite3(String * p, int frameWidth, int frameHeight, int frameCount, int flags) { ptr::InitSprite3(this, p, frameWidth, frameHeight, frameCount, flags); }
    inline Sprite * new4(String * p, int frames, int flags) { return ptr::new4(this, p, frames, flags); }
    inline virtual void SetScale(float scaleVal) { ptr::SetScale(this, scaleVal); }
    inline virtual void SetZOff(float zVal) { ptr::SetZOff(this, zVal); }
    inline virtual void SetHandle2(int xVal, int yVal) { ptr::SetHandle2(this, xVal, yVal); }
    inline virtual void SetAlphaValue(float a) { ptr::SetAlphaValue(this, a); }
    inline virtual void Draw(float x, float y, int frameOverride, int sX, int sY, int sW, int sH) { ptr::Draw(this, x, y, frameOverride, sX, sY, sW, sH); }
    inline virtual float GetAlphaValue() { return ptr::GetAlphaValue(this); }
    inline virtual void SetFrame(int f) { ptr::SetFrame(this, f); }
    inline virtual void FlipX(bool f, bool withOffset) { ptr::FlipX(this, f, withOffset); }
    inline virtual void SetAlphaTweenFromCurrent(float finalVal, int duration) { ptr::SetAlphaTweenFromCurrent(this, finalVal, duration); }
    inline virtual int GetNumFrames() { return ptr::GetNumFrames(this); }
    inline virtual void UnSetZ() { ptr::UnSetZ(this); }
    inline virtual void SetFlipXOff(int x) { ptr::SetFlipXOff(this, x); }
    inline virtual void UnsetCutoffY() { ptr::UnsetCutoffY(this); }
    inline virtual void SetScaleX(float sX) { ptr::SetScaleX(this, sX); }
    inline virtual void SetScaleY(float sY) { ptr::SetScaleY(this, sY); }
    inline static void RenderFrameCapture(int frameNum, bool isReplay) { ptr::RenderFrameCapture(frameNum, isReplay); }
    inline static void RenderAll(bool captureFrame, int frameNum) { ptr::RenderAll(captureFrame, frameNum); }
    inline void SetCutoffY(int cY) { ptr::SetCutoffY(this, cY); }
    inline virtual void FlipY(bool f, bool withOffset) { ptr::FlipY(this, f, withOffset); }
    inline static bool ReloadAllSprites() { return ptr::ReloadAllSprites(); }
    inline virtual int GetFrame() { return ptr::GetFrame(this); }
    inline virtual void SkipNextDraw() { ptr::SkipNextDraw(this); }
    inline virtual float GetZOff() { return ptr::GetZOff(this); }
    inline virtual void SetRotation(float r) { ptr::SetRotation(this, r); }
    inline virtual void ToggleFlipY() { ptr::ToggleFlipY(this); }
    inline static void DrawSpriteText(String * str, int xVal, int yVal) { ptr::DrawSpriteText(str, xVal, yVal); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static bool (*UpdateImageMap)(String * path, int frameWidth, int frameHeight, int frameCount, int flags, bool checkDimensions);
        static void (*InitSprite)(Sprite * self, String * p);
        static Image * (*LoadImageFromPath)(String * p, bool allowMod);
        static String * (*GetNextTempImageName)();
        static void (*InitSprite2)(Sprite * self, Image * img);
        static Sprite * (*New)(Sprite * self, String * p, int frameWidth, int frameHeight, int frameCount, int flags);
        static Sprite * (*_new2)(Sprite * self, Image * arg1, int arg2);
        static Sprite * (*_new3)();
        static void (*SetZ)(Sprite * self, float zVal);
        static void (*InWorld)(Sprite * self, bool world);
        static void (*DiscardTempImage)(Sprite * self);
        static Image * (*_GetImage)(String * arg1);
        static Image * (*GetImage)(Sprite * self);
        static int (*Width)(Sprite * self);
        static int (*Height)(Sprite * self);
        static void (*InitSprite3)(Sprite * self, String * p, int frameWidth, int frameHeight, int frameCount, int flags);
        static Sprite * (*new4)(Sprite * self, String * p, int frames, int flags);
        static void (*SetScale)(Sprite * self, float scaleVal);
        static void (*SetZOff)(Sprite * self, float zVal);
        static void (*SetHandle2)(Sprite * self, int xVal, int yVal);
        static void (*SetAlphaValue)(Sprite * self, float a);
        static void (*Draw)(Sprite * self, float x, float y, int frameOverride, int sX, int sY, int sW, int sH);
        static float (*GetAlphaValue)(Sprite * self);
        static void (*SetFrame)(Sprite * self, int f);
        static void (*FlipX)(Sprite * self, bool f, bool withOffset);
        static void (*SetAlphaTweenFromCurrent)(Sprite * self, float finalVal, int duration);
        static int (*GetNumFrames)(Sprite * self);
        static void (*UnSetZ)(Sprite * self);
        static void (*SetFlipXOff)(Sprite * self, int x);
        static void (*UnsetCutoffY)(Sprite * self);
        static void (*SetScaleX)(Sprite * self, float sX);
        static void (*SetScaleY)(Sprite * self, float sY);
        static void (*RenderFrameCapture)(int frameNum, bool isReplay);
        static void (*RenderAll)(bool captureFrame, int frameNum);
        static void (*SetCutoffY)(Sprite * self, int cY);
        static void (*FlipY)(Sprite * self, bool f, bool withOffset);
        static bool (*ReloadAllSprites)();
        static int (*GetFrame)(Sprite * self);
        static void (*SkipNextDraw)(Sprite * self);
        static float (*GetZOff)(Sprite * self);
        static void (*SetRotation)(Sprite * self, float r);
        static void (*ToggleFlipY)(Sprite * self);
        static void (*DrawSpriteText)(String * str, int xVal, int yVal);
        static void (*_mark)();
        static void (*CSTR_Sprite)(Sprite * self);
    };
};

#ifdef _WIN32
inline bool * Sprite::scaleToFitScreen = (bool*) 0x835b63;
inline StringMap3 * * Sprite::imageMap = (StringMap3* *) 0x835b74;
inline StringMap3 * * Sprite::sourceImageMap = (StringMap3* *) 0x835b70;
inline String * * Sprite::modErrorImageName = (String* *) 0x833ec0;
inline StringMap4 * * Sprite::imageInitData = (StringMap4* *) 0x835b6c;
inline int * Sprite::tempImageCounter = (int*) 0x835b68;
inline float * Sprite::newAlphaDrawVal = (float*) 0x835b64;
inline bool * Sprite::debugDumpRender = (bool*) 0x835b60;
inline float * Sprite::currentScaleFactor = (float*) 0x835b5c;
inline int * Sprite::currentScaleXOff = (int*) 0x835b58;
inline int * Sprite::currentScaleYOff = (int*) 0x835b54;
inline StringMap10 * * Sprite::textMap = (StringMap10* *) 0x835b50;

inline bool (*Sprite::ptr::UpdateImageMap)(String * path, int frameWidth, int frameHeight, int frameCount, int flags, bool checkDimensions) = (bool (*)(String * path, int frameWidth, int frameHeight, int frameCount, int flags, bool checkDimensions)) 0x44c5f0;
inline void (*Sprite::ptr::InitSprite)(Sprite * self, String * p) = (void (*)(Sprite * self, String * p)) 0x44c7f0;
inline Image * (*Sprite::ptr::LoadImageFromPath)(String * p, bool allowMod) = (Image * (*)(String * p, bool allowMod)) 0x44ca30;
inline String * (*Sprite::ptr::GetNextTempImageName)() = (String * (*)()) 0x44d7c0;
inline void (*Sprite::ptr::InitSprite2)(Sprite * self, Image * img) = (void (*)(Sprite * self, Image * img)) 0x44d8c0;
inline Sprite * (*Sprite::ptr::New)(Sprite * self, String * p, int frameWidth, int frameHeight, int frameCount, int flags) = (Sprite * (*)(Sprite * self, String * p, int frameWidth, int frameHeight, int frameCount, int flags)) 0x44d970;
inline Sprite * (*Sprite::ptr::_new2)(Sprite * self, Image * arg1, int arg2) = (Sprite * (*)(Sprite * self, Image * arg1, int arg2)) 0x0;
inline Sprite * (*Sprite::ptr::_new3)() = (Sprite * (*)()) 0x0;
inline void (*Sprite::ptr::SetZ)(Sprite * self, float zVal) = (void (*)(Sprite * self, float zVal)) 0x44da00;
inline void (*Sprite::ptr::InWorld)(Sprite * self, bool world) = (void (*)(Sprite * self, bool world)) 0x44da20;
inline void (*Sprite::ptr::DiscardTempImage)(Sprite * self) = (void (*)(Sprite * self)) 0x44da30;
inline Image * (*Sprite::ptr::_GetImage)(String * arg1) = (Image * (*)(String * arg1)) 0x0;
inline Image * (*Sprite::ptr::GetImage)(Sprite * self) = (Image * (*)(Sprite * self)) 0x44dc90;
inline int (*Sprite::ptr::Width)(Sprite * self) = (int (*)(Sprite * self)) 0x44dd20;
inline int (*Sprite::ptr::Height)(Sprite * self) = (int (*)(Sprite * self)) 0x44dd30;
inline void (*Sprite::ptr::InitSprite3)(Sprite * self, String * p, int frameWidth, int frameHeight, int frameCount, int flags) = (void (*)(Sprite * self, String * p, int frameWidth, int frameHeight, int frameCount, int flags)) 0x44dd40;
inline Sprite * (*Sprite::ptr::new4)(Sprite * self, String * p, int frames, int flags) = (Sprite * (*)(Sprite * self, String * p, int frames, int flags)) 0x44e140;
inline void (*Sprite::ptr::SetScale)(Sprite * self, float scaleVal) = (void (*)(Sprite * self, float scaleVal)) 0x44e1d0;
inline void (*Sprite::ptr::SetZOff)(Sprite * self, float zVal) = (void (*)(Sprite * self, float zVal)) 0x44e1f0;
inline void (*Sprite::ptr::SetHandle2)(Sprite * self, int xVal, int yVal) = (void (*)(Sprite * self, int xVal, int yVal)) 0x44e210;
inline void (*Sprite::ptr::SetAlphaValue)(Sprite * self, float a) = (void (*)(Sprite * self, float a)) 0x44e250;
inline void (*Sprite::ptr::Draw)(Sprite * self, float x, float y, int frameOverride, int sX, int sY, int sW, int sH) = (void (*)(Sprite * self, float x, float y, int frameOverride, int sX, int sY, int sW, int sH)) 0x44e290;
inline float (*Sprite::ptr::GetAlphaValue)(Sprite * self) = (float (*)(Sprite * self)) 0x44e630;
inline void (*Sprite::ptr::SetFrame)(Sprite * self, int f) = (void (*)(Sprite * self, int f)) 0x44e640;
inline void (*Sprite::ptr::FlipX)(Sprite * self, bool f, bool withOffset) = (void (*)(Sprite * self, bool f, bool withOffset)) 0x44e6c0;
inline void (*Sprite::ptr::SetAlphaTweenFromCurrent)(Sprite * self, float finalVal, int duration) = (void (*)(Sprite * self, float finalVal, int duration)) 0x44e770;
inline int (*Sprite::ptr::GetNumFrames)(Sprite * self) = (int (*)(Sprite * self)) 0x44e6e0;
inline void (*Sprite::ptr::UnSetZ)(Sprite * self) = (void (*)(Sprite * self)) 0x44e740;
inline void (*Sprite::ptr::SetFlipXOff)(Sprite * self, int x) = (void (*)(Sprite * self, int x)) 0x44e750;
inline void (*Sprite::ptr::UnsetCutoffY)(Sprite * self) = (void (*)(Sprite * self)) 0x44e760;
inline void (*Sprite::ptr::SetScaleX)(Sprite * self, float sX) = (void (*)(Sprite * self, float sX)) 0x44e7a0;
inline void (*Sprite::ptr::SetScaleY)(Sprite * self, float sY) = (void (*)(Sprite * self, float sY)) 0x44e7c0;
inline void (*Sprite::ptr::RenderFrameCapture)(int frameNum, bool isReplay) = (void (*)(int frameNum, bool isReplay)) 0x44e7e0;
inline void (*Sprite::ptr::RenderAll)(bool captureFrame, int frameNum) = (void (*)(bool captureFrame, int frameNum)) 0x452940;
inline void (*Sprite::ptr::SetCutoffY)(Sprite * self, int cY) = (void (*)(Sprite * self, int cY)) 0x452aa0;
inline void (*Sprite::ptr::FlipY)(Sprite * self, bool f, bool withOffset) = (void (*)(Sprite * self, bool f, bool withOffset)) 0x452ac0;
inline bool (*Sprite::ptr::ReloadAllSprites)() = (bool (*)()) 0x452ae0;
inline int (*Sprite::ptr::GetFrame)(Sprite * self) = (int (*)(Sprite * self)) 0x452f40;
inline void (*Sprite::ptr::SkipNextDraw)(Sprite * self) = (void (*)(Sprite * self)) 0x452f50;
inline float (*Sprite::ptr::GetZOff)(Sprite * self) = (float (*)(Sprite * self)) 0x452f60;
inline void (*Sprite::ptr::SetRotation)(Sprite * self, float r) = (void (*)(Sprite * self, float r)) 0x452f70;
inline void (*Sprite::ptr::ToggleFlipY)(Sprite * self) = (void (*)(Sprite * self)) 0x452f90;
inline void (*Sprite::ptr::DrawSpriteText)(String * str, int xVal, int yVal) = (void (*)(String * str, int xVal, int yVal)) 0x452fb0;
inline void (*Sprite::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Sprite::ptr::CSTR_Sprite)(Sprite * self) = (void (*)(Sprite * self)) 0x44c3b0;
#endif

#ifdef __linux__
inline bool * Sprite::scaleToFitScreen = (bool*) 0x856ab0c;
inline StringMap3 * * Sprite::imageMap = (StringMap3* *) 0x856ab08;
inline StringMap3 * * Sprite::sourceImageMap = (StringMap3* *) 0x856ab04;
inline String * * Sprite::modErrorImageName = (String* *) 0x856ab00;
inline StringMap4 * * Sprite::imageInitData = (StringMap4* *) 0x856aafc;
inline int * Sprite::tempImageCounter = (int*) 0x856aaf8;
inline float * Sprite::newAlphaDrawVal = (float*) 0x856aaf4;
inline bool * Sprite::debugDumpRender = (bool*) 0x856aaf0;
inline float * Sprite::currentScaleFactor = (float*) 0x856aaec;
inline int * Sprite::currentScaleXOff = (int*) 0x856aae8;
inline int * Sprite::currentScaleYOff = (int*) 0x856aae4;
inline StringMap10 * * Sprite::textMap = (StringMap10* *) 0x856aae0;

inline bool (*Sprite::ptr::UpdateImageMap)(String * path, int frameWidth, int frameHeight, int frameCount, int flags, bool checkDimensions) = (bool (*)(String * path, int frameWidth, int frameHeight, int frameCount, int flags, bool checkDimensions)) 0x8296a60;
inline void (*Sprite::ptr::InitSprite)(Sprite * self, String * p) = (void (*)(Sprite * self, String * p)) 0x830a2a0;
inline Image * (*Sprite::ptr::LoadImageFromPath)(String * p, bool allowMod) = (Image * (*)(String * p, bool allowMod)) 0x830e300;
inline String * (*Sprite::ptr::GetNextTempImageName)() = (String * (*)()) 0x8127c60;
inline void (*Sprite::ptr::InitSprite2)(Sprite * self, Image * img) = (void (*)(Sprite * self, Image * img)) 0x80d8d20;
inline Sprite * (*Sprite::ptr::New)(Sprite * self, String * p, int frameWidth, int frameHeight, int frameCount, int flags) = (Sprite * (*)(Sprite * self, String * p, int frameWidth, int frameHeight, int frameCount, int flags)) 0x8127cf0;
inline Sprite * (*Sprite::ptr::_new2)(Sprite * self, Image * arg1, int arg2) = (Sprite * (*)(Sprite * self, Image * arg1, int arg2)) 0x8127d60;
inline Sprite * (*Sprite::ptr::_new3)() = (Sprite * (*)()) 0x8127d80;
inline void (*Sprite::ptr::SetZ)(Sprite * self, float zVal) = (void (*)(Sprite * self, float zVal)) 0x806daa0;
inline void (*Sprite::ptr::InWorld)(Sprite * self, bool world) = (void (*)(Sprite * self, bool world)) 0x806dab0;
inline void (*Sprite::ptr::DiscardTempImage)(Sprite * self) = (void (*)(Sprite * self)) 0x80da9b0;
inline Image * (*Sprite::ptr::_GetImage)(String * arg1) = (Image * (*)(String * arg1)) 0x8127d90;
inline Image * (*Sprite::ptr::GetImage)(Sprite * self) = (Image * (*)(Sprite * self)) 0x80d43d0;
inline int (*Sprite::ptr::Width)(Sprite * self) = (int (*)(Sprite * self)) 0x806dac0;
inline int (*Sprite::ptr::Height)(Sprite * self) = (int (*)(Sprite * self)) 0x806dae0;
inline void (*Sprite::ptr::InitSprite3)(Sprite * self, String * p, int frameWidth, int frameHeight, int frameCount, int flags) = (void (*)(Sprite * self, String * p, int frameWidth, int frameHeight, int frameCount, int flags)) 0x830f380;
inline Sprite * (*Sprite::ptr::new4)(Sprite * self, String * p, int frames, int flags) = (Sprite * (*)(Sprite * self, String * p, int frames, int flags)) 0x8127df0;
inline void (*Sprite::ptr::SetScale)(Sprite * self, float scaleVal) = (void (*)(Sprite * self, float scaleVal)) 0x806db00;
inline void (*Sprite::ptr::SetZOff)(Sprite * self, float zVal) = (void (*)(Sprite * self, float zVal)) 0x806db10;
inline void (*Sprite::ptr::SetHandle2)(Sprite * self, int xVal, int yVal) = (void (*)(Sprite * self, int xVal, int yVal)) 0x806db20;
inline void (*Sprite::ptr::SetAlphaValue)(Sprite * self, float a) = (void (*)(Sprite * self, float a)) 0x806db70;
inline void (*Sprite::ptr::Draw)(Sprite * self, float x, float y, int frameOverride, int sX, int sY, int sW, int sH) = (void (*)(Sprite * self, float x, float y, int frameOverride, int sX, int sY, int sW, int sH)) 0x83e64e0;
inline float (*Sprite::ptr::GetAlphaValue)(Sprite * self) = (float (*)(Sprite * self)) 0x806dbb0;
inline void (*Sprite::ptr::SetFrame)(Sprite * self, int f) = (void (*)(Sprite * self, int f)) 0x822c100;
inline void (*Sprite::ptr::FlipX)(Sprite * self, bool f, bool withOffset) = (void (*)(Sprite * self, bool f, bool withOffset)) 0x806dbc0;
inline void (*Sprite::ptr::SetAlphaTweenFromCurrent)(Sprite * self, float finalVal, int duration) = (void (*)(Sprite * self, float finalVal, int duration)) 0x806dc10;
inline int (*Sprite::ptr::GetNumFrames)(Sprite * self) = (int (*)(Sprite * self)) 0x80c4a30;
inline void (*Sprite::ptr::UnSetZ)(Sprite * self) = (void (*)(Sprite * self)) 0x806dbe0;
inline void (*Sprite::ptr::SetFlipXOff)(Sprite * self, int x) = (void (*)(Sprite * self, int x)) 0x806dbf0;
inline void (*Sprite::ptr::UnsetCutoffY)(Sprite * self) = (void (*)(Sprite * self)) 0x806dc00;
inline void (*Sprite::ptr::SetScaleX)(Sprite * self, float sX) = (void (*)(Sprite * self, float sX)) 0x806dc40;
inline void (*Sprite::ptr::SetScaleY)(Sprite * self, float sY) = (void (*)(Sprite * self, float sY)) 0x806dc50;
inline void (*Sprite::ptr::RenderFrameCapture)(int frameNum, bool isReplay) = (void (*)(int frameNum, bool isReplay)) 0x8305960;
inline void (*Sprite::ptr::RenderAll)(bool captureFrame, int frameNum) = (void (*)(bool captureFrame, int frameNum)) 0x8407640;
inline void (*Sprite::ptr::SetCutoffY)(Sprite * self, int cY) = (void (*)(Sprite * self, int cY)) 0x806dc60;
inline void (*Sprite::ptr::FlipY)(Sprite * self, bool f, bool withOffset) = (void (*)(Sprite * self, bool f, bool withOffset)) 0x806dc80;
inline bool (*Sprite::ptr::ReloadAllSprites)() = (bool (*)()) 0x830efe0;
inline int (*Sprite::ptr::GetFrame)(Sprite * self) = (int (*)(Sprite * self)) 0x806dca0;
inline void (*Sprite::ptr::SkipNextDraw)(Sprite * self) = (void (*)(Sprite * self)) 0x806dcb0;
inline float (*Sprite::ptr::GetZOff)(Sprite * self) = (float (*)(Sprite * self)) 0x806dcc0;
inline void (*Sprite::ptr::SetRotation)(Sprite * self, float r) = (void (*)(Sprite * self, float r)) 0x806dcd0;
inline void (*Sprite::ptr::ToggleFlipY)(Sprite * self) = (void (*)(Sprite * self)) 0x806dce0;
inline void (*Sprite::ptr::DrawSpriteText)(String * str, int xVal, int yVal) = (void (*)(String * str, int xVal, int yVal)) 0x8127e60;
inline void (*Sprite::ptr::_mark)() = (void (*)()) 0x806dcf0;
inline void (*Sprite::ptr::CSTR_Sprite)(Sprite * self) = (void (*)(Sprite * self)) 0x811b1c0;
#endif
#endif
