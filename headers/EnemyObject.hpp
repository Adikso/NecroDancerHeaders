// Generated automatically. Do not edit!
#ifndef _EnemyObject_
#define _EnemyObject_
class XMLNode;
#include "Object.hpp"

class EnemyObject : public Object  {
public:
    int x;
    int y;
    int type;
    int beatDelay;
    bool lord;

    // Wrappers
    inline EnemyObject * _New(int arg1, int arg2, int arg3, int arg4, bool arg5) { return ptr::_New(this, arg1, arg2, arg3, arg4, arg5); }
    inline EnemyObject * new2(XMLNode * fromXML) { return ptr::new2(this, fromXML); }
    inline EnemyObject * _new3() { return ptr::_new3(); }
    inline virtual void AddToXML(XMLNode * xml) { ptr::AddToXML(this, xml); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static EnemyObject * (*_New)(EnemyObject * self, int arg1, int arg2, int arg3, int arg4, bool arg5);
        static EnemyObject * (*new2)(EnemyObject * self, XMLNode * fromXML);
        static EnemyObject * (*_new3)();
        static void (*AddToXML)(EnemyObject * self, XMLNode * xml);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline EnemyObject * (*EnemyObject::ptr::_New)(EnemyObject * self, int arg1, int arg2, int arg3, int arg4, bool arg5) = (EnemyObject * (*)(EnemyObject * self, int arg1, int arg2, int arg3, int arg4, bool arg5)) 0x0;
inline EnemyObject * (*EnemyObject::ptr::new2)(EnemyObject * self, XMLNode * fromXML) = (EnemyObject * (*)(EnemyObject * self, XMLNode * fromXML)) 0x5dbe20;
inline EnemyObject * (*EnemyObject::ptr::_new3)() = (EnemyObject * (*)()) 0x0;
inline void (*EnemyObject::ptr::AddToXML)(EnemyObject * self, XMLNode * xml) = (void (*)(EnemyObject * self, XMLNode * xml)) 0x5dc090;
inline void (*EnemyObject::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline EnemyObject * (*EnemyObject::ptr::_New)(EnemyObject * self, int arg1, int arg2, int arg3, int arg4, bool arg5) = (EnemyObject * (*)(EnemyObject * self, int arg1, int arg2, int arg3, int arg4, bool arg5)) 0x8194f30;
inline EnemyObject * (*EnemyObject::ptr::new2)(EnemyObject * self, XMLNode * fromXML) = (EnemyObject * (*)(EnemyObject * self, XMLNode * fromXML)) 0x8194f60;
inline EnemyObject * (*EnemyObject::ptr::_new3)() = (EnemyObject * (*)()) 0x8195130;
inline void (*EnemyObject::ptr::AddToXML)(EnemyObject * self, XMLNode * xml) = (void (*)(EnemyObject * self, XMLNode * xml)) 0x80c7d80;
inline void (*EnemyObject::ptr::_mark)() = (void (*)()) 0x8071f90;
#endif
#endif
