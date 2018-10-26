// Generated automatically. Do not edit!
#ifndef _XMLStringBuffer_
#define _XMLStringBuffer_
template<class T> class Array;
class String;
#include "Object.hpp"

class XMLStringBuffer : public Object  {
public:
    int chunk;
    int count;
    Array<int> * data;
    int dirty;
    String * cache;

    // Wrappers
    XMLStringBuffer() {
        ptr::CSTR_XMLStringBuffer(this);
    }

    inline XMLStringBuffer * _New(int arg1) { return ptr::_New(this, arg1); }
    inline virtual void Add(int asc) { ptr::Add(this, asc); }
    inline virtual void Add2(String * text) { ptr::Add2(this, text); }
    inline virtual void Add3(String * text, int offset, int suggestedLength) { ptr::Add3(this, text, offset, suggestedLength); }
    inline virtual int Length() { return ptr::_Length(); }
    inline virtual String * value() { return ptr::value(this); }
    inline virtual void Clear() { ptr::Clear(this); }
    inline virtual int Last(int defaultValue) { return ptr::Last(this, defaultValue); }
    inline virtual bool Trim() { return ptr::Trim(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static XMLStringBuffer * (*_New)(XMLStringBuffer * self, int arg1);
        static void (*Add)(XMLStringBuffer * self, int asc);
        static void (*Add2)(XMLStringBuffer * self, String * text);
        static void (*Add3)(XMLStringBuffer * self, String * text, int offset, int suggestedLength);
        static int (*_Length)();
        static String * (*value)(XMLStringBuffer * self);
        static void (*Clear)(XMLStringBuffer * self);
        static int (*Last)(XMLStringBuffer * self, int defaultValue);
        static bool (*Trim)(XMLStringBuffer * self);
        static void (*mark)(XMLStringBuffer * self);
        static void (*CSTR_XMLStringBuffer)(XMLStringBuffer * self);
    };
};

#ifdef _WIN32

XMLStringBuffer * (*XMLStringBuffer::ptr::_New)(XMLStringBuffer * self, int arg1) = (XMLStringBuffer * (*)(XMLStringBuffer * self, int arg1)) 0x0;
void (*XMLStringBuffer::ptr::Add)(XMLStringBuffer * self, int asc) = (void (*)(XMLStringBuffer * self, int asc)) 0x445ce0;
void (*XMLStringBuffer::ptr::Add2)(XMLStringBuffer * self, String * text) = (void (*)(XMLStringBuffer * self, String * text)) 0x445d40;
void (*XMLStringBuffer::ptr::Add3)(XMLStringBuffer * self, String * text, int offset, int suggestedLength) = (void (*)(XMLStringBuffer * self, String * text, int offset, int suggestedLength)) 0x445e50;
int (*XMLStringBuffer::ptr::_Length)() = (int (*)()) 0x0;
String * (*XMLStringBuffer::ptr::value)(XMLStringBuffer * self) = (String * (*)(XMLStringBuffer * self)) 0x445f90;
void (*XMLStringBuffer::ptr::Clear)(XMLStringBuffer * self) = (void (*)(XMLStringBuffer * self)) 0x4460b0;
int (*XMLStringBuffer::ptr::Last)(XMLStringBuffer * self, int defaultValue) = (int (*)(XMLStringBuffer * self, int defaultValue)) 0x446150;
bool (*XMLStringBuffer::ptr::Trim)(XMLStringBuffer * self) = (bool (*)(XMLStringBuffer * self)) 0x446170;
void (*XMLStringBuffer::ptr::mark)(XMLStringBuffer * self) = (void (*)(XMLStringBuffer * self)) 0x446260;
void (*XMLStringBuffer::ptr::CSTR_XMLStringBuffer)(XMLStringBuffer * self) = (void (*)(XMLStringBuffer * self)) 0x445b40;
#endif

#ifdef __linux__

XMLStringBuffer * (*XMLStringBuffer::ptr::_New)(XMLStringBuffer * self, int arg1) = (XMLStringBuffer * (*)(XMLStringBuffer * self, int arg1)) 0x8118120;
void (*XMLStringBuffer::ptr::Add)(XMLStringBuffer * self, int asc) = (void (*)(XMLStringBuffer * self, int asc)) 0x80c15c0;
void (*XMLStringBuffer::ptr::Add2)(XMLStringBuffer * self, String * text) = (void (*)(XMLStringBuffer * self, String * text)) 0x80c1120;
void (*XMLStringBuffer::ptr::Add3)(XMLStringBuffer * self, String * text, int offset, int suggestedLength) = (void (*)(XMLStringBuffer * self, String * text, int offset, int suggestedLength)) 0x80bdb60;
int (*XMLStringBuffer::ptr::_Length)() = (int (*)()) 0x806d650;
String * (*XMLStringBuffer::ptr::value)(XMLStringBuffer * self) = (String * (*)(XMLStringBuffer * self)) 0x80dfe70;
void (*XMLStringBuffer::ptr::Clear)(XMLStringBuffer * self) = (void (*)(XMLStringBuffer * self)) 0x80d8cd0;
int (*XMLStringBuffer::ptr::Last)(XMLStringBuffer * self, int defaultValue) = (int (*)(XMLStringBuffer * self, int defaultValue)) 0x8081dd0;
bool (*XMLStringBuffer::ptr::Trim)(XMLStringBuffer * self) = (bool (*)(XMLStringBuffer * self)) 0x8081c90;
void (*XMLStringBuffer::ptr::mark)(XMLStringBuffer * self) = (void (*)(XMLStringBuffer * self)) 0x80a0e90;
void (*XMLStringBuffer::ptr::CSTR_XMLStringBuffer)(XMLStringBuffer * self) = (void (*)(XMLStringBuffer * self)) 0x8117fd0;
#endif
#endif
