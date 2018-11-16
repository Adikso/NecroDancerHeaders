// Generated automatically. Do not edit!
#ifndef _TransmutePredicate_
#define _TransmutePredicate_
class XMLNode;
#include "Object.hpp"

class TransmutePredicate : public Object  {
public:

    // Wrappers
    TransmutePredicate() {
        ptr::CSTR_TransmutePredicate(this);
    }

    inline bool Call(XMLNode * n) { return ptr::Call(this, n); }

    class ptr {
    public:
        static void (*CSTR_TransmutePredicate)(TransmutePredicate * self);
        static bool (*Call)(TransmutePredicate * self, XMLNode * n);
    };
};

#ifdef _WIN32

inline void (*TransmutePredicate::ptr::CSTR_TransmutePredicate)(TransmutePredicate * self) = (void (*)(TransmutePredicate * self)) 0x636a20;
inline bool (*TransmutePredicate::ptr::Call)(TransmutePredicate * self, XMLNode * n) = (bool (*)(TransmutePredicate * self, XMLNode * n)) 0x636b10;
#endif

#ifdef __linux__

inline void (*TransmutePredicate::ptr::CSTR_TransmutePredicate)(TransmutePredicate * self) = (void (*)(TransmutePredicate * self)) 0x81bd900;
inline bool (*TransmutePredicate::ptr::Call)(TransmutePredicate * self, XMLNode * n) = (bool (*)(TransmutePredicate * self, XMLNode * n)) 0x80c7280;
#endif
#endif
