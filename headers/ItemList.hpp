// Generated automatically. Do not edit!
#ifndef _ItemList_
#define _ItemList_
class String;
#include "List10.hpp"

class ItemList : public List10  {
public:

    // Wrappers
    inline ItemList * _New() { return ptr::_New(); }
    inline int Compare(String * a, String * b) { return ptr::Compare(this, a, b); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static ItemList * (*_New)();
        static int (*Compare)(ItemList * self, String * a, String * b);
        static void (*_mark)();
    };
};

#ifdef _WIN32

ItemList * (*ItemList::ptr::_New)() = (ItemList * (*)()) 0x0;
int (*ItemList::ptr::Compare)(ItemList * self, String * a, String * b) = (int (*)(ItemList * self, String * a, String * b)) 0x5e1a00;
void (*ItemList::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

ItemList * (*ItemList::ptr::_New)() = (ItemList * (*)()) 0x819a880;
int (*ItemList::ptr::Compare)(ItemList * self, String * a, String * b) = (int (*)(ItemList * self, String * a, String * b)) 0x80d37d0;
void (*ItemList::ptr::_mark)() = (void (*)()) 0x8090890;
#endif
#endif
