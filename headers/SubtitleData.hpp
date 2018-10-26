// Generated automatically. Do not edit!
#ifndef _SubtitleData_
#define _SubtitleData_
class String;
#include "Object.hpp"

class SubtitleData : public Object  {
public:
    int startTime;
    int endTime;
    String * imagePath;
    int xOff;
    int yOff;
    float scale;

    // Wrappers
    SubtitleData(int startT, int endT, String * path, int xOffset, int yOffset, float sc) {
        ptr::CSTR_SubtitleData(this);
        ptr::New(this, startT, endT, path, xOffset, yOffset, sc);
    }

    inline SubtitleData * New(int startT, int endT, String * path, int xOffset, int yOffset, float sc) { return ptr::New(this, startT, endT, path, xOffset, yOffset, sc); }
    inline SubtitleData * _new2() { return ptr::_new2(); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static SubtitleData * (*New)(SubtitleData * self, int startT, int endT, String * path, int xOffset, int yOffset, float sc);
        static SubtitleData * (*_new2)();
        static void (*_mark)();
        static void (*CSTR_SubtitleData)(SubtitleData * self);
    };
};

#ifdef _WIN32

SubtitleData * (*SubtitleData::ptr::New)(SubtitleData * self, int startT, int endT, String * path, int xOffset, int yOffset, float sc) = (SubtitleData * (*)(SubtitleData * self, int startT, int endT, String * path, int xOffset, int yOffset, float sc)) 0x557210;
SubtitleData * (*SubtitleData::ptr::_new2)() = (SubtitleData * (*)()) 0x0;
void (*SubtitleData::ptr::_mark)() = (void (*)()) 0x0;
void (*SubtitleData::ptr::CSTR_SubtitleData)(SubtitleData * self) = (void (*)(SubtitleData * self)) 0x557070;
#endif

#ifdef __linux__

SubtitleData * (*SubtitleData::ptr::New)(SubtitleData * self, int startT, int endT, String * path, int xOffset, int yOffset, float sc) = (SubtitleData * (*)(SubtitleData * self, int startT, int endT, String * path, int xOffset, int yOffset, float sc)) 0x8150f90;
SubtitleData * (*SubtitleData::ptr::_new2)() = (SubtitleData * (*)()) 0x8150fe0;
void (*SubtitleData::ptr::_mark)() = (void (*)()) 0x806f6c0;
void (*SubtitleData::ptr::CSTR_SubtitleData)(SubtitleData * self) = (void (*)(SubtitleData * self)) 0x8150f20;
#endif
#endif
