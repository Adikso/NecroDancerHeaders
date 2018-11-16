// Generated automatically. Do not edit!
#ifndef _Stack3_
#define _Stack3_
template<class T> class Array;
class Enumerator34;
class String;
#include "Object.hpp"

class Stack3 : public Object  {
public:
    Array<String> * data;
    int length;
    static String * * _NIL;

    // Wrappers
    Stack3() {
        ptr::CSTR_Stack3(this);
    }

    inline Stack3 * _New() { return ptr::_New(); }
    inline Stack3 * _new2(Array<String> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual int Push7(String * value) { return ptr::Push7(this, value); }
    inline virtual int Push8(Array<String> * values, int offset, int count) { return ptr::Push8(this, values, offset, count); }
    inline virtual int Push9(Array<String> * values, int offset) { return ptr::Push9(this, values, offset); }
    inline virtual Enumerator34 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual int Length() { return ptr::_Length(); }
    inline virtual String * Get2(int index) { return ptr::Get2(this, index); }
    inline virtual String * Pop() { return ptr::Pop(this); }
    inline virtual Array<String> * ToArray() { return ptr::ToArray(this); }
    inline virtual bool Equals8(String * arg1, String * arg2) { return ptr::_Equals8(this, arg1, arg2); }
    inline virtual bool Contains(String * value) { return ptr::Contains(this, value); }
    inline virtual int Clear() { return ptr::Clear(this); }
    inline virtual bool IsEmpty() { return ptr::IsEmpty(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Stack3 * (*_New)();
        static Stack3 * (*_new2)(Stack3 * self, Array<String> * arg1);
        static int (*Push7)(Stack3 * self, String * value);
        static int (*Push8)(Stack3 * self, Array<String> * values, int offset, int count);
        static int (*Push9)(Stack3 * self, Array<String> * values, int offset);
        static Enumerator34 * (*ObjectEnumerator)(Stack3 * self);
        static int (*_Length)();
        static String * (*Get2)(Stack3 * self, int index);
        static String * (*Pop)(Stack3 * self);
        static Array<String> * (*ToArray)(Stack3 * self);
        static bool (*_Equals8)(Stack3 * self, String * arg1, String * arg2);
        static bool (*Contains)(Stack3 * self, String * value);
        static int (*Clear)(Stack3 * self);
        static bool (*IsEmpty)(Stack3 * self);
        static void (*_mark)();
        static void (*CSTR_Stack3)(Stack3 * self);
    };
};

#ifdef _WIN32
inline String * * Stack3::_NIL = (String* *) 0x833fc8;

inline Stack3 * (*Stack3::ptr::_New)() = (Stack3 * (*)()) 0x0;
inline Stack3 * (*Stack3::ptr::_new2)(Stack3 * self, Array<String> * arg1) = (Stack3 * (*)(Stack3 * self, Array<String> * arg1)) 0x0;
inline int (*Stack3::ptr::Push7)(Stack3 * self, String * value) = (int (*)(Stack3 * self, String * value)) 0x65cd50;
inline int (*Stack3::ptr::Push8)(Stack3 * self, Array<String> * values, int offset, int count) = (int (*)(Stack3 * self, Array<String> * values, int offset, int count)) 0x65ce10;
inline int (*Stack3::ptr::Push9)(Stack3 * self, Array<String> * values, int offset) = (int (*)(Stack3 * self, Array<String> * values, int offset)) 0x65ce90;
inline Enumerator34 * (*Stack3::ptr::ObjectEnumerator)(Stack3 * self) = (Enumerator34 * (*)(Stack3 * self)) 0x65cf20;
inline int (*Stack3::ptr::_Length)() = (int (*)()) 0x0;
inline String * (*Stack3::ptr::Get2)(Stack3 * self, int index) = (String * (*)(Stack3 * self, int index)) 0x65d000;
inline String * (*Stack3::ptr::Pop)(Stack3 * self) = (String * (*)(Stack3 * self)) 0x65d060;
inline Array<String> * (*Stack3::ptr::ToArray)(Stack3 * self) = (Array<String> * (*)(Stack3 * self)) 0x65d110;
inline bool (*Stack3::ptr::_Equals8)(Stack3 * self, String * arg1, String * arg2) = (bool (*)(Stack3 * self, String * arg1, String * arg2)) 0x0;
inline bool (*Stack3::ptr::Contains)(Stack3 * self, String * value) = (bool (*)(Stack3 * self, String * value)) 0x65d1a0;
inline int (*Stack3::ptr::Clear)(Stack3 * self) = (int (*)(Stack3 * self)) 0x65d260;
inline bool (*Stack3::ptr::IsEmpty)(Stack3 * self) = (bool (*)(Stack3 * self)) 0x65d2e0;
inline void (*Stack3::ptr::_mark)() = (void (*)()) 0x0;
inline void (*Stack3::ptr::CSTR_Stack3)(Stack3 * self) = (void (*)(Stack3 * self)) 0x65ccd0;
#endif

#ifdef __linux__
inline String * * Stack3::_NIL = (String* *) 0x0;

inline Stack3 * (*Stack3::ptr::_New)() = (Stack3 * (*)()) 0x81d34d0;
inline Stack3 * (*Stack3::ptr::_new2)(Stack3 * self, Array<String> * arg1) = (Stack3 * (*)(Stack3 * self, Array<String> * arg1)) 0x81d34e0;
inline int (*Stack3::ptr::Push7)(Stack3 * self, String * value) = (int (*)(Stack3 * self, String * value)) 0x80d8e10;
inline int (*Stack3::ptr::Push8)(Stack3 * self, Array<String> * values, int offset, int count) = (int (*)(Stack3 * self, Array<String> * values, int offset, int count)) 0x80ce010;
inline int (*Stack3::ptr::Push9)(Stack3 * self, Array<String> * values, int offset) = (int (*)(Stack3 * self, Array<String> * values, int offset)) 0x80ce090;
inline Enumerator34 * (*Stack3::ptr::ObjectEnumerator)(Stack3 * self) = (Enumerator34 * (*)(Stack3 * self)) 0x80bb6f0;
inline int (*Stack3::ptr::_Length)() = (int (*)()) 0x8076750;
inline String * (*Stack3::ptr::Get2)(Stack3 * self, int index) = (String * (*)(Stack3 * self, int index)) 0x8076760;
inline String * (*Stack3::ptr::Pop)(Stack3 * self) = (String * (*)(Stack3 * self)) 0x8076780;
inline Array<String> * (*Stack3::ptr::ToArray)(Stack3 * self) = (Array<String> * (*)(Stack3 * self)) 0x80d8830;
inline bool (*Stack3::ptr::_Equals8)(Stack3 * self, String * arg1, String * arg2) = (bool (*)(Stack3 * self, String * arg1, String * arg2)) 0x80c2480;
inline bool (*Stack3::ptr::Contains)(Stack3 * self, String * value) = (bool (*)(Stack3 * self, String * value)) 0x80cdf60;
inline int (*Stack3::ptr::Clear)(Stack3 * self) = (int (*)(Stack3 * self)) 0x80767b0;
inline bool (*Stack3::ptr::IsEmpty)(Stack3 * self) = (bool (*)(Stack3 * self)) 0x80767c0;
inline void (*Stack3::ptr::_mark)() = (void (*)()) 0x8094610;
inline void (*Stack3::ptr::CSTR_Stack3)(Stack3 * self) = (void (*)(Stack3 * self)) 0x81d33c0;
#endif
#endif
