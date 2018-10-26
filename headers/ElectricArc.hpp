// Generated automatically. Do not edit!
#ifndef _ElectricArc_
#define _ElectricArc_
class Entity;
class List43;
class Sprite;
class Stack;
#include "Object.hpp"

class ElectricArc : public Object  {
public:
    int targetX;
    int targetY;
    int outDir;
    int delayFrames;
    bool flashOnly;
    Entity * lightSource;
    int renderFrames;
    static Stack * * animRenderFrames;
    static int * totalRenderFrames;
    static Sprite * * imageDown;
    static Sprite * * imageDownLeft;
    static Sprite * * imageFlash;
    static List43 * * arcList;

    // Wrappers
    ElectricArc(int targetX_, int targetY_, int inDir, int delay_, bool flashOnly_) {
        ptr::CSTR_ElectricArc(this);
        ptr::New(this, targetX_, targetY_, inDir, delay_, flashOnly_);
    }

    inline ElectricArc * New(int targetX_, int targetY_, int inDir, int delay_, bool flashOnly_) { return ptr::New(this, targetX_, targetY_, inDir, delay_, flashOnly_); }
    inline ElectricArc * _new2() { return ptr::_new2(); }
    inline virtual int GetFrameIndexFromRenderFrames(int renderFrame) { return ptr::GetFrameIndexFromRenderFrames(this, renderFrame); }
    inline virtual void Render() { ptr::Render(this); }
    inline static void RenderAll() { ptr::RenderAll(); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static ElectricArc * (*New)(ElectricArc * self, int targetX_, int targetY_, int inDir, int delay_, bool flashOnly_);
        static ElectricArc * (*_new2)();
        static int (*GetFrameIndexFromRenderFrames)(ElectricArc * self, int renderFrame);
        static void (*Render)(ElectricArc * self);
        static void (*RenderAll)();
        static void (*mark)(ElectricArc * self);
        static void (*CSTR_ElectricArc)(ElectricArc * self);
    };
};

#ifdef _WIN32
Stack * * ElectricArc::animRenderFrames = (Stack* *) 0x8355a8;
int * ElectricArc::totalRenderFrames = (int*) 0x8355a4;
Sprite * * ElectricArc::imageDown = (Sprite* *) 0x8355a0;
Sprite * * ElectricArc::imageDownLeft = (Sprite* *) 0x83559c;
Sprite * * ElectricArc::imageFlash = (Sprite* *) 0x835598;
List43 * * ElectricArc::arcList = (List43* *) 0x835594;

ElectricArc * (*ElectricArc::ptr::New)(ElectricArc * self, int targetX_, int targetY_, int inDir, int delay_, bool flashOnly_) = (ElectricArc * (*)(ElectricArc * self, int targetX_, int targetY_, int inDir, int delay_, bool flashOnly_)) 0x6322c0;
ElectricArc * (*ElectricArc::ptr::_new2)() = (ElectricArc * (*)()) 0x0;
int (*ElectricArc::ptr::GetFrameIndexFromRenderFrames)(ElectricArc * self, int renderFrame) = (int (*)(ElectricArc * self, int renderFrame)) 0x6327a0;
void (*ElectricArc::ptr::Render)(ElectricArc * self) = (void (*)(ElectricArc * self)) 0x632810;
void (*ElectricArc::ptr::RenderAll)() = (void (*)()) 0x6329d0;
void (*ElectricArc::ptr::mark)(ElectricArc * self) = (void (*)(ElectricArc * self)) 0x632a30;
void (*ElectricArc::ptr::CSTR_ElectricArc)(ElectricArc * self) = (void (*)(ElectricArc * self)) 0x632230;
#endif

#ifdef __linux__
Stack * * ElectricArc::animRenderFrames = (Stack* *) 0x856a38c;
int * ElectricArc::totalRenderFrames = (int*) 0x856a388;
Sprite * * ElectricArc::imageDown = (Sprite* *) 0x856a384;
Sprite * * ElectricArc::imageDownLeft = (Sprite* *) 0x856a380;
Sprite * * ElectricArc::imageFlash = (Sprite* *) 0x856a37c;
List43 * * ElectricArc::arcList = (List43* *) 0x856a378;

ElectricArc * (*ElectricArc::ptr::New)(ElectricArc * self, int targetX_, int targetY_, int inDir, int delay_, bool flashOnly_) = (ElectricArc * (*)(ElectricArc * self, int targetX_, int targetY_, int inDir, int delay_, bool flashOnly_)) 0x822fe20;
ElectricArc * (*ElectricArc::ptr::_new2)() = (ElectricArc * (*)()) 0x81bbed0;
int (*ElectricArc::ptr::GetFrameIndexFromRenderFrames)(ElectricArc * self, int renderFrame) = (int (*)(ElectricArc * self, int renderFrame)) 0x8075850;
void (*ElectricArc::ptr::Render)(ElectricArc * self) = (void (*)(ElectricArc * self)) 0x830a670;
void (*ElectricArc::ptr::RenderAll)() = (void (*)()) 0x81bbee0;
void (*ElectricArc::ptr::mark)(ElectricArc * self) = (void (*)(ElectricArc * self)) 0x80a1080;
void (*ElectricArc::ptr::CSTR_ElectricArc)(ElectricArc * self) = (void (*)(ElectricArc * self)) 0x81bbe90;
#endif
#endif
