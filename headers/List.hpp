// Generated automatically. Do not edit!
#ifndef _List_
#define _List_
template<class T> class Array;
class Enumerator;
class Node2;
class XMLNode;
#include "Object.hpp"

class List : public Object  {
public:
    Node2 * _head;

    // Wrappers
    List() {
        ptr::CSTR_List(this);
    }

    inline List * _New() { return ptr::_New(); }
    inline virtual Node2 * AddLast(XMLNode * data) { return ptr::AddLast(this, data); }
    inline List * _new2(Array<XMLNode *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual bool IsEmpty() { return ptr::IsEmpty(this); }
    inline virtual Enumerator * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual XMLNode * RemoveLast() { return ptr::RemoveLast(this); }
    inline virtual XMLNode * Last2() { return ptr::Last2(this); }
    inline virtual int Count() { return ptr::Count(this); }
    inline virtual XMLNode * First() { return ptr::_First(); }
    inline virtual Array<XMLNode *> * ToArray() { return ptr::ToArray(this); }
    inline virtual int Clear() { return ptr::Clear(this); }
    inline virtual bool Equals(XMLNode * lhs, XMLNode * rhs) { return ptr::Equals(this, lhs, rhs); }
    inline virtual int RemoveEach(XMLNode * value) { return ptr::RemoveEach(this, value); }
    inline virtual int Remove2(XMLNode * value) { return ptr::Remove2(this, value); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List * (*_New)();
        static Node2 * (*AddLast)(List * self, XMLNode * data);
        static List * (*_new2)(List * self, Array<XMLNode *> * arg1);
        static bool (*IsEmpty)(List * self);
        static Enumerator * (*ObjectEnumerator)(List * self);
        static XMLNode * (*RemoveLast)(List * self);
        static XMLNode * (*Last2)(List * self);
        static int (*Count)(List * self);
        static XMLNode * (*_First)();
        static Array<XMLNode *> * (*ToArray)(List * self);
        static int (*Clear)(List * self);
        static bool (*Equals)(List * self, XMLNode * lhs, XMLNode * rhs);
        static int (*RemoveEach)(List * self, XMLNode * value);
        static int (*Remove2)(List * self, XMLNode * value);
        static void (*_mark)();
        static void (*CSTR_List)(List * self);
    };
};

#ifdef _WIN32

inline List * (*List::ptr::_New)() = (List * (*)()) 0x0;
inline Node2 * (*List::ptr::AddLast)(List * self, XMLNode * data) = (Node2 * (*)(List * self, XMLNode * data)) 0x453bd0;
inline List * (*List::ptr::_new2)(List * self, Array<XMLNode *> * arg1) = (List * (*)(List * self, Array<XMLNode *> * arg1)) 0x0;
inline bool (*List::ptr::IsEmpty)(List * self) = (bool (*)(List * self)) 0x453c70;
inline Enumerator * (*List::ptr::ObjectEnumerator)(List * self) = (Enumerator * (*)(List * self)) 0x453c80;
inline XMLNode * (*List::ptr::RemoveLast)(List * self) = (XMLNode * (*)(List * self)) 0x453d10;
inline XMLNode * (*List::ptr::Last2)(List * self) = (XMLNode * (*)(List * self)) 0x453d30;
inline int (*List::ptr::Count)(List * self) = (int (*)(List * self)) 0x453d40;
inline XMLNode * (*List::ptr::_First)() = (XMLNode * (*)()) 0x0;
inline Array<XMLNode *> * (*List::ptr::ToArray)(List * self) = (Array<XMLNode *> * (*)(List * self)) 0x453d70;
inline int (*List::ptr::Clear)(List * self) = (int (*)(List * self)) 0x453e40;
inline bool (*List::ptr::Equals)(List * self, XMLNode * lhs, XMLNode * rhs) = (bool (*)(List * self, XMLNode * lhs, XMLNode * rhs)) 0x453ef0;
inline int (*List::ptr::RemoveEach)(List * self, XMLNode * value) = (int (*)(List * self, XMLNode * value)) 0x453f10;
inline int (*List::ptr::Remove2)(List * self, XMLNode * value) = (int (*)(List * self, XMLNode * value)) 0x453f50;
inline void (*List::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List::ptr::CSTR_List)(List * self) = (void (*)(List * self)) 0x453b00;
#endif

#ifdef __linux__

inline List * (*List::ptr::_New)() = (List * (*)()) 0x8128180;
inline Node2 * (*List::ptr::AddLast)(List * self, XMLNode * data) = (Node2 * (*)(List * self, XMLNode * data)) 0x80b5e00;
inline List * (*List::ptr::_new2)(List * self, Array<XMLNode *> * arg1) = (List * (*)(List * self, Array<XMLNode *> * arg1)) 0x0;
inline bool (*List::ptr::IsEmpty)(List * self) = (bool (*)(List * self)) 0x806dd80;
inline Enumerator * (*List::ptr::ObjectEnumerator)(List * self) = (Enumerator * (*)(List * self)) 0x80b5d30;
inline XMLNode * (*List::ptr::RemoveLast)(List * self) = (XMLNode * (*)(List * self)) 0x806dd90;
inline XMLNode * (*List::ptr::Last2)(List * self) = (XMLNode * (*)(List * self)) 0x806ddd0;
inline int (*List::ptr::Count)(List * self) = (int (*)(List * self)) 0x806ddf0;
inline XMLNode * (*List::ptr::_First)() = (XMLNode * (*)()) 0x806de10;
inline Array<XMLNode *> * (*List::ptr::ToArray)(List * self) = (Array<XMLNode *> * (*)(List * self)) 0x80c0470;
inline int (*List::ptr::Clear)(List * self) = (int (*)(List * self)) 0x8095380;
inline bool (*List::ptr::Equals)(List * self, XMLNode * lhs, XMLNode * rhs) = (bool (*)(List * self, XMLNode * lhs, XMLNode * rhs)) 0x806de30;
inline int (*List::ptr::RemoveEach)(List * self, XMLNode * value) = (int (*)(List * self, XMLNode * value)) 0x806de40;
inline int (*List::ptr::Remove2)(List * self, XMLNode * value) = (int (*)(List * self, XMLNode * value)) 0x806dea0;
inline void (*List::ptr::_mark)() = (void (*)()) 0x808e420;
inline void (*List::ptr::CSTR_List)(List * self) = (void (*)(List * self)) 0x81284a0;
#endif
#endif
