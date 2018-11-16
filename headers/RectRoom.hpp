// Generated automatically. Do not edit!
#ifndef _RectRoom_
#define _RectRoom_
class Point;
class Rect;
class RoomData;
#include "RoomBase.hpp"

class RectRoom : public RoomBase  {
public:
    Rect * body;

    // Wrappers
    RectRoom() {
        ptr::CSTR_RectRoom(this);
    }

    inline RectRoom * _New(Rect * arg1) { return ptr::_New(this, arg1); }
    inline RectRoom * new2(RoomData * rd) { return ptr::new2(this, rd); }
    inline RectRoom * _new3() { return ptr::_new3(); }
    inline virtual RoomData * ToRoomData(int roomType) { return ptr::ToRoomData(this, roomType); }
    inline Rect * GetBounds() { return ptr::GetBounds(this); }
    inline bool IsWall2(int x, int y) { return ptr::IsWall2(this, x, y); }
    inline bool IsFloor2(int x, int y) { return ptr::IsFloor2(this, x, y); }
    inline bool IsOutside(int x, int y) { return ptr::IsOutside(this, x, y); }
    inline Point * GetRandPoint() { return ptr::GetRandPoint(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static RectRoom * (*_New)(RectRoom * self, Rect * arg1);
        static RectRoom * (*new2)(RectRoom * self, RoomData * rd);
        static RectRoom * (*_new3)();
        static RoomData * (*ToRoomData)(RectRoom * self, int roomType);
        static Rect * (*GetBounds)(RectRoom * self);
        static bool (*IsWall2)(RectRoom * self, int x, int y);
        static bool (*IsFloor2)(RectRoom * self, int x, int y);
        static bool (*IsOutside)(RectRoom * self, int x, int y);
        static Point * (*GetRandPoint)(RectRoom * self);
        static void (*_mark)();
        static void (*CSTR_RectRoom)(RectRoom * self);
    };
};

#ifdef _WIN32

inline RectRoom * (*RectRoom::ptr::_New)(RectRoom * self, Rect * arg1) = (RectRoom * (*)(RectRoom * self, Rect * arg1)) 0x0;
inline RectRoom * (*RectRoom::ptr::new2)(RectRoom * self, RoomData * rd) = (RectRoom * (*)(RectRoom * self, RoomData * rd)) 0x65f780;
inline RectRoom * (*RectRoom::ptr::_new3)() = (RectRoom * (*)()) 0x0;
inline RoomData * (*RectRoom::ptr::ToRoomData)(RectRoom * self, int roomType) = (RoomData * (*)(RectRoom * self, int roomType)) 0x65f880;
inline Rect * (*RectRoom::ptr::GetBounds)(RectRoom * self) = (Rect * (*)(RectRoom * self)) 0x65f950;
inline bool (*RectRoom::ptr::IsWall2)(RectRoom * self, int x, int y) = (bool (*)(RectRoom * self, int x, int y)) 0x65f960;
inline bool (*RectRoom::ptr::IsFloor2)(RectRoom * self, int x, int y) = (bool (*)(RectRoom * self, int x, int y)) 0x65f970;
inline bool (*RectRoom::ptr::IsOutside)(RectRoom * self, int x, int y) = (bool (*)(RectRoom * self, int x, int y)) 0x65f9b0;
inline Point * (*RectRoom::ptr::GetRandPoint)(RectRoom * self) = (Point * (*)(RectRoom * self)) 0x65f9d0;
inline void (*RectRoom::ptr::_mark)() = (void (*)()) 0x0;
inline void (*RectRoom::ptr::CSTR_RectRoom)(RectRoom * self) = (void (*)(RectRoom * self)) 0x65f700;
#endif

#ifdef __linux__

inline RectRoom * (*RectRoom::ptr::_New)(RectRoom * self, Rect * arg1) = (RectRoom * (*)(RectRoom * self, Rect * arg1)) 0x81d4df0;
inline RectRoom * (*RectRoom::ptr::new2)(RectRoom * self, RoomData * rd) = (RectRoom * (*)(RectRoom * self, RoomData * rd)) 0x81d4e50;
inline RectRoom * (*RectRoom::ptr::_new3)() = (RectRoom * (*)()) 0x81d4f00;
inline RoomData * (*RectRoom::ptr::ToRoomData)(RectRoom * self, int roomType) = (RoomData * (*)(RectRoom * self, int roomType)) 0x80b5a80;
inline Rect * (*RectRoom::ptr::GetBounds)(RectRoom * self) = (Rect * (*)(RectRoom * self)) 0x8076da0;
inline bool (*RectRoom::ptr::IsWall2)(RectRoom * self, int x, int y) = (bool (*)(RectRoom * self, int x, int y)) 0x8076dc0;
inline bool (*RectRoom::ptr::IsFloor2)(RectRoom * self, int x, int y) = (bool (*)(RectRoom * self, int x, int y)) 0x8076de0;
inline bool (*RectRoom::ptr::IsOutside)(RectRoom * self, int x, int y) = (bool (*)(RectRoom * self, int x, int y)) 0x8076e50;
inline Point * (*RectRoom::ptr::GetRandPoint)(RectRoom * self) = (Point * (*)(RectRoom * self)) 0x8100650;
inline void (*RectRoom::ptr::_mark)() = (void (*)()) 0x8087350;
inline void (*RectRoom::ptr::CSTR_RectRoom)(RectRoom * self) = (void (*)(RectRoom * self)) 0x81d4dd0;
#endif
#endif
