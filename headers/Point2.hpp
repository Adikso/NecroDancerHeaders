// Generated automatically. Do not edit!
#ifndef _Point2_
#define _Point2_
#include "Object.hpp"

class Point2 : public Object  {
public:
    float x;
    float y;

    // Wrappers
    Point2() {
        ptr::CSTR_Point2(this);
    }

    inline Point2 * _New(float arg1, float arg2) { return ptr::_New(this, arg1, arg2); }
    inline Point2 * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Point2 * (*_New)(Point2 * self, float arg1, float arg2);
        static Point2 * (*_new2)();
        static void (*_mark)();
        static void (*CSTR_Point2)(Point2 * self);
    };
};

#ifdef _WIN32

Point2 * (*Point2::ptr::_New)(Point2 * self, float arg1, float arg2) = (Point2 * (*)(Point2 * self, float arg1, float arg2)) 0x0;
Point2 * (*Point2::ptr::_new2)() = (Point2 * (*)()) 0x0;
void (*Point2::ptr::_mark)() = (void (*)()) 0x0;
void (*Point2::ptr::CSTR_Point2)(Point2 * self) = (void (*)(Point2 * self)) 0x5f38a0;
#endif

#ifdef __linux__

Point2 * (*Point2::ptr::_New)(Point2 * self, float arg1, float arg2) = (Point2 * (*)(Point2 * self, float arg1, float arg2)) 0x819dac0;
Point2 * (*Point2::ptr::_new2)() = (Point2 * (*)()) 0x819dae0;
void (*Point2::ptr::_mark)() = (void (*)()) 0x80733d0;
void (*Point2::ptr::CSTR_Point2)(Point2 * self) = (void (*)(Point2 * self)) 0x819daa0;
#endif
#endif
