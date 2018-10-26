// Generated automatically. Do not edit!
#ifndef _TrapObject_
#define _TrapObject_
class XMLNode;
#include "Object.hpp"

class TrapObject : public Object  {
public:
    int x;
    int y;
    int type;
    int subtype;

    // Wrappers
    inline TrapObject * _New(int arg1, int arg2, int arg3) { return ptr::_New(this, arg1, arg2, arg3); }
    inline TrapObject * new2(XMLNode * fromXML) { return ptr::new2(this, fromXML); }
    inline TrapObject * _new3() { return ptr::_new3(); }
    inline virtual void AddToXML(XMLNode * xml) { ptr::AddToXML(this, xml); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static TrapObject * (*_New)(TrapObject * self, int arg1, int arg2, int arg3);
        static TrapObject * (*new2)(TrapObject * self, XMLNode * fromXML);
        static TrapObject * (*_new3)();
        static void (*AddToXML)(TrapObject * self, XMLNode * xml);
        static void (*_mark)();
    };
};

#ifdef _WIN32

TrapObject * (*TrapObject::ptr::_New)(TrapObject * self, int arg1, int arg2, int arg3) = (TrapObject * (*)(TrapObject * self, int arg1, int arg2, int arg3)) 0x0;
TrapObject * (*TrapObject::ptr::new2)(TrapObject * self, XMLNode * fromXML) = (TrapObject * (*)(TrapObject * self, XMLNode * fromXML)) 0x5d8d40;
TrapObject * (*TrapObject::ptr::_new3)() = (TrapObject * (*)()) 0x0;
void (*TrapObject::ptr::AddToXML)(TrapObject * self, XMLNode * xml) = (void (*)(TrapObject * self, XMLNode * xml)) 0x5d8f40;
void (*TrapObject::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

TrapObject * (*TrapObject::ptr::_New)(TrapObject * self, int arg1, int arg2, int arg3) = (TrapObject * (*)(TrapObject * self, int arg1, int arg2, int arg3)) 0x8193300;
TrapObject * (*TrapObject::ptr::new2)(TrapObject * self, XMLNode * fromXML) = (TrapObject * (*)(TrapObject * self, XMLNode * fromXML)) 0x8193320;
TrapObject * (*TrapObject::ptr::_new3)() = (TrapObject * (*)()) 0x81934a0;
void (*TrapObject::ptr::AddToXML)(TrapObject * self, XMLNode * xml) = (void (*)(TrapObject * self, XMLNode * xml)) 0x80c7fe0;
void (*TrapObject::ptr::_mark)() = (void (*)()) 0x8071d90;
#endif
#endif
