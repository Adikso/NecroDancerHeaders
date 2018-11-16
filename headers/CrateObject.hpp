// Generated automatically. Do not edit!
#ifndef _CrateObject_
#define _CrateObject_
class String;
class XMLNode;
#include "Object.hpp"

class CrateObject : public Object  {
public:
    int x;
    int y;
    int type;
    String * contents;

    // Wrappers
    CrateObject() {
        ptr::CSTR_CrateObject(this);
    }

    inline CrateObject * _New(int arg1, int arg2, int arg3, String * arg4) { return ptr::_New(this, arg1, arg2, arg3, arg4); }
    inline CrateObject * new2(XMLNode * fromXML) { return ptr::new2(this, fromXML); }
    inline CrateObject * _new3() { return ptr::_new3(); }
    inline virtual void AddToXML(XMLNode * xml) { ptr::AddToXML(this, xml); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static CrateObject * (*_New)(CrateObject * self, int arg1, int arg2, int arg3, String * arg4);
        static CrateObject * (*new2)(CrateObject * self, XMLNode * fromXML);
        static CrateObject * (*_new3)();
        static void (*AddToXML)(CrateObject * self, XMLNode * xml);
        static void (*_mark)();
        static void (*CSTR_CrateObject)(CrateObject * self);
    };
};

#ifdef _WIN32

inline CrateObject * (*CrateObject::ptr::_New)(CrateObject * self, int arg1, int arg2, int arg3, String * arg4) = (CrateObject * (*)(CrateObject * self, int arg1, int arg2, int arg3, String * arg4)) 0x0;
inline CrateObject * (*CrateObject::ptr::new2)(CrateObject * self, XMLNode * fromXML) = (CrateObject * (*)(CrateObject * self, XMLNode * fromXML)) 0x5def50;
inline CrateObject * (*CrateObject::ptr::_new3)() = (CrateObject * (*)()) 0x0;
inline void (*CrateObject::ptr::AddToXML)(CrateObject * self, XMLNode * xml) = (void (*)(CrateObject * self, XMLNode * xml)) 0x5df1a0;
inline void (*CrateObject::ptr::_mark)() = (void (*)()) 0x0;
inline void (*CrateObject::ptr::CSTR_CrateObject)(CrateObject * self) = (void (*)(CrateObject * self)) 0x5dee70;
#endif

#ifdef __linux__

inline CrateObject * (*CrateObject::ptr::_New)(CrateObject * self, int arg1, int arg2, int arg3, String * arg4) = (CrateObject * (*)(CrateObject * self, int arg1, int arg2, int arg3, String * arg4)) 0x8197c40;
inline CrateObject * (*CrateObject::ptr::new2)(CrateObject * self, XMLNode * fromXML) = (CrateObject * (*)(CrateObject * self, XMLNode * fromXML)) 0x8197c90;
inline CrateObject * (*CrateObject::ptr::_new3)() = (CrateObject * (*)()) 0x8197e60;
inline void (*CrateObject::ptr::AddToXML)(CrateObject * self, XMLNode * xml) = (void (*)(CrateObject * self, XMLNode * xml)) 0x80c7560;
inline void (*CrateObject::ptr::_mark)() = (void (*)()) 0x8072130;
inline void (*CrateObject::ptr::CSTR_CrateObject)(CrateObject * self) = (void (*)(CrateObject * self)) 0x8197be0;
#endif
#endif
