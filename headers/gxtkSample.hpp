// Generated automatically. Do not edit!
#ifndef _gxtkSample_
#define _gxtkSample_
#include "Object.hpp"

class gxtkSample : public Object  {
public:

    // Wrappers
    inline virtual int Discard() { return ptr::_Discard(); }

    class ptr {
    public:
        static int (*_Discard)();
    };
};

#ifdef _WIN32

int (*gxtkSample::ptr::_Discard)() = (int (*)()) 0x0;
#endif

#ifdef __linux__

int (*gxtkSample::ptr::_Discard)() = (int (*)()) 0x83020a0;
#endif
#endif
