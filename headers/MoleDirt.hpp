// Generated automatically. Do not edit!
#ifndef _MoleDirt_
#define _MoleDirt_
class String;
#include "Entity.hpp"

class MoleDirt : public Entity  {
public:
    bool occupied;
    bool vibrate;
    int vibrateCounter;
    float vibrateOffset;
    int preFadeCounter;
    int PREFADE_TIME;
    int fadeCounter;
    int FADE_TIME;

    // Wrappers
    MoleDirt(int xVal, int yVal) {
        ptr::CSTR_MoleDirt(this);
        ptr::New(this, xVal, yVal);
    }

    inline virtual void Unoccupy() { ptr::Unoccupy(this); }
    inline MoleDirt * New(int xVal, int yVal) { return ptr::New(this, xVal, yVal); }
    inline MoleDirt * _new2() { return ptr::_new2(); }
    inline virtual void UpdateFade() { ptr::UpdateFade(this); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline bool _Hit(String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) { return ptr::_Hit(this, arg1, arg2, arg3, arg4, arg5, arg6); }
    inline bool _CanBeDamaged(bool arg1, bool arg2) { return ptr::_CanBeDamaged(this, arg1, arg2); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static void (*Unoccupy)(MoleDirt * self);
        static MoleDirt * (*New)(MoleDirt * self, int xVal, int yVal);
        static MoleDirt * (*_new2)();
        static void (*UpdateFade)(MoleDirt * self);
        static void (*Update)(MoleDirt * self);
        static void (*Render)(MoleDirt * self);
        static bool (*_Hit)(MoleDirt * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6);
        static bool (*_CanBeDamaged)(MoleDirt * self, bool arg1, bool arg2);
        static void (*_mark)();
        static void (*CSTR_MoleDirt)(MoleDirt * self);
    };
};

#ifdef _WIN32

inline void (*MoleDirt::ptr::Unoccupy)(MoleDirt * self) = (void (*)(MoleDirt * self)) 0x642250;
inline MoleDirt * (*MoleDirt::ptr::New)(MoleDirt * self, int xVal, int yVal) = (MoleDirt * (*)(MoleDirt * self, int xVal, int yVal)) 0x642260;
inline MoleDirt * (*MoleDirt::ptr::_new2)() = (MoleDirt * (*)()) 0x0;
inline void (*MoleDirt::ptr::UpdateFade)(MoleDirt * self) = (void (*)(MoleDirt * self)) 0x642470;
inline void (*MoleDirt::ptr::Update)(MoleDirt * self) = (void (*)(MoleDirt * self)) 0x6424e0;
inline void (*MoleDirt::ptr::Render)(MoleDirt * self) = (void (*)(MoleDirt * self)) 0x642550;
inline bool (*MoleDirt::ptr::_Hit)(MoleDirt * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(MoleDirt * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x0;
inline bool (*MoleDirt::ptr::_CanBeDamaged)(MoleDirt * self, bool arg1, bool arg2) = (bool (*)(MoleDirt * self, bool arg1, bool arg2)) 0x0;
inline void (*MoleDirt::ptr::_mark)() = (void (*)()) 0x0;
inline void (*MoleDirt::ptr::CSTR_MoleDirt)(MoleDirt * self) = (void (*)(MoleDirt * self)) 0x6421b0;
#endif

#ifdef __linux__

inline void (*MoleDirt::ptr::Unoccupy)(MoleDirt * self) = (void (*)(MoleDirt * self)) 0x8076140;
inline MoleDirt * (*MoleDirt::ptr::New)(MoleDirt * self, int xVal, int yVal) = (MoleDirt * (*)(MoleDirt * self, int xVal, int yVal)) 0x81c2860;
inline MoleDirt * (*MoleDirt::ptr::_new2)() = (MoleDirt * (*)()) 0x81c2ce0;
inline void (*MoleDirt::ptr::UpdateFade)(MoleDirt * self) = (void (*)(MoleDirt * self)) 0x807f740;
inline void (*MoleDirt::ptr::Update)(MoleDirt * self) = (void (*)(MoleDirt * self)) 0x812cc40;
inline void (*MoleDirt::ptr::Render)(MoleDirt * self) = (void (*)(MoleDirt * self)) 0x8076150;
inline bool (*MoleDirt::ptr::_Hit)(MoleDirt * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6) = (bool (*)(MoleDirt * self, String * arg1, int arg2, int arg3, Entity * arg4, bool arg5, int arg6)) 0x80761f0;
inline bool (*MoleDirt::ptr::_CanBeDamaged)(MoleDirt * self, bool arg1, bool arg2) = (bool (*)(MoleDirt * self, bool arg1, bool arg2)) 0x8076200;
inline void (*MoleDirt::ptr::_mark)() = (void (*)()) 0x80a5200;
inline void (*MoleDirt::ptr::CSTR_MoleDirt)(MoleDirt * self) = (void (*)(MoleDirt * self)) 0x81c27f0;
#endif
#endif
