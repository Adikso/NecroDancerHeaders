// Generated automatically. Do not edit!
#ifndef _Zap_
#define _Zap_
class Enemy;
class IntPointMap;
class Player;
#include "Object.hpp"

class Zap : public Object  {
public:
    Player * player;
    int playerX;
    int playerY;
    int electricStrength;
    int zapGeneration;
    bool open;
    IntPointMap * parents;
    int attackDir;
    static int * zapGenerationAlloc;

    // Wrappers
    Zap(Player * player_, int playerX_, int playerY_, int electricStrength_) {
        ptr::CSTR_Zap(this);
        ptr::New(this, player_, playerX_, playerY_, electricStrength_);
    }

    inline Zap * New(Player * player_, int playerX_, int playerY_, int electricStrength_) { return ptr::New(this, player_, playerX_, playerY_, electricStrength_); }
    inline Zap * _new2() { return ptr::_new2(); }
    inline virtual void Add11(Enemy * nme, int x, int y, int dir) { ptr::Add11(this, nme, x, y, dir); }
    inline virtual void Commit() { ptr::Commit(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static Zap * (*New)(Zap * self, Player * player_, int playerX_, int playerY_, int electricStrength_);
        static Zap * (*_new2)();
        static void (*Add11)(Zap * self, Enemy * nme, int x, int y, int dir);
        static void (*Commit)(Zap * self);
        static void (*mark)(Zap * self);
        static void (*CSTR_Zap)(Zap * self);
    };
};

#ifdef _WIN32
int * Zap::zapGenerationAlloc = (int*) 0x8355d0;

Zap * (*Zap::ptr::New)(Zap * self, Player * player_, int playerX_, int playerY_, int electricStrength_) = (Zap * (*)(Zap * self, Player * player_, int playerX_, int playerY_, int electricStrength_)) 0x6057c0;
Zap * (*Zap::ptr::_new2)() = (Zap * (*)()) 0x0;
void (*Zap::ptr::Add11)(Zap * self, Enemy * nme, int x, int y, int dir) = (void (*)(Zap * self, Enemy * nme, int x, int y, int dir)) 0x605840;
void (*Zap::ptr::Commit)(Zap * self) = (void (*)(Zap * self)) 0x605900;
void (*Zap::ptr::mark)(Zap * self) = (void (*)(Zap * self)) 0x6061c0;
void (*Zap::ptr::CSTR_Zap)(Zap * self) = (void (*)(Zap * self)) 0x6056d0;
#endif

#ifdef __linux__
int * Zap::zapGenerationAlloc = (int*) 0x856a3d4;

Zap * (*Zap::ptr::New)(Zap * self, Player * player_, int playerX_, int playerY_, int electricStrength_) = (Zap * (*)(Zap * self, Player * player_, int playerX_, int playerY_, int electricStrength_)) 0x81a9ba0;
Zap * (*Zap::ptr::_new2)() = (Zap * (*)()) 0x81a9c20;
void (*Zap::ptr::Add11)(Zap * self, Enemy * nme, int x, int y, int dir) = (void (*)(Zap * self, Enemy * nme, int x, int y, int dir)) 0x80b4e40;
void (*Zap::ptr::Commit)(Zap * self) = (void (*)(Zap * self)) 0x83bc330;
void (*Zap::ptr::mark)(Zap * self) = (void (*)(Zap * self)) 0x8096240;
void (*Zap::ptr::CSTR_Zap)(Zap * self) = (void (*)(Zap * self)) 0x81a9b30;
#endif
#endif
