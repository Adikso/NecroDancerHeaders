// Generated automatically. Do not edit!
#ifndef _StringList_
#define _StringList_
template<class T> class Array;
class String;
#include "List11.hpp"

class StringList : public List11  {
public:

    // Wrappers
    inline StringList * _New(Array<String> * arg1) { return ptr::_New(this, arg1); }
    inline StringList * _new2() { return ptr::_new2(); }
    inline bool _Equals8(String * arg1, String * arg2) { return ptr::_Equals8(this, arg1, arg2); }
    inline int _Compare(String * arg1, String * arg2) { return ptr::_Compare(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static StringList * (*_New)(StringList * self, Array<String> * arg1);
        static StringList * (*_new2)();
        static bool (*_Equals8)(StringList * self, String * arg1, String * arg2);
        static int (*_Compare)(StringList * self, String * arg1, String * arg2);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline StringList * (*StringList::ptr::_New)(StringList * self, Array<String> * arg1) = (StringList * (*)(StringList * self, Array<String> * arg1)) 0x0;
inline StringList * (*StringList::ptr::_new2)() = (StringList * (*)()) 0x0;
inline bool (*StringList::ptr::_Equals8)(StringList * self, String * arg1, String * arg2) = (bool (*)(StringList * self, String * arg1, String * arg2)) 0x0;
inline int (*StringList::ptr::_Compare)(StringList * self, String * arg1, String * arg2) = (int (*)(StringList * self, String * arg1, String * arg2)) 0x0;
inline void (*StringList::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline StringList * (*StringList::ptr::_New)(StringList * self, Array<String> * arg1) = (StringList * (*)(StringList * self, Array<String> * arg1)) 0x0;
inline StringList * (*StringList::ptr::_new2)() = (StringList * (*)()) 0x0;
inline bool (*StringList::ptr::_Equals8)(StringList * self, String * arg1, String * arg2) = (bool (*)(StringList * self, String * arg1, String * arg2)) 0x80c2440;
inline int (*StringList::ptr::_Compare)(StringList * self, String * arg1, String * arg2) = (int (*)(StringList * self, String * arg1, String * arg2)) 0x80967c0;
inline void (*StringList::ptr::_mark)() = (void (*)()) 0x8090830;
#endif
#endif
