// Generated automatically. Do not edit!
#ifndef _StackEx3_
#define _StackEx3_
#include "Stack7.hpp"

class StackEx3 : public Stack7  {
public:

    // Wrappers
    inline StackEx3 * _New() { return ptr::_New(); }
    inline virtual void Shuffle(bool useSeed) { ptr::Shuffle(this, useSeed); }
    inline virtual void Extend(StackEx3 * other) { ptr::Extend(this, other); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static StackEx3 * (*_New)();
        static void (*Shuffle)(StackEx3 * self, bool useSeed);
        static void (*Extend)(StackEx3 * self, StackEx3 * other);
        static void (*_mark)();
    };
};

#ifdef _WIN32

StackEx3 * (*StackEx3::ptr::_New)() = (StackEx3 * (*)()) 0x0;
void (*StackEx3::ptr::Shuffle)(StackEx3 * self, bool useSeed) = (void (*)(StackEx3 * self, bool useSeed)) 0x631730;
void (*StackEx3::ptr::Extend)(StackEx3 * self, StackEx3 * other) = (void (*)(StackEx3 * self, StackEx3 * other)) 0x660050;
void (*StackEx3::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

StackEx3 * (*StackEx3::ptr::_New)() = (StackEx3 * (*)()) 0x81d53b0;
void (*StackEx3::ptr::Shuffle)(StackEx3 * self, bool useSeed) = (void (*)(StackEx3 * self, bool useSeed)) 0x81005b0;
void (*StackEx3::ptr::Extend)(StackEx3 * self, StackEx3 * other) = (void (*)(StackEx3 * self, StackEx3 * other)) 0x8077060;
void (*StackEx3::ptr::_mark)() = (void (*)()) 0x80876c0;
#endif
#endif
