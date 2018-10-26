// Generated automatically. Do not edit!
#ifndef _StringMap10_
#define _StringMap10_
class String;
#include "Map22.hpp"

class StringMap10 : public Map22  {
public:

    // Wrappers
    StringMap10() {
        ptr::CSTR_StringMap10(this);
    }

    inline StringMap10 * _New() { return ptr::_New(); }
    inline int _Compare(String * arg1, String * arg2) { return ptr::_Compare(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static StringMap10 * (*_New)();
        static int (*_Compare)(StringMap10 * self, String * arg1, String * arg2);
        static void (*_mark)();
        static void (*CSTR_StringMap10)(StringMap10 * self);
    };
};

#ifdef _WIN32

StringMap10 * (*StringMap10::ptr::_New)() = (StringMap10 * (*)()) 0x0;
int (*StringMap10::ptr::_Compare)(StringMap10 * self, String * arg1, String * arg2) = (int (*)(StringMap10 * self, String * arg1, String * arg2)) 0x0;
void (*StringMap10::ptr::_mark)() = (void (*)()) 0x0;
void (*StringMap10::ptr::CSTR_StringMap10)(StringMap10 * self) = (void (*)(StringMap10 * self)) 0x6801a0;
#endif

#ifdef __linux__

StringMap10 * (*StringMap10::ptr::_New)() = (StringMap10 * (*)()) 0x81deca0;
int (*StringMap10::ptr::_Compare)(StringMap10 * self, String * arg1, String * arg2) = (int (*)(StringMap10 * self, String * arg1, String * arg2)) 0x8096770;
void (*StringMap10::ptr::_mark)() = (void (*)()) 0x8082e00;
void (*StringMap10::ptr::CSTR_StringMap10)(StringMap10 * self) = (void (*)(StringMap10 * self)) 0x81dec80;
#endif
#endif
