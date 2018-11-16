// Generated automatically. Do not edit!
#ifndef _HeadNode39_
#define _HeadNode39_
#include "Node57.hpp"

class HeadNode39 : public Node57  {
public:

    // Wrappers
    inline HeadNode39 * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode39 * (*_New)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline HeadNode39 * (*HeadNode39::ptr::_New)() = (HeadNode39 * (*)()) 0x0;
inline void (*HeadNode39::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline HeadNode39 * (*HeadNode39::ptr::_New)() = (HeadNode39 * (*)()) 0x81b93a0;
inline void (*HeadNode39::ptr::_mark)() = (void (*)()) 0x8089560;
#endif
#endif
