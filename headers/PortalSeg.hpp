// Generated automatically. Do not edit!
#ifndef _PortalSeg_
#define _PortalSeg_
class Point;
class Rect;
#include "Object.hpp"

class PortalSeg : public Object  {
public:
    Point * origin;
    int faceDir;
    int normalDir;
    int length;

    // Wrappers
    inline PortalSeg * New(int x, int y, int faceDir_, int normalDir_) { return ptr::New(this, x, y, faceDir_, normalDir_); }
    inline PortalSeg * _new2() { return ptr::_new2(); }
    inline virtual Point * GetFaceVector() { return ptr::GetFaceVector(this); }
    inline virtual Rect * GetBounds() { return ptr::GetBounds(this); }
    inline virtual Point * GetTerminus() { return ptr::GetTerminus(this); }
    inline virtual PortalSeg * Intersect(PortalSeg * other) { return ptr::Intersect(this, other); }
    inline virtual Point * GetOrigin() { return ptr::_GetOrigin(); }
    inline virtual Point * GetNormal() { return ptr::GetNormal(this); }
    inline virtual int GetLength() { return ptr::_GetLength(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static PortalSeg * (*New)(PortalSeg * self, int x, int y, int faceDir_, int normalDir_);
        static PortalSeg * (*_new2)();
        static Point * (*GetFaceVector)(PortalSeg * self);
        static Rect * (*GetBounds)(PortalSeg * self);
        static Point * (*GetTerminus)(PortalSeg * self);
        static PortalSeg * (*Intersect)(PortalSeg * self, PortalSeg * other);
        static Point * (*_GetOrigin)();
        static Point * (*GetNormal)(PortalSeg * self);
        static int (*_GetLength)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline PortalSeg * (*PortalSeg::ptr::New)(PortalSeg * self, int x, int y, int faceDir_, int normalDir_) = (PortalSeg * (*)(PortalSeg * self, int x, int y, int faceDir_, int normalDir_)) 0x65fb70;
inline PortalSeg * (*PortalSeg::ptr::_new2)() = (PortalSeg * (*)()) 0x0;
inline Point * (*PortalSeg::ptr::GetFaceVector)(PortalSeg * self) = (Point * (*)(PortalSeg * self)) 0x65fc60;
inline Rect * (*PortalSeg::ptr::GetBounds)(PortalSeg * self) = (Rect * (*)(PortalSeg * self)) 0x65fc70;
inline Point * (*PortalSeg::ptr::GetTerminus)(PortalSeg * self) = (Point * (*)(PortalSeg * self)) 0x65fce0;
inline PortalSeg * (*PortalSeg::ptr::Intersect)(PortalSeg * self, PortalSeg * other) = (PortalSeg * (*)(PortalSeg * self, PortalSeg * other)) 0x65fd10;
inline Point * (*PortalSeg::ptr::_GetOrigin)() = (Point * (*)()) 0x0;
inline Point * (*PortalSeg::ptr::GetNormal)(PortalSeg * self) = (Point * (*)(PortalSeg * self)) 0x65fec0;
inline int (*PortalSeg::ptr::_GetLength)() = (int (*)()) 0x0;
inline void (*PortalSeg::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline PortalSeg * (*PortalSeg::ptr::New)(PortalSeg * self, int x, int y, int faceDir_, int normalDir_) = (PortalSeg * (*)(PortalSeg * self, int x, int y, int faceDir_, int normalDir_)) 0x81d4f40;
inline PortalSeg * (*PortalSeg::ptr::_new2)() = (PortalSeg * (*)()) 0x81d4fd0;
inline Point * (*PortalSeg::ptr::GetFaceVector)(PortalSeg * self) = (Point * (*)(PortalSeg * self)) 0x8102940;
inline Rect * (*PortalSeg::ptr::GetBounds)(PortalSeg * self) = (Rect * (*)(PortalSeg * self)) 0x80c05d0;
inline Point * (*PortalSeg::ptr::GetTerminus)(PortalSeg * self) = (Point * (*)(PortalSeg * self)) 0x8076e80;
inline PortalSeg * (*PortalSeg::ptr::Intersect)(PortalSeg * self, PortalSeg * other) = (PortalSeg * (*)(PortalSeg * self, PortalSeg * other)) 0x82308a0;
inline Point * (*PortalSeg::ptr::_GetOrigin)() = (Point * (*)()) 0x8076ec0;
inline Point * (*PortalSeg::ptr::GetNormal)(PortalSeg * self) = (Point * (*)(PortalSeg * self)) 0x8102930;
inline int (*PortalSeg::ptr::_GetLength)() = (int (*)()) 0x8076ed0;
inline void (*PortalSeg::ptr::_mark)() = (void (*)()) 0x809a9c0;
#endif
#endif
