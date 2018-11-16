// Generated automatically. Do not edit!
#ifndef _SkeletonSpearman_
#define _SkeletonSpearman_
class Entity;
class Point;
class Sprite;
class String;
#include "Enemy.hpp"

class SkeletonSpearman : public Enemy  {
public:
    Sprite * spearImage;
    bool hasHead;
    int directionHitFrom;
    bool hasSpear;
    Point * spearStart;
    Point * spearEnd;
    int spearDir;
    int spearDist;
    int spearRenderTime;

    // Wrappers
    SkeletonSpearman(int xVal, int yVal, int l) {
        ptr::CSTR_SkeletonSpearman(this);
        ptr::New(this, xVal, yVal, l);
    }

    inline SkeletonSpearman * New(int xVal, int yVal, int l) { return ptr::New(this, xVal, yVal, l); }
    inline SkeletonSpearman * _new2() { return ptr::_new2(); }
    inline Point * GetMovementDirection() { return ptr::GetMovementDirection(this); }
    inline virtual void InitSpearSwipe(int origX, int origY, int tmpXOff, int tmpYOff, int tmpDir) { ptr::InitSpearSwipe(this, origX, origY, tmpXOff, tmpYOff, tmpDir); }
    inline int MoveImmediate(int xVal, int yVal, String * movementSource) { return ptr::MoveImmediate(this, xVal, yVal, movementSource); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline void Update() { ptr::Update(this); }
    inline void Render() { ptr::Render(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static SkeletonSpearman * (*New)(SkeletonSpearman * self, int xVal, int yVal, int l);
        static SkeletonSpearman * (*_new2)();
        static Point * (*GetMovementDirection)(SkeletonSpearman * self);
        static void (*InitSpearSwipe)(SkeletonSpearman * self, int origX, int origY, int tmpXOff, int tmpYOff, int tmpDir);
        static int (*MoveImmediate)(SkeletonSpearman * self, int xVal, int yVal, String * movementSource);
        static bool (*Hit)(SkeletonSpearman * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static void (*Update)(SkeletonSpearman * self);
        static void (*Render)(SkeletonSpearman * self);
        static void (*mark)(SkeletonSpearman * self);
        static void (*CSTR_SkeletonSpearman)(SkeletonSpearman * self);
    };
};

#ifdef _WIN32

inline SkeletonSpearman * (*SkeletonSpearman::ptr::New)(SkeletonSpearman * self, int xVal, int yVal, int l) = (SkeletonSpearman * (*)(SkeletonSpearman * self, int xVal, int yVal, int l)) 0x683bd0;
inline SkeletonSpearman * (*SkeletonSpearman::ptr::_new2)() = (SkeletonSpearman * (*)()) 0x0;
inline Point * (*SkeletonSpearman::ptr::GetMovementDirection)(SkeletonSpearman * self) = (Point * (*)(SkeletonSpearman * self)) 0x683f70;
inline void (*SkeletonSpearman::ptr::InitSpearSwipe)(SkeletonSpearman * self, int origX, int origY, int tmpXOff, int tmpYOff, int tmpDir) = (void (*)(SkeletonSpearman * self, int origX, int origY, int tmpXOff, int tmpYOff, int tmpDir)) 0x684090;
inline int (*SkeletonSpearman::ptr::MoveImmediate)(SkeletonSpearman * self, int xVal, int yVal, String * movementSource) = (int (*)(SkeletonSpearman * self, int xVal, int yVal, String * movementSource)) 0x684270;
inline bool (*SkeletonSpearman::ptr::Hit)(SkeletonSpearman * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(SkeletonSpearman * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x684650;
inline void (*SkeletonSpearman::ptr::Update)(SkeletonSpearman * self) = (void (*)(SkeletonSpearman * self)) 0x684900;
inline void (*SkeletonSpearman::ptr::Render)(SkeletonSpearman * self) = (void (*)(SkeletonSpearman * self)) 0x684920;
inline void (*SkeletonSpearman::ptr::mark)(SkeletonSpearman * self) = (void (*)(SkeletonSpearman * self)) 0x684af0;
inline void (*SkeletonSpearman::ptr::CSTR_SkeletonSpearman)(SkeletonSpearman * self) = (void (*)(SkeletonSpearman * self)) 0x683b20;
#endif

#ifdef __linux__

inline SkeletonSpearman * (*SkeletonSpearman::ptr::New)(SkeletonSpearman * self, int xVal, int yVal, int l) = (SkeletonSpearman * (*)(SkeletonSpearman * self, int xVal, int yVal, int l)) 0x81e0530;
inline SkeletonSpearman * (*SkeletonSpearman::ptr::_new2)() = (SkeletonSpearman * (*)()) 0x81e07c0;
inline Point * (*SkeletonSpearman::ptr::GetMovementDirection)(SkeletonSpearman * self) = (Point * (*)(SkeletonSpearman * self)) 0x80b3ba0;
inline void (*SkeletonSpearman::ptr::InitSpearSwipe)(SkeletonSpearman * self, int origX, int origY, int tmpXOff, int tmpYOff, int tmpDir) = (void (*)(SkeletonSpearman * self, int origX, int origY, int tmpXOff, int tmpYOff, int tmpDir)) 0x80b7120;
inline int (*SkeletonSpearman::ptr::MoveImmediate)(SkeletonSpearman * self, int xVal, int yVal, String * movementSource) = (int (*)(SkeletonSpearman * self, int xVal, int yVal, String * movementSource)) 0x83928f0;
inline bool (*SkeletonSpearman::ptr::Hit)(SkeletonSpearman * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(SkeletonSpearman * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x8395fb0;
inline void (*SkeletonSpearman::ptr::Update)(SkeletonSpearman * self) = (void (*)(SkeletonSpearman * self)) 0x837de80;
inline void (*SkeletonSpearman::ptr::Render)(SkeletonSpearman * self) = (void (*)(SkeletonSpearman * self)) 0x830e130;
inline void (*SkeletonSpearman::ptr::mark)(SkeletonSpearman * self) = (void (*)(SkeletonSpearman * self)) 0x80b0e60;
inline void (*SkeletonSpearman::ptr::CSTR_SkeletonSpearman)(SkeletonSpearman * self) = (void (*)(SkeletonSpearman * self)) 0x81e04c0;
#endif
#endif
