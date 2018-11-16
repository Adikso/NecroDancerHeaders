// Generated automatically. Do not edit!
#ifndef _StringStack_
#define _StringStack_
template<class T> class Array;
class String;
#include "Stack3.hpp"

class StringStack : public Stack3  {
public:

    // Wrappers
    StringStack() {
        ptr::CSTR_StringStack(this);
    }

    inline StringStack * _New(Array<String> * arg1) { return ptr::_New(this, arg1); }
    inline StringStack * _new2() { return ptr::_new2(); }
    inline bool Equals8(String * lhs, String * rhs) { return ptr::Equals8(this, lhs, rhs); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static StringStack * (*_New)(StringStack * self, Array<String> * arg1);
        static StringStack * (*_new2)();
        static bool (*Equals8)(StringStack * self, String * lhs, String * rhs);
        static void (*_mark)();
        static void (*CSTR_StringStack)(StringStack * self);
    };
};

#ifdef _WIN32

inline StringStack * (*StringStack::ptr::_New)(StringStack * self, Array<String> * arg1) = (StringStack * (*)(StringStack * self, Array<String> * arg1)) 0x0;
inline StringStack * (*StringStack::ptr::_new2)() = (StringStack * (*)()) 0x0;
inline bool (*StringStack::ptr::Equals8)(StringStack * self, String * lhs, String * rhs) = (bool (*)(StringStack * self, String * lhs, String * rhs)) 0x5c3060;
inline void (*StringStack::ptr::_mark)() = (void (*)()) 0x0;
inline void (*StringStack::ptr::CSTR_StringStack)(StringStack * self) = (void (*)(StringStack * self)) 0x65f680;
#endif

#ifdef __linux__

inline StringStack * (*StringStack::ptr::_New)(StringStack * self, Array<String> * arg1) = (StringStack * (*)(StringStack * self, Array<String> * arg1)) 0x0;
inline StringStack * (*StringStack::ptr::_new2)() = (StringStack * (*)()) 0x0;
inline bool (*StringStack::ptr::Equals8)(StringStack * self, String * lhs, String * rhs) = (bool (*)(StringStack * self, String * lhs, String * rhs)) 0x80c2460;
inline void (*StringStack::ptr::_mark)() = (void (*)()) 0x807a570;
inline void (*StringStack::ptr::CSTR_StringStack)(StringStack * self) = (void (*)(StringStack * self)) 0x81d4cb0;
#endif
#endif
