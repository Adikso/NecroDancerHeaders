// Generated automatically. Do not edit!
#ifndef _StackEx4_
#define _StackEx4_
class RoomWithDoor;
#include "Stack8.hpp"

class StackEx4 : public Stack8  {
public:

    // Wrappers
    inline StackEx4 * _New() { return ptr::_New(); }
    inline virtual RoomWithDoor * ChooseRandom(bool arg1) { return ptr::_ChooseRandom(this, arg1); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static StackEx4 * (*_New)();
        static RoomWithDoor * (*_ChooseRandom)(StackEx4 * self, bool arg1);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline StackEx4 * (*StackEx4::ptr::_New)() = (StackEx4 * (*)()) 0x0;
inline RoomWithDoor * (*StackEx4::ptr::_ChooseRandom)(StackEx4 * self, bool arg1) = (RoomWithDoor * (*)(StackEx4 * self, bool arg1)) 0x0;
inline void (*StackEx4::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline StackEx4 * (*StackEx4::ptr::_New)() = (StackEx4 * (*)()) 0x81d5850;
inline RoomWithDoor * (*StackEx4::ptr::_ChooseRandom)(StackEx4 * self, bool arg1) = (RoomWithDoor * (*)(StackEx4 * self, bool arg1)) 0x8100550;
inline void (*StackEx4::ptr::_mark)() = (void (*)()) 0x8087900;
#endif
#endif
