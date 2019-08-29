//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSTimer, Reachability, SaavnAdManager, SaavnDefaultConfig, SubscriptionManager;

@interface AppData : NSObject
{
    NSMutableDictionary *nowPlaying;
    int dataReady;
    Reachability *internetReach;
    _Bool reachabilityReady;
    _Bool isOnlineTimerRunning;
    _Bool isOfflineTimerRunning;
    _Bool appLaunched;
    _Bool isAutoPlayOn;
    _Bool isCrossFadeOn;
    _Bool explicitOfflineMode;
    _Bool implicitOfflineMode;
    _Bool radioMode;
    NSTimer *onlineTimer;
    NSTimer *offlineTimer;
    NSString *trackingServer;
    _Bool af_enabled;
    _Bool isDownloading;
    _Bool isIpadContainerLoaded;
    int songsLeft;
    int requestedSongs;
    double last_registerdevice_time;
    _Bool jio_analytics_enabled;
    _Bool cleverTap_enabled;
    _Bool jioUserAvailable;
    _Bool device_mgmt_enabled;
    SaavnDefaultConfig *defaultConfig;
    SaavnAdManager *adManager;
    SubscriptionManager *subManager;
    _Bool launchStarted;
    _Bool offlineViewsSet;
    _Bool updateJioRequired;
    _Bool carriersAvailable;
    _Bool crossFadeEnabledFromBE;
    _Bool isAppUpgrade;
    _Bool _eventLogEnabled;
    NSString *shareModalVariant;
    NSString *shareTriggerVariant;
}

+ (id)getDownloadQualityOptions;
+ (id)getLangugageOfTop15ID:(id)arg1;
+ (_Bool)isAnyTop15:(id)arg1;
+ (id)getTop15IDsArray;
+ (id)getTop15s;
+ (_Bool)isAnySurpriseMe:(id)arg1;
+ (id)getSurpriseMeIDsArray;
+ (id)getSupportedRadioLanguagesList;
+ (_Bool)isRadioSupportedFor:(id)arg1;
+ (_Bool)isRadioSupported;
+ (id)getLanguagesStringWithFormatting:(_Bool)arg1;
+ (id)getLanguagesArray;
+ (id)getLanguage;
+ (void)setLanguages:(id)arg1;
+ (void)setLanguage:(id)arg1;
+ (_Bool)shouldShowBanner;
+ (id)getFreeDiskSpaceString;
+ (id)getCountryName;
+ (id)getBuildNumber;
+ (id)getAppVersion;
+ (id)getBitrate;
+ (id)getCountryCode;
+ (id)getCurrentNetworkString;
+ (id)getCarrierNameForNetwork;
+ (id)getCurrentNetworkType;
+ (long long)getNetworkStatus;
+ (_Bool)isConnected;
+ (id)getSingleton;
@property(nonatomic) _Bool eventLogEnabled; // @synthesize eventLogEnabled=_eventLogEnabled;
@property(nonatomic) _Bool device_mgmt_enabled; // @synthesize device_mgmt_enabled;
@property(nonatomic) _Bool isAppUpgrade; // @synthesize isAppUpgrade;
@property(nonatomic) _Bool cleverTap_enabled; // @synthesize cleverTap_enabled;
@property(nonatomic) _Bool jio_analytics_enabled; // @synthesize jio_analytics_enabled;
@property(retain, nonatomic) NSString *shareTriggerVariant; // @synthesize shareTriggerVariant;
@property(retain, nonatomic) NSString *shareModalVariant; // @synthesize shareModalVariant;
@property(retain, nonatomic) NSString *trackingServer; // @synthesize trackingServer;
@property(retain, nonatomic) Reachability *internetReach; // @synthesize internetReach;
@property(nonatomic) _Bool appLaunched; // @synthesize appLaunched;
@property(nonatomic) _Bool radioMode; // @synthesize radioMode;
@property(nonatomic) _Bool implicitOfflineMode; // @synthesize implicitOfflineMode;
@property(nonatomic) _Bool explicitOfflineMode; // @synthesize explicitOfflineMode;
@property(nonatomic) _Bool crossFadeEnabledFromBE; // @synthesize crossFadeEnabledFromBE;
@property(nonatomic) _Bool af_enabled; // @synthesize af_enabled;
@property(nonatomic) int requestedSongs; // @synthesize requestedSongs;
@property(nonatomic) _Bool carriersAvailable; // @synthesize carriersAvailable;
@property(nonatomic) int songsLeft; // @synthesize songsLeft;
@property(nonatomic) _Bool isDownloading; // @synthesize isDownloading;
@property(nonatomic) _Bool reachabilityReady; // @synthesize reachabilityReady;
@property(nonatomic) int dataReady; // @synthesize dataReady;
@property(retain, nonatomic) NSMutableDictionary *nowPlaying; // @synthesize nowPlaying;
- (void).cxx_destruct;
- (void)setJioUpdateRequired:(_Bool)arg1;
- (_Bool)isJioUpdateRequired;
- (void)getSDKFlagInfo;
- (_Bool)isDeviceMgmtEnabled;
- (_Bool)isJioTuneEnabled;
- (_Bool)isCleverTapEnabled;
- (_Bool)isJioAnalyticsEnabled;
- (_Bool)isAppsflyerEnable;
- (void)parseSDKFlagInfo:(id)arg1;
@property(nonatomic) double last_registerdevice_time;
- (_Bool)needToShowUpgradeScreen:(id)arg1;
- (_Bool)isUpgradeNeeded:(id)arg1;
- (void)goOnlineModal;
- (_Bool)isRadioMode;
- (_Bool)isCacheing;
- (void)hideCacheStatus;
- (void)showCacheStatus:(int)arg1;
- (void)setupABTestingBuckets:(id)arg1;
- (_Bool)getCrashStateForDebugging;
- (void)allowCrashForDebugging:(_Bool)arg1;
- (int)getCrossFadeGainChange;
- (int)getCrossFadeDuration;
- (_Bool)crossFadeEnabled;
- (void)setCrossFadeGainChange:(int)arg1;
- (void)setCrossFadeDuration:(int)arg1;
- (void)setCrossFade:(_Bool)arg1;
- (id)getTrackingServer;
- (void)parseTrackingServer:(id)arg1;
- (void)checkProExpiry;
- (void)initOfflineMode;
- (void)fetchInitData;
- (void)checkForSavedProOfflineState;
- (void)updateTabsForOffline:(_Bool)arg1;
- (void)goOnline;
- (void)goOfflineDirect;
- (void)goOfflineModal;
- (void)setImplicitOfflineImmediate;
- (void)setImplicitOffline;
- (void)setHardOffline;
- (void)unsetHardOffline;
- (void)unsetImplicitOffline;
- (_Bool)isSoftOfflineMode;
- (_Bool)isHardOfflineMode;
- (_Bool)isInOfflineMode;
- (void)onlineTimerExpiry;
- (void)stopOnlineTimerExpiry;
- (void)offlineTimerExpiry;
- (void)stopOfflineTimerExpiry;
- (void)processReachability:(long long)arg1 forceHandle:(_Bool)arg2;
- (void)monitorReachability;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)jioUserChanged;
- (void)setIpadContainerLoaded;
- (_Bool)isIpadContainerLoaded;
- (void)explicitInit;
- (id)init;

@end

