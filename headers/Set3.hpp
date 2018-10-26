// Generated automatically. Do not edit!
#ifndef _Set3_
#define _Set3_
class KeyEnumerator4;
class Map19;
class Point;
#include "Object.hpp"

class Set3 : public Object  {
public:
    Map19 * map;

    // Wrappers
    inline Set3 * _New(Map19 * arg1) { return ptr::_New(this, arg1); }
    inline Set3 * _new2() { return ptr::_new2(); }
    inline virtual int Insert8(Point * value) { return ptr::Insert8(this, value); }
    inline virtual bool Contains5(Point * value) { return ptr::Contains5(this, value); }
    inline virtual KeyEnumerator4 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Set3 * (*_New)(Set3 * self, Map19 * arg1);
        static Set3 * (*_new2)();
        static int (*Insert8)(Set3 * self, Point * value);
        static bool (*Contains5)(Set3 * self, Point * value);
        static KeyEnumerator4 * (*ObjectEnumerator)(Set3 * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

Set3 * (*Set3::ptr::_New)(Set3 * self, Map19 * arg1) = (Set3 * (*)(Set3 * self, Map19 * arg1)) 0x0;
Set3 * (*Set3::ptr::_new2)() = (Set3 * (*)()) 0x0;
int (*Set3::ptr::Insert8)(Set3 * self, Point * value) = (int (*)(Set3 * self, Point * value)) 0x632c90;
bool (*Set3::ptr::Contains5)(Set3 * self, Point * value) = (bool (*)(Set3 * self, Point * value)) 0x632cb0;
KeyEnumerator4 * (*Set3::ptr::ObjectEnumerator)(Set3 * self) = (KeyEnumerator4 * (*)(Set3 * self)) 0x632cc0;
void (*Set3::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Set3 * (*Set3::ptr::_New)(Set3 * self, Map19 * arg1) = (Set3 * (*)(Set3 * self, Map19 * arg1)) 0x81bc4f0;
Set3 * (*Set3::ptr::_new2)() = (Set3 * (*)()) 0x81bc550;
int (*Set3::ptr::Insert8)(Set3 * self, Point * value) = (int (*)(Set3 * self, Point * value)) 0x80759b0;
bool (*Set3::ptr::Contains5)(Set3 * self, Point * value) = (bool (*)(Set3 * self, Point * value)) 0x80759e0;
KeyEnumerator4 * (*Set3::ptr::ObjectEnumerator)(Set3 * self) = (KeyEnumerator4 * (*)(Set3 * self)) 0x8075a00;
void (*Set3::ptr::_mark)() = (void (*)()) 0x8086c30;
#endif
#endif
