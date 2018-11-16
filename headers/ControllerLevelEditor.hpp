// Generated automatically. Do not edit!
#ifndef _ControllerLevelEditor_
#define _ControllerLevelEditor_
template<class T> class Array;
class ControllerInputPopup;
class ControllerLoadDungeon;
class ControllerPopUp;
class Entity;
class IntMap3;
class IntStack;
class List10;
class OptionList;
class Sprite;
class String;
class StringStack;
class TextLabel;
class TextSprite;
#include "Controller.hpp"

class ControllerLevelEditor : public Controller  {
public:
    int numLevels;
    IntMap3 * levels;
    int charNum;
    StringStack * floorNames;
    IntStack * floorTypes;
    StringStack * wallNames;
    IntStack * wallTypes;
    StringStack * enemyNames;
    StringStack * weaponNames;
    StringStack * armorNames;
    StringStack * footwearNames;
    StringStack * headgearNames;
    StringStack * ringNames;
    StringStack * scrollNames;
    StringStack * otherItemNames;
    StringStack * trapNames;
    IntStack * trapTypes;
    StringStack * shrineNames;
    Sprite * overlayBlack;
    Sprite * cursorImg;
    Sprite * pickupCursorImg;
    OptionList * gui;
    TextLabel * nameText;
    TextLabel * charText;
    TextLabel * levelText;
    TextLabel * addLevelText;
    TextLabel * deleteLevelText;
    TextLabel * musicText;
    TextLabel * randomText;
    TextLabel * generateText;
    TextLabel * viewText;
    int optionTextStart;
    Array<TextLabel *> * optionText;
    TextLabel * testText;
    TextLabel * playText;
    TextLabel * loadText;
    TextLabel * publishText;
    TextLabel * saveText;
    TextLabel * saveAndExitText;
    TextLabel * exitText;
    List10 * submenus;
    int bossNum;
    int tileset;
    int optionIncrement;
    int optionListBase;
    int optionIndex;
    bool placementMode;
    int cursorX;
    int cursorY;
    int placementType;
    int placementSubtype;
    String * placementSubtype2;
    Entity * pickedUpEntity;
    ControllerPopUp * popUpController;
    int popupIndex;
    int editorLevel;
    int musicType;
    int randomType;
    ControllerLoadDungeon * loadController;
    bool doPublish;
    String * dungeonName;
    int savedFrames;
    String * lastSavedDungeonXML;
    bool doExit;
    ControllerInputPopup * nameController;
    bool wasPublishing;
    int publishedFrames;
    TextSprite * levelImage;
    TextSprite * helperImage;
    TextSprite * helperImage2;
    TextSprite * helperImage3;
    TextSprite * msgImage;
    TextSprite * levelImage2;
    static ControllerLevelEditor * * storedEditor;
    static int * playingLevel;
    static bool * playingWholeDungeon;

    // Wrappers
    ControllerLevelEditor() {
        ptr::CSTR_ControllerLevelEditor(this);
        ptr::New(this);
    }

    inline virtual void ResetPlayers(int characterID) { ptr::ResetPlayers(this, characterID); }
    inline virtual String * GetTilesetText() { return ptr::GetTilesetText(this); }
    inline virtual void UpdateMultiPageList(StringStack * names, int prevOption, int nextOption) { ptr::UpdateMultiPageList(this, names, prevOption, nextOption); }
    inline virtual void UpdateOptions(bool setIndex) { ptr::UpdateOptions(this, setIndex); }
    inline ControllerLevelEditor * New() { return ptr::New(this); }
    inline virtual void DoDelete(int cursorX, int cursorY) { ptr::DoDelete(this, cursorX, cursorY); }
    inline virtual void ActuallyDoSave() { ptr::ActuallyDoSave(this); }
    inline virtual void DoSave() { ptr::DoSave(this); }
    inline virtual void DoLoad(String * filename, bool fromWorkshop) { ptr::DoLoad(this, filename, fromWorkshop); }
    inline void Update() { ptr::Update(this); }
    inline virtual void RenderPlacementGhost() { ptr::RenderPlacementGhost(this); }
    inline virtual void SetCharText() { ptr::SetCharText(this); }
    inline virtual void SetMusicText() { ptr::SetMusicText(this); }
    inline void Render() { ptr::Render(this); }
    inline virtual void SetRandomText() { ptr::SetRandomText(this); }
    inline virtual void ExecuteOption(int option) { ptr::ExecuteOption(this, option); }
    inline void GUICallback(int index, bool left) { ptr::GUICallback(this, index, left); }
    inline void RegainFocus() { ptr::RegainFocus(this); }
    inline void Destructor() { ptr::Destructor(this); }
    inline void mark() { ptr::mark(this); }

    class ptr {
    public:
        static void (*ResetPlayers)(ControllerLevelEditor * self, int characterID);
        static String * (*GetTilesetText)(ControllerLevelEditor * self);
        static void (*UpdateMultiPageList)(ControllerLevelEditor * self, StringStack * names, int prevOption, int nextOption);
        static void (*UpdateOptions)(ControllerLevelEditor * self, bool setIndex);
        static ControllerLevelEditor * (*New)(ControllerLevelEditor * self);
        static void (*DoDelete)(ControllerLevelEditor * self, int cursorX, int cursorY);
        static void (*ActuallyDoSave)(ControllerLevelEditor * self);
        static void (*DoSave)(ControllerLevelEditor * self);
        static void (*DoLoad)(ControllerLevelEditor * self, String * filename, bool fromWorkshop);
        static void (*Update)(ControllerLevelEditor * self);
        static void (*RenderPlacementGhost)(ControllerLevelEditor * self);
        static void (*SetCharText)(ControllerLevelEditor * self);
        static void (*SetMusicText)(ControllerLevelEditor * self);
        static void (*Render)(ControllerLevelEditor * self);
        static void (*SetRandomText)(ControllerLevelEditor * self);
        static void (*ExecuteOption)(ControllerLevelEditor * self, int option);
        static void (*GUICallback)(ControllerLevelEditor * self, int index, bool left);
        static void (*RegainFocus)(ControllerLevelEditor * self);
        static void (*Destructor)(ControllerLevelEditor * self);
        static void (*mark)(ControllerLevelEditor * self);
        static void (*CSTR_ControllerLevelEditor)(ControllerLevelEditor * self);
    };
};

#ifdef _WIN32
inline ControllerLevelEditor * * ControllerLevelEditor::storedEditor = (ControllerLevelEditor* *) 0x835968;
inline int * ControllerLevelEditor::playingLevel = (int*) 0x835be0;
inline bool * ControllerLevelEditor::playingWholeDungeon = (bool*) 0x8358e7;

inline void (*ControllerLevelEditor::ptr::ResetPlayers)(ControllerLevelEditor * self, int characterID) = (void (*)(ControllerLevelEditor * self, int characterID)) 0x56b230;
inline String * (*ControllerLevelEditor::ptr::GetTilesetText)(ControllerLevelEditor * self) = (String * (*)(ControllerLevelEditor * self)) 0x56b3f0;
inline void (*ControllerLevelEditor::ptr::UpdateMultiPageList)(ControllerLevelEditor * self, StringStack * names, int prevOption, int nextOption) = (void (*)(ControllerLevelEditor * self, StringStack * names, int prevOption, int nextOption)) 0x56b560;
inline void (*ControllerLevelEditor::ptr::UpdateOptions)(ControllerLevelEditor * self, bool setIndex) = (void (*)(ControllerLevelEditor * self, bool setIndex)) 0x56b810;
inline ControllerLevelEditor * (*ControllerLevelEditor::ptr::New)(ControllerLevelEditor * self) = (ControllerLevelEditor * (*)(ControllerLevelEditor * self)) 0x56cf20;
inline void (*ControllerLevelEditor::ptr::DoDelete)(ControllerLevelEditor * self, int cursorX, int cursorY) = (void (*)(ControllerLevelEditor * self, int cursorX, int cursorY)) 0x56f300;
inline void (*ControllerLevelEditor::ptr::ActuallyDoSave)(ControllerLevelEditor * self) = (void (*)(ControllerLevelEditor * self)) 0x56f3d0;
inline void (*ControllerLevelEditor::ptr::DoSave)(ControllerLevelEditor * self) = (void (*)(ControllerLevelEditor * self)) 0x56fa90;
inline void (*ControllerLevelEditor::ptr::DoLoad)(ControllerLevelEditor * self, String * filename, bool fromWorkshop) = (void (*)(ControllerLevelEditor * self, String * filename, bool fromWorkshop)) 0x56ff10;
inline void (*ControllerLevelEditor::ptr::Update)(ControllerLevelEditor * self) = (void (*)(ControllerLevelEditor * self)) 0x5706e0;
inline void (*ControllerLevelEditor::ptr::RenderPlacementGhost)(ControllerLevelEditor * self) = (void (*)(ControllerLevelEditor * self)) 0x572890;
inline void (*ControllerLevelEditor::ptr::SetCharText)(ControllerLevelEditor * self) = (void (*)(ControllerLevelEditor * self)) 0x572960;
inline void (*ControllerLevelEditor::ptr::SetMusicText)(ControllerLevelEditor * self) = (void (*)(ControllerLevelEditor * self)) 0x572c30;
inline void (*ControllerLevelEditor::ptr::Render)(ControllerLevelEditor * self) = (void (*)(ControllerLevelEditor * self)) 0x572e30;
inline void (*ControllerLevelEditor::ptr::SetRandomText)(ControllerLevelEditor * self) = (void (*)(ControllerLevelEditor * self)) 0x573750;
inline void (*ControllerLevelEditor::ptr::ExecuteOption)(ControllerLevelEditor * self, int option) = (void (*)(ControllerLevelEditor * self, int option)) 0x573ca0;
inline void (*ControllerLevelEditor::ptr::GUICallback)(ControllerLevelEditor * self, int index, bool left) = (void (*)(ControllerLevelEditor * self, int index, bool left)) 0x574430;
inline void (*ControllerLevelEditor::ptr::RegainFocus)(ControllerLevelEditor * self) = (void (*)(ControllerLevelEditor * self)) 0x575490;
inline void (*ControllerLevelEditor::ptr::Destructor)(ControllerLevelEditor * self) = (void (*)(ControllerLevelEditor * self)) 0x575560;
inline void (*ControllerLevelEditor::ptr::mark)(ControllerLevelEditor * self) = (void (*)(ControllerLevelEditor * self)) 0x575680;
inline void (*ControllerLevelEditor::ptr::CSTR_ControllerLevelEditor)(ControllerLevelEditor * self) = (void (*)(ControllerLevelEditor * self)) 0x569d10;
#endif

#ifdef __linux__
inline ControllerLevelEditor * * ControllerLevelEditor::storedEditor = (ControllerLevelEditor* *) 0x856a6e8;
inline int * ControllerLevelEditor::playingLevel = (int*) 0x856a6e4;
inline bool * ControllerLevelEditor::playingWholeDungeon = (bool*) 0x856a6e1;

inline void (*ControllerLevelEditor::ptr::ResetPlayers)(ControllerLevelEditor * self, int characterID) = (void (*)(ControllerLevelEditor * self, int characterID)) 0x82770f0;
inline String * (*ControllerLevelEditor::ptr::GetTilesetText)(ControllerLevelEditor * self) = (String * (*)(ControllerLevelEditor * self)) 0x80c2290;
inline void (*ControllerLevelEditor::ptr::UpdateMultiPageList)(ControllerLevelEditor * self, StringStack * names, int prevOption, int nextOption) = (void (*)(ControllerLevelEditor * self, StringStack * names, int prevOption, int nextOption)) 0x80d2170;
inline void (*ControllerLevelEditor::ptr::UpdateOptions)(ControllerLevelEditor * self, bool setIndex) = (void (*)(ControllerLevelEditor * self, bool setIndex)) 0x80d0740;
inline ControllerLevelEditor * (*ControllerLevelEditor::ptr::New)(ControllerLevelEditor * self) = (ControllerLevelEditor * (*)(ControllerLevelEditor * self)) 0x835d660;
inline void (*ControllerLevelEditor::ptr::DoDelete)(ControllerLevelEditor * self, int cursorX, int cursorY) = (void (*)(ControllerLevelEditor * self, int cursorX, int cursorY)) 0x8190990;
inline void (*ControllerLevelEditor::ptr::ActuallyDoSave)(ControllerLevelEditor * self) = (void (*)(ControllerLevelEditor * self)) 0x82d94f0;
inline void (*ControllerLevelEditor::ptr::DoSave)(ControllerLevelEditor * self) = (void (*)(ControllerLevelEditor * self)) 0x814cc40;
inline void (*ControllerLevelEditor::ptr::DoLoad)(ControllerLevelEditor * self, String * filename, bool fromWorkshop) = (void (*)(ControllerLevelEditor * self, String * filename, bool fromWorkshop)) 0x835ce60;
inline void (*ControllerLevelEditor::ptr::Update)(ControllerLevelEditor * self) = (void (*)(ControllerLevelEditor * self)) 0x835fd50;
inline void (*ControllerLevelEditor::ptr::RenderPlacementGhost)(ControllerLevelEditor * self) = (void (*)(ControllerLevelEditor * self)) 0x807e6b0;
inline void (*ControllerLevelEditor::ptr::SetCharText)(ControllerLevelEditor * self) = (void (*)(ControllerLevelEditor * self)) 0x81407b0;
inline void (*ControllerLevelEditor::ptr::SetMusicText)(ControllerLevelEditor * self) = (void (*)(ControllerLevelEditor * self)) 0x80c9760;
inline void (*ControllerLevelEditor::ptr::Render)(ControllerLevelEditor * self) = (void (*)(ControllerLevelEditor * self)) 0x841e5e0;
inline void (*ControllerLevelEditor::ptr::SetRandomText)(ControllerLevelEditor * self) = (void (*)(ControllerLevelEditor * self)) 0x80e0a70;
inline void (*ControllerLevelEditor::ptr::ExecuteOption)(ControllerLevelEditor * self, int option) = (void (*)(ControllerLevelEditor * self, int option)) 0x80e3fc0;
inline void (*ControllerLevelEditor::ptr::GUICallback)(ControllerLevelEditor * self, int index, bool left) = (void (*)(ControllerLevelEditor * self, int index, bool left)) 0x835b5d0;
inline void (*ControllerLevelEditor::ptr::RegainFocus)(ControllerLevelEditor * self) = (void (*)(ControllerLevelEditor * self)) 0x835b480;
inline void (*ControllerLevelEditor::ptr::Destructor)(ControllerLevelEditor * self) = (void (*)(ControllerLevelEditor * self)) 0x806f7a0;
inline void (*ControllerLevelEditor::ptr::mark)(ControllerLevelEditor * self) = (void (*)(ControllerLevelEditor * self)) 0x80ae030;
inline void (*ControllerLevelEditor::ptr::CSTR_ControllerLevelEditor)(ControllerLevelEditor * self) = (void (*)(ControllerLevelEditor * self)) 0x817f700;
#endif
#endif
