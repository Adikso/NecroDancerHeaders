// Generated automatically. Do not edit!
#ifndef _PulseData_
#define _PulseData_
#include "Object.hpp"

class PulseData : public Object  {
public:
    int x;
    int y;
    int t;

    // Wrappers
    inline PulseData * _New(int arg1, int arg2) { return ptr::_New(this, arg1, arg2); }
    inline PulseData * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static PulseData * (*_New)(PulseData * self, int arg1, int arg2);
        static PulseData * (*_new2)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

PulseData * (*PulseData::ptr::_New)(PulseData * self, int arg1, int arg2) = (PulseData * (*)(PulseData * self, int arg1, int arg2)) 0x0;
PulseData * (*PulseData::ptr::_new2)() = (PulseData * (*)()) 0x0;
void (*PulseData::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

PulseData * (*PulseData::ptr::_New)(PulseData * self, int arg1, int arg2) = (PulseData * (*)(PulseData * self, int arg1, int arg2)) 0x81bdda0;
PulseData * (*PulseData::ptr::_new2)() = (PulseData * (*)()) 0x81bddc0;
void (*PulseData::ptr::_mark)() = (void (*)()) 0x8075d30;
#endif
#endif
