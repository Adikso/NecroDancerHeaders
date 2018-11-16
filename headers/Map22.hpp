// Generated automatically. Do not edit!
#ifndef _Map22_
#define _Map22_
class Node76;
class String;
class TextSprite;
#include "Object.hpp"

class Map22 : public Object  {
public:
    Node76 * root;

    // Wrappers
    inline Map22 * _New() { return ptr::_New(); }
    inline virtual int _Compare(String * arg1, String * arg2) { return ptr::_Compare(this, arg1, arg2); }
    inline virtual Node76 * FindNode(String * arg1) { return ptr::_FindNode(this, arg1); }
    inline virtual bool Contains(String * arg1) { return ptr::_Contains(this, arg1); }
    inline virtual int RotateLeft22(Node76 * arg1) { return ptr::_RotateLeft22(this, arg1); }
    inline virtual int RotateRight22(Node76 * arg1) { return ptr::_RotateRight22(this, arg1); }
    inline virtual int InsertFixup22(Node76 * arg1) { return ptr::_InsertFixup22(this, arg1); }
    inline virtual bool Set26(String * key, TextSprite * value) { return ptr::Set26(this, key, value); }
    inline virtual TextSprite * Get(String * arg1) { return ptr::_Get(this, arg1); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static Map22 * (*_New)();
        static int (*_Compare)(Map22 * self, String * arg1, String * arg2);
        static Node76 * (*_FindNode)(Map22 * self, String * arg1);
        static bool (*_Contains)(Map22 * self, String * arg1);
        static int (*_RotateLeft22)(Map22 * self, Node76 * arg1);
        static int (*_RotateRight22)(Map22 * self, Node76 * arg1);
        static int (*_InsertFixup22)(Map22 * self, Node76 * arg1);
        static bool (*Set26)(Map22 * self, String * key, TextSprite * value);
        static TextSprite * (*_Get)(Map22 * self, String * arg1);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline Map22 * (*Map22::ptr::_New)() = (Map22 * (*)()) 0x0;
inline int (*Map22::ptr::_Compare)(Map22 * self, String * arg1, String * arg2) = (int (*)(Map22 * self, String * arg1, String * arg2)) 0x0;
inline Node76 * (*Map22::ptr::_FindNode)(Map22 * self, String * arg1) = (Node76 * (*)(Map22 * self, String * arg1)) 0x0;
inline bool (*Map22::ptr::_Contains)(Map22 * self, String * arg1) = (bool (*)(Map22 * self, String * arg1)) 0x0;
inline int (*Map22::ptr::_RotateLeft22)(Map22 * self, Node76 * arg1) = (int (*)(Map22 * self, Node76 * arg1)) 0x0;
inline int (*Map22::ptr::_RotateRight22)(Map22 * self, Node76 * arg1) = (int (*)(Map22 * self, Node76 * arg1)) 0x0;
inline int (*Map22::ptr::_InsertFixup22)(Map22 * self, Node76 * arg1) = (int (*)(Map22 * self, Node76 * arg1)) 0x0;
inline bool (*Map22::ptr::Set26)(Map22 * self, String * key, TextSprite * value) = (bool (*)(Map22 * self, String * key, TextSprite * value)) 0x68b5e0;
inline TextSprite * (*Map22::ptr::_Get)(Map22 * self, String * arg1) = (TextSprite * (*)(Map22 * self, String * arg1)) 0x0;
inline void (*Map22::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline Map22 * (*Map22::ptr::_New)() = (Map22 * (*)()) 0x81e2d40;
inline int (*Map22::ptr::_Compare)(Map22 * self, String * arg1, String * arg2) = (int (*)(Map22 * self, String * arg1, String * arg2)) 0x0;
inline Node76 * (*Map22::ptr::_FindNode)(Map22 * self, String * arg1) = (Node76 * (*)(Map22 * self, String * arg1)) 0x80c25e0;
inline bool (*Map22::ptr::_Contains)(Map22 * self, String * arg1) = (bool (*)(Map22 * self, String * arg1)) 0x80c2580;
inline int (*Map22::ptr::_RotateLeft22)(Map22 * self, Node76 * arg1) = (int (*)(Map22 * self, Node76 * arg1)) 0x0;
inline int (*Map22::ptr::_RotateRight22)(Map22 * self, Node76 * arg1) = (int (*)(Map22 * self, Node76 * arg1)) 0x0;
inline int (*Map22::ptr::_InsertFixup22)(Map22 * self, Node76 * arg1) = (int (*)(Map22 * self, Node76 * arg1)) 0x0;
inline bool (*Map22::ptr::Set26)(Map22 * self, String * key, TextSprite * value) = (bool (*)(Map22 * self, String * key, TextSprite * value)) 0x80ddbf0;
inline TextSprite * (*Map22::ptr::_Get)(Map22 * self, String * arg1) = (TextSprite * (*)(Map22 * self, String * arg1)) 0x80c2510;
inline void (*Map22::ptr::_mark)() = (void (*)()) 0x808c710;
#endif
#endif
