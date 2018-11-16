// Generated automatically. Do not edit!
#ifndef _TextLog_
#define _TextLog_
class String;
#include "Object.hpp"

class TextLog : public Object  {
public:

    // Wrappers
    inline static void Message(String * str) { ptr::Message(str); }
    inline static void ExitGame(String * errorString) { ptr::ExitGame(errorString); }
    inline static void ForceMessage(String * str) { ptr::ForceMessage(str); }
    inline void _mark() { ptr::_mark(); }

    class ptr {
    public:
        static void (*Message)(String * str);
        static void (*ExitGame)(String * errorString);
        static void (*ForceMessage)(String * str);
        static void (*_mark)();
    };
};

#ifdef _WIN32

inline void (*TextLog::ptr::Message)(String * str) = (void (*)(String * str)) 0x42e8c0;
inline void (*TextLog::ptr::ExitGame)(String * errorString) = (void (*)(String * errorString)) 0x42e940;
inline void (*TextLog::ptr::ForceMessage)(String * str) = (void (*)(String * str)) 0x42e9c0;
inline void (*TextLog::ptr::_mark)() = (void (*)()) 0x0;
#endif

#ifdef __linux__

inline void (*TextLog::ptr::Message)(String * str) = (void (*)(String * str)) 0x8231940;
inline void (*TextLog::ptr::ExitGame)(String * errorString) = (void (*)(String * errorString)) 0x8305920;
inline void (*TextLog::ptr::ForceMessage)(String * str) = (void (*)(String * str)) 0x8231300;
inline void (*TextLog::ptr::_mark)() = (void (*)()) 0x806d570;
#endif
#endif
