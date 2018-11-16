// Generated automatically. Do not edit!
#ifndef _ReplayData_
#define _ReplayData_
template<class T> class Array;
class IntMap;
class List25;
#include "Object.hpp"

class ReplayData : public Object  {
public:
    List25 * randList1;
    List25 * randList2;
    int cameraWidth;
    int cameraHeight;
    int randSeed;
    int numPlayers;
    int lastBeat;
    Array<int> * charID;
    Array<IntMap *> * playerInputs;
    Array<List25 *> * missedBeats;

    // Wrappers
    ReplayData() {
        ptr::CSTR_ReplayData(this);
    }

    inline ReplayData * _New() { return ptr::_New(); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static ReplayData * (*_New)();
        static void (*mark)(ReplayData * self);
        static void (*CSTR_ReplayData)(ReplayData * self);
    };
};

#ifdef _WIN32

inline ReplayData * (*ReplayData::ptr::_New)() = (ReplayData * (*)()) 0x0;
inline void (*ReplayData::ptr::mark)(ReplayData * self) = (void (*)(ReplayData * self)) 0x5f77f0;
inline void (*ReplayData::ptr::CSTR_ReplayData)(ReplayData * self) = (void (*)(ReplayData * self)) 0x5f7670;
#endif

#ifdef __linux__

inline ReplayData * (*ReplayData::ptr::_New)() = (ReplayData * (*)()) 0x819f0f0;
inline void (*ReplayData::ptr::mark)(ReplayData * self) = (void (*)(ReplayData * self)) 0x80a0ef0;
inline void (*ReplayData::ptr::CSTR_ReplayData)(ReplayData * self) = (void (*)(ReplayData * self)) 0x819f680;
#endif
#endif
