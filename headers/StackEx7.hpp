// Generated automatically. Do not edit!
#ifndef _StackEx7_
#define _StackEx7_
class String;
#include "Stack4.hpp"

class StackEx7 : public Stack4  {
public:

    // Wrappers
    inline StackEx7 * _New() { return ptr::_New(); }
    inline virtual String * ChooseRandom(bool useSeed) { return ptr::ChooseRandom(this, useSeed); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static StackEx7 * (*_New)();
        static String * (*ChooseRandom)(StackEx7 * self, bool useSeed);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline StackEx7 * (*StackEx7::ptr::_New)() = (StackEx7 * (*)()) 0x0;
inline String * (*StackEx7::ptr::ChooseRandom)(StackEx7 * self, bool useSeed) = (String * (*)(StackEx7 * self, bool useSeed)) 0x66d210;
inline void (*StackEx7::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline StackEx7 * (*StackEx7::ptr::_New)() = (StackEx7 * (*)()) 0x81db2c0;
inline String * (*StackEx7::ptr::ChooseRandom)(StackEx7 * self, bool useSeed) = (String * (*)(StackEx7 * self, bool useSeed)) 0x81003e0;
inline void (*StackEx7::ptr::_mark)() = (void (*)()) 0x8094670;
#endif
#endif
