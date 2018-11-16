// Generated automatically. Do not edit!
#ifndef _RoomWithDoor_
#define _RoomWithDoor_
class Rect;
#include "RectRoom.hpp"

class RoomWithDoor : public RectRoom  {
public:
    Rect * door;

    // Wrappers
    inline RoomWithDoor * New(Rect * body_, Rect * door_) { return ptr::New(this, body_, door_); }
    inline RoomWithDoor * _new2() { return ptr::_new2(); }
    inline bool IsWall2(int x, int y) { return ptr::IsWall2(this, x, y); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static RoomWithDoor * (*New)(RoomWithDoor * self, Rect * body_, Rect * door_);
        static RoomWithDoor * (*_new2)();
        static bool (*IsWall2)(RoomWithDoor * self, int x, int y);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline RoomWithDoor * (*RoomWithDoor::ptr::New)(RoomWithDoor * self, Rect * body_, Rect * door_) = (RoomWithDoor * (*)(RoomWithDoor * self, Rect * body_, Rect * door_)) 0x6600a0;
inline RoomWithDoor * (*RoomWithDoor::ptr::_new2)() = (RoomWithDoor * (*)()) 0x0;
inline bool (*RoomWithDoor::ptr::IsWall2)(RoomWithDoor * self, int x, int y) = (bool (*)(RoomWithDoor * self, int x, int y)) 0x660170;
inline void (*RoomWithDoor::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline RoomWithDoor * (*RoomWithDoor::ptr::New)(RoomWithDoor * self, Rect * body_, Rect * door_) = (RoomWithDoor * (*)(RoomWithDoor * self, Rect * body_, Rect * door_)) 0x8230a70;
inline RoomWithDoor * (*RoomWithDoor::ptr::_new2)() = (RoomWithDoor * (*)()) 0x81d5470;
inline bool (*RoomWithDoor::ptr::IsWall2)(RoomWithDoor * self, int x, int y) = (bool (*)(RoomWithDoor * self, int x, int y)) 0x8077160;
inline void (*RoomWithDoor::ptr::_mark)() = (void (*)()) 0x80873b0;
#endif
#endif
