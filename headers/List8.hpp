// Generated automatically. Do not edit!
#ifndef _List8_
#define _List8_
template<class T> class Array;
class Enumerator18;
class Familiar;
class Node14;
#include "Object.hpp"

class List8 : public Object  {
public:
    Node14 * _head;

    // Wrappers
    List8() {
        ptr::CSTR_List8(this);
    }

    inline List8 * _New() { return ptr::_New(); }
    inline virtual Node14 * AddLast8(Familiar * data) { return ptr::AddLast8(this, data); }
    inline List8 * _new2(Array<Familiar *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual bool Equals5(Familiar * arg1, Familiar * arg2) { return ptr::_Equals5(this, arg1, arg2); }
    inline virtual int RemoveEach5(Familiar * value) { return ptr::RemoveEach5(this, value); }
    inline virtual Enumerator18 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List8 * (*_New)();
        static Node14 * (*AddLast8)(List8 * self, Familiar * data);
        static List8 * (*_new2)(List8 * self, Array<Familiar *> * arg1);
        static bool (*_Equals5)(List8 * self, Familiar * arg1, Familiar * arg2);
        static int (*RemoveEach5)(List8 * self, Familiar * value);
        static Enumerator18 * (*ObjectEnumerator)(List8 * self);
        static void (*_mark)();
        static void (*CSTR_List8)(List8 * self);
    };
};

#ifdef _WIN32

inline List8 * (*List8::ptr::_New)() = (List8 * (*)()) 0x0;
inline Node14 * (*List8::ptr::AddLast8)(List8 * self, Familiar * data) = (Node14 * (*)(List8 * self, Familiar * data)) 0x580760;
inline List8 * (*List8::ptr::_new2)(List8 * self, Array<Familiar *> * arg1) = (List8 * (*)(List8 * self, Array<Familiar *> * arg1)) 0x0;
inline bool (*List8::ptr::_Equals5)(List8 * self, Familiar * arg1, Familiar * arg2) = (bool (*)(List8 * self, Familiar * arg1, Familiar * arg2)) 0x0;
inline int (*List8::ptr::RemoveEach5)(List8 * self, Familiar * value) = (int (*)(List8 * self, Familiar * value)) 0x57e740;
inline Enumerator18 * (*List8::ptr::ObjectEnumerator)(List8 * self) = (Enumerator18 * (*)(List8 * self)) 0x580800;
inline void (*List8::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List8::ptr::CSTR_List8)(List8 * self) = (void (*)(List8 * self)) 0x580690;
#endif

#ifdef __linux__

inline List8 * (*List8::ptr::_New)() = (List8 * (*)()) 0x815a290;
inline Node14 * (*List8::ptr::AddLast8)(List8 * self, Familiar * data) = (Node14 * (*)(List8 * self, Familiar * data)) 0x815a4d0;
inline List8 * (*List8::ptr::_new2)(List8 * self, Array<Familiar *> * arg1) = (List8 * (*)(List8 * self, Array<Familiar *> * arg1)) 0x0;
inline bool (*List8::ptr::_Equals5)(List8 * self, Familiar * arg1, Familiar * arg2) = (bool (*)(List8 * self, Familiar * arg1, Familiar * arg2)) 0x8070170;
inline int (*List8::ptr::RemoveEach5)(List8 * self, Familiar * value) = (int (*)(List8 * self, Familiar * value)) 0x8070180;
inline Enumerator18 * (*List8::ptr::ObjectEnumerator)(List8 * self) = (Enumerator18 * (*)(List8 * self)) 0x80b99b0;
inline void (*List8::ptr::_mark)() = (void (*)()) 0x808b310;
inline void (*List8::ptr::CSTR_List8)(List8 * self) = (void (*)(List8 * self)) 0x815a610;
#endif
#endif
