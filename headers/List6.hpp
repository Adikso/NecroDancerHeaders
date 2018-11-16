// Generated automatically. Do not edit!
#ifndef _List6_
#define _List6_
template<class T> class Array;
class Entity;
class Enumerator5;
class Node12;
#include "Object.hpp"

class List6 : public Object  {
public:
    Node12 * _head;

    // Wrappers
    List6() {
        ptr::CSTR_List6(this);
    }

    inline List6 * _New() { return ptr::_New(); }
    inline virtual Node12 * AddLast6(Entity * data) { return ptr::AddLast6(this, data); }
    inline List6 * _new2(Array<Entity *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual bool Equals2(Entity * arg1, Entity * arg2) { return ptr::_Equals2(this, arg1, arg2); }
    inline virtual int RemoveEach2(Entity * arg1) { return ptr::_RemoveEach2(this, arg1); }
    inline virtual Enumerator5 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual int Clear() { return ptr::_Clear(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List6 * (*_New)();
        static Node12 * (*AddLast6)(List6 * self, Entity * data);
        static List6 * (*_new2)(List6 * self, Array<Entity *> * arg1);
        static bool (*_Equals2)(List6 * self, Entity * arg1, Entity * arg2);
        static int (*_RemoveEach2)(List6 * self, Entity * arg1);
        static Enumerator5 * (*ObjectEnumerator)(List6 * self);
        static int (*_Clear)();
        static void (*_mark)();
        static void (*CSTR_List6)(List6 * self);
    };
};

#ifdef _WIN32

inline List6 * (*List6::ptr::_New)() = (List6 * (*)()) 0x0;
inline Node12 * (*List6::ptr::AddLast6)(List6 * self, Entity * data) = (Node12 * (*)(List6 * self, Entity * data)) 0x57f1f0;
inline List6 * (*List6::ptr::_new2)(List6 * self, Array<Entity *> * arg1) = (List6 * (*)(List6 * self, Array<Entity *> * arg1)) 0x0;
inline bool (*List6::ptr::_Equals2)(List6 * self, Entity * arg1, Entity * arg2) = (bool (*)(List6 * self, Entity * arg1, Entity * arg2)) 0x0;
inline int (*List6::ptr::_RemoveEach2)(List6 * self, Entity * arg1) = (int (*)(List6 * self, Entity * arg1)) 0x0;
inline Enumerator5 * (*List6::ptr::ObjectEnumerator)(List6 * self) = (Enumerator5 * (*)(List6 * self)) 0x57f290;
inline int (*List6::ptr::_Clear)() = (int (*)()) 0x0;
inline void (*List6::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List6::ptr::CSTR_List6)(List6 * self) = (void (*)(List6 * self)) 0x57f120;
#endif

#ifdef __linux__

inline List6 * (*List6::ptr::_New)() = (List6 * (*)()) 0x8158f50;
inline Node12 * (*List6::ptr::AddLast6)(List6 * self, Entity * data) = (Node12 * (*)(List6 * self, Entity * data)) 0x80b6e10;
inline List6 * (*List6::ptr::_new2)(List6 * self, Array<Entity *> * arg1) = (List6 * (*)(List6 * self, Array<Entity *> * arg1)) 0x0;
inline bool (*List6::ptr::_Equals2)(List6 * self, Entity * arg1, Entity * arg2) = (bool (*)(List6 * self, Entity * arg1, Entity * arg2)) 0x0;
inline int (*List6::ptr::_RemoveEach2)(List6 * self, Entity * arg1) = (int (*)(List6 * self, Entity * arg1)) 0x0;
inline Enumerator5 * (*List6::ptr::ObjectEnumerator)(List6 * self) = (Enumerator5 * (*)(List6 * self)) 0x80b7420;
inline int (*List6::ptr::_Clear)() = (int (*)()) 0x80951a0;
inline void (*List6::ptr::_mark)() = (void (*)()) 0x808e950;
inline void (*List6::ptr::CSTR_List6)(List6 * self) = (void (*)(List6 * self)) 0x8159270;
#endif
#endif
