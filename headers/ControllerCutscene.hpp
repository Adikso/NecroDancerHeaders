// Generated automatically. Do not edit!
#ifndef _ControllerCutscene_
#define _ControllerCutscene_
template<class T> class Array;
class Image;
class List4;
class Sprite;
class String;
class SubtitleData;
class XMLDoc;
#include "Controller.hpp"

class ControllerCutscene : public Controller  {
public:
    String * cutsceneName;
    Image * videoImg;
    List4 * subtitles;
    int inputDelayFrames;
    int numKeyHits;
    bool delayFrame;
    Array<int> * currentFramePixels;
    bool videoSprInitialized;
    SubtitleData * curSubtitle;
    Sprite * subtitleImg;
    int endVideoDelay;
    static XMLDoc * * subtitleXML;
    static bool * fadingIn;
    static bool * fadingOut;
    static bool * startedPlayback;
    static ControllerCutscene * * instance;
    static Sprite * * videoSpr;

    // Wrappers
    ControllerCutscene(int cutsceneChar, int cutsceneNum, int creditsNum) {
        ptr::CSTR_ControllerCutscene(this);
        ptr::New(this, cutsceneChar, cutsceneNum, creditsNum);
    }

    inline static void InitSubtitles() { ptr::InitSubtitles(); }
    inline ControllerCutscene * New(int cutsceneChar, int cutsceneNum, int creditsNum) { return ptr::New(this, cutsceneChar, cutsceneNum, creditsNum); }
    inline ControllerCutscene * _new2() { return ptr::_new2(); }
    inline void _RegainFocus() { ptr::_RegainFocus(); }
    inline virtual void DrawFrame() { ptr::DrawFrame(this); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline void Destructor() { ptr::Destructor(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static void (*InitSubtitles)();
        static ControllerCutscene * (*New)(ControllerCutscene * self, int cutsceneChar, int cutsceneNum, int creditsNum);
        static ControllerCutscene * (*_new2)();
        static void (*_RegainFocus)();
        static void (*DrawFrame)(ControllerCutscene * self);
        static void (*Update)(ControllerCutscene * self);
        static void (*Render)(ControllerCutscene * self);
        static void (*Destructor)(ControllerCutscene * self);
        static void (*mark)(ControllerCutscene * self);
        static void (*CSTR_ControllerCutscene)(ControllerCutscene * self);
    };
};

#ifdef _WIN32
XMLDoc * * ControllerCutscene::subtitleXML = (XMLDoc* *) 0x83584c;
bool * ControllerCutscene::fadingIn = (bool*) 0x835849;
bool * ControllerCutscene::fadingOut = (bool*) 0x835848;
bool * ControllerCutscene::startedPlayback = (bool*) 0x83583b;
ControllerCutscene * * ControllerCutscene::instance = (ControllerCutscene* *) 0x835844;
Sprite * * ControllerCutscene::videoSpr = (Sprite* *) 0x835840;

void (*ControllerCutscene::ptr::InitSubtitles)() = (void (*)()) 0x538e80;
ControllerCutscene * (*ControllerCutscene::ptr::New)(ControllerCutscene * self, int cutsceneChar, int cutsceneNum, int creditsNum) = (ControllerCutscene * (*)(ControllerCutscene * self, int cutsceneChar, int cutsceneNum, int creditsNum)) 0x5397a0;
ControllerCutscene * (*ControllerCutscene::ptr::_new2)() = (ControllerCutscene * (*)()) 0x0;
void (*ControllerCutscene::ptr::_RegainFocus)() = (void (*)()) 0x0;
void (*ControllerCutscene::ptr::DrawFrame)(ControllerCutscene * self) = (void (*)(ControllerCutscene * self)) 0x53a870;
void (*ControllerCutscene::ptr::Update)(ControllerCutscene * self) = (void (*)(ControllerCutscene * self)) 0x53a9b0;
void (*ControllerCutscene::ptr::Render)(ControllerCutscene * self) = (void (*)(ControllerCutscene * self)) 0x53b1d0;
void (*ControllerCutscene::ptr::Destructor)(ControllerCutscene * self) = (void (*)(ControllerCutscene * self)) 0x53b2a0;
void (*ControllerCutscene::ptr::mark)(ControllerCutscene * self) = (void (*)(ControllerCutscene * self)) 0x53b340;
void (*ControllerCutscene::ptr::CSTR_ControllerCutscene)(ControllerCutscene * self) = (void (*)(ControllerCutscene * self)) 0x538c80;
#endif

#ifdef __linux__
XMLDoc * * ControllerCutscene::subtitleXML = (XMLDoc* *) 0x856a860;
bool * ControllerCutscene::fadingIn = (bool*) 0x856a85e;
bool * ControllerCutscene::fadingOut = (bool*) 0x856a85d;
bool * ControllerCutscene::startedPlayback = (bool*) 0x856a85c;
ControllerCutscene * * ControllerCutscene::instance = (ControllerCutscene* *) 0x856a858;
Sprite * * ControllerCutscene::videoSpr = (Sprite* *) 0x856a854;

void (*ControllerCutscene::ptr::InitSubtitles)() = (void (*)()) 0x8144d70;
ControllerCutscene * (*ControllerCutscene::ptr::New)(ControllerCutscene * self, int cutsceneChar, int cutsceneNum, int creditsNum) = (ControllerCutscene * (*)(ControllerCutscene * self, int cutsceneChar, int cutsceneNum, int creditsNum)) 0x827f480;
ControllerCutscene * (*ControllerCutscene::ptr::_new2)() = (ControllerCutscene * (*)()) 0x8145890;
void (*ControllerCutscene::ptr::_RegainFocus)() = (void (*)()) 0x806ef70;
void (*ControllerCutscene::ptr::DrawFrame)(ControllerCutscene * self) = (void (*)(ControllerCutscene * self)) 0x8350af0;
void (*ControllerCutscene::ptr::Update)(ControllerCutscene * self) = (void (*)(ControllerCutscene * self)) 0x8313410;
void (*ControllerCutscene::ptr::Render)(ControllerCutscene * self) = (void (*)(ControllerCutscene * self)) 0x84223f0;
void (*ControllerCutscene::ptr::Destructor)(ControllerCutscene * self) = (void (*)(ControllerCutscene * self)) 0x8364560;
void (*ControllerCutscene::ptr::mark)(ControllerCutscene * self) = (void (*)(ControllerCutscene * self)) 0x80ab330;
void (*ControllerCutscene::ptr::CSTR_ControllerCutscene)(ControllerCutscene * self) = (void (*)(ControllerCutscene * self)) 0x81515e0;
#endif
#endif
