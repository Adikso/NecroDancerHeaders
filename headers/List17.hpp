// Generated automatically. Do not edit!
#ifndef _List17_
#define _List17_
template<class T> class Array;
class EnemyObject;
class Enumerator35;
class Node27;
#include "Object.hpp"

class List17 : public Object  {
public:
    Node27 * _head;

    // Wrappers
    List17() {
        ptr::CSTR_List17(this);
    }

    inline List17 * _New() { return ptr::_New(); }
    inline virtual Node27 * AddLast17(EnemyObject * data) { return ptr::AddLast17(this, data); }
    inline List17 * _new2(Array<EnemyObject *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator35 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List17 * (*_New)();
        static Node27 * (*AddLast17)(List17 * self, EnemyObject * data);
        static List17 * (*_new2)(List17 * self, Array<EnemyObject *> * arg1);
        static Enumerator35 * (*ObjectEnumerator)(List17 * self);
        static void (*_mark)();
        static void (*CSTR_List17)(List17 * self);
    };
};

#ifdef _WIN32

List17 * (*List17::ptr::_New)() = (List17 * (*)()) 0x0;
Node27 * (*List17::ptr::AddLast17)(List17 * self, EnemyObject * data) = (Node27 * (*)(List17 * self, EnemyObject * data)) 0x5dc440;
List17 * (*List17::ptr::_new2)(List17 * self, Array<EnemyObject *> * arg1) = (List17 * (*)(List17 * self, Array<EnemyObject *> * arg1)) 0x0;
Enumerator35 * (*List17::ptr::ObjectEnumerator)(List17 * self) = (Enumerator35 * (*)(List17 * self)) 0x5dc4e0;
void (*List17::ptr::_mark)() = (void (*)()) 0x0;
void (*List17::ptr::CSTR_List17)(List17 * self) = (void (*)(List17 * self)) 0x5dc370;
#endif

#ifdef __linux__

List17 * (*List17::ptr::_New)() = (List17 * (*)()) 0x8195140;
Node27 * (*List17::ptr::AddLast17)(List17 * self, EnemyObject * data) = (Node27 * (*)(List17 * self, EnemyObject * data)) 0x8195380;
List17 * (*List17::ptr::_new2)(List17 * self, Array<EnemyObject *> * arg1) = (List17 * (*)(List17 * self, Array<EnemyObject *> * arg1)) 0x0;
Enumerator35 * (*List17::ptr::ObjectEnumerator)(List17 * self) = (Enumerator35 * (*)(List17 * self)) 0x80bb770;
void (*List17::ptr::_mark)() = (void (*)()) 0x8089010;
void (*List17::ptr::CSTR_List17)(List17 * self) = (void (*)(List17 * self)) 0x81954c0;
#endif
#endif
