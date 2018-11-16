// Generated automatically. Do not edit!
#ifndef _List7_
#define _List7_
template<class T> class Array;
class Enumerator4;
class FamiliarFixed;
class Node13;
#include "Object.hpp"

class List7 : public Object  {
public:
    Node13 * _head;

    // Wrappers
    List7() {
        ptr::CSTR_List7(this);
    }

    inline List7 * _New() { return ptr::_New(); }
    inline virtual Node13 * AddLast7(FamiliarFixed * data) { return ptr::AddLast7(this, data); }
    inline List7 * _new2(Array<FamiliarFixed *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator4 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual bool Equals4(FamiliarFixed * arg1, FamiliarFixed * arg2) { return ptr::_Equals4(this, arg1, arg2); }
    inline virtual int RemoveEach4(FamiliarFixed * arg1) { return ptr::_RemoveEach4(this, arg1); }
    inline virtual int Clear() { return ptr::_Clear(); }
    inline virtual int Remove4(FamiliarFixed * arg1) { return ptr::_Remove4(this, arg1); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List7 * (*_New)();
        static Node13 * (*AddLast7)(List7 * self, FamiliarFixed * data);
        static List7 * (*_new2)(List7 * self, Array<FamiliarFixed *> * arg1);
        static Enumerator4 * (*ObjectEnumerator)(List7 * self);
        static bool (*_Equals4)(List7 * self, FamiliarFixed * arg1, FamiliarFixed * arg2);
        static int (*_RemoveEach4)(List7 * self, FamiliarFixed * arg1);
        static int (*_Clear)();
        static int (*_Remove4)(List7 * self, FamiliarFixed * arg1);
        static void (*_mark)();
        static void (*CSTR_List7)(List7 * self);
    };
};

#ifdef _WIN32

inline List7 * (*List7::ptr::_New)() = (List7 * (*)()) 0x0;
inline Node13 * (*List7::ptr::AddLast7)(List7 * self, FamiliarFixed * data) = (Node13 * (*)(List7 * self, FamiliarFixed * data)) 0x57f880;
inline List7 * (*List7::ptr::_new2)(List7 * self, Array<FamiliarFixed *> * arg1) = (List7 * (*)(List7 * self, Array<FamiliarFixed *> * arg1)) 0x0;
inline Enumerator4 * (*List7::ptr::ObjectEnumerator)(List7 * self) = (Enumerator4 * (*)(List7 * self)) 0x57f920;
inline bool (*List7::ptr::_Equals4)(List7 * self, FamiliarFixed * arg1, FamiliarFixed * arg2) = (bool (*)(List7 * self, FamiliarFixed * arg1, FamiliarFixed * arg2)) 0x0;
inline int (*List7::ptr::_RemoveEach4)(List7 * self, FamiliarFixed * arg1) = (int (*)(List7 * self, FamiliarFixed * arg1)) 0x0;
inline int (*List7::ptr::_Clear)() = (int (*)()) 0x0;
inline int (*List7::ptr::_Remove4)(List7 * self, FamiliarFixed * arg1) = (int (*)(List7 * self, FamiliarFixed * arg1)) 0x0;
inline void (*List7::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List7::ptr::CSTR_List7)(List7 * self) = (void (*)(List7 * self)) 0x57f7b0;
#endif

#ifdef __linux__

inline List7 * (*List7::ptr::_New)() = (List7 * (*)()) 0x8159400;
inline Node13 * (*List7::ptr::AddLast7)(List7 * self, FamiliarFixed * data) = (Node13 * (*)(List7 * self, FamiliarFixed * data)) 0x8159640;
inline List7 * (*List7::ptr::_new2)(List7 * self, Array<FamiliarFixed *> * arg1) = (List7 * (*)(List7 * self, Array<FamiliarFixed *> * arg1)) 0x0;
inline Enumerator4 * (*List7::ptr::ObjectEnumerator)(List7 * self) = (Enumerator4 * (*)(List7 * self)) 0x80b6fd0;
inline bool (*List7::ptr::_Equals4)(List7 * self, FamiliarFixed * arg1, FamiliarFixed * arg2) = (bool (*)(List7 * self, FamiliarFixed * arg1, FamiliarFixed * arg2)) 0x80700b0;
inline int (*List7::ptr::_RemoveEach4)(List7 * self, FamiliarFixed * arg1) = (int (*)(List7 * self, FamiliarFixed * arg1)) 0x80700c0;
inline int (*List7::ptr::_Clear)() = (int (*)()) 0x8094560;
inline int (*List7::ptr::_Remove4)(List7 * self, FamiliarFixed * arg1) = (int (*)(List7 * self, FamiliarFixed * arg1)) 0x8070120;
inline void (*List7::ptr::_mark)() = (void (*)()) 0x808ad10;
inline void (*List7::ptr::CSTR_List7)(List7 * self) = (void (*)(List7 * self)) 0x8159780;
#endif
#endif
