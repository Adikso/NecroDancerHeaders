// Generated automatically. Do not edit!
#ifndef _Set_
#define _Set_
class Map6;
#include "Object.hpp"

class Set : public Object  {
public:
    Map6 * map;

    // Wrappers
    inline Set * _New(Map6 * arg1) { return ptr::_New(this, arg1); }
    inline Set * _new2() { return ptr::_new2(); }
    inline virtual int Clear() { return ptr::Clear(this); }
    inline virtual bool Contains2(int value) { return ptr::Contains2(this, value); }
    inline virtual int Insert3(int value) { return ptr::Insert3(this, value); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Set * (*_New)(Set * self, Map6 * arg1);
        static Set * (*_new2)();
        static int (*Clear)(Set * self);
        static bool (*Contains2)(Set * self, int value);
        static int (*Insert3)(Set * self, int value);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Set * (*Set::ptr::_New)(Set * self, Map6 * arg1) = (Set * (*)(Set * self, Map6 * arg1)) 0x0;
inline Set * (*Set::ptr::_new2)() = (Set * (*)()) 0x0;
inline int (*Set::ptr::Clear)(Set * self) = (int (*)(Set * self)) 0x57e030;
inline bool (*Set::ptr::Contains2)(Set * self, int value) = (bool (*)(Set * self, int value)) 0x57e040;
inline int (*Set::ptr::Insert3)(Set * self, int value) = (int (*)(Set * self, int value)) 0x57e050;
inline void (*Set::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Set * (*Set::ptr::_New)(Set * self, Map6 * arg1) = (Set * (*)(Set * self, Map6 * arg1)) 0x8158090;
inline Set * (*Set::ptr::_new2)() = (Set * (*)()) 0x81580f0;
inline int (*Set::ptr::Clear)(Set * self) = (int (*)(Set * self)) 0x806fbf0;
inline bool (*Set::ptr::Contains2)(Set * self, int value) = (bool (*)(Set * self, int value)) 0x806fc10;
inline int (*Set::ptr::Insert3)(Set * self, int value) = (int (*)(Set * self, int value)) 0x806fc30;
inline void (*Set::ptr::_mark)() = (void (*)()) 0x806fc60;
#endif
#endif
