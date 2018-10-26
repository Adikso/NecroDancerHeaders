// Generated automatically. Do not edit!
#ifndef _List27_
#define _List27_
template<class T> class Array;
class Enumerator47;
class Node44;
class SoundData;
#include "Object.hpp"

class List27 : public Object  {
public:
    Node44 * _head;

    // Wrappers
    List27() {
        ptr::CSTR_List27(this);
    }

    inline List27 * _New() { return ptr::_New(); }
    inline virtual Node44 * AddLast27(SoundData * data) { return ptr::AddLast27(this, data); }
    inline List27 * _new2(Array<SoundData *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator47 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual bool Equals17(SoundData * arg1, SoundData * arg2) { return ptr::_Equals17(this, arg1, arg2); }
    inline virtual int RemoveEach14(SoundData * arg1) { return ptr::_RemoveEach14(this, arg1); }
    inline virtual int Remove7(SoundData * arg1) { return ptr::_Remove7(this, arg1); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List27 * (*_New)();
        static Node44 * (*AddLast27)(List27 * self, SoundData * data);
        static List27 * (*_new2)(List27 * self, Array<SoundData *> * arg1);
        static Enumerator47 * (*ObjectEnumerator)(List27 * self);
        static bool (*_Equals17)(List27 * self, SoundData * arg1, SoundData * arg2);
        static int (*_RemoveEach14)(List27 * self, SoundData * arg1);
        static int (*_Remove7)(List27 * self, SoundData * arg1);
        static void (*_mark)();
        static void (*CSTR_List27)(List27 * self);
    };
};

#ifdef _WIN32

List27 * (*List27::ptr::_New)() = (List27 * (*)()) 0x0;
Node44 * (*List27::ptr::AddLast27)(List27 * self, SoundData * data) = (Node44 * (*)(List27 * self, SoundData * data)) 0x5f8090;
List27 * (*List27::ptr::_new2)(List27 * self, Array<SoundData *> * arg1) = (List27 * (*)(List27 * self, Array<SoundData *> * arg1)) 0x0;
Enumerator47 * (*List27::ptr::ObjectEnumerator)(List27 * self) = (Enumerator47 * (*)(List27 * self)) 0x5f8130;
bool (*List27::ptr::_Equals17)(List27 * self, SoundData * arg1, SoundData * arg2) = (bool (*)(List27 * self, SoundData * arg1, SoundData * arg2)) 0x0;
int (*List27::ptr::_RemoveEach14)(List27 * self, SoundData * arg1) = (int (*)(List27 * self, SoundData * arg1)) 0x0;
int (*List27::ptr::_Remove7)(List27 * self, SoundData * arg1) = (int (*)(List27 * self, SoundData * arg1)) 0x0;
void (*List27::ptr::_mark)() = (void (*)()) 0x0;
void (*List27::ptr::CSTR_List27)(List27 * self) = (void (*)(List27 * self)) 0x5f7fc0;
#endif

#ifdef __linux__

List27 * (*List27::ptr::_New)() = (List27 * (*)()) 0x81a0220;
Node44 * (*List27::ptr::AddLast27)(List27 * self, SoundData * data) = (Node44 * (*)(List27 * self, SoundData * data)) 0x81a0460;
List27 * (*List27::ptr::_new2)(List27 * self, Array<SoundData *> * arg1) = (List27 * (*)(List27 * self, Array<SoundData *> * arg1)) 0x0;
Enumerator47 * (*List27::ptr::ObjectEnumerator)(List27 * self) = (Enumerator47 * (*)(List27 * self)) 0x80bc200;
bool (*List27::ptr::_Equals17)(List27 * self, SoundData * arg1, SoundData * arg2) = (bool (*)(List27 * self, SoundData * arg1, SoundData * arg2)) 0x8073750;
int (*List27::ptr::_RemoveEach14)(List27 * self, SoundData * arg1) = (int (*)(List27 * self, SoundData * arg1)) 0x8073760;
int (*List27::ptr::_Remove7)(List27 * self, SoundData * arg1) = (int (*)(List27 * self, SoundData * arg1)) 0x80737c0;
void (*List27::ptr::_mark)() = (void (*)()) 0x8087db0;
void (*List27::ptr::CSTR_List27)(List27 * self) = (void (*)(List27 * self)) 0x81a05a0;
#endif
#endif
