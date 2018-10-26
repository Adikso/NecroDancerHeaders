// Generated automatically. Do not edit!
#ifndef _Rect_
#define _Rect_
class Point;
class Stack3;
class String;
#include "Object.hpp"

class Rect : public Object  {
public:
    int x;
    int y;
    int w;
    int h;

    // Wrappers
    Rect() {
        ptr::CSTR_Rect(this);
    }

    inline Rect * _New(int arg1, int arg2, int arg3, int arg4) { return ptr::_New(this, arg1, arg2, arg3, arg4); }
    inline Rect * _new2() { return ptr::_new2(); }
    inline virtual int GetRight() { return ptr::GetRight(this); }
    inline virtual int GetBottom() { return ptr::GetBottom(this); }
    inline virtual bool Contains6(Rect * other) { return ptr::Contains6(this, other); }
    inline static Rect * MakeBounds(int minX, int minY, int maxX, int maxY) { return ptr::MakeBounds(minX, minY, maxX, maxY); }
    inline static Rect * _MakeCorners(Point * arg1, Point * arg2) { return ptr::_MakeCorners(arg1, arg2); }
    inline virtual bool Contains7(int px, int py) { return ptr::Contains7(this, px, py); }
    inline virtual bool Contains5(Point * other) { return ptr::Contains5(this, other); }
    inline virtual String * ToString() { return ptr::ToString(this); }
    inline virtual bool OnBorder(int px, int py) { return ptr::OnBorder(this, px, py); }
    inline virtual Stack3 * GetCorners() { return ptr::GetCorners(this); }
    inline virtual int GetL1Dist(Point * other) { return ptr::GetL1Dist(this, other); }
    inline virtual int GetL1Dist2(Rect * other) { return ptr::GetL1Dist2(this, other); }
    inline virtual bool ContainsNoCorners(Rect * other) { return ptr::ContainsNoCorners(this, other); }
    inline virtual Point * RandomPoint() { return ptr::RandomPoint(this); }
    inline virtual Stack3 * GetPoints() { return ptr::GetPoints(this); }
    inline virtual Point * GetCenter() { return ptr::GetCenter(this); }
    inline virtual Rect * Copy() { return ptr::_Copy(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Rect * (*_New)(Rect * self, int arg1, int arg2, int arg3, int arg4);
        static Rect * (*_new2)();
        static int (*GetRight)(Rect * self);
        static int (*GetBottom)(Rect * self);
        static bool (*Contains6)(Rect * self, Rect * other);
        static Rect * (*MakeBounds)(int minX, int minY, int maxX, int maxY);
        static Rect * (*_MakeCorners)(Point * arg1, Point * arg2);
        static bool (*Contains7)(Rect * self, int px, int py);
        static bool (*Contains5)(Rect * self, Point * other);
        static String * (*ToString)(Rect * self);
        static bool (*OnBorder)(Rect * self, int px, int py);
        static Stack3 * (*GetCorners)(Rect * self);
        static int (*GetL1Dist)(Rect * self, Point * other);
        static int (*GetL1Dist2)(Rect * self, Rect * other);
        static bool (*ContainsNoCorners)(Rect * self, Rect * other);
        static Point * (*RandomPoint)(Rect * self);
        static Stack3 * (*GetPoints)(Rect * self);
        static Point * (*GetCenter)(Rect * self);
        static Rect * (*_Copy)();
        static void (*_mark)();
        static void (*CSTR_Rect)(Rect * self);
    };
};

#ifdef _WIN32

Rect * (*Rect::ptr::_New)(Rect * self, int arg1, int arg2, int arg3, int arg4) = (Rect * (*)(Rect * self, int arg1, int arg2, int arg3, int arg4)) 0x0;
Rect * (*Rect::ptr::_new2)() = (Rect * (*)()) 0x0;
int (*Rect::ptr::GetRight)(Rect * self) = (int (*)(Rect * self)) 0x6033c0;
int (*Rect::ptr::GetBottom)(Rect * self) = (int (*)(Rect * self)) 0x6033d0;
bool (*Rect::ptr::Contains6)(Rect * self, Rect * other) = (bool (*)(Rect * self, Rect * other)) 0x6033e0;
Rect * (*Rect::ptr::MakeBounds)(int minX, int minY, int maxX, int maxY) = (Rect * (*)(int minX, int minY, int maxX, int maxY)) 0x603440;
Rect * (*Rect::ptr::_MakeCorners)(Point * arg1, Point * arg2) = (Rect * (*)(Point * arg1, Point * arg2)) 0x0;
bool (*Rect::ptr::Contains7)(Rect * self, int px, int py) = (bool (*)(Rect * self, int px, int py)) 0x6034f0;
bool (*Rect::ptr::Contains5)(Rect * self, Point * other) = (bool (*)(Rect * self, Point * other)) 0x603590;
String * (*Rect::ptr::ToString)(Rect * self) = (String * (*)(Rect * self)) 0x6035e0;
bool (*Rect::ptr::OnBorder)(Rect * self, int px, int py) = (bool (*)(Rect * self, int px, int py)) 0x603a50;
Stack3 * (*Rect::ptr::GetCorners)(Rect * self) = (Stack3 * (*)(Rect * self)) 0x603ab0;
int (*Rect::ptr::GetL1Dist)(Rect * self, Point * other) = (int (*)(Rect * self, Point * other)) 0x603c00;
int (*Rect::ptr::GetL1Dist2)(Rect * self, Rect * other) = (int (*)(Rect * self, Rect * other)) 0x603c70;
bool (*Rect::ptr::ContainsNoCorners)(Rect * self, Rect * other) = (bool (*)(Rect * self, Rect * other)) 0x603d10;
Point * (*Rect::ptr::RandomPoint)(Rect * self) = (Point * (*)(Rect * self)) 0x603d80;
Stack3 * (*Rect::ptr::GetPoints)(Rect * self) = (Stack3 * (*)(Rect * self)) 0x603ef0;
Point * (*Rect::ptr::GetCenter)(Rect * self) = (Point * (*)(Rect * self)) 0x604030;
Rect * (*Rect::ptr::_Copy)() = (Rect * (*)()) 0x0;
void (*Rect::ptr::_mark)() = (void (*)()) 0x0;
void (*Rect::ptr::CSTR_Rect)(Rect * self) = (void (*)(Rect * self)) 0x603340;
#endif

#ifdef __linux__

Rect * (*Rect::ptr::_New)(Rect * self, int arg1, int arg2, int arg3, int arg4) = (Rect * (*)(Rect * self, int arg1, int arg2, int arg3, int arg4)) 0x81a7c00;
Rect * (*Rect::ptr::_new2)() = (Rect * (*)()) 0x81a7c30;
int (*Rect::ptr::GetRight)(Rect * self) = (int (*)(Rect * self)) 0x8073d70;
int (*Rect::ptr::GetBottom)(Rect * self) = (int (*)(Rect * self)) 0x8073d80;
bool (*Rect::ptr::Contains6)(Rect * self, Rect * other) = (bool (*)(Rect * self, Rect * other)) 0x8073d90;
Rect * (*Rect::ptr::MakeBounds)(int minX, int minY, int maxX, int maxY) = (Rect * (*)(int minX, int minY, int maxX, int maxY)) 0x81a7c40;
Rect * (*Rect::ptr::_MakeCorners)(Point * arg1, Point * arg2) = (Rect * (*)(Point * arg1, Point * arg2)) 0x81a7ca0;
bool (*Rect::ptr::Contains7)(Rect * self, int px, int py) = (bool (*)(Rect * self, int px, int py)) 0x80b4f20;
bool (*Rect::ptr::Contains5)(Rect * self, Point * other) = (bool (*)(Rect * self, Point * other)) 0x80c0670;
String * (*Rect::ptr::ToString)(Rect * self) = (String * (*)(Rect * self)) 0x80c92f0;
bool (*Rect::ptr::OnBorder)(Rect * self, int px, int py) = (bool (*)(Rect * self, int px, int py)) 0x807f270;
Stack3 * (*Rect::ptr::GetCorners)(Rect * self) = (Stack3 * (*)(Rect * self)) 0x81ba840;
int (*Rect::ptr::GetL1Dist)(Rect * self, Point * other) = (int (*)(Rect * self, Point * other)) 0x8073e10;
int (*Rect::ptr::GetL1Dist2)(Rect * self, Rect * other) = (int (*)(Rect * self, Rect * other)) 0x8073e90;
bool (*Rect::ptr::ContainsNoCorners)(Rect * self, Rect * other) = (bool (*)(Rect * self, Rect * other)) 0x807f2e0;
Point * (*Rect::ptr::RandomPoint)(Rect * self) = (Point * (*)(Rect * self)) 0x8100ed0;
Stack3 * (*Rect::ptr::GetPoints)(Rect * self) = (Stack3 * (*)(Rect * self)) 0x81ba7a0;
Point * (*Rect::ptr::GetCenter)(Rect * self) = (Point * (*)(Rect * self)) 0x80b4ec0;
Rect * (*Rect::ptr::_Copy)() = (Rect * (*)()) 0x80b5a20;
void (*Rect::ptr::_mark)() = (void (*)()) 0x8073f30;
void (*Rect::ptr::CSTR_Rect)(Rect * self) = (void (*)(Rect * self)) 0x81a7bd0;
#endif
#endif
