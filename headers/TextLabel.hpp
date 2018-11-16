// Generated automatically. Do not edit!
#ifndef _TextLabel_
#define _TextLabel_
class String;
class TextSprite;
#include "GuiComponent.hpp"

class TextLabel : public GuiComponent  {
public:
    int justification;
    TextSprite * normalSpr;
    TextSprite * selectedSpr;
    bool allowLeft;

    // Wrappers
    TextLabel(String * t, int j, float sc, bool left) {
        ptr::CSTR_TextLabel(this);
        ptr::New(this, t, j, sc, left);
    }

    inline virtual String * SelectifyText(String * t) { return ptr::SelectifyText(this, t); }
    inline TextLabel * New(String * t, int j, float sc, bool left) { return ptr::New(this, t, j, sc, left); }
    inline TextLabel * _new2() { return ptr::_new2(); }
    inline virtual TextLabel * SetText2(String * t) { return ptr::SetText2(this, t); }
    inline virtual void SetActive(bool a) { ptr::SetActive(this, a); }
    inline virtual int GetLocalizationXOffset() { return ptr::GetLocalizationXOffset(this); }
    inline virtual int GetLocalizationYOffset() { return ptr::GetLocalizationYOffset(this); }
    inline virtual void SetLocalizationOffset(int xOff, int yOff) { ptr::SetLocalizationOffset(this, xOff, yOff); }
    inline virtual void Draw2(float x, float y, int frameOverride) { ptr::Draw2(this, x, y, frameOverride); }
    inline virtual void Discard() { ptr::Discard(this); }
    inline bool Left() { return ptr::Left(this); }
    inline virtual String * GetText() { return ptr::GetText(this); }
    inline bool IsActive() { return ptr::IsActive(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static String * (*SelectifyText)(TextLabel * self, String * t);
        static TextLabel * (*New)(TextLabel * self, String * t, int j, float sc, bool left);
        static TextLabel * (*_new2)();
        static TextLabel * (*SetText2)(TextLabel * self, String * t);
        static void (*SetActive)(TextLabel * self, bool a);
        static int (*GetLocalizationXOffset)(TextLabel * self);
        static int (*GetLocalizationYOffset)(TextLabel * self);
        static void (*SetLocalizationOffset)(TextLabel * self, int xOff, int yOff);
        static void (*Draw2)(TextLabel * self, float x, float y, int frameOverride);
        static void (*Discard)(TextLabel * self);
        static bool (*Left)(TextLabel * self);
        static String * (*GetText)(TextLabel * self);
        static bool (*IsActive)(TextLabel * self);
        static void (*mark)(TextLabel * self);
        static void (*CSTR_TextLabel)(TextLabel * self);
    };
};

#ifdef _WIN32

inline String * (*TextLabel::ptr::SelectifyText)(TextLabel * self, String * t) = (String * (*)(TextLabel * self, String * t)) 0x541680;
inline TextLabel * (*TextLabel::ptr::New)(TextLabel * self, String * t, int j, float sc, bool left) = (TextLabel * (*)(TextLabel * self, String * t, int j, float sc, bool left)) 0x541840;
inline TextLabel * (*TextLabel::ptr::_new2)() = (TextLabel * (*)()) 0x0;
inline TextLabel * (*TextLabel::ptr::SetText2)(TextLabel * self, String * t) = (TextLabel * (*)(TextLabel * self, String * t)) 0x541a30;
inline void (*TextLabel::ptr::SetActive)(TextLabel * self, bool a) = (void (*)(TextLabel * self, bool a)) 0x541af0;
inline int (*TextLabel::ptr::GetLocalizationXOffset)(TextLabel * self) = (int (*)(TextLabel * self)) 0x541b00;
inline int (*TextLabel::ptr::GetLocalizationYOffset)(TextLabel * self) = (int (*)(TextLabel * self)) 0x541b10;
inline void (*TextLabel::ptr::SetLocalizationOffset)(TextLabel * self, int xOff, int yOff) = (void (*)(TextLabel * self, int xOff, int yOff)) 0x541b20;
inline void (*TextLabel::ptr::Draw2)(TextLabel * self, float x, float y, int frameOverride) = (void (*)(TextLabel * self, float x, float y, int frameOverride)) 0x541b50;
inline void (*TextLabel::ptr::Discard)(TextLabel * self) = (void (*)(TextLabel * self)) 0x541b90;
inline bool (*TextLabel::ptr::Left)(TextLabel * self) = (bool (*)(TextLabel * self)) 0x541bb0;
inline String * (*TextLabel::ptr::GetText)(TextLabel * self) = (String * (*)(TextLabel * self)) 0x541bc0;
inline bool (*TextLabel::ptr::IsActive)(TextLabel * self) = (bool (*)(TextLabel * self)) 0x403c70;
inline void (*TextLabel::ptr::mark)(TextLabel * self) = (void (*)(TextLabel * self)) 0x541c50;
inline void (*TextLabel::ptr::CSTR_TextLabel)(TextLabel * self) = (void (*)(TextLabel * self)) 0x5414f0;
#endif

#ifdef __linux__

inline String * (*TextLabel::ptr::SelectifyText)(TextLabel * self, String * t) = (String * (*)(TextLabel * self, String * t)) 0x80c98f0;
inline TextLabel * (*TextLabel::ptr::New)(TextLabel * self, String * t, int j, float sc, bool left) = (TextLabel * (*)(TextLabel * self, String * t, int j, float sc, bool left)) 0x81468d0;
inline TextLabel * (*TextLabel::ptr::_new2)() = (TextLabel * (*)()) 0x8145e60;
inline TextLabel * (*TextLabel::ptr::SetText2)(TextLabel * self, String * t) = (TextLabel * (*)(TextLabel * self, String * t)) 0x80c3da0;
inline void (*TextLabel::ptr::SetActive)(TextLabel * self, bool a) = (void (*)(TextLabel * self, bool a)) 0x806f4e0;
inline int (*TextLabel::ptr::GetLocalizationXOffset)(TextLabel * self) = (int (*)(TextLabel * self)) 0x806f4f0;
inline int (*TextLabel::ptr::GetLocalizationYOffset)(TextLabel * self) = (int (*)(TextLabel * self)) 0x806f500;
inline void (*TextLabel::ptr::SetLocalizationOffset)(TextLabel * self, int xOff, int yOff) = (void (*)(TextLabel * self, int xOff, int yOff)) 0x806f510;
inline void (*TextLabel::ptr::Draw2)(TextLabel * self, float x, float y, int frameOverride) = (void (*)(TextLabel * self, float x, float y, int frameOverride)) 0x807e640;
inline void (*TextLabel::ptr::Discard)(TextLabel * self) = (void (*)(TextLabel * self)) 0x806f540;
inline bool (*TextLabel::ptr::Left)(TextLabel * self) = (bool (*)(TextLabel * self)) 0x806f570;
inline String * (*TextLabel::ptr::GetText)(TextLabel * self) = (String * (*)(TextLabel * self)) 0x80c1e10;
inline bool (*TextLabel::ptr::IsActive)(TextLabel * self) = (bool (*)(TextLabel * self)) 0x806f580;
inline void (*TextLabel::ptr::mark)(TextLabel * self) = (void (*)(TextLabel * self)) 0x80a33c0;
inline void (*TextLabel::ptr::CSTR_TextLabel)(TextLabel * self) = (void (*)(TextLabel * self)) 0x8145e30;
#endif
#endif
