// Generated automatically. Do not edit!
#ifndef _IntMap_
#define _IntMap_
#include "Map5.hpp"

class IntMap : public Map5  {
public:

    // Wrappers
    inline IntMap * _New() { return ptr::_New(); }
    inline int Compare2(int lhs, int rhs) { return ptr::Compare2(this, lhs, rhs); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static IntMap * (*_New)();
        static int (*Compare2)(IntMap * self, int lhs, int rhs);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline IntMap * (*IntMap::ptr::_New)() = (IntMap * (*)()) 0x0;
inline int (*IntMap::ptr::Compare2)(IntMap * self, int lhs, int rhs) = (int (*)(IntMap * self, int lhs, int rhs)) 0x576730;
inline void (*IntMap::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline IntMap * (*IntMap::ptr::_New)() = (IntMap * (*)()) 0x8156cb0;
inline int (*IntMap::ptr::Compare2)(IntMap * self, int lhs, int rhs) = (int (*)(IntMap * self, int lhs, int rhs)) 0x806fba0;
inline void (*IntMap::ptr::_mark)() = (void (*)()) 0x8082880;
#endif
#endif
