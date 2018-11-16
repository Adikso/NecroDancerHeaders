// Generated automatically. Do not edit!
#ifndef _List54_
#define _List54_
template<class T> class Array;
class Doppelganger;
class Enumerator46;
class HighScoreSubmission;
class Node74;
class Node75;
#include "Object.hpp"

class List54 : public Object  {
public:
    Node75 * _head;

    // Wrappers
    List54() {
        ptr::CSTR_List54(this);
    }

    inline List54 * _New() { return ptr::_New(); }
    inline virtual Node75 * _AddLast54(Doppelganger * arg1) { return ptr::_AddLast54(this, arg1); }
    inline List54 * _new2(Array<Doppelganger *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator46 * ObjectEnumerator() { return ptr::_ObjectEnumerator(); }
    inline virtual bool Equals32(Doppelganger * arg1, Doppelganger * arg2) { return ptr::_Equals32(this, arg1, arg2); }
    inline virtual int RemoveEach28(Doppelganger * arg1) { return ptr::_RemoveEach28(this, arg1); }
    inline void _mark() { ptr::_mark(); }
    inline Node74 * AddLast54(HighScoreSubmission * data) { return ptr::AddLast54(this, data); }

    class ptr {
    public:
        static List54 * (*_New)();
        static Node75 * (*_AddLast54)(List54 * self, Doppelganger * arg1);
        static List54 * (*_new2)(List54 * self, Array<Doppelganger *> * arg1);
        static Enumerator46 * (*_ObjectEnumerator)();
        static bool (*_Equals32)(List54 * self, Doppelganger * arg1, Doppelganger * arg2);
        static int (*_RemoveEach28)(List54 * self, Doppelganger * arg1);
        static void (*_mark)();
        static void (*CSTR_List54)(List54 * self);
        static Node74 * (*AddLast54)(List54 * self, HighScoreSubmission * data);
    };
};

#ifdef _WIN32

inline List54 * (*List54::ptr::_New)() = (List54 * (*)()) 0x0;
inline Node75 * (*List54::ptr::_AddLast54)(List54 * self, Doppelganger * arg1) = (Node75 * (*)(List54 * self, Doppelganger * arg1)) 0x0;
inline List54 * (*List54::ptr::_new2)(List54 * self, Array<Doppelganger *> * arg1) = (List54 * (*)(List54 * self, Array<Doppelganger *> * arg1)) 0x0;
inline Enumerator46 * (*List54::ptr::_ObjectEnumerator)() = (Enumerator46 * (*)()) 0x0;
inline bool (*List54::ptr::_Equals32)(List54 * self, Doppelganger * arg1, Doppelganger * arg2) = (bool (*)(List54 * self, Doppelganger * arg1, Doppelganger * arg2)) 0x0;
inline int (*List54::ptr::_RemoveEach28)(List54 * self, Doppelganger * arg1) = (int (*)(List54 * self, Doppelganger * arg1)) 0x0;
inline void (*List54::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List54::ptr::CSTR_List54)(List54 * self) = (void (*)(List54 * self)) 0x66f830;
inline Node74 * (*List54::ptr::AddLast54)(List54 * self, HighScoreSubmission * data) = (Node74 * (*)(List54 * self, HighScoreSubmission * data)) 0x66f900;
#endif

#ifdef __linux__

inline List54 * (*List54::ptr::_New)() = (List54 * (*)()) 0x81db740;
inline Node75 * (*List54::ptr::_AddLast54)(List54 * self, Doppelganger * arg1) = (Node75 * (*)(List54 * self, Doppelganger * arg1)) 0x0;
inline List54 * (*List54::ptr::_new2)(List54 * self, Array<Doppelganger *> * arg1) = (List54 * (*)(List54 * self, Array<Doppelganger *> * arg1)) 0x0;
inline Enumerator46 * (*List54::ptr::_ObjectEnumerator)() = (Enumerator46 * (*)()) 0x0;
inline bool (*List54::ptr::_Equals32)(List54 * self, Doppelganger * arg1, Doppelganger * arg2) = (bool (*)(List54 * self, Doppelganger * arg1, Doppelganger * arg2)) 0x0;
inline int (*List54::ptr::_RemoveEach28)(List54 * self, Doppelganger * arg1) = (int (*)(List54 * self, Doppelganger * arg1)) 0x0;
inline void (*List54::ptr::_mark)() = (void (*)()) 0x8084c10;
inline void (*List54::ptr::CSTR_List54)(List54 * self) = (void (*)(List54 * self)) 0x81dbac0;
inline Node74 * (*List54::ptr::AddLast54)(List54 * self, HighScoreSubmission * data) = (Node74 * (*)(List54 * self, HighScoreSubmission * data)) 0x81db980;
#endif
#endif
