// Generated automatically. Do not edit!
#ifndef _EnemyList_
#define _EnemyList_
class Enemy;
#include "List15.hpp"

class EnemyList : public List15  {
public:

    // Wrappers
    inline EnemyList * _New() { return ptr::_New(); }
    inline int Compare4(Enemy * a, Enemy * b) { return ptr::Compare4(this, a, b); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static EnemyList * (*_New)();
        static int (*Compare4)(EnemyList * self, Enemy * a, Enemy * b);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline EnemyList * (*EnemyList::ptr::_New)() = (EnemyList * (*)()) 0x0;
inline int (*EnemyList::ptr::Compare4)(EnemyList * self, Enemy * a, Enemy * b) = (int (*)(EnemyList * self, Enemy * a, Enemy * b)) 0x5dbd60;
inline void (*EnemyList::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline EnemyList * (*EnemyList::ptr::_New)() = (EnemyList * (*)()) 0x8194760;
inline int (*EnemyList::ptr::Compare4)(EnemyList * self, Enemy * a, Enemy * b) = (int (*)(EnemyList * self, Enemy * a, Enemy * b)) 0x80963b0;
inline void (*EnemyList::ptr::_mark)() = (void (*)()) 0x808fc70;
#endif
#endif
