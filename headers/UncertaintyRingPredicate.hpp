// Generated automatically. Do not edit!
#ifndef _UncertaintyRingPredicate_
#define _UncertaintyRingPredicate_
class XMLNode;
#include "Object.hpp"

class UncertaintyRingPredicate : public Object  {
public:

    // Wrappers
    UncertaintyRingPredicate() {
        ptr::CSTR_UncertaintyRingPredicate(this);
    }

    inline bool Call(XMLNode * n) { return ptr::Call(this, n); }

    class ptr {
    public:
        static void (*CSTR_UncertaintyRingPredicate)(UncertaintyRingPredicate * self);
        static bool (*Call)(UncertaintyRingPredicate * self, XMLNode * n);
    };
};

#ifdef _WIN32

inline void (*UncertaintyRingPredicate::ptr::CSTR_UncertaintyRingPredicate)(UncertaintyRingPredicate * self) = (void (*)(UncertaintyRingPredicate * self)) 0x61d1e0;
inline bool (*UncertaintyRingPredicate::ptr::Call)(UncertaintyRingPredicate * self, XMLNode * n) = (bool (*)(UncertaintyRingPredicate * self, XMLNode * n)) 0x61d2d0;
#endif

#ifdef __linux__

inline void (*UncertaintyRingPredicate::ptr::CSTR_UncertaintyRingPredicate)(UncertaintyRingPredicate * self) = (void (*)(UncertaintyRingPredicate * self)) 0x81b78f0;
inline bool (*UncertaintyRingPredicate::ptr::Call)(UncertaintyRingPredicate * self, XMLNode * n) = (bool (*)(UncertaintyRingPredicate * self, XMLNode * n)) 0x80c9ca0;
#endif
#endif
