// Generated automatically. Do not edit!
#ifndef _XMLAttribute_
#define _XMLAttribute_
class String;
#include "Object.hpp"

class XMLAttribute : public Object  {
public:
    String * value;
    String * id;

    // Wrappers
    XMLAttribute(String * id, String * value) {
        ptr::CSTR_XMLAttribute(this);
        ptr::New(this, id, value);
    }

    inline XMLAttribute * New(String * id, String * value) { return ptr::New(this, id, value); }
    inline XMLAttribute * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static XMLAttribute * (*New)(XMLAttribute * self, String * id, String * value);
        static XMLAttribute * (*_new2)();
        static void (*_mark)();
        static void (*CSTR_XMLAttribute)(XMLAttribute * self);
    };
};

#ifdef _WIN32

XMLAttribute * (*XMLAttribute::ptr::New)(XMLAttribute * self, String * id, String * value) = (XMLAttribute * (*)(XMLAttribute * self, String * id, String * value)) 0x446690;
XMLAttribute * (*XMLAttribute::ptr::_new2)() = (XMLAttribute * (*)()) 0x0;
void (*XMLAttribute::ptr::_mark)() = (void (*)()) 0x0;
void (*XMLAttribute::ptr::CSTR_XMLAttribute)(XMLAttribute * self) = (void (*)(XMLAttribute * self)) 0x446570;
#endif

#ifdef __linux__

XMLAttribute * (*XMLAttribute::ptr::New)(XMLAttribute * self, String * id, String * value) = (XMLAttribute * (*)(XMLAttribute * self, String * id, String * value)) 0x81182e0;
XMLAttribute * (*XMLAttribute::ptr::_new2)() = (XMLAttribute * (*)()) 0x8118340;
void (*XMLAttribute::ptr::_mark)() = (void (*)()) 0x806d670;
void (*XMLAttribute::ptr::CSTR_XMLAttribute)(XMLAttribute * self) = (void (*)(XMLAttribute * self)) 0x8118250;
#endif
#endif
