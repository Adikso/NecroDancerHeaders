// Generated automatically. Do not edit!
#ifndef _Player_
#define _Player_
template<class T> class Array;
class Bomb;
class Bouncer;
class ControllerInputPopup;
class ControllerPopUp;
class Enemy;
class EnemyClamper;
class Entity;
class Item;
class ItemList;
class List10;
class Point;
class Point2;
class Sprite;
class String;
class StringMap6;
class StringMap7;
class TextSprite;
class Weapon;
#include "MobileEntity.hpp"

class Player : public MobileEntity  {
public:
    bool isHelper;
    int characterID;
    int playerID;
    bool UsingDorianAltSkin;
    bool UsingMelodyAltSkin;
    bool UsingDoveAltSkin;
    bool UsingCodaAltSkin;
    bool UsingEliAltSkin;
    bool UsingAltSkin;
    Sprite * headImage;
    Sprite * headImageForHUD;
    StringMap6 * ownedItems;
    StringMap7 * cursedSlots;
    ItemList * miscItems;
    Weapon * weapon;
    int armorAmount;
    String * armorType;
    String * torchType;
    bool hasPickedUpBlastHelmThisRun;
    int courageBeat;
    int lastHitBeat;
    int lordCrownActiveBeat;
    EnemyClamper * clampedEnemy;
    bool wasClamped;
    int shieldActiveBeat;
    int lastMove;
    int moveLastBeat;
    bool immobilized;
    int lastIceSlideBeat;
    bool readyToThrow;
    int killCounter;
    bool ringOfPeaceAddedHealth;
    int healthMax;
    int health;
    int bloodDrumBeats;
    int coinPickupBeat;
    int warDrumBeats;
    Sprite * shieldImageFront;
    Sprite * shieldImageBack;
    int lastPlayerMoveBeatIncludeShoves;
    int bloodCounter;
    int paceBeat;
    int lastVocalizedBeat;
    int lastAttackBeat;
    int attackChain;
    int shovelRenderTime;
    int shovelRenderX;
    int shovelRenderY;
    bool dontLeap;
    int lastBeatX;
    int lastBeatY;
    bool castingFireball;
    Player * helper;
    bool globalIgnoreFlyToSlot;
    bool hudDiamondForFlyingRender;
    int numBombs;
    Array<bool> * hudSlotOffFlyFromPlayer;
    List10 * holdingBagItems;
    int playerTempNum;
    bool hudSlotInitialized;
    int numHudSlots;
    Array<Sprite *> * hudSlot;
    int numHudSlotsIncludingActionAndSpells;
    Array<Point2 *> * hudSlotOff;
    Sprite * shovelImage;
    Sprite * titaniumShovelImage;
    Sprite * crystalShovelImage;
    Sprite * obsidianShovelImage;
    Sprite * glassShovelImage;
    Sprite * bloodShovelImage;
    Sprite * shardShovelImage;
    Sprite * pickaxeImage;
    Sprite * hudSlotAction1;
    Sprite * hudSlotAction2;
    Sprite * hudSlotAction2Empty;
    Sprite * hudSlotWeapon2;
    Sprite * hudSlotWeapon2Empty;
    Sprite * hudSlotWeaponReload;
    Sprite * hudSlotWeaponThrow;
    Sprite * hudSlotWeaponThrow2;
    Sprite * hudSlotBoots;
    Sprite * hudSlotBoots2;
    Sprite * hudSlotBoots3;
    Sprite * hudSlotBomb;
    Sprite * hudSlotSpell1;
    Sprite * hudSlotSpell2;
    Sprite * hudDiamondForFlying;
    Bouncer * wobbler;
    int lastMoveOntoPlayerInCoopModeBeat;
    int queuedMoveBeat;
    int minVisibilityCachedFrame;
    float minVisibilityCached;
    int lastLOSX;
    int lastLOSY;
    ControllerPopUp * popUpController;
    int warnState;
    ControllerPopUp * hintsController;
    ControllerInputPopup * seedController;
    int crownOfGreedBeat;
    int lastWarDrumBeat;
    int lastBloodDrumBeat;
    bool queuedMove;
    int queuedMoveX;
    int queuedMoveY;
    bool wasShrunk;
    bool playedExitErrorSound;
    EnemyClamper * lastClampedEnemy;
    int heartTransplantTime;
    TextSprite * crownText;
    TextSprite * hudTextAction1;
    TextSprite * hudText2Action1;
    Sprite * hudSpriteAction1;
    TextSprite * hudTextAction2;
    TextSprite * hudText2Action2;
    Sprite * hudSpriteAction2;
    TextSprite * hudTextWeapon2;
    TextSprite * hudText2Weapon2;
    Sprite * hudSpriteWeapon2;
    TextSprite * hudTextWeaponReload;
    TextSprite * hudText2WeaponReload;
    Sprite * hudSpriteWeaponReload;
    TextSprite * hudTextBoots;
    TextSprite * hudText2Boots;
    Sprite * hudSpriteBoots;
    TextSprite * hudTextBoots2;
    TextSprite * hudText2Boots2;
    Sprite * hudSpriteBoots2;
    TextSprite * hudTextWeaponThrow;
    TextSprite * hudText2WeaponThrow;
    Sprite * hudSpriteWeaponThrow;
    TextSprite * hudTextBomb;
    TextSprite * hudText2Bomb;
    Sprite * hudSpriteBomb;
    TextSprite * bombText;
    TextSprite * coinText;
    TextSprite * diamondText;
    float hudDiamondForFlyingXOff;
    float hudDiamondForFlyingYOff;
    Sprite * hudSpriteSpell1;
    TextSprite * hudText2Spell1;
    TextSprite * hudTextSpell1;
    TextSprite * spell1CoolText;
    TextSprite * spell1CoolText2;
    TextSprite * spell1CoolText3;
    Sprite * hudSpriteSpell2;
    TextSprite * hudText2Spell2;
    TextSprite * hudTextSpell2;
    TextSprite * spell2CoolText;
    TextSprite * spell2CoolText2;
    TextSprite * spell2CoolText3;
    int deadRenderFrames;
    float trapSight;
    static int * numCoins;
    static int * coinXOR;
    static int * sessionMaxCoins;
    static Array<int> * * AltHeadWidths;
    static Array<int> * * AltHeadHeights;
    static bool * goldenLuteTowards;
    static String * * lastDeadlyDamageSource;
    static int * numDiamonds;
    static int * playerTempCount;
    static Sprite * * hudCoins;
    static Sprite * * hudDiamonds;
    static bool * heartsLoaded;
    static Sprite * * heart;
    static Sprite * * heartEmpty;
    static Sprite * * heartHalf;
    static int * lobbySaleItemMinCost;
    static bool * debugHudForceShowDiamonds;
    static bool * debugHudForceNoAlignSpells;
    static bool * debugHudForceFixedSpellSlots;

    // Wrappers
    Player(int id, int characterID_) {
        ptr::CSTR_Player(this);
        ptr::New(this, id, characterID_);
    }

    inline static int _GetCoins() { return ptr::_GetCoins(); }
    inline static void _SetCoinXOR() { ptr::_SetCoinXOR(); }
    inline static void SetCoins(int tmpNum, bool allowAchievement) { ptr::SetCoins(tmpNum, allowAchievement); }
    inline static String * GetCharacterName(int charNum, int tagType) { return ptr::GetCharacterName(charNum, tagType); }
    inline virtual void LoadImages() { ptr::LoadImages(this); }
    inline virtual void _EmptyAllSlots() { ptr::_EmptyAllSlots(); }
    inline virtual bool IsLordCrownActive() { return ptr::IsLordCrownActive(this); }
    inline virtual String * _GetItemInSlot(String * arg1) { return ptr::_GetItemInSlot(this, arg1); }
    inline virtual bool _HasItemOfType(String * arg1) { return ptr::_HasItemOfType(this, arg1); }
    inline virtual bool IsShrunk(int xVal, int yVal) { return ptr::IsShrunk(this, xVal, yVal); }
    inline virtual bool IsShieldActive() { return ptr::IsShieldActive(this); }
    inline virtual bool Perished() { return ptr::Perished(this); }
    inline static bool _DoesAnyPlayerHaveItemOfType(String * arg1) { return ptr::_DoesAnyPlayerHaveItemOfType(arg1); }
    inline static void ActuallyPlayVO(String * voSound, Player * player) { ptr::ActuallyPlayVO(voSound, player); }
    inline virtual void PlayVO(String * voSound) { ptr::PlayVO(this, voSound); }
    inline virtual bool SubtractItemOfType(String * i) { return ptr::SubtractItemOfType(this, i); }
    inline virtual bool SubtractKey() { return ptr::SubtractKey(this); }
    inline static void PlayVOPlayer1(String * voSound) { ptr::PlayVOPlayer1(voSound); }
    inline static int GetGreedMultiplier() { return ptr::GetGreedMultiplier(); }
    inline virtual int GetArmorAmount() { return ptr::GetArmorAmount(this); }
    inline virtual float GetLightSourceMin() { return ptr::GetLightSourceMin(this); }
    inline virtual float GetLightSourceMax() { return ptr::GetLightSourceMax(this); }
    inline virtual void ProcessTheResultsOfLosingItem(String * i) { ptr::ProcessTheResultsOfLosingItem(this, i); }
    inline virtual int GetBonusDamage(int baseDamage) { return ptr::GetBonusDamage(this, baseDamage); }
    inline void CancelTween() { ptr::CancelTween(this); }
    inline virtual void WarpTo(int newX, int newY) { ptr::WarpTo(this, newX, newY); }
    inline virtual bool IsWeaponlessCharacter() { return ptr::IsWeaponlessCharacter(this); }
    inline virtual void _Heal(int arg1, bool arg2, bool arg3) { ptr::_Heal(this, arg1, arg2, arg3); }
    inline virtual void GotKill() { ptr::GotKill(this); }
    inline static void OffsetCoins(int tmpNum) { ptr::OffsetCoins(tmpNum); }
    inline void PerformTween(int xVal, int yVal, int oldX, int oldY, int tweenType, int shadowTweenType, bool bufferTween) { ptr::PerformTween(this, xVal, yVal, oldX, oldY, tweenType, shadowTweenType, bufferTween); }
    inline virtual void DoHitEffects(int dir, Entity * hitter, int tempDam) { ptr::DoHitEffects(this, dir, hitter, tempDam); }
    inline virtual void TurnAllItemsToGlass() { ptr::TurnAllItemsToGlass(this); }
    inline virtual void TurnAllItemsToObsidian() { ptr::TurnAllItemsToObsidian(this); }
    inline virtual void VocalizeAttack() { ptr::VocalizeAttack(this); }
    inline virtual void KnockSelfBack(int xVal, int yVal) { ptr::KnockSelfBack(this, xVal, yVal); }
    inline virtual bool AttackDirection(int dir, bool isThrow) { return ptr::AttackDirection(this, dir, isThrow); }
    inline virtual int GetShovelDamageHelper() { return ptr::GetShovelDamageHelper(this); }
    inline virtual int GetShovelDamage(bool fromMinersCap) { return ptr::GetShovelDamage(this, fromMinersCap); }
    inline virtual bool IsNecroDancer1Alive() { return ptr::IsNecroDancer1Alive(this); }
    inline virtual void ImmediatelyMoveTo(int xVal, int yVal, bool fromKeyboard, bool fromClampedEnemy, bool fromBounceTrap, bool fromCourage, bool overrideStairs) { ptr::ImmediatelyMoveTo(this, xVal, yVal, fromKeyboard, fromClampedEnemy, fromBounceTrap, fromCourage, overrideStairs); }
    inline virtual bool IsSlotCursed(String * sl) { return ptr::IsSlotCursed(this, sl); }
    inline virtual void BreakGlassShovel() { ptr::BreakGlassShovel(this); }
    inline virtual void CheckVowOfPoverty() { ptr::CheckVowOfPoverty(this); }
    inline static void AddCoins(int tmpNum) { ptr::AddCoins(tmpNum); }
    inline virtual void DoEnchantWeapon() { ptr::DoEnchantWeapon(this); }
    inline virtual bool HasShovel() { return ptr::HasShovel(this); }
    inline virtual void DoNeed() { ptr::DoNeed(this); }
    inline virtual void DoCrownTeleport() { ptr::DoCrownTeleport(this); }
    inline virtual void BreakGlassStuff() { ptr::BreakGlassStuff(this); }
    inline static void _SaveData() { ptr::_SaveData(); }
    inline static void ChooseNewPlayer1() { ptr::ChooseNewPlayer1(); }
    inline static bool AllPlayersPerished() { return ptr::AllPlayersPerished(); }
    inline virtual void DropItem(String * i, int xVal, int yVal) { ptr::DropItem(this, i, xVal, yVal); }
    inline virtual void AddGeneralMetrics(bool sendIt) { ptr::AddGeneralMetrics(this, sendIt); }
    inline bool Hit(String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) { return ptr::Hit(this, damageSource, damage, dir, hitter, hitAtLastTile, hitType); }
    inline static int GetSlotNum(String * sl) { return ptr::GetSlotNum(sl); }
    inline virtual void PutItemInSlot(String * sl, String * i, bool ignoreFlyTo) { ptr::PutItemInSlot(this, sl, i, ignoreFlyTo); }
    inline virtual bool IsAnythingInSlot(String * sl) { return ptr::IsAnythingInSlot(this, sl); }
    inline virtual bool HaveSecondActionSlot() { return ptr::HaveSecondActionSlot(this); }
    inline virtual bool _AddItemOfTypePreProcess(String * arg1, bool arg2) { return ptr::_AddItemOfTypePreProcess(this, arg1, arg2); }
    inline virtual void GetNewWeapon(String * w) { ptr::GetNewWeapon(this, w); }
    inline virtual void AddItemOfType(String * item, Item * itemObj, bool ignoreFlyTo, bool isInitialEquip) { ptr::AddItemOfType(this, item, itemObj, ignoreFlyTo, isInitialEquip); }
    inline virtual void SetSlotCursed(String * sl, bool b) { ptr::SetSlotCursed(this, sl, b); }
    inline virtual void GiveInitialEquipment(bool resetHealth) { ptr::GiveInitialEquipment(this, resetHealth); }
    inline virtual void SetCharacter(int charNum) { ptr::SetCharacter(this, charNum); }
    inline Player * New(int id, int characterID_) { return ptr::New(this, id, characterID_); }
    inline Player * _new2() { return ptr::_new2(); }
    inline virtual void SetTotallyBlank() { ptr::SetTotallyBlank(this); }
    inline virtual void StopFalling() { ptr::StopFalling(this); }
    inline virtual void ResetStateAfterLevel() { ptr::ResetStateAfterLevel(this); }
    inline static bool _DoesAnyPlayerHaveShovel() { return ptr::_DoesAnyPlayerHaveShovel(); }
    inline static bool DoesPlayer1HaveItemOfType(String * i) { return ptr::DoesPlayer1HaveItemOfType(i); }
    inline virtual int GetTorchLevel() { return ptr::GetTorchLevel(this); }
    inline virtual int CalcMinVisibility() { return ptr::CalcMinVisibility(this); }
    inline virtual int GetMinVisibility() { return ptr::GetMinVisibility(this); }
    inline static bool _CheckCoinXOR() { return ptr::_CheckCoinXOR(); }
    inline virtual void ProcessMoveQueue() { ptr::ProcessMoveQueue(this); }
    inline virtual int GetMoveLastBeat() { return ptr::GetMoveLastBeat(this); }
    inline virtual Point * GetPositionLastBeat() { return ptr::GetPositionLastBeat(this); }
    inline static bool _arandomname() { return ptr::_arandomname(); }
    inline void Update() { ptr::Update(this); }
    inline static void UpdateAll() { ptr::UpdateAll(); }
    inline static void _CoinCheatTest() { ptr::_CoinCheatTest(); }
    inline virtual bool ConsumeItemSlot(String * sl) { return ptr::ConsumeItemSlot(this, sl); }
    inline virtual bool UseBomb() { return ptr::UseBomb(this); }
    inline virtual bool SwapWeapons() { return ptr::SwapWeapons(this); }
    inline virtual bool ConsumeItemSlotOffbeat(String * arg1) { return ptr::_ConsumeItemSlotOffbeat(this, arg1); }
    inline virtual bool UseBombOffbeat() { return ptr::_UseBombOffbeat(); }
    inline virtual bool SwapWeaponsOffbeat() { return ptr::_SwapWeaponsOffbeat(); }
    inline virtual void MoveTo(int xVal, int yVal) { ptr::MoveTo(this, xVal, yVal); }
    inline virtual bool AttemptOffbeatMove(int xVal, int yVal) { return ptr::AttemptOffbeatMove(this, xVal, yVal); }
    inline static bool PlayersHaveMovedThisBeat() { return ptr::PlayersHaveMovedThisBeat(); }
    inline static bool AnyPlayerInSpecialRoom() { return ptr::AnyPlayerInSpecialRoom(); }
    inline virtual void HandleIceAndCoals() { ptr::HandleIceAndCoals(this); }
    inline static String * GetSlotFromNum(int num) { return ptr::GetSlotFromNum(num); }
    inline virtual Point * ProcessSlotOffsets(int tmpSlotNum, int tmpX, int tmpY) { return ptr::ProcessSlotOffsets(this, tmpSlotNum, tmpX, tmpY); }
    inline virtual Point * ProcessSlotOffsets2(String * tmpSlot, int tmpX, int tmpY) { return ptr::ProcessSlotOffsets2(this, tmpSlot, tmpX, tmpY); }
    inline virtual String * GetKillsUntilHealingString() { return ptr::GetKillsUntilHealingString(this); }
    inline static bool _DrawingDiamondHUD() { return ptr::_DrawingDiamondHUD(); }
    inline virtual void RenderHUD(int position, bool small) { ptr::RenderHUD(this, position, small); }
    inline static String * GetTransplantDisplayTime() { return ptr::GetTransplantDisplayTime(); }
    inline void Fall(bool keepMultiplier) { ptr::Fall(this, keepMultiplier); }
    inline virtual bool IsEffectFlickeringOff() { return ptr::_IsEffectFlickeringOff(); }
    inline virtual bool IsLordCrownActiveFlicker() { return ptr::IsLordCrownActiveFlicker(this); }
    inline virtual bool IsShieldActiveFlicker() { return ptr::IsShieldActiveFlicker(this); }
    inline void Render() { ptr::Render(this); }
    inline bool IsVisible() { return ptr::IsVisible(this); }
    inline virtual int GetDamage() { return ptr::GetDamage(this); }
    inline void mark() { ptr::mark(this); }
    inline void ClearAllFamiliars(bool includeLamb) { ptr::ClearAllFamiliars(this, includeLamb); }
    inline void Die() { ptr::Die(this); }
    inline static int NumEnabledCharacters() { return ptr::NumEnabledCharacters(); }
    inline static Sprite * MakeBodyImage(int characterID, String * idSuffix, int altSkin) { return ptr::MakeBodyImage(characterID, idSuffix, altSkin); }
    inline static Sprite * MakeHeadImage(int characterID, String * idSuffix, int altSkin) { return ptr::MakeHeadImage(characterID, idSuffix, altSkin); }
    inline String * GetItemInSlot(String * sl, bool overrideBatForm) { return ptr::GetItemInSlot(this, sl, overrideBatForm); }
    inline bool HasItemOfType(String * i, bool overrideBatForm) { return ptr::HasItemOfType(this, i, overrideBatForm); }
    inline void UpdateBonusHeart() { ptr::UpdateBonusHeart(this); }
    inline void EmptyAllSlots(bool includeLamb) { ptr::EmptyAllSlots(this, includeLamb); }
    inline static bool IsBloodDamage(String * damageSource) { return ptr::IsBloodDamage(damageSource); }
    inline static bool IsIntentionalDamage(String * damageSource) { return ptr::IsIntentionalDamage(damageSource); }
    inline static bool IsInternalDamage(String * damageSource) { return ptr::IsInternalDamage(damageSource); }
    inline static bool IsUnpreventableDamage(String * damageSource) { return ptr::IsUnpreventableDamage(damageSource); }
    inline bool TestCourage(int beat) { return ptr::TestCourage(this, beat); }
    inline Weapon * GetWeapon(bool overrideBatForm) { return ptr::GetWeapon(this, overrideBatForm); }
    inline int GetElectricStrength() { return ptr::GetElectricStrength(this); }
    inline bool FeetIgnoreWaterAndTar() { return ptr::FeetIgnoreWaterAndTar(this); }
    inline static bool DoesAnyPlayerHaveItemOfType(String * it, bool overrideBatForm) { return ptr::DoesAnyPlayerHaveItemOfType(it, overrideBatForm); }
    inline void CheckConductorWire() { ptr::CheckConductorWire(this); }
    inline void CheckFloating() { ptr::CheckFloating(this); }
    inline void BreakSpikedEars() { ptr::BreakSpikedEars(this); }
    inline void ClearFamiliarAt(int offsetX, int offsetY) { ptr::ClearFamiliarAt(this, offsetX, offsetY); }
    inline void LambDeath() { ptr::LambDeath(this); }
    inline void AddFamiliarAt(int offsetX, int offsetY, String * item) { ptr::AddFamiliarAt(this, offsetX, offsetY, item); }
    inline bool FeetIgnoreOoze() { return ptr::FeetIgnoreOoze(this); }
    inline void MaybeOpenZap(int playerX, int playerY, int electricStrength) { ptr::MaybeOpenZap(this, playerX, playerY, electricStrength); }
    inline void SetSlotMystery(String * sl, bool b) { ptr::SetSlotMystery(this, sl, b); }
    inline void EmptySlot(String * sl) { ptr::EmptySlot(this, sl); }
    inline int FrostItemCount() { return ptr::FrostItemCount(this); }
    inline static bool AnyPlayerTemporaryMapSight() { return ptr::AnyPlayerTemporaryMapSight(); }
    inline bool HasCouponLike() { return ptr::HasCouponLike(this); }
    inline void Heal(int amt, bool fromFood, bool playVO, bool fromMagicFood) { ptr::Heal(this, amt, fromFood, playVO, fromMagicFood); }
    inline void GotBlood(int amount) { ptr::GotBlood(this, amount); }
    inline void TurnSlotInto(String * slot, String * newItem) { ptr::TurnSlotInto(this, slot, newItem); }
    inline void WarpFamiliars() { ptr::WarpFamiliars(this); }
    inline void ProcessDropMystery(Item * item, String * slot) { ptr::ProcessDropMystery(this, item, slot); }
    inline void AfterHitHook(Enemy * nme, int hitX, int hitY, int dir) { ptr::AfterHitHook(this, nme, hitX, hitY, dir); }
    inline void CommitZap() { ptr::CommitZap(this); }
    inline bool IsHeavy() { return ptr::IsHeavy(this); }
    inline bool IsPhasing() { return ptr::IsPhasing(this); }
    inline void PainFlyaway() { ptr::PainFlyaway(this); }
    inline bool DoBigDig(int x0, int y0, int shovelDamage, int dir, bool allowNoShovel) { return ptr::DoBigDig(this, x0, y0, shovelDamage, dir, allowNoShovel); }
    inline void GrantIBeats(int num) { ptr::GrantIBeats(this, num); }
    inline Bomb * DropBomb() { return ptr::DropBomb(this); }
    inline void ProcessTheResultsOfEquippingItem(String * item) { ptr::ProcessTheResultsOfEquippingItem(this, item); }
    inline void ExitBatForm() { ptr::ExitBatForm(this); }
    inline void EnterBatForm() { ptr::EnterBatForm(this); }
    inline void ToggleBatForm() { ptr::ToggleBatForm(this); }
    inline bool PermitMoveFail() { return ptr::PermitMoveFail(this); }
    inline void SetDugRecently() { ptr::SetDugRecently(this); }
    inline bool FeetIgnoreIce() { return ptr::FeetIgnoreIce(this); }
    inline bool FeetIgnoreCoals() { return ptr::FeetIgnoreCoals(this); }
    inline void MoveFamiliars(int deltaX, int deltaY) { ptr::MoveFamiliars(this, deltaX, deltaY); }
    inline void MoveSoulFamiliars(int moveDir) { ptr::MoveSoulFamiliars(this, moveDir); }
    inline bool ConsumeOne(String * item) { return ptr::ConsumeOne(this, item); }
    inline bool AddItemOfTypePreProcess(String * i, Item * itemObj) { return ptr::AddItemOfTypePreProcess(this, i, itemObj); }
    inline bool IsBomblessCharacter() { return ptr::IsBomblessCharacter(this); }
    inline static bool AnyPlayerPeace() { return ptr::AnyPlayerPeace(); }
    inline static bool IsSolo() { return ptr::IsSolo(); }
    inline static bool IsLastLevel() { return ptr::IsLastLevel(); }
    inline static void CheckAllModeCompletion() { ptr::CheckAllModeCompletion(); }
    inline int MomentumDir() { return ptr::MomentumDir(this); }
    inline bool DoComboLeftRight() { return ptr::DoComboLeftRight(this); }
    inline bool DoComboLeftUp() { return ptr::DoComboLeftUp(this); }
    inline bool DoComboRightUp() { return ptr::DoComboRightUp(this); }
    inline bool DoComboRightDown() { return ptr::DoComboRightDown(this); }
    inline bool DoComboLeftDown() { return ptr::DoComboLeftDown(this); }
    inline bool DoComboUpDown() { return ptr::DoComboUpDown(this); }
    inline void AfterEnemyMovement() { ptr::AfterEnemyMovement(this); }
    inline int GetItemQuantity(String * item) { return ptr::GetItemQuantity(this, item); }
    inline TextSprite * GetHUDQuantityText(String * slot) { return ptr::GetHUDQuantityText(this, slot); }
    inline void RenderHUDSlotQuantity(TextSprite * textSprite, int num, int slotX, int slotY, int slotSize, float scale, float alpha) { ptr::RenderHUDSlotQuantity(this, textSprite, num, slotX, slotY, slotSize, scale, alpha); }
    inline void RenderHUDSlotQuantity2(TextSprite * textSprite, String * item, int slotX, int slotY, int slotSize, float scale, float alpha) { ptr::RenderHUDSlotQuantity2(this, textSprite, item, slotX, slotY, slotSize, scale, alpha); }
    inline void RenderHUDSlotHotkey(int inputMove, int slotX, int slotY, int slotSize, float scale, bool overrideBatForm) { ptr::RenderHUDSlotHotkey(this, inputMove, slotX, slotY, slotSize, scale, overrideBatForm); }
    inline void ScatterItems() { ptr::ScatterItems(this); }

    class ptr {
    public:
        static int (*_GetCoins)();
        static void (*_SetCoinXOR)();
        static void (*SetCoins)(int tmpNum, bool allowAchievement);
        static String * (*GetCharacterName)(int charNum, int tagType);
        static void (*LoadImages)(Player * self);
        static void (*_EmptyAllSlots)();
        static bool (*IsLordCrownActive)(Player * self);
        static String * (*_GetItemInSlot)(Player * self, String * arg1);
        static bool (*_HasItemOfType)(Player * self, String * arg1);
        static bool (*IsShrunk)(Player * self, int xVal, int yVal);
        static bool (*IsShieldActive)(Player * self);
        static bool (*Perished)(Player * self);
        static bool (*_DoesAnyPlayerHaveItemOfType)(String * arg1);
        static void (*ActuallyPlayVO)(String * voSound, Player * player);
        static void (*PlayVO)(Player * self, String * voSound);
        static bool (*SubtractItemOfType)(Player * self, String * i);
        static bool (*SubtractKey)(Player * self);
        static void (*PlayVOPlayer1)(String * voSound);
        static int (*GetGreedMultiplier)();
        static int (*GetArmorAmount)(Player * self);
        static float (*GetLightSourceMin)(Player * self);
        static float (*GetLightSourceMax)(Player * self);
        static void (*ProcessTheResultsOfLosingItem)(Player * self, String * i);
        static int (*GetBonusDamage)(Player * self, int baseDamage);
        static void (*CancelTween)(Player * self);
        static void (*WarpTo)(Player * self, int newX, int newY);
        static bool (*IsWeaponlessCharacter)(Player * self);
        static void (*_Heal)(Player * self, int arg1, bool arg2, bool arg3);
        static void (*GotKill)(Player * self);
        static void (*OffsetCoins)(int tmpNum);
        static void (*PerformTween)(Player * self, int xVal, int yVal, int oldX, int oldY, int tweenType, int shadowTweenType, bool bufferTween);
        static void (*DoHitEffects)(Player * self, int dir, Entity * hitter, int tempDam);
        static void (*TurnAllItemsToGlass)(Player * self);
        static void (*TurnAllItemsToObsidian)(Player * self);
        static void (*VocalizeAttack)(Player * self);
        static void (*KnockSelfBack)(Player * self, int xVal, int yVal);
        static bool (*AttackDirection)(Player * self, int dir, bool isThrow);
        static int (*GetShovelDamageHelper)(Player * self);
        static int (*GetShovelDamage)(Player * self, bool fromMinersCap);
        static bool (*IsNecroDancer1Alive)(Player * self);
        static void (*ImmediatelyMoveTo)(Player * self, int xVal, int yVal, bool fromKeyboard, bool fromClampedEnemy, bool fromBounceTrap, bool fromCourage, bool overrideStairs);
        static bool (*IsSlotCursed)(Player * self, String * sl);
        static void (*BreakGlassShovel)(Player * self);
        static void (*CheckVowOfPoverty)(Player * self);
        static void (*AddCoins)(int tmpNum);
        static void (*DoEnchantWeapon)(Player * self);
        static bool (*HasShovel)(Player * self);
        static void (*DoNeed)(Player * self);
        static void (*DoCrownTeleport)(Player * self);
        static void (*BreakGlassStuff)(Player * self);
        static void (*_SaveData)();
        static void (*ChooseNewPlayer1)();
        static bool (*AllPlayersPerished)();
        static void (*DropItem)(Player * self, String * i, int xVal, int yVal);
        static void (*AddGeneralMetrics)(Player * self, bool sendIt);
        static bool (*Hit)(Player * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType);
        static int (*GetSlotNum)(String * sl);
        static void (*PutItemInSlot)(Player * self, String * sl, String * i, bool ignoreFlyTo);
        static bool (*IsAnythingInSlot)(Player * self, String * sl);
        static bool (*HaveSecondActionSlot)(Player * self);
        static bool (*_AddItemOfTypePreProcess)(Player * self, String * arg1, bool arg2);
        static void (*GetNewWeapon)(Player * self, String * w);
        static void (*AddItemOfType)(Player * self, String * item, Item * itemObj, bool ignoreFlyTo, bool isInitialEquip);
        static void (*SetSlotCursed)(Player * self, String * sl, bool b);
        static void (*GiveInitialEquipment)(Player * self, bool resetHealth);
        static void (*SetCharacter)(Player * self, int charNum);
        static Player * (*New)(Player * self, int id, int characterID_);
        static Player * (*_new2)();
        static void (*SetTotallyBlank)(Player * self);
        static void (*StopFalling)(Player * self);
        static void (*ResetStateAfterLevel)(Player * self);
        static bool (*_DoesAnyPlayerHaveShovel)();
        static bool (*DoesPlayer1HaveItemOfType)(String * i);
        static int (*GetTorchLevel)(Player * self);
        static int (*CalcMinVisibility)(Player * self);
        static int (*GetMinVisibility)(Player * self);
        static bool (*_CheckCoinXOR)();
        static void (*ProcessMoveQueue)(Player * self);
        static int (*GetMoveLastBeat)(Player * self);
        static Point * (*GetPositionLastBeat)(Player * self);
        static bool (*_arandomname)();
        static void (*Update)(Player * self);
        static void (*UpdateAll)();
        static void (*_CoinCheatTest)();
        static bool (*ConsumeItemSlot)(Player * self, String * sl);
        static bool (*UseBomb)(Player * self);
        static bool (*SwapWeapons)(Player * self);
        static bool (*_ConsumeItemSlotOffbeat)(Player * self, String * arg1);
        static bool (*_UseBombOffbeat)();
        static bool (*_SwapWeaponsOffbeat)();
        static void (*MoveTo)(Player * self, int xVal, int yVal);
        static bool (*AttemptOffbeatMove)(Player * self, int xVal, int yVal);
        static bool (*PlayersHaveMovedThisBeat)();
        static bool (*AnyPlayerInSpecialRoom)();
        static void (*HandleIceAndCoals)(Player * self);
        static String * (*GetSlotFromNum)(int num);
        static Point * (*ProcessSlotOffsets)(Player * self, int tmpSlotNum, int tmpX, int tmpY);
        static Point * (*ProcessSlotOffsets2)(Player * self, String * tmpSlot, int tmpX, int tmpY);
        static String * (*GetKillsUntilHealingString)(Player * self);
        static bool (*_DrawingDiamondHUD)();
        static void (*RenderHUD)(Player * self, int position, bool small);
        static String * (*GetTransplantDisplayTime)();
        static void (*Fall)(Player * self, bool keepMultiplier);
        static bool (*_IsEffectFlickeringOff)();
        static bool (*IsLordCrownActiveFlicker)(Player * self);
        static bool (*IsShieldActiveFlicker)(Player * self);
        static void (*Render)(Player * self);
        static bool (*IsVisible)(Player * self);
        static int (*GetDamage)(Player * self);
        static void (*mark)(Player * self);
        static void (*CSTR_Player)(Player * self);
        static void (*ClearAllFamiliars)(Player * self, bool includeLamb);
        static void (*Die)(Player * self);
        static int (*NumEnabledCharacters)();
        static Sprite * (*MakeBodyImage)(int characterID, String * idSuffix, int altSkin);
        static Sprite * (*MakeHeadImage)(int characterID, String * idSuffix, int altSkin);
        static String * (*GetItemInSlot)(Player * self, String * sl, bool overrideBatForm);
        static bool (*HasItemOfType)(Player * self, String * i, bool overrideBatForm);
        static void (*UpdateBonusHeart)(Player * self);
        static void (*EmptyAllSlots)(Player * self, bool includeLamb);
        static bool (*IsBloodDamage)(String * damageSource);
        static bool (*IsIntentionalDamage)(String * damageSource);
        static bool (*IsInternalDamage)(String * damageSource);
        static bool (*IsUnpreventableDamage)(String * damageSource);
        static bool (*TestCourage)(Player * self, int beat);
        static Weapon * (*GetWeapon)(Player * self, bool overrideBatForm);
        static int (*GetElectricStrength)(Player * self);
        static bool (*FeetIgnoreWaterAndTar)(Player * self);
        static bool (*DoesAnyPlayerHaveItemOfType)(String * it, bool overrideBatForm);
        static void (*CheckConductorWire)(Player * self);
        static void (*CheckFloating)(Player * self);
        static void (*BreakSpikedEars)(Player * self);
        static void (*ClearFamiliarAt)(Player * self, int offsetX, int offsetY);
        static void (*LambDeath)(Player * self);
        static void (*AddFamiliarAt)(Player * self, int offsetX, int offsetY, String * item);
        static bool (*FeetIgnoreOoze)(Player * self);
        static void (*MaybeOpenZap)(Player * self, int playerX, int playerY, int electricStrength);
        static void (*SetSlotMystery)(Player * self, String * sl, bool b);
        static void (*EmptySlot)(Player * self, String * sl);
        static int (*FrostItemCount)(Player * self);
        static bool (*AnyPlayerTemporaryMapSight)();
        static bool (*HasCouponLike)(Player * self);
        static void (*Heal)(Player * self, int amt, bool fromFood, bool playVO, bool fromMagicFood);
        static void (*GotBlood)(Player * self, int amount);
        static void (*TurnSlotInto)(Player * self, String * slot, String * newItem);
        static void (*WarpFamiliars)(Player * self);
        static void (*ProcessDropMystery)(Player * self, Item * item, String * slot);
        static void (*AfterHitHook)(Player * self, Enemy * nme, int hitX, int hitY, int dir);
        static void (*CommitZap)(Player * self);
        static bool (*IsHeavy)(Player * self);
        static bool (*IsPhasing)(Player * self);
        static void (*PainFlyaway)(Player * self);
        static bool (*DoBigDig)(Player * self, int x0, int y0, int shovelDamage, int dir, bool allowNoShovel);
        static void (*GrantIBeats)(Player * self, int num);
        static Bomb * (*DropBomb)(Player * self);
        static void (*ProcessTheResultsOfEquippingItem)(Player * self, String * item);
        static void (*ExitBatForm)(Player * self);
        static void (*EnterBatForm)(Player * self);
        static void (*ToggleBatForm)(Player * self);
        static bool (*PermitMoveFail)(Player * self);
        static void (*SetDugRecently)(Player * self);
        static bool (*FeetIgnoreIce)(Player * self);
        static bool (*FeetIgnoreCoals)(Player * self);
        static void (*MoveFamiliars)(Player * self, int deltaX, int deltaY);
        static void (*MoveSoulFamiliars)(Player * self, int moveDir);
        static bool (*ConsumeOne)(Player * self, String * item);
        static bool (*AddItemOfTypePreProcess)(Player * self, String * i, Item * itemObj);
        static bool (*IsBomblessCharacter)(Player * self);
        static bool (*AnyPlayerPeace)();
        static bool (*IsSolo)();
        static bool (*IsLastLevel)();
        static void (*CheckAllModeCompletion)();
        static int (*MomentumDir)(Player * self);
        static bool (*DoComboLeftRight)(Player * self);
        static bool (*DoComboLeftUp)(Player * self);
        static bool (*DoComboRightUp)(Player * self);
        static bool (*DoComboRightDown)(Player * self);
        static bool (*DoComboLeftDown)(Player * self);
        static bool (*DoComboUpDown)(Player * self);
        static void (*AfterEnemyMovement)(Player * self);
        static int (*GetItemQuantity)(Player * self, String * item);
        static TextSprite * (*GetHUDQuantityText)(Player * self, String * slot);
        static void (*RenderHUDSlotQuantity)(Player * self, TextSprite * textSprite, int num, int slotX, int slotY, int slotSize, float scale, float alpha);
        static void (*RenderHUDSlotQuantity2)(Player * self, TextSprite * textSprite, String * item, int slotX, int slotY, int slotSize, float scale, float alpha);
        static void (*RenderHUDSlotHotkey)(Player * self, int inputMove, int slotX, int slotY, int slotSize, float scale, bool overrideBatForm);
        static void (*ScatterItems)(Player * self);
    };
};

#ifdef _WIN32
inline int * Player::numCoins = (int*) 0x8358b4;
inline int * Player::coinXOR = (int*) 0x8358b0;
inline int * Player::sessionMaxCoins = (int*) 0x8358ac;
inline Array<int> * * Player::AltHeadWidths = (Array<int>* *) 0x833ee4;
inline Array<int> * * Player::AltHeadHeights = (Array<int>* *) 0x833ee8;
inline bool * Player::goldenLuteTowards = (bool*) 0x835896;
inline String * * Player::lastDeadlyDamageSource = (String* *) 0x833eec;
inline int * Player::numDiamonds = (int*) 0x835970;
inline int * Player::playerTempCount = (int*) 0x83588c;
inline Sprite * * Player::hudCoins = (Sprite* *) 0x835888;
inline Sprite * * Player::hudDiamonds = (Sprite* *) 0x835884;
inline bool * Player::heartsLoaded = (bool*) 0x835863;
inline Sprite * * Player::heart = (Sprite* *) 0x835880;
inline Sprite * * Player::heartEmpty = (Sprite* *) 0x83587c;
inline Sprite * * Player::heartHalf = (Sprite* *) 0x835878;
inline int * Player::lobbySaleItemMinCost = (int*) 0x835868;
inline bool * Player::debugHudForceShowDiamonds = (bool*) 0x835860;
inline bool * Player::debugHudForceNoAlignSpells = (bool*) 0x83584b;
inline bool * Player::debugHudForceFixedSpellSlots = (bool*) 0x83584a;

inline int (*Player::ptr::_GetCoins)() = (int (*)()) 0x0;
inline void (*Player::ptr::_SetCoinXOR)() = (void (*)()) 0x0;
inline void (*Player::ptr::SetCoins)(int tmpNum, bool allowAchievement) = (void (*)(int tmpNum, bool allowAchievement)) 0x4fec30;
inline String * (*Player::ptr::GetCharacterName)(int charNum, int tagType) = (String * (*)(int charNum, int tagType)) 0x4fee10;
inline void (*Player::ptr::LoadImages)(Player * self) = (void (*)(Player * self)) 0x5005a0;
inline void (*Player::ptr::_EmptyAllSlots)() = (void (*)()) 0x0;
inline bool (*Player::ptr::IsLordCrownActive)(Player * self) = (bool (*)(Player * self)) 0x502540;
inline String * (*Player::ptr::_GetItemInSlot)(Player * self, String * arg1) = (String * (*)(Player * self, String * arg1)) 0x0;
inline bool (*Player::ptr::_HasItemOfType)(Player * self, String * arg1) = (bool (*)(Player * self, String * arg1)) 0x0;
inline bool (*Player::ptr::IsShrunk)(Player * self, int xVal, int yVal) = (bool (*)(Player * self, int xVal, int yVal)) 0x505070;
inline bool (*Player::ptr::IsShieldActive)(Player * self) = (bool (*)(Player * self)) 0x507d00;
inline bool (*Player::ptr::Perished)(Player * self) = (bool (*)(Player * self)) 0x403c60;
inline bool (*Player::ptr::_DoesAnyPlayerHaveItemOfType)(String * arg1) = (bool (*)(String * arg1)) 0x0;
inline void (*Player::ptr::ActuallyPlayVO)(String * voSound, Player * player) = (void (*)(String * voSound, Player * player)) 0x506130;
inline void (*Player::ptr::PlayVO)(Player * self, String * voSound) = (void (*)(Player * self, String * voSound)) 0x507320;
inline bool (*Player::ptr::SubtractItemOfType)(Player * self, String * i) = (bool (*)(Player * self, String * i)) 0x507080;
inline bool (*Player::ptr::SubtractKey)(Player * self) = (bool (*)(Player * self)) 0x509ce0;
inline void (*Player::ptr::PlayVOPlayer1)(String * voSound) = (void (*)(String * voSound)) 0x506e60;
inline int (*Player::ptr::GetGreedMultiplier)() = (int (*)()) 0x505160;
inline int (*Player::ptr::GetArmorAmount)(Player * self) = (int (*)(Player * self)) 0x502ba0;
inline float (*Player::ptr::GetLightSourceMin)(Player * self) = (float (*)(Player * self)) 0x502e60;
inline float (*Player::ptr::GetLightSourceMax)(Player * self) = (float (*)(Player * self)) 0x503010;
inline void (*Player::ptr::ProcessTheResultsOfLosingItem)(Player * self, String * i) = (void (*)(Player * self, String * i)) 0x503720;
inline int (*Player::ptr::GetBonusDamage)(Player * self, int baseDamage) = (int (*)(Player * self, int baseDamage)) 0x505660;
inline void (*Player::ptr::CancelTween)(Player * self) = (void (*)(Player * self)) 0x509830;
inline void (*Player::ptr::WarpTo)(Player * self, int newX, int newY) = (void (*)(Player * self, int newX, int newY)) 0x509920;
inline bool (*Player::ptr::IsWeaponlessCharacter)(Player * self) = (bool (*)(Player * self)) 0x506f90;
inline void (*Player::ptr::_Heal)(Player * self, int arg1, bool arg2, bool arg3) = (void (*)(Player * self, int arg1, bool arg2, bool arg3)) 0x0;
inline void (*Player::ptr::GotKill)(Player * self) = (void (*)(Player * self)) 0x507970;
inline void (*Player::ptr::OffsetCoins)(int tmpNum) = (void (*)(int tmpNum)) 0x507300;
inline void (*Player::ptr::PerformTween)(Player * self, int xVal, int yVal, int oldX, int oldY, int tweenType, int shadowTweenType, bool bufferTween) = (void (*)(Player * self, int xVal, int yVal, int oldX, int oldY, int tweenType, int shadowTweenType, bool bufferTween)) 0x507f20;
inline void (*Player::ptr::DoHitEffects)(Player * self, int dir, Entity * hitter, int tempDam) = (void (*)(Player * self, int dir, Entity * hitter, int tempDam)) 0x508000;
inline void (*Player::ptr::TurnAllItemsToGlass)(Player * self) = (void (*)(Player * self)) 0x5086c0;
inline void (*Player::ptr::TurnAllItemsToObsidian)(Player * self) = (void (*)(Player * self)) 0x508e10;
inline void (*Player::ptr::VocalizeAttack)(Player * self) = (void (*)(Player * self)) 0x50a210;
inline void (*Player::ptr::KnockSelfBack)(Player * self, int xVal, int yVal) = (void (*)(Player * self, int xVal, int yVal)) 0x5157a0;
inline bool (*Player::ptr::AttackDirection)(Player * self, int dir, bool isThrow) = (bool (*)(Player * self, int dir, bool isThrow)) 0x50b6b0;
inline int (*Player::ptr::GetShovelDamageHelper)(Player * self) = (int (*)(Player * self)) 0x50c150;
inline int (*Player::ptr::GetShovelDamage)(Player * self, bool fromMinersCap) = (int (*)(Player * self, bool fromMinersCap)) 0x50c2f0;
inline bool (*Player::ptr::IsNecroDancer1Alive)(Player * self) = (bool (*)(Player * self)) 0x5118a0;
inline void (*Player::ptr::ImmediatelyMoveTo)(Player * self, int xVal, int yVal, bool fromKeyboard, bool fromClampedEnemy, bool fromBounceTrap, bool fromCourage, bool overrideStairs) = (void (*)(Player * self, int xVal, int yVal, bool fromKeyboard, bool fromClampedEnemy, bool fromBounceTrap, bool fromCourage, bool overrideStairs)) 0x5121c0;
inline bool (*Player::ptr::IsSlotCursed)(Player * self, String * sl) = (bool (*)(Player * self, String * sl)) 0x506fc0;
inline void (*Player::ptr::BreakGlassShovel)(Player * self) = (void (*)(Player * self)) 0x509e10;
inline void (*Player::ptr::CheckVowOfPoverty)(Player * self) = (void (*)(Player * self)) 0x50c8d0;
inline void (*Player::ptr::AddCoins)(int tmpNum) = (void (*)(int tmpNum)) 0x50c990;
inline void (*Player::ptr::DoEnchantWeapon)(Player * self) = (void (*)(Player * self)) 0x50cde0;
inline bool (*Player::ptr::HasShovel)(Player * self) = (bool (*)(Player * self)) 0x50d0f0;
inline void (*Player::ptr::DoNeed)(Player * self) = (void (*)(Player * self)) 0x50d3a0;
inline void (*Player::ptr::DoCrownTeleport)(Player * self) = (void (*)(Player * self)) 0x5158d0;
inline void (*Player::ptr::BreakGlassStuff)(Player * self) = (void (*)(Player * self)) 0x515a80;
inline void (*Player::ptr::_SaveData)() = (void (*)()) 0x0;
inline void (*Player::ptr::ChooseNewPlayer1)() = (void (*)()) 0x516620;
inline bool (*Player::ptr::AllPlayersPerished)() = (bool (*)()) 0x516680;
inline void (*Player::ptr::DropItem)(Player * self, String * i, int xVal, int yVal) = (void (*)(Player * self, String * i, int xVal, int yVal)) 0x5166d0;
inline void (*Player::ptr::AddGeneralMetrics)(Player * self, bool sendIt) = (void (*)(Player * self, bool sendIt)) 0x516880;
inline bool (*Player::ptr::Hit)(Player * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Player * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x516c70;
inline int (*Player::ptr::GetSlotNum)(String * sl) = (int (*)(String * sl)) 0x5193f0;
inline void (*Player::ptr::PutItemInSlot)(Player * self, String * sl, String * i, bool ignoreFlyTo) = (void (*)(Player * self, String * sl, String * i, bool ignoreFlyTo)) 0x519960;
inline bool (*Player::ptr::IsAnythingInSlot)(Player * self, String * sl) = (bool (*)(Player * self, String * sl)) 0x519a50;
inline bool (*Player::ptr::HaveSecondActionSlot)(Player * self) = (bool (*)(Player * self)) 0x519bc0;
inline bool (*Player::ptr::_AddItemOfTypePreProcess)(Player * self, String * arg1, bool arg2) = (bool (*)(Player * self, String * arg1, bool arg2)) 0x0;
inline void (*Player::ptr::GetNewWeapon)(Player * self, String * w) = (void (*)(Player * self, String * w)) 0x50f7e0;
inline void (*Player::ptr::AddItemOfType)(Player * self, String * item, Item * itemObj, bool ignoreFlyTo, bool isInitialEquip) = (void (*)(Player * self, String * item, Item * itemObj, bool ignoreFlyTo, bool isInitialEquip)) 0x51d7b0;
inline void (*Player::ptr::SetSlotCursed)(Player * self, String * sl, bool b) = (void (*)(Player * self, String * sl, bool b)) 0x520630;
inline void (*Player::ptr::GiveInitialEquipment)(Player * self, bool resetHealth) = (void (*)(Player * self, bool resetHealth)) 0x5206b0;
inline void (*Player::ptr::SetCharacter)(Player * self, int charNum) = (void (*)(Player * self, int charNum)) 0x521100;
inline Player * (*Player::ptr::New)(Player * self, int id, int characterID_) = (Player * (*)(Player * self, int id, int characterID_)) 0x521140;
inline Player * (*Player::ptr::_new2)() = (Player * (*)()) 0x0;
inline void (*Player::ptr::SetTotallyBlank)(Player * self) = (void (*)(Player * self)) 0x523da0;
inline void (*Player::ptr::StopFalling)(Player * self) = (void (*)(Player * self)) 0x523ee0;
inline void (*Player::ptr::ResetStateAfterLevel)(Player * self) = (void (*)(Player * self)) 0x523f30;
inline bool (*Player::ptr::_DoesAnyPlayerHaveShovel)() = (bool (*)()) 0x0;
inline bool (*Player::ptr::DoesPlayer1HaveItemOfType)(String * i) = (bool (*)(String * i)) 0x5240d0;
inline int (*Player::ptr::GetTorchLevel)(Player * self) = (int (*)(Player * self)) 0x524180;
inline int (*Player::ptr::CalcMinVisibility)(Player * self) = (int (*)(Player * self)) 0x5243e0;
inline int (*Player::ptr::GetMinVisibility)(Player * self) = (int (*)(Player * self)) 0x524540;
inline bool (*Player::ptr::_CheckCoinXOR)() = (bool (*)()) 0x0;
inline void (*Player::ptr::ProcessMoveQueue)(Player * self) = (void (*)(Player * self)) 0x524590;
inline int (*Player::ptr::GetMoveLastBeat)(Player * self) = (int (*)(Player * self)) 0x524980;
inline Point * (*Player::ptr::GetPositionLastBeat)(Player * self) = (Point * (*)(Player * self)) 0x524aa0;
inline bool (*Player::ptr::_arandomname)() = (bool (*)()) 0x0;
inline void (*Player::ptr::Update)(Player * self) = (void (*)(Player * self)) 0x524cf0;
inline void (*Player::ptr::UpdateAll)() = (void (*)()) 0x529120;
inline void (*Player::ptr::_CoinCheatTest)() = (void (*)()) 0x0;
inline bool (*Player::ptr::ConsumeItemSlot)(Player * self, String * sl) = (bool (*)(Player * self, String * sl)) 0x529190;
inline bool (*Player::ptr::UseBomb)(Player * self) = (bool (*)(Player * self)) 0x52b040;
inline bool (*Player::ptr::SwapWeapons)(Player * self) = (bool (*)(Player * self)) 0x52b1a0;
inline bool (*Player::ptr::_ConsumeItemSlotOffbeat)(Player * self, String * arg1) = (bool (*)(Player * self, String * arg1)) 0x0;
inline bool (*Player::ptr::_UseBombOffbeat)() = (bool (*)()) 0x0;
inline bool (*Player::ptr::_SwapWeaponsOffbeat)() = (bool (*)()) 0x0;
inline void (*Player::ptr::MoveTo)(Player * self, int xVal, int yVal) = (void (*)(Player * self, int xVal, int yVal)) 0x52aaa0;
inline bool (*Player::ptr::AttemptOffbeatMove)(Player * self, int xVal, int yVal) = (bool (*)(Player * self, int xVal, int yVal)) 0x52b9d0;
inline bool (*Player::ptr::PlayersHaveMovedThisBeat)() = (bool (*)()) 0x52bcc0;
inline bool (*Player::ptr::AnyPlayerInSpecialRoom)() = (bool (*)()) 0x52c1b0;
inline void (*Player::ptr::HandleIceAndCoals)(Player * self) = (void (*)(Player * self)) 0x52c1f0;
inline String * (*Player::ptr::GetSlotFromNum)(int num) = (String * (*)(int num)) 0x52c9d0;
inline Point * (*Player::ptr::ProcessSlotOffsets)(Player * self, int tmpSlotNum, int tmpX, int tmpY) = (Point * (*)(Player * self, int tmpSlotNum, int tmpX, int tmpY)) 0x52cbd0;
inline Point * (*Player::ptr::ProcessSlotOffsets2)(Player * self, String * tmpSlot, int tmpX, int tmpY) = (Point * (*)(Player * self, String * tmpSlot, int tmpX, int tmpY)) 0x52cd80;
inline String * (*Player::ptr::GetKillsUntilHealingString)(Player * self) = (String * (*)(Player * self)) 0x52ce10;
inline bool (*Player::ptr::_DrawingDiamondHUD)() = (bool (*)()) 0x0;
inline void (*Player::ptr::RenderHUD)(Player * self, int position, bool small) = (void (*)(Player * self, int position, bool small)) 0x52d9d0;
inline String * (*Player::ptr::GetTransplantDisplayTime)() = (String * (*)()) 0x52d900;
inline void (*Player::ptr::Fall)(Player * self, bool keepMultiplier) = (void (*)(Player * self, bool keepMultiplier)) 0x532b00;
inline bool (*Player::ptr::_IsEffectFlickeringOff)() = (bool (*)()) 0x0;
inline bool (*Player::ptr::IsLordCrownActiveFlicker)(Player * self) = (bool (*)(Player * self)) 0x532ce0;
inline bool (*Player::ptr::IsShieldActiveFlicker)(Player * self) = (bool (*)(Player * self)) 0x532f20;
inline void (*Player::ptr::Render)(Player * self) = (void (*)(Player * self)) 0x533170;
inline bool (*Player::ptr::IsVisible)(Player * self) = (bool (*)(Player * self)) 0x524170;
inline int (*Player::ptr::GetDamage)(Player * self) = (int (*)(Player * self)) 0x531f40;
inline void (*Player::ptr::mark)(Player * self) = (void (*)(Player * self)) 0x5344f0;
inline void (*Player::ptr::CSTR_Player)(Player * self) = (void (*)(Player * self)) 0x4fdc40;
inline void (*Player::ptr::ClearAllFamiliars)(Player * self, bool includeLamb) = (void (*)(Player * self, bool includeLamb)) 0x4feba0;
inline void (*Player::ptr::Die)(Player * self) = (void (*)(Player * self)) 0x4fec10;
inline int (*Player::ptr::NumEnabledCharacters)() = (int (*)()) 0x4ff3c0;
inline Sprite * (*Player::ptr::MakeBodyImage)(int characterID, String * idSuffix, int altSkin) = (Sprite * (*)(int characterID, String * idSuffix, int altSkin)) 0x4ff3d0;
inline Sprite * (*Player::ptr::MakeHeadImage)(int characterID, String * idSuffix, int altSkin) = (Sprite * (*)(int characterID, String * idSuffix, int altSkin)) 0x4ffcf0;
inline String * (*Player::ptr::GetItemInSlot)(Player * self, String * sl, bool overrideBatForm) = (String * (*)(Player * self, String * sl, bool overrideBatForm)) 0x500a40;
inline bool (*Player::ptr::HasItemOfType)(Player * self, String * i, bool overrideBatForm) = (bool (*)(Player * self, String * i, bool overrideBatForm)) 0x500cc0;
inline void (*Player::ptr::UpdateBonusHeart)(Player * self) = (void (*)(Player * self)) 0x5013d0;
inline void (*Player::ptr::EmptyAllSlots)(Player * self, bool includeLamb) = (void (*)(Player * self, bool includeLamb)) 0x501520;
inline bool (*Player::ptr::IsBloodDamage)(String * damageSource) = (bool (*)(String * damageSource)) 0x5017d0;
inline bool (*Player::ptr::IsIntentionalDamage)(String * damageSource) = (bool (*)(String * damageSource)) 0x501af0;
inline bool (*Player::ptr::IsInternalDamage)(String * damageSource) = (bool (*)(String * damageSource)) 0x501e20;
inline bool (*Player::ptr::IsUnpreventableDamage)(String * damageSource) = (bool (*)(String * damageSource)) 0x5020c0;
inline bool (*Player::ptr::TestCourage)(Player * self, int beat) = (bool (*)(Player * self, int beat)) 0x5021f0;
inline Weapon * (*Player::ptr::GetWeapon)(Player * self, bool overrideBatForm) = (Weapon * (*)(Player * self, bool overrideBatForm)) 0x5023c0;
inline int (*Player::ptr::GetElectricStrength)(Player * self) = (int (*)(Player * self)) 0x5023f0;
inline bool (*Player::ptr::FeetIgnoreWaterAndTar)(Player * self) = (bool (*)(Player * self)) 0x502760;
inline bool (*Player::ptr::DoesAnyPlayerHaveItemOfType)(String * it, bool overrideBatForm) = (bool (*)(String * it, bool overrideBatForm)) 0x5031c0;
inline void (*Player::ptr::CheckConductorWire)(Player * self) = (void (*)(Player * self)) 0x503290;
inline void (*Player::ptr::CheckFloating)(Player * self) = (void (*)(Player * self)) 0x503620;
inline void (*Player::ptr::BreakSpikedEars)(Player * self) = (void (*)(Player * self)) 0x5041f0;
inline void (*Player::ptr::ClearFamiliarAt)(Player * self, int offsetX, int offsetY) = (void (*)(Player * self, int offsetX, int offsetY)) 0x504490;
inline void (*Player::ptr::LambDeath)(Player * self) = (void (*)(Player * self)) 0x504520;
inline void (*Player::ptr::AddFamiliarAt)(Player * self, int offsetX, int offsetY, String * item) = (void (*)(Player * self, int offsetX, int offsetY, String * item)) 0x504750;
inline bool (*Player::ptr::FeetIgnoreOoze)(Player * self) = (bool (*)(Player * self)) 0x504c30;
inline void (*Player::ptr::MaybeOpenZap)(Player * self, int playerX, int playerY, int electricStrength) = (void (*)(Player * self, int playerX, int playerY, int electricStrength)) 0x5050d0;
inline void (*Player::ptr::SetSlotMystery)(Player * self, String * sl, bool b) = (void (*)(Player * self, String * sl, bool b)) 0x505210;
inline void (*Player::ptr::EmptySlot)(Player * self, String * sl) = (void (*)(Player * self, String * sl)) 0x5052c0;
inline int (*Player::ptr::FrostItemCount)(Player * self) = (int (*)(Player * self)) 0x5054b0;
inline bool (*Player::ptr::AnyPlayerTemporaryMapSight)() = (bool (*)()) 0x5060d0;
inline bool (*Player::ptr::HasCouponLike)(Player * self) = (bool (*)(Player * self)) 0x506ee0;
inline void (*Player::ptr::Heal)(Player * self, int amt, bool fromFood, bool playVO, bool fromMagicFood) = (void (*)(Player * self, int amt, bool fromFood, bool playVO, bool fromMagicFood)) 0x5073a0;
inline void (*Player::ptr::GotBlood)(Player * self, int amount) = (void (*)(Player * self, int amount)) 0x507930;
inline void (*Player::ptr::TurnSlotInto)(Player * self, String * slot, String * newItem) = (void (*)(Player * self, String * slot, String * newItem)) 0x508460;
inline void (*Player::ptr::WarpFamiliars)(Player * self) = (void (*)(Player * self)) 0x5098a0;
inline void (*Player::ptr::ProcessDropMystery)(Player * self, Item * item, String * slot) = (void (*)(Player * self, Item * item, String * slot)) 0x509c20;
inline void (*Player::ptr::AfterHitHook)(Player * self, Enemy * nme, int hitX, int hitY, int dir) = (void (*)(Player * self, Enemy * nme, int hitX, int hitY, int dir)) 0x50a1d0;
inline void (*Player::ptr::CommitZap)(Player * self) = (void (*)(Player * self)) 0x50a1f0;
inline bool (*Player::ptr::IsHeavy)(Player * self) = (bool (*)(Player * self)) 0x50b0a0;
inline bool (*Player::ptr::IsPhasing)(Player * self) = (bool (*)(Player * self)) 0x50b4e0;
inline void (*Player::ptr::PainFlyaway)(Player * self) = (void (*)(Player * self)) 0x50b5b0;
inline bool (*Player::ptr::DoBigDig)(Player * self, int x0, int y0, int shovelDamage, int dir, bool allowNoShovel) = (bool (*)(Player * self, int x0, int y0, int shovelDamage, int dir, bool allowNoShovel)) 0x50c6f0;
inline void (*Player::ptr::GrantIBeats)(Player * self, int num) = (void (*)(Player * self, int num)) 0x50c9c0;
inline Bomb * (*Player::ptr::DropBomb)(Player * self) = (Bomb * (*)(Player * self)) 0x50cbf0;
inline void (*Player::ptr::ProcessTheResultsOfEquippingItem)(Player * self, String * item) = (void (*)(Player * self, String * item)) 0x50ff10;
inline void (*Player::ptr::ExitBatForm)(Player * self) = (void (*)(Player * self)) 0x510f10;
inline void (*Player::ptr::EnterBatForm)(Player * self) = (void (*)(Player * self)) 0x5113e0;
inline void (*Player::ptr::ToggleBatForm)(Player * self) = (void (*)(Player * self)) 0x511880;
inline bool (*Player::ptr::PermitMoveFail)(Player * self) = (bool (*)(Player * self)) 0x5118c0;
inline void (*Player::ptr::SetDugRecently)(Player * self) = (void (*)(Player * self)) 0x511900;
inline bool (*Player::ptr::FeetIgnoreIce)(Player * self) = (bool (*)(Player * self)) 0x511910;
inline bool (*Player::ptr::FeetIgnoreCoals)(Player * self) = (bool (*)(Player * self)) 0x511c00;
inline void (*Player::ptr::MoveFamiliars)(Player * self, int deltaX, int deltaY) = (void (*)(Player * self, int deltaX, int deltaY)) 0x511ef0;
inline void (*Player::ptr::MoveSoulFamiliars)(Player * self, int moveDir) = (void (*)(Player * self, int moveDir)) 0x511f80;
inline bool (*Player::ptr::ConsumeOne)(Player * self, String * item) = (bool (*)(Player * self, String * item)) 0x5157d0;
inline bool (*Player::ptr::AddItemOfTypePreProcess)(Player * self, String * i, Item * itemObj) = (bool (*)(Player * self, String * i, Item * itemObj)) 0x519d00;
inline bool (*Player::ptr::IsBomblessCharacter)(Player * self) = (bool (*)(Player * self)) 0x524010;
inline bool (*Player::ptr::AnyPlayerPeace)() = (bool (*)()) 0x524020;
inline bool (*Player::ptr::IsSolo)() = (bool (*)()) 0x524ba0;
inline bool (*Player::ptr::IsLastLevel)() = (bool (*)()) 0x524bd0;
inline void (*Player::ptr::CheckAllModeCompletion)() = (void (*)()) 0x524c50;
inline int (*Player::ptr::MomentumDir)(Player * self) = (int (*)(Player * self)) 0x529170;
inline bool (*Player::ptr::DoComboLeftRight)(Player * self) = (bool (*)(Player * self)) 0x52a990;
inline bool (*Player::ptr::DoComboLeftUp)(Player * self) = (bool (*)(Player * self)) 0x52af30;
inline bool (*Player::ptr::DoComboRightUp)(Player * self) = (bool (*)(Player * self)) 0x52b000;
inline bool (*Player::ptr::DoComboRightDown)(Player * self) = (bool (*)(Player * self)) 0x52b020;
inline bool (*Player::ptr::DoComboLeftDown)(Player * self) = (bool (*)(Player * self)) 0x52b180;
inline bool (*Player::ptr::DoComboUpDown)(Player * self) = (bool (*)(Player * self)) 0x52b980;
inline void (*Player::ptr::AfterEnemyMovement)(Player * self) = (void (*)(Player * self)) 0x52c650;
inline int (*Player::ptr::GetItemQuantity)(Player * self, String * item) = (int (*)(Player * self, String * item)) 0x52d090;
inline TextSprite * (*Player::ptr::GetHUDQuantityText)(Player * self, String * slot) = (TextSprite * (*)(Player * self, String * slot)) 0x52d170;
inline void (*Player::ptr::RenderHUDSlotQuantity)(Player * self, TextSprite * textSprite, int num, int slotX, int slotY, int slotSize, float scale, float alpha) = (void (*)(Player * self, TextSprite * textSprite, int num, int slotX, int slotY, int slotSize, float scale, float alpha)) 0x52d280;
inline void (*Player::ptr::RenderHUDSlotQuantity2)(Player * self, TextSprite * textSprite, String * item, int slotX, int slotY, int slotSize, float scale, float alpha) = (void (*)(Player * self, TextSprite * textSprite, String * item, int slotX, int slotY, int slotSize, float scale, float alpha)) 0x52d410;
inline void (*Player::ptr::RenderHUDSlotHotkey)(Player * self, int inputMove, int slotX, int slotY, int slotSize, float scale, bool overrideBatForm) = (void (*)(Player * self, int inputMove, int slotX, int slotY, int slotSize, float scale, bool overrideBatForm)) 0x52d510;
inline void (*Player::ptr::ScatterItems)(Player * self) = (void (*)(Player * self)) 0x531f90;
#endif

#ifdef __linux__
inline int * Player::numCoins = (int*) 0x856a8b4;
inline int * Player::coinXOR = (int*) 0x856a8b0;
inline int * Player::sessionMaxCoins = (int*) 0x856a8ac;
inline Array<int> * * Player::AltHeadWidths = (Array<int>* *) 0x856a8a8;
inline Array<int> * * Player::AltHeadHeights = (Array<int>* *) 0x856a8a4;
inline bool * Player::goldenLuteTowards = (bool*) 0x856a8a0;
inline String * * Player::lastDeadlyDamageSource = (String* *) 0x856a89c;
inline int * Player::numDiamonds = (int*) 0x856a898;
inline int * Player::playerTempCount = (int*) 0x856a894;
inline Sprite * * Player::hudCoins = (Sprite* *) 0x856a890;
inline Sprite * * Player::hudDiamonds = (Sprite* *) 0x856a88c;
inline bool * Player::heartsLoaded = (bool*) 0x856a888;
inline Sprite * * Player::heart = (Sprite* *) 0x856a884;
inline Sprite * * Player::heartEmpty = (Sprite* *) 0x856a880;
inline Sprite * * Player::heartHalf = (Sprite* *) 0x856a87c;
inline int * Player::lobbySaleItemMinCost = (int*) 0x856a86c;
inline bool * Player::debugHudForceShowDiamonds = (bool*) 0x856a86a;
inline bool * Player::debugHudForceNoAlignSpells = (bool*) 0x856a869;
inline bool * Player::debugHudForceFixedSpellSlots = (bool*) 0x856a868;

inline int (*Player::ptr::_GetCoins)() = (int (*)()) 0x813fe50;
inline void (*Player::ptr::_SetCoinXOR)() = (void (*)()) 0x813fe60;
inline void (*Player::ptr::SetCoins)(int tmpNum, bool allowAchievement) = (void (*)(int tmpNum, bool allowAchievement)) 0x8276e50;
inline String * (*Player::ptr::GetCharacterName)(int charNum, int tagType) = (String * (*)(int charNum, int tagType)) 0x813fe70;
inline void (*Player::ptr::LoadImages)(Player * self) = (void (*)(Player * self)) 0x8127420;
inline void (*Player::ptr::_EmptyAllSlots)() = (void (*)()) 0x0;
inline bool (*Player::ptr::IsLordCrownActive)(Player * self) = (bool (*)(Player * self)) 0x8261ea0;
inline String * (*Player::ptr::_GetItemInSlot)(Player * self, String * arg1) = (String * (*)(Player * self, String * arg1)) 0x0;
inline bool (*Player::ptr::_HasItemOfType)(Player * self, String * arg1) = (bool (*)(Player * self, String * arg1)) 0x0;
inline bool (*Player::ptr::IsShrunk)(Player * self, int xVal, int yVal) = (bool (*)(Player * self, int xVal, int yVal)) 0x8130470;
inline bool (*Player::ptr::IsShieldActive)(Player * self) = (bool (*)(Player * self)) 0x8261e00;
inline bool (*Player::ptr::Perished)(Player * self) = (bool (*)(Player * self)) 0x806e470;
inline bool (*Player::ptr::_DoesAnyPlayerHaveItemOfType)(String * arg1) = (bool (*)(String * arg1)) 0x0;
inline void (*Player::ptr::ActuallyPlayVO)(String * voSound, Player * player) = (void (*)(String * voSound, Player * player)) 0x8325a50;
inline void (*Player::ptr::PlayVO)(Player * self, String * voSound) = (void (*)(Player * self, String * voSound)) 0x8327ac0;
inline bool (*Player::ptr::SubtractItemOfType)(Player * self, String * i) = (bool (*)(Player * self, String * i)) 0x815d7a0;
inline bool (*Player::ptr::SubtractKey)(Player * self) = (bool (*)(Player * self)) 0x80c8a60;
inline void (*Player::ptr::PlayVOPlayer1)(String * voSound) = (void (*)(String * voSound)) 0x8327a70;
inline int (*Player::ptr::GetGreedMultiplier)() = (int (*)()) 0x81434c0;
inline int (*Player::ptr::GetArmorAmount)(Player * self) = (int (*)(Player * self)) 0x80d64d0;
inline float (*Player::ptr::GetLightSourceMin)(Player * self) = (float (*)(Player * self)) 0x80d5f50;
inline float (*Player::ptr::GetLightSourceMax)(Player * self) = (float (*)(Player * self)) 0x80d60b0;
inline void (*Player::ptr::ProcessTheResultsOfLosingItem)(Player * self, String * i) = (void (*)(Player * self, String * i)) 0x8220b60;
inline int (*Player::ptr::GetBonusDamage)(Player * self, int baseDamage) = (int (*)(Player * self, int baseDamage)) 0x825f370;
inline void (*Player::ptr::CancelTween)(Player * self) = (void (*)(Player * self)) 0x808ecb0;
inline void (*Player::ptr::WarpTo)(Player * self, int newX, int newY) = (void (*)(Player * self, int newX, int newY)) 0x825f060;
inline bool (*Player::ptr::IsWeaponlessCharacter)(Player * self) = (bool (*)(Player * self)) 0x807e250;
inline void (*Player::ptr::_Heal)(Player * self, int arg1, bool arg2, bool arg3) = (void (*)(Player * self, int arg1, bool arg2, bool arg3)) 0x0;
inline void (*Player::ptr::GotKill)(Player * self) = (void (*)(Player * self)) 0x825f1b0;
inline void (*Player::ptr::OffsetCoins)(int tmpNum) = (void (*)(int tmpNum)) 0x8277310;
inline void (*Player::ptr::PerformTween)(Player * self, int xVal, int yVal, int oldX, int oldY, int tweenType, int shadowTweenType, bool bufferTween) = (void (*)(Player * self, int xVal, int yVal, int oldX, int oldY, int tweenType, int shadowTweenType, bool bufferTween)) 0x806e500;
inline void (*Player::ptr::DoHitEffects)(Player * self, int dir, Entity * hitter, int tempDam) = (void (*)(Player * self, int dir, Entity * hitter, int tempDam)) 0x8325460;
inline void (*Player::ptr::TurnAllItemsToGlass)(Player * self) = (void (*)(Player * self)) 0x81633c0;
inline void (*Player::ptr::TurnAllItemsToObsidian)(Player * self) = (void (*)(Player * self)) 0x8163a00;
inline void (*Player::ptr::VocalizeAttack)(Player * self) = (void (*)(Player * self)) 0x826b260;
inline void (*Player::ptr::KnockSelfBack)(Player * self, int xVal, int yVal) = (void (*)(Player * self, int xVal, int yVal)) 0x806e870;
inline bool (*Player::ptr::AttackDirection)(Player * self, int dir, bool isThrow) = (bool (*)(Player * self, int dir, bool isThrow)) 0x83cffc0;
inline int (*Player::ptr::GetShovelDamageHelper)(Player * self) = (int (*)(Player * self)) 0x80d6210;
inline int (*Player::ptr::GetShovelDamage)(Player * self, bool fromMinersCap) = (int (*)(Player * self, bool fromMinersCap)) 0x80cc010;
inline bool (*Player::ptr::IsNecroDancer1Alive)(Player * self) = (bool (*)(Player * self)) 0x806e790;
inline void (*Player::ptr::ImmediatelyMoveTo)(Player * self, int xVal, int yVal, bool fromKeyboard, bool fromClampedEnemy, bool fromBounceTrap, bool fromCourage, bool overrideStairs) = (void (*)(Player * self, int xVal, int yVal, bool fromKeyboard, bool fromClampedEnemy, bool fromBounceTrap, bool fromCourage, bool overrideStairs)) 0x83caf40;
inline bool (*Player::ptr::IsSlotCursed)(Player * self, String * sl) = (bool (*)(Player * self, String * sl)) 0x80c4740;
inline void (*Player::ptr::BreakGlassShovel)(Player * self) = (void (*)(Player * self)) 0x8325150;
inline void (*Player::ptr::CheckVowOfPoverty)(Player * self) = (void (*)(Player * self)) 0x80c8910;
inline void (*Player::ptr::AddCoins)(int tmpNum) = (void (*)(int tmpNum)) 0x8277280;
inline void (*Player::ptr::DoEnchantWeapon)(Player * self) = (void (*)(Player * self)) 0x82ba500;
inline bool (*Player::ptr::HasShovel)(Player * self) = (bool (*)(Player * self)) 0x80cbe60;
inline void (*Player::ptr::DoNeed)(Player * self) = (void (*)(Player * self)) 0x83c6890;
inline void (*Player::ptr::DoCrownTeleport)(Player * self) = (void (*)(Player * self)) 0x83d6350;
inline void (*Player::ptr::BreakGlassStuff)(Player * self) = (void (*)(Player * self)) 0x8324620;
inline void (*Player::ptr::_SaveData)() = (void (*)()) 0x8143590;
inline void (*Player::ptr::ChooseNewPlayer1)() = (void (*)()) 0x81435c0;
inline bool (*Player::ptr::AllPlayersPerished)() = (bool (*)()) 0x8143630;
inline void (*Player::ptr::DropItem)(Player * self, String * i, int xVal, int yVal) = (void (*)(Player * self, String * i, int xVal, int yVal)) 0x82a0d60;
inline void (*Player::ptr::AddGeneralMetrics)(Player * self, bool sendIt) = (void (*)(Player * self, bool sendIt)) 0x80ffb20;
inline bool (*Player::ptr::Hit)(Player * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType) = (bool (*)(Player * self, String * damageSource, int damage, int dir, Entity * hitter, bool hitAtLastTile, int hitType)) 0x83c2150;
inline int (*Player::ptr::GetSlotNum)(String * sl) = (int (*)(String * sl)) 0x8143680;
inline void (*Player::ptr::PutItemInSlot)(Player * self, String * sl, String * i, bool ignoreFlyTo) = (void (*)(Player * self, String * sl, String * i, bool ignoreFlyTo)) 0x80d77e0;
inline bool (*Player::ptr::IsAnythingInSlot)(Player * self, String * sl) = (bool (*)(Player * self, String * sl)) 0x80cb9e0;
inline bool (*Player::ptr::HaveSecondActionSlot)(Player * self) = (bool (*)(Player * self)) 0x80c8830;
inline bool (*Player::ptr::_AddItemOfTypePreProcess)(Player * self, String * arg1, bool arg2) = (bool (*)(Player * self, String * arg1, bool arg2)) 0x0;
inline void (*Player::ptr::GetNewWeapon)(Player * self, String * w) = (void (*)(Player * self, String * w)) 0x8221300;
inline void (*Player::ptr::AddItemOfType)(Player * self, String * item, Item * itemObj, bool ignoreFlyTo, bool isInitialEquip) = (void (*)(Player * self, String * item, Item * itemObj, bool ignoreFlyTo, bool isInitialEquip)) 0x82bcca0;
inline void (*Player::ptr::SetSlotCursed)(Player * self, String * sl, bool b) = (void (*)(Player * self, String * sl, bool b)) 0x80c4490;
inline void (*Player::ptr::GiveInitialEquipment)(Player * self, bool resetHealth) = (void (*)(Player * self, bool resetHealth)) 0x82ab380;
inline void (*Player::ptr::SetCharacter)(Player * self, int charNum) = (void (*)(Player * self, int charNum)) 0x806e8d0;
inline Player * (*Player::ptr::New)(Player * self, int id, int characterID_) = (Player * (*)(Player * self, int id, int characterID_)) 0x81aa660;
inline Player * (*Player::ptr::_new2)() = (Player * (*)()) 0x8143a50;
inline void (*Player::ptr::SetTotallyBlank)(Player * self) = (void (*)(Player * self)) 0x8222400;
inline void (*Player::ptr::StopFalling)(Player * self) = (void (*)(Player * self)) 0x807e360;
inline void (*Player::ptr::ResetStateAfterLevel)(Player * self) = (void (*)(Player * self)) 0x815a020;
inline bool (*Player::ptr::_DoesAnyPlayerHaveShovel)() = (bool (*)()) 0x0;
inline bool (*Player::ptr::DoesPlayer1HaveItemOfType)(String * i) = (bool (*)(String * i)) 0x8143b10;
inline int (*Player::ptr::GetTorchLevel)(Player * self) = (int (*)(Player * self)) 0x80d6350;
inline int (*Player::ptr::CalcMinVisibility)(Player * self) = (int (*)(Player * self)) 0x80c8710;
inline int (*Player::ptr::GetMinVisibility)(Player * self) = (int (*)(Player * self)) 0x807e3e0;
inline bool (*Player::ptr::_CheckCoinXOR)() = (bool (*)()) 0x8143bc0;
inline void (*Player::ptr::ProcessMoveQueue)(Player * self) = (void (*)(Player * self)) 0x82698a0;
inline int (*Player::ptr::GetMoveLastBeat)(Player * self) = (int (*)(Player * self)) 0x8256dd0;
inline Point * (*Player::ptr::GetPositionLastBeat)(Player * self) = (Point * (*)(Player * self)) 0x80b5800;
inline bool (*Player::ptr::_arandomname)() = (bool (*)()) 0x8143d10;
inline void (*Player::ptr::Update)(Player * self) = (void (*)(Player * self)) 0x8388e20;
inline void (*Player::ptr::UpdateAll)() = (void (*)()) 0x8143d30;
inline void (*Player::ptr::_CoinCheatTest)() = (void (*)()) 0x8143d90;
inline bool (*Player::ptr::ConsumeItemSlot)(Player * self, String * sl) = (bool (*)(Player * self, String * sl)) 0x83c8c80;
inline bool (*Player::ptr::UseBomb)(Player * self) = (bool (*)(Player * self)) 0x8263f80;
inline bool (*Player::ptr::SwapWeapons)(Player * self) = (bool (*)(Player * self)) 0x8323da0;
inline bool (*Player::ptr::_ConsumeItemSlotOffbeat)(Player * self, String * arg1) = (bool (*)(Player * self, String * arg1)) 0x0;
inline bool (*Player::ptr::_UseBombOffbeat)() = (bool (*)()) 0x0;
inline bool (*Player::ptr::_SwapWeaponsOffbeat)() = (bool (*)()) 0x0;
inline void (*Player::ptr::MoveTo)(Player * self, int xVal, int yVal) = (void (*)(Player * self, int xVal, int yVal)) 0x825ee00;
inline bool (*Player::ptr::AttemptOffbeatMove)(Player * self, int xVal, int yVal) = (bool (*)(Player * self, int xVal, int yVal)) 0x815b470;
inline bool (*Player::ptr::PlayersHaveMovedThisBeat)() = (bool (*)()) 0x8263ef0;
inline bool (*Player::ptr::AnyPlayerInSpecialRoom)() = (bool (*)()) 0x8143da0;
inline void (*Player::ptr::HandleIceAndCoals)(Player * self) = (void (*)(Player * self)) 0x826a3d0;
inline String * (*Player::ptr::GetSlotFromNum)(int num) = (String * (*)(int num)) 0x8143df0;
inline Point * (*Player::ptr::ProcessSlotOffsets)(Player * self, int tmpSlotNum, int tmpX, int tmpY) = (Point * (*)(Player * self, int tmpSlotNum, int tmpX, int tmpY)) 0x80b6150;
inline Point * (*Player::ptr::ProcessSlotOffsets2)(Player * self, String * tmpSlot, int tmpX, int tmpY) = (Point * (*)(Player * self, String * tmpSlot, int tmpX, int tmpY)) 0x80d75c0;
inline String * (*Player::ptr::GetKillsUntilHealingString)(Player * self) = (String * (*)(Player * self)) 0x815b180;
inline bool (*Player::ptr::_DrawingDiamondHUD)() = (bool (*)()) 0x8144060;
inline void (*Player::ptr::RenderHUD)(Player * self, int position, bool small) = (void (*)(Player * self, int position, bool small)) 0x8258620;
inline String * (*Player::ptr::GetTransplantDisplayTime)() = (String * (*)()) 0x8144080;
inline void (*Player::ptr::Fall)(Player * self, bool keepMultiplier) = (void (*)(Player * self, bool keepMultiplier)) 0x8390d60;
inline bool (*Player::ptr::_IsEffectFlickeringOff)() = (bool (*)()) 0x0;
inline bool (*Player::ptr::IsLordCrownActiveFlicker)(Player * self) = (bool (*)(Player * self)) 0x8262000;
inline bool (*Player::ptr::IsShieldActiveFlicker)(Player * self) = (bool (*)(Player * self)) 0x8261f30;
inline void (*Player::ptr::Render)(Player * self) = (void (*)(Player * self)) 0x8268420;
inline bool (*Player::ptr::IsVisible)(Player * self) = (bool (*)(Player * self)) 0x806e940;
inline int (*Player::ptr::GetDamage)(Player * self) = (int (*)(Player * self)) 0x806e970;
inline void (*Player::ptr::mark)(Player * self) = (void (*)(Player * self)) 0x80abb00;
inline void (*Player::ptr::CSTR_Player)(Player * self) = (void (*)(Player * self)) 0x8181b10;
inline void (*Player::ptr::ClearAllFamiliars)(Player * self, bool includeLamb) = (void (*)(Player * self, bool includeLamb)) 0x807e1d0;
inline void (*Player::ptr::Die)(Player * self) = (void (*)(Player * self)) 0x80934c0;
inline int (*Player::ptr::NumEnabledCharacters)() = (int (*)()) 0x8141520;
inline Sprite * (*Player::ptr::MakeBodyImage)(int characterID, String * idSuffix, int altSkin) = (Sprite * (*)(int characterID, String * idSuffix, int altSkin)) 0x8141530;
inline Sprite * (*Player::ptr::MakeHeadImage)(int characterID, String * idSuffix, int altSkin) = (Sprite * (*)(int characterID, String * idSuffix, int altSkin)) 0x81421a0;
inline String * (*Player::ptr::GetItemInSlot)(Player * self, String * sl, bool overrideBatForm) = (String * (*)(Player * self, String * sl, bool overrideBatForm)) 0x80cca70;
inline bool (*Player::ptr::HasItemOfType)(Player * self, String * i, bool overrideBatForm) = (bool (*)(Player * self, String * i, bool overrideBatForm)) 0x815d140;
inline void (*Player::ptr::UpdateBonusHeart)(Player * self) = (void (*)(Player * self)) 0x80c8c80;
inline void (*Player::ptr::EmptyAllSlots)(Player * self, bool includeLamb) = (void (*)(Player * self, bool includeLamb)) 0x8220980;
inline bool (*Player::ptr::IsBloodDamage)(String * damageSource) = (bool (*)(String * damageSource)) 0x8142e60;
inline bool (*Player::ptr::IsIntentionalDamage)(String * damageSource) = (bool (*)(String * damageSource)) 0x8142f70;
inline bool (*Player::ptr::IsInternalDamage)(String * damageSource) = (bool (*)(String * damageSource)) 0x8143180;
inline bool (*Player::ptr::IsUnpreventableDamage)(String * damageSource) = (bool (*)(String * damageSource)) 0x8143370;
inline bool (*Player::ptr::TestCourage)(Player * self, int beat) = (bool (*)(Player * self, int beat)) 0x8390bb0;
inline Weapon * (*Player::ptr::GetWeapon)(Player * self, bool overrideBatForm) = (Weapon * (*)(Player * self, bool overrideBatForm)) 0x806e440;
inline int (*Player::ptr::GetElectricStrength)(Player * self) = (int (*)(Player * self)) 0x8130500;
inline bool (*Player::ptr::FeetIgnoreWaterAndTar)(Player * self) = (bool (*)(Player * self)) 0x80cc7f0;
inline bool (*Player::ptr::DoesAnyPlayerHaveItemOfType)(String * it, bool overrideBatForm) = (bool (*)(String * it, bool overrideBatForm)) 0x81433f0;
inline void (*Player::ptr::CheckConductorWire)(Player * self) = (void (*)(Player * self)) 0x8130630;
inline void (*Player::ptr::CheckFloating)(Player * self) = (void (*)(Player * self)) 0x80c8bc0;
inline void (*Player::ptr::BreakSpikedEars)(Player * self) = (void (*)(Player * self)) 0x8326690;
inline void (*Player::ptr::ClearFamiliarAt)(Player * self, int offsetX, int offsetY) = (void (*)(Player * self, int offsetX, int offsetY)) 0x806e480;
inline void (*Player::ptr::LambDeath)(Player * self) = (void (*)(Player * self)) 0x825fc20;
inline void (*Player::ptr::AddFamiliarAt)(Player * self, int offsetX, int offsetY, String * item) = (void (*)(Player * self, int offsetX, int offsetY, String * item)) 0x822db30;
inline bool (*Player::ptr::FeetIgnoreOoze)(Player * self) = (bool (*)(Player * self)) 0x80cc570;
inline void (*Player::ptr::MaybeOpenZap)(Player * self, int playerX, int playerY, int electricStrength) = (void (*)(Player * self, int playerX, int playerY, int electricStrength)) 0x80c1ca0;
inline void (*Player::ptr::SetSlotMystery)(Player * self, String * sl, bool b) = (void (*)(Player * self, String * sl, bool b)) 0x80c4810;
inline void (*Player::ptr::EmptySlot)(Player * self, String * sl) = (void (*)(Player * self, String * sl)) 0x80cdca0;
inline int (*Player::ptr::FrostItemCount)(Player * self) = (int (*)(Player * self)) 0x815b000;
inline bool (*Player::ptr::AnyPlayerTemporaryMapSight)() = (bool (*)()) 0x8143520;
inline bool (*Player::ptr::HasCouponLike)(Player * self) = (bool (*)(Player * self)) 0x80c8b40;
inline void (*Player::ptr::Heal)(Player * self, int amt, bool fromFood, bool playVO, bool fromMagicFood) = (void (*)(Player * self, int amt, bool fromFood, bool playVO, bool fromMagicFood)) 0x8261540;
inline void (*Player::ptr::GotBlood)(Player * self, int amount) = (void (*)(Player * self, int amount)) 0x807e280;
inline void (*Player::ptr::TurnSlotInto)(Player * self, String * slot, String * newItem) = (void (*)(Player * self, String * slot, String * newItem)) 0x80cda50;
inline void (*Player::ptr::WarpFamiliars)(Player * self) = (void (*)(Player * self)) 0x806e680;
inline void (*Player::ptr::ProcessDropMystery)(Player * self, Item * item, String * slot) = (void (*)(Player * self, Item * item, String * slot)) 0x80c4670;
inline void (*Player::ptr::AfterHitHook)(Player * self, Enemy * nme, int hitX, int hitY, int dir) = (void (*)(Player * self, Enemy * nme, int hitX, int hitY, int dir)) 0x806e710;
inline void (*Player::ptr::CommitZap)(Player * self) = (void (*)(Player * self)) 0x806e760;
inline bool (*Player::ptr::IsHeavy)(Player * self) = (bool (*)(Player * self)) 0x80cc2f0;
inline bool (*Player::ptr::IsPhasing)(Player * self) = (bool (*)(Player * self)) 0x80c89d0;
inline void (*Player::ptr::PainFlyaway)(Player * self) = (void (*)(Player * self)) 0x81489c0;
inline bool (*Player::ptr::DoBigDig)(Player * self, int x0, int y0, int shovelDamage, int dir, bool allowNoShovel) = (bool (*)(Player * self, int x0, int y0, int shovelDamage, int dir, bool allowNoShovel)) 0x812d150;
inline void (*Player::ptr::GrantIBeats)(Player * self, int num) = (void (*)(Player * self, int num)) 0x825efc0;
inline Bomb * (*Player::ptr::DropBomb)(Player * self) = (Bomb * (*)(Player * self)) 0x83ac210;
inline void (*Player::ptr::ProcessTheResultsOfEquippingItem)(Player * self, String * item) = (void (*)(Player * self, String * item)) 0x81af0e0;
inline void (*Player::ptr::ExitBatForm)(Player * self) = (void (*)(Player * self)) 0x8221c50;
inline void (*Player::ptr::EnterBatForm)(Player * self) = (void (*)(Player * self)) 0x8222020;
inline void (*Player::ptr::ToggleBatForm)(Player * self) = (void (*)(Player * self)) 0x807e2e0;
inline bool (*Player::ptr::PermitMoveFail)(Player * self) = (bool (*)(Player * self)) 0x807e310;
inline void (*Player::ptr::SetDugRecently)(Player * self) = (void (*)(Player * self)) 0x806e7b0;
inline bool (*Player::ptr::FeetIgnoreIce)(Player * self) = (bool (*)(Player * self)) 0x80cbcb0;
inline bool (*Player::ptr::FeetIgnoreCoals)(Player * self) = (bool (*)(Player * self)) 0x80cbb00;
inline void (*Player::ptr::MoveFamiliars)(Player * self, int deltaX, int deltaY) = (void (*)(Player * self, int deltaX, int deltaY)) 0x806e7c0;
inline void (*Player::ptr::MoveSoulFamiliars)(Player * self, int moveDir) = (void (*)(Player * self, int moveDir)) 0x81597e0;
inline bool (*Player::ptr::ConsumeOne)(Player * self, String * item) = (bool (*)(Player * self, String * item)) 0x80c4500;
inline bool (*Player::ptr::AddItemOfTypePreProcess)(Player * self, String * i, Item * itemObj) = (bool (*)(Player * self, String * i, Item * itemObj)) 0x829b2c0;
inline bool (*Player::ptr::IsBomblessCharacter)(Player * self) = (bool (*)(Player * self)) 0x806e930;
inline bool (*Player::ptr::AnyPlayerPeace)() = (bool (*)()) 0x8143ab0;
inline bool (*Player::ptr::IsSolo)() = (bool (*)()) 0x8143be0;
inline bool (*Player::ptr::IsLastLevel)() = (bool (*)()) 0x8143c10;
inline void (*Player::ptr::CheckAllModeCompletion)() = (void (*)()) 0x8277fc0;
inline int (*Player::ptr::MomentumDir)(Player * self) = (int (*)(Player * self)) 0x806e950;
inline bool (*Player::ptr::DoComboLeftRight)(Player * self) = (bool (*)(Player * self)) 0x80c8640;
inline bool (*Player::ptr::DoComboLeftUp)(Player * self) = (bool (*)(Player * self)) 0x80c8590;
inline bool (*Player::ptr::DoComboRightUp)(Player * self) = (bool (*)(Player * self)) 0x83c86d0;
inline bool (*Player::ptr::DoComboRightDown)(Player * self) = (bool (*)(Player * self)) 0x83c87b0;
inline bool (*Player::ptr::DoComboLeftDown)(Player * self) = (bool (*)(Player * self)) 0x807e450;
inline bool (*Player::ptr::DoComboUpDown)(Player * self) = (bool (*)(Player * self)) 0x807e4a0;
inline void (*Player::ptr::AfterEnemyMovement)(Player * self) = (void (*)(Player * self)) 0x8323690;
inline int (*Player::ptr::GetItemQuantity)(Player * self, String * item) = (int (*)(Player * self, String * item)) 0x80c4380;
inline TextSprite * (*Player::ptr::GetHUDQuantityText)(Player * self, String * slot) = (TextSprite * (*)(Player * self, String * slot)) 0x81474f0;
inline void (*Player::ptr::RenderHUDSlotQuantity)(Player * self, TextSprite * textSprite, int num, int slotX, int slotY, int slotSize, float scale, float alpha) = (void (*)(Player * self, TextSprite * textSprite, int num, int slotX, int slotY, int slotSize, float scale, float alpha)) 0x80c99d0;
inline void (*Player::ptr::RenderHUDSlotQuantity2)(Player * self, TextSprite * textSprite, String * item, int slotX, int slotY, int slotSize, float scale, float alpha) = (void (*)(Player * self, TextSprite * textSprite, String * item, int slotX, int slotY, int slotSize, float scale, float alpha)) 0x80c4220;
inline void (*Player::ptr::RenderHUDSlotHotkey)(Player * self, int inputMove, int slotX, int slotY, int slotSize, float scale, bool overrideBatForm) = (void (*)(Player * self, int inputMove, int slotX, int slotY, int slotSize, float scale, bool overrideBatForm)) 0x8156160;
inline void (*Player::ptr::ScatterItems)(Player * self) = (void (*)(Player * self)) 0x8132850;
#endif
#endif
