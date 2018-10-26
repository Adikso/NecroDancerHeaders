// Generated automatically. Do not edit!
#ifndef _MinibossTileData_
#define _MinibossTileData_
#include "Object.hpp"

class MinibossTileData : public Object  {
public:
    int x;
    int y;
    int type;
    int wireMask;

    // Wrappers
    MinibossTileData() {
        ptr::CSTR_MinibossTileData(this);
    }

    inline MinibossTileData * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static MinibossTileData * (*_New)();
        static void (*_mark)();
        static void (*CSTR_MinibossTileData)(MinibossTileData * self);
    };
};

#ifdef _WIN32

MinibossTileData * (*MinibossTileData::ptr::_New)() = (MinibossTileData * (*)()) 0x0;
void (*MinibossTileData::ptr::_mark)() = (void (*)()) 0x0;
void (*MinibossTileData::ptr::CSTR_MinibossTileData)(MinibossTileData * self) = (void (*)(MinibossTileData * self)) 0x61ece0;
#endif

#ifdef __linux__

MinibossTileData * (*MinibossTileData::ptr::_New)() = (MinibossTileData * (*)()) 0x81b8000;
void (*MinibossTileData::ptr::_mark)() = (void (*)()) 0x8074ef0;
void (*MinibossTileData::ptr::CSTR_MinibossTileData)(MinibossTileData * self) = (void (*)(MinibossTileData * self)) 0x81b7fd0;
#endif
#endif
