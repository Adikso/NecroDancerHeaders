// Generated automatically. Do not edit!
#ifndef _List4_
#define _List4_
template<class T> class Array;
class Node8;
class SubtitleData;
#include "Object.hpp"

class List4 : public Object  {
public:
    Node8 * _head;

    // Wrappers
    List4() {
        ptr::CSTR_List4(this);
    }

    inline List4 * _New() { return ptr::_New(); }
    inline virtual Node8 * AddLast4(SubtitleData * data) { return ptr::AddLast4(this, data); }
    inline List4 * _new2(Array<SubtitleData *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual int Count() { return ptr::_Count(); }
    inline virtual SubtitleData * First() { return ptr::_First(); }
    inline virtual SubtitleData * RemoveFirst() { return ptr::_RemoveFirst(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List4 * (*_New)();
        static Node8 * (*AddLast4)(List4 * self, SubtitleData * data);
        static List4 * (*_new2)(List4 * self, Array<SubtitleData *> * arg1);
        static int (*_Count)();
        static SubtitleData * (*_First)();
        static SubtitleData * (*_RemoveFirst)();
        static void (*_mark)();
        static void (*CSTR_List4)(List4 * self);
    };
};

#ifdef _WIN32

inline List4 * (*List4::ptr::_New)() = (List4 * (*)()) 0x0;
inline Node8 * (*List4::ptr::AddLast4)(List4 * self, SubtitleData * data) = (Node8 * (*)(List4 * self, SubtitleData * data)) 0x557380;
inline List4 * (*List4::ptr::_new2)(List4 * self, Array<SubtitleData *> * arg1) = (List4 * (*)(List4 * self, Array<SubtitleData *> * arg1)) 0x0;
inline int (*List4::ptr::_Count)() = (int (*)()) 0x0;
inline SubtitleData * (*List4::ptr::_First)() = (SubtitleData * (*)()) 0x0;
inline SubtitleData * (*List4::ptr::_RemoveFirst)() = (SubtitleData * (*)()) 0x0;
inline void (*List4::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List4::ptr::CSTR_List4)(List4 * self) = (void (*)(List4 * self)) 0x5572b0;
#endif

#ifdef __linux__

inline List4 * (*List4::ptr::_New)() = (List4 * (*)()) 0x8150ff0;
inline Node8 * (*List4::ptr::AddLast4)(List4 * self, SubtitleData * data) = (Node8 * (*)(List4 * self, SubtitleData * data)) 0x80b66b0;
inline List4 * (*List4::ptr::_new2)(List4 * self, Array<SubtitleData *> * arg1) = (List4 * (*)(List4 * self, Array<SubtitleData *> * arg1)) 0x0;
inline int (*List4::ptr::_Count)() = (int (*)()) 0x806f6d0;
inline SubtitleData * (*List4::ptr::_First)() = (SubtitleData * (*)()) 0x806f6f0;
inline SubtitleData * (*List4::ptr::_RemoveFirst)() = (SubtitleData * (*)()) 0x806f710;
inline void (*List4::ptr::_mark)() = (void (*)()) 0x8087190;
inline void (*List4::ptr::CSTR_List4)(List4 * self) = (void (*)(List4 * self)) 0x8151310;
#endif
#endif
