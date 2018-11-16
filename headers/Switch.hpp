// Generated automatically. Do not edit!
#ifndef _Switch_
#define _Switch_
class Entity;
class List41;
#include "Trap.hpp"

class Switch : public Trap  {
public:
    int trigger;
    Switch * pairedSwitch;
    static List41 * * switches;

    // Wrappers
    Switch(int xVal, int yVal, int triggerNum, Switch * pair) {
        ptr::CSTR_Switch(this);
        ptr::New(this, xVal, yVal, triggerNum, pair);
    }

    inline void Die() { ptr::Die(this); }
    inline static void RemoveAll() { ptr::RemoveAll(); }
    inline Switch * New(int xVal, int yVal, int triggerNum, Switch * pair) { return ptr::New(this, xVal, yVal, triggerNum, pair); }
    inline Switch * _new2() { return ptr::_new2(); }
    inline void Update() { ptr::Update(this); }
    inline void Trigger(Entity * ent) { ptr::Trigger(this, ent); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static void (*Die)(Switch * self);
        static void (*RemoveAll)();
        static Switch * (*New)(Switch * self, int xVal, int yVal, int triggerNum, Switch * pair);
        static Switch * (*_new2)();
        static void (*Update)(Switch * self);
        static void (*Trigger)(Switch * self, Entity * ent);
        static void (*mark)(Switch * self);
        static void (*CSTR_Switch)(Switch * self);
    };
};

#ifdef _WIN32
inline List41 * * Switch::switches = (List41* *) 0x8355b0;

inline void (*Switch::ptr::Die)(Switch * self) = (void (*)(Switch * self)) 0x629670;
inline void (*Switch::ptr::RemoveAll)() = (void (*)()) 0x6296a0;
inline Switch * (*Switch::ptr::New)(Switch * self, int xVal, int yVal, int triggerNum, Switch * pair) = (Switch * (*)(Switch * self, int xVal, int yVal, int triggerNum, Switch * pair)) 0x6296e0;
inline Switch * (*Switch::ptr::_new2)() = (Switch * (*)()) 0x0;
inline void (*Switch::ptr::Update)(Switch * self) = (void (*)(Switch * self)) 0x6298f0;
inline void (*Switch::ptr::Trigger)(Switch * self, Entity * ent) = (void (*)(Switch * self, Entity * ent)) 0x629940;
inline void (*Switch::ptr::mark)(Switch * self) = (void (*)(Switch * self)) 0x629a60;
inline void (*Switch::ptr::CSTR_Switch)(Switch * self) = (void (*)(Switch * self)) 0x629600;
#endif

#ifdef __linux__
inline List41 * * Switch::switches = (List41* *) 0x856a39c;

inline void (*Switch::ptr::Die)(Switch * self) = (void (*)(Switch * self)) 0x8093560;
inline void (*Switch::ptr::RemoveAll)() = (void (*)()) 0x81b9540;
inline Switch * (*Switch::ptr::New)(Switch * self, int xVal, int yVal, int triggerNum, Switch * pair) = (Switch * (*)(Switch * self, int xVal, int yVal, int triggerNum, Switch * pair)) 0x81b9580;
inline Switch * (*Switch::ptr::_new2)() = (Switch * (*)()) 0x81b97b0;
inline void (*Switch::ptr::Update)(Switch * self) = (void (*)(Switch * self)) 0x812dc40;
inline void (*Switch::ptr::Trigger)(Switch * self, Entity * ent) = (void (*)(Switch * self, Entity * ent)) 0x83b2390;
inline void (*Switch::ptr::mark)(Switch * self) = (void (*)(Switch * self)) 0x80a60b0;
inline void (*Switch::ptr::CSTR_Switch)(Switch * self) = (void (*)(Switch * self)) 0x81b94b0;
#endif
#endif
