// Generated automatically. Do not edit!
#ifndef _Arrow_
#define _Arrow_
class List35;
class Point;
class Sprite;
#include "Object.hpp"

class Arrow : public Object  {
public:
    int type;
    Point * startTile;
    int tileDist;
    int dir;
    Sprite * image;
    int renderFrames;
    static List35 * * arrowList;

    // Wrappers
    Arrow(int origX, int origY, int xOff, int yOff, int tmpDir, int type_) {
        ptr::CSTR_Arrow(this);
        ptr::New(this, origX, origY, xOff, yOff, tmpDir, type_);
    }

    inline Arrow * New(int origX, int origY, int xOff, int yOff, int tmpDir, int type_) { return ptr::New(this, origX, origY, xOff, yOff, tmpDir, type_); }
    inline Arrow * _new2() { return ptr::_new2(); }
    inline virtual void Render() { ptr::Render(this); }
    inline static void RenderAll() { ptr::RenderAll(); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static Arrow * (*New)(Arrow * self, int origX, int origY, int xOff, int yOff, int tmpDir, int type_);
        static Arrow * (*_new2)();
        static void (*Render)(Arrow * self);
        static void (*RenderAll)();
        static void (*mark)(Arrow * self);
        static void (*CSTR_Arrow)(Arrow * self);
    };
};

#ifdef _WIN32
List35 * * Arrow::arrowList = (List35* *) 0x8355cc;

Arrow * (*Arrow::ptr::New)(Arrow * self, int origX, int origY, int xOff, int yOff, int tmpDir, int type_) = (Arrow * (*)(Arrow * self, int origX, int origY, int xOff, int yOff, int tmpDir, int type_)) 0x6062f0;
Arrow * (*Arrow::ptr::_new2)() = (Arrow * (*)()) 0x0;
void (*Arrow::ptr::Render)(Arrow * self) = (void (*)(Arrow * self)) 0x606580;
void (*Arrow::ptr::RenderAll)() = (void (*)()) 0x606730;
void (*Arrow::ptr::mark)(Arrow * self) = (void (*)(Arrow * self)) 0x606780;
void (*Arrow::ptr::CSTR_Arrow)(Arrow * self) = (void (*)(Arrow * self)) 0x606260;
#endif

#ifdef __linux__
List35 * * Arrow::arrowList = (List35* *) 0x856a3d0;

Arrow * (*Arrow::ptr::New)(Arrow * self, int origX, int origY, int xOff, int yOff, int tmpDir, int type_) = (Arrow * (*)(Arrow * self, int origX, int origY, int xOff, int yOff, int tmpDir, int type_)) 0x81a9c70;
Arrow * (*Arrow::ptr::_new2)() = (Arrow * (*)()) 0x81a9f60;
void (*Arrow::ptr::Render)(Arrow * self) = (void (*)(Arrow * self)) 0x830a870;
void (*Arrow::ptr::RenderAll)() = (void (*)()) 0x81a9f70;
void (*Arrow::ptr::mark)(Arrow * self) = (void (*)(Arrow * self)) 0x80a7db0;
void (*Arrow::ptr::CSTR_Arrow)(Arrow * self) = (void (*)(Arrow * self)) 0x81a9c30;
#endif
#endif
