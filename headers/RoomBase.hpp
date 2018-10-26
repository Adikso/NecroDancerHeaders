// Generated automatically. Do not edit!
#ifndef _RoomBase_
#define _RoomBase_
class IntPointStack;
class Point;
class Rect;
class StackEx3;
#include "Object.hpp"

class RoomBase : public Object  {
public:

    // Wrappers
    inline RoomBase * _New() { return ptr::_New(); }
    inline virtual bool IsWall2(int arg1, int arg2) { return ptr::_IsWall2(this, arg1, arg2); }
    inline virtual bool IsOutside(int arg1, int arg2) { return ptr::_IsOutside(this, arg1, arg2); }
    inline virtual Rect * GetBounds() { return ptr::_GetBounds(); }
    inline virtual bool IsFloor2(int arg1, int arg2) { return ptr::_IsFloor2(this, arg1, arg2); }
    inline virtual StackEx3 * GetPortalSegs() { return ptr::GetPortalSegs(this); }
    inline virtual IntPointStack * GetFloor() { return ptr::GetFloor(this); }
    inline virtual Point * GetRandPoint() { return ptr::GetRandPoint(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static RoomBase * (*_New)();
        static bool (*_IsWall2)(RoomBase * self, int arg1, int arg2);
        static bool (*_IsOutside)(RoomBase * self, int arg1, int arg2);
        static Rect * (*_GetBounds)();
        static bool (*_IsFloor2)(RoomBase * self, int arg1, int arg2);
        static StackEx3 * (*GetPortalSegs)(RoomBase * self);
        static IntPointStack * (*GetFloor)(RoomBase * self);
        static Point * (*GetRandPoint)(RoomBase * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

RoomBase * (*RoomBase::ptr::_New)() = (RoomBase * (*)()) 0x0;
bool (*RoomBase::ptr::_IsWall2)(RoomBase * self, int arg1, int arg2) = (bool (*)(RoomBase * self, int arg1, int arg2)) 0x0;
bool (*RoomBase::ptr::_IsOutside)(RoomBase * self, int arg1, int arg2) = (bool (*)(RoomBase * self, int arg1, int arg2)) 0x0;
Rect * (*RoomBase::ptr::_GetBounds)() = (Rect * (*)()) 0x0;
bool (*RoomBase::ptr::_IsFloor2)(RoomBase * self, int arg1, int arg2) = (bool (*)(RoomBase * self, int arg1, int arg2)) 0x0;
StackEx3 * (*RoomBase::ptr::GetPortalSegs)(RoomBase * self) = (StackEx3 * (*)(RoomBase * self)) 0x65e290;
IntPointStack * (*RoomBase::ptr::GetFloor)(RoomBase * self) = (IntPointStack * (*)(RoomBase * self)) 0x65e780;
Point * (*RoomBase::ptr::GetRandPoint)(RoomBase * self) = (Point * (*)(RoomBase * self)) 0x65e8d0;
void (*RoomBase::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

RoomBase * (*RoomBase::ptr::_New)() = (RoomBase * (*)()) 0x81d4780;
bool (*RoomBase::ptr::_IsWall2)(RoomBase * self, int arg1, int arg2) = (bool (*)(RoomBase * self, int arg1, int arg2)) 0x0;
bool (*RoomBase::ptr::_IsOutside)(RoomBase * self, int arg1, int arg2) = (bool (*)(RoomBase * self, int arg1, int arg2)) 0x0;
Rect * (*RoomBase::ptr::_GetBounds)() = (Rect * (*)()) 0x0;
bool (*RoomBase::ptr::_IsFloor2)(RoomBase * self, int arg1, int arg2) = (bool (*)(RoomBase * self, int arg1, int arg2)) 0x0;
StackEx3 * (*RoomBase::ptr::GetPortalSegs)(RoomBase * self) = (StackEx3 * (*)(RoomBase * self)) 0x80bf620;
IntPointStack * (*RoomBase::ptr::GetFloor)(RoomBase * self) = (IntPointStack * (*)(RoomBase * self)) 0x81ba970;
Point * (*RoomBase::ptr::GetRandPoint)(RoomBase * self) = (Point * (*)(RoomBase * self)) 0x8076a60;
void (*RoomBase::ptr::_mark)() = (void (*)()) 0x8076a90;
#endif
#endif
