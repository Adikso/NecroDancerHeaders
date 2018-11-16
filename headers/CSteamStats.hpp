// Generated automatically. Do not edit!
#ifndef _CSteamStats_
#define _CSteamStats_
class CCallbackCSteamStatsUserStatsReceivedt0;
class CCallbackCSteamStatsUserStatsStoredt0;
class Statt;
class UserStatsReceivedt;
class UserStatsStoredt;

class CSteamStats {
public:
    long long iAppID;
    Stat_t * pStats;
    int iNumStats;
    bool bInitialized;
    CCallback<CSteamStats,UserStatsReceived_t,0> * CallbackUserStatsReceived;
    CCallback<CSteamStats,UserStatsStored_t,0> * CallbackUserStatsStored;

    // Wrappers
    CSteamStats(Stat_t * Stats, int NumStats) {
        ptr::CSTR_CSteamStats(this, Stats, NumStats);
    }

    inline bool _RequestStats() { return ptr::_RequestStats(); }
    inline bool StoreStats() { return ptr::StoreStats(this); }
    inline void OnUserStatsReceived(UserStatsReceived_t * pCallback) { ptr::OnUserStatsReceived(this, pCallback); }
    inline void OnUserStatsStored(UserStatsStored_t * pCallback) { ptr::OnUserStatsStored(this, pCallback); }

    class ptr {
    public:
        static bool (*_RequestStats)();
        static bool (*StoreStats)(CSteamStats * self);
        static void (*OnUserStatsReceived)(CSteamStats * self, UserStatsReceived_t * pCallback);
        static void (*OnUserStatsStored)(CSteamStats * self, UserStatsStored_t * pCallback);
        static void (*CSTR_CSteamStats)(CSteamStats * self, Stat_t * Stats, int NumStats);
    };
};

#ifdef _WIN32

inline bool (*CSteamStats::ptr::_RequestStats)() = (bool (*)()) 0x0;
inline bool (*CSteamStats::ptr::StoreStats)(CSteamStats * self) = (bool (*)(CSteamStats * self)) 0x412e50;
inline void (*CSteamStats::ptr::OnUserStatsReceived)(CSteamStats * self, UserStatsReceived_t * pCallback) = (void (*)(CSteamStats * self, UserStatsReceived_t * pCallback)) 0x413020;
inline void (*CSteamStats::ptr::OnUserStatsStored)(CSteamStats * self, UserStatsStored_t * pCallback) = (void (*)(CSteamStats * self, UserStatsStored_t * pCallback)) 0x4131a0;
inline void (*CSteamStats::ptr::CSTR_CSteamStats)(CSteamStats * self, Stat_t * Stats, int NumStats) = (void (*)(CSteamStats * self, Stat_t * Stats, int NumStats)) 0x412d10;
#endif

#ifdef __linux__

inline bool (*CSteamStats::ptr::_RequestStats)() = (bool (*)()) 0x80f8f10;
inline bool (*CSteamStats::ptr::StoreStats)(CSteamStats * self) = (bool (*)(CSteamStats * self)) 0x8275f20;
inline void (*CSteamStats::ptr::OnUserStatsReceived)(CSteamStats * self, UserStatsReceived_t * pCallback) = (void (*)(CSteamStats * self, UserStatsReceived_t * pCallback)) 0x8275770;
inline void (*CSteamStats::ptr::OnUserStatsStored)(CSteamStats * self, UserStatsStored_t * pCallback) = (void (*)(CSteamStats * self, UserStatsStored_t * pCallback)) 0x8275b60;
inline void (*CSteamStats::ptr::CSTR_CSteamStats)(CSteamStats * self, Stat_t * Stats, int NumStats) = (void (*)(CSteamStats * self, Stat_t * Stats, int NumStats)) 0x81ff9a0;
#endif
#endif
