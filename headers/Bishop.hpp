// Generated automatically. Do not edit!
#ifndef _Bishop_
#define _Bishop_
class Point;
#include "Enemy.hpp"

class Bishop : public Enemy  {
public:

    // Wrappers
    inline Bishop * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline Bishop * _new2() { return ptr::_new2(); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Bishop * (*New)(Bishop * self, int xVal, int yVal, int l);
        static Bishop * (*_new2)();
        static Point * (*GetMovementDirection)(Bishop * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Bishop * (*Bishop::ptr::New)(Bishop * self, int xVal, int yVal, int l) = (Bishop * (*)(Bishop * self, int xVal, int yVal, int l)) 0x656750;
inline Bishop * (*Bishop::ptr::_new2)() = (Bishop * (*)()) 0x0;
inline Point * (*Bishop::ptr::GetMovementDirection)(Bishop * self) = (Point * (*)(Bishop * self)) 0x6569c0;
inline void (*Bishop::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Bishop * (*Bishop::ptr::New)(Bishop * self, int xVal, int yVal, int l) = (Bishop * (*)(Bishop * self, int xVal, int yVal, int l)) 0x81c8c00;
inline Bishop * (*Bishop::ptr::_new2)() = (Bishop * (*)()) 0x81c8de0;
inline Point * (*Bishop::ptr::GetMovementDirection)(Bishop * self) = (Point * (*)(Bishop * self)) 0x81b0680;
inline void (*Bishop::ptr::_mark)() = (void (*)()) 0x80b0250;
#endif
#endif
