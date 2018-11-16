// Generated automatically. Do not edit!
#ifndef _EnemyClamper_
#define _EnemyClamper_
#include "Enemy.hpp"

class EnemyClamper : public Enemy  {
public:

    // Wrappers
    inline virtual bool DislodgeAttempt() { return ptr::_DislodgeAttempt(); }
    inline EnemyClamper * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static bool (*_DislodgeAttempt)();
        static EnemyClamper * (*_New)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline bool (*EnemyClamper::ptr::_DislodgeAttempt)() = (bool (*)()) 0x0;
inline EnemyClamper * (*EnemyClamper::ptr::_New)() = (EnemyClamper * (*)()) 0x0;
inline void (*EnemyClamper::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline bool (*EnemyClamper::ptr::_DislodgeAttempt)() = (bool (*)()) 0x0;
inline EnemyClamper * (*EnemyClamper::ptr::_New)() = (EnemyClamper * (*)()) 0x81a0620;
inline void (*EnemyClamper::ptr::_mark)() = (void (*)()) 0x80b0de0;
#endif
#endif
