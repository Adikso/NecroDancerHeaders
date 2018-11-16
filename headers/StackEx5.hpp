// Generated automatically. Do not edit!
#ifndef _StackEx5_
#define _StackEx5_
class RoomBase;
#include "Stack9.hpp"

class StackEx5 : public Stack9  {
public:

    // Wrappers
    inline StackEx5 * _New() { return ptr::_New(); }
    inline virtual RoomBase * ChooseRandom(bool useSeed) { return ptr::ChooseRandom(this, useSeed); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static StackEx5 * (*_New)();
        static RoomBase * (*ChooseRandom)(StackEx5 * self, bool useSeed);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline StackEx5 * (*StackEx5::ptr::_New)() = (StackEx5 * (*)()) 0x0;
inline RoomBase * (*StackEx5::ptr::ChooseRandom)(StackEx5 * self, bool useSeed) = (RoomBase * (*)(StackEx5 * self, bool useSeed)) 0x631690;
inline void (*StackEx5::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline StackEx5 * (*StackEx5::ptr::_New)() = (StackEx5 * (*)()) 0x81d6140;
inline RoomBase * (*StackEx5::ptr::ChooseRandom)(StackEx5 * self, bool useSeed) = (RoomBase * (*)(StackEx5 * self, bool useSeed)) 0x81004f0;
inline void (*StackEx5::ptr::_mark)() = (void (*)()) 0x80878a0;
#endif
#endif
