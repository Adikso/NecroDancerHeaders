// Generated automatically. Do not edit!
#ifndef _Stack2_
#define _Stack2_
template<class T> class Array;
class Enumerator24;
class Point;
#include "Object.hpp"

class Stack2 : public Object  {
public:
    Array<Point *> * data;
    int length;
    static Point * * _NIL;

    // Wrappers
    inline Stack2 * _New() { return ptr::_New(); }
    inline Stack2 * _new2(Array<Point *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual int Push4(Point * value) { return ptr::Push4(this, value); }
    inline virtual int Push5(Array<Point *> * values, int offset, int count) { return ptr::_Push5(this, values, offset, count); }
    inline virtual int Push6(Array<Point *> * values, int offset) { return ptr::_Push6(this, values, offset); }
    inline virtual Enumerator24 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual int Length() { return ptr::_Length(); }
    inline virtual Point * Get2(int arg1) { return ptr::_Get2(this, arg1); }
    inline virtual int Set19(int arg1, Point * arg2) { return ptr::_Set19(this, arg1, arg2); }
    inline virtual int Remove5(int index) { return ptr::Remove5(this, index); }
    inline virtual Point * Pop() { return ptr::Pop(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Stack2 * (*_New)();
        static Stack2 * (*_new2)(Stack2 * self, Array<Point *> * arg1);
        static int (*Push4)(Stack2 * self, Point * value);
        static int (*_Push5)(Stack2 * self, Array<Point *> * values, int offset, int count);
        static int (*_Push6)(Stack2 * self, Array<Point *> * values, int offset);
        static Enumerator24 * (*ObjectEnumerator)(Stack2 * self);
        static int (*_Length)();
        static Point * (*_Get2)(Stack2 * self, int arg1);
        static int (*_Set19)(Stack2 * self, int arg1, Point * arg2);
        static int (*Remove5)(Stack2 * self, int index);
        static Point * (*Pop)(Stack2 * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32
Point * * Stack2::_NIL = (Point* *) 0x8355ac;

Stack2 * (*Stack2::ptr::_New)() = (Stack2 * (*)()) 0x0;
Stack2 * (*Stack2::ptr::_new2)(Stack2 * self, Array<Point *> * arg1) = (Stack2 * (*)(Stack2 * self, Array<Point *> * arg1)) 0x0;
int (*Stack2::ptr::Push4)(Stack2 * self, Point * value) = (int (*)(Stack2 * self, Point * value)) 0x631340;
int (*Stack2::ptr::_Push5)(Stack2 * self, Array<Point *> * values, int offset, int count) = (int (*)(Stack2 * self, Array<Point *> * values, int offset, int count)) 0x6050e0;
int (*Stack2::ptr::_Push6)(Stack2 * self, Array<Point *> * values, int offset) = (int (*)(Stack2 * self, Array<Point *> * values, int offset)) 0x605120;
Enumerator24 * (*Stack2::ptr::ObjectEnumerator)(Stack2 * self) = (Enumerator24 * (*)(Stack2 * self)) 0x6313e0;
int (*Stack2::ptr::_Length)() = (int (*)()) 0x0;
Point * (*Stack2::ptr::_Get2)(Stack2 * self, int arg1) = (Point * (*)(Stack2 * self, int arg1)) 0x0;
int (*Stack2::ptr::_Set19)(Stack2 * self, int arg1, Point * arg2) = (int (*)(Stack2 * self, int arg1, Point * arg2)) 0x0;
int (*Stack2::ptr::Remove5)(Stack2 * self, int index) = (int (*)(Stack2 * self, int index)) 0x631530;
Point * (*Stack2::ptr::Pop)(Stack2 * self) = (Point * (*)(Stack2 * self)) 0x631620;
void (*Stack2::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__
Point * * Stack2::_NIL = (Point* *) 0x0;

Stack2 * (*Stack2::ptr::_New)() = (Stack2 * (*)()) 0x81baf50;
Stack2 * (*Stack2::ptr::_new2)(Stack2 * self, Array<Point *> * arg1) = (Stack2 * (*)(Stack2 * self, Array<Point *> * arg1)) 0x0;
int (*Stack2::ptr::Push4)(Stack2 * self, Point * value) = (int (*)(Stack2 * self, Point * value)) 0x80be520;
int (*Stack2::ptr::_Push5)(Stack2 * self, Array<Point *> * values, int offset, int count) = (int (*)(Stack2 * self, Array<Point *> * values, int offset, int count)) 0x0;
int (*Stack2::ptr::_Push6)(Stack2 * self, Array<Point *> * values, int offset) = (int (*)(Stack2 * self, Array<Point *> * values, int offset)) 0x0;
Enumerator24 * (*Stack2::ptr::ObjectEnumerator)(Stack2 * self) = (Enumerator24 * (*)(Stack2 * self)) 0x80ba8e0;
int (*Stack2::ptr::_Length)() = (int (*)()) 0x8075650;
Point * (*Stack2::ptr::_Get2)(Stack2 * self, int arg1) = (Point * (*)(Stack2 * self, int arg1)) 0x8075660;
int (*Stack2::ptr::_Set19)(Stack2 * self, int arg1, Point * arg2) = (int (*)(Stack2 * self, int arg1, Point * arg2)) 0x80a1590;
int (*Stack2::ptr::Remove5)(Stack2 * self, int index) = (int (*)(Stack2 * self, int index)) 0x80a14e0;
Point * (*Stack2::ptr::Pop)(Stack2 * self) = (Point * (*)(Stack2 * self)) 0x8075670;
void (*Stack2::ptr::_mark)() = (void (*)()) 0x8075690;
#endif
#endif
