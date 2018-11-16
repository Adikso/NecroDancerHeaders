// Generated automatically. Do not edit!
#ifndef _TextSprite_
#define _TextSprite_
class List2;
class String;
class XMLDoc;
#include "Object.hpp"

class TextSprite : public Object  {
public:
    int justification;
    float scaleVal;
    int color;
    int zVal;
    bool showShadow;
    int shadowColor;
    int shadowOffX;
    int shadowOffY;
    int fontScale;
    String * containedText;
    String * textLanguage;
    List2 * containedSprites;
    List2 * containedSpriteShadows;
    int xOffLocalization;
    int yOffLocalization;
    int overallYOffLocalization;
    float scaleLocalization;
    static XMLDoc * * localizationXML;

    // Wrappers
    TextSprite(int j, float sc, int c, int z, bool shad, int shadC, int sOffX, int sOffY) {
        ptr::CSTR_TextSprite(this);
        ptr::New(this, j, sc, c, z, shad, shadC, sOffX, sOffY);
    }

    inline static void Init() { ptr::Init(); }
    inline TextSprite * New(int j, float sc, int c, int z, bool shad, int shadC, int sOffX, int sOffY) { return ptr::New(this, j, sc, c, z, shad, shadC, sOffX, sOffY); }
    inline virtual void SetText(String * t, bool force) { ptr::SetText(this, t, force); }
    inline virtual void InWorld(bool b) { ptr::InWorld(this, b); }
    inline virtual float DrawSprites(List2 * sprites, float x, float y, int frameOverride, bool dryRun) { return ptr::DrawSprites(this, sprites, x, y, frameOverride, dryRun); }
    inline virtual float ScaledWidth() { return ptr::ScaledWidth(this); }
    inline virtual void Discard() { ptr::Discard(this); }
    inline virtual void SetAlphaValue(float a) { ptr::SetAlphaValue(this, a); }
    inline virtual void HideInReplays() { ptr::HideInReplays(this); }
    inline virtual void Draw2(float x, float y, int frameOverride) { ptr::Draw2(this, x, y, frameOverride); }
    inline virtual void DrawText(String * t, float x, float y, bool force, bool hideInReplays) { ptr::DrawText(this, t, x, y, force, hideInReplays); }
    inline virtual int Height() { return ptr::Height(this); }
    inline virtual void SetAlphaTweenFromCurrent(float finalVal, int duration) { ptr::SetAlphaTweenFromCurrent(this, finalVal, duration); }
    inline virtual String * GetText() { return ptr::GetText(this); }
    inline virtual void SetZOff2(int zOff) { ptr::SetZOff2(this, zOff); }
    inline virtual int GetWidthOffset() { return ptr::GetWidthOffset(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static void (*Init)();
        static TextSprite * (*New)(TextSprite * self, int j, float sc, int c, int z, bool shad, int shadC, int sOffX, int sOffY);
        static void (*SetText)(TextSprite * self, String * t, bool force);
        static void (*InWorld)(TextSprite * self, bool b);
        static float (*DrawSprites)(TextSprite * self, List2 * sprites, float x, float y, int frameOverride, bool dryRun);
        static float (*ScaledWidth)(TextSprite * self);
        static void (*Discard)(TextSprite * self);
        static void (*SetAlphaValue)(TextSprite * self, float a);
        static void (*HideInReplays)(TextSprite * self);
        static void (*Draw2)(TextSprite * self, float x, float y, int frameOverride);
        static void (*DrawText)(TextSprite * self, String * t, float x, float y, bool force, bool hideInReplays);
        static int (*Height)(TextSprite * self);
        static void (*SetAlphaTweenFromCurrent)(TextSprite * self, float finalVal, int duration);
        static String * (*GetText)(TextSprite * self);
        static void (*SetZOff2)(TextSprite * self, int zOff);
        static int (*GetWidthOffset)(TextSprite * self);
        static void (*mark)(TextSprite * self);
        static void (*CSTR_TextSprite)(TextSprite * self);
    };
};

#ifdef _WIN32
inline XMLDoc * * TextSprite::localizationXML = (XMLDoc* *) 0x835850;

inline void (*TextSprite::ptr::Init)() = (void (*)()) 0x535a00;
inline TextSprite * (*TextSprite::ptr::New)(TextSprite * self, int j, float sc, int c, int z, bool shad, int shadC, int sOffX, int sOffY) = (TextSprite * (*)(TextSprite * self, int j, float sc, int c, int z, bool shad, int shadC, int sOffX, int sOffY)) 0x536320;
inline void (*TextSprite::ptr::SetText)(TextSprite * self, String * t, bool force) = (void (*)(TextSprite * self, String * t, bool force)) 0x5363e0;
inline void (*TextSprite::ptr::InWorld)(TextSprite * self, bool b) = (void (*)(TextSprite * self, bool b)) 0x5384f0;
inline float (*TextSprite::ptr::DrawSprites)(TextSprite * self, List2 * sprites, float x, float y, int frameOverride, bool dryRun) = (float (*)(TextSprite * self, List2 * sprites, float x, float y, int frameOverride, bool dryRun)) 0x538570;
inline float (*TextSprite::ptr::ScaledWidth)(TextSprite * self) = (float (*)(TextSprite * self)) 0x538690;
inline void (*TextSprite::ptr::Discard)(TextSprite * self) = (void (*)(TextSprite * self)) 0x5386c0;
inline void (*TextSprite::ptr::SetAlphaValue)(TextSprite * self, float a) = (void (*)(TextSprite * self, float a)) 0x538730;
inline void (*TextSprite::ptr::HideInReplays)(TextSprite * self) = (void (*)(TextSprite * self)) 0x5387c0;
inline void (*TextSprite::ptr::Draw2)(TextSprite * self, float x, float y, int frameOverride) = (void (*)(TextSprite * self, float x, float y, int frameOverride)) 0x538830;
inline void (*TextSprite::ptr::DrawText)(TextSprite * self, String * t, float x, float y, bool force, bool hideInReplays) = (void (*)(TextSprite * self, String * t, float x, float y, bool force, bool hideInReplays)) 0x538900;
inline int (*TextSprite::ptr::Height)(TextSprite * self) = (int (*)(TextSprite * self)) 0x5389b0;
inline void (*TextSprite::ptr::SetAlphaTweenFromCurrent)(TextSprite * self, float finalVal, int duration) = (void (*)(TextSprite * self, float finalVal, int duration)) 0x5389e0;
inline String * (*TextSprite::ptr::GetText)(TextSprite * self) = (String * (*)(TextSprite * self)) 0x538a80;
inline void (*TextSprite::ptr::SetZOff2)(TextSprite * self, int zOff) = (void (*)(TextSprite * self, int zOff)) 0x538ae0;
inline int (*TextSprite::ptr::GetWidthOffset)(TextSprite * self) = (int (*)(TextSprite * self)) 0x538b90;
inline void (*TextSprite::ptr::mark)(TextSprite * self) = (void (*)(TextSprite * self)) 0x538be0;
inline void (*TextSprite::ptr::CSTR_TextSprite)(TextSprite * self) = (void (*)(TextSprite * self)) 0x535730;
#endif

#ifdef __linux__
inline XMLDoc * * TextSprite::localizationXML = (XMLDoc* *) 0x856a864;

inline void (*TextSprite::ptr::Init)() = (void (*)()) 0x8144160;
inline TextSprite * (*TextSprite::ptr::New)(TextSprite * self, int j, float sc, int c, int z, bool shad, int shadC, int sOffX, int sOffY) = (TextSprite * (*)(TextSprite * self, int j, float sc, int c, int z, bool shad, int shadC, int sOffX, int sOffY)) 0x8144c80;
inline void (*TextSprite::ptr::SetText)(TextSprite * self, String * t, bool force) = (void (*)(TextSprite * self, String * t, bool force)) 0x820dc50;
inline void (*TextSprite::ptr::InWorld)(TextSprite * self, bool b) = (void (*)(TextSprite * self, bool b)) 0x806e9e0;
inline float (*TextSprite::ptr::DrawSprites)(TextSprite * self, List2 * sprites, float x, float y, int frameOverride, bool dryRun) = (float (*)(TextSprite * self, List2 * sprites, float x, float y, int frameOverride, bool dryRun)) 0x806ea70;
inline float (*TextSprite::ptr::ScaledWidth)(TextSprite * self) = (float (*)(TextSprite * self)) 0x806eb90;
inline void (*TextSprite::ptr::Discard)(TextSprite * self) = (void (*)(TextSprite * self)) 0x806ebd0;
inline void (*TextSprite::ptr::SetAlphaValue)(TextSprite * self, float a) = (void (*)(TextSprite * self, float a)) 0x806ec40;
inline void (*TextSprite::ptr::HideInReplays)(TextSprite * self) = (void (*)(TextSprite * self)) 0x806ecc0;
inline void (*TextSprite::ptr::Draw2)(TextSprite * self, float x, float y, int frameOverride) = (void (*)(TextSprite * self, float x, float y, int frameOverride)) 0x806ed30;
inline void (*TextSprite::ptr::DrawText)(TextSprite * self, String * t, float x, float y, bool force, bool hideInReplays) = (void (*)(TextSprite * self, String * t, float x, float y, bool force, bool hideInReplays)) 0x80c4190;
inline int (*TextSprite::ptr::Height)(TextSprite * self) = (int (*)(TextSprite * self)) 0x807e510;
inline void (*TextSprite::ptr::SetAlphaTweenFromCurrent)(TextSprite * self, float finalVal, int duration) = (void (*)(TextSprite * self, float finalVal, int duration)) 0x806ee10;
inline String * (*TextSprite::ptr::GetText)(TextSprite * self) = (String * (*)(TextSprite * self)) 0x806eea0;
inline void (*TextSprite::ptr::SetZOff2)(TextSprite * self, int zOff) = (void (*)(TextSprite * self, int zOff)) 0x806eec0;
inline int (*TextSprite::ptr::GetWidthOffset)(TextSprite * self) = (int (*)(TextSprite * self)) 0x807e550;
inline void (*TextSprite::ptr::mark)(TextSprite * self) = (void (*)(TextSprite * self)) 0x8086ef0;
inline void (*TextSprite::ptr::CSTR_TextSprite)(TextSprite * self) = (void (*)(TextSprite * self)) 0x81461f0;
#endif
#endif
