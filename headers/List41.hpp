// Generated automatically. Do not edit!
#ifndef _List41_
#define _List41_
template<class T> class Array;
class Node60;
class Weapon;
#include "Object.hpp"

class List41 : public Object  {
public:
    Node60 * _head;

    // Wrappers
    List41() {
        ptr::CSTR_List41(this);
    }

    inline List41 * _New() { return ptr::_New(); }
    inline virtual Node60 * AddLast41(Weapon * data) { return ptr::AddLast41(this, data); }
    inline List41 * _new2(Array<Weapon *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual bool Equals26(Weapon * arg1, Weapon * arg2) { return ptr::_Equals26(this, arg1, arg2); }
    inline virtual bool Contains8(Weapon * value) { return ptr::Contains8(this, value); }
    inline virtual Node60 * FirstNode() { return ptr::_FirstNode(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List41 * (*_New)();
        static Node60 * (*AddLast41)(List41 * self, Weapon * data);
        static List41 * (*_new2)(List41 * self, Array<Weapon *> * arg1);
        static bool (*_Equals26)(List41 * self, Weapon * arg1, Weapon * arg2);
        static bool (*Contains8)(List41 * self, Weapon * value);
        static Node60 * (*_FirstNode)();
        static void (*_mark)();
        static void (*CSTR_List41)(List41 * self);
    };
};

#ifdef _WIN32

inline List41 * (*List41::ptr::_New)() = (List41 * (*)()) 0x0;
inline Node60 * (*List41::ptr::AddLast41)(List41 * self, Weapon * data) = (Node60 * (*)(List41 * self, Weapon * data)) 0x631260;
inline List41 * (*List41::ptr::_new2)(List41 * self, Array<Weapon *> * arg1) = (List41 * (*)(List41 * self, Array<Weapon *> * arg1)) 0x0;
inline bool (*List41::ptr::_Equals26)(List41 * self, Weapon * arg1, Weapon * arg2) = (bool (*)(List41 * self, Weapon * arg1, Weapon * arg2)) 0x0;
inline bool (*List41::ptr::Contains8)(List41 * self, Weapon * value) = (bool (*)(List41 * self, Weapon * value)) 0x631300;
inline Node60 * (*List41::ptr::_FirstNode)() = (Node60 * (*)()) 0x0;
inline void (*List41::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List41::ptr::CSTR_List41)(List41 * self) = (void (*)(List41 * self)) 0x631190;
#endif

#ifdef __linux__

inline List41 * (*List41::ptr::_New)() = (List41 * (*)()) 0x81ba310;
inline Node60 * (*List41::ptr::AddLast41)(List41 * self, Weapon * data) = (Node60 * (*)(List41 * self, Weapon * data)) 0x80ba720;
inline List41 * (*List41::ptr::_new2)(List41 * self, Array<Weapon *> * arg1) = (List41 * (*)(List41 * self, Array<Weapon *> * arg1)) 0x0;
inline bool (*List41::ptr::_Equals26)(List41 * self, Weapon * arg1, Weapon * arg2) = (bool (*)(List41 * self, Weapon * arg1, Weapon * arg2)) 0x80754e0;
inline bool (*List41::ptr::Contains8)(List41 * self, Weapon * value) = (bool (*)(List41 * self, Weapon * value)) 0x80754f0;
inline Node60 * (*List41::ptr::_FirstNode)() = (Node60 * (*)()) 0x8075540;
inline void (*List41::ptr::_mark)() = (void (*)()) 0x8086ad0;
inline void (*List41::ptr::CSTR_List41)(List41 * self) = (void (*)(List41 * self)) 0x81ba630;
#endif
#endif
