// Generated automatically. Do not edit!
#ifndef _Replay_
#define _Replay_
template<class T> class Array;
class List26;
class List51;
class Node42;
class String;
#include "Object.hpp"

class Replay : public Object  {
public:
    Node42 * curReplayData;
    bool gaveWarning;
    int startingZone;
    int startingLevel;
    Array<int> * curBeats;
    int beatOffset;
    int runTime;
    String * replayStr;
    int gameVersion;
    int startingGold;
    bool hasBroadsword;
    List51 * replayData;
    String * saveData;
    static String * * lastSavedReplayFile;

    // Wrappers
    Replay() {
        ptr::CSTR_Replay(this);
        ptr::New(this);
    }

    inline virtual int GetRand(int channel) { return ptr::GetRand(this, channel); }
    inline virtual void RecordRand(int channel, int num) { ptr::RecordRand(this, channel, num); }
    inline virtual void NextLevel() { ptr::NextLevel(this); }
    inline static String * SaveReplayToString(Replay * replay) { return ptr::SaveReplayToString(replay); }
    inline static void SaveReplayToFile(Replay * replay) { ptr::SaveReplayToFile(replay); }
    inline virtual void Save() { ptr::Save(this); }
    inline Replay * New() { return ptr::New(this); }
    inline virtual void NewLevel(int randSeed) { ptr::NewLevel(this, randSeed); }
    inline virtual List26 * GetDirectionsHitForBeat(int playerNum, int closestBeat, float percentDist) { return ptr::GetDirectionsHitForBeat(this, playerNum, closestBeat, percentDist); }
    inline static void LoadReplayFromString(String * data, Replay * replay) { ptr::LoadReplayFromString(data, replay); }
    inline static void LoadReplayFromFile(String * filename, Replay * replay) { ptr::LoadReplayFromFile(filename, replay); }
    inline virtual void Load(String * filename) { ptr::Load(this, filename); }
    inline virtual void Reset() { ptr::Reset(this); }
    inline virtual void RecordBeat(int beatNum) { ptr::RecordBeat(this, beatNum); }
    inline virtual void RecordMove(int playerNum, int move, int beatNum, bool isOffbeat) { ptr::RecordMove(this, playerNum, move, beatNum, isOffbeat); }
    inline virtual void RecordMissedBeat(int playerNum, int beatNum) { ptr::RecordMissedBeat(this, playerNum, beatNum); }
    inline virtual int GetNumBeats() { return ptr::GetNumBeats(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static int (*GetRand)(Replay * self, int channel);
        static void (*RecordRand)(Replay * self, int channel, int num);
        static void (*NextLevel)(Replay * self);
        static String * (*SaveReplayToString)(Replay * replay);
        static void (*SaveReplayToFile)(Replay * replay);
        static void (*Save)(Replay * self);
        static Replay * (*New)(Replay * self);
        static void (*NewLevel)(Replay * self, int randSeed);
        static List26 * (*GetDirectionsHitForBeat)(Replay * self, int playerNum, int closestBeat, float percentDist);
        static void (*LoadReplayFromString)(String * data, Replay * replay);
        static void (*LoadReplayFromFile)(String * filename, Replay * replay);
        static void (*Load)(Replay * self, String * filename);
        static void (*Reset)(Replay * self);
        static void (*RecordBeat)(Replay * self, int beatNum);
        static void (*RecordMove)(Replay * self, int playerNum, int move, int beatNum, bool isOffbeat);
        static void (*RecordMissedBeat)(Replay * self, int playerNum, int beatNum);
        static int (*GetNumBeats)(Replay * self);
        static void (*mark)(Replay * self);
        static void (*CSTR_Replay)(Replay * self);
    };
};

#ifdef _WIN32
String * * Replay::lastSavedReplayFile = (String* *) 0x833fc0;

int (*Replay::ptr::GetRand)(Replay * self, int channel) = (int (*)(Replay * self, int channel)) 0x5f3bc0;
void (*Replay::ptr::RecordRand)(Replay * self, int channel, int num) = (void (*)(Replay * self, int channel, int num)) 0x5f3c70;
void (*Replay::ptr::NextLevel)(Replay * self) = (void (*)(Replay * self)) 0x5f3ca0;
String * (*Replay::ptr::SaveReplayToString)(Replay * replay) = (String * (*)(Replay * replay)) 0x5f3cf0;
void (*Replay::ptr::SaveReplayToFile)(Replay * replay) = (void (*)(Replay * replay)) 0x5f5b10;
void (*Replay::ptr::Save)(Replay * self) = (void (*)(Replay * self)) 0x5f61a0;
Replay * (*Replay::ptr::New)(Replay * self) = (Replay * (*)(Replay * self)) 0x5f61b0;
void (*Replay::ptr::NewLevel)(Replay * self, int randSeed) = (void (*)(Replay * self, int randSeed)) 0x5f61f0;
List26 * (*Replay::ptr::GetDirectionsHitForBeat)(Replay * self, int playerNum, int closestBeat, float percentDist) = (List26 * (*)(Replay * self, int playerNum, int closestBeat, float percentDist)) 0x5f6460;
void (*Replay::ptr::LoadReplayFromString)(String * data, Replay * replay) = (void (*)(String * data, Replay * replay)) 0x5f6620;
void (*Replay::ptr::LoadReplayFromFile)(String * filename, Replay * replay) = (void (*)(String * filename, Replay * replay)) 0x5f7190;
void (*Replay::ptr::Load)(Replay * self, String * filename) = (void (*)(Replay * self, String * filename)) 0x5f7310;
void (*Replay::ptr::Reset)(Replay * self) = (void (*)(Replay * self)) 0x5f7390;
void (*Replay::ptr::RecordBeat)(Replay * self, int beatNum) = (void (*)(Replay * self, int beatNum)) 0x5f7420;
void (*Replay::ptr::RecordMove)(Replay * self, int playerNum, int move, int beatNum, bool isOffbeat) = (void (*)(Replay * self, int playerNum, int move, int beatNum, bool isOffbeat)) 0x5f7450;
void (*Replay::ptr::RecordMissedBeat)(Replay * self, int playerNum, int beatNum) = (void (*)(Replay * self, int playerNum, int beatNum)) 0x5f7510;
int (*Replay::ptr::GetNumBeats)(Replay * self) = (int (*)(Replay * self)) 0x5f7560;
void (*Replay::ptr::mark)(Replay * self) = (void (*)(Replay * self)) 0x5f7580;
void (*Replay::ptr::CSTR_Replay)(Replay * self) = (void (*)(Replay * self)) 0x5f3910;
#endif

#ifdef __linux__
String * * Replay::lastSavedReplayFile = (String* *) 0x856a448;

int (*Replay::ptr::GetRand)(Replay * self, int channel) = (int (*)(Replay * self, int channel)) 0x82a4020;
void (*Replay::ptr::RecordRand)(Replay * self, int channel, int num) = (void (*)(Replay * self, int channel, int num)) 0x807f190;
void (*Replay::ptr::NextLevel)(Replay * self) = (void (*)(Replay * self)) 0x807a5d0;
String * (*Replay::ptr::SaveReplayToString)(Replay * replay) = (String * (*)(Replay * replay)) 0x819db90;
void (*Replay::ptr::SaveReplayToFile)(Replay * replay) = (void (*)(Replay * replay)) 0x82d8d20;
void (*Replay::ptr::Save)(Replay * self) = (void (*)(Replay * self)) 0x82d94e0;
Replay * (*Replay::ptr::New)(Replay * self) = (Replay * (*)(Replay * self)) 0x819f0c0;
void (*Replay::ptr::NewLevel)(Replay * self, int randSeed) = (void (*)(Replay * self, int randSeed)) 0x819fb20;
List26 * (*Replay::ptr::GetDirectionsHitForBeat)(Replay * self, int playerNum, int closestBeat, float percentDist) = (List26 * (*)(Replay * self, int playerNum, int closestBeat, float percentDist)) 0x8328860;
void (*Replay::ptr::LoadReplayFromString)(String * data, Replay * replay) = (void (*)(String * data, Replay * replay)) 0x81f7630;
void (*Replay::ptr::LoadReplayFromFile)(String * filename, Replay * replay) = (void (*)(String * filename, Replay * replay)) 0x81fd740;
void (*Replay::ptr::Load)(Replay * self, String * filename) = (void (*)(Replay * self, String * filename)) 0x81fd580;
void (*Replay::ptr::Reset)(Replay * self) = (void (*)(Replay * self)) 0x8093850;
void (*Replay::ptr::RecordBeat)(Replay * self, int beatNum) = (void (*)(Replay * self, int beatNum)) 0x80733e0;
void (*Replay::ptr::RecordMove)(Replay * self, int playerNum, int move, int beatNum, bool isOffbeat) = (void (*)(Replay * self, int playerNum, int move, int beatNum, bool isOffbeat)) 0x8073420;
void (*Replay::ptr::RecordMissedBeat)(Replay * self, int playerNum, int beatNum) = (void (*)(Replay * self, int playerNum, int beatNum)) 0x8073510;
int (*Replay::ptr::GetNumBeats)(Replay * self) = (int (*)(Replay * self)) 0x807f1e0;
void (*Replay::ptr::mark)(Replay * self) = (void (*)(Replay * self)) 0x80a0cb0;
void (*Replay::ptr::CSTR_Replay)(Replay * self) = (void (*)(Replay * self)) 0x81d7bf0;
#endif
#endif
