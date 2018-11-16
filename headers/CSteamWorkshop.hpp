// Generated automatically. Do not edit!
#ifndef _CSteamWorkshop_
#define _CSteamWorkshop_
class CCallResultCSteamWorkshopRemoteStorageEnumerateUserPublishedFilesResultt;
class CCallResultCSteamWorkshopRemoteStorageEnumerateUserSubscribedFilesResultt;
class CCallResultCSteamWorkshopRemoteStorageFileShareResultt;
class CCallResultCSteamWorkshopRemoteStoragePublishFileResultt;
class CCallResultCSteamWorkshopRemoteStorageUpdatePublishedFileResultt;
class RemoteStorageDownloadUGCResultt;
class RemoteStorageEnumerateUserPublishedFilesResultt;
class RemoteStorageEnumerateUserSubscribedFilesResultt;
class RemoteStorageFileShareResultt;
class RemoteStorageGetPublishedFileDetailsResultt;
class RemoteStoragePublishFileResultt;
class RemoteStorageUpdatePublishedFileResultt;
class String;
#include <vector>

class CSteamWorkshop {
public:
    String * appFolder;
    std::vector<char *,std::allocator<char *> > * dungeonNames;
    std::vector<unsigned __int64,std::allocator<unsigned __int64> > * dungeonIDs;
    std::vector<char *,std::allocator<char *> > * modNames;
    std::vector<unsigned __int64,std::allocator<unsigned __int64> > * modIDs;
    CCallResult<CSteamWorkshop,RemoteStorageFileShareResult_t> * callResultShareDungeon;
    CCallResult<CSteamWorkshop,RemoteStoragePublishFileResult_t> * callResultPublishDungeon;
    CCallResult<CSteamWorkshop,RemoteStorageUpdatePublishedFileResult_t> * callResultUpdateDungeon;
    CCallResult<CSteamWorkshop,RemoteStorageEnumerateUserSubscribedFilesResult_t> * callResultEnumDungeons;
    CCallResult<CSteamWorkshop,RemoteStorageEnumerateUserPublishedFilesResult_t> * callResultEnumDungeons2;
    std::vector<CCallResult<CSteamWorkshop,RemoteStorageGetPublishedFileDetailsResult_t> *,std::allocator<CCallResult<CSteamWorkshop,RemoteStorageGetPublishedFileDetailsResult_t> *> > * callResultsGetDungeonDetails;
    std::vector<CCallResult<CSteamWorkshop,RemoteStorageDownloadUGCResult_t> *,std::allocator<CCallResult<CSteamWorkshop,RemoteStorageDownloadUGCResult_t> *> > * callResultsDownloadDungeon;

    // Wrappers
    CSteamWorkshop() {
        ptr::CSTR_CSteamWorkshop(this);
    }

    inline void PublishMod(String * modNameStr, int fileSize, int thumbFileSize) { ptr::PublishMod(this, modNameStr, fileSize, thumbFileSize); }
    inline void OnShareMod(RemoteStorageFileShareResult_t * pResult, bool bIOFailure) { ptr::OnShareMod(this, pResult, bIOFailure); }
    inline void OnPublishMod(RemoteStoragePublishFileResult_t * pResult, bool bIOFailure) { ptr::OnPublishMod(this, pResult, bIOFailure); }
    inline void OnUpdateMod(RemoteStorageUpdatePublishedFileResult_t * pResult, bool bIOFailure) { ptr::OnUpdateMod(this, pResult, bIOFailure); }
    inline void OnDownloadMod(RemoteStorageDownloadUGCResult_t * pResult, bool bIOFailure) { ptr::OnDownloadMod(this, pResult, bIOFailure); }
    inline void PublishDungeon(String * dungeonNameStr, String * dungeonStr, int thumbFileSize) { ptr::PublishDungeon(this, dungeonNameStr, dungeonStr, thumbFileSize); }
    inline void OnShareDungeon(RemoteStorageFileShareResult_t * pResult, bool bIOFailure) { ptr::OnShareDungeon(this, pResult, bIOFailure); }
    inline void OnPublishDungeon(RemoteStoragePublishFileResult_t * pResult, bool bIOFailure) { ptr::OnPublishDungeon(this, pResult, bIOFailure); }
    inline void OnUpdateDungeon(RemoteStorageUpdatePublishedFileResult_t * pResult, bool bIOFailure) { ptr::OnUpdateDungeon(this, pResult, bIOFailure); }
    inline void OnEnumDungeons(RemoteStorageEnumerateUserSubscribedFilesResult_t * pResult, bool bIOFailure) { ptr::OnEnumDungeons(this, pResult, bIOFailure); }
    inline void OnEnumDungeons2(RemoteStorageEnumerateUserPublishedFilesResult_t * pResult, bool bIOFailure) { ptr::OnEnumDungeons2(this, pResult, bIOFailure); }
    inline void OnGetDungeonDetails(RemoteStorageGetPublishedFileDetailsResult_t * pResult, bool bIOFailure) { ptr::OnGetDungeonDetails(this, pResult, bIOFailure); }
    inline void OnGetDungeonDetails2(RemoteStorageGetPublishedFileDetailsResult_t * pResult, bool bIOFailure) { ptr::OnGetDungeonDetails2(this, pResult, bIOFailure); }
    inline void OnDownloadDungeon(RemoteStorageDownloadUGCResult_t * pResult, bool bIOFailure) { ptr::OnDownloadDungeon(this, pResult, bIOFailure); }

    class ptr {
    public:
        static void (*PublishMod)(CSteamWorkshop * self, String * modNameStr, int fileSize, int thumbFileSize);
        static void (*OnShareMod)(CSteamWorkshop * self, RemoteStorageFileShareResult_t * pResult, bool bIOFailure);
        static void (*OnPublishMod)(CSteamWorkshop * self, RemoteStoragePublishFileResult_t * pResult, bool bIOFailure);
        static void (*OnUpdateMod)(CSteamWorkshop * self, RemoteStorageUpdatePublishedFileResult_t * pResult, bool bIOFailure);
        static void (*OnDownloadMod)(CSteamWorkshop * self, RemoteStorageDownloadUGCResult_t * pResult, bool bIOFailure);
        static void (*PublishDungeon)(CSteamWorkshop * self, String * dungeonNameStr, String * dungeonStr, int thumbFileSize);
        static void (*OnShareDungeon)(CSteamWorkshop * self, RemoteStorageFileShareResult_t * pResult, bool bIOFailure);
        static void (*OnPublishDungeon)(CSteamWorkshop * self, RemoteStoragePublishFileResult_t * pResult, bool bIOFailure);
        static void (*OnUpdateDungeon)(CSteamWorkshop * self, RemoteStorageUpdatePublishedFileResult_t * pResult, bool bIOFailure);
        static void (*OnEnumDungeons)(CSteamWorkshop * self, RemoteStorageEnumerateUserSubscribedFilesResult_t * pResult, bool bIOFailure);
        static void (*OnEnumDungeons2)(CSteamWorkshop * self, RemoteStorageEnumerateUserPublishedFilesResult_t * pResult, bool bIOFailure);
        static void (*OnGetDungeonDetails)(CSteamWorkshop * self, RemoteStorageGetPublishedFileDetailsResult_t * pResult, bool bIOFailure);
        static void (*OnGetDungeonDetails2)(CSteamWorkshop * self, RemoteStorageGetPublishedFileDetailsResult_t * pResult, bool bIOFailure);
        static void (*OnDownloadDungeon)(CSteamWorkshop * self, RemoteStorageDownloadUGCResult_t * pResult, bool bIOFailure);
        static void (*CSTR_CSteamWorkshop)(CSteamWorkshop * self);
    };
};

#ifdef _WIN32

inline void (*CSteamWorkshop::ptr::PublishMod)(CSteamWorkshop * self, String * modNameStr, int fileSize, int thumbFileSize) = (void (*)(CSteamWorkshop * self, String * modNameStr, int fileSize, int thumbFileSize)) 0x413670;
inline void (*CSteamWorkshop::ptr::OnShareMod)(CSteamWorkshop * self, RemoteStorageFileShareResult_t * pResult, bool bIOFailure) = (void (*)(CSteamWorkshop * self, RemoteStorageFileShareResult_t * pResult, bool bIOFailure)) 0x413c70;
inline void (*CSteamWorkshop::ptr::OnPublishMod)(CSteamWorkshop * self, RemoteStoragePublishFileResult_t * pResult, bool bIOFailure) = (void (*)(CSteamWorkshop * self, RemoteStoragePublishFileResult_t * pResult, bool bIOFailure)) 0x4140b0;
inline void (*CSteamWorkshop::ptr::OnUpdateMod)(CSteamWorkshop * self, RemoteStorageUpdatePublishedFileResult_t * pResult, bool bIOFailure) = (void (*)(CSteamWorkshop * self, RemoteStorageUpdatePublishedFileResult_t * pResult, bool bIOFailure)) 0x4141d0;
inline void (*CSteamWorkshop::ptr::OnDownloadMod)(CSteamWorkshop * self, RemoteStorageDownloadUGCResult_t * pResult, bool bIOFailure) = (void (*)(CSteamWorkshop * self, RemoteStorageDownloadUGCResult_t * pResult, bool bIOFailure)) 0x4142b0;
inline void (*CSteamWorkshop::ptr::PublishDungeon)(CSteamWorkshop * self, String * dungeonNameStr, String * dungeonStr, int thumbFileSize) = (void (*)(CSteamWorkshop * self, String * dungeonNameStr, String * dungeonStr, int thumbFileSize)) 0x414770;
inline void (*CSteamWorkshop::ptr::OnShareDungeon)(CSteamWorkshop * self, RemoteStorageFileShareResult_t * pResult, bool bIOFailure) = (void (*)(CSteamWorkshop * self, RemoteStorageFileShareResult_t * pResult, bool bIOFailure)) 0x414c70;
inline void (*CSteamWorkshop::ptr::OnPublishDungeon)(CSteamWorkshop * self, RemoteStoragePublishFileResult_t * pResult, bool bIOFailure) = (void (*)(CSteamWorkshop * self, RemoteStoragePublishFileResult_t * pResult, bool bIOFailure)) 0x415030;
inline void (*CSteamWorkshop::ptr::OnUpdateDungeon)(CSteamWorkshop * self, RemoteStorageUpdatePublishedFileResult_t * pResult, bool bIOFailure) = (void (*)(CSteamWorkshop * self, RemoteStorageUpdatePublishedFileResult_t * pResult, bool bIOFailure)) 0x415150;
inline void (*CSteamWorkshop::ptr::OnEnumDungeons)(CSteamWorkshop * self, RemoteStorageEnumerateUserSubscribedFilesResult_t * pResult, bool bIOFailure) = (void (*)(CSteamWorkshop * self, RemoteStorageEnumerateUserSubscribedFilesResult_t * pResult, bool bIOFailure)) 0x415230;
inline void (*CSteamWorkshop::ptr::OnEnumDungeons2)(CSteamWorkshop * self, RemoteStorageEnumerateUserPublishedFilesResult_t * pResult, bool bIOFailure) = (void (*)(CSteamWorkshop * self, RemoteStorageEnumerateUserPublishedFilesResult_t * pResult, bool bIOFailure)) 0x415440;
inline void (*CSteamWorkshop::ptr::OnGetDungeonDetails)(CSteamWorkshop * self, RemoteStorageGetPublishedFileDetailsResult_t * pResult, bool bIOFailure) = (void (*)(CSteamWorkshop * self, RemoteStorageGetPublishedFileDetailsResult_t * pResult, bool bIOFailure)) 0x415650;
inline void (*CSteamWorkshop::ptr::OnGetDungeonDetails2)(CSteamWorkshop * self, RemoteStorageGetPublishedFileDetailsResult_t * pResult, bool bIOFailure) = (void (*)(CSteamWorkshop * self, RemoteStorageGetPublishedFileDetailsResult_t * pResult, bool bIOFailure)) 0x415b10;
inline void (*CSteamWorkshop::ptr::OnDownloadDungeon)(CSteamWorkshop * self, RemoteStorageDownloadUGCResult_t * pResult, bool bIOFailure) = (void (*)(CSteamWorkshop * self, RemoteStorageDownloadUGCResult_t * pResult, bool bIOFailure)) 0x415c90;
inline void (*CSteamWorkshop::ptr::CSTR_CSteamWorkshop)(CSteamWorkshop * self) = (void (*)(CSteamWorkshop * self)) 0x413310;
#endif

#ifdef __linux__

inline void (*CSteamWorkshop::ptr::PublishMod)(CSteamWorkshop * self, String * modNameStr, int fileSize, int thumbFileSize) = (void (*)(CSteamWorkshop * self, String * modNameStr, int fileSize, int thumbFileSize)) 0x8273ed0;
inline void (*CSteamWorkshop::ptr::OnShareMod)(CSteamWorkshop * self, RemoteStorageFileShareResult_t * pResult, bool bIOFailure) = (void (*)(CSteamWorkshop * self, RemoteStorageFileShareResult_t * pResult, bool bIOFailure)) 0x8273630;
inline void (*CSteamWorkshop::ptr::OnPublishMod)(CSteamWorkshop * self, RemoteStoragePublishFileResult_t * pResult, bool bIOFailure) = (void (*)(CSteamWorkshop * self, RemoteStoragePublishFileResult_t * pResult, bool bIOFailure)) 0x83e49c0;
inline void (*CSteamWorkshop::ptr::OnUpdateMod)(CSteamWorkshop * self, RemoteStorageUpdatePublishedFileResult_t * pResult, bool bIOFailure) = (void (*)(CSteamWorkshop * self, RemoteStorageUpdatePublishedFileResult_t * pResult, bool bIOFailure)) 0x8273300;
inline void (*CSteamWorkshop::ptr::OnDownloadMod)(CSteamWorkshop * self, RemoteStorageDownloadUGCResult_t * pResult, bool bIOFailure) = (void (*)(CSteamWorkshop * self, RemoteStorageDownloadUGCResult_t * pResult, bool bIOFailure)) 0x8272250;
inline void (*CSteamWorkshop::ptr::PublishDungeon)(CSteamWorkshop * self, String * dungeonNameStr, String * dungeonStr, int thumbFileSize) = (void (*)(CSteamWorkshop * self, String * dungeonNameStr, String * dungeonStr, int thumbFileSize)) 0x8271490;
inline void (*CSteamWorkshop::ptr::OnShareDungeon)(CSteamWorkshop * self, RemoteStorageFileShareResult_t * pResult, bool bIOFailure) = (void (*)(CSteamWorkshop * self, RemoteStorageFileShareResult_t * pResult, bool bIOFailure)) 0x8270bf0;
inline void (*CSteamWorkshop::ptr::OnPublishDungeon)(CSteamWorkshop * self, RemoteStoragePublishFileResult_t * pResult, bool bIOFailure) = (void (*)(CSteamWorkshop * self, RemoteStoragePublishFileResult_t * pResult, bool bIOFailure)) 0x83e4340;
inline void (*CSteamWorkshop::ptr::OnUpdateDungeon)(CSteamWorkshop * self, RemoteStorageUpdatePublishedFileResult_t * pResult, bool bIOFailure) = (void (*)(CSteamWorkshop * self, RemoteStorageUpdatePublishedFileResult_t * pResult, bool bIOFailure)) 0x82708c0;
inline void (*CSteamWorkshop::ptr::OnEnumDungeons)(CSteamWorkshop * self, RemoteStorageEnumerateUserSubscribedFilesResult_t * pResult, bool bIOFailure) = (void (*)(CSteamWorkshop * self, RemoteStorageEnumerateUserSubscribedFilesResult_t * pResult, bool bIOFailure)) 0x83e4d90;
inline void (*CSteamWorkshop::ptr::OnEnumDungeons2)(CSteamWorkshop * self, RemoteStorageEnumerateUserPublishedFilesResult_t * pResult, bool bIOFailure) = (void (*)(CSteamWorkshop * self, RemoteStorageEnumerateUserPublishedFilesResult_t * pResult, bool bIOFailure)) 0x83e5240;
inline void (*CSteamWorkshop::ptr::OnGetDungeonDetails)(CSteamWorkshop * self, RemoteStorageGetPublishedFileDetailsResult_t * pResult, bool bIOFailure) = (void (*)(CSteamWorkshop * self, RemoteStorageGetPublishedFileDetailsResult_t * pResult, bool bIOFailure)) 0x83e56f0;
inline void (*CSteamWorkshop::ptr::OnGetDungeonDetails2)(CSteamWorkshop * self, RemoteStorageGetPublishedFileDetailsResult_t * pResult, bool bIOFailure) = (void (*)(CSteamWorkshop * self, RemoteStorageGetPublishedFileDetailsResult_t * pResult, bool bIOFailure)) 0x83e4710;
inline void (*CSteamWorkshop::ptr::OnDownloadDungeon)(CSteamWorkshop * self, RemoteStorageDownloadUGCResult_t * pResult, bool bIOFailure) = (void (*)(CSteamWorkshop * self, RemoteStorageDownloadUGCResult_t * pResult, bool bIOFailure)) 0x83012b0;
inline void (*CSteamWorkshop::ptr::CSTR_CSteamWorkshop)(CSteamWorkshop * self) = (void (*)(CSteamWorkshop * self)) 0x82750a0;
#endif
#endif
