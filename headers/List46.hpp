// Generated automatically. Do not edit!
#ifndef _List46_
#define _List46_
template<class T> class Array;
class CrystalShards;
class Enumerator29;
class Node66;
class PulseData;
#include "Object.hpp"

class List46 : public Object  {
public:
    Node66 * _head;

    // Wrappers
    List46() {
        ptr::CSTR_List46(this);
    }

    inline List46 * _New() { return ptr::_New(); }
    inline virtual Node66 * _AddLast46(CrystalShards * arg1) { return ptr::_AddLast46(this, arg1); }
    inline List46 * _new2(Array<CrystalShards *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator29 * ObjectEnumerator() { return ptr::_ObjectEnumerator(); }
    inline virtual Node66 * FirstNode() { return ptr::_FirstNode(); }
    inline virtual bool Equals28(CrystalShards * arg1, CrystalShards * arg2) { return ptr::_Equals28(this, arg1, arg2); }
    inline virtual int RemoveEach24(CrystalShards * arg1) { return ptr::_RemoveEach24(this, arg1); }
    inline void _mark() { ptr::_mark(); }
    inline Node66 * AddLast46(PulseData * data) { return ptr::AddLast46(this, data); }

    class ptr {
    public:
        static List46 * (*_New)();
        static Node66 * (*_AddLast46)(List46 * self, CrystalShards * arg1);
        static List46 * (*_new2)(List46 * self, Array<CrystalShards *> * arg1);
        static Enumerator29 * (*_ObjectEnumerator)();
        static Node66 * (*_FirstNode)();
        static bool (*_Equals28)(List46 * self, CrystalShards * arg1, CrystalShards * arg2);
        static int (*_RemoveEach24)(List46 * self, CrystalShards * arg1);
        static void (*_mark)();
        static void (*CSTR_List46)(List46 * self);
        static Node66 * (*AddLast46)(List46 * self, PulseData * data);
    };
};

#ifdef _WIN32

inline List46 * (*List46::ptr::_New)() = (List46 * (*)()) 0x0;
inline Node66 * (*List46::ptr::_AddLast46)(List46 * self, CrystalShards * arg1) = (Node66 * (*)(List46 * self, CrystalShards * arg1)) 0x0;
inline List46 * (*List46::ptr::_new2)(List46 * self, Array<CrystalShards *> * arg1) = (List46 * (*)(List46 * self, Array<CrystalShards *> * arg1)) 0x0;
inline Enumerator29 * (*List46::ptr::_ObjectEnumerator)() = (Enumerator29 * (*)()) 0x0;
inline Node66 * (*List46::ptr::_FirstNode)() = (Node66 * (*)()) 0x0;
inline bool (*List46::ptr::_Equals28)(List46 * self, CrystalShards * arg1, CrystalShards * arg2) = (bool (*)(List46 * self, CrystalShards * arg1, CrystalShards * arg2)) 0x0;
inline int (*List46::ptr::_RemoveEach24)(List46 * self, CrystalShards * arg1) = (int (*)(List46 * self, CrystalShards * arg1)) 0x0;
inline void (*List46::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List46::ptr::CSTR_List46)(List46 * self) = (void (*)(List46 * self)) 0x636dc0;
inline Node66 * (*List46::ptr::AddLast46)(List46 * self, PulseData * data) = (Node66 * (*)(List46 * self, PulseData * data)) 0x636e90;
#endif

#ifdef __linux__

inline List46 * (*List46::ptr::_New)() = (List46 * (*)()) 0x81bddd0;
inline Node66 * (*List46::ptr::_AddLast46)(List46 * self, CrystalShards * arg1) = (Node66 * (*)(List46 * self, CrystalShards * arg1)) 0x0;
inline List46 * (*List46::ptr::_new2)(List46 * self, Array<CrystalShards *> * arg1) = (List46 * (*)(List46 * self, Array<CrystalShards *> * arg1)) 0x0;
inline Enumerator29 * (*List46::ptr::_ObjectEnumerator)() = (Enumerator29 * (*)()) 0x0;
inline Node66 * (*List46::ptr::_FirstNode)() = (Node66 * (*)()) 0x8075d40;
inline bool (*List46::ptr::_Equals28)(List46 * self, CrystalShards * arg1, CrystalShards * arg2) = (bool (*)(List46 * self, CrystalShards * arg1, CrystalShards * arg2)) 0x0;
inline int (*List46::ptr::_RemoveEach24)(List46 * self, CrystalShards * arg1) = (int (*)(List46 * self, CrystalShards * arg1)) 0x0;
inline void (*List46::ptr::_mark)() = (void (*)()) 0x80871f0;
inline void (*List46::ptr::CSTR_List46)(List46 * self) = (void (*)(List46 * self)) 0x81be150;
inline Node66 * (*List46::ptr::AddLast46)(List46 * self, PulseData * data) = (Node66 * (*)(List46 * self, PulseData * data)) 0x81be010;
#endif
#endif
