// Generated automatically. Do not edit!
#ifndef _Stack11_
#define _Stack11_
template<class T> class Array;
class Enumerator46;
class XMLNode;
#include "Object.hpp"

class Stack11 : public Object  {
public:
    Array<XMLNode *> * data;
    int length;
    static XMLNode * * _NIL;

    // Wrappers
    inline Stack11 * _New() { return ptr::_New(); }
    inline Stack11 * _new2(Array<XMLNode *> * arg1) { return ptr::_new2(this, arg1); }
    inline virtual int Clear() { return ptr::Clear(this); }
    inline virtual int Push31(XMLNode * value) { return ptr::Push31(this, value); }
    inline virtual int Push32(Array<XMLNode *> * values, int offset, int count) { return ptr::_Push32(this, values, offset, count); }
    inline virtual int Push33(Array<XMLNode *> * values, int offset) { return ptr::_Push33(this, values, offset); }
    inline virtual bool IsEmpty() { return ptr::_IsEmpty(); }
    inline virtual int Length() { return ptr::_Length(); }
    inline virtual XMLNode * Get2(int arg1) { return ptr::_Get2(this, arg1); }
    inline virtual int Remove5(int index) { return ptr::Remove5(this, index); }
    inline virtual Enumerator46 * ObjectEnumerator() { return ptr::ObjectEnumerator(this); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Stack11 * (*_New)();
        static Stack11 * (*_new2)(Stack11 * self, Array<XMLNode *> * arg1);
        static int (*Clear)(Stack11 * self);
        static int (*Push31)(Stack11 * self, XMLNode * value);
        static int (*_Push32)(Stack11 * self, Array<XMLNode *> * values, int offset, int count);
        static int (*_Push33)(Stack11 * self, Array<XMLNode *> * values, int offset);
        static bool (*_IsEmpty)();
        static int (*_Length)();
        static XMLNode * (*_Get2)(Stack11 * self, int arg1);
        static int (*Remove5)(Stack11 * self, int index);
        static Enumerator46 * (*ObjectEnumerator)(Stack11 * self);
        static void (*_mark)();
    };
};

#ifdef _WIN32
inline XMLNode * * Stack11::_NIL = (XMLNode* *) 0x835580;

inline Stack11 * (*Stack11::ptr::_New)() = (Stack11 * (*)()) 0x0;
inline Stack11 * (*Stack11::ptr::_new2)(Stack11 * self, Array<XMLNode *> * arg1) = (Stack11 * (*)(Stack11 * self, Array<XMLNode *> * arg1)) 0x0;
inline int (*Stack11::ptr::Clear)(Stack11 * self) = (int (*)(Stack11 * self)) 0x66cd00;
inline int (*Stack11::ptr::Push31)(Stack11 * self, XMLNode * value) = (int (*)(Stack11 * self, XMLNode * value)) 0x66cda0;
inline int (*Stack11::ptr::_Push32)(Stack11 * self, Array<XMLNode *> * values, int offset, int count) = (int (*)(Stack11 * self, Array<XMLNode *> * values, int offset, int count)) 0x66ce40;
inline int (*Stack11::ptr::_Push33)(Stack11 * self, Array<XMLNode *> * values, int offset) = (int (*)(Stack11 * self, Array<XMLNode *> * values, int offset)) 0x66ce80;
inline bool (*Stack11::ptr::_IsEmpty)() = (bool (*)()) 0x0;
inline int (*Stack11::ptr::_Length)() = (int (*)()) 0x0;
inline XMLNode * (*Stack11::ptr::_Get2)(Stack11 * self, int arg1) = (XMLNode * (*)(Stack11 * self, int arg1)) 0x0;
inline int (*Stack11::ptr::Remove5)(Stack11 * self, int index) = (int (*)(Stack11 * self, int index)) 0x66cec0;
inline Enumerator46 * (*Stack11::ptr::ObjectEnumerator)(Stack11 * self) = (Enumerator46 * (*)(Stack11 * self)) 0x66cfc0;
inline void (*Stack11::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__
inline XMLNode * * Stack11::_NIL = (XMLNode* *) 0x0;

inline Stack11 * (*Stack11::ptr::_New)() = (Stack11 * (*)()) 0x81dae50;
inline Stack11 * (*Stack11::ptr::_new2)(Stack11 * self, Array<XMLNode *> * arg1) = (Stack11 * (*)(Stack11 * self, Array<XMLNode *> * arg1)) 0x0;
inline int (*Stack11::ptr::Clear)(Stack11 * self) = (int (*)(Stack11 * self)) 0x8077cd0;
inline int (*Stack11::ptr::Push31)(Stack11 * self, XMLNode * value) = (int (*)(Stack11 * self, XMLNode * value)) 0x80bde60;
inline int (*Stack11::ptr::_Push32)(Stack11 * self, Array<XMLNode *> * values, int offset, int count) = (int (*)(Stack11 * self, Array<XMLNode *> * values, int offset, int count)) 0x0;
inline int (*Stack11::ptr::_Push33)(Stack11 * self, Array<XMLNode *> * values, int offset) = (int (*)(Stack11 * self, Array<XMLNode *> * values, int offset)) 0x0;
inline bool (*Stack11::ptr::_IsEmpty)() = (bool (*)()) 0x8077d80;
inline int (*Stack11::ptr::_Length)() = (int (*)()) 0x8077d90;
inline XMLNode * (*Stack11::ptr::_Get2)(Stack11 * self, int arg1) = (XMLNode * (*)(Stack11 * self, int arg1)) 0x8077da0;
inline int (*Stack11::ptr::Remove5)(Stack11 * self, int index) = (int (*)(Stack11 * self, int index)) 0x8095b70;
inline Enumerator46 * (*Stack11::ptr::ObjectEnumerator)(Stack11 * self) = (Enumerator46 * (*)(Stack11 * self)) 0x80bc180;
inline void (*Stack11::ptr::_mark)() = (void (*)()) 0x8077db0;
#endif
#endif
