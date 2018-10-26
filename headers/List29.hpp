// Generated automatically. Do not edit!
#ifndef _List29_
#define _List29_
template<class T> class Array;
class Enumerator13;
class Node46;
class Particle;
#include "Object.hpp"

class List29 : public Object  {
public:
    Node46 * _head;

    // Wrappers
    List29() {
        ptr::CSTR_List29(this);
    }

    inline List29 * _New() { return ptr::_New(); }
    inline virtual Node46 * AddLast29(Particle * data) { return ptr::AddLast29(this, data); }
    inline List29 * _new2(Array<Particle *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual bool IsEmpty() { return ptr::_IsEmpty(); }
    inline virtual Particle * RemoveLast() { return ptr::_RemoveLast(); }
    inline virtual Enumerator13 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual int Count() { return ptr::_Count(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List29 * (*_New)();
        static Node46 * (*AddLast29)(List29 * self, Particle * data);
        static List29 * (*_new2)(List29 * self, Array<Particle *> * arg1);
        static bool (*_IsEmpty)();
        static Particle * (*_RemoveLast)();
        static Enumerator13 * (*ObjectEnumerator)(List29 * self);
        static int (*_Count)();
        static void (*_mark)();
        static void (*CSTR_List29)(List29 * self);
    };
};

#ifdef _WIN32

List29 * (*List29::ptr::_New)() = (List29 * (*)()) 0x0;
Node46 * (*List29::ptr::AddLast29)(List29 * self, Particle * data) = (Node46 * (*)(List29 * self, Particle * data)) 0x5fad50;
List29 * (*List29::ptr::_new2)(List29 * self, Array<Particle *> * arg1) = (List29 * (*)(List29 * self, Array<Particle *> * arg1)) 0x0;
bool (*List29::ptr::_IsEmpty)() = (bool (*)()) 0x0;
Particle * (*List29::ptr::_RemoveLast)() = (Particle * (*)()) 0x0;
Enumerator13 * (*List29::ptr::ObjectEnumerator)(List29 * self) = (Enumerator13 * (*)(List29 * self)) 0x5fadf0;
int (*List29::ptr::_Count)() = (int (*)()) 0x0;
void (*List29::ptr::_mark)() = (void (*)()) 0x0;
void (*List29::ptr::CSTR_List29)(List29 * self) = (void (*)(List29 * self)) 0x5fac80;
#endif

#ifdef __linux__

List29 * (*List29::ptr::_New)() = (List29 * (*)()) 0x81a3740;
Node46 * (*List29::ptr::AddLast29)(List29 * self, Particle * data) = (Node46 * (*)(List29 * self, Particle * data)) 0x81a3980;
List29 * (*List29::ptr::_new2)(List29 * self, Array<Particle *> * arg1) = (List29 * (*)(List29 * self, Array<Particle *> * arg1)) 0x0;
bool (*List29::ptr::_IsEmpty)() = (bool (*)()) 0x8073920;
Particle * (*List29::ptr::_RemoveLast)() = (Particle * (*)()) 0x8073930;
Enumerator13 * (*List29::ptr::ObjectEnumerator)(List29 * self) = (Enumerator13 * (*)(List29 * self)) 0x80b93e0;
int (*List29::ptr::_Count)() = (int (*)()) 0x8073970;
void (*List29::ptr::_mark)() = (void (*)()) 0x808b770;
void (*List29::ptr::CSTR_List29)(List29 * self) = (void (*)(List29 * self)) 0x81a3ac0;
#endif
#endif
