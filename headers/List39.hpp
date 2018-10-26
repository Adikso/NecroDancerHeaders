// Generated automatically. Do not edit!
#ifndef _List39_
#define _List39_
template<class T> class Array;
class Bomb;
class Enumerator28;
class Node57;
#include "Object.hpp"

class List39 : public Object  {
public:
    Node57 * _head;

    // Wrappers
    List39() {
        ptr::CSTR_List39(this);
    }

    inline List39 * _New() { return ptr::_New(); }
    inline virtual Node57 * AddLast39(Bomb * data) { return ptr::AddLast39(this, data); }
    inline List39 * _new2(Array<Bomb *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator28 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual bool Equals24(Bomb * arg1, Bomb * arg2) { return ptr::_Equals24(this, arg1, arg2); }
    inline virtual int RemoveEach21(Bomb * arg1) { return ptr::_RemoveEach21(this, arg1); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List39 * (*_New)();
        static Node57 * (*AddLast39)(List39 * self, Bomb * data);
        static List39 * (*_new2)(List39 * self, Array<Bomb *> * arg1);
        static Enumerator28 * (*ObjectEnumerator)(List39 * self);
        static bool (*_Equals24)(List39 * self, Bomb * arg1, Bomb * arg2);
        static int (*_RemoveEach21)(List39 * self, Bomb * arg1);
        static void (*_mark)();
        static void (*CSTR_List39)(List39 * self);
    };
};

#ifdef _WIN32

List39 * (*List39::ptr::_New)() = (List39 * (*)()) 0x0;
Node57 * (*List39::ptr::AddLast39)(List39 * self, Bomb * data) = (Node57 * (*)(List39 * self, Bomb * data)) 0x6294d0;
List39 * (*List39::ptr::_new2)(List39 * self, Array<Bomb *> * arg1) = (List39 * (*)(List39 * self, Array<Bomb *> * arg1)) 0x0;
Enumerator28 * (*List39::ptr::ObjectEnumerator)(List39 * self) = (Enumerator28 * (*)(List39 * self)) 0x629570;
bool (*List39::ptr::_Equals24)(List39 * self, Bomb * arg1, Bomb * arg2) = (bool (*)(List39 * self, Bomb * arg1, Bomb * arg2)) 0x0;
int (*List39::ptr::_RemoveEach21)(List39 * self, Bomb * arg1) = (int (*)(List39 * self, Bomb * arg1)) 0x0;
void (*List39::ptr::_mark)() = (void (*)()) 0x0;
void (*List39::ptr::CSTR_List39)(List39 * self) = (void (*)(List39 * self)) 0x629400;
#endif

#ifdef __linux__

List39 * (*List39::ptr::_New)() = (List39 * (*)()) 0x81b90d0;
Node57 * (*List39::ptr::AddLast39)(List39 * self, Bomb * data) = (Node57 * (*)(List39 * self, Bomb * data)) 0x81b9310;
List39 * (*List39::ptr::_new2)(List39 * self, Array<Bomb *> * arg1) = (List39 * (*)(List39 * self, Array<Bomb *> * arg1)) 0x0;
Enumerator28 * (*List39::ptr::ObjectEnumerator)(List39 * self) = (Enumerator28 * (*)(List39 * self)) 0x80bafd0;
bool (*List39::ptr::_Equals24)(List39 * self, Bomb * arg1, Bomb * arg2) = (bool (*)(List39 * self, Bomb * arg1, Bomb * arg2)) 0x8074fb0;
int (*List39::ptr::_RemoveEach21)(List39 * self, Bomb * arg1) = (int (*)(List39 * self, Bomb * arg1)) 0x8074fc0;
void (*List39::ptr::_mark)() = (void (*)()) 0x8089410;
void (*List39::ptr::CSTR_List39)(List39 * self) = (void (*)(List39 * self)) 0x81b9450;
#endif
#endif
