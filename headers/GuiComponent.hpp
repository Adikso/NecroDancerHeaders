// Generated automatically. Do not edit!
#ifndef _GuiComponent_
#define _GuiComponent_
#include "GuiContainer.hpp"

class GuiComponent : public GuiContainer  {
public:
    bool selected;
    bool active;

    // Wrappers
    inline GuiComponent * _New() { return ptr::_New(); }
    inline virtual void SetSelected(bool s) { ptr::SetSelected(this, s); }
    inline virtual bool Right() { return ptr::Right(this); }
    inline virtual bool Left() { return ptr::_Left(); }
    inline virtual bool IsActive() { return ptr::_IsActive(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static GuiComponent * (*_New)();
        static void (*SetSelected)(GuiComponent * self, bool s);
        static bool (*Right)(GuiComponent * self);
        static bool (*_Left)();
        static bool (*_IsActive)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline GuiComponent * (*GuiComponent::ptr::_New)() = (GuiComponent * (*)()) 0x0;
inline void (*GuiComponent::ptr::SetSelected)(GuiComponent * self, bool s) = (void (*)(GuiComponent * self, bool s)) 0x5414e0;
inline bool (*GuiComponent::ptr::Right)(GuiComponent * self) = (bool (*)(GuiComponent * self)) 0x4068b0;
inline bool (*GuiComponent::ptr::_Left)() = (bool (*)()) 0x0;
inline bool (*GuiComponent::ptr::_IsActive)() = (bool (*)()) 0x0;
inline void (*GuiComponent::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline GuiComponent * (*GuiComponent::ptr::_New)() = (GuiComponent * (*)()) 0x8145e20;
inline void (*GuiComponent::ptr::SetSelected)(GuiComponent * self, bool s) = (void (*)(GuiComponent * self, bool s)) 0x806f490;
inline bool (*GuiComponent::ptr::Right)(GuiComponent * self) = (bool (*)(GuiComponent * self)) 0x806f4a0;
inline bool (*GuiComponent::ptr::_Left)() = (bool (*)()) 0x806f4b0;
inline bool (*GuiComponent::ptr::_IsActive)() = (bool (*)()) 0x806f4c0;
inline void (*GuiComponent::ptr::_mark)() = (void (*)()) 0x806f4d0;
#endif
#endif
