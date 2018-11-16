// Generated automatically. Do not edit!
#ifndef _List30_
#define _List30_
template<class T> class Array;
class Enumerator49;
class Node47;
class ParticleSystem;
#include "Object.hpp"

class List30 : public Object  {
public:
    Node47 * _head;

    // Wrappers
    List30() {
        ptr::CSTR_List30(this);
    }

    inline List30 * _New() { return ptr::_New(); }
    inline virtual Node47 * AddLast30(ParticleSystem * data) { return ptr::AddLast30(this, data); }
    inline List30 * _new2(Array<ParticleSystem *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual int Clear() { return ptr::_Clear(); }
    inline virtual Enumerator49 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual bool Equals19(ParticleSystem * arg1, ParticleSystem * arg2) { return ptr::_Equals19(this, arg1, arg2); }
    inline virtual int RemoveEach16(ParticleSystem * value) { return ptr::RemoveEach16(this, value); }
    inline virtual int Remove8(ParticleSystem * value) { return ptr::Remove8(this, value); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List30 * (*_New)();
        static Node47 * (*AddLast30)(List30 * self, ParticleSystem * data);
        static List30 * (*_new2)(List30 * self, Array<ParticleSystem *> * arg1);
        static int (*_Clear)();
        static Enumerator49 * (*ObjectEnumerator)(List30 * self);
        static bool (*_Equals19)(List30 * self, ParticleSystem * arg1, ParticleSystem * arg2);
        static int (*RemoveEach16)(List30 * self, ParticleSystem * value);
        static int (*Remove8)(List30 * self, ParticleSystem * value);
        static void (*_mark)();
        static void (*CSTR_List30)(List30 * self);
    };
};

#ifdef _WIN32

inline List30 * (*List30::ptr::_New)() = (List30 * (*)()) 0x0;
inline Node47 * (*List30::ptr::AddLast30)(List30 * self, ParticleSystem * data) = (Node47 * (*)(List30 * self, ParticleSystem * data)) 0x5faf50;
inline List30 * (*List30::ptr::_new2)(List30 * self, Array<ParticleSystem *> * arg1) = (List30 * (*)(List30 * self, Array<ParticleSystem *> * arg1)) 0x0;
inline int (*List30::ptr::_Clear)() = (int (*)()) 0x0;
inline Enumerator49 * (*List30::ptr::ObjectEnumerator)(List30 * self) = (Enumerator49 * (*)(List30 * self)) 0x5faff0;
inline bool (*List30::ptr::_Equals19)(List30 * self, ParticleSystem * arg1, ParticleSystem * arg2) = (bool (*)(List30 * self, ParticleSystem * arg1, ParticleSystem * arg2)) 0x0;
inline int (*List30::ptr::RemoveEach16)(List30 * self, ParticleSystem * value) = (int (*)(List30 * self, ParticleSystem * value)) 0x5dba30;
inline int (*List30::ptr::Remove8)(List30 * self, ParticleSystem * value) = (int (*)(List30 * self, ParticleSystem * value)) 0x5fb080;
inline void (*List30::ptr::_mark)() = (void (*)()) 0x0;
inline void (*List30::ptr::CSTR_List30)(List30 * self) = (void (*)(List30 * self)) 0x5fae80;
#endif

#ifdef __linux__

inline List30 * (*List30::ptr::_New)() = (List30 * (*)()) 0x81a4610;
inline Node47 * (*List30::ptr::AddLast30)(List30 * self, ParticleSystem * data) = (Node47 * (*)(List30 * self, ParticleSystem * data)) 0x81a4850;
inline List30 * (*List30::ptr::_new2)(List30 * self, Array<ParticleSystem *> * arg1) = (List30 * (*)(List30 * self, Array<ParticleSystem *> * arg1)) 0x0;
inline int (*List30::ptr::_Clear)() = (int (*)()) 0x8094310;
inline Enumerator49 * (*List30::ptr::ObjectEnumerator)(List30 * self) = (Enumerator49 * (*)(List30 * self)) 0x80bc420;
inline bool (*List30::ptr::_Equals19)(List30 * self, ParticleSystem * arg1, ParticleSystem * arg2) = (bool (*)(List30 * self, ParticleSystem * arg1, ParticleSystem * arg2)) 0x80739d0;
inline int (*List30::ptr::RemoveEach16)(List30 * self, ParticleSystem * value) = (int (*)(List30 * self, ParticleSystem * value)) 0x80739e0;
inline int (*List30::ptr::Remove8)(List30 * self, ParticleSystem * value) = (int (*)(List30 * self, ParticleSystem * value)) 0x8073a40;
inline void (*List30::ptr::_mark)() = (void (*)()) 0x808a8b0;
inline void (*List30::ptr::CSTR_List30)(List30 * self) = (void (*)(List30 * self)) 0x81a4990;
#endif
#endif
