// Generated automatically. Do not edit!
#ifndef _BBDataBuffer_
#define _BBDataBuffer_
class String;
#include "Object.hpp"

class BBDataBuffer : public Object  {
public:
    char * _data;
    int _length;

    // Wrappers
    inline bool _New(int arg1) { return ptr::_New(this, arg1); }
    inline bool _Load(String * arg1) { return ptr::_Load(this, arg1); }
    inline void * _ReadPointer(int arg1) { ptr::_ReadPointer(this, arg1); }
    inline void * _WritePointer(int arg1) { return ptr::_WritePointer(this, arg1); }
    inline void _Discard() { ptr::_Discard(); }
    inline int _Length() { return ptr::_Length(); }
    inline void _PokeByte(int arg1, int arg2) { ptr::_PokeByte(this, arg1, arg2); }
    inline void _PokeShort(int arg1, int arg2) { ptr::_PokeShort(this, arg1, arg2); }
    inline void _PokeInt(int arg1, int arg2) { ptr::_PokeInt(this, arg1, arg2); }
    inline void _PokeFloat(int arg1, float arg2) { ptr::_PokeFloat(this, arg1, arg2); }
    inline int _PeekByte(int arg1) { return ptr::_PeekByte(this, arg1); }
    inline int _PeekShort(int arg1) { return ptr::_PeekShort(this, arg1); }
    inline int _PeekInt(int arg1) { return ptr::_PeekInt(this, arg1); }
    inline float _PeekFloat(int arg1) { return ptr::_PeekFloat(this, arg1); }

    class ptr {
    public:
        static bool (*_New)(BBDataBuffer * self, int arg1);
        static bool (*_Load)(BBDataBuffer * self, String * arg1);
        static void * (*_ReadPointer)(BBDataBuffer * self, int arg1);
        static void * (*_WritePointer)(BBDataBuffer * self, int arg1);
        static void (*_Discard)();
        static int (*_Length)();
        static void (*_PokeByte)(BBDataBuffer * self, int arg1, int arg2);
        static void (*_PokeShort)(BBDataBuffer * self, int arg1, int arg2);
        static void (*_PokeInt)(BBDataBuffer * self, int arg1, int arg2);
        static void (*_PokeFloat)(BBDataBuffer * self, int arg1, float arg2);
        static int (*_PeekByte)(BBDataBuffer * self, int arg1);
        static int (*_PeekShort)(BBDataBuffer * self, int arg1);
        static int (*_PeekInt)(BBDataBuffer * self, int arg1);
        static float (*_PeekFloat)(BBDataBuffer * self, int arg1);
    };
};

#ifdef _WIN32

inline bool (*BBDataBuffer::ptr::_New)(BBDataBuffer * self, int arg1) = (bool (*)(BBDataBuffer * self, int arg1)) 0x0;
inline bool (*BBDataBuffer::ptr::_Load)(BBDataBuffer * self, String * arg1) = (bool (*)(BBDataBuffer * self, String * arg1)) 0x0;
inline void * (*BBDataBuffer::ptr::_ReadPointer)(BBDataBuffer * self, int arg1) = (void * (*)(BBDataBuffer * self, int arg1)) 0x0;
inline void * (*BBDataBuffer::ptr::_WritePointer)(BBDataBuffer * self, int arg1) = (void * (*)(BBDataBuffer * self, int arg1)) 0x0;
inline void (*BBDataBuffer::ptr::_Discard)() = (void (*)()) 0x0;
inline int (*BBDataBuffer::ptr::_Length)() = (int (*)()) 0x0;
inline void (*BBDataBuffer::ptr::_PokeByte)(BBDataBuffer * self, int arg1, int arg2) = (void (*)(BBDataBuffer * self, int arg1, int arg2)) 0x0;
inline void (*BBDataBuffer::ptr::_PokeShort)(BBDataBuffer * self, int arg1, int arg2) = (void (*)(BBDataBuffer * self, int arg1, int arg2)) 0x0;
inline void (*BBDataBuffer::ptr::_PokeInt)(BBDataBuffer * self, int arg1, int arg2) = (void (*)(BBDataBuffer * self, int arg1, int arg2)) 0x0;
inline void (*BBDataBuffer::ptr::_PokeFloat)(BBDataBuffer * self, int arg1, float arg2) = (void (*)(BBDataBuffer * self, int arg1, float arg2)) 0x0;
inline int (*BBDataBuffer::ptr::_PeekByte)(BBDataBuffer * self, int arg1) = (int (*)(BBDataBuffer * self, int arg1)) 0x0;
inline int (*BBDataBuffer::ptr::_PeekShort)(BBDataBuffer * self, int arg1) = (int (*)(BBDataBuffer * self, int arg1)) 0x0;
inline int (*BBDataBuffer::ptr::_PeekInt)(BBDataBuffer * self, int arg1) = (int (*)(BBDataBuffer * self, int arg1)) 0x0;
inline float (*BBDataBuffer::ptr::_PeekFloat)(BBDataBuffer * self, int arg1) = (float (*)(BBDataBuffer * self, int arg1)) 0x0;
#endif

#ifdef __linux__

inline bool (*BBDataBuffer::ptr::_New)(BBDataBuffer * self, int arg1) = (bool (*)(BBDataBuffer * self, int arg1)) 0x80e85b0;
inline bool (*BBDataBuffer::ptr::_Load)(BBDataBuffer * self, String * arg1) = (bool (*)(BBDataBuffer * self, String * arg1)) 0x8301de0;
inline void * (*BBDataBuffer::ptr::_ReadPointer)(BBDataBuffer * self, int arg1) = (void * (*)(BBDataBuffer * self, int arg1)) 0x80e8640;
inline void * (*BBDataBuffer::ptr::_WritePointer)(BBDataBuffer * self, int arg1) = (void * (*)(BBDataBuffer * self, int arg1)) 0x80e8650;
inline void (*BBDataBuffer::ptr::_Discard)() = (void (*)()) 0x80e8600;
inline int (*BBDataBuffer::ptr::_Length)() = (int (*)()) 0x80e8630;
inline void (*BBDataBuffer::ptr::_PokeByte)(BBDataBuffer * self, int arg1, int arg2) = (void (*)(BBDataBuffer * self, int arg1, int arg2)) 0x80e8660;
inline void (*BBDataBuffer::ptr::_PokeShort)(BBDataBuffer * self, int arg1, int arg2) = (void (*)(BBDataBuffer * self, int arg1, int arg2)) 0x80e8680;
inline void (*BBDataBuffer::ptr::_PokeInt)(BBDataBuffer * self, int arg1, int arg2) = (void (*)(BBDataBuffer * self, int arg1, int arg2)) 0x80e86a0;
inline void (*BBDataBuffer::ptr::_PokeFloat)(BBDataBuffer * self, int arg1, float arg2) = (void (*)(BBDataBuffer * self, int arg1, float arg2)) 0x80e86c0;
inline int (*BBDataBuffer::ptr::_PeekByte)(BBDataBuffer * self, int arg1) = (int (*)(BBDataBuffer * self, int arg1)) 0x80e86e0;
inline int (*BBDataBuffer::ptr::_PeekShort)(BBDataBuffer * self, int arg1) = (int (*)(BBDataBuffer * self, int arg1)) 0x80e86f0;
inline int (*BBDataBuffer::ptr::_PeekInt)(BBDataBuffer * self, int arg1) = (int (*)(BBDataBuffer * self, int arg1)) 0x80e8700;
inline float (*BBDataBuffer::ptr::_PeekFloat)(BBDataBuffer * self, int arg1) = (float (*)(BBDataBuffer * self, int arg1)) 0x80e8710;
#endif
#endif
