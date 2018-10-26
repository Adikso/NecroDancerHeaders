// Generated automatically. Do not edit!
#ifndef _Image_
#define _Image_
template<class T> class Array;
class Frame;
#include <gxtkSurface>
#include "Object.hpp"

class Image : public Object  {
public:
    gxtkSurface * surface;
    int width;
    int height;
    Array<Frame *> * frames;
    int flags;
    float tx;
    float ty;
    Image * source;
    static int * DefaultFlags;

    // Wrappers
    Image() {
        ptr::CSTR_Image(this);
    }

    inline Image * _New() { return ptr::_New(); }
    inline virtual int SetHandle(float tx, float ty) { return ptr::SetHandle(this, tx, ty); }
    inline virtual int ApplyFlags(int iflags) { return ptr::ApplyFlags(this, iflags); }
    inline virtual Image * Init(gxtkSurface * surf, int nframes, int iflags) { return ptr::Init(this, surf, nframes, iflags); }
    inline virtual Image * Grab(int x, int y, int iwidth, int iheight, int nframes, int iflags, Image * source) { return ptr::Grab(this, x, y, iwidth, iheight, nframes, iflags, source); }
    inline virtual Image * GrabImage(int x, int y, int width, int height, int frames, int flags) { return ptr::GrabImage(this, x, y, width, height, frames, flags); }
    inline virtual int Width() { return ptr::Width(this); }
    inline virtual int Height() { return ptr::_Height(); }
    inline virtual int Discard() { return ptr::Discard(this); }
    inline virtual int WritePixels(Array<int> * pixels, int x, int y, int width, int height, int offset, int pitch) { return ptr::WritePixels(this, pixels, x, y, width, height, offset, pitch); }
    inline virtual int Frames() { return ptr::Frames(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static Image * (*_New)();
        static int (*SetHandle)(Image * self, float tx, float ty);
        static int (*ApplyFlags)(Image * self, int iflags);
        static Image * (*Init)(Image * self, gxtkSurface * surf, int nframes, int iflags);
        static Image * (*Grab)(Image * self, int x, int y, int iwidth, int iheight, int nframes, int iflags, Image * source);
        static Image * (*GrabImage)(Image * self, int x, int y, int width, int height, int frames, int flags);
        static int (*Width)(Image * self);
        static int (*_Height)();
        static int (*Discard)(Image * self);
        static int (*WritePixels)(Image * self, Array<int> * pixels, int x, int y, int width, int height, int offset, int pitch);
        static int (*Frames)(Image * self);
        static void (*mark)(Image * self);
        static void (*CSTR_Image)(Image * self);
    };
};

#ifdef _WIN32
int * Image::DefaultFlags = (int*) 0x835c30;

Image * (*Image::ptr::_New)() = (Image * (*)()) 0x0;
int (*Image::ptr::SetHandle)(Image * self, float tx, float ty) = (int (*)(Image * self, float tx, float ty)) 0x41e520;
int (*Image::ptr::ApplyFlags)(Image * self, int iflags) = (int (*)(Image * self, int iflags)) 0x41e550;
Image * (*Image::ptr::Init)(Image * self, gxtkSurface * surf, int nframes, int iflags) = (Image * (*)(Image * self, gxtkSurface * surf, int nframes, int iflags)) 0x41e630;
Image * (*Image::ptr::Grab)(Image * self, int x, int y, int iwidth, int iheight, int nframes, int iflags, Image * source) = (Image * (*)(Image * self, int x, int y, int iwidth, int iheight, int nframes, int iflags, Image * source)) 0x41e7e0;
Image * (*Image::ptr::GrabImage)(Image * self, int x, int y, int width, int height, int frames, int flags) = (Image * (*)(Image * self, int x, int y, int width, int height, int frames, int flags)) 0x41ea80;
int (*Image::ptr::Width)(Image * self) = (int (*)(Image * self)) 0x408080;
int (*Image::ptr::_Height)() = (int (*)()) 0x0;
int (*Image::ptr::Discard)(Image * self) = (int (*)(Image * self)) 0x41eb20;
int (*Image::ptr::WritePixels)(Image * self, Array<int> * pixels, int x, int y, int width, int height, int offset, int pitch) = (int (*)(Image * self, Array<int> * pixels, int x, int y, int width, int height, int offset, int pitch)) 0x41eb40;
int (*Image::ptr::Frames)(Image * self) = (int (*)(Image * self)) 0x41eb80;
void (*Image::ptr::mark)(Image * self) = (void (*)(Image * self)) 0x41eb90;
void (*Image::ptr::CSTR_Image)(Image * self) = (void (*)(Image * self)) 0x41e480;
#endif

#ifdef __linux__
int * Image::DefaultFlags = (int*) 0x856abb0;

Image * (*Image::ptr::_New)() = (Image * (*)()) 0x80fe340;
int (*Image::ptr::SetHandle)(Image * self, float tx, float ty) = (int (*)(Image * self, float tx, float ty)) 0x806d3a0;
int (*Image::ptr::ApplyFlags)(Image * self, int iflags) = (int (*)(Image * self, int iflags)) 0x806d3c0;
Image * (*Image::ptr::Init)(Image * self, gxtkSurface * surf, int nframes, int iflags) = (Image * (*)(Image * self, gxtkSurface * surf, int nframes, int iflags)) 0x80bfd50;
Image * (*Image::ptr::Grab)(Image * self, int x, int y, int iwidth, int iheight, int nframes, int iflags, Image * source) = (Image * (*)(Image * self, int x, int y, int iwidth, int iheight, int nframes, int iflags, Image * source)) 0x81f7320;
Image * (*Image::ptr::GrabImage)(Image * self, int x, int y, int width, int height, int frames, int flags) = (Image * (*)(Image * self, int x, int y, int width, int height, int frames, int flags)) 0x80fe090;
int (*Image::ptr::Width)(Image * self) = (int (*)(Image * self)) 0x806d4b0;
int (*Image::ptr::_Height)() = (int (*)()) 0x806d4c0;
int (*Image::ptr::Discard)(Image * self) = (int (*)(Image * self)) 0x807ddd0;
int (*Image::ptr::WritePixels)(Image * self, Array<int> * pixels, int x, int y, int width, int height, int offset, int pitch) = (int (*)(Image * self, Array<int> * pixels, int x, int y, int width, int height, int offset, int pitch)) 0x806d4d0;
int (*Image::ptr::Frames)(Image * self) = (int (*)(Image * self)) 0x806d540;
void (*Image::ptr::mark)(Image * self) = (void (*)(Image * self)) 0x8092cb0;
void (*Image::ptr::CSTR_Image)(Image * self) = (void (*)(Image * self)) 0x80fdf50;
#endif
#endif
