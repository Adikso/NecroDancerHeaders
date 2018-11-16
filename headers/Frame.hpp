// Generated automatically. Do not edit!
#ifndef _Frame_
#define _Frame_
#include "Object.hpp"

class Frame : public Object  {
public:
    int x;
    int y;

    // Wrappers
    inline Frame * _New(int arg1, int arg2) { return ptr::_New(this, arg1, arg2); }
    inline Frame * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Frame * (*_New)(Frame * self, int arg1, int arg2);
        static Frame * (*_new2)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Frame * (*Frame::ptr::_New)(Frame * self, int arg1, int arg2) = (Frame * (*)(Frame * self, int arg1, int arg2)) 0x0;
inline Frame * (*Frame::ptr::_new2)() = (Frame * (*)()) 0x0;
inline void (*Frame::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Frame * (*Frame::ptr::_New)(Frame * self, int arg1, int arg2) = (Frame * (*)(Frame * self, int arg1, int arg2)) 0x80fe830;
inline Frame * (*Frame::ptr::_new2)() = (Frame * (*)()) 0x80fe850;
inline void (*Frame::ptr::_mark)() = (void (*)()) 0x806d550;
#endif
#endif
