// Generated automatically. Do not edit!
#ifndef _Stack7_
#define _Stack7_
template<class T> class Array;
class Enumerator37;
class PortalSeg;
class RoomWithDoor;
#include "Object.hpp"

class Stack7 : public Object  {
public:
    Array<PortalSeg *> * data;
    int length;

    // Wrappers
    inline Stack7 * _New() { return ptr::_New(); }
    inline Stack7 * _new2(Array<PortalSeg *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual int _Push19(PortalSeg * arg1) { return ptr::_Push19(this, arg1); }
    inline virtual int Push20(Array<PortalSeg *> * arg1, int arg2, int arg3) { return ptr::_Push20(this, arg1, arg2, arg3); }
    inline virtual int Push21(Array<PortalSeg *> * arg1, int arg2) { return ptr::_Push21(this, arg1, arg2); }
    inline virtual Enumerator37 * ObjectEnumerator() { return ptr::_ObjectEnumerator(); }
    inline virtual int Length() { return ptr::_Length(); }
    inline virtual PortalSeg * Get2(int arg1) { return ptr::_Get2(this, arg1); }
    inline virtual int Set22(int arg1, PortalSeg * arg2) { return ptr::_Set22(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }
    inline int Push19(RoomWithDoor * value) { return ptr::Push19(this, value); }

    class ptr {
    public:
        static Stack7 * (*_New)();
        static Stack7 * (*_new2)(Stack7 * self, Array<PortalSeg *> * arg1);
        static int (*_Push19)(Stack7 * self, PortalSeg * arg1);
        static int (*_Push20)(Stack7 * self, Array<PortalSeg *> * arg1, int arg2, int arg3);
        static int (*_Push21)(Stack7 * self, Array<PortalSeg *> * arg1, int arg2);
        static Enumerator37 * (*_ObjectEnumerator)();
        static int (*_Length)();
        static PortalSeg * (*_Get2)(Stack7 * self, int arg1);
        static int (*_Set22)(Stack7 * self, int arg1, PortalSeg * arg2);
        static void (*_mark)();
        static int (*Push19)(Stack7 * self, RoomWithDoor * value);
    };
};

#ifdef _WIN32

inline Stack7 * (*Stack7::ptr::_New)() = (Stack7 * (*)()) 0x0;
inline Stack7 * (*Stack7::ptr::_new2)(Stack7 * self, Array<PortalSeg *> * arg1) = (Stack7 * (*)(Stack7 * self, Array<PortalSeg *> * arg1)) 0x0;
inline int (*Stack7::ptr::_Push19)(Stack7 * self, PortalSeg * arg1) = (int (*)(Stack7 * self, PortalSeg * arg1)) 0x0;
inline int (*Stack7::ptr::_Push20)(Stack7 * self, Array<PortalSeg *> * arg1, int arg2, int arg3) = (int (*)(Stack7 * self, Array<PortalSeg *> * arg1, int arg2, int arg3)) 0x0;
inline int (*Stack7::ptr::_Push21)(Stack7 * self, Array<PortalSeg *> * arg1, int arg2) = (int (*)(Stack7 * self, Array<PortalSeg *> * arg1, int arg2)) 0x0;
inline Enumerator37 * (*Stack7::ptr::_ObjectEnumerator)() = (Enumerator37 * (*)()) 0x0;
inline int (*Stack7::ptr::_Length)() = (int (*)()) 0x0;
inline PortalSeg * (*Stack7::ptr::_Get2)(Stack7 * self, int arg1) = (PortalSeg * (*)(Stack7 * self, int arg1)) 0x0;
inline int (*Stack7::ptr::_Set22)(Stack7 * self, int arg1, PortalSeg * arg2) = (int (*)(Stack7 * self, int arg1, PortalSeg * arg2)) 0x0;
inline void (*Stack7::ptr::_mark)() = (void (*)()) 0x0;
inline int (*Stack7::ptr::Push19)(Stack7 * self, RoomWithDoor * value) = (int (*)(Stack7 * self, RoomWithDoor * value)) 0x6601b0;
#endif

#ifdef __linux__

inline Stack7 * (*Stack7::ptr::_New)() = (Stack7 * (*)()) 0x81d5590;
inline Stack7 * (*Stack7::ptr::_new2)(Stack7 * self, Array<PortalSeg *> * arg1) = (Stack7 * (*)(Stack7 * self, Array<PortalSeg *> * arg1)) 0x0;
inline int (*Stack7::ptr::_Push19)(Stack7 * self, PortalSeg * arg1) = (int (*)(Stack7 * self, PortalSeg * arg1)) 0x0;
inline int (*Stack7::ptr::_Push20)(Stack7 * self, Array<PortalSeg *> * arg1, int arg2, int arg3) = (int (*)(Stack7 * self, Array<PortalSeg *> * arg1, int arg2, int arg3)) 0x0;
inline int (*Stack7::ptr::_Push21)(Stack7 * self, Array<PortalSeg *> * arg1, int arg2) = (int (*)(Stack7 * self, Array<PortalSeg *> * arg1, int arg2)) 0x0;
inline Enumerator37 * (*Stack7::ptr::_ObjectEnumerator)() = (Enumerator37 * (*)()) 0x0;
inline int (*Stack7::ptr::_Length)() = (int (*)()) 0x8077270;
inline PortalSeg * (*Stack7::ptr::_Get2)(Stack7 * self, int arg1) = (PortalSeg * (*)(Stack7 * self, int arg1)) 0x8077280;
inline int (*Stack7::ptr::_Set22)(Stack7 * self, int arg1, PortalSeg * arg2) = (int (*)(Stack7 * self, int arg1, PortalSeg * arg2)) 0x0;
inline void (*Stack7::ptr::_mark)() = (void (*)()) 0x8077290;
inline int (*Stack7::ptr::Push19)(Stack7 * self, RoomWithDoor * value) = (int (*)(Stack7 * self, RoomWithDoor * value)) 0x80bec80;
#endif
#endif
