// Generated automatically. Do not edit!
#ifndef _Stack6_
#define _Stack6_
template<class T> class Array;
class Enumerator41;
class PortalSeg;
#include "Object.hpp"

class Stack6 : public Object  {
public:
    Array<PortalSeg *> * data;
    int length;

    // Wrappers
    inline Stack6 * _New() { return ptr::_New(); }
    inline Stack6 * _new2(Array<PortalSeg *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual int Push16(PortalSeg * value) { return ptr::Push16(this, value); }
    inline virtual int Push17(Array<PortalSeg *> * arg1, int arg2, int arg3) { return ptr::_Push17(this, arg1, arg2, arg3); }
    inline virtual int Push18(Array<PortalSeg *> * arg1, int arg2) { return ptr::_Push18(this, arg1, arg2); }
    inline virtual Enumerator41 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual int Length() { return ptr::_Length(); }
    inline virtual PortalSeg * Get2(int arg1) { return ptr::_Get2(this, arg1); }
    inline virtual int Set22(int arg1, PortalSeg * arg2) { return ptr::_Set22(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Stack6 * (*_New)();
        static Stack6 * (*_new2)(Stack6 * self, Array<PortalSeg *> * arg1);
        static int (*Push16)(Stack6 * self, PortalSeg * value);
        static int (*_Push17)(Stack6 * self, Array<PortalSeg *> * arg1, int arg2, int arg3);
        static int (*_Push18)(Stack6 * self, Array<PortalSeg *> * arg1, int arg2);
        static Enumerator41 * (*ObjectEnumerator)(Stack6 * self);
        static int (*_Length)();
        static PortalSeg * (*_Get2)(Stack6 * self, int arg1);
        static int (*_Set22)(Stack6 * self, int arg1, PortalSeg * arg2);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Stack6 * (*Stack6::ptr::_New)() = (Stack6 * (*)()) 0x0;
inline Stack6 * (*Stack6::ptr::_new2)(Stack6 * self, Array<PortalSeg *> * arg1) = (Stack6 * (*)(Stack6 * self, Array<PortalSeg *> * arg1)) 0x0;
inline int (*Stack6::ptr::Push16)(Stack6 * self, PortalSeg * value) = (int (*)(Stack6 * self, PortalSeg * value)) 0x65fed0;
inline int (*Stack6::ptr::_Push17)(Stack6 * self, Array<PortalSeg *> * arg1, int arg2, int arg3) = (int (*)(Stack6 * self, Array<PortalSeg *> * arg1, int arg2, int arg3)) 0x0;
inline int (*Stack6::ptr::_Push18)(Stack6 * self, Array<PortalSeg *> * arg1, int arg2) = (int (*)(Stack6 * self, Array<PortalSeg *> * arg1, int arg2)) 0x0;
inline Enumerator41 * (*Stack6::ptr::ObjectEnumerator)(Stack6 * self) = (Enumerator41 * (*)(Stack6 * self)) 0x65ff70;
inline int (*Stack6::ptr::_Length)() = (int (*)()) 0x0;
inline PortalSeg * (*Stack6::ptr::_Get2)(Stack6 * self, int arg1) = (PortalSeg * (*)(Stack6 * self, int arg1)) 0x0;
inline int (*Stack6::ptr::_Set22)(Stack6 * self, int arg1, PortalSeg * arg2) = (int (*)(Stack6 * self, int arg1, PortalSeg * arg2)) 0x0;
inline void (*Stack6::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Stack6 * (*Stack6::ptr::_New)() = (Stack6 * (*)()) 0x81d50f0;
inline Stack6 * (*Stack6::ptr::_new2)(Stack6 * self, Array<PortalSeg *> * arg1) = (Stack6 * (*)(Stack6 * self, Array<PortalSeg *> * arg1)) 0x0;
inline int (*Stack6::ptr::Push16)(Stack6 * self, PortalSeg * value) = (int (*)(Stack6 * self, PortalSeg * value)) 0x80bea80;
inline int (*Stack6::ptr::_Push17)(Stack6 * self, Array<PortalSeg *> * arg1, int arg2, int arg3) = (int (*)(Stack6 * self, Array<PortalSeg *> * arg1, int arg2, int arg3)) 0x0;
inline int (*Stack6::ptr::_Push18)(Stack6 * self, Array<PortalSeg *> * arg1, int arg2) = (int (*)(Stack6 * self, Array<PortalSeg *> * arg1, int arg2)) 0x0;
inline Enumerator41 * (*Stack6::ptr::ObjectEnumerator)(Stack6 * self) = (Enumerator41 * (*)(Stack6 * self)) 0x80bbc00;
inline int (*Stack6::ptr::_Length)() = (int (*)()) 0x8076f80;
inline PortalSeg * (*Stack6::ptr::_Get2)(Stack6 * self, int arg1) = (PortalSeg * (*)(Stack6 * self, int arg1)) 0x8076f90;
inline int (*Stack6::ptr::_Set22)(Stack6 * self, int arg1, PortalSeg * arg2) = (int (*)(Stack6 * self, int arg1, PortalSeg * arg2)) 0x8076fa0;
inline void (*Stack6::ptr::_mark)() = (void (*)()) 0x8077000;
#endif
#endif
