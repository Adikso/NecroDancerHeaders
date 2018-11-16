// Generated automatically. Do not edit!
#ifndef _ItemData_
#define _ItemData_
class XMLNode;
#include "Object.hpp"

class ItemData : public Object  {
public:
    int imageFrames;
    int imageW;
    int imageH;
    bool bouncer;
    int xOff;
    int yOff;

    // Wrappers
    ItemData(XMLNode * itemXML) {
        ptr::CSTR_ItemData(this);
        ptr::New(this, itemXML);
    }

    inline ItemData * New(XMLNode * itemXML) { return ptr::New(this, itemXML); }
    inline ItemData * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static ItemData * (*New)(ItemData * self, XMLNode * itemXML);
        static ItemData * (*_new2)();
        static void (*_mark)();
        static void (*CSTR_ItemData)(ItemData * self);
    };
};

#ifdef _WIN32

inline ItemData * (*ItemData::ptr::New)(ItemData * self, XMLNode * itemXML) = (ItemData * (*)(ItemData * self, XMLNode * itemXML)) 0x606a20;
inline ItemData * (*ItemData::ptr::_new2)() = (ItemData * (*)()) 0x0;
inline void (*ItemData::ptr::_mark)() = (void (*)()) 0x0;
inline void (*ItemData::ptr::CSTR_ItemData)(ItemData * self) = (void (*)(ItemData * self)) 0x606990;
#endif

#ifdef __linux__

inline ItemData * (*ItemData::ptr::New)(ItemData * self, XMLNode * itemXML) = (ItemData * (*)(ItemData * self, XMLNode * itemXML)) 0x81aa400;
inline ItemData * (*ItemData::ptr::_new2)() = (ItemData * (*)()) 0x81adc10;
inline void (*ItemData::ptr::_mark)() = (void (*)()) 0x80742a0;
inline void (*ItemData::ptr::CSTR_ItemData)(ItemData * self) = (void (*)(ItemData * self)) 0x81aa3c0;
#endif
#endif
