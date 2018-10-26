// Generated automatically. Do not edit!
#ifndef _Bomb_
#define _Bomb_
class List39;
class Player;
class Sprite;
class String;
#include "Item.hpp"

class Bomb : public Item  {
public:
    Player * player;
    bool isBig;
    String * damageSource;
    int beatsUntilExplosion;
    Sprite * explosionImg;
    bool exploded;
    bool allowSelfHits;
    int bombDamage;
    int explosionFrameCounter;
    int explosionFrame;
    static int * curExplosionKills;
    static List39 * * bombList;

    // Wrappers
    Bomb(int xVal, int yVal, Player * dropper, bool playLitSound, bool big, String * dmgSource) {
        ptr::CSTR_Bomb(this);
        ptr::New(this, xVal, yVal, dropper, playLitSound, big, dmgSource);
    }

    inline Bomb * New(int xVal, int yVal, Player * dropper, bool playLitSound, bool big, String * dmgSource) { return ptr::New(this, xVal, yVal, dropper, playLitSound, big, dmgSource); }
    inline Bomb * _new2() { return ptr::_new2(); }
    inline static Bomb * GetUnexplodedBombAt(int xVal, int yVal) { return ptr::GetUnexplodedBombAt(xVal, yVal); }
    inline static Bomb * GetHittableBombAt(int xVal, int yVal) { return ptr::GetHittableBombAt(xVal, yVal); }
    inline virtual void JumpTo(int xVal, int yVal) { ptr::JumpTo(this, xVal, yVal); }
    inline virtual void HitInDirection(int dir, int maxSteps) { ptr::HitInDirection(this, dir, maxSteps); }
    inline static void GenerateExplosionDamage(int tmpX, int tmpY, String * source, int dam, Player * p, bool big, bool allowSelfHits) { ptr::GenerateExplosionDamage(tmpX, tmpY, source, dam, p, big, allowSelfHits); }
    inline virtual void Explode() { ptr::Explode(this); }
    inline void Move() { ptr::Move(this); }
    inline static void _MoveAll() { ptr::_MoveAll(); }
    inline void _Transmute() { ptr::_Transmute(); }
    inline void Die() { ptr::Die(this); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline bool IsVisible() { return ptr::IsVisible(this); }
    inline static void KickBombAtPlayer(int x, int y) { ptr::KickBombAtPlayer(x, y); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static Bomb * (*New)(Bomb * self, int xVal, int yVal, Player * dropper, bool playLitSound, bool big, String * dmgSource);
        static Bomb * (*_new2)();
        static Bomb * (*GetUnexplodedBombAt)(int xVal, int yVal);
        static Bomb * (*GetHittableBombAt)(int xVal, int yVal);
        static void (*JumpTo)(Bomb * self, int xVal, int yVal);
        static void (*HitInDirection)(Bomb * self, int dir, int maxSteps);
        static void (*GenerateExplosionDamage)(int tmpX, int tmpY, String * source, int dam, Player * p, bool big, bool allowSelfHits);
        static void (*Explode)(Bomb * self);
        static void (*Move)(Bomb * self);
        static void (*_MoveAll)();
        static void (*_Transmute)();
        static void (*Die)(Bomb * self);
        static void (*Update)(Bomb * self);
        static void (*Render)(Bomb * self);
        static bool (*IsVisible)(Bomb * self);
        static void (*KickBombAtPlayer)(int x, int y);
        static void (*mark)(Bomb * self);
        static void (*CSTR_Bomb)(Bomb * self);
    };
};

#ifdef _WIN32
int * Bomb::curExplosionKills = (int*) 0x8356b8;
List39 * * Bomb::bombList = (List39* *) 0x8355c8;

Bomb * (*Bomb::ptr::New)(Bomb * self, int xVal, int yVal, Player * dropper, bool playLitSound, bool big, String * dmgSource) = (Bomb * (*)(Bomb * self, int xVal, int yVal, Player * dropper, bool playLitSound, bool big, String * dmgSource)) 0x606f40;
Bomb * (*Bomb::ptr::_new2)() = (Bomb * (*)()) 0x0;
Bomb * (*Bomb::ptr::GetUnexplodedBombAt)(int xVal, int yVal) = (Bomb * (*)(int xVal, int yVal)) 0x607240;
Bomb * (*Bomb::ptr::GetHittableBombAt)(int xVal, int yVal) = (Bomb * (*)(int xVal, int yVal)) 0x607290;
void (*Bomb::ptr::JumpTo)(Bomb * self, int xVal, int yVal) = (void (*)(Bomb * self, int xVal, int yVal)) 0x6072f0;
void (*Bomb::ptr::HitInDirection)(Bomb * self, int dir, int maxSteps) = (void (*)(Bomb * self, int dir, int maxSteps)) 0x607320;
void (*Bomb::ptr::GenerateExplosionDamage)(int tmpX, int tmpY, String * source, int dam, Player * p, bool big, bool allowSelfHits) = (void (*)(int tmpX, int tmpY, String * source, int dam, Player * p, bool big, bool allowSelfHits)) 0x6073c0;
void (*Bomb::ptr::Explode)(Bomb * self) = (void (*)(Bomb * self)) 0x607c90;
void (*Bomb::ptr::Move)(Bomb * self) = (void (*)(Bomb * self)) 0x607db0;
void (*Bomb::ptr::_MoveAll)() = (void (*)()) 0x0;
void (*Bomb::ptr::_Transmute)() = (void (*)()) 0x0;
void (*Bomb::ptr::Die)(Bomb * self) = (void (*)(Bomb * self)) 0x607e50;
void (*Bomb::ptr::Update)(Bomb * self) = (void (*)(Bomb * self)) 0x607eb0;
void (*Bomb::ptr::Render)(Bomb * self) = (void (*)(Bomb * self)) 0x607fb0;
bool (*Bomb::ptr::IsVisible)(Bomb * self) = (bool (*)(Bomb * self)) 0x6080c0;
void (*Bomb::ptr::KickBombAtPlayer)(int x, int y) = (void (*)(int x, int y)) 0x608110;
void (*Bomb::ptr::mark)(Bomb * self) = (void (*)(Bomb * self)) 0x608280;
void (*Bomb::ptr::CSTR_Bomb)(Bomb * self) = (void (*)(Bomb * self)) 0x606d20;
#endif

#ifdef __linux__
int * Bomb::curExplosionKills = (int*) 0x856a3cc;
List39 * * Bomb::bombList = (List39* *) 0x856a3c8;

Bomb * (*Bomb::ptr::New)(Bomb * self, int xVal, int yVal, Player * dropper, bool playLitSound, bool big, String * dmgSource) = (Bomb * (*)(Bomb * self, int xVal, int yVal, Player * dropper, bool playLitSound, bool big, String * dmgSource)) 0x83a06d0;
Bomb * (*Bomb::ptr::_new2)() = (Bomb * (*)()) 0x81adce0;
Bomb * (*Bomb::ptr::GetUnexplodedBombAt)(int xVal, int yVal) = (Bomb * (*)(int xVal, int yVal)) 0x81add40;
Bomb * (*Bomb::ptr::GetHittableBombAt)(int xVal, int yVal) = (Bomb * (*)(int xVal, int yVal)) 0x81adda0;
void (*Bomb::ptr::JumpTo)(Bomb * self, int xVal, int yVal) = (void (*)(Bomb * self, int xVal, int yVal)) 0x80742b0;
void (*Bomb::ptr::HitInDirection)(Bomb * self, int dir, int maxSteps) = (void (*)(Bomb * self, int dir, int maxSteps)) 0x8102b00;
void (*Bomb::ptr::GenerateExplosionDamage)(int tmpX, int tmpY, String * source, int dam, Player * p, bool big, bool allowSelfHits) = (void (*)(int tmpX, int tmpY, String * source, int dam, Player * p, bool big, bool allowSelfHits)) 0x83bbe30;
void (*Bomb::ptr::Explode)(Bomb * self) = (void (*)(Bomb * self)) 0x83d0fc0;
void (*Bomb::ptr::Move)(Bomb * self) = (void (*)(Bomb * self)) 0x80c7300;
void (*Bomb::ptr::_MoveAll)() = (void (*)()) 0x81ade10;
void (*Bomb::ptr::_Transmute)() = (void (*)()) 0x8074320;
void (*Bomb::ptr::Die)(Bomb * self) = (void (*)(Bomb * self)) 0x80933e0;
void (*Bomb::ptr::Update)(Bomb * self) = (void (*)(Bomb * self)) 0x812cdb0;
void (*Bomb::ptr::Render)(Bomb * self) = (void (*)(Bomb * self)) 0x82679a0;
bool (*Bomb::ptr::IsVisible)(Bomb * self) = (bool (*)(Bomb * self)) 0x812d060;
void (*Bomb::ptr::KickBombAtPlayer)(int x, int y) = (void (*)(int x, int y)) 0x83ac920;
void (*Bomb::ptr::mark)(Bomb * self) = (void (*)(Bomb * self)) 0x80a6500;
void (*Bomb::ptr::CSTR_Bomb)(Bomb * self) = (void (*)(Bomb * self)) 0x81adc20;
#endif
#endif
