// Generated automatically. Do not edit!
#ifndef _StackEx_
#define _StackEx_
#include "Stack.hpp"

class StackEx : public Stack  {
public:

    // Wrappers
    StackEx() {
        ptr::CSTR_StackEx(this);
    }

    inline StackEx * _New() { return ptr::_New(); }
    inline virtual int Find(int value) { return ptr::Find(this, value); }
    inline virtual void Shuffle(bool useSeed) { ptr::Shuffle(this, useSeed); }
    inline virtual int ChooseRandom(bool useSeed) { return ptr::ChooseRandom(this, useSeed); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static StackEx * (*_New)();
        static int (*Find)(StackEx * self, int value);
        static void (*Shuffle)(StackEx * self, bool useSeed);
        static int (*ChooseRandom)(StackEx * self, bool useSeed);
        static void (*_mark)();
        static void (*CSTR_StackEx)(StackEx * self);
    };
};

#ifdef _WIN32

inline StackEx * (*StackEx::ptr::_New)() = (StackEx * (*)()) 0x0;
inline int (*StackEx::ptr::Find)(StackEx * self, int value) = (int (*)(StackEx * self, int value)) 0x6054e0;
inline void (*StackEx::ptr::Shuffle)(StackEx * self, bool useSeed) = (void (*)(StackEx * self, bool useSeed)) 0x605530;
inline int (*StackEx::ptr::ChooseRandom)(StackEx * self, bool useSeed) = (int (*)(StackEx * self, bool useSeed)) 0x605630;
inline void (*StackEx::ptr::_mark)() = (void (*)()) 0x0;
inline void (*StackEx::ptr::CSTR_StackEx)(StackEx * self) = (void (*)(StackEx * self)) 0x605460;
#endif

#ifdef __linux__

inline StackEx * (*StackEx::ptr::_New)() = (StackEx * (*)()) 0x81a9b20;
inline int (*StackEx::ptr::Find)(StackEx * self, int value) = (int (*)(StackEx * self, int value)) 0x80741d0;
inline void (*StackEx::ptr::Shuffle)(StackEx * self, bool useSeed) = (void (*)(StackEx * self, bool useSeed)) 0x8100e30;
inline int (*StackEx::ptr::ChooseRandom)(StackEx * self, bool useSeed) = (int (*)(StackEx * self, bool useSeed)) 0x8100dd0;
inline void (*StackEx::ptr::_mark)() = (void (*)()) 0x80a0c50;
inline void (*StackEx::ptr::CSTR_StackEx)(StackEx * self) = (void (*)(StackEx * self)) 0x81a9a10;
#endif
#endif
