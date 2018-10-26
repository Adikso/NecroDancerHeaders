// Generated automatically. Do not edit!
#ifndef _IntList_
#define _IntList_
template<class T> class Array;
#include "List25.hpp"

class IntList : public List25  {
public:

    // Wrappers
    inline IntList * _New(Array<int> * arg1) { return ptr::_New(this, arg1); }
    inline IntList * _new2() { return ptr::_new2(); }
    inline bool _Equals14(int arg1, int arg2) { return ptr::_Equals14(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static IntList * (*_New)(IntList * self, Array<int> * arg1);
        static IntList * (*_new2)();
        static bool (*_Equals14)(IntList * self, int arg1, int arg2);
        static void (*_mark)();
    };
};

#ifdef _WIN32

IntList * (*IntList::ptr::_New)(IntList * self, Array<int> * arg1) = (IntList * (*)(IntList * self, Array<int> * arg1)) 0x0;
IntList * (*IntList::ptr::_new2)() = (IntList * (*)()) 0x0;
bool (*IntList::ptr::_Equals14)(IntList * self, int arg1, int arg2) = (bool (*)(IntList * self, int arg1, int arg2)) 0x0;
void (*IntList::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

IntList * (*IntList::ptr::_New)(IntList * self, Array<int> * arg1) = (IntList * (*)(IntList * self, Array<int> * arg1)) 0x0;
IntList * (*IntList::ptr::_new2)() = (IntList * (*)()) 0x0;
bool (*IntList::ptr::_Equals14)(IntList * self, int arg1, int arg2) = (bool (*)(IntList * self, int arg1, int arg2)) 0x0;
void (*IntList::ptr::_mark)() = (void (*)()) 0x8090050;
#endif
#endif
