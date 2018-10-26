// Generated automatically. Do not edit!
#ifndef _gxtkGraphics_
#define _gxtkGraphics_
template<class T> class Array;
class IDirect3DDevice9;
class IDirect3DVertexBuffer9;
class String;
#include <gxtkSurface>
#include "Object.hpp"

class gxtkGraphics : public Object  {
public:
    IDirect3DDevice9 * dev;
    IDirect3DVertexBuffer9 * pVBuffer;
    int width;
    int height;
    int colour;
    float alpha;
    int blend;
    int renderSkip;
    int lastVSync;
    bool lastFullscreen;
    bool tformed;
    float ix;
    float iy;
    float jx;
    float jy;
    float tx;
    float ty;

    // Wrappers
    gxtkGraphics() {
        ptr::CSTR_gxtkGraphics(this);
    }

    inline void _initPipeline() { ptr::_initPipeline(this); }
    inline void _ResetDevice() { ptr::_ResetDevice(this); }
    inline virtual int Width() { return ptr::_Width(); }
    inline virtual int Height() { return ptr::_Height(); }
    inline virtual int BeginRender() { return ptr::BeginRender(this); }
    inline virtual void EndRender() { ptr::EndRender(this); }
    inline virtual void DiscardGraphics() { ptr::_DiscardGraphics(this); }
    inline virtual gxtkSurface * LoadSurface(String * path) { return ptr::LoadSurface(this, path); }
    inline virtual gxtkSurface * LoadSurfaceUNSAFE(gxtkSurface * surface, String * path) { return ptr::LoadSurfaceUNSAFE(this, surface, path); }
    inline virtual gxtkSurface * CreateSurface(int width, int height) { return ptr::CreateSurface(this, width, height); }
    inline virtual int Cls(float r, float g, float b) { return ptr::Cls(this, r, g, b); }
    inline virtual int SetAlpha(float _alpha) { return ptr::SetAlpha(this, _alpha); }
    inline virtual int SetColor(float r, float g, float b) { return ptr::SetColor(this, r, g, b); }
    inline virtual int SetBlend(int blend) { return ptr::SetBlend(this, blend); }
    inline virtual int SetScissor(int x, int y, int w, int h) { return ptr::SetScissor(this, x, y, w, h); }
    inline virtual int SetMatrix(float ix, float iy, float jx, float jy, float tx, float ty) { return ptr::SetMatrix(this, ix, iy, jx, jy, tx, ty); }
    inline virtual int DrawPoint(float x, float y) { return ptr::DrawPoint(this, x, y); }
    inline virtual int DrawRect(float arg1, float arg2, float arg3, float arg4) { return ptr::_DrawRect(this, arg1, arg2, arg3, arg4); }
    inline virtual int DrawLine(float arg1, float arg2, float arg3, float arg4) { return ptr::_DrawLine(this, arg1, arg2, arg3, arg4); }
    inline virtual int DrawOval(float arg1, float arg2, float arg3, float arg4) { return ptr::_DrawOval(this, arg1, arg2, arg3, arg4); }
    inline virtual int DrawPoly(Array<float> * arg1) { return ptr::_DrawPoly(this, arg1); }
    inline virtual int DrawSurface(gxtkSurface * surface, float x, float y) { return ptr::DrawSurface(this, surface, x, y); }
    inline virtual int DrawSurface2(gxtkSurface * surface, float x, float y, int srcx, int srcy, int srcw, int srch) { return ptr::DrawSurface2(this, surface, x, y, srcx, srcy, srcw, srch); }
    inline virtual int ReadPixels(Array<int> * pixels, int x, int y, int width, int height, int offset, int pitch) { return ptr::ReadPixels(this, pixels, x, y, width, height, offset, pitch); }
    inline virtual int WritePixels2(gxtkSurface * surface, Array<int> * pixels, int x, int y, int width, int height, int offset, int pitch) { return ptr::WritePixels2(this, surface, pixels, x, y, width, height, offset, pitch); }

    class ptr {
    public:
        static void (*_initPipeline)(gxtkGraphics * self);
        static void (*_ResetDevice)(gxtkGraphics * self);
        static int (*_Width)();
        static int (*_Height)();
        static int (*BeginRender)(gxtkGraphics * self);
        static void (*EndRender)(gxtkGraphics * self);
        static void (*_DiscardGraphics)(gxtkGraphics * self);
        static gxtkSurface * (*LoadSurface)(gxtkGraphics * self, String * path);
        static gxtkSurface * (*LoadSurfaceUNSAFE)(gxtkGraphics * self, gxtkSurface * surface, String * path);
        static gxtkSurface * (*CreateSurface)(gxtkGraphics * self, int width, int height);
        static int (*Cls)(gxtkGraphics * self, float r, float g, float b);
        static int (*SetAlpha)(gxtkGraphics * self, float _alpha);
        static int (*SetColor)(gxtkGraphics * self, float r, float g, float b);
        static int (*SetBlend)(gxtkGraphics * self, int blend);
        static int (*SetScissor)(gxtkGraphics * self, int x, int y, int w, int h);
        static int (*SetMatrix)(gxtkGraphics * self, float ix, float iy, float jx, float jy, float tx, float ty);
        static int (*DrawPoint)(gxtkGraphics * self, float x, float y);
        static int (*_DrawRect)(gxtkGraphics * self, float arg1, float arg2, float arg3, float arg4);
        static int (*_DrawLine)(gxtkGraphics * self, float arg1, float arg2, float arg3, float arg4);
        static int (*_DrawOval)(gxtkGraphics * self, float arg1, float arg2, float arg3, float arg4);
        static int (*_DrawPoly)(gxtkGraphics * self, Array<float> * arg1);
        static int (*DrawSurface)(gxtkGraphics * self, gxtkSurface * surface, float x, float y);
        static int (*DrawSurface2)(gxtkGraphics * self, gxtkSurface * surface, float x, float y, int srcx, int srcy, int srcw, int srch);
        static int (*ReadPixels)(gxtkGraphics * self, Array<int> * pixels, int x, int y, int width, int height, int offset, int pitch);
        static int (*WritePixels2)(gxtkGraphics * self, gxtkSurface * surface, Array<int> * pixels, int x, int y, int width, int height, int offset, int pitch);
        static void (*CSTR_gxtkGraphics)(gxtkGraphics * self);
    };
};

#ifdef _WIN32

void (*gxtkGraphics::ptr::_initPipeline)(gxtkGraphics * self) = (void (*)(gxtkGraphics * self)) 0x406d30;
void (*gxtkGraphics::ptr::_ResetDevice)(gxtkGraphics * self) = (void (*)(gxtkGraphics * self)) 0x406ed0;
int (*gxtkGraphics::ptr::_Width)() = (int (*)()) 0x0;
int (*gxtkGraphics::ptr::_Height)() = (int (*)()) 0x0;
int (*gxtkGraphics::ptr::BeginRender)(gxtkGraphics * self) = (int (*)(gxtkGraphics * self)) 0x407280;
void (*gxtkGraphics::ptr::EndRender)(gxtkGraphics * self) = (void (*)(gxtkGraphics * self)) 0x407470;
void (*gxtkGraphics::ptr::_DiscardGraphics)(gxtkGraphics * self) = (void (*)(gxtkGraphics * self)) 0x4074a0;
gxtkSurface * (*gxtkGraphics::ptr::LoadSurface)(gxtkGraphics * self, String * path) = (gxtkSurface * (*)(gxtkGraphics * self, String * path)) 0x4074c0;
gxtkSurface * (*gxtkGraphics::ptr::LoadSurfaceUNSAFE)(gxtkGraphics * self, gxtkSurface * surface, String * path) = (gxtkSurface * (*)(gxtkGraphics * self, gxtkSurface * surface, String * path)) 0x407590;
gxtkSurface * (*gxtkGraphics::ptr::CreateSurface)(gxtkGraphics * self, int width, int height) = (gxtkSurface * (*)(gxtkGraphics * self, int width, int height)) 0x407930;
int (*gxtkGraphics::ptr::Cls)(gxtkGraphics * self, float r, float g, float b) = (int (*)(gxtkGraphics * self, float r, float g, float b)) 0x4079f0;
int (*gxtkGraphics::ptr::SetAlpha)(gxtkGraphics * self, float _alpha) = (int (*)(gxtkGraphics * self, float _alpha)) 0x407a20;
int (*gxtkGraphics::ptr::SetColor)(gxtkGraphics * self, float r, float g, float b) = (int (*)(gxtkGraphics * self, float r, float g, float b)) 0x407a40;
int (*gxtkGraphics::ptr::SetBlend)(gxtkGraphics * self, int blend) = (int (*)(gxtkGraphics * self, int blend)) 0x407a80;
int (*gxtkGraphics::ptr::SetScissor)(gxtkGraphics * self, int x, int y, int w, int h) = (int (*)(gxtkGraphics * self, int x, int y, int w, int h)) 0x406890;
int (*gxtkGraphics::ptr::SetMatrix)(gxtkGraphics * self, float ix, float iy, float jx, float jy, float tx, float ty) = (int (*)(gxtkGraphics * self, float ix, float iy, float jx, float jy, float tx, float ty)) 0x407a90;
int (*gxtkGraphics::ptr::DrawPoint)(gxtkGraphics * self, float x, float y) = (int (*)(gxtkGraphics * self, float x, float y)) 0x406870;
int (*gxtkGraphics::ptr::_DrawRect)(gxtkGraphics * self, float arg1, float arg2, float arg3, float arg4) = (int (*)(gxtkGraphics * self, float arg1, float arg2, float arg3, float arg4)) 0x0;
int (*gxtkGraphics::ptr::_DrawLine)(gxtkGraphics * self, float arg1, float arg2, float arg3, float arg4) = (int (*)(gxtkGraphics * self, float arg1, float arg2, float arg3, float arg4)) 0x0;
int (*gxtkGraphics::ptr::_DrawOval)(gxtkGraphics * self, float arg1, float arg2, float arg3, float arg4) = (int (*)(gxtkGraphics * self, float arg1, float arg2, float arg3, float arg4)) 0x0;
int (*gxtkGraphics::ptr::_DrawPoly)(gxtkGraphics * self, Array<float> * arg1) = (int (*)(gxtkGraphics * self, Array<float> * arg1)) 0x0;
int (*gxtkGraphics::ptr::DrawSurface)(gxtkGraphics * self, gxtkSurface * surface, float x, float y) = (int (*)(gxtkGraphics * self, gxtkSurface * surface, float x, float y)) 0x407b30;
int (*gxtkGraphics::ptr::DrawSurface2)(gxtkGraphics * self, gxtkSurface * surface, float x, float y, int srcx, int srcy, int srcw, int srch) = (int (*)(gxtkGraphics * self, gxtkSurface * surface, float x, float y, int srcx, int srcy, int srcw, int srch)) 0x407b80;
int (*gxtkGraphics::ptr::ReadPixels)(gxtkGraphics * self, Array<int> * pixels, int x, int y, int width, int height, int offset, int pitch) = (int (*)(gxtkGraphics * self, Array<int> * pixels, int x, int y, int width, int height, int offset, int pitch)) 0x407fa0;
int (*gxtkGraphics::ptr::WritePixels2)(gxtkGraphics * self, gxtkSurface * surface, Array<int> * pixels, int x, int y, int width, int height, int offset, int pitch) = (int (*)(gxtkGraphics * self, gxtkSurface * surface, Array<int> * pixels, int x, int y, int width, int height, int offset, int pitch)) 0x407fb0;
void (*gxtkGraphics::ptr::CSTR_gxtkGraphics)(gxtkGraphics * self) = (void (*)(gxtkGraphics * self)) 0x406b10;
#endif

#ifdef __linux__

void (*gxtkGraphics::ptr::_initPipeline)(gxtkGraphics * self) = (void (*)(gxtkGraphics * self)) 0x0;
void (*gxtkGraphics::ptr::_ResetDevice)(gxtkGraphics * self) = (void (*)(gxtkGraphics * self)) 0x0;
int (*gxtkGraphics::ptr::_Width)() = (int (*)()) 0x806cc10;
int (*gxtkGraphics::ptr::_Height)() = (int (*)()) 0x806cc20;
int (*gxtkGraphics::ptr::BeginRender)(gxtkGraphics * self) = (int (*)(gxtkGraphics * self)) 0x80e8810;
void (*gxtkGraphics::ptr::EndRender)(gxtkGraphics * self) = (void (*)(gxtkGraphics * self)) 0x80e8a70;
void (*gxtkGraphics::ptr::_DiscardGraphics)(gxtkGraphics * self) = (void (*)(gxtkGraphics * self)) 0x0;
gxtkSurface * (*gxtkGraphics::ptr::LoadSurface)(gxtkGraphics * self, String * path) = (gxtkSurface * (*)(gxtkGraphics * self, String * path)) 0x80c4fd0;
gxtkSurface * (*gxtkGraphics::ptr::LoadSurfaceUNSAFE)(gxtkGraphics * self, gxtkSurface * surface, String * path) = (gxtkSurface * (*)(gxtkGraphics * self, gxtkSurface * surface, String * path)) 0x80e28f0;
gxtkSurface * (*gxtkGraphics::ptr::CreateSurface)(gxtkGraphics * self, int width, int height) = (gxtkSurface * (*)(gxtkGraphics * self, int width, int height)) 0x80b3970;
int (*gxtkGraphics::ptr::Cls)(gxtkGraphics * self, float r, float g, float b) = (int (*)(gxtkGraphics * self, float r, float g, float b)) 0x807da60;
int (*gxtkGraphics::ptr::SetAlpha)(gxtkGraphics * self, float _alpha) = (int (*)(gxtkGraphics * self, float _alpha)) 0x806cc30;
int (*gxtkGraphics::ptr::SetColor)(gxtkGraphics * self, float r, float g, float b) = (int (*)(gxtkGraphics * self, float r, float g, float b)) 0x806ccc0;
int (*gxtkGraphics::ptr::SetBlend)(gxtkGraphics * self, int blend) = (int (*)(gxtkGraphics * self, int blend)) 0x8086010;
int (*gxtkGraphics::ptr::SetScissor)(gxtkGraphics * self, int x, int y, int w, int h) = (int (*)(gxtkGraphics * self, int x, int y, int w, int h)) 0x8085f60;
int (*gxtkGraphics::ptr::SetMatrix)(gxtkGraphics * self, float ix, float iy, float jx, float jy, float tx, float ty) = (int (*)(gxtkGraphics * self, float ix, float iy, float jx, float jy, float tx, float ty)) 0x806cd60;
int (*gxtkGraphics::ptr::DrawPoint)(gxtkGraphics * self, float x, float y) = (int (*)(gxtkGraphics * self, float x, float y)) 0x8086680;
int (*gxtkGraphics::ptr::_DrawRect)(gxtkGraphics * self, float arg1, float arg2, float arg3, float arg4) = (int (*)(gxtkGraphics * self, float arg1, float arg2, float arg3, float arg4)) 0x80864e0;
int (*gxtkGraphics::ptr::_DrawLine)(gxtkGraphics * self, float arg1, float arg2, float arg3, float arg4) = (int (*)(gxtkGraphics * self, float arg1, float arg2, float arg3, float arg4)) 0x8086750;
int (*gxtkGraphics::ptr::_DrawOval)(gxtkGraphics * self, float arg1, float arg2, float arg3, float arg4) = (int (*)(gxtkGraphics * self, float arg1, float arg2, float arg3, float arg4)) 0x8085c90;
int (*gxtkGraphics::ptr::_DrawPoly)(gxtkGraphics * self, Array<float> * arg1) = (int (*)(gxtkGraphics * self, Array<float> * arg1)) 0x8086880;
int (*gxtkGraphics::ptr::DrawSurface)(gxtkGraphics * self, gxtkSurface * surface, float x, float y) = (int (*)(gxtkGraphics * self, gxtkSurface * surface, float x, float y)) 0x80862c0;
int (*gxtkGraphics::ptr::DrawSurface2)(gxtkGraphics * self, gxtkSurface * surface, float x, float y, int srcx, int srcy, int srcw, int srch) = (int (*)(gxtkGraphics * self, gxtkSurface * surface, float x, float y, int srcx, int srcy, int srcw, int srch)) 0x8086070;
int (*gxtkGraphics::ptr::ReadPixels)(gxtkGraphics * self, Array<int> * pixels, int x, int y, int width, int height, int offset, int pitch) = (int (*)(gxtkGraphics * self, Array<int> * pixels, int x, int y, int width, int height, int offset, int pitch)) 0x8085ba0;
int (*gxtkGraphics::ptr::WritePixels2)(gxtkGraphics * self, gxtkSurface * surface, Array<int> * pixels, int x, int y, int width, int height, int offset, int pitch) = (int (*)(gxtkGraphics * self, gxtkSurface * surface, Array<int> * pixels, int x, int y, int width, int height, int offset, int pitch)) 0x80859e0;
void (*gxtkGraphics::ptr::CSTR_gxtkGraphics)(gxtkGraphics * self) = (void (*)(gxtkGraphics * self)) 0x80e87b0;
#endif
#endif
