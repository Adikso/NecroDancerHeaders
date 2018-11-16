// Generated automatically. Do not edit!
#ifndef _XMLDoc_
#define _XMLDoc_
class String;
class StringMap2;
#include "XMLNode.hpp"

class XMLDoc : public XMLNode  {
public:
    XMLNode * nullNode;
    String * version;
    String * encoding;
    StringMap2 * paths;

    // Wrappers
    XMLDoc(String * name, String * version, String * encoding) {
        ptr::CSTR_XMLDoc(this);
        ptr::New(this, name, version, encoding);
    }

    inline String * Export(int options) { return ptr::Export(this, options); }
    inline XMLDoc * New(String * name, String * version, String * encoding) { return ptr::New(this, name, version, encoding); }
    inline XMLDoc * _new2() { return ptr::_new2(); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static String * (*Export)(XMLDoc * self, int options);
        static XMLDoc * (*New)(XMLDoc * self, String * name, String * version, String * encoding);
        static XMLDoc * (*_new2)();
        static void (*mark)(XMLDoc * self);
        static void (*CSTR_XMLDoc)(XMLDoc * self);
    };
};

#ifdef _WIN32

inline String * (*XMLDoc::ptr::Export)(XMLDoc * self, int options) = (String * (*)(XMLDoc * self, int options)) 0x444d70;
inline XMLDoc * (*XMLDoc::ptr::New)(XMLDoc * self, String * name, String * version, String * encoding) = (XMLDoc * (*)(XMLDoc * self, String * name, String * version, String * encoding)) 0x445020;
inline XMLDoc * (*XMLDoc::ptr::_new2)() = (XMLDoc * (*)()) 0x0;
inline void (*XMLDoc::ptr::mark)(XMLDoc * self) = (void (*)(XMLDoc * self)) 0x4452f0;
inline void (*XMLDoc::ptr::CSTR_XMLDoc)(XMLDoc * self) = (void (*)(XMLDoc * self)) 0x444b30;
#endif

#ifdef __linux__

inline String * (*XMLDoc::ptr::Export)(XMLDoc * self, int options) = (String * (*)(XMLDoc * self, int options)) 0x80e3190;
inline XMLDoc * (*XMLDoc::ptr::New)(XMLDoc * self, String * name, String * version, String * encoding) = (XMLDoc * (*)(XMLDoc * self, String * name, String * version, String * encoding)) 0x81288e0;
inline XMLDoc * (*XMLDoc::ptr::_new2)() = (XMLDoc * (*)()) 0x8117680;
inline void (*XMLDoc::ptr::mark)(XMLDoc * self) = (void (*)(XMLDoc * self)) 0x8093150;
inline void (*XMLDoc::ptr::CSTR_XMLDoc)(XMLDoc * self) = (void (*)(XMLDoc * self)) 0x8128800;
#endif
#endif
