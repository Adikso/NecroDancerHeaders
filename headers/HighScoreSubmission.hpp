// Generated automatically. Do not edit!
#ifndef _HighScoreSubmission_
#define _HighScoreSubmission_
class String;
#include "Object.hpp"

class HighScoreSubmission : public Object  {
public:
    String * pendingSubmitLeaderboard;
    int submissionAttemptNumber;
    bool submitted;
    int pendingSubmitScore;
    int pendingSubmitZone;
    int pendingSubmitLevel;
    String * data;

    // Wrappers
    HighScoreSubmission(int s, int z, int l, String * lb, int sa, String * dt) {
        ptr::CSTR_HighScoreSubmission(this);
        ptr::New(this, s, z, l, lb, sa, dt);
    }

    inline HighScoreSubmission * New(int s, int z, int l, String * lb, int sa, String * dt) { return ptr::New(this, s, z, l, lb, sa, dt); }
    inline HighScoreSubmission * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static HighScoreSubmission * (*New)(HighScoreSubmission * self, int s, int z, int l, String * lb, int sa, String * dt);
        static HighScoreSubmission * (*_new2)();
        static void (*_mark)();
        static void (*CSTR_HighScoreSubmission)(HighScoreSubmission * self);
    };
};

#ifdef _WIN32

HighScoreSubmission * (*HighScoreSubmission::ptr::New)(HighScoreSubmission * self, int s, int z, int l, String * lb, int sa, String * dt) = (HighScoreSubmission * (*)(HighScoreSubmission * self, int s, int z, int l, String * lb, int sa, String * dt)) 0x66f750;
HighScoreSubmission * (*HighScoreSubmission::ptr::_new2)() = (HighScoreSubmission * (*)()) 0x0;
void (*HighScoreSubmission::ptr::_mark)() = (void (*)()) 0x0;
void (*HighScoreSubmission::ptr::CSTR_HighScoreSubmission)(HighScoreSubmission * self) = (void (*)(HighScoreSubmission * self)) 0x66f540;
#endif

#ifdef __linux__

HighScoreSubmission * (*HighScoreSubmission::ptr::New)(HighScoreSubmission * self, int s, int z, int l, String * lb, int sa, String * dt) = (HighScoreSubmission * (*)(HighScoreSubmission * self, int s, int z, int l, String * lb, int sa, String * dt)) 0x81db6b0;
HighScoreSubmission * (*HighScoreSubmission::ptr::_new2)() = (HighScoreSubmission * (*)()) 0x81db730;
void (*HighScoreSubmission::ptr::_mark)() = (void (*)()) 0x8077f60;
void (*HighScoreSubmission::ptr::CSTR_HighScoreSubmission)(HighScoreSubmission * self) = (void (*)(HighScoreSubmission * self)) 0x81db600;
#endif
#endif
