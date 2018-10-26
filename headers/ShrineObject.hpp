// Generated automatically. Do not edit!
#ifndef _ShrineObject_
#define _ShrineObject_
class XMLNode;
#include "Object.hpp"

class ShrineObject : public Object  {
public:
    int x;
    int y;
    int type;

    // Wrappers
    inline ShrineObject * _New(int arg1, int arg2, int arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline ShrineObject * new2(XMLNode * fromXML) { return ptr::new2(this, fromXML); }
    inline ShrineObject * _new3() { return ptr::_new3(); }
    inline virtual void AddToXML(XMLNode * xml) { ptr::AddToXML(this, xml); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static ShrineObject * (*_New)(ShrineObject * self, int arg1, int arg2, int arg3);
        static ShrineObject * (*new2)(ShrineObject * self, XMLNode * fromXML);
        static ShrineObject * (*_new3)();
        static void (*AddToXML)(ShrineObject * self, XMLNode * xml);
        static void (*_mark)();
    };
};

#ifdef _WIN32

ShrineObject * (*ShrineObject::ptr::_New)(ShrineObject * self, int arg1, int arg2, int arg3) = (ShrineObject * (*)(ShrineObject * self, int arg1, int arg2, int arg3)) 0x0;
ShrineObject * (*ShrineObject::ptr::new2)(ShrineObject * self, XMLNode * fromXML) = (ShrineObject * (*)(ShrineObject * self, XMLNode * fromXML)) 0x5df810;
ShrineObject * (*ShrineObject::ptr::_new3)() = (ShrineObject * (*)()) 0x0;
void (*ShrineObject::ptr::AddToXML)(ShrineObject * self, XMLNode * xml) = (void (*)(ShrineObject * self, XMLNode * xml)) 0x5df9a0;
void (*ShrineObject::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

ShrineObject * (*ShrineObject::ptr::_New)(ShrineObject * self, int arg1, int arg2, int arg3) = (ShrineObject * (*)(ShrineObject * self, int arg1, int arg2, int arg3)) 0x8198730;
ShrineObject * (*ShrineObject::ptr::new2)(ShrineObject * self, XMLNode * fromXML) = (ShrineObject * (*)(ShrineObject * self, XMLNode * fromXML)) 0x8198750;
ShrineObject * (*ShrineObject::ptr::_new3)() = (ShrineObject * (*)()) 0x8199a90;
void (*ShrineObject::ptr::AddToXML)(ShrineObject * self, XMLNode * xml) = (void (*)(ShrineObject * self, XMLNode * xml)) 0x80c73c0;
void (*ShrineObject::ptr::_mark)() = (void (*)()) 0x80721b0;
#endif
#endif
