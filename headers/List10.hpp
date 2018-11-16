// Generated automatically. Do not edit!
#ifndef _List10_
#define _List10_
template<class T> class Array;
class Enumerator23;
class Gargoyle;
class Node17;
class String;
#include "Object.hpp"

class List10 : public Object  {
public:
    Node17 * _head;

    // Wrappers
    List10() {
        ptr::CSTR_List10(this);
    }

    inline List10 * _New() { return ptr::_New(); }
    inline virtual Node17 * _AddLast10(String * arg1) { return ptr::_AddLast10(this, arg1); }
    inline List10 * _new2(Array<String> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual int Clear() { return ptr::_Clear(); }
    inline virtual bool Equals6(String * arg1, String * arg2) { return ptr::_Equals6(this, arg1, arg2); }
    inline virtual bool Contains(String * arg1) { return ptr::_Contains(this, arg1); }
    inline virtual int RemoveEach5(String * arg1) { return ptr::_RemoveEach5(this, arg1); }
    inline virtual Enumerator23 * ObjectEnumerator() { return ptr::_ObjectEnumerator(); }
    inline virtual int Count() { return ptr::_Count(); }
    inline virtual Array<String> * ToArray() { return ptr::_ToArray(); }
    inline virtual int _Compare(String * arg1, String * arg2) { return ptr::_Compare(this, arg1, arg2); }
    inline virtual int Sort(int arg1) { return ptr::_Sort(this, arg1); }
    inline virtual String * Last2() { return ptr::_Last2(); }
    inline virtual Node17 * FirstNode() { return ptr::_FirstNode(); }
    inline virtual bool IsEmpty() { return ptr::_IsEmpty(); }
    inline virtual String * RemoveFirst() { return ptr::_RemoveFirst(); }
    inline virtual String * RemoveLast() { return ptr::_RemoveLast(); }
    inline virtual Node17 * AddFirst(String * arg1) { return ptr::_AddFirst(this, arg1); }
    inline void _mark() { ptr::_mark(); }
    inline Node17 * AddLast10(Gargoyle * data) { return ptr::AddLast10(this, data); }
    inline bool Contains4(Gargoyle * value) { return ptr::Contains4(this, value); }

    class ptr {
    public:
        static List10 * (*_New)();
        static Node17 * (*_AddLast10)(List10 * self, String * arg1);
        static List10 * (*_new2)(List10 * self, Array<String> * arg1);
        static int (*_Clear)();
        static bool (*_Equals6)(List10 * self, String * arg1, String * arg2);
        static bool (*_Contains)(List10 * self, String * arg1);
        static int (*_RemoveEach5)(List10 * self, String * arg1);
        static Enumerator23 * (*_ObjectEnumerator)();
        static int (*_Count)();
        static Array<String> * (*_ToArray)();
        static int (*_Compare)(List10 * self, String * arg1, String * arg2);
        static int (*_Sort)(List10 * self, int arg1);
        static String * (*_Last2)();
        static Node17 * (*_FirstNode)();
        static bool (*_IsEmpty)();
        static String * (*_RemoveFirst)();
        static String * (*_RemoveLast)();
        static Node17 * (*_AddFirst)(List10 * self, String * arg1);
        static void (*_mark)();
        static void (*CSTR_List10)(List10 * self);
        static Node17 * (*AddLast10)(List10 * self, Gargoyle * data);
        static bool (*Contains4)(List10 * self, Gargoyle * value);
    };
};

#ifdef _WIN32

inline List10 * (*List10::ptr::_New)() = (List10 * (*)()) 0x0;
inline Node17 * (*List10::ptr::_AddLast10)(List10 * self, String * arg1) = (Node17 * (*)(List10 * self, String * arg1)) 0x0;
inline List10 * (*List10::ptr::_new2)(List10 * self, Array<String> * arg1) = (List10 * (*)(List10 * self, Array<String> * arg1)) 0x0;
inline int (*List10::ptr::_Clear)() = (int (*)()) 0x0;
inline bool (*List10::ptr::_Equals6)(List10 * self, String * arg1, String * arg2) = (bool (*)(List10 * self, String * arg1, String * arg2)) 0x0;
inline bool (*List10::ptr::_Contains)(List10 * self, String * arg1) = (bool (*)(List10 * self, String * arg1)) 0x0;
inline int (*List10::ptr::_RemoveEach5)(List10 * self, String * arg1) = (int (*)(List10 * self, String * arg1)) 0x0;
inline Enumerator23 * (*List10::ptr::_ObjectEnumerator)() = (Enumerator23 * (*)()) 0x0;
inline int (*List10::ptr::_Count)() = (int (*)()) 0x0;
inline Array<String> * (*List10::ptr::_ToArray)() = (Array<String> * (*)()) 0x0;
inline int (*List10::ptr::_Compare)(List10 * self, String * arg1, String * arg2) = (int (*)(List10 * self, String * arg1, String * arg2)) 0x0;
inline int (*List10::ptr::_Sort)(List10 * self, int arg1) = (int (*)(List10 * self, int arg1)) 0x0;
inline String * (*List10::ptr::_Last2)() = (String * (*)()) 0x0;
inline Node17 * (*List10::ptr::_FirstNode)() = (Node17 * (*)()) 0x0;
inline bool (*List10::ptr::_IsEmpty)() = (bool (*)()) 0x0;
inline String * (*List10::ptr::_RemoveFirst)() = (String * (*)()) 0x0;
inline String * (*List10::ptr::_RemoveLast)() = (String * (*)()) 0x0;
inline Node17 * (*List10::ptr::_AddFirst)(List10 * self, String * arg1) = (Node17 * (*)(List10 * self, String * arg1)) 0x0;
inline void (*List10::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List10::ptr::CSTR_List10)(List10 * self) = (void (*)(List10 * self)) 0x5c2d50;
inline Node17 * (*List10::ptr::AddLast10)(List10 * self, Gargoyle * data) = (Node17 * (*)(List10 * self, Gargoyle * data)) 0x5c2e20;
inline bool (*List10::ptr::Contains4)(List10 * self, Gargoyle * value) = (bool (*)(List10 * self, Gargoyle * value)) 0x5c2ec0;
#endif

#ifdef __linux__

inline List10 * (*List10::ptr::_New)() = (List10 * (*)()) 0x817eee0;
inline Node17 * (*List10::ptr::_AddLast10)(List10 * self, String * arg1) = (Node17 * (*)(List10 * self, String * arg1)) 0x0;
inline List10 * (*List10::ptr::_new2)(List10 * self, Array<String> * arg1) = (List10 * (*)(List10 * self, Array<String> * arg1)) 0x0;
inline int (*List10::ptr::_Clear)() = (int (*)()) 0x8090680;
inline bool (*List10::ptr::_Equals6)(List10 * self, String * arg1, String * arg2) = (bool (*)(List10 * self, String * arg1, String * arg2)) 0x0;
inline bool (*List10::ptr::_Contains)(List10 * self, String * arg1) = (bool (*)(List10 * self, String * arg1)) 0x0;
inline int (*List10::ptr::_RemoveEach5)(List10 * self, String * arg1) = (int (*)(List10 * self, String * arg1)) 0x0;
inline Enumerator23 * (*List10::ptr::_ObjectEnumerator)() = (Enumerator23 * (*)()) 0x0;
inline int (*List10::ptr::_Count)() = (int (*)()) 0x8070b10;
inline Array<String> * (*List10::ptr::_ToArray)() = (Array<String> * (*)()) 0x0;
inline int (*List10::ptr::_Compare)(List10 * self, String * arg1, String * arg2) = (int (*)(List10 * self, String * arg1, String * arg2)) 0x0;
inline int (*List10::ptr::_Sort)(List10 * self, int arg1) = (int (*)(List10 * self, int arg1)) 0x0;
inline String * (*List10::ptr::_Last2)() = (String * (*)()) 0x0;
inline Node17 * (*List10::ptr::_FirstNode)() = (Node17 * (*)()) 0x0;
inline bool (*List10::ptr::_IsEmpty)() = (bool (*)()) 0x0;
inline String * (*List10::ptr::_RemoveFirst)() = (String * (*)()) 0x8070b30;
inline String * (*List10::ptr::_RemoveLast)() = (String * (*)()) 0x0;
inline Node17 * (*List10::ptr::_AddFirst)(List10 * self, String * arg1) = (Node17 * (*)(List10 * self, String * arg1)) 0x0;
inline void (*List10::ptr::_mark)() = (void (*)()) 0x8087090;
inline void (*List10::ptr::CSTR_List10)(List10 * self) = (void (*)(List10 * self)) 0x817f260;
inline Node17 * (*List10::ptr::AddLast10)(List10 * self, Gargoyle * data) = (Node17 * (*)(List10 * self, Gargoyle * data)) 0x817f120;
inline bool (*List10::ptr::Contains4)(List10 * self, Gargoyle * value) = (bool (*)(List10 * self, Gargoyle * value)) 0x8070b80;
#endif
#endif
