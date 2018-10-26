// Generated automatically. Do not edit!
#ifndef _Object_
#define _Object_
class String;
#include "gc_object.hpp"

class Object : public gc_object  {
public:

    // Wrappers
    inline virtual bool Equals(Object * obj) { return ptr::Equals(this, obj); }
    inline virtual int Compare(Object * obj) { return ptr::Compare(this, obj); }
    inline virtual String * debug() { return ptr::debug(this); }

    class ptr {
    public:
        static bool (*Equals)(Object * self, Object * obj);
        static int (*Compare)(Object * self, Object * obj);
        static String * (*debug)(Object * self);
    };
};

#ifdef _WIN32

bool (*Object::ptr::Equals)(Object * self, Object * obj) = (bool (*)(Object * self, Object * obj)) 0x403290;
int (*Object::ptr::Compare)(Object * self, Object * obj) = (int (*)(Object * self, Object * obj)) 0x4032a0;
String * (*Object::ptr::debug)(Object * self) = (String * (*)(Object * self)) 0x4032b0;
#endif

#ifdef __linux__

bool (*Object::ptr::Equals)(Object * self, Object * obj) = (bool (*)(Object * self, Object * obj)) 0x84232b0;
int (*Object::ptr::Compare)(Object * self, Object * obj) = (int (*)(Object * self, Object * obj)) 0x84232c0;
String * (*Object::ptr::debug)(Object * self) = (String * (*)(Object * self)) 0x8426140;
#endif
#endif
