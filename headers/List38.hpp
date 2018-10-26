// Generated automatically. Do not edit!
#ifndef _List38_
#define _List38_
template<class T> class Array;
class Enumerator22;
class MinibossTileData;
class Node56;
#include "Object.hpp"

class List38 : public Object  {
public:
    Node56 * _head;

    // Wrappers
    List38() {
        ptr::CSTR_List38(this);
    }

    inline List38 * _New() { return ptr::_New(); }
    inline virtual Node56 * AddLast38(MinibossTileData * data) { return ptr::AddLast38(this, data); }
    inline List38 * _new2(Array<MinibossTileData *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual Enumerator22 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline virtual int Clear() { return ptr::_Clear(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static List38 * (*_New)();
        static Node56 * (*AddLast38)(List38 * self, MinibossTileData * data);
        static List38 * (*_new2)(List38 * self, Array<MinibossTileData *> * arg1);
        static Enumerator22 * (*ObjectEnumerator)(List38 * self);
        static int (*_Clear)();
        static void (*_mark)();
        static void (*CSTR_List38)(List38 * self);
    };
};

#ifdef _WIN32

List38 * (*List38::ptr::_New)() = (List38 * (*)()) 0x0;
Node56 * (*List38::ptr::AddLast38)(List38 * self, MinibossTileData * data) = (Node56 * (*)(List38 * self, MinibossTileData * data)) 0x61ee30;
List38 * (*List38::ptr::_new2)(List38 * self, Array<MinibossTileData *> * arg1) = (List38 * (*)(List38 * self, Array<MinibossTileData *> * arg1)) 0x0;
Enumerator22 * (*List38::ptr::ObjectEnumerator)(List38 * self) = (Enumerator22 * (*)(List38 * self)) 0x61eed0;
int (*List38::ptr::_Clear)() = (int (*)()) 0x0;
void (*List38::ptr::_mark)() = (void (*)()) 0x0;
void (*List38::ptr::CSTR_List38)(List38 * self) = (void (*)(List38 * self)) 0x61ed60;
#endif

#ifdef __linux__

List38 * (*List38::ptr::_New)() = (List38 * (*)()) 0x81b8010;
Node56 * (*List38::ptr::AddLast38)(List38 * self, MinibossTileData * data) = (Node56 * (*)(List38 * self, MinibossTileData * data)) 0x81b8250;
List38 * (*List38::ptr::_new2)(List38 * self, Array<MinibossTileData *> * arg1) = (List38 * (*)(List38 * self, Array<MinibossTileData *> * arg1)) 0x0;
Enumerator22 * (*List38::ptr::ObjectEnumerator)(List38 * self) = (Enumerator22 * (*)(List38 * self)) 0x80ba180;
int (*List38::ptr::_Clear)() = (int (*)()) 0x8091260;
void (*List38::ptr::_mark)() = (void (*)()) 0x8088eb0;
void (*List38::ptr::CSTR_List38)(List38 * self) = (void (*)(List38 * self)) 0x81b8390;
#endif
#endif
