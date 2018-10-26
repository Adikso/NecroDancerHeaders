// Generated automatically. Do not edit!
#ifndef _TileObject_
#define _TileObject_
class XMLNode;
#include "Object.hpp"

class TileObject : public Object  {
public:
    int x;
    int y;
    int type;
    int zone;
    bool cracked;
    bool torch;

    // Wrappers
    inline TileObject * _New(int arg1, int arg2, int arg3, int arg4, bool arg5, bool arg6) { return ptr::_New(this, arg1, arg2, arg3, arg4, arg5, arg6); }
    inline TileObject * new2(XMLNode * fromXML) { return ptr::new2(this, fromXML); }
    inline TileObject * _new3() { return ptr::_new3(); }
    inline virtual void AddToXML(XMLNode * xml) { ptr::AddToXML(this, xml); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static TileObject * (*_New)(TileObject * self, int arg1, int arg2, int arg3, int arg4, bool arg5, bool arg6);
        static TileObject * (*new2)(TileObject * self, XMLNode * fromXML);
        static TileObject * (*_new3)();
        static void (*AddToXML)(TileObject * self, XMLNode * xml);
        static void (*_mark)();
    };
};

#ifdef _WIN32

TileObject * (*TileObject::ptr::_New)(TileObject * self, int arg1, int arg2, int arg3, int arg4, bool arg5, bool arg6) = (TileObject * (*)(TileObject * self, int arg1, int arg2, int arg3, int arg4, bool arg5, bool arg6)) 0x0;
TileObject * (*TileObject::ptr::new2)(TileObject * self, XMLNode * fromXML) = (TileObject * (*)(TileObject * self, XMLNode * fromXML)) 0x5d6fa0;
TileObject * (*TileObject::ptr::_new3)() = (TileObject * (*)()) 0x0;
void (*TileObject::ptr::AddToXML)(TileObject * self, XMLNode * xml) = (void (*)(TileObject * self, XMLNode * xml)) 0x5d7280;
void (*TileObject::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

TileObject * (*TileObject::ptr::_New)(TileObject * self, int arg1, int arg2, int arg3, int arg4, bool arg5, bool arg6) = (TileObject * (*)(TileObject * self, int arg1, int arg2, int arg3, int arg4, bool arg5, bool arg6)) 0x8191430;
TileObject * (*TileObject::ptr::new2)(TileObject * self, XMLNode * fromXML) = (TileObject * (*)(TileObject * self, XMLNode * fromXML)) 0x8191460;
TileObject * (*TileObject::ptr::_new3)() = (TileObject * (*)()) 0x8191690;
void (*TileObject::ptr::AddToXML)(TileObject * self, XMLNode * xml) = (void (*)(TileObject * self, XMLNode * xml)) 0x80c81e0;
void (*TileObject::ptr::_mark)() = (void (*)()) 0x8071ce0;
#endif
#endif
