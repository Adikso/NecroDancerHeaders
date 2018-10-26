// Generated automatically. Do not edit!
#ifndef _LevelObject_
#define _LevelObject_
class List14;
class List16;
class List18;
class List20;
class List22;
class List23;
class List25;
class XMLNode;
#include "Object.hpp"

class LevelObject : public Object  {
public:
    int levelNum;
    int musicType;
    int bossNum;
    List14 * tiles;
    List16 * traps;
    List18 * enemies;
    List20 * items;
    List22 * chests;
    List23 * crates;
    List25 * shrines;

    // Wrappers
    LevelObject(int num, int music, int boss, bool loadFromCurrent, XMLNode * fromXML) {
        ptr::CSTR_LevelObject(this);
        ptr::New(this, num, music, boss, loadFromCurrent, fromXML);
    }

    inline LevelObject * New(int num, int music, int boss, bool loadFromCurrent, XMLNode * fromXML) { return ptr::New(this, num, music, boss, loadFromCurrent, fromXML); }
    inline LevelObject * _new2() { return ptr::_new2(); }
    inline virtual void CreateMap() { ptr::CreateMap(this); }
    inline virtual XMLNode * ToXML() { return ptr::ToXML(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static LevelObject * (*New)(LevelObject * self, int num, int music, int boss, bool loadFromCurrent, XMLNode * fromXML);
        static LevelObject * (*_new2)();
        static void (*CreateMap)(LevelObject * self);
        static XMLNode * (*ToXML)(LevelObject * self);
        static void (*mark)(LevelObject * self);
        static void (*CSTR_LevelObject)(LevelObject * self);
    };
};

#ifdef _WIN32

LevelObject * (*LevelObject::ptr::New)(LevelObject * self, int num, int music, int boss, bool loadFromCurrent, XMLNode * fromXML) = (LevelObject * (*)(LevelObject * self, int num, int music, int boss, bool loadFromCurrent, XMLNode * fromXML)) 0x5c7280;
LevelObject * (*LevelObject::ptr::_new2)() = (LevelObject * (*)()) 0x0;
void (*LevelObject::ptr::CreateMap)(LevelObject * self) = (void (*)(LevelObject * self)) 0x5c8540;
XMLNode * (*LevelObject::ptr::ToXML)(LevelObject * self) = (XMLNode * (*)(LevelObject * self)) 0x5c8ea0;
void (*LevelObject::ptr::mark)(LevelObject * self) = (void (*)(LevelObject * self)) 0x5c9630;
void (*LevelObject::ptr::CSTR_LevelObject)(LevelObject * self) = (void (*)(LevelObject * self)) 0x5c70f0;
#endif

#ifdef __linux__

LevelObject * (*LevelObject::ptr::New)(LevelObject * self, int num, int music, int boss, bool loadFromCurrent, XMLNode * fromXML) = (LevelObject * (*)(LevelObject * self, int num, int music, int boss, bool loadFromCurrent, XMLNode * fromXML)) 0x8198890;
LevelObject * (*LevelObject::ptr::_new2)() = (LevelObject * (*)()) 0x8189940;
void (*LevelObject::ptr::CreateMap)(LevelObject * self) = (void (*)(LevelObject * self)) 0x82d7120;
XMLNode * (*LevelObject::ptr::ToXML)(LevelObject * self) = (XMLNode * (*)(LevelObject * self)) 0x8129250;
void (*LevelObject::ptr::mark)(LevelObject * self) = (void (*)(LevelObject * self)) 0x8085300;
void (*LevelObject::ptr::CSTR_LevelObject)(LevelObject * self) = (void (*)(LevelObject * self)) 0x8199e80;
#endif
#endif
