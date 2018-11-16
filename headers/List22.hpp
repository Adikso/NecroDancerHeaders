// Generated automatically. Do not edit!
#ifndef _List22_
#define _List22_
template<class T> class Array;
class CrateObject;
class Enumerator38;
class Node32;
#include "Object.hpp"

class List22 : public Object  {
public:
    Node32 * _head;

    // Wrappers
    List22() {
        ptr::CSTR_List22(this);
    }

    inline List22 * _New() { return ptr::_New(); }
    inline virtual Node32 * AddLast22(CrateObject * data) { return ptr::AddLast22(this, data); }
    inline List22 * _new2(Array<CrateObject *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator38 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List22 * (*_New)();
        static Node32 * (*AddLast22)(List22 * self, CrateObject * data);
        static List22 * (*_new2)(List22 * self, Array<CrateObject *> * arg1);
        static Enumerator38 * (*ObjectEnumerator)(List22 * self);
        static void (*_mark)();
        static void (*CSTR_List22)(List22 * self);
    };
};

#ifdef _WIN32

inline List22 * (*List22::ptr::_New)() = (List22 * (*)()) 0x0;
inline Node32 * (*List22::ptr::AddLast22)(List22 * self, CrateObject * data) = (Node32 * (*)(List22 * self, CrateObject * data)) 0x5df4e0;
inline List22 * (*List22::ptr::_new2)(List22 * self, Array<CrateObject *> * arg1) = (List22 * (*)(List22 * self, Array<CrateObject *> * arg1)) 0x0;
inline Enumerator38 * (*List22::ptr::ObjectEnumerator)(List22 * self) = (Enumerator38 * (*)(List22 * self)) 0x5df580;
inline void (*List22::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List22::ptr::CSTR_List22)(List22 * self) = (void (*)(List22 * self)) 0x5df410;
#endif

#ifdef __linux__

inline List22 * (*List22::ptr::_New)() = (List22 * (*)()) 0x8197e70;
inline Node32 * (*List22::ptr::AddLast22)(List22 * self, CrateObject * data) = (Node32 * (*)(List22 * self, CrateObject * data)) 0x81980b0;
inline List22 * (*List22::ptr::_new2)(List22 * self, Array<CrateObject *> * arg1) = (List22 * (*)(List22 * self, Array<CrateObject *> * arg1)) 0x0;
inline Enumerator38 * (*List22::ptr::ObjectEnumerator)(List22 * self) = (Enumerator38 * (*)(List22 * self)) 0x80bb9e0;
inline void (*List22::ptr::_mark)() = (void (*)()) 0x8089710;
inline void (*List22::ptr::CSTR_List22)(List22 * self) = (void (*)(List22 * self)) 0x81981f0;
#endif
#endif
