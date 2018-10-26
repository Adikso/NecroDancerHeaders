// Generated automatically. Do not edit!
#ifndef _XMLError_
#define _XMLError_
class String;
#include "Object.hpp"

class XMLError : public Object  {
public:
    bool err;
    String * message;
    int line;
    int column;
    int offset;

    // Wrappers
    XMLError() {
        ptr::CSTR_XMLError(this);
    }

    inline XMLError * _New() { return ptr::_New(); }
    inline virtual void Reset() { ptr::Reset(this); }
    inline virtual void Set2(String * message, int line, int column, int offset) { ptr::Set2(this, message, line, column, offset); }
    inline virtual String * ToString() { return ptr::ToString(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static XMLError * (*_New)();
        static void (*Reset)(XMLError * self);
        static void (*Set2)(XMLError * self, String * message, int line, int column, int offset);
        static String * (*ToString)(XMLError * self);
        static void (*_mark)();
        static void (*CSTR_XMLError)(XMLError * self);
    };
};

#ifdef _WIN32

XMLError * (*XMLError::ptr::_New)() = (XMLError * (*)()) 0x0;
void (*XMLError::ptr::Reset)(XMLError * self) = (void (*)(XMLError * self)) 0x453260;
void (*XMLError::ptr::Set2)(XMLError * self, String * message, int line, int column, int offset) = (void (*)(XMLError * self, String * message, int line, int column, int offset)) 0x453310;
String * (*XMLError::ptr::ToString)(XMLError * self) = (String * (*)(XMLError * self)) 0x4533b0;
void (*XMLError::ptr::_mark)() = (void (*)()) 0x0;
void (*XMLError::ptr::CSTR_XMLError)(XMLError * self) = (void (*)(XMLError * self)) 0x4530d0;
#endif

#ifdef __linux__

XMLError * (*XMLError::ptr::_New)() = (XMLError * (*)()) 0x8127fb0;
void (*XMLError::ptr::Reset)(XMLError * self) = (void (*)(XMLError * self)) 0x80d8c70;
void (*XMLError::ptr::Set2)(XMLError * self, String * message, int line, int column, int offset) = (void (*)(XMLError * self, String * message, int line, int column, int offset)) 0x80d8bb0;
String * (*XMLError::ptr::ToString)(XMLError * self) = (String * (*)(XMLError * self)) 0x80df330;
void (*XMLError::ptr::_mark)() = (void (*)()) 0x806dd00;
void (*XMLError::ptr::CSTR_XMLError)(XMLError * self) = (void (*)(XMLError * self)) 0x8127f40;
#endif
#endif
