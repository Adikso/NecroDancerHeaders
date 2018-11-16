// Generated automatically. Do not edit!
#ifndef _ShopkeeperGhost_
#define _ShopkeeperGhost_
#include "Enemy.hpp"

class ShopkeeperGhost : public Enemy  {
public:
    bool soundPlaying;

    // Wrappers
    ShopkeeperGhost(int xVal, int yVal, int l) {
        ptr::CSTR_ShopkeeperGhost(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline ShopkeeperGhost * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline ShopkeeperGhost * _new2() { return ptr::_new2(); }
    inline virtual float FindVolume() { return ptr::FindVolume(this); }
    inline virtual float FindPan() { return ptr::FindPan(this); }
    inline void Update() { ptr::Update(this); }
    inline void MoveSucceed(bool hitPlayer, bool moveDelayed) { ptr::MoveSucceed(this, hitPlayer, moveDelayed); }
    inline bool IsVisible() { return ptr::IsVisible(this); }
    inline void Render() { ptr::Render(this); }
    inline void Die() { ptr::Die(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static ShopkeeperGhost * (*New)(ShopkeeperGhost * self, int xVal, int yVal, int l);
        static ShopkeeperGhost * (*_new2)();
        static float (*FindVolume)(ShopkeeperGhost * self);
        static float (*FindPan)(ShopkeeperGhost * self);
        static void (*Update)(ShopkeeperGhost * self);
        static void (*MoveSucceed)(ShopkeeperGhost * self, bool hitPlayer, bool moveDelayed);
        static bool (*IsVisible)(ShopkeeperGhost * self);
        static void (*Render)(ShopkeeperGhost * self);
        static void (*Die)(ShopkeeperGhost * self);
        static void (*_mark)();
        static void (*CSTR_ShopkeeperGhost)(ShopkeeperGhost * self);
    };
};

#ifdef _WIN32

inline ShopkeeperGhost * (*ShopkeeperGhost::ptr::New)(ShopkeeperGhost * self, int xVal, int yVal, int l) = (ShopkeeperGhost * (*)(ShopkeeperGhost * self, int xVal, int yVal, int l)) 0x6376d0;
inline ShopkeeperGhost * (*ShopkeeperGhost::ptr::_new2)() = (ShopkeeperGhost * (*)()) 0x0;
inline float (*ShopkeeperGhost::ptr::FindVolume)(ShopkeeperGhost * self) = (float (*)(ShopkeeperGhost * self)) 0x6378d0;
inline float (*ShopkeeperGhost::ptr::FindPan)(ShopkeeperGhost * self) = (float (*)(ShopkeeperGhost * self)) 0x6379e0;
inline void (*ShopkeeperGhost::ptr::Update)(ShopkeeperGhost * self) = (void (*)(ShopkeeperGhost * self)) 0x637a50;
inline void (*ShopkeeperGhost::ptr::MoveSucceed)(ShopkeeperGhost * self, bool hitPlayer, bool moveDelayed) = (void (*)(ShopkeeperGhost * self, bool hitPlayer, bool moveDelayed)) 0x637c40;
inline bool (*ShopkeeperGhost::ptr::IsVisible)(ShopkeeperGhost * self) = (bool (*)(ShopkeeperGhost * self)) 0x5bd390;
inline void (*ShopkeeperGhost::ptr::Render)(ShopkeeperGhost * self) = (void (*)(ShopkeeperGhost * self)) 0x637db0;
inline void (*ShopkeeperGhost::ptr::Die)(ShopkeeperGhost * self) = (void (*)(ShopkeeperGhost * self)) 0x637dc0;
inline void (*ShopkeeperGhost::ptr::_mark)() = (void (*)()) 0x0;
inline void (*ShopkeeperGhost::ptr::CSTR_ShopkeeperGhost)(ShopkeeperGhost * self) = (void (*)(ShopkeeperGhost * self)) 0x637670;
#endif

#ifdef __linux__

inline ShopkeeperGhost * (*ShopkeeperGhost::ptr::New)(ShopkeeperGhost * self, int xVal, int yVal, int l) = (ShopkeeperGhost * (*)(ShopkeeperGhost * self, int xVal, int yVal, int l)) 0x81be4f0;
inline ShopkeeperGhost * (*ShopkeeperGhost::ptr::_new2)() = (ShopkeeperGhost * (*)()) 0x81be700;
inline float (*ShopkeeperGhost::ptr::FindVolume)(ShopkeeperGhost * self) = (float (*)(ShopkeeperGhost * self)) 0x81096e0;
inline float (*ShopkeeperGhost::ptr::FindPan)(ShopkeeperGhost * self) = (float (*)(ShopkeeperGhost * self)) 0x80964d0;
inline void (*ShopkeeperGhost::ptr::Update)(ShopkeeperGhost * self) = (void (*)(ShopkeeperGhost * self)) 0x8383380;
inline void (*ShopkeeperGhost::ptr::MoveSucceed)(ShopkeeperGhost * self, bool hitPlayer, bool moveDelayed) = (void (*)(ShopkeeperGhost * self, bool hitPlayer, bool moveDelayed)) 0x8311ab0;
inline bool (*ShopkeeperGhost::ptr::IsVisible)(ShopkeeperGhost * self) = (bool (*)(ShopkeeperGhost * self)) 0x8075dd0;
inline void (*ShopkeeperGhost::ptr::Render)(ShopkeeperGhost * self) = (void (*)(ShopkeeperGhost * self)) 0x830c260;
inline void (*ShopkeeperGhost::ptr::Die)(ShopkeeperGhost * self) = (void (*)(ShopkeeperGhost * self)) 0x83b64c0;
inline void (*ShopkeeperGhost::ptr::_mark)() = (void (*)()) 0x80b0830;
inline void (*ShopkeeperGhost::ptr::CSTR_ShopkeeperGhost)(ShopkeeperGhost * self) = (void (*)(ShopkeeperGhost * self)) 0x81be4c0;
#endif
#endif
