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
inline XMLDoc * * ControllerCutscene::subtitleXML = (XMLDoc* *) 0x83584c;
inline bool * ControllerCutscene::fadingIn = (bool*) 0x835849;
inline bool * ControllerCutscene::fadingOut = (bool*) 0x835848;
inline bool * ControllerCutscene::startedPlayback = (bool*) 0x83583b;
inline ControllerCutscene * * ControllerCutscene::instance = (ControllerCutscene* *) 0x835844;
inline Sprite * * ControllerCutscene::videoSpr = (Sprite* *) 0x835840;

inline void (*ControllerCutscene::ptr::InitSubtitles)() = (void (*)()) 0x538e80;
inline ControllerCutscene * (*ControllerCutscene::ptr::New)(ControllerCutscene * self, int cutsceneChar, int cutsceneNum, int creditsNum) = (ControllerCutscene * (*)(ControllerCutscene * self, int cutsceneChar, int cutsceneNum, int creditsNum)) 0x5397a0;
inline ControllerCutscene * (*ControllerCutscene::ptr::_new2)() = (ControllerCutscene * (*)()) 0x0;
inline void (*ControllerCutscene::ptr::_RegainFocus)() = (void (*)()) 0x0;
inline void (*ControllerCutscene::ptr::DrawFrame)(ControllerCutscene * self) = (void (*)(ControllerCutscene * self)) 0x53a870;
inline void (*ControllerCutscene::ptr::Update)(ControllerCutscene * self) = (void (*)(ControllerCutscene * self)) 0x53a9b0;
inline void (*ControllerCutscene::ptr::Render)(ControllerCutscene * self) = (void (*)(ControllerCutscene * self)) 0x53b1d0;
inline void (*ControllerCutscene::ptr::Destructor)(ControllerCutscene * self) = (void (*)(ControllerCutscene * self)) 0x53b2a0;
inline void (*ControllerCutscene::ptr::mark)(ControllerCutscene * self) = (void (*)(ControllerCutscene * self)) 0x53b340;
inline void (*ControllerCutscene::ptr::CSTR_ControllerCutscene)(ControllerCutscene * self) = (void (*)(ControllerCutscene * self)) 0x538c80;
#endif

#ifdef __linux__
inline XMLDoc * * ControllerCutscene::subtitleXML = (XMLDoc* *) 0x856a860;
inline bool * ControllerCutscene::fadingIn = (bool*) 0x856a85e;
inline bool * ControllerCutscene::fadingOut = (bool*) 0x856a85d;
inline bool * ControllerCutscene::startedPlayback = (bool*) 0x856a85c;
inline ControllerCutscene * * ControllerCutscene::instance = (ControllerCutscene* *) 0x856a858;
inline Sprite * * ControllerCutscene::videoSpr = (Sprite* *) 0x856a854;

inline void (*ControllerCutscene::ptr::InitSubtitles)() = (void (*)()) 0x8144d70;
inline ControllerCutscene * (*ControllerCutscene::ptr::New)(ControllerCutscene * self, int cutsceneChar, int cutsceneNum, int creditsNum) = (ControllerCutscene * (*)(ControllerCutscene * self, int cutsceneChar, int cutsceneNum, int creditsNum)) 0x827f480;
inline ControllerCutscene * (*ControllerCutscene::ptr::_new2)() = (ControllerCutscene * (*)()) 0x8145890;
inline void (*ControllerCutscene::ptr::_RegainFocus)() = (void (*)()) 0x806ef70;
inline void (*ControllerCutscene::ptr::DrawFrame)(ControllerCutscene * self) = (void (*)(ControllerCutscene * self)) 0x8350af0;
inline void (*ControllerCutscene::ptr::Update)(ControllerCutscene * self) = (void (*)(ControllerCutscene * self)) 0x8313410;
inline void (*ControllerCutscene::ptr::Render)(ControllerCutscene * self) = (void (*)(ControllerCutscene * self)) 0x84223f0;
inline void (*ControllerCutscene::ptr::Destructor)(ControllerCutscene * self) = (void (*)(ControllerCutscene * self)) 0x8364560;
inline void (*ControllerCutscene::ptr::mark)(ControllerCutscene * self) = (void (*)(ControllerCutscene * self)) 0x80ab330;
inline void (*ControllerCutscene::ptr::CSTR_ControllerCutscene)(ControllerCutscene * self) = (void (*)(ControllerCutscene * self)) 0x81515e0;
#endif
#endif
