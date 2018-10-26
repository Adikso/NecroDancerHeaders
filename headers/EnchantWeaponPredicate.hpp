// Generated automatically. Do not edit!
#ifndef _EnchantWeaponPredicate_
#define _EnchantWeaponPredicate_
class String;
class XMLNode;
#include "Object.hpp"

class EnchantWeaponPredicate : public Object  {
public:

    // Wrappers
    EnchantWeaponPredicate(String * oldItem_, String * shapeClass_) {
        ptr::CSTR_EnchantWeaponPredicate(this);
        ptr::New(this, oldItem_, shapeClass_);
    }

    inline EnchantWeaponPredicate * New(String * oldItem_, String * shapeClass_) { return ptr::New(this, oldItem_, shapeClass_); }
    inline bool Call(XMLNode * n) { return ptr::Call(this, n); }

    class ptr {
    public:
        static void (*CSTR_EnchantWeaponPredicate)(EnchantWeaponPredicate * self);
        static EnchantWeaponPredicate * (*New)(EnchantWeaponPredicate * self, String * oldItem_, String * shapeClass_);
        static bool (*Call)(EnchantWeaponPredicate * self, XMLNode * n);
    };
};

#ifdef _WIN32

void (*EnchantWeaponPredicate::ptr::CSTR_EnchantWeaponPredicate)(EnchantWeaponPredicate * self) = (void (*)(EnchantWeaponPredicate * self)) 0x636f30;
EnchantWeaponPredicate * (*EnchantWeaponPredicate::ptr::New)(EnchantWeaponPredicate * self, String * oldItem_, String * shapeClass_) = (EnchantWeaponPredicate * (*)(EnchantWeaponPredicate * self, String * oldItem_, String * shapeClass_)) 0x6371a0;
bool (*EnchantWeaponPredicate::ptr::Call)(EnchantWeaponPredicate * self, XMLNode * n) = (bool (*)(EnchantWeaponPredicate * self, XMLNode * n)) 0x637260;
#endif

#ifdef __linux__

void (*EnchantWeaponPredicate::ptr::CSTR_EnchantWeaponPredicate)(EnchantWeaponPredicate * self) = (void (*)(EnchantWeaponPredicate * self)) 0x81be250;
EnchantWeaponPredicate * (*EnchantWeaponPredicate::ptr::New)(EnchantWeaponPredicate * self, String * oldItem_, String * shapeClass_) = (EnchantWeaponPredicate * (*)(EnchantWeaponPredicate * self, String * oldItem_, String * shapeClass_)) 0x81be2e0;
bool (*EnchantWeaponPredicate::ptr::Call)(EnchantWeaponPredicate * self, XMLNode * n) = (bool (*)(EnchantWeaponPredicate * self, XMLNode * n)) 0x80d4f00;
#endif
#endif
