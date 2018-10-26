// Generated automatically. Do not edit!
#ifndef _StringSet_
#define _StringSet_
#include "Set2.hpp"

class StringSet : public Set2  {
public:

    // Wrappers
    StringSet() {
        ptr::CSTR_StringSet(this);
        ptr::New(this);
    }

    inline StringSet * New() { return ptr::New(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static StringSet * (*New)(StringSet * self);
        static void (*_mark)();
        static void (*CSTR_StringSet)(StringSet * self);
    };
};

#ifdef _WIN32

StringSet * (*StringSet::ptr::New)(StringSet * self) = (StringSet * (*)(StringSet * self)) 0x5e1220;
void (*StringSet::ptr::_mark)() = (void (*)()) 0x0;
void (*StringSet::ptr::CSTR_StringSet)(StringSet * self) = (void (*)(StringSet * self)) 0x5e11a0;
#endif

#ifdef __linux__

StringSet * (*StringSet::ptr::New)(StringSet * self) = (StringSet * (*)(StringSet * self)) 0x819a5a0;
void (*StringSet::ptr::_mark)() = (void (*)()) 0x8087840;
void (*StringSet::ptr::CSTR_StringSet)(StringSet * self) = (void (*)(StringSet * self)) 0x819a580;
#endif
#endif
