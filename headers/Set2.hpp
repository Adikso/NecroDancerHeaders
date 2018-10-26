// Generated automatically. Do not edit!
#ifndef _Set2_
#define _Set2_
class Map13;
class String;
#include "Object.hpp"

class Set2 : public Object  {
public:
    Map13 * map;

    // Wrappers
    inline Set2 * _New(Map13 * arg1) { return ptr::_New(this, arg1); }
    inline Set2 * _new2() { return ptr::_new2(); }
    inline virtual int Clear() { return ptr::_Clear(); }
    inline virtual int Insert6(String * value) { return ptr::Insert6(this, value); }
    inline virtual int Remove(String * value) { return ptr::Remove(this, value); }
    inline virtual bool Contains(String * value) { return ptr::Contains(this, value); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Set2 * (*_New)(Set2 * self, Map13 * arg1);
        static Set2 * (*_new2)();
        static int (*_Clear)();
        static int (*Insert6)(Set2 * self, String * value);
        static int (*Remove)(Set2 * self, String * value);
        static bool (*Contains)(Set2 * self, String * value);
        static void (*_mark)();
    };
};

#ifdef _WIN32

Set2 * (*Set2::ptr::_New)(Set2 * self, Map13 * arg1) = (Set2 * (*)(Set2 * self, Map13 * arg1)) 0x0;
Set2 * (*Set2::ptr::_new2)() = (Set2 * (*)()) 0x0;
int (*Set2::ptr::_Clear)() = (int (*)()) 0x0;
int (*Set2::ptr::Insert6)(Set2 * self, String * value) = (int (*)(Set2 * self, String * value)) 0x5e1020;
int (*Set2::ptr::Remove)(Set2 * self, String * value) = (int (*)(Set2 * self, String * value)) 0x5e10a0;
bool (*Set2::ptr::Contains)(Set2 * self, String * value) = (bool (*)(Set2 * self, String * value)) 0x5e1120;
void (*Set2::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

Set2 * (*Set2::ptr::_New)(Set2 * self, Map13 * arg1) = (Set2 * (*)(Set2 * self, Map13 * arg1)) 0x819a510;
Set2 * (*Set2::ptr::_new2)() = (Set2 * (*)()) 0x819a570;
int (*Set2::ptr::_Clear)() = (int (*)()) 0x8072490;
int (*Set2::ptr::Insert6)(Set2 * self, String * value) = (int (*)(Set2 * self, String * value)) 0x80c35f0;
int (*Set2::ptr::Remove)(Set2 * self, String * value) = (int (*)(Set2 * self, String * value)) 0x80c3590;
bool (*Set2::ptr::Contains)(Set2 * self, String * value) = (bool (*)(Set2 * self, String * value)) 0x80c3530;
void (*Set2::ptr::_mark)() = (void (*)()) 0x80724b0;
#endif
#endif
