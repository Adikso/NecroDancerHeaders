// Generated automatically. Do not edit!
#ifndef _FireballData_
#define _FireballData_
#include "Object.hpp"

class FireballData : public Object  {
public:
    bool dirLeft;
    int x;
    int y;
    int duration;

    // Wrappers
    inline FireballData * _New(bool arg1, int arg2, int arg3, int arg4) { return ptr::_New(this, arg1, arg2, arg3, arg4); }
    inline FireballData * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static FireballData * (*_New)(FireballData * self, bool arg1, int arg2, int arg3, int arg4);
        static FireballData * (*_new2)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline FireballData * (*FireballData::ptr::_New)(FireballData * self, bool arg1, int arg2, int arg3, int arg4) = (FireballData * (*)(FireballData * self, bool arg1, int arg2, int arg3, int arg4)) 0x0;
inline FireballData * (*FireballData::ptr::_new2)() = (FireballData * (*)()) 0x0;
inline void (*FireballData::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline FireballData * (*FireballData::ptr::_New)(FireballData * self, bool arg1, int arg2, int arg3, int arg4) = (FireballData * (*)(FireballData * self, bool arg1, int arg2, int arg3, int arg4)) 0x81bd960;
inline FireballData * (*FireballData::ptr::_new2)() = (FireballData * (*)()) 0x81bd990;
inline void (*FireballData::ptr::_mark)() = (void (*)()) 0x8075d20;
#endif
#endif
