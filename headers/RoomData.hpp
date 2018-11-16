// Generated automatically. Do not edit!
#ifndef _RoomData_
#define _RoomData_
class Point;
class Rect;
class String;
#include "Object.hpp"

class RoomData : public Object  {
public:
    int x;
    int y;
    int w;
    int h;
    int type;
    bool hasExit;

    // Wrappers
    RoomData() {
        ptr::CSTR_RoomData(this);
    }

    inline RoomData * _New(int arg1, int arg2, int arg3, int arg4, int arg5, bool arg6) { return ptr::_New(this, arg1, arg2, arg3, arg4, arg5, arg6); }
    inline RoomData * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }
    inline Rect * GetBounds() { return ptr::GetBounds(this); }
    inline Point * GetLocation() { return ptr::GetLocation(this); }
    inline Point * GetSize() { return ptr::GetSize(this); }
    inline String * ToString() { return ptr::ToString(this); }

    class ptr {
    public:
        static RoomData * (*_New)(RoomData * self, int arg1, int arg2, int arg3, int arg4, int arg5, bool arg6);
        static RoomData * (*_new2)();
        static void (*_mark)();
        static Rect * (*GetBounds)(RoomData * self);
        static void (*CSTR_RoomData)(RoomData * self);
        static Point * (*GetLocation)(RoomData * self);
        static Point * (*GetSize)(RoomData * self);
        static String * (*ToString)(RoomData * self);
    };
};

#ifdef _WIN32

inline RoomData * (*RoomData::ptr::_New)(RoomData * self, int arg1, int arg2, int arg3, int arg4, int arg5, bool arg6) = (RoomData * (*)(RoomData * self, int arg1, int arg2, int arg3, int arg4, int arg5, bool arg6)) 0x0;
inline RoomData * (*RoomData::ptr::_new2)() = (RoomData * (*)()) 0x0;
inline void (*RoomData::ptr::_mark)() = (void (*)()) 0x0;
inline Rect * (*RoomData::ptr::GetBounds)(RoomData * self) = (Rect * (*)(RoomData * self)) 0x6040e0;
inline void (*RoomData::ptr::CSTR_RoomData)(RoomData * self) = (void (*)(RoomData * self)) 0x638770;
inline Point * (*RoomData::ptr::GetLocation)(RoomData * self) = (Point * (*)(RoomData * self)) 0x638800;
inline Point * (*RoomData::ptr::GetSize)(RoomData * self) = (Point * (*)(RoomData * self)) 0x6388a0;
inline String * (*RoomData::ptr::ToString)(RoomData * self) = (String * (*)(RoomData * self)) 0x638940;
#endif

#ifdef __linux__

inline RoomData * (*RoomData::ptr::_New)(RoomData * self, int arg1, int arg2, int arg3, int arg4, int arg5, bool arg6) = (RoomData * (*)(RoomData * self, int arg1, int arg2, int arg3, int arg4, int arg5, bool arg6)) 0x81bf060;
inline RoomData * (*RoomData::ptr::_new2)() = (RoomData * (*)()) 0x81bf090;
inline void (*RoomData::ptr::_mark)() = (void (*)()) 0x8075ef0;
inline Rect * (*RoomData::ptr::GetBounds)(RoomData * self) = (Rect * (*)(RoomData * self)) 0x80b59c0;
inline void (*RoomData::ptr::CSTR_RoomData)(RoomData * self) = (void (*)(RoomData * self)) 0x81bf020;
inline Point * (*RoomData::ptr::GetLocation)(RoomData * self) = (Point * (*)(RoomData * self)) 0x80b4c00;
inline Point * (*RoomData::ptr::GetSize)(RoomData * self) = (Point * (*)(RoomData * self)) 0x80b4bc0;
inline String * (*RoomData::ptr::ToString)(RoomData * self) = (String * (*)(RoomData * self)) 0x80b5940;
#endif
#endif
