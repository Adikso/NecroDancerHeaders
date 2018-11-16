// Generated automatically. Do not edit!
#ifndef _Controller_
#define _Controller_
#include "GuiContainer.hpp"

class Controller : public GuiContainer  {
public:
    Controller * parent;
    static Controller * * currentController;

    // Wrappers
    inline Controller * New() { return ptr::New(this); }
    inline virtual void RegainFocus() { ptr::_RegainFocus(); }
    inline static void GiveFocus(Controller * c) { ptr::GiveFocus(c); }
    inline virtual void Update() { ptr::_Update(); }
    inline static void _UpdateCurrent() { ptr::_UpdateCurrent(); }
    inline virtual void Render() { ptr::_Render(); }
    inline static void _UpdateRender() { ptr::_UpdateRender(); }
    inline virtual void Suspend() { ptr::_Suspend(); }
    inline virtual void Resume() { ptr::_Resume(); }
    inline virtual void Destructor() { ptr::_Destructor(); }
    inline virtual void ReleaseFocus() { ptr::ReleaseFocus(this); }
    inline virtual bool HasFocus() { return ptr::HasFocus(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Controller * (*New)(Controller * self);
        static void (*_RegainFocus)();
        static void (*GiveFocus)(Controller * c);
        static void (*_Update)();
        static void (*_UpdateCurrent)();
        static void (*_Render)();
        static void (*_UpdateRender)();
        static void (*_Suspend)();
        static void (*_Resume)();
        static void (*_Destructor)();
        static void (*ReleaseFocus)(Controller * self);
        static bool (*HasFocus)(Controller * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32
inline Controller * * Controller::currentController = (Controller* *) 0x835c3c;

inline Controller * (*Controller::ptr::New)(Controller * self) = (Controller * (*)(Controller * self)) 0x448f40;
inline void (*Controller::ptr::_RegainFocus)() = (void (*)()) 0x0;
inline void (*Controller::ptr::GiveFocus)(Controller * c) = (void (*)(Controller * c)) 0x449000;
inline void (*Controller::ptr::_Update)() = (void (*)()) 0x0;
inline void (*Controller::ptr::_UpdateCurrent)() = (void (*)()) 0x0;
inline void (*Controller::ptr::_Render)() = (void (*)()) 0x0;
inline void (*Controller::ptr::_UpdateRender)() = (void (*)()) 0x0;
inline void (*Controller::ptr::_Suspend)() = (void (*)()) 0x0;
inline void (*Controller::ptr::_Resume)() = (void (*)()) 0x0;
inline void (*Controller::ptr::_Destructor)() = (void (*)()) 0x0;
inline void (*Controller::ptr::ReleaseFocus)(Controller * self) = (void (*)(Controller * self)) 0x4490c0;
inline bool (*Controller::ptr::HasFocus)(Controller * self) = (bool (*)(Controller * self)) 0x449130;
inline void (*Controller::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__
inline Controller * * Controller::currentController = (Controller* *) 0x856ab18;

inline Controller * (*Controller::ptr::New)(Controller * self) = (Controller * (*)(Controller * self)) 0x811afc0;
inline void (*Controller::ptr::_RegainFocus)() = (void (*)()) 0x0;
inline void (*Controller::ptr::GiveFocus)(Controller * c) = (void (*)(Controller * c)) 0x811b070;
inline void (*Controller::ptr::_Update)() = (void (*)()) 0x0;
inline void (*Controller::ptr::_UpdateCurrent)() = (void (*)()) 0x811b120;
inline void (*Controller::ptr::_Render)() = (void (*)()) 0x0;
inline void (*Controller::ptr::_UpdateRender)() = (void (*)()) 0x811b140;
inline void (*Controller::ptr::_Suspend)() = (void (*)()) 0x806d9b0;
inline void (*Controller::ptr::_Resume)() = (void (*)()) 0x806d9c0;
inline void (*Controller::ptr::_Destructor)() = (void (*)()) 0x0;
inline void (*Controller::ptr::ReleaseFocus)(Controller * self) = (void (*)(Controller * self)) 0x80a3d60;
inline bool (*Controller::ptr::HasFocus)(Controller * self) = (bool (*)(Controller * self)) 0x806d9d0;
inline void (*Controller::ptr::_mark)() = (void (*)()) 0x80a13c0;
#endif
#endif
