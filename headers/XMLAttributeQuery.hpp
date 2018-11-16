// Generated automatically. Do not edit!
#ifndef _XMLAttributeQuery_
#define _XMLAttributeQuery_
template<class T> class Array;
class String;
class XMLAttributeQueryItem;
class XMLNode;
#include "Object.hpp"

class XMLAttributeQuery : public Object  {
public:
    int count;
    Array<XMLAttributeQueryItem *> * items;
    int chunk;

    // Wrappers
    XMLAttributeQuery(String * query) {
        ptr::CSTR_XMLAttributeQuery(this);
        ptr::New(this, query);
    }

    inline XMLAttributeQuery * New(String * query) { return ptr::New(this, query); }
    inline XMLAttributeQuery * _new2() { return ptr::_new2(); }
    inline virtual bool Test(XMLNode * node) { return ptr::Test(this, node); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static XMLAttributeQuery * (*New)(XMLAttributeQuery * self, String * query);
        static XMLAttributeQuery * (*_new2)();
        static bool (*Test)(XMLAttributeQuery * self, XMLNode * node);
        static void (*mark)(XMLAttributeQuery * self);
        static void (*CSTR_XMLAttributeQuery)(XMLAttributeQuery * self);
    };
};

#ifdef _WIN32

inline XMLAttributeQuery * (*XMLAttributeQuery::ptr::New)(XMLAttributeQuery * self, String * query) = (XMLAttributeQuery * (*)(XMLAttributeQuery * self, String * query)) 0x445420;
inline XMLAttributeQuery * (*XMLAttributeQuery::ptr::_new2)() = (XMLAttributeQuery * (*)()) 0x0;
inline bool (*XMLAttributeQuery::ptr::Test)(XMLAttributeQuery * self, XMLNode * node) = (bool (*)(XMLAttributeQuery * self, XMLNode * node)) 0x4458a0;
inline void (*XMLAttributeQuery::ptr::mark)(XMLAttributeQuery * self) = (void (*)(XMLAttributeQuery * self)) 0x445af0;
inline void (*XMLAttributeQuery::ptr::CSTR_XMLAttributeQuery)(XMLAttributeQuery * self) = (void (*)(XMLAttributeQuery * self)) 0x4453a0;
#endif

#ifdef __linux__

inline XMLAttributeQuery * (*XMLAttributeQuery::ptr::New)(XMLAttributeQuery * self, String * query) = (XMLAttributeQuery * (*)(XMLAttributeQuery * self, String * query)) 0x81177a0;
inline XMLAttributeQuery * (*XMLAttributeQuery::ptr::_new2)() = (XMLAttributeQuery * (*)()) 0x8117fc0;
inline bool (*XMLAttributeQuery::ptr::Test)(XMLAttributeQuery * self, XMLNode * node) = (bool (*)(XMLAttributeQuery * self, XMLNode * node)) 0x80ce3f0;
inline void (*XMLAttributeQuery::ptr::mark)(XMLAttributeQuery * self) = (void (*)(XMLAttributeQuery * self)) 0x806d5f0;
inline void (*XMLAttributeQuery::ptr::CSTR_XMLAttributeQuery)(XMLAttributeQuery * self) = (void (*)(XMLAttributeQuery * self)) 0x8117690;
#endif
#endif
