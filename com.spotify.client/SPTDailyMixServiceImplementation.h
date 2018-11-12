//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTDailyMixFeature-Protocol.h"

@class NSString, SPTAllocationContext, SPTDailyMixCollectionLibraryManager, SPTDailyMixLocalizationManagerImplementation, SPTDailyMixLoggingService, SPTDailyMixManagerImplementation, SPTDailyMixUtils, SPTDailyMixViewUtils, SPTPersistentCache;
@protocol CollectionFeature, HUBComponentFactory, NSObject, SPTAbbaService, SPTCollectionPlatformService, SPTContainerService, SPTDailyMixFeedbackUIModel, SPTDailyMixTestManager, SPTFeatureFlaggingService, SPTHubRemoteContentURLResolver, SPTLocalSettings, SPTNetworkService, SPTNowPlayingRemoteControlPolicy, SPTPlayer, SPTPlayerFeature, SPTRadioService, SPTSessionService, SPTSettingsFeature, SPTURIDispatchService, UpsellFeature;

@interface SPTDailyMixServiceImplementation : NSObject <SPTDailyMixFeature>
{
    id <SPTSessionService> _clientSessionService;
    id <SPTContainerService> _containerService;
    id <SPTSettingsFeature> _settings;
    id <SPTAbbaService> _abbaService;
    id <SPTFeatureFlaggingService> _featureFlagService;
    id <SPTDailyMixTestManager> _testManager;
    id <SPTLocalSettings> _localSettings;
    id <SPTNetworkService> _networkFeature;
    SPTPersistentCache *_persistentCache;
    id <NSObject> _clearPersistentCacheOnLogoutToken;
    SPTDailyMixCollectionLibraryManager *_collectionLibraryManager;
    id <SPTPlayerFeature> _playback;
    id <SPTPlayer> _player;
    SPTDailyMixUtils *_dailyMixUtils;
    id <UpsellFeature> _upsellFeature;
    SPTDailyMixManagerImplementation *_dailyMixManager;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTNowPlayingRemoteControlPolicy> _dailyMixRemoteControlPolicy;
    id <SPTDailyMixFeedbackUIModel> _dailyMixFeedbackUIModel;
    id <CollectionFeature> _collection;
    id <SPTRadioService> _radioService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <HUBComponentFactory> _dailyMixHubComponentFactory;
    id <SPTHubRemoteContentURLResolver> _dailyMixRemoteContentURLResolver;
    SPTDailyMixLoggingService *_loggingService;
    SPTDailyMixViewUtils *_dailyMixViewUtils;
    SPTDailyMixLocalizationManagerImplementation *_dailyMixLocalizationManager;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTDailyMixLocalizationManagerImplementation *dailyMixLocalizationManager; // @synthesize dailyMixLocalizationManager=_dailyMixLocalizationManager;
@property(retain, nonatomic) SPTDailyMixViewUtils *dailyMixViewUtils; // @synthesize dailyMixViewUtils=_dailyMixViewUtils;
@property(retain, nonatomic) SPTDailyMixLoggingService *loggingService; // @synthesize loggingService=_loggingService;
@property(retain, nonatomic) id <SPTHubRemoteContentURLResolver> dailyMixRemoteContentURLResolver; // @synthesize dailyMixRemoteContentURLResolver=_dailyMixRemoteContentURLResolver;
@property(retain, nonatomic) id <HUBComponentFactory> dailyMixHubComponentFactory; // @synthesize dailyMixHubComponentFactory=_dailyMixHubComponentFactory;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTRadioService> radioService; // @synthesize radioService=_radioService;
@property(nonatomic) __weak id <CollectionFeature> collection; // @synthesize collection=_collection;
@property(retain, nonatomic) id <SPTDailyMixFeedbackUIModel> dailyMixFeedbackUIModel; // @synthesize dailyMixFeedbackUIModel=_dailyMixFeedbackUIModel;
@property(retain, nonatomic) id <SPTNowPlayingRemoteControlPolicy> dailyMixRemoteControlPolicy; // @synthesize dailyMixRemoteControlPolicy=_dailyMixRemoteControlPolicy;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(retain, nonatomic) SPTDailyMixManagerImplementation *dailyMixManager; // @synthesize dailyMixManager=_dailyMixManager;
@property(nonatomic) __weak id <UpsellFeature> upsellFeature; // @synthesize upsellFeature=_upsellFeature;
@property(retain, nonatomic) SPTDailyMixUtils *dailyMixUtils; // @synthesize dailyMixUtils=_dailyMixUtils;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic) __weak id <SPTPlayerFeature> playback; // @synthesize playback=_playback;
@property(retain, nonatomic) SPTDailyMixCollectionLibraryManager *collectionLibraryManager; // @synthesize collectionLibraryManager=_collectionLibraryManager;
@property(nonatomic) __weak id <NSObject> clearPersistentCacheOnLogoutToken; // @synthesize clearPersistentCacheOnLogoutToken=_clearPersistentCacheOnLogoutToken;
@property(retain, nonatomic) SPTPersistentCache *persistentCache; // @synthesize persistentCache=_persistentCache;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) id <SPTDailyMixTestManager> testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlagService; // @synthesize featureFlagService=_featureFlagService;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
@property(nonatomic) __weak id <SPTSettingsFeature> settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (id)provideDailyMixLocalizationManager;
- (id)provideDailyMixViewUtils;
- (id)provideDailyMixLoggingService;
- (id)provideDailyMixHubContentURLResolver;
- (id)provideDailyMixHubComponentFactory;
- (id)provideCollectionLibraryManager;
- (void)registerDailyMixWithCollection;
- (id)provideDailyMixRemoteControlPolicy;
- (id)provideAsyncDailyMixHub:(id)arg1 context:(id)arg2;
- (id)providePlayer;
- (id)providePersistentCache;
- (id)provideExperimentalDailyMixEntityViewController:(id)arg1;
- (id)provideDailyMixFeedbackListViewController;
- (void)registerFeatureSettingsPage;
- (id)provideStationViewController:(id)arg1 context:(id)arg2;
- (id)provideDailyMixTestManager;
- (id)provideDailyMixManager;
- (id)provideDailyMixFeedbackUIModel;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

