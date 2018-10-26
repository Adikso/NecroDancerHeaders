// Generated automatically. Do not edit!
#ifndef _GraphicsContext_
#define _GraphicsContext_
template<class T> class Array;
class Image;
#include "Object.hpp"

class GraphicsContext : public Object  {
public:
    Image * defaultFont;
    Image * font;
    int firstChar;
    int matrixSp;
    float ix;
    float iy;
    float jx;
    float jy;
    float tx;
    float ty;
    int tformed;
    int matDirty;
    float color_r;
    float color_g;
    float color_b;
    float alpha;
    int blend;
    float scissor_x;
    float scissor_y;
    float scissor_width;
    float scissor_height;
    Array<float> * matrixStack;

    // Wrappers
    GraphicsContext() {
        ptr::CSTR_GraphicsContext(this);
    }

    inline GraphicsContext * _New() { return ptr::_New(); }
    inline virtual int Validate() { return ptr::Validate(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static GraphicsContext * (*_New)();
        static int (*Validate)(GraphicsContext * self);
        static void (*mark)(GraphicsContext * self);
        static void (*CSTR_GraphicsContext)(GraphicsContext * self);
    };
};

#ifdef _WIN32

GraphicsContext * (*GraphicsContext::ptr::_New)() = (GraphicsContext * (*)()) 0x0;
int (*GraphicsContext::ptr::Validate)(GraphicsContext * self) = (int (*)(GraphicsContext * self)) 0x41ede0;
void (*GraphicsContext::ptr::mark)(GraphicsContext * self) = (void (*)(GraphicsContext * self)) 0x41ee50;
void (*GraphicsContext::ptr::CSTR_GraphicsContext)(GraphicsContext * self) = (void (*)(GraphicsContext * self)) 0x41ec80;
#endif

#ifdef __linux__

GraphicsContext * (*GraphicsContext::ptr::_New)() = (GraphicsContext * (*)()) 0x80fe540;
int (*GraphicsContext::ptr::Validate)(GraphicsContext * self) = (int (*)(GraphicsContext * self)) 0x807de10;
void (*GraphicsContext::ptr::mark)(GraphicsContext * self) = (void (*)(GraphicsContext * self)) 0x80947c0;
void (*GraphicsContext::ptr::CSTR_GraphicsContext)(GraphicsContext * self) = (void (*)(GraphicsContext * self)) 0x80fe350;
#endif
#endif
