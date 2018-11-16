// Generated automatically. Do not edit!
#ifndef _IceSpirit_
#define _IceSpirit_
#include "FamiliarFixed.hpp"

class IceSpirit : public FamiliarFixed  {
public:

    // Wrappers
    inline IceSpirit * New(int x_, int y_) { return ptr::New(this, x_, y_); }
    inline IceSpirit * _new2() { return ptr::_new2(); }
    inline bool ApplyEffect(int dir) { return ptr::ApplyEffect(this, dir); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static IceSpirit * (*New)(IceSpirit * self, int x_, int y_);
        static IceSpirit * (*_new2)();
        static bool (*ApplyEffect)(IceSpirit * self, int dir);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline IceSpirit * (*IceSpirit::ptr::New)(IceSpirit * self, int x_, int y_) = (IceSpirit * (*)(IceSpirit * self, int x_, int y_)) 0x602670;
inline IceSpirit * (*IceSpirit::ptr::_new2)() = (IceSpirit * (*)()) 0x0;
inline bool (*IceSpirit::ptr::ApplyEffect)(IceSpirit * self, int dir) = (bool (*)(IceSpirit * self, int dir)) 0x6027e0;
inline void (*IceSpirit::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline IceSpirit * (*IceSpirit::ptr::New)(IceSpirit * self, int x_, int y_) = (IceSpirit * (*)(IceSpirit * self, int x_, int y_)) 0x81a7160;
inline IceSpirit * (*IceSpirit::ptr::_new2)() = (IceSpirit * (*)()) 0x81a72f0;
inline bool (*IceSpirit::ptr::ApplyEffect)(IceSpirit * self, int dir) = (bool (*)(IceSpirit * self, int dir)) 0x8319bc0;
inline void (*IceSpirit::ptr::_mark)() = (void (*)()) 0x80a5690;
#endif
#endif
