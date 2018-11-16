// Generated automatically. Do not edit!
#ifndef _GuiContainer_
#define _GuiContainer_
#include "Object.hpp"

class GuiContainer : public Object  {
public:

    // Wrappers
    inline GuiContainer * _New() { return ptr::_New(); }
    inline virtual void GUICallback(int index, bool left) { ptr::GUICallback(this, index, left); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static GuiContainer * (*_New)();
        static void (*GUICallback)(GuiContainer * self, int index, bool left);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline GuiContainer * (*GuiContainer::ptr::_New)() = (GuiContainer * (*)()) 0x0;
inline void (*GuiContainer::ptr::GUICallback)(GuiContainer * self, int index, bool left) = (void (*)(GuiContainer * self, int index, bool left)) 0x403c10;
inline void (*GuiContainer::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline GuiContainer * (*GuiContainer::ptr::_New)() = (GuiContainer * (*)()) 0x811af90;
inline void (*GuiContainer::ptr::GUICallback)(GuiContainer * self, int index, bool left) = (void (*)(GuiContainer * self, int index, bool left)) 0x806d990;
inline void (*GuiContainer::ptr::_mark)() = (void (*)()) 0x806d9a0;
#endif
#endif
