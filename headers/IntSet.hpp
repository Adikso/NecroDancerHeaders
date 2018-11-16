// Generated automatically. Do not edit!
#ifndef _IntSet_
#define _IntSet_
#include "Set.hpp"

class IntSet : public Set  {
public:

    // Wrappers
    inline IntSet * New() { return ptr::New(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static IntSet * (*New)(IntSet * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline IntSet * (*IntSet::ptr::New)(IntSet * self) = (IntSet * (*)(IntSet * self)) 0x57e070;
inline void (*IntSet::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline IntSet * (*IntSet::ptr::New)(IntSet * self) = (IntSet * (*)(IntSet * self)) 0x8158120;
inline void (*IntSet::ptr::_mark)() = (void (*)()) 0x8087780;
#endif
#endif
