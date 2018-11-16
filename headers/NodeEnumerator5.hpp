// Generated automatically. Do not edit!
#ifndef _NodeEnumerator5_
#define _NodeEnumerator5_
class Node75;
#include "Object.hpp"

class NodeEnumerator5 : public Object  {
public:
    Node75 * node;

    // Wrappers
    inline NodeEnumerator5 * _New(Node75 * arg1) { return ptr::_New(this, arg1); }
    inline NodeEnumerator5 * _new2() { return ptr::_new2(); }
    inline virtual bool HasNext() { return ptr::_HasNext(); }
    inline virtual Node75 * NextObject() { return ptr::_NextObject(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static NodeEnumerator5 * (*_New)(NodeEnumerator5 * self, Node75 * arg1);
        static NodeEnumerator5 * (*_new2)();
        static bool (*_HasNext)();
        static Node75 * (*_NextObject)();
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline NodeEnumerator5 * (*NodeEnumerator5::ptr::_New)(NodeEnumerator5 * self, Node75 * arg1) = (NodeEnumerator5 * (*)(NodeEnumerator5 * self, Node75 * arg1)) 0x0;
inline NodeEnumerator5 * (*NodeEnumerator5::ptr::_new2)() = (NodeEnumerator5 * (*)()) 0x0;
inline bool (*NodeEnumerator5::ptr::_HasNext)() = (bool (*)()) 0x0;
inline Node75 * (*NodeEnumerator5::ptr::_NextObject)() = (Node75 * (*)()) 0x0;
inline void (*NodeEnumerator5::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline NodeEnumerator5 * (*NodeEnumerator5::ptr::_New)(NodeEnumerator5 * self, Node75 * arg1) = (NodeEnumerator5 * (*)(NodeEnumerator5 * self, Node75 * arg1)) 0x0;
inline NodeEnumerator5 * (*NodeEnumerator5::ptr::_new2)() = (NodeEnumerator5 * (*)()) 0x81ded30;
inline bool (*NodeEnumerator5::ptr::_HasNext)() = (bool (*)()) 0x80783a0;
inline Node75 * (*NodeEnumerator5::ptr::_NextObject)() = (Node75 * (*)()) 0x809bbb0;
inline void (*NodeEnumerator5::ptr::_mark)() = (void (*)()) 0x808de50;
#endif
#endif
