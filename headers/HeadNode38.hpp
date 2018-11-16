// Generated automatically. Do not edit!
#ifndef _HeadNode38_
#define _HeadNode38_
#include "Node56.hpp"

class HeadNode38 : public Node56  {
public:

    // Wrappers
    inline HeadNode38 * _New() { return ptr::_New(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HeadNode38 * (*_New)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline HeadNode38 * (*HeadNode38::ptr::_New)() = (HeadNode38 * (*)()) 0x0;
inline void (*HeadNode38::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline HeadNode38 * (*HeadNode38::ptr::_New)() = (HeadNode38 * (*)()) 0x81b82e0;
inline void (*HeadNode38::ptr::_mark)() = (void (*)()) 0x8089000;
#endif
#endif
