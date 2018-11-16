// Generated automatically. Do not edit!
#ifndef _App_
#define _App_
#include "Object.hpp"

class App : public Object  {
public:

    // Wrappers
    inline App * New() { return ptr::New(this); }
    inline virtual int OnCreate() { return ptr::_OnCreate(); }
    inline virtual int OnSuspend() { return ptr::_OnSuspend(); }
    inline virtual int OnResume() { return ptr::_OnResume(); }
    inline virtual int OnUpdate() { return ptr::_OnUpdate(); }
    inline virtual int OnLoading() { return ptr::_OnLoading(); }
    inline virtual int OnRender() { return ptr::_OnRender(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static App * (*New)(App * self);
        static int (*_OnCreate)();
        static int (*_OnSuspend)();
        static int (*_OnResume)();
        static int (*_OnUpdate)();
        static int (*_OnLoading)();
        static int (*_OnRender)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline App * (*App::ptr::New)(App * self) = (App * (*)(App * self)) 0x41ce90;
inline int (*App::ptr::_OnCreate)() = (int (*)()) 0x0;
inline int (*App::ptr::_OnSuspend)() = (int (*)()) 0x0;
inline int (*App::ptr::_OnResume)() = (int (*)()) 0x0;
inline int (*App::ptr::_OnUpdate)() = (int (*)()) 0x0;
inline int (*App::ptr::_OnLoading)() = (int (*)()) 0x0;
inline int (*App::ptr::_OnRender)() = (int (*)()) 0x0;
inline void (*App::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline App * (*App::ptr::New)(App * self) = (App * (*)(App * self)) 0x80fdd20;
inline int (*App::ptr::_OnCreate)() = (int (*)()) 0x806d240;
inline int (*App::ptr::_OnSuspend)() = (int (*)()) 0x806d260;
inline int (*App::ptr::_OnResume)() = (int (*)()) 0x806d270;
inline int (*App::ptr::_OnUpdate)() = (int (*)()) 0x806d250;
inline int (*App::ptr::_OnLoading)() = (int (*)()) 0x806d290;
inline int (*App::ptr::_OnRender)() = (int (*)()) 0x806d280;
inline void (*App::ptr::_mark)() = (void (*)()) 0x806d2a0;
#endif
#endif
