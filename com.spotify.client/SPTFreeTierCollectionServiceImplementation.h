//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPTAllocationContext;
@protocol FollowFeature, SPTCollectionPlatformService, SPTExplicitContentService, SPTFeatureFlaggingService, SPTFreeTierCollectionTestManager, SPTFreeTierPreCurationService, SPTFreeTierRecommendationsService, SPTFreeTierService, SPTNetworkService, SPTOnDemandService, SPTPlaylistPlatformService, SPTRecentlyPlayedService, SPTRemoteConfigurationService, SPTSessionService, SPTSettingsFeature, SPTYourLibraryService;

@interface SPTFreeTierCollectionServiceImplementation : NSObject
{
    id <SPTSessionService> _clientSessionService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTExplicitContentService> _explicitContentService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <FollowFeature> _followService;
    id <SPTFreeTierService> _freeTierService;
    id <SPTFreeTierPreCurationService> _preCurationService;
    id <SPTNetworkService> _networkService;
    id <SPTOnDemandService> _onDemandService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTRecentlyPlayedService> _recentlyPlayedService;
    id <SPTFreeTierRecommendationsService> _recommendationsService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTSettingsFeature> _settingsService;
    id <SPTYourLibraryService> _yourLibraryService;
    id <SPTFreeTierCollectionTestManager> _testManager;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTFreeTierCollectionTestManager> testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTYourLibraryService> yourLibraryService; // @synthesize yourLibraryService=_yourLibraryService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsService; // @synthesize settingsService=_settingsService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTFreeTierRecommendationsService> recommendationsService; // @synthesize recommendationsService=_recommendationsService;
@property(nonatomic) __weak id <SPTRecentlyPlayedService> recentlyPlayedService; // @synthesize recentlyPlayedService=_recentlyPlayedService;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTFreeTierPreCurationService> preCurationService; // @synthesize preCurationService=_preCurationService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <FollowFeature> followService; // @synthesize followService=_followService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTExplicitContentService> explicitContentService; // @synthesize explicitContentService=_explicitContentService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (id)providePlaylistSortRules;
- (id)setUpDataSourceForDataLoader:(id)arg1;
- (id)provideTestManager;
- (id)provideHiddenContentModel;
- (id)provideSongsEntityModel;
- (id)provideArtistsEntityModel;
- (id)provideAlbumsEntityModel;
- (id)providePlaylistsModel:(id)arg1;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

