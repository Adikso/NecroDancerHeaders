// Generated automatically. Do not edit!
#ifndef _List37_
#define _List37_
template<class T> class Array;
class Enumerator28;
class Node54;
class Point;
#include "Object.hpp"

class List37 : public Object  {
public:
    Node54 * _head;

    // Wrappers
    List37() {
        ptr::CSTR_List37(this);
    }

    inline List37 * _New() { return ptr::_New(); }
    inline virtual Node54 * AddLast37(Point * data) { return ptr::AddLast37(this, data); }
    inline List37 * _new2(Array<Point *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual int Clear() { return ptr::_Clear(); }
    inline virtual int Count() { return ptr::_Count(); }
    inline virtual Point * RemoveFirst() { return ptr::_RemoveFirst(); }
    inline virtual Enumerator28 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual Array<Point *> * ToArray() { return ptr::ToArray(this); }
    inline virtual bool Equals23(Point * arg1, Point * arg2) { return ptr::_Equals23(this, arg1, arg2); }
    inline virtual int RemoveEach20(Point * value) { return ptr::RemoveEach20(this, value); }
    inline virtual bool IsEmpty() { return ptr::_IsEmpty(); }
    inline virtual Node54 * FirstNode() { return ptr::_FirstNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List37 * (*_New)();
        static Node54 * (*AddLast37)(List37 * self, Point * data);
        static List37 * (*_new2)(List37 * self, Array<Point *> * arg1);
        static int (*_Clear)();
        static int (*_Count)();
        static Point * (*_RemoveFirst)();
        static Enumerator28 * (*ObjectEnumerator)(List37 * self);
        static Array<Point *> * (*ToArray)(List37 * self);
        static bool (*_Equals23)(List37 * self, Point * arg1, Point * arg2);
        static int (*RemoveEach20)(List37 * self, Point * value);
        static bool (*_IsEmpty)();
        static Node54 * (*_FirstNode)();
        static void (*_mark)();
        static void (*CSTR_List37)(List37 * self);
    };
};

#ifdef _WIN32

inline List37 * (*List37::ptr::_New)() = (List37 * (*)()) 0x0;
inline Node54 * (*List37::ptr::AddLast37)(List37 * self, Point * data) = (Node54 * (*)(List37 * self, Point * data)) 0x609380;
inline List37 * (*List37::ptr::_new2)(List37 * self, Array<Point *> * arg1) = (List37 * (*)(List37 * self, Array<Point *> * arg1)) 0x0;
inline int (*List37::ptr::_Clear)() = (int (*)()) 0x0;
inline int (*List37::ptr::_Count)() = (int (*)()) 0x0;
inline Point * (*List37::ptr::_RemoveFirst)() = (Point * (*)()) 0x0;
inline Enumerator28 * (*List37::ptr::ObjectEnumerator)(List37 * self) = (Enumerator28 * (*)(List37 * self)) 0x609420;
inline Array<Point *> * (*List37::ptr::ToArray)(List37 * self) = (Array<Point *> * (*)(List37 * self)) 0x6094b0;
inline bool (*List37::ptr::_Equals23)(List37 * self, Point * arg1, Point * arg2) = (bool (*)(List37 * self, Point * arg1, Point * arg2)) 0x0;
inline int (*List37::ptr::RemoveEach20)(List37 * self, Point * value) = (int (*)(List37 * self, Point * value)) 0x609580;
inline bool (*List37::ptr::_IsEmpty)() = (bool (*)()) 0x0;
inline Node54 * (*List37::ptr::_FirstNode)() = (Node54 * (*)()) 0x0;
inline void (*List37::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List37::ptr::CSTR_List37)(List37 * self) = (void (*)(List37 * self)) 0x6092b0;
#endif

#ifdef __linux__

inline List37 * (*List37::ptr::_New)() = (List37 * (*)()) 0x81aff30;
inline Node54 * (*List37::ptr::AddLast37)(List37 * self, Point * data) = (Node54 * (*)(List37 * self, Point * data)) 0x80b9cf0;
inline List37 * (*List37::ptr::_new2)(List37 * self, Array<Point *> * arg1) = (List37 * (*)(List37 * self, Array<Point *> * arg1)) 0x0;
inline int (*List37::ptr::_Clear)() = (int (*)()) 0x8094f50;
inline int (*List37::ptr::_Count)() = (int (*)()) 0x8074430;
inline Point * (*List37::ptr::_RemoveFirst)() = (Point * (*)()) 0x8074450;
inline Enumerator28 * (*List37::ptr::ObjectEnumerator)(List37 * self) = (Enumerator28 * (*)(List37 * self)) 0x80bb0a0;
inline Array<Point *> * (*List37::ptr::ToArray)(List37 * self) = (Array<Point *> * (*)(List37 * self)) 0x80c0310;
inline bool (*List37::ptr::_Equals23)(List37 * self, Point * arg1, Point * arg2) = (bool (*)(List37 * self, Point * arg1, Point * arg2)) 0x8074490;
inline int (*List37::ptr::RemoveEach20)(List37 * self, Point * value) = (int (*)(List37 * self, Point * value)) 0x80744a0;
inline bool (*List37::ptr::_IsEmpty)() = (bool (*)()) 0x8074500;
inline Node54 * (*List37::ptr::_FirstNode)() = (Node54 * (*)()) 0x8074510;
inline void (*List37::ptr::_mark)() = (void (*)()) 0x8090150;
inline void (*List37::ptr::CSTR_List37)(List37 * self) = (void (*)(List37 * self)) 0x81b0250;
#endif
#endif
