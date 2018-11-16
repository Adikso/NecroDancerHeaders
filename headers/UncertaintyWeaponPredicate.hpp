// Generated automatically. Do not edit!
#ifndef _UncertaintyWeaponPredicate_
#define _UncertaintyWeaponPredicate_
class XMLNode;
#include "Object.hpp"

class UncertaintyWeaponPredicate : public Object  {
public:

    // Wrappers
    UncertaintyWeaponPredicate() {
        ptr::CSTR_UncertaintyWeaponPredicate(this);
    }

    inline bool Call(XMLNode * n) { return ptr::Call(this, n); }

    class ptr {
    public:
        static void (*CSTR_UncertaintyWeaponPredicate)(UncertaintyWeaponPredicate * self);
        static bool (*Call)(UncertaintyWeaponPredicate * self, XMLNode * n);
    };
};

#ifdef _WIN32

inline void (*UncertaintyWeaponPredicate::ptr::CSTR_UncertaintyWeaponPredicate)(UncertaintyWeaponPredicate * self) = (void (*)(UncertaintyWeaponPredicate * self)) 0x61ce60;
inline bool (*UncertaintyWeaponPredicate::ptr::Call)(UncertaintyWeaponPredicate * self, XMLNode * n) = (bool (*)(UncertaintyWeaponPredicate * self, XMLNode * n)) 0x61cf50;
#endif

#ifdef __linux__

inline void (*UncertaintyWeaponPredicate::ptr::CSTR_UncertaintyWeaponPredicate)(UncertaintyWeaponPredicate * self) = (void (*)(UncertaintyWeaponPredicate * self)) 0x81b78c0;
inline bool (*UncertaintyWeaponPredicate::ptr::Call)(UncertaintyWeaponPredicate * self, XMLNode * n) = (bool (*)(UncertaintyWeaponPredicate * self, XMLNode * n)) 0x80d4d30;
#endif
#endif
