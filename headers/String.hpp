// Generated automatically. Do not edit!
#ifndef _String_
#define _String_
template<class T> class Array;
class StringRep;
#include <vector>

class String {
public:
    class Rep; // Nested types not implemented
    String::Rep * rep;
    static String::Rep * * _nullRep;

    // Wrappers
    String() {
        ptr::CSTR_String(this);
    }

    String(int n) {
        ptr::CSTR_String_2(this, n);
    }

    String(float n) {
        ptr::CSTR_String_3(this, n);
    }

    String(const wchar_t * p, int length) {
        ptr::CSTR_String_4(this, p, length);
    }

    inline int _Length() { return ptr::_Length(); }
    inline wchar_t * _Data() { return ptr::_Data(); }
    inline int _Compare(const String * t) { return ptr::_Compare(this, t); }
    inline int _Find(String * find, int start) { return ptr::_Find(this, find, start); }
    inline String * _Trim() { return ptr::_Trim(this); }
    inline Array<String> * Split(String * sep) { return ptr::Split(this, sep); }
    inline String * _Join(Array<String> * bits) { return ptr::_Join(this, bits); }
    inline String * _Replace(String * find, String * repl) { return ptr::_Replace(this, find, repl); }
    inline String * _ToLower() { return ptr::_ToLower(this); }
    inline String * ToUpper() { return ptr::ToUpper(this); }
    inline bool Contains(String * sub) { return ptr::Contains(this, sub); }
    inline bool _StartsWith(String * sub) { return ptr::_StartsWith(this, sub); }
    inline bool _EndsWith(String * sub) { return ptr::_EndsWith(this, sub); }
    inline Array<int> * _ToChars() { return ptr::_ToChars(this); }
    inline int ToInt() { return ptr::ToInt(this); }
    inline float _ToFloat() { return ptr::_ToFloat(this); }
    inline static String * _FromChars(Array<int> * chars) { return ptr::_FromChars(chars); }
    inline void _String(const String * t) { ptr::_String(this, t); }
    inline void _String(const wchar_t * p) { ptr::_String_2(this, p); }
    inline int FindLast(String * find) { return ptr::FindLast(this, find); }
    inline String * _Slice(int from, int term) { return ptr::_Slice(this, from, term); }
    inline String * _Slice(int from) { return ptr::_Slice_2(this, from); }
    inline bool _Save(int * fp) { return ptr::_Save(this, fp); }
    inline void _Save(std::vector<unsigned char,std::allocator<unsigned char> > * buf) { ptr::_Save_2(this, buf); }
    inline static String * _Load(int * fp) { return ptr::_Load(fp); }
    inline static String * _Load(unsigned char * p, int n) { return ptr::_Load_2(p, n); }
    inline void _Stringunsignedchar(const unsigned char * p, int length) { ptr::_Stringunsignedchar(this, p, length); }
    inline void _Stringchar(const char * p) { ptr::_Stringchar(this, p); }

    class ptr {
    public:
        static int (*_Length)();
        static wchar_t * (*_Data)();
        static int (*_Compare)(const String * self, const String * t);
        static int (*_Find)(const String * self, String * find, int start);
        static String * (*_Trim)(const String * self);
        static Array<String> * (*Split)(const String * self, String * sep);
        static String * (*_Join)(const String * self, Array<String> * bits);
        static String * (*_Replace)(const String * self, String * find, String * repl);
        static String * (*_ToLower)(const String * self);
        static String * (*ToUpper)(const String * self);
        static bool (*Contains)(const String * self, String * sub);
        static bool (*_StartsWith)(const String * self, String * sub);
        static bool (*_EndsWith)(const String * self, String * sub);
        static Array<int> * (*_ToChars)(const String * self);
        static int (*ToInt)(const String * self);
        static float (*_ToFloat)(const String * self);
        static String * (*_FromChars)(Array<int> * chars);
        static void (*CSTR_String)(String * self);
        static void (*_String)(String * self, const String * t);
        static void (*CSTR_String_2)(String * self, int n);
        static void (*CSTR_String_3)(String * self, float n);
        static void (*_String_2)(String * self, const wchar_t * p);
        static void (*CSTR_String_4)(String * self, const wchar_t * p, int length);
        static int (*FindLast)(const String * self, String * find);
        static String * (*_Slice)(const String * self, int from, int term);
        static String * (*_Slice_2)(const String * self, int from);
        static bool (*_Save)(String * self, int * fp);
        static void (*_Save_2)(String * self, std::vector<unsigned char,std::allocator<unsigned char> > * buf);
        static String * (*_Load)(int * fp);
        static String * (*_Load_2)(unsigned char * p, int n);
        static void (*_Stringunsignedchar)(String * self, const unsigned char * p, int length);
        static void (*_Stringchar)(String * self, const char * p);
    };
};

#ifdef _WIN32
inline String::Rep * * String::_nullRep = (String::Rep* *) 0x833df4;

inline int (*String::ptr::_Length)() = (int (*)()) 0x0;
inline wchar_t * (*String::ptr::_Data)() = (wchar_t * (*)()) 0x0;
inline int (*String::ptr::_Compare)(const String * self, const String * t) = (int (*)(const String * self, const String * t)) 0x401800;
inline int (*String::ptr::_Find)(const String * self, String * find, int start) = (int (*)(const String * self, String * find, int start)) 0x4019a0;
inline String * (*String::ptr::_Trim)(const String * self) = (String * (*)(const String * self)) 0x401b90;
inline Array<String> * (*String::ptr::Split)(const String * self, String * sep) = (Array<String> * (*)(const String * self, String * sep)) 0x401c70;
inline String * (*String::ptr::_Join)(const String * self, Array<String> * bits) = (String * (*)(const String * self, Array<String> * bits)) 0x401f20;
inline String * (*String::ptr::_Replace)(const String * self, String * find, String * repl) = (String * (*)(const String * self, String * find, String * repl)) 0x4020a0;
inline String * (*String::ptr::_ToLower)(const String * self) = (String * (*)(const String * self)) 0x402230;
inline String * (*String::ptr::ToUpper)(const String * self) = (String * (*)(const String * self)) 0x402370;
inline bool (*String::ptr::Contains)(const String * self, String * sub) = (bool (*)(const String * self, String * sub)) 0x4024b0;
inline bool (*String::ptr::_StartsWith)(const String * self, String * sub) = (bool (*)(const String * self, String * sub)) 0x402540;
inline bool (*String::ptr::_EndsWith)(const String * self, String * sub) = (bool (*)(const String * self, String * sub)) 0x4025d0;
inline Array<int> * (*String::ptr::_ToChars)(const String * self) = (Array<int> * (*)(const String * self)) 0x4027b0;
inline int (*String::ptr::ToInt)(const String * self) = (int (*)(const String * self)) 0x402820;
inline float (*String::ptr::_ToFloat)(const String * self) = (float (*)(const String * self)) 0x402890;
inline String * (*String::ptr::_FromChars)(Array<int> * chars) = (String * (*)(Array<int> * chars)) 0x402af0;
inline void (*String::ptr::CSTR_String)(String * self) = (void (*)(String * self)) 0x401370;
inline void (*String::ptr::_String)(String * self, const String * t) = (void (*)(String * self, const String * t)) 0x401380;
inline void (*String::ptr::CSTR_String_2)(String * self, int n) = (void (*)(String * self, int n)) 0x4013a0;
inline void (*String::ptr::CSTR_String_3)(String * self, float n) = (void (*)(String * self, float n)) 0x401490;
inline void (*String::ptr::_String_2)(String * self, const wchar_t * p) = (void (*)(String * self, const wchar_t * p)) 0x4015d0;
inline void (*String::ptr::CSTR_String_4)(String * self, const wchar_t * p, int length) = (void (*)(String * self, const wchar_t * p, int length)) 0x401680;
inline int (*String::ptr::FindLast)(const String * self, String * find) = (int (*)(const String * self, String * find)) 0x401aa0;
inline String * (*String::ptr::_Slice)(const String * self, int from, int term) = (String * (*)(const String * self, int from, int term)) 0x402660;
inline String * (*String::ptr::_Slice_2)(const String * self, int from) = (String * (*)(const String * self, int from)) 0x402750;
inline bool (*String::ptr::_Save)(String * self, int * fp) = (bool (*)(String * self, int * fp)) 0x402900;
inline void (*String::ptr::_Save_2)(String * self, std::vector<unsigned char,std::allocator<unsigned char> > * buf) = (void (*)(String * self, std::vector<unsigned char,std::allocator<unsigned char> > * buf)) 0x4029b0;
inline String * (*String::ptr::_Load)(int * fp) = (String * (*)(int * fp)) 0x402bb0;
inline String * (*String::ptr::_Load_2)(unsigned char * p, int n) = (String * (*)(unsigned char * p, int n)) 0x402d80;
inline void (*String::ptr::_Stringunsignedchar)(String * self, const unsigned char * p, int length) = (void (*)(String * self, const unsigned char * p, int length)) 0x6bfa30;
inline void (*String::ptr::_Stringchar)(String * self, const char * p) = (void (*)(String * self, const char * p)) 0x6bfae0;
#endif

#ifdef __linux__
inline String::Rep * * String::_nullRep = (String::Rep* *) 0x0;

inline int (*String::ptr::_Length)() = (int (*)()) 0x0;
inline wchar_t * (*String::ptr::_Data)() = (wchar_t * (*)()) 0x0;
inline int (*String::ptr::_Compare)(const String * self, const String * t) = (int (*)(const String * self, const String * t)) 0x0;
inline int (*String::ptr::_Find)(const String * self, String * find, int start) = (int (*)(const String * self, String * find, int start)) 0x0;
inline String * (*String::ptr::_Trim)(const String * self) = (String * (*)(const String * self)) 0x0;
inline Array<String> * (*String::ptr::Split)(const String * self, String * sep) = (Array<String> * (*)(const String * self, String * sep)) 0x842bdf0;
inline String * (*String::ptr::_Join)(const String * self, Array<String> * bits) = (String * (*)(const String * self, Array<String> * bits)) 0x0;
inline String * (*String::ptr::_Replace)(const String * self, String * find, String * repl) = (String * (*)(const String * self, String * find, String * repl)) 0x0;
inline String * (*String::ptr::_ToLower)(const String * self) = (String * (*)(const String * self)) 0x0;
inline String * (*String::ptr::ToUpper)(const String * self) = (String * (*)(const String * self)) 0x8428660;
inline bool (*String::ptr::Contains)(const String * self, String * sub) = (bool (*)(const String * self, String * sub)) 0x84296e0;
inline bool (*String::ptr::_StartsWith)(const String * self, String * sub) = (bool (*)(const String * self, String * sub)) 0x0;
inline bool (*String::ptr::_EndsWith)(const String * self, String * sub) = (bool (*)(const String * self, String * sub)) 0x0;
inline Array<int> * (*String::ptr::_ToChars)(const String * self) = (Array<int> * (*)(const String * self)) 0x0;
inline int (*String::ptr::ToInt)(const String * self) = (int (*)(const String * self)) 0x8428730;
inline float (*String::ptr::_ToFloat)(const String * self) = (float (*)(const String * self)) 0x0;
inline String * (*String::ptr::_FromChars)(Array<int> * chars) = (String * (*)(Array<int> * chars)) 0x0;
inline void (*String::ptr::CSTR_String)(String * self) = (void (*)(String * self)) 0x8428060;
inline void (*String::ptr::_String)(String * self, const String * t) = (void (*)(String * self, const String * t)) 0x0;
inline void (*String::ptr::CSTR_String_2)(String * self, int n) = (void (*)(String * self, int n)) 0x84280c0;
inline void (*String::ptr::CSTR_String_3)(String * self, float n) = (void (*)(String * self, float n)) 0x84281d0;
inline void (*String::ptr::_String_2)(String * self, const wchar_t * p) = (void (*)(String * self, const wchar_t * p)) 0x0;
inline void (*String::ptr::CSTR_String_4)(String * self, const wchar_t * p, int length) = (void (*)(String * self, const wchar_t * p, int length)) 0x8428330;
inline int (*String::ptr::FindLast)(const String * self, String * find) = (int (*)(const String * self, String * find)) 0x8428600;
inline String * (*String::ptr::_Slice)(const String * self, int from, int term) = (String * (*)(const String * self, int from, int term)) 0x0;
inline String * (*String::ptr::_Slice_2)(const String * self, int from) = (String * (*)(const String * self, int from)) 0x0;
inline bool (*String::ptr::_Save)(String * self, int * fp) = (bool (*)(String * self, int * fp)) 0x0;
inline void (*String::ptr::_Save_2)(String * self, std::vector<unsigned char,std::allocator<unsigned char> > * buf) = (void (*)(String * self, std::vector<unsigned char,std::allocator<unsigned char> > * buf)) 0x0;
inline String * (*String::ptr::_Load)(int * fp) = (String * (*)(int * fp)) 0x0;
inline String * (*String::ptr::_Load_2)(unsigned char * p, int n) = (String * (*)(unsigned char * p, int n)) 0x0;
inline void (*String::ptr::_Stringunsignedchar)(String * self, const unsigned char * p, int length) = (void (*)(String * self, const unsigned char * p, int length)) 0x0;
inline void (*String::ptr::_Stringchar)(String * self, const char * p) = (void (*)(String * self, const char * p)) 0x0;
#endif
#endif
