// Generated automatically. Do not edit!
#ifndef _XMLAttributeQueryItem_
#define _XMLAttributeQueryItem_
class String;
#include "Object.hpp"

class XMLAttributeQueryItem : public Object  {
public:
    String * id;
    String * value;
    bool required;
    bool special;

    // Wrappers
    XMLAttributeQueryItem(String * id, String * value, bool required, bool special) {
        ptr::CSTR_XMLAttributeQueryItem(this);
        ptr::New(this, id, value, required, special);
    }

    inline XMLAttributeQueryItem * New(String * id, String * value, bool required, bool special) { return ptr::New(this, id, value, required, special); }
    inline XMLAttributeQueryItem * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static XMLAttributeQueryItem * (*New)(XMLAttributeQueryItem * self, String * id, String * value, bool required, bool special);
        static XMLAttributeQueryItem * (*_new2)();
        static void (*_mark)();
        static void (*CSTR_XMLAttributeQueryItem)(XMLAttributeQueryItem * self);
    };
};

#ifdef _WIN32

XMLAttributeQueryItem * (*XMLAttributeQueryItem::ptr::New)(XMLAttributeQueryItem * self, String * id, String * value, bool required, bool special) = (XMLAttributeQueryItem * (*)(XMLAttributeQueryItem * self, String * id, String * value, bool required, bool special)) 0x4464a0;
XMLAttributeQueryItem * (*XMLAttributeQueryItem::ptr::_new2)() = (XMLAttributeQueryItem * (*)()) 0x0;
void (*XMLAttributeQueryItem::ptr::_mark)() = (void (*)()) 0x0;
void (*XMLAttributeQueryItem::ptr::CSTR_XMLAttributeQueryItem)(XMLAttributeQueryItem * self) = (void (*)(XMLAttributeQueryItem * self)) 0x4462b0;
#endif

#ifdef __linux__

XMLAttributeQueryItem * (*XMLAttributeQueryItem::ptr::New)(XMLAttributeQueryItem * self, String * id, String * value, bool required, bool special) = (XMLAttributeQueryItem * (*)(XMLAttributeQueryItem * self, String * id, String * value, bool required, bool special)) 0x81181c0;
XMLAttributeQueryItem * (*XMLAttributeQueryItem::ptr::_new2)() = (XMLAttributeQueryItem * (*)()) 0x8118240;
void (*XMLAttributeQueryItem::ptr::_mark)() = (void (*)()) 0x806d660;
void (*XMLAttributeQueryItem::ptr::CSTR_XMLAttributeQueryItem)(XMLAttributeQueryItem * self) = (void (*)(XMLAttributeQueryItem * self)) 0x8118130;
#endif
#endif
