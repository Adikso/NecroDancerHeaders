// Generated automatically. Do not edit!
#ifndef _NecroDancerGame_
#define _NecroDancerGame_
class Image;
#include "App.hpp"

class NecroDancerGame : public App  {
public:
    static int * lastViewMultiplier;
    static int * lastDeviceHeight;
    static int * lastDeviceWidth;
    static Image * * textFont;

    // Wrappers
    inline NecroDancerGame * _New() { return ptr::_New(); }
    inline static void UpdateScreenSize(bool force) { ptr::UpdateScreenSize(force); }
    inline int OnCreate() { return ptr::OnCreate(this); }
    inline int OnUpdate() { return ptr::OnUpdate(this); }
    inline int OnRender() { return ptr::OnRender(this); }
    inline int OnSuspend() { return ptr::OnSuspend(this); }
    inline int OnResume() { return ptr::OnResume(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static NecroDancerGame * (*_New)();
        static void (*UpdateScreenSize)(bool force);
        static int (*OnCreate)(NecroDancerGame * self);
        static int (*OnUpdate)(NecroDancerGame * self);
        static int (*OnRender)(NecroDancerGame * self);
        static int (*OnSuspend)(NecroDancerGame * self);
        static int (*OnResume)(NecroDancerGame * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32
inline int * NecroDancerGame::lastViewMultiplier = (int*) 0x835c80;
inline int * NecroDancerGame::lastDeviceHeight = (int*) 0x835c7c;
inline int * NecroDancerGame::lastDeviceWidth = (int*) 0x835c78;
inline Image * * NecroDancerGame::textFont = (Image* *) 0x835c38;

inline NecroDancerGame * (*NecroDancerGame::ptr::_New)() = (NecroDancerGame * (*)()) 0x0;
inline void (*NecroDancerGame::ptr::UpdateScreenSize)(bool force) = (void (*)(bool force)) 0x41d030;
inline int (*NecroDancerGame::ptr::OnCreate)(NecroDancerGame * self) = (int (*)(NecroDancerGame * self)) 0x41d380;
inline int (*NecroDancerGame::ptr::OnUpdate)(NecroDancerGame * self) = (int (*)(NecroDancerGame * self)) 0x41dbe0;
inline int (*NecroDancerGame::ptr::OnRender)(NecroDancerGame * self) = (int (*)(NecroDancerGame * self)) 0x41dcd0;
inline int (*NecroDancerGame::ptr::OnSuspend)(NecroDancerGame * self) = (int (*)(NecroDancerGame * self)) 0x41ddf0;
inline int (*NecroDancerGame::ptr::OnResume)(NecroDancerGame * self) = (int (*)(NecroDancerGame * self)) 0x41de10;
inline void (*NecroDancerGame::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__
inline int * NecroDancerGame::lastViewMultiplier = (int*) 0x856abd0;
inline int * NecroDancerGame::lastDeviceHeight = (int*) 0x856abcc;
inline int * NecroDancerGame::lastDeviceWidth = (int*) 0x856abc8;
inline Image * * NecroDancerGame::textFont = (Image* *) 0x856abc4;

inline NecroDancerGame * (*NecroDancerGame::ptr::_New)() = (NecroDancerGame * (*)()) 0x80fddd0;
inline void (*NecroDancerGame::ptr::UpdateScreenSize)(bool force) = (void (*)(bool force)) 0x8247450;
inline int (*NecroDancerGame::ptr::OnCreate)(NecroDancerGame * self) = (int (*)(NecroDancerGame * self)) 0x83e0f00;
inline int (*NecroDancerGame::ptr::OnUpdate)(NecroDancerGame * self) = (int (*)(NecroDancerGame * self)) 0x8367560;
inline int (*NecroDancerGame::ptr::OnRender)(NecroDancerGame * self) = (int (*)(NecroDancerGame * self)) 0x8247810;
inline int (*NecroDancerGame::ptr::OnSuspend)(NecroDancerGame * self) = (int (*)(NecroDancerGame * self)) 0x806d2b0;
inline int (*NecroDancerGame::ptr::OnResume)(NecroDancerGame * self) = (int (*)(NecroDancerGame * self)) 0x82473e0;
inline void (*NecroDancerGame::ptr::_mark)() = (void (*)()) 0x806d2d0;
#endif
#endif
