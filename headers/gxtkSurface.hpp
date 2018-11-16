// Generated automatically. Do not edit!
#ifndef _gxtkSurface_
#define _gxtkSurface_
class IDirect3DTexture9;
#include "Object.hpp"

class gxtkSurface : public Object  {
public:
    IDirect3DTexture9 * tex;
    int width;
    int height;
    int texWidth;
    int texHeight;

    // Wrappers
    inline void _setTexture(IDirect3DTexture9 * arg1, int arg2, int arg3, int arg4, int arg5) { ptr::_setTexture(this, arg1, arg2, arg3, arg4, arg5); }
    inline IDirect3DTexture9 * _getTexture() { return ptr::_getTexture(); }
    inline virtual int Discard() { return ptr::Discard(this); }
    inline virtual int Width() { return ptr::_Width(); }
    inline virtual int Height() { return ptr::_Height(); }
    inline virtual int TextureWidth() { return ptr::_TextureWidth(); }
    inline virtual int TextureHeight() { return ptr::_TextureHeight(); }
    inline virtual int Loaded() { return ptr::_Loaded(); }
    inline virtual bool OnUnsafeLoadComplete() { return ptr::_OnUnsafeLoadComplete(); }

    class ptr {
    public:
        static void (*_setTexture)(gxtkSurface * self, IDirect3DTexture9 * arg1, int arg2, int arg3, int arg4, int arg5);
        static IDirect3DTexture9 * (*_getTexture)();
        static int (*Discard)(gxtkSurface * self);
        static int (*_Width)();
        static int (*_Height)();
        static int (*_TextureWidth)();
        static int (*_TextureHeight)();
        static int (*_Loaded)();
        static bool (*_OnUnsafeLoadComplete)();
    };
};

#ifdef _WIN32

inline void (*gxtkSurface::ptr::_setTexture)(gxtkSurface * self, IDirect3DTexture9 * arg1, int arg2, int arg3, int arg4, int arg5) = (void (*)(gxtkSurface * self, IDirect3DTexture9 * arg1, int arg2, int arg3, int arg4, int arg5)) 0x0;
inline IDirect3DTexture9 * (*gxtkSurface::ptr::_getTexture)() = (IDirect3DTexture9 * (*)()) 0x0;
inline int (*gxtkSurface::ptr::Discard)(gxtkSurface * self) = (int (*)(gxtkSurface * self)) 0x408060;
inline int (*gxtkSurface::ptr::_Width)() = (int (*)()) 0x0;
inline int (*gxtkSurface::ptr::_Height)() = (int (*)()) 0x0;
inline int (*gxtkSurface::ptr::_TextureWidth)() = (int (*)()) 0x0;
inline int (*gxtkSurface::ptr::_TextureHeight)() = (int (*)()) 0x0;
inline int (*gxtkSurface::ptr::_Loaded)() = (int (*)()) 0x0;
inline bool (*gxtkSurface::ptr::_OnUnsafeLoadComplete)() = (bool (*)()) 0x0;
#endif

#ifdef __linux__

inline void (*gxtkSurface::ptr::_setTexture)(gxtkSurface * self, IDirect3DTexture9 * arg1, int arg2, int arg3, int arg4, int arg5) = (void (*)(gxtkSurface * self, IDirect3DTexture9 * arg1, int arg2, int arg3, int arg4, int arg5)) 0x0;
inline IDirect3DTexture9 * (*gxtkSurface::ptr::_getTexture)() = (IDirect3DTexture9 * (*)()) 0x0;
inline int (*gxtkSurface::ptr::Discard)(gxtkSurface * self) = (int (*)(gxtkSurface * self)) 0x807da10;
inline int (*gxtkSurface::ptr::_Width)() = (int (*)()) 0x806ced0;
inline int (*gxtkSurface::ptr::_Height)() = (int (*)()) 0x806cee0;
inline int (*gxtkSurface::ptr::_TextureWidth)() = (int (*)()) 0x0;
inline int (*gxtkSurface::ptr::_TextureHeight)() = (int (*)()) 0x0;
inline int (*gxtkSurface::ptr::_Loaded)() = (int (*)()) 0x806cef0;
inline bool (*gxtkSurface::ptr::_OnUnsafeLoadComplete)() = (bool (*)()) 0x807d6a0;
#endif
#endif
