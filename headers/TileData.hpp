// Generated automatically. Do not edit!
#ifndef _TileData_
#define _TileData_
#include "Object.hpp"

class TileData : public Object  {
public:
    int x;
    int y;
    int type;

    // Wrappers
    TileData() {
        ptr::CSTR_TileData(this);
    }

    inline TileData * _New(int arg1, int arg2, int arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline TileData * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static TileData * (*_New)(TileData * self, int arg1, int arg2, int arg3);
        static TileData * (*_new2)();
        static void (*_mark)();
        static void (*CSTR_TileData)(TileData * self);
    };
};

#ifdef _WIN32

inline TileData * (*TileData::ptr::_New)(TileData * self, int arg1, int arg2, int arg3) = (TileData * (*)(TileData * self, int arg1, int arg2, int arg3)) 0x0;
inline TileData * (*TileData::ptr::_new2)() = (TileData * (*)()) 0x0;
inline void (*TileData::ptr::_mark)() = (void (*)()) 0x0;
inline void (*TileData::ptr::CSTR_TileData)(TileData * self) = (void (*)(TileData * self)) 0x608330;
#endif

#ifdef __linux__

inline TileData * (*TileData::ptr::_New)(TileData * self, int arg1, int arg2, int arg3) = (TileData * (*)(TileData * self, int arg1, int arg2, int arg3)) 0x81adee0;
inline TileData * (*TileData::ptr::_new2)() = (TileData * (*)()) 0x81adf00;
inline void (*TileData::ptr::_mark)() = (void (*)()) 0x8074340;
inline void (*TileData::ptr::CSTR_TileData)(TileData * self) = (void (*)(TileData * self)) 0x81adec0;
#endif
#endif
