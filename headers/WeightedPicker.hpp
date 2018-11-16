// Generated automatically. Do not edit!
#ifndef _WeightedPicker_
#define _WeightedPicker_
class Stack;
class Stack5;
#include "Object.hpp"

class WeightedPicker : public Object  {
public:
    Stack * weights;
    Stack5 * enabled;

    // Wrappers
    WeightedPicker() {
        ptr::CSTR_WeightedPicker(this);
    }

    inline WeightedPicker * _New() { return ptr::_New(); }
    inline virtual void Push(int weight) { ptr::Push(this, weight); }
    inline virtual int PickRandom(bool useSeed) { return ptr::PickRandom(this, useSeed); }
    inline virtual int Length() { return ptr::Length(this); }
    inline virtual void SetEnabled(int i, bool en) { ptr::SetEnabled(this, i, en); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static WeightedPicker * (*_New)();
        static void (*Push)(WeightedPicker * self, int weight);
        static int (*PickRandom)(WeightedPicker * self, bool useSeed);
        static int (*Length)(WeightedPicker * self);
        static void (*SetEnabled)(WeightedPicker * self, int i, bool en);
        static void (*mark)(WeightedPicker * self);
        static void (*CSTR_WeightedPicker)(WeightedPicker * self);
    };
};

#ifdef _WIN32

inline WeightedPicker * (*WeightedPicker::ptr::_New)() = (WeightedPicker * (*)()) 0x0;
inline void (*WeightedPicker::ptr::Push)(WeightedPicker * self, int weight) = (void (*)(WeightedPicker * self, int weight)) 0x65d460;
inline int (*WeightedPicker::ptr::PickRandom)(WeightedPicker * self, bool useSeed) = (int (*)(WeightedPicker * self, bool useSeed)) 0x65d490;
inline int (*WeightedPicker::ptr::Length)(WeightedPicker * self) = (int (*)(WeightedPicker * self)) 0x5c3780;
inline void (*WeightedPicker::ptr::SetEnabled)(WeightedPicker * self, int i, bool en) = (void (*)(WeightedPicker * self, int i, bool en)) 0x65d5f0;
inline void (*WeightedPicker::ptr::mark)(WeightedPicker * self) = (void (*)(WeightedPicker * self)) 0x454440;
inline void (*WeightedPicker::ptr::CSTR_WeightedPicker)(WeightedPicker * self) = (void (*)(WeightedPicker * self)) 0x65d350;
#endif

#ifdef __linux__

inline WeightedPicker * (*WeightedPicker::ptr::_New)() = (WeightedPicker * (*)()) 0x81d3960;
inline void (*WeightedPicker::ptr::Push)(WeightedPicker * self, int weight) = (void (*)(WeightedPicker * self, int weight)) 0x8076830;
inline int (*WeightedPicker::ptr::PickRandom)(WeightedPicker * self, bool useSeed) = (int (*)(WeightedPicker * self, bool useSeed)) 0x8230770;
inline int (*WeightedPicker::ptr::Length)(WeightedPicker * self) = (int (*)(WeightedPicker * self)) 0x8076870;
inline void (*WeightedPicker::ptr::SetEnabled)(WeightedPicker * self, int i, bool en) = (void (*)(WeightedPicker * self, int i, bool en)) 0x8076890;
inline void (*WeightedPicker::ptr::mark)(WeightedPicker * self) = (void (*)(WeightedPicker * self)) 0x808f790;
inline void (*WeightedPicker::ptr::CSTR_WeightedPicker)(WeightedPicker * self) = (void (*)(WeightedPicker * self)) 0x81d3720;
#endif
#endif
