// Generated automatically. Do not edit!
#ifndef _GuiBorder_
#define _GuiBorder_
class Sprite;
#include "Object.hpp"

class GuiBorder : public Object  {
public:
    int w;
    int h;
    int headerGapWidth;
    int yOff;
    Sprite * corner1;
    Sprite * corner2;
    Sprite * corner3;
    Sprite * corner4;
    Sprite * horizTop1;
    Sprite * horizTop2;
    Sprite * horizBottom;
    Sprite * vertLeft;
    Sprite * vertRight;
    Sprite * overlayBlack;
    int xOff;
    int tempX;
    int tempY;
    int headerGapStart;
    int headerGapEnd;

    // Wrappers
    GuiBorder(int wVal, int hVal, int hGapW, int yO) {
        ptr::CSTR_GuiBorder(this);
        ptr::New(this, wVal, hVal, hGapW, yO);
    }

    inline GuiBorder * New(int wVal, int hVal, int hGapW, int yO) { return ptr::New(this, wVal, hVal, hGapW, yO); }
    inline GuiBorder * _new2() { return ptr::_new2(); }
    inline virtual void Render() { ptr::Render(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static GuiBorder * (*New)(GuiBorder * self, int wVal, int hVal, int hGapW, int yO);
        static GuiBorder * (*_new2)();
        static void (*Render)(GuiBorder * self);
        static void (*mark)(GuiBorder * self);
        static void (*CSTR_GuiBorder)(GuiBorder * self);
    };
};

#ifdef _WIN32

GuiBorder * (*GuiBorder::ptr::New)(GuiBorder * self, int wVal, int hVal, int hGapW, int yO) = (GuiBorder * (*)(GuiBorder * self, int wVal, int hVal, int hGapW, int yO)) 0x680d60;
GuiBorder * (*GuiBorder::ptr::_new2)() = (GuiBorder * (*)()) 0x0;
void (*GuiBorder::ptr::Render)(GuiBorder * self) = (void (*)(GuiBorder * self)) 0x681930;
void (*GuiBorder::ptr::mark)(GuiBorder * self) = (void (*)(GuiBorder * self)) 0x681d20;
void (*GuiBorder::ptr::CSTR_GuiBorder)(GuiBorder * self) = (void (*)(GuiBorder * self)) 0x680c70;
#endif

#ifdef __linux__

GuiBorder * (*GuiBorder::ptr::New)(GuiBorder * self, int wVal, int hVal, int hGapW, int yO) = (GuiBorder * (*)(GuiBorder * self, int wVal, int hVal, int hGapW, int yO)) 0x81df390;
GuiBorder * (*GuiBorder::ptr::_new2)() = (GuiBorder * (*)()) 0x81dff10;
void (*GuiBorder::ptr::Render)(GuiBorder * self) = (void (*)(GuiBorder * self)) 0x8078460;
void (*GuiBorder::ptr::mark)(GuiBorder * self) = (void (*)(GuiBorder * self)) 0x80a4650;
void (*GuiBorder::ptr::CSTR_GuiBorder)(GuiBorder * self) = (void (*)(GuiBorder * self)) 0x81df300;
#endif
#endif
