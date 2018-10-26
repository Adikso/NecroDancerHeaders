// Generated automatically. Do not edit!
#ifndef _BBThread_
#define _BBThread_
#include "Object.hpp"

class BBThread : public Object  {
public:
    class <unnamed-tag>; // Nested types not implemented
    int _state;
    unsigned long _id;
    void * _handle;

    // Wrappers
    inline virtual void Start() { ptr::_Start(); }
    inline virtual bool IsRunning() { return ptr::_IsRunning(); }
    inline virtual void Wait() { ptr::_Wait(); }
    inline virtual void RunUNSAFE() { ptr::_RunUNSAFE(); }
    inline static unsigned long _run(void * arg1) { return ptr::_run(arg1); }

    class ptr {
    public:
        static void (*_Start)();
        static bool (*_IsRunning)();
        static void (*_Wait)();
        static void (*_RunUNSAFE)();
        static unsigned long (*_run)(void * arg1);
    };
};

#ifdef _WIN32

void (*BBThread::ptr::_Start)() = (void (*)()) 0x0;
bool (*BBThread::ptr::_IsRunning)() = (bool (*)()) 0x0;
void (*BBThread::ptr::_Wait)() = (void (*)()) 0x0;
void (*BBThread::ptr::_RunUNSAFE)() = (void (*)()) 0x0;
unsigned long (*BBThread::ptr::_run)(void * arg1) = (unsigned long (*)(void * arg1)) 0x0;
#endif

#ifdef __linux__

void (*BBThread::ptr::_Start)() = (void (*)()) 0x807b120;
bool (*BBThread::ptr::_IsRunning)() = (bool (*)()) 0x806d200;
void (*BBThread::ptr::_Wait)() = (void (*)()) 0x8084290;
void (*BBThread::ptr::_RunUNSAFE)() = (void (*)()) 0x806d210;
unsigned long (*BBThread::ptr::_run)(void * arg1) = (unsigned long (*)(void * arg1)) 0x0;
#endif
#endif
