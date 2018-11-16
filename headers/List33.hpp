// Generated automatically. Do not edit!
#ifndef _List33_
#define _List33_
template<class T> class Array;
class Enumerator19;
class Node50;
class Player;
#include "Object.hpp"

class List33 : public Object  {
public:
    Node50 * _head;

    // Wrappers
    List33() {
        ptr::CSTR_List33(this);
    }

    inline List33 * _New() { return ptr::_New(); }
    inline virtual Node50 * AddLast33(Player * data) { return ptr::AddLast33(this, data); }
    inline List33 * _new2(Array<Player *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual int Count() { return ptr::_Count(); }
    inline virtual Enumerator19 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual bool IsEmpty() { return ptr::_IsEmpty(); }
    inline virtual Player * First() { return ptr::_First(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List33 * (*_New)();
        static Node50 * (*AddLast33)(List33 * self, Player * data);
        static List33 * (*_new2)(List33 * self, Array<Player *> * arg1);
        static int (*_Count)();
        static Enumerator19 * (*ObjectEnumerator)(List33 * self);
        static bool (*_IsEmpty)();
        static Player * (*_First)();
        static void (*_mark)();
        static void (*CSTR_List33)(List33 * self);
    };
};

#ifdef _WIN32

inline List33 * (*List33::ptr::_New)() = (List33 * (*)()) 0x0;
inline Node50 * (*List33::ptr::AddLast33)(List33 * self, Player * data) = (Node50 * (*)(List33 * self, Player * data)) 0x603210;
inline List33 * (*List33::ptr::_new2)(List33 * self, Array<Player *> * arg1) = (List33 * (*)(List33 * self, Array<Player *> * arg1)) 0x0;
inline int (*List33::ptr::_Count)() = (int (*)()) 0x0;
inline Enumerator19 * (*List33::ptr::ObjectEnumerator)(List33 * self) = (Enumerator19 * (*)(List33 * self)) 0x6032b0;
inline bool (*List33::ptr::_IsEmpty)() = (bool (*)()) 0x0;
inline Player * (*List33::ptr::_First)() = (Player * (*)()) 0x0;
inline void (*List33::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List33::ptr::CSTR_List33)(List33 * self) = (void (*)(List33 * self)) 0x603140;
#endif

#ifdef __linux__

inline List33 * (*List33::ptr::_New)() = (List33 * (*)()) 0x81a7b70;
inline Node50 * (*List33::ptr::AddLast33)(List33 * self, Player * data) = (Node50 * (*)(List33 * self, Player * data)) 0x80b9720;
inline List33 * (*List33::ptr::_new2)(List33 * self, Array<Player *> * arg1) = (List33 * (*)(List33 * self, Array<Player *> * arg1)) 0x0;
inline int (*List33::ptr::_Count)() = (int (*)()) 0x8073d20;
inline Enumerator19 * (*List33::ptr::ObjectEnumerator)(List33 * self) = (Enumerator19 * (*)(List33 * self)) 0x80b9a80;
inline bool (*List33::ptr::_IsEmpty)() = (bool (*)()) 0x8073d40;
inline Player * (*List33::ptr::_First)() = (Player * (*)()) 0x8073d50;
inline void (*List33::ptr::_mark)() = (void (*)()) 0x808dfb0;
inline void (*List33::ptr::CSTR_List33)(List33 * self) = (void (*)(List33 * self)) 0x81a7fe0;
#endif
#endif
