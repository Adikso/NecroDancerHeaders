// Generated automatically. Do not edit!
#ifndef _ChestObject_
#define _ChestObject_
class String;
class XMLNode;
#include "Object.hpp"

class ChestObject : public Object  {
public:
    int x;
    int y;
    int color;
    String * contents;
    bool singleChoice;
    bool hidden;
    int saleCost;

    // Wrappers
    ChestObject() {
        ptr::CSTR_ChestObject(this);
    }

    inline ChestObject * _New(int arg1, int arg2, int arg3, String * arg4, bool arg5, bool arg6, int arg7) { return ptr::_New(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); }
    inline ChestObject * new2(XMLNode * fromXML) { return ptr::new2(this, fromXML); }
    inline ChestObject * _new3() { return ptr::_new3(); }
    inline virtual void AddToXML(XMLNode * xml) { ptr::AddToXML(this, xml); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static ChestObject * (*_New)(ChestObject * self, int arg1, int arg2, int arg3, String * arg4, bool arg5, bool arg6, int arg7);
        static ChestObject * (*new2)(ChestObject * self, XMLNode * fromXML);
        static ChestObject * (*_new3)();
        static void (*AddToXML)(ChestObject * self, XMLNode * xml);
        static void (*_mark)();
        static void (*CSTR_ChestObject)(ChestObject * self);
    };
};

#ifdef _WIN32

ChestObject * (*ChestObject::ptr::_New)(ChestObject * self, int arg1, int arg2, int arg3, String * arg4, bool arg5, bool arg6, int arg7) = (ChestObject * (*)(ChestObject * self, int arg1, int arg2, int arg3, String * arg4, bool arg5, bool arg6, int arg7)) 0x0;
ChestObject * (*ChestObject::ptr::new2)(ChestObject * self, XMLNode * fromXML) = (ChestObject * (*)(ChestObject * self, XMLNode * fromXML)) 0x5dd5b0;
ChestObject * (*ChestObject::ptr::_new3)() = (ChestObject * (*)()) 0x0;
void (*ChestObject::ptr::AddToXML)(ChestObject * self, XMLNode * xml) = (void (*)(ChestObject * self, XMLNode * xml)) 0x5dd950;
void (*ChestObject::ptr::_mark)() = (void (*)()) 0x0;
void (*ChestObject::ptr::CSTR_ChestObject)(ChestObject * self) = (void (*)(ChestObject * self)) 0x5dd410;
#endif

#ifdef __linux__

ChestObject * (*ChestObject::ptr::_New)(ChestObject * self, int arg1, int arg2, int arg3, String * arg4, bool arg5, bool arg6, int arg7) = (ChestObject * (*)(ChestObject * self, int arg1, int arg2, int arg3, String * arg4, bool arg5, bool arg6, int arg7)) 0x8196fc0;
ChestObject * (*ChestObject::ptr::new2)(ChestObject * self, XMLNode * fromXML) = (ChestObject * (*)(ChestObject * self, XMLNode * fromXML)) 0x8197040;
ChestObject * (*ChestObject::ptr::_new3)() = (ChestObject * (*)()) 0x8197310;
void (*ChestObject::ptr::AddToXML)(ChestObject * self, XMLNode * xml) = (void (*)(ChestObject * self, XMLNode * xml)) 0x80c7780;
void (*ChestObject::ptr::_mark)() = (void (*)()) 0x8072120;
void (*ChestObject::ptr::CSTR_ChestObject)(ChestObject * self) = (void (*)(ChestObject * self)) 0x8196f50;
#endif
#endif
