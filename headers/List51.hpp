// Generated automatically. Do not edit!
#ifndef _List51_
#define _List51_
template<class T> class Array;
class Enumerator51;
class Node71;
class SwarmSarcophagus;
#include "Object.hpp"

class List51 : public Object  {
public:
    Node71 * _head;

    // Wrappers
    List51() {
        ptr::CSTR_List51(this);
    }

    inline List51 * _New() { return ptr::_New(); }
    inline virtual Node71 * AddLast51(SwarmSarcophagus * data) { return ptr::AddLast51(this, data); }
    inline List51 * _new2(Array<SwarmSarcophagus *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator51 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual bool Equals31(SwarmSarcophagus * arg1, SwarmSarcophagus * arg2) { return ptr::_Equals31(this, arg1, arg2); }
    inline virtual int RemoveEach27(SwarmSarcophagus * arg1) { return ptr::_RemoveEach27(this, arg1); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List51 * (*_New)();
        static Node71 * (*AddLast51)(List51 * self, SwarmSarcophagus * data);
        static List51 * (*_new2)(List51 * self, Array<SwarmSarcophagus *> * arg1);
        static Enumerator51 * (*ObjectEnumerator)(List51 * self);
        static bool (*_Equals31)(List51 * self, SwarmSarcophagus * arg1, SwarmSarcophagus * arg2);
        static int (*_RemoveEach27)(List51 * self, SwarmSarcophagus * arg1);
        static void (*_mark)();
        static void (*CSTR_List51)(List51 * self);
    };
};

#ifdef _WIN32

List51 * (*List51::ptr::_New)() = (List51 * (*)()) 0x0;
Node71 * (*List51::ptr::AddLast51)(List51 * self, SwarmSarcophagus * data) = (Node71 * (*)(List51 * self, SwarmSarcophagus * data)) 0x65e160;
List51 * (*List51::ptr::_new2)(List51 * self, Array<SwarmSarcophagus *> * arg1) = (List51 * (*)(List51 * self, Array<SwarmSarcophagus *> * arg1)) 0x0;
Enumerator51 * (*List51::ptr::ObjectEnumerator)(List51 * self) = (Enumerator51 * (*)(List51 * self)) 0x65e200;
bool (*List51::ptr::_Equals31)(List51 * self, SwarmSarcophagus * arg1, SwarmSarcophagus * arg2) = (bool (*)(List51 * self, SwarmSarcophagus * arg1, SwarmSarcophagus * arg2)) 0x0;
int (*List51::ptr::_RemoveEach27)(List51 * self, SwarmSarcophagus * arg1) = (int (*)(List51 * self, SwarmSarcophagus * arg1)) 0x0;
void (*List51::ptr::_mark)() = (void (*)()) 0x0;
void (*List51::ptr::CSTR_List51)(List51 * self) = (void (*)(List51 * self)) 0x65e090;
#endif

#ifdef __linux__

List51 * (*List51::ptr::_New)() = (List51 * (*)()) 0x81d4390;
Node71 * (*List51::ptr::AddLast51)(List51 * self, SwarmSarcophagus * data) = (Node71 * (*)(List51 * self, SwarmSarcophagus * data)) 0x81d45d0;
List51 * (*List51::ptr::_new2)(List51 * self, Array<SwarmSarcophagus *> * arg1) = (List51 * (*)(List51 * self, Array<SwarmSarcophagus *> * arg1)) 0x0;
Enumerator51 * (*List51::ptr::ObjectEnumerator)(List51 * self) = (Enumerator51 * (*)(List51 * self)) 0x80bc5c0;
bool (*List51::ptr::_Equals31)(List51 * self, SwarmSarcophagus * arg1, SwarmSarcophagus * arg2) = (bool (*)(List51 * self, SwarmSarcophagus * arg1, SwarmSarcophagus * arg2)) 0x80769f0;
int (*List51::ptr::_RemoveEach27)(List51 * self, SwarmSarcophagus * arg1) = (int (*)(List51 * self, SwarmSarcophagus * arg1)) 0x8076a00;
void (*List51::ptr::_mark)() = (void (*)()) 0x8088890;
void (*List51::ptr::CSTR_List51)(List51 * self) = (void (*)(List51 * self)) 0x81d4710;
#endif
#endif
