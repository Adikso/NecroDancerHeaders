// Generated automatically. Do not edit!
#ifndef _CSteamLeaderboards_
#define _CSteamLeaderboards_
class CCallResultCSteamLeaderboardsLeaderboardFindResultt;
class CCallResultCSteamLeaderboardsLeaderboardScoreUploadedt;
class CCallResultCSteamLeaderboardsLeaderboardScoresDownloadedt;
class CCallResultCSteamLeaderboardsNumberOfCurrentPlayerst;
class LeaderboardFindResultt;
class LeaderboardScoreUploadedt;
class LeaderboardScoresDownloadedt;
class NumberOfCurrentPlayerst;
class RemoteStorageDownloadUGCResultt;
class RemoteStorageFileShareResultt;
class SteamLeaderboardEntryData;
class String;
#include <map>
#include <vector>

class CSteamLeaderboards {
public:
    unsigned long long CurrentLeaderboard_down;
    unsigned long long CurrentLeaderboard_up;
    bool friendFlag;
    std::map<int,SteamLeaderboardEntryData,std::less<int>,std::allocator<std::pair<int const ,SteamLeaderboardEntryData> > > * leaderboardEntries;
    SteamLeaderboardEntryData * playersScore;
    bool havePlayersScore;
    bool haveAllPlayersScores;
    CCallResult<CSteamLeaderboards,LeaderboardFindResult_t> * callResultFindLeaderboard;
    CCallResult<CSteamLeaderboards,LeaderboardScoreUploaded_t> * callResultUploadScore;
    std::vector<CCallResult<CSteamLeaderboards,RemoteStorageFileShareResult_t> *,std::allocator<CCallResult<CSteamLeaderboards,RemoteStorageFileShareResult_t> *> > * SteamCallResultRemoteStorageFileShares;
    CCallResult<CSteamLeaderboards,LeaderboardScoresDownloaded_t> * callResultDownloadScore;
    std::vector<CCallResult<CSteamLeaderboards,RemoteStorageDownloadUGCResult_t> *,std::allocator<CCallResult<CSteamLeaderboards,RemoteStorageDownloadUGCResult_t> *> > * SteamCallResultRemoteStorageDownloadUGCResults;
    CCallResult<CSteamLeaderboards,LeaderboardScoresDownloaded_t> * callResultDownloadPlayersScore;
    CCallResult<CSteamLeaderboards,NumberOfCurrentPlayers_t> * callResultCurrentPlayers;

    // Wrappers
    CSteamLeaderboards() {
        ptr::CSTR_CSteamLeaderboards(this);
    }

    inline SteamLeaderboardEntryData * FindLeaderboardEntryWithUGCHandle(unsigned long long hnd) { return ptr::FindLeaderboardEntryWithUGCHandle(this, hnd); }
    inline void CheckIfAllScoresDownloaded() { ptr::CheckIfAllScoresDownloaded(this); }
    inline void FindLeaderboarddown(const char * pchLeaderboardName) { ptr::FindLeaderboarddown(this, pchLeaderboardName); }
    inline void FindLeaderboardup(const char * pchLeaderboardName) { ptr::FindLeaderboardup(this, pchLeaderboardName); }
    inline bool UploadScore(int score, int zoneVal, int levelVal, String * dt) { return ptr::UploadScore(this, score, zoneVal, levelVal, dt); }
    inline bool DownloadScores(int startEntry, int endEntry, bool friends) { return ptr::DownloadScores(this, startEntry, endEntry, friends); }
    inline bool DownloadPlayersScore() { return ptr::DownloadPlayersScore(this); }
    inline void OnFindLeaderboarddown(LeaderboardFindResult_t * pCallback, bool bIOFailure) { ptr::OnFindLeaderboarddown(this, pCallback, bIOFailure); }
    inline void OnFindLeaderboardup(LeaderboardFindResult_t * pCallback, bool bIOFailure) { ptr::OnFindLeaderboardup(this, pCallback, bIOFailure); }
    inline void OnUploadScore(LeaderboardScoreUploaded_t * pCallback, bool bIOFailure) { ptr::OnUploadScore(this, pCallback, bIOFailure); }
    inline void OnUploadLeaderboardUGC(RemoteStorageFileShareResult_t * pResult, bool bIOFailure) { ptr::OnUploadLeaderboardUGC(this, pResult, bIOFailure); }
    inline void OnDownloadScore(LeaderboardScoresDownloaded_t * pCallback, bool bIOFailure) { ptr::OnDownloadScore(this, pCallback, bIOFailure); }
    inline void OnDownloadFriendScore(LeaderboardScoresDownloaded_t * pCallback, bool bIOFailure) { ptr::OnDownloadFriendScore(this, pCallback, bIOFailure); }
    inline void OnRemoteStorageDownloadUGCResult(RemoteStorageDownloadUGCResult_t * pResult, bool bIOFailure) { ptr::OnRemoteStorageDownloadUGCResult(this, pResult, bIOFailure); }
    inline void OnDownloadPlayersScore(LeaderboardScoresDownloaded_t * pCallback, bool bIOFailure) { ptr::OnDownloadPlayersScore(this, pCallback, bIOFailure); }
    inline void OnGetCurrentPlayers(NumberOfCurrentPlayers_t * pResult, bool bIOFailure) { ptr::OnGetCurrentPlayers(this, pResult, bIOFailure); }

    class ptr {
    public:
        static SteamLeaderboardEntryData * (*FindLeaderboardEntryWithUGCHandle)(CSteamLeaderboards * self, unsigned long long hnd);
        static void (*CheckIfAllScoresDownloaded)(CSteamLeaderboards * self);
        static void (*FindLeaderboarddown)(CSteamLeaderboards * self, const char * pchLeaderboardName);
        static void (*FindLeaderboardup)(CSteamLeaderboards * self, const char * pchLeaderboardName);
        static bool (*UploadScore)(CSteamLeaderboards * self, int score, int zoneVal, int levelVal, String * dt);
        static bool (*DownloadScores)(CSteamLeaderboards * self, int startEntry, int endEntry, bool friends);
        static bool (*DownloadPlayersScore)(CSteamLeaderboards * self);
        static void (*OnFindLeaderboarddown)(CSteamLeaderboards * self, LeaderboardFindResult_t * pCallback, bool bIOFailure);
        static void (*OnFindLeaderboardup)(CSteamLeaderboards * self, LeaderboardFindResult_t * pCallback, bool bIOFailure);
        static void (*OnUploadScore)(CSteamLeaderboards * self, LeaderboardScoreUploaded_t * pCallback, bool bIOFailure);
        static void (*OnUploadLeaderboardUGC)(CSteamLeaderboards * self, RemoteStorageFileShareResult_t * pResult, bool bIOFailure);
        static void (*OnDownloadScore)(CSteamLeaderboards * self, LeaderboardScoresDownloaded_t * pCallback, bool bIOFailure);
        static void (*OnDownloadFriendScore)(CSteamLeaderboards * self, LeaderboardScoresDownloaded_t * pCallback, bool bIOFailure);
        static void (*OnRemoteStorageDownloadUGCResult)(CSteamLeaderboards * self, RemoteStorageDownloadUGCResult_t * pResult, bool bIOFailure);
        static void (*OnDownloadPlayersScore)(CSteamLeaderboards * self, LeaderboardScoresDownloaded_t * pCallback, bool bIOFailure);
        static void (*OnGetCurrentPlayers)(CSteamLeaderboards * self, NumberOfCurrentPlayers_t * pResult, bool bIOFailure);
        static void (*CSTR_CSteamLeaderboards)(CSteamLeaderboards * self);
    };
};

#ifdef _WIN32

inline SteamLeaderboardEntryData * (*CSteamLeaderboards::ptr::FindLeaderboardEntryWithUGCHandle)(CSteamLeaderboards * self, unsigned long long hnd) = (SteamLeaderboardEntryData * (*)(CSteamLeaderboards * self, unsigned long long hnd)) 0x412770;
inline void (*CSteamLeaderboards::ptr::CheckIfAllScoresDownloaded)(CSteamLeaderboards * self) = (void (*)(CSteamLeaderboards * self)) 0x411f90;
inline void (*CSteamLeaderboards::ptr::FindLeaderboarddown)(CSteamLeaderboards * self, const char * pchLeaderboardName) = (void (*)(CSteamLeaderboards * self, const char * pchLeaderboardName)) 0x410b50;
inline void (*CSteamLeaderboards::ptr::FindLeaderboardup)(CSteamLeaderboards * self, const char * pchLeaderboardName) = (void (*)(CSteamLeaderboards * self, const char * pchLeaderboardName)) 0x410d60;
inline bool (*CSteamLeaderboards::ptr::UploadScore)(CSteamLeaderboards * self, int score, int zoneVal, int levelVal, String * dt) = (bool (*)(CSteamLeaderboards * self, int score, int zoneVal, int levelVal, String * dt)) 0x410f70;
inline bool (*CSteamLeaderboards::ptr::DownloadScores)(CSteamLeaderboards * self, int startEntry, int endEntry, bool friends) = (bool (*)(CSteamLeaderboards * self, int startEntry, int endEntry, bool friends)) 0x411570;
inline bool (*CSteamLeaderboards::ptr::DownloadPlayersScore)(CSteamLeaderboards * self) = (bool (*)(CSteamLeaderboards * self)) 0x412a90;
inline void (*CSteamLeaderboards::ptr::OnFindLeaderboarddown)(CSteamLeaderboards * self, LeaderboardFindResult_t * pCallback, bool bIOFailure) = (void (*)(CSteamLeaderboards * self, LeaderboardFindResult_t * pCallback, bool bIOFailure)) 0x410c80;
inline void (*CSteamLeaderboards::ptr::OnFindLeaderboardup)(CSteamLeaderboards * self, LeaderboardFindResult_t * pCallback, bool bIOFailure) = (void (*)(CSteamLeaderboards * self, LeaderboardFindResult_t * pCallback, bool bIOFailure)) 0x410e90;
inline void (*CSteamLeaderboards::ptr::OnUploadScore)(CSteamLeaderboards * self, LeaderboardScoreUploaded_t * pCallback, bool bIOFailure) = (void (*)(CSteamLeaderboards * self, LeaderboardScoreUploaded_t * pCallback, bool bIOFailure)) 0x4111c0;
inline void (*CSteamLeaderboards::ptr::OnUploadLeaderboardUGC)(CSteamLeaderboards * self, RemoteStorageFileShareResult_t * pResult, bool bIOFailure) = (void (*)(CSteamLeaderboards * self, RemoteStorageFileShareResult_t * pResult, bool bIOFailure)) 0x411450;
inline void (*CSteamLeaderboards::ptr::OnDownloadScore)(CSteamLeaderboards * self, LeaderboardScoresDownloaded_t * pCallback, bool bIOFailure) = (void (*)(CSteamLeaderboards * self, LeaderboardScoresDownloaded_t * pCallback, bool bIOFailure)) 0x411680;
inline void (*CSteamLeaderboards::ptr::OnDownloadFriendScore)(CSteamLeaderboards * self, LeaderboardScoresDownloaded_t * pCallback, bool bIOFailure) = (void (*)(CSteamLeaderboards * self, LeaderboardScoresDownloaded_t * pCallback, bool bIOFailure)) 0x411b00;
inline void (*CSteamLeaderboards::ptr::OnRemoteStorageDownloadUGCResult)(CSteamLeaderboards * self, RemoteStorageDownloadUGCResult_t * pResult, bool bIOFailure) = (void (*)(CSteamLeaderboards * self, RemoteStorageDownloadUGCResult_t * pResult, bool bIOFailure)) 0x4127f0;
inline void (*CSteamLeaderboards::ptr::OnDownloadPlayersScore)(CSteamLeaderboards * self, LeaderboardScoresDownloaded_t * pCallback, bool bIOFailure) = (void (*)(CSteamLeaderboards * self, LeaderboardScoresDownloaded_t * pCallback, bool bIOFailure)) 0x412b90;
inline void (*CSteamLeaderboards::ptr::OnGetCurrentPlayers)(CSteamLeaderboards * self, NumberOfCurrentPlayers_t * pResult, bool bIOFailure) = (void (*)(CSteamLeaderboards * self, NumberOfCurrentPlayers_t * pResult, bool bIOFailure)) 0x410b20;
inline void (*CSteamLeaderboards::ptr::CSTR_CSteamLeaderboards)(CSteamLeaderboards * self) = (void (*)(CSteamLeaderboards * self)) 0x410570;
#endif

#ifdef __linux__

inline SteamLeaderboardEntryData * (*CSteamLeaderboards::ptr::FindLeaderboardEntryWithUGCHandle)(CSteamLeaderboards * self, unsigned long long hnd) = (SteamLeaderboardEntryData * (*)(CSteamLeaderboards * self, unsigned long long hnd)) 0x80f8eb0;
inline void (*CSteamLeaderboards::ptr::CheckIfAllScoresDownloaded)(CSteamLeaderboards * self) = (void (*)(CSteamLeaderboards * self)) 0x84019c0;
inline void (*CSteamLeaderboards::ptr::FindLeaderboarddown)(CSteamLeaderboards * self, const char * pchLeaderboardName) = (void (*)(CSteamLeaderboards * self, const char * pchLeaderboardName)) 0x8279e80;
inline void (*CSteamLeaderboards::ptr::FindLeaderboardup)(CSteamLeaderboards * self, const char * pchLeaderboardName) = (void (*)(CSteamLeaderboards * self, const char * pchLeaderboardName)) 0x8279720;
inline bool (*CSteamLeaderboards::ptr::UploadScore)(CSteamLeaderboards * self, int score, int zoneVal, int levelVal, String * dt) = (bool (*)(CSteamLeaderboards * self, int score, int zoneVal, int levelVal, String * dt)) 0x8279040;
inline bool (*CSteamLeaderboards::ptr::DownloadScores)(CSteamLeaderboards * self, int startEntry, int endEntry, bool friends) = (bool (*)(CSteamLeaderboards * self, int startEntry, int endEntry, bool friends)) 0x8302690;
inline bool (*CSteamLeaderboards::ptr::DownloadPlayersScore)(CSteamLeaderboards * self) = (bool (*)(CSteamLeaderboards * self)) 0x8278820;
inline void (*CSteamLeaderboards::ptr::OnFindLeaderboarddown)(CSteamLeaderboards * self, LeaderboardFindResult_t * pCallback, bool bIOFailure) = (void (*)(CSteamLeaderboards * self, LeaderboardFindResult_t * pCallback, bool bIOFailure)) 0x8279b60;
inline void (*CSteamLeaderboards::ptr::OnFindLeaderboardup)(CSteamLeaderboards * self, LeaderboardFindResult_t * pCallback, bool bIOFailure) = (void (*)(CSteamLeaderboards * self, LeaderboardFindResult_t * pCallback, bool bIOFailure)) 0x8279400;
inline void (*CSteamLeaderboards::ptr::OnUploadScore)(CSteamLeaderboards * self, LeaderboardScoreUploaded_t * pCallback, bool bIOFailure) = (void (*)(CSteamLeaderboards * self, LeaderboardScoreUploaded_t * pCallback, bool bIOFailure)) 0x83e3ac0;
inline void (*CSteamLeaderboards::ptr::OnUploadLeaderboardUGC)(CSteamLeaderboards * self, RemoteStorageFileShareResult_t * pResult, bool bIOFailure) = (void (*)(CSteamLeaderboards * self, RemoteStorageFileShareResult_t * pResult, bool bIOFailure)) 0x8278b20;
inline void (*CSteamLeaderboards::ptr::OnDownloadScore)(CSteamLeaderboards * self, LeaderboardScoresDownloaded_t * pCallback, bool bIOFailure) = (void (*)(CSteamLeaderboards * self, LeaderboardScoresDownloaded_t * pCallback, bool bIOFailure)) 0x8404f60;
inline void (*CSteamLeaderboards::ptr::OnDownloadFriendScore)(CSteamLeaderboards * self, LeaderboardScoresDownloaded_t * pCallback, bool bIOFailure) = (void (*)(CSteamLeaderboards * self, LeaderboardScoresDownloaded_t * pCallback, bool bIOFailure)) 0x8402970;
inline void (*CSteamLeaderboards::ptr::OnRemoteStorageDownloadUGCResult)(CSteamLeaderboards * self, RemoteStorageDownloadUGCResult_t * pResult, bool bIOFailure) = (void (*)(CSteamLeaderboards * self, RemoteStorageDownloadUGCResult_t * pResult, bool bIOFailure)) 0x8402040;
inline void (*CSteamLeaderboards::ptr::OnDownloadPlayersScore)(CSteamLeaderboards * self, LeaderboardScoresDownloaded_t * pCallback, bool bIOFailure) = (void (*)(CSteamLeaderboards * self, LeaderboardScoresDownloaded_t * pCallback, bool bIOFailure)) 0x82785c0;
inline void (*CSteamLeaderboards::ptr::OnGetCurrentPlayers)(CSteamLeaderboards * self, NumberOfCurrentPlayers_t * pResult, bool bIOFailure) = (void (*)(CSteamLeaderboards * self, NumberOfCurrentPlayers_t * pResult, bool bIOFailure)) 0x807dd90;
inline void (*CSteamLeaderboards::ptr::CSTR_CSteamLeaderboards)(CSteamLeaderboards * self) = (void (*)(CSteamLeaderboards * self)) 0x83decc0;
#endif
#endif
