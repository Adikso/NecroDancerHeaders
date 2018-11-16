// Generated automatically. Do not edit!
#ifndef _StandardItemPredicate_
#define _StandardItemPredicate_
class String;
class XMLNode;
#include "Object.hpp"

class StandardItemPredicate : public Object  {
public:

    // Wrappers
    StandardItemPredicate(String * itemClass_, int chestColor_, String * itemSlot_) {
        ptr::CSTR_StandardItemPredicate(this);
        ptr::New(this, itemClass_, chestColor_, itemSlot_);
    }

    inline StandardItemPredicate * New(String * itemClass_, int chestColor_, String * itemSlot_) { return ptr::New(this, itemClass_, chestColor_, itemSlot_); }
    inline bool Call(XMLNode * n) { return ptr::Call(this, n); }

    class ptr {
    public:
        static void (*CSTR_StandardItemPredicate)(StandardItemPredicate * self);
        static StandardItemPredicate * (*New)(StandardItemPredicate * self, String * itemClass_, int chestColor_, String * itemSlot_);
        static bool (*Call)(StandardItemPredicate * self, XMLNode * n);
    };
};

#ifdef _WIN32

inline void (*StandardItemPredicate::ptr::CSTR_StandardItemPredicate)(StandardItemPredicate * self) = (void (*)(StandardItemPredicate * self)) 0x61bb20;
inline StandardItemPredicate * (*StandardItemPredicate::ptr::New)(StandardItemPredicate * self, String * itemClass_, int chestColor_, String * itemSlot_) = (StandardItemPredicate * (*)(StandardItemPredicate * self, String * itemClass_, int chestColor_, String * itemSlot_)) 0x61bda0;
inline bool (*StandardItemPredicate::ptr::Call)(StandardItemPredicate * self, XMLNode * n) = (bool (*)(StandardItemPredicate * self, XMLNode * n)) 0x61be60;
#endif

#ifdef __linux__

inline void (*StandardItemPredicate::ptr::CSTR_StandardItemPredicate)(StandardItemPredicate * self) = (void (*)(StandardItemPredicate * self)) 0x81b7050;
inline StandardItemPredicate * (*StandardItemPredicate::ptr::New)(StandardItemPredicate * self, String * itemClass_, int chestColor_, String * itemSlot_) = (StandardItemPredicate * (*)(StandardItemPredicate * self, String * itemClass_, int chestColor_, String * itemSlot_)) 0x81b70f0;
inline bool (*StandardItemPredicate::ptr::Call)(StandardItemPredicate * self, XMLNode * n) = (bool (*)(StandardItemPredicate * self, XMLNode * n)) 0x815dd00;
#endif
#endif
