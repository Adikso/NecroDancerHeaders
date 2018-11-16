// Generated automatically. Do not edit!
#ifndef _BlobRoom_
#define _BlobRoom_
class IntPointSet;
class Point;
class Rect;
class Stack6;
#include "RoomBase.hpp"

class BlobRoom : public RoomBase  {
public:
    IntPointSet * footprint;

    // Wrappers
    BlobRoom() {
        ptr::CSTR_BlobRoom(this);
    }

    inline BlobRoom * _New() { return ptr::_New(); }
    inline virtual void FillRect(int x, int y, int w, int h) { ptr::FillRect(this, x, y, w, h); }
    inline virtual void ReflectHorizontallyAbout(int x) { ptr::ReflectHorizontallyAbout(this, x); }
    inline virtual void RotateCWAbout(Point * origin) { ptr::RotateCWAbout(this, origin); }
    inline virtual void TranslateBy(Point * shift) { ptr::TranslateBy(this, shift); }
    inline virtual bool IsOutsidePoint(Point * p) { return ptr::IsOutsidePoint(this, p); }
    inline bool IsOutside(int x, int y) { return ptr::IsOutside(this, x, y); }
    inline bool IsWall2(int x, int y) { return ptr::IsWall2(this, x, y); }
    inline virtual bool IsWallPoint(Point * p) { return ptr::IsWallPoint(this, p); }
    inline virtual Stack6 * MakeTiles() { return ptr::MakeTiles(this); }
    inline Rect * GetBounds() { return ptr::GetBounds(this); }
    inline virtual bool IsFloorPoint(Point * p) { return ptr::IsFloorPoint(this, p); }
    inline bool IsFloor2(int x, int y) { return ptr::IsFloor2(this, x, y); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static BlobRoom * (*_New)();
        static void (*FillRect)(BlobRoom * self, int x, int y, int w, int h);
        static void (*ReflectHorizontallyAbout)(BlobRoom * self, int x);
        static void (*RotateCWAbout)(BlobRoom * self, Point * origin);
        static void (*TranslateBy)(BlobRoom * self, Point * shift);
        static bool (*IsOutsidePoint)(BlobRoom * self, Point * p);
        static bool (*IsOutside)(BlobRoom * self, int x, int y);
        static bool (*IsWall2)(BlobRoom * self, int x, int y);
        static bool (*IsWallPoint)(BlobRoom * self, Point * p);
        static Stack6 * (*MakeTiles)(BlobRoom * self);
        static Rect * (*GetBounds)(BlobRoom * self);
        static bool (*IsFloorPoint)(BlobRoom * self, Point * p);
        static bool (*IsFloor2)(BlobRoom * self, int x, int y);
        static void (*_mark)();
        static void (*CSTR_BlobRoom)(BlobRoom * self);
    };
};

#ifdef _WIN32

inline BlobRoom * (*BlobRoom::ptr::_New)() = (BlobRoom * (*)()) 0x0;
inline void (*BlobRoom::ptr::FillRect)(BlobRoom * self, int x, int y, int w, int h) = (void (*)(BlobRoom * self, int x, int y, int w, int h)) 0x65e9b0;
inline void (*BlobRoom::ptr::ReflectHorizontallyAbout)(BlobRoom * self, int x) = (void (*)(BlobRoom * self, int x)) 0x65eab0;
inline void (*BlobRoom::ptr::RotateCWAbout)(BlobRoom * self, Point * origin) = (void (*)(BlobRoom * self, Point * origin)) 0x65ec40;
inline void (*BlobRoom::ptr::TranslateBy)(BlobRoom * self, Point * shift) = (void (*)(BlobRoom * self, Point * shift)) 0x65ed70;
inline bool (*BlobRoom::ptr::IsOutsidePoint)(BlobRoom * self, Point * p) = (bool (*)(BlobRoom * self, Point * p)) 0x65ef00;
inline bool (*BlobRoom::ptr::IsOutside)(BlobRoom * self, int x, int y) = (bool (*)(BlobRoom * self, int x, int y)) 0x65ef20;
inline bool (*BlobRoom::ptr::IsWall2)(BlobRoom * self, int x, int y) = (bool (*)(BlobRoom * self, int x, int y)) 0x65efc0;
inline bool (*BlobRoom::ptr::IsWallPoint)(BlobRoom * self, Point * p) = (bool (*)(BlobRoom * self, Point * p)) 0x65f0b0;
inline Stack6 * (*BlobRoom::ptr::MakeTiles)(BlobRoom * self) = (Stack6 * (*)(BlobRoom * self)) 0x65f0d0;
inline Rect * (*BlobRoom::ptr::GetBounds)(BlobRoom * self) = (Rect * (*)(BlobRoom * self)) 0x65f230;
inline bool (*BlobRoom::ptr::IsFloorPoint)(BlobRoom * self, Point * p) = (bool (*)(BlobRoom * self, Point * p)) 0x65f340;
inline bool (*BlobRoom::ptr::IsFloor2)(BlobRoom * self, int x, int y) = (bool (*)(BlobRoom * self, int x, int y)) 0x65f380;
inline void (*BlobRoom::ptr::_mark)() = (void (*)()) 0x0;
inline void (*BlobRoom::ptr::CSTR_BlobRoom)(BlobRoom * self) = (void (*)(BlobRoom * self)) 0x65e8e0;
#endif

#ifdef __linux__

inline BlobRoom * (*BlobRoom::ptr::_New)() = (BlobRoom * (*)()) 0x81d4830;
inline void (*BlobRoom::ptr::FillRect)(BlobRoom * self, int x, int y, int w, int h) = (void (*)(BlobRoom * self, int x, int y, int w, int h)) 0x80b41b0;
inline void (*BlobRoom::ptr::ReflectHorizontallyAbout)(BlobRoom * self, int x) = (void (*)(BlobRoom * self, int x)) 0x80c06e0;
inline void (*BlobRoom::ptr::RotateCWAbout)(BlobRoom * self, Point * origin) = (void (*)(BlobRoom * self, Point * origin)) 0x80c0960;
inline void (*BlobRoom::ptr::TranslateBy)(BlobRoom * self, Point * shift) = (void (*)(BlobRoom * self, Point * shift)) 0x80c0820;
inline bool (*BlobRoom::ptr::IsOutsidePoint)(BlobRoom * self, Point * p) = (bool (*)(BlobRoom * self, Point * p)) 0x8076aa0;
inline bool (*BlobRoom::ptr::IsOutside)(BlobRoom * self, int x, int y) = (bool (*)(BlobRoom * self, int x, int y)) 0x80b4150;
inline bool (*BlobRoom::ptr::IsWall2)(BlobRoom * self, int x, int y) = (bool (*)(BlobRoom * self, int x, int y)) 0x80b3ee0;
inline bool (*BlobRoom::ptr::IsWallPoint)(BlobRoom * self, Point * p) = (bool (*)(BlobRoom * self, Point * p)) 0x8076ad0;
inline Stack6 * (*BlobRoom::ptr::MakeTiles)(BlobRoom * self) = (Stack6 * (*)(BlobRoom * self)) 0x80bd9c0;
inline Rect * (*BlobRoom::ptr::GetBounds)(BlobRoom * self) = (Rect * (*)(BlobRoom * self)) 0x80b58a0;
inline bool (*BlobRoom::ptr::IsFloorPoint)(BlobRoom * self, Point * p) = (bool (*)(BlobRoom * self, Point * p)) 0x8076b00;
inline bool (*BlobRoom::ptr::IsFloor2)(BlobRoom * self, int x, int y) = (bool (*)(BlobRoom * self, int x, int y)) 0x80b3e80;
inline void (*BlobRoom::ptr::_mark)() = (void (*)()) 0x8076b60;
inline void (*BlobRoom::ptr::CSTR_BlobRoom)(BlobRoom * self) = (void (*)(BlobRoom * self)) 0x81d4790;
#endif
#endif
