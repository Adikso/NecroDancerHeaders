// Generated automatically. Do not edit!
#ifndef _Minimap_
#define _Minimap_
template<class T> class Array;
class Image;
class List37;
class Point;
class Sprite;
#include "Object.hpp"

class Minimap : public Object  {
public:
    Sprite * minimapSpr;
    int width;
    int height;
    Array<int> * pixelData;
    Image * minimapImg;
    Array<Sprite *> * minimapPlayerPixels;
    static List37 * * dirtyPoints;
    static bool * showMinimap;
    static bool * wasShowingMinimap;

    // Wrappers
    Minimap() {
        ptr::CSTR_Minimap(this);
        ptr::New(this);
    }

    inline static bool _IsOutsideMinimapBounds(int arg1, int arg2) { return ptr::_IsOutsideMinimapBounds(arg1, arg2); }
    inline virtual void UpdateAt(int x, int y) { ptr::UpdateAt(this, x, y); }
    inline virtual void Draw3() { ptr::Draw3(this); }
    inline virtual void UpdateAll() { ptr::UpdateAll(this); }
    inline Minimap * New() { return ptr::New(this); }
    inline static void AddDirty(Point * p) { ptr::AddDirty(p); }
    inline static void AddDirty2(int x, int y) { ptr::AddDirty2(x, y); }
    inline virtual void Update() { ptr::Update(this); }
    inline virtual void Render() { ptr::Render(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static bool (*_IsOutsideMinimapBounds)(int arg1, int arg2);
        static void (*UpdateAt)(Minimap * self, int x, int y);
        static void (*Draw3)(Minimap * self);
        static void (*UpdateAll)(Minimap * self);
        static Minimap * (*New)(Minimap * self);
        static void (*AddDirty)(Point * p);
        static void (*AddDirty2)(int x, int y);
        static void (*Update)(Minimap * self);
        static void (*Render)(Minimap * self);
        static void (*mark)(Minimap * self);
        static void (*CSTR_Minimap)(Minimap * self);
    };
};

#ifdef _WIN32
inline List37 * * Minimap::dirtyPoints = (List37* *) 0x8355c4;
inline bool * Minimap::showMinimap = (bool*) 0x83576a;
inline bool * Minimap::wasShowingMinimap = (bool*) 0x83557d;

inline bool (*Minimap::ptr::_IsOutsideMinimapBounds)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x0;
inline void (*Minimap::ptr::UpdateAt)(Minimap * self, int x, int y) = (void (*)(Minimap * self, int x, int y)) 0x6086a0;
inline void (*Minimap::ptr::Draw3)(Minimap * self) = (void (*)(Minimap * self)) 0x6089c0;
inline void (*Minimap::ptr::UpdateAll)(Minimap * self) = (void (*)(Minimap * self)) 0x6089f0;
inline Minimap * (*Minimap::ptr::New)(Minimap * self) = (Minimap * (*)(Minimap * self)) 0x608a40;
inline void (*Minimap::ptr::AddDirty)(Point * p) = (void (*)(Point * p)) 0x608d60;
inline void (*Minimap::ptr::AddDirty2)(int x, int y) = (void (*)(int x, int y)) 0x608dc0;
inline void (*Minimap::ptr::Update)(Minimap * self) = (void (*)(Minimap * self)) 0x608e60;
inline void (*Minimap::ptr::Render)(Minimap * self) = (void (*)(Minimap * self)) 0x608ec0;
inline void (*Minimap::ptr::mark)(Minimap * self) = (void (*)(Minimap * self)) 0x609180;
inline void (*Minimap::ptr::CSTR_Minimap)(Minimap * self) = (void (*)(Minimap * self)) 0x6085b0;
#endif

#ifdef __linux__
inline List37 * * Minimap::dirtyPoints = (List37* *) 0x856a3c4;
inline bool * Minimap::showMinimap = (bool*) 0x856a3c2;
inline bool * Minimap::wasShowingMinimap = (bool*) 0x856a3c1;

inline bool (*Minimap::ptr::_IsOutsideMinimapBounds)(int arg1, int arg2) = (bool (*)(int arg1, int arg2)) 0x81ae640;
inline void (*Minimap::ptr::UpdateAt)(Minimap * self, int x, int y) = (void (*)(Minimap * self, int x, int y)) 0x816e8d0;
inline void (*Minimap::ptr::Draw3)(Minimap * self) = (void (*)(Minimap * self)) 0x8074350;
inline void (*Minimap::ptr::UpdateAll)(Minimap * self) = (void (*)(Minimap * self)) 0x80743c0;
inline Minimap * (*Minimap::ptr::New)(Minimap * self) = (Minimap * (*)(Minimap * self)) 0x81ae670;
inline void (*Minimap::ptr::AddDirty)(Point * p) = (void (*)(Point * p)) 0x81af070;
inline void (*Minimap::ptr::AddDirty2)(int x, int y) = (void (*)(int x, int y)) 0x81afef0;
inline void (*Minimap::ptr::Update)(Minimap * self) = (void (*)(Minimap * self)) 0x807f370;
inline void (*Minimap::ptr::Render)(Minimap * self) = (void (*)(Minimap * self)) 0x8105d60;
inline void (*Minimap::ptr::mark)(Minimap * self) = (void (*)(Minimap * self)) 0x80ab500;
inline void (*Minimap::ptr::CSTR_Minimap)(Minimap * self) = (void (*)(Minimap * self)) 0x81ae3d0;
#endif
#endif
