// Generated automatically. Do not edit!
#ifndef _List50_
#define _List50_
template<class T> class Array;
class Enumerator50;
class Node70;
class Sarcophagus;
#include "Object.hpp"

class List50 : public Object  {
public:
    Node70 * _head;

    // Wrappers
    List50() {
        ptr::CSTR_List50(this);
    }

    inline List50 * _New() { return ptr::_New(); }
    inline virtual Node70 * AddLast50(Sarcophagus * data) { return ptr::AddLast50(this, data); }
    inline List50 * _new2(Array<Sarcophagus *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator50 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual bool Equals30(Sarcophagus * arg1, Sarcophagus * arg2) { return ptr::_Equals30(this, arg1, arg2); }
    inline virtual int RemoveEach26(Sarcophagus * arg1) { return ptr::_RemoveEach26(this, arg1); }
    inline virtual int Count() { return ptr::_Count(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List50 * (*_New)();
        static Node70 * (*AddLast50)(List50 * self, Sarcophagus * data);
        static List50 * (*_new2)(List50 * self, Array<Sarcophagus *> * arg1);
        static Enumerator50 * (*ObjectEnumerator)(List50 * self);
        static bool (*_Equals30)(List50 * self, Sarcophagus * arg1, Sarcophagus * arg2);
        static int (*_RemoveEach26)(List50 * self, Sarcophagus * arg1);
        static int (*_Count)();
        static void (*_mark)();
        static void (*CSTR_List50)(List50 * self);
    };
};

#ifdef _WIN32

inline List50 * (*List50::ptr::_New)() = (List50 * (*)()) 0x0;
inline Node70 * (*List50::ptr::AddLast50)(List50 * self, Sarcophagus * data) = (Node70 * (*)(List50 * self, Sarcophagus * data)) 0x64ef30;
inline List50 * (*List50::ptr::_new2)(List50 * self, Array<Sarcophagus *> * arg1) = (List50 * (*)(List50 * self, Array<Sarcophagus *> * arg1)) 0x0;
inline Enumerator50 * (*List50::ptr::ObjectEnumerator)(List50 * self) = (Enumerator50 * (*)(List50 * self)) 0x64efd0;
inline bool (*List50::ptr::_Equals30)(List50 * self, Sarcophagus * arg1, Sarcophagus * arg2) = (bool (*)(List50 * self, Sarcophagus * arg1, Sarcophagus * arg2)) 0x0;
inline int (*List50::ptr::_RemoveEach26)(List50 * self, Sarcophagus * arg1) = (int (*)(List50 * self, Sarcophagus * arg1)) 0x0;
inline int (*List50::ptr::_Count)() = (int (*)()) 0x0;
inline void (*List50::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List50::ptr::CSTR_List50)(List50 * self) = (void (*)(List50 * self)) 0x64ee60;
#endif

#ifdef __linux__

inline List50 * (*List50::ptr::_New)() = (List50 * (*)()) 0x81c63a0;
inline Node70 * (*List50::ptr::AddLast50)(List50 * self, Sarcophagus * data) = (Node70 * (*)(List50 * self, Sarcophagus * data)) 0x81c65e0;
inline List50 * (*List50::ptr::_new2)(List50 * self, Array<Sarcophagus *> * arg1) = (List50 * (*)(List50 * self, Array<Sarcophagus *> * arg1)) 0x0;
inline Enumerator50 * (*List50::ptr::ObjectEnumerator)(List50 * self) = (Enumerator50 * (*)(List50 * self)) 0x80bc4f0;
inline bool (*List50::ptr::_Equals30)(List50 * self, Sarcophagus * arg1, Sarcophagus * arg2) = (bool (*)(List50 * self, Sarcophagus * arg1, Sarcophagus * arg2)) 0x8076430;
inline int (*List50::ptr::_RemoveEach26)(List50 * self, Sarcophagus * arg1) = (int (*)(List50 * self, Sarcophagus * arg1)) 0x8076440;
inline int (*List50::ptr::_Count)() = (int (*)()) 0x80764a0;
inline void (*List50::ptr::_mark)() = (void (*)()) 0x8088d50;
inline void (*List50::ptr::CSTR_List50)(List50 * self) = (void (*)(List50 * self)) 0x81c6720;
#endif
#endif
