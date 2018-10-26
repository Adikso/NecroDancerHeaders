// Generated automatically. Do not edit!
#ifndef _XMLNode_
#define _XMLNode_
class List;
class String;
class StringMap;
class XMLAttribute;
class XMLDoc;
class XMLStringBuffer;
#include "Object.hpp"

class XMLNode : public Object  {
public:
    XMLNode * firstChild;
    XMLDoc * doc;
    String * name;
    XMLNode * nextSibling;
    StringMap * attributes;
    String * value;
    List * children;
    bool valid;
    String * path;
    List * pathList;
    XMLNode * parent;
    int line;
    int column;
    int offset;
    XMLNode * lastChild;
    XMLNode * previousSibling;

    // Wrappers
    XMLNode(String * name, bool valid) {
        ptr::CSTR_XMLNode(this);
        ptr::New(this, name, valid);
    }

    inline virtual XMLNode * GetChild() { return ptr::GetChild(this); }
    inline virtual XMLNode * GetChild2(String * name) { return ptr::GetChild2(this, name); }
    inline virtual XMLAttribute * GetXMLAttribute(String * id) { return ptr::GetXMLAttribute(this, id); }
    inline virtual XMLNode * GetChild3(String * name, String * attributes) { return ptr::GetChild3(this, name, attributes); }
    inline virtual String * GetAttribute(String * id) { return ptr::GetAttribute(this, id); }
    inline virtual bool GetAttribute2(String * id, bool defaultValue) { return ptr::GetAttribute2(this, id, defaultValue); }
    inline virtual int GetAttribute3(String * id, int defaultValue) { return ptr::GetAttribute3(this, id, defaultValue); }
    inline virtual float GetAttribute4(String * id, float defaultValue) { return ptr::GetAttribute4(this, id, defaultValue); }
    inline virtual String * GetAttribute5(String * id, String * defaultValue) { return ptr::GetAttribute5(this, id, defaultValue); }
    inline virtual String * Export(int arg1) { return ptr::_Export(this, arg1); }
    inline virtual void Export2(int options, XMLStringBuffer * buffer, int depth) { ptr::Export2(this, options, buffer, depth); }
    inline virtual void SetAttribute(String * id) { ptr::SetAttribute(this, id); }
    inline virtual void SetAttribute2(String * id, bool value) { ptr::SetAttribute2(this, id, value); }
    inline virtual void SetAttribute3(String * id, int value) { ptr::SetAttribute3(this, id, value); }
    inline virtual void SetAttribute4(String * id, float value) { ptr::SetAttribute4(this, id, value); }
    inline virtual void SetAttribute5(String * id, String * value) { ptr::SetAttribute5(this, id, value); }
    inline XMLNode * New(String * name, bool valid) { return ptr::New(this, name, valid); }
    inline XMLNode * _new2() { return ptr::_new2(); }
    inline virtual XMLNode * AddChild(String * name, String * attributes) { return ptr::AddChild(this, name, attributes); }
    inline virtual void RemoveAttribute(String * id) { ptr::RemoveAttribute(this, id); }
    inline virtual bool HasAttribute(String * id) { return ptr::HasAttribute(this, id); }
    inline virtual List * GetChildrenWithAttributes(String * attributes) { return ptr::GetChildrenWithAttributes(this, attributes); }
    inline virtual List * GetChildren() { return ptr::GetChildren(this); }
    inline virtual List * GetChildren2(String * name) { return ptr::GetChildren2(this, name); }
    inline virtual List * GetChildren3(String * name, String * attributes) { return ptr::GetChildren3(this, name, attributes); }
    inline virtual XMLNode * GetChildAtPath(String * path) { return ptr::GetChildAtPath(this, path); }
    inline virtual XMLNode * GetChildAtPath2(String * path, String * attributes) { return ptr::GetChildAtPath2(this, path, attributes); }
    inline virtual void Free() { ptr::Free(this); }
    inline virtual void RemoveChild(XMLNode * child) { ptr::RemoveChild(this, child); }
    inline virtual String * ExportHack(int options) { return ptr::ExportHack(this, options); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static XMLNode * (*GetChild)(XMLNode * self);
        static XMLNode * (*GetChild2)(XMLNode * self, String * name);
        static XMLAttribute * (*GetXMLAttribute)(XMLNode * self, String * id);
        static XMLNode * (*GetChild3)(XMLNode * self, String * name, String * attributes);
        static String * (*GetAttribute)(XMLNode * self, String * id);
        static bool (*GetAttribute2)(XMLNode * self, String * id, bool defaultValue);
        static int (*GetAttribute3)(XMLNode * self, String * id, int defaultValue);
        static float (*GetAttribute4)(XMLNode * self, String * id, float defaultValue);
        static String * (*GetAttribute5)(XMLNode * self, String * id, String * defaultValue);
        static String * (*_Export)(XMLNode * self, int arg1);
        static void (*Export2)(XMLNode * self, int options, XMLStringBuffer * buffer, int depth);
        static void (*SetAttribute)(XMLNode * self, String * id);
        static void (*SetAttribute2)(XMLNode * self, String * id, bool value);
        static void (*SetAttribute3)(XMLNode * self, String * id, int value);
        static void (*SetAttribute4)(XMLNode * self, String * id, float value);
        static void (*SetAttribute5)(XMLNode * self, String * id, String * value);
        static XMLNode * (*New)(XMLNode * self, String * name, bool valid);
        static XMLNode * (*_new2)();
        static XMLNode * (*AddChild)(XMLNode * self, String * name, String * attributes);
        static void (*RemoveAttribute)(XMLNode * self, String * id);
        static bool (*HasAttribute)(XMLNode * self, String * id);
        static List * (*GetChildrenWithAttributes)(XMLNode * self, String * attributes);
        static List * (*GetChildren)(XMLNode * self);
        static List * (*GetChildren2)(XMLNode * self, String * name);
        static List * (*GetChildren3)(XMLNode * self, String * name, String * attributes);
        static XMLNode * (*GetChildAtPath)(XMLNode * self, String * path);
        static XMLNode * (*GetChildAtPath2)(XMLNode * self, String * path, String * attributes);
        static void (*Free)(XMLNode * self);
        static void (*RemoveChild)(XMLNode * self, XMLNode * child);
        static String * (*ExportHack)(XMLNode * self, int options);
        static void (*mark)(XMLNode * self);
        static void (*CSTR_XMLNode)(XMLNode * self);
    };
};

#ifdef _WIN32

XMLNode * (*XMLNode::ptr::GetChild)(XMLNode * self) = (XMLNode * (*)(XMLNode * self)) 0x442ae0;
XMLNode * (*XMLNode::ptr::GetChild2)(XMLNode * self, String * name) = (XMLNode * (*)(XMLNode * self, String * name)) 0x442af0;
XMLAttribute * (*XMLNode::ptr::GetXMLAttribute)(XMLNode * self, String * id) = (XMLAttribute * (*)(XMLNode * self, String * id)) 0x442bd0;
XMLNode * (*XMLNode::ptr::GetChild3)(XMLNode * self, String * name, String * attributes) = (XMLNode * (*)(XMLNode * self, String * name, String * attributes)) 0x442c50;
String * (*XMLNode::ptr::GetAttribute)(XMLNode * self, String * id) = (String * (*)(XMLNode * self, String * id)) 0x442dc0;
bool (*XMLNode::ptr::GetAttribute2)(XMLNode * self, String * id, bool defaultValue) = (bool (*)(XMLNode * self, String * id, bool defaultValue)) 0x442e60;
int (*XMLNode::ptr::GetAttribute3)(XMLNode * self, String * id, int defaultValue) = (int (*)(XMLNode * self, String * id, int defaultValue)) 0x442ff0;
float (*XMLNode::ptr::GetAttribute4)(XMLNode * self, String * id, float defaultValue) = (float (*)(XMLNode * self, String * id, float defaultValue)) 0x443080;
String * (*XMLNode::ptr::GetAttribute5)(XMLNode * self, String * id, String * defaultValue) = (String * (*)(XMLNode * self, String * id, String * defaultValue)) 0x443120;
String * (*XMLNode::ptr::_Export)(XMLNode * self, int arg1) = (String * (*)(XMLNode * self, int arg1)) 0x0;
void (*XMLNode::ptr::Export2)(XMLNode * self, int options, XMLStringBuffer * buffer, int depth) = (void (*)(XMLNode * self, int options, XMLStringBuffer * buffer, int depth)) 0x443280;
void (*XMLNode::ptr::SetAttribute)(XMLNode * self, String * id) = (void (*)(XMLNode * self, String * id)) 0x443510;
void (*XMLNode::ptr::SetAttribute2)(XMLNode * self, String * id, bool value) = (void (*)(XMLNode * self, String * id, bool value)) 0x443670;
void (*XMLNode::ptr::SetAttribute3)(XMLNode * self, String * id, int value) = (void (*)(XMLNode * self, String * id, int value)) 0x4437d0;
void (*XMLNode::ptr::SetAttribute4)(XMLNode * self, String * id, float value) = (void (*)(XMLNode * self, String * id, float value)) 0x443920;
void (*XMLNode::ptr::SetAttribute5)(XMLNode * self, String * id, String * value) = (void (*)(XMLNode * self, String * id, String * value)) 0x443a80;
XMLNode * (*XMLNode::ptr::New)(XMLNode * self, String * name, bool valid) = (XMLNode * (*)(XMLNode * self, String * name, bool valid)) 0x443bd0;
XMLNode * (*XMLNode::ptr::_new2)() = (XMLNode * (*)()) 0x0;
XMLNode * (*XMLNode::ptr::AddChild)(XMLNode * self, String * name, String * attributes) = (XMLNode * (*)(XMLNode * self, String * name, String * attributes)) 0x443c60;
void (*XMLNode::ptr::RemoveAttribute)(XMLNode * self, String * id) = (void (*)(XMLNode * self, String * id)) 0x443fb0;
bool (*XMLNode::ptr::HasAttribute)(XMLNode * self, String * id) = (bool (*)(XMLNode * self, String * id)) 0x444030;
List * (*XMLNode::ptr::GetChildrenWithAttributes)(XMLNode * self, String * attributes) = (List * (*)(XMLNode * self, String * attributes)) 0x4440c0;
List * (*XMLNode::ptr::GetChildren)(XMLNode * self) = (List * (*)(XMLNode * self)) 0x4441d0;
List * (*XMLNode::ptr::GetChildren2)(XMLNode * self, String * name) = (List * (*)(XMLNode * self, String * name)) 0x444260;
List * (*XMLNode::ptr::GetChildren3)(XMLNode * self, String * name, String * attributes) = (List * (*)(XMLNode * self, String * name, String * attributes)) 0x444330;
XMLNode * (*XMLNode::ptr::GetChildAtPath)(XMLNode * self, String * path) = (XMLNode * (*)(XMLNode * self, String * path)) 0x444490;
XMLNode * (*XMLNode::ptr::GetChildAtPath2)(XMLNode * self, String * path, String * attributes) = (XMLNode * (*)(XMLNode * self, String * path, String * attributes)) 0x4445e0;
void (*XMLNode::ptr::Free)(XMLNode * self) = (void (*)(XMLNode * self)) 0x4447d0;
void (*XMLNode::ptr::RemoveChild)(XMLNode * self, XMLNode * child) = (void (*)(XMLNode * self, XMLNode * child)) 0x444800;
String * (*XMLNode::ptr::ExportHack)(XMLNode * self, int options) = (String * (*)(XMLNode * self, int options)) 0x4431e0;
void (*XMLNode::ptr::mark)(XMLNode * self) = (void (*)(XMLNode * self)) 0x444890;
void (*XMLNode::ptr::CSTR_XMLNode)(XMLNode * self) = (void (*)(XMLNode * self)) 0x4427b0;
#endif

#ifdef __linux__

XMLNode * (*XMLNode::ptr::GetChild)(XMLNode * self) = (XMLNode * (*)(XMLNode * self)) 0x806d590;
XMLNode * (*XMLNode::ptr::GetChild2)(XMLNode * self, String * name) = (XMLNode * (*)(XMLNode * self, String * name)) 0x80c24c0;
XMLAttribute * (*XMLNode::ptr::GetXMLAttribute)(XMLNode * self, String * id) = (XMLAttribute * (*)(XMLNode * self, String * id)) 0x80c4de0;
XMLNode * (*XMLNode::ptr::GetChild3)(XMLNode * self, String * name, String * attributes) = (XMLNode * (*)(XMLNode * self, String * name, String * attributes)) 0x80d9ba0;
String * (*XMLNode::ptr::GetAttribute)(XMLNode * self, String * id) = (String * (*)(XMLNode * self, String * id)) 0x80c4f50;
bool (*XMLNode::ptr::GetAttribute2)(XMLNode * self, String * id, bool defaultValue) = (bool (*)(XMLNode * self, String * id, bool defaultValue)) 0x80d2be0;
int (*XMLNode::ptr::GetAttribute3)(XMLNode * self, String * id, int defaultValue) = (int (*)(XMLNode * self, String * id, int defaultValue)) 0x80d2a60;
float (*XMLNode::ptr::GetAttribute4)(XMLNode * self, String * id, float defaultValue) = (float (*)(XMLNode * self, String * id, float defaultValue)) 0x80d2ed0;
String * (*XMLNode::ptr::GetAttribute5)(XMLNode * self, String * id, String * defaultValue) = (String * (*)(XMLNode * self, String * id, String * defaultValue)) 0x80c4d50;
String * (*XMLNode::ptr::_Export)(XMLNode * self, int arg1) = (String * (*)(XMLNode * self, int arg1)) 0x80da810;
void (*XMLNode::ptr::Export2)(XMLNode * self, int options, XMLStringBuffer * buffer, int depth) = (void (*)(XMLNode * self, int options, XMLStringBuffer * buffer, int depth)) 0x80e2ce0;
void (*XMLNode::ptr::SetAttribute)(XMLNode * self, String * id) = (void (*)(XMLNode * self, String * id)) 0x80e3550;
void (*XMLNode::ptr::SetAttribute2)(XMLNode * self, String * id, bool value) = (void (*)(XMLNode * self, String * id, bool value)) 0x80e3b70;
void (*XMLNode::ptr::SetAttribute3)(XMLNode * self, String * id, int value) = (void (*)(XMLNode * self, String * id, int value)) 0x80e3760;
void (*XMLNode::ptr::SetAttribute4)(XMLNode * self, String * id, float value) = (void (*)(XMLNode * self, String * id, float value)) 0x80e3da0;
void (*XMLNode::ptr::SetAttribute5)(XMLNode * self, String * id, String * value) = (void (*)(XMLNode * self, String * id, String * value)) 0x80e3980;
XMLNode * (*XMLNode::ptr::New)(XMLNode * self, String * name, bool valid) = (XMLNode * (*)(XMLNode * self, String * name, bool valid)) 0x8117620;
XMLNode * (*XMLNode::ptr::_new2)() = (XMLNode * (*)()) 0x8117670;
XMLNode * (*XMLNode::ptr::AddChild)(XMLNode * self, String * name, String * attributes) = (XMLNode * (*)(XMLNode * self, String * name, String * attributes)) 0x812bf60;
void (*XMLNode::ptr::RemoveAttribute)(XMLNode * self, String * id) = (void (*)(XMLNode * self, String * id)) 0x80c4ce0;
bool (*XMLNode::ptr::HasAttribute)(XMLNode * self, String * id) = (bool (*)(XMLNode * self, String * id)) 0x80c4c80;
List * (*XMLNode::ptr::GetChildrenWithAttributes)(XMLNode * self, String * attributes) = (List * (*)(XMLNode * self, String * attributes)) 0x8128db0;
List * (*XMLNode::ptr::GetChildren)(XMLNode * self) = (List * (*)(XMLNode * self)) 0x81285b0;
List * (*XMLNode::ptr::GetChildren2)(XMLNode * self, String * name) = (List * (*)(XMLNode * self, String * name)) 0x8128500;
List * (*XMLNode::ptr::GetChildren3)(XMLNode * self, String * name, String * attributes) = (List * (*)(XMLNode * self, String * name, String * attributes)) 0x8128b60;
XMLNode * (*XMLNode::ptr::GetChildAtPath)(XMLNode * self, String * path) = (XMLNode * (*)(XMLNode * self, String * path)) 0x80c9b60;
XMLNode * (*XMLNode::ptr::GetChildAtPath2)(XMLNode * self, String * path, String * attributes) = (XMLNode * (*)(XMLNode * self, String * path, String * attributes)) 0x80d9d70;
void (*XMLNode::ptr::Free)(XMLNode * self) = (void (*)(XMLNode * self)) 0x806d5b0;
void (*XMLNode::ptr::RemoveChild)(XMLNode * self, XMLNode * child) = (void (*)(XMLNode * self, XMLNode * child)) 0x8095c20;
String * (*XMLNode::ptr::ExportHack)(XMLNode * self, int options) = (String * (*)(XMLNode * self, int options)) 0x80d91f0;
void (*XMLNode::ptr::mark)(XMLNode * self) = (void (*)(XMLNode * self)) 0x8092ea0;
void (*XMLNode::ptr::CSTR_XMLNode)(XMLNode * self) = (void (*)(XMLNode * self)) 0x8128640;
#endif
#endif
