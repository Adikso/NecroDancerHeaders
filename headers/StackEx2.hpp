// Generated automatically. Do not edit!
#ifndef _StackEx2_
#define _StackEx2_
class Point;
#include "Stack2.hpp"

class StackEx2 : public Stack2  {
public:

    // Wrappers
    inline StackEx2 * _New() { return ptr::_New(); }
    inline virtual Point * ChooseRandom(bool arg1) { return ptr::_ChooseRandom(this, arg1); }
    inline virtual void Shuffle(bool arg1) { ptr::_Shuffle(this, arg1); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static StackEx2 * (*_New)();
        static Point * (*_ChooseRandom)(StackEx2 * self, bool arg1);
        static void (*_Shuffle)(StackEx2 * self, bool arg1);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline StackEx2 * (*StackEx2::ptr::_New)() = (StackEx2 * (*)()) 0x0;
inline Point * (*StackEx2::ptr::_ChooseRandom)(StackEx2 * self, bool arg1) = (Point * (*)(StackEx2 * self, bool arg1)) 0x0;
inline void (*StackEx2::ptr::_Shuffle)(StackEx2 * self, bool arg1) = (void (*)(StackEx2 * self, bool arg1)) 0x0;
inline void (*StackEx2::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline StackEx2 * (*StackEx2::ptr::_New)() = (StackEx2 * (*)()) 0x81bb120;
inline Point * (*StackEx2::ptr::_ChooseRandom)(StackEx2 * self, bool arg1) = (Point * (*)(StackEx2 * self, bool arg1)) 0x81007a0;
inline void (*StackEx2::ptr::_Shuffle)(StackEx2 * self, bool arg1) = (void (*)(StackEx2 * self, bool arg1)) 0x8100700;
inline void (*StackEx2::ptr::_mark)() = (void (*)()) 0x808ba10;
#endif
#endif
