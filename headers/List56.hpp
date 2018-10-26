// Generated automatically. Do not edit!
#ifndef _List56_
#define _List56_
template<class T> class Array;
class Enumerator55;
class FloorPulse;
class Node79;
#include "Object.hpp"

class List56 : public Object  {
public:
    Node79 * _head;

    // Wrappers
    List56() {
        ptr::CSTR_List56(this);
    }

    inline List56 * _New() { return ptr::_New(); }
    inline virtual Node79 * AddLast56(FloorPulse * data) { return ptr::AddLast56(this, data); }
    inline List56 * _new2(Array<FloorPulse *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator55 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List56 * (*_New)();
        static Node79 * (*AddLast56)(List56 * self, FloorPulse * data);
        static List56 * (*_new2)(List56 * self, Array<FloorPulse *> * arg1);
        static Enumerator55 * (*ObjectEnumerator)(List56 * self);
        static void (*_mark)();
        static void (*CSTR_List56)(List56 * self);
    };
};

#ifdef _WIN32

List56 * (*List56::ptr::_New)() = (List56 * (*)()) 0x0;
Node79 * (*List56::ptr::AddLast56)(List56 * self, FloorPulse * data) = (Node79 * (*)(List56 * self, FloorPulse * data)) 0x68dea0;
List56 * (*List56::ptr::_new2)(List56 * self, Array<FloorPulse *> * arg1) = (List56 * (*)(List56 * self, Array<FloorPulse *> * arg1)) 0x0;
Enumerator55 * (*List56::ptr::ObjectEnumerator)(List56 * self) = (Enumerator55 * (*)(List56 * self)) 0x68df40;
void (*List56::ptr::_mark)() = (void (*)()) 0x0;
void (*List56::ptr::CSTR_List56)(List56 * self) = (void (*)(List56 * self)) 0x68ddd0;
#endif

#ifdef __linux__

List56 * (*List56::ptr::_New)() = (List56 * (*)()) 0x81e4d40;
Node79 * (*List56::ptr::AddLast56)(List56 * self, FloorPulse * data) = (Node79 * (*)(List56 * self, FloorPulse * data)) 0x81e4f80;
List56 * (*List56::ptr::_new2)(List56 * self, Array<FloorPulse *> * arg1) = (List56 * (*)(List56 * self, Array<FloorPulse *> * arg1)) 0x0;
Enumerator55 * (*List56::ptr::ObjectEnumerator)(List56 * self) = (Enumerator55 * (*)(List56 * self)) 0x80bcc50;
void (*List56::ptr::_mark)() = (void (*)()) 0x80893b0;
void (*List56::ptr::CSTR_List56)(List56 * self) = (void (*)(List56 * self)) 0x81e50c0;
#endif
#endif
