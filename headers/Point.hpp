// Generated automatically. Do not edit!
#ifndef _Point_
#define _Point_
class String;
#include "Object.hpp"

class Point : public Object  {
public:
    int x;
    int y;

    // Wrappers
    Point() {
        ptr::CSTR_Point(this);
    }

    inline Point * _New(int arg1, int arg2) { return ptr::_New(this, arg1, arg2); }
    inline Point * _new2() { return ptr::_new2(); }
    inline static Point * Add(Point * a, Point * b) { return ptr::Add(a, b); }
    inline virtual Point * Add7(Point * other) { return ptr::Add7(this, other); }
    inline virtual Point * Add8(int dx, int dy) { return ptr::Add8(this, dx, dy); }
    inline static bool _Equals(Point * arg1, Point * arg2) { return ptr::_Equals(arg1, arg2); }
    inline virtual bool Equals13(Point * arg1) { return ptr::_Equals13(this, arg1); }
    inline virtual Point * RotateCWAbout(Point * origin) { return ptr::RotateCWAbout(this, origin); }
    inline virtual Point * Scale(int scalar) { return ptr::Scale(this, scalar); }
    inline virtual String * ToString() { return ptr::ToString(this); }
    inline static int _Compare(Point * arg1, Point * arg2) { return ptr::_Compare(arg1, arg2); }
    inline virtual int Compare5(Point * other) { return ptr::Compare5(this, other); }
    inline void _mark() { ptr::_mark(); }
    inline bool Equals15(Point * other) { return ptr::Equals15(this, other); }

    class ptr {
    public:
        static Point * (*_New)(Point * self, int arg1, int arg2);
        static Point * (*_new2)();
        static Point * (*Add)(Point * a, Point * b);
        static Point * (*Add7)(Point * self, Point * other);
        static Point * (*Add8)(Point * self, int dx, int dy);
        static bool (*_Equals)(Point * arg1, Point * arg2);
        static bool (*_Equals13)(Point * self, Point * arg1);
        static Point * (*RotateCWAbout)(Point * self, Point * origin);
        static Point * (*Scale)(Point * self, int scalar);
        static String * (*ToString)(Point * self);
        static int (*_Compare)(Point * arg1, Point * arg2);
        static int (*Compare5)(Point * self, Point * other);
        static void (*_mark)();
        static void (*CSTR_Point)(Point * self);
        static bool (*Equals15)(Point * self, Point * other);
    };
};

#ifdef _WIN32

Point * (*Point::ptr::_New)(Point * self, int arg1, int arg2) = (Point * (*)(Point * self, int arg1, int arg2)) 0x0;
Point * (*Point::ptr::_new2)() = (Point * (*)()) 0x0;
Point * (*Point::ptr::Add)(Point * a, Point * b) = (Point * (*)(Point * a, Point * b)) 0x5ecd90;
Point * (*Point::ptr::Add7)(Point * self, Point * other) = (Point * (*)(Point * self, Point * other)) 0x5ece30;
Point * (*Point::ptr::Add8)(Point * self, int dx, int dy) = (Point * (*)(Point * self, int dx, int dy)) 0x5ece40;
bool (*Point::ptr::_Equals)(Point * arg1, Point * arg2) = (bool (*)(Point * arg1, Point * arg2)) 0x0;
bool (*Point::ptr::_Equals13)(Point * self, Point * arg1) = (bool (*)(Point * self, Point * arg1)) 0x0;
Point * (*Point::ptr::RotateCWAbout)(Point * self, Point * origin) = (Point * (*)(Point * self, Point * origin)) 0x5ecf10;
Point * (*Point::ptr::Scale)(Point * self, int scalar) = (Point * (*)(Point * self, int scalar)) 0x5ecfc0;
String * (*Point::ptr::ToString)(Point * self) = (String * (*)(Point * self)) 0x5ed060;
int (*Point::ptr::_Compare)(Point * arg1, Point * arg2) = (int (*)(Point * arg1, Point * arg2)) 0x0;
int (*Point::ptr::Compare5)(Point * self, Point * other) = (int (*)(Point * self, Point * other)) 0x5ed2d0;
void (*Point::ptr::_mark)() = (void (*)()) 0x0;
void (*Point::ptr::CSTR_Point)(Point * self) = (void (*)(Point * self)) 0x5ecd20;
bool (*Point::ptr::Equals15)(Point * self, Point * other) = (bool (*)(Point * self, Point * other)) 0x5ecee0;
#endif

#ifdef __linux__

Point * (*Point::ptr::_New)(Point * self, int arg1, int arg2) = (Point * (*)(Point * self, int arg1, int arg2)) 0x819ad40;
Point * (*Point::ptr::_new2)() = (Point * (*)()) 0x819ad60;
Point * (*Point::ptr::Add)(Point * a, Point * b) = (Point * (*)(Point * a, Point * b)) 0x819ad70;
Point * (*Point::ptr::Add7)(Point * self, Point * other) = (Point * (*)(Point * self, Point * other)) 0x80bf5d0;
Point * (*Point::ptr::Add8)(Point * self, int dx, int dy) = (Point * (*)(Point * self, int dx, int dy)) 0x80b50f0;
bool (*Point::ptr::_Equals)(Point * arg1, Point * arg2) = (bool (*)(Point * arg1, Point * arg2)) 0x819adc0;
bool (*Point::ptr::_Equals13)(Point * self, Point * arg1) = (bool (*)(Point * self, Point * arg1)) 0x0;
Point * (*Point::ptr::RotateCWAbout)(Point * self, Point * origin) = (Point * (*)(Point * self, Point * origin)) 0x80b50a0;
Point * (*Point::ptr::Scale)(Point * self, int scalar) = (Point * (*)(Point * self, int scalar)) 0x80b5050;
String * (*Point::ptr::ToString)(Point * self) = (String * (*)(Point * self)) 0x80c95f0;
int (*Point::ptr::_Compare)(Point * arg1, Point * arg2) = (int (*)(Point * arg1, Point * arg2)) 0x819adf0;
int (*Point::ptr::Compare5)(Point * self, Point * other) = (int (*)(Point * self, Point * other)) 0x8087a60;
void (*Point::ptr::_mark)() = (void (*)()) 0x8072b50;
void (*Point::ptr::CSTR_Point)(Point * self) = (void (*)(Point * self)) 0x819ad20;
bool (*Point::ptr::Equals15)(Point * self, Point * other) = (bool (*)(Point * self, Point * other)) 0x8072b20;
#endif
#endif
