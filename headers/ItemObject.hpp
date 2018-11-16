// Generated automatically. Do not edit!
#ifndef _ItemObject_
#define _ItemObject_
class String;
class XMLNode;
#include "Object.hpp"

class ItemObject : public Object  {
public:
    int x;
    int y;
    String * type;
    bool singleChoice;
    int saleCost;
    float bloodCost;

    // Wrappers
    ItemObject() {
        ptr::CSTR_ItemObject(this);
    }

    inline ItemObject * _New(int arg1, int arg2, String * arg3, bool arg4, int arg5, float arg6) { return ptr::_New(this, arg1, arg2, arg3, arg4, arg5, arg6); }
    inline ItemObject * new2(XMLNode * fromXML) { return ptr::new2(this, fromXML); }
    inline ItemObject * _new3() { return ptr::_new3(); }
    inline virtual void AddToXML(XMLNode * xml) { ptr::AddToXML(this, xml); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static ItemObject * (*_New)(ItemObject * self, int arg1, int arg2, String * arg3, bool arg4, int arg5, float arg6);
        static ItemObject * (*new2)(ItemObject * self, XMLNode * fromXML);
        static ItemObject * (*_new3)();
        static void (*AddToXML)(ItemObject * self, XMLNode * xml);
        static void (*_mark)();
        static void (*CSTR_ItemObject)(ItemObject * self);
    };
};

#ifdef _WIN32

inline ItemObject * (*ItemObject::ptr::_New)(ItemObject * self, int arg1, int arg2, String * arg3, bool arg4, int arg5, float arg6) = (ItemObject * (*)(ItemObject * self, int arg1, int arg2, String * arg3, bool arg4, int arg5, float arg6)) 0x0;
inline ItemObject * (*ItemObject::ptr::new2)(ItemObject * self, XMLNode * fromXML) = (ItemObject * (*)(ItemObject * self, XMLNode * fromXML)) 0x5dc920;
inline ItemObject * (*ItemObject::ptr::_new3)() = (ItemObject * (*)()) 0x0;
inline void (*ItemObject::ptr::AddToXML)(ItemObject * self, XMLNode * xml) = (void (*)(ItemObject * self, XMLNode * xml)) 0x5dccb0;
inline void (*ItemObject::ptr::_mark)() = (void (*)()) 0x0;
inline void (*ItemObject::ptr::CSTR_ItemObject)(ItemObject * self) = (void (*)(ItemObject * self)) 0x5dc840;
#endif

#ifdef __linux__

inline ItemObject * (*ItemObject::ptr::_New)(ItemObject * self, int arg1, int arg2, String * arg3, bool arg4, int arg5, float arg6) = (ItemObject * (*)(ItemObject * self, int arg1, int arg2, String * arg3, bool arg4, int arg5, float arg6)) 0x81963a0;
inline ItemObject * (*ItemObject::ptr::new2)(ItemObject * self, XMLNode * fromXML) = (ItemObject * (*)(ItemObject * self, XMLNode * fromXML)) 0x8196410;
inline ItemObject * (*ItemObject::ptr::_new3)() = (ItemObject * (*)()) 0x81966a0;
inline void (*ItemObject::ptr::AddToXML)(ItemObject * self, XMLNode * xml) = (void (*)(ItemObject * self, XMLNode * xml)) 0x80c7ab0;
inline void (*ItemObject::ptr::_mark)() = (void (*)()) 0x8072030;
inline void (*ItemObject::ptr::CSTR_ItemObject)(ItemObject * self) = (void (*)(ItemObject * self)) 0x8196330;
#endif
#endif
