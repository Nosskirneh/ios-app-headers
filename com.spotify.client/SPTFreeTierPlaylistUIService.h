//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol GaiaFeature, PlaylistFeature, SPContextMenuFeature, SPTAdsService, SPTAssistedCurationUIService, SPTBrowsePlatformService, SPTBrowseRedirectButtonProvider, SPTCollectionPlatformService, SPTContainerService, SPTContainerUIService, SPTCoreService, SPTFeatureFlagSignal, SPTFeatureFlaggingService, SPTFormatListPlatformRegistration, SPTFormatListPlatformService, SPTFreeTierAllSongsService, SPTFreeTierCreatePlaylistService, SPTFreeTierEducationService, SPTFreeTierPlaylistService, SPTFreeTierPreCurationService, SPTFreeTierRecommendationsService, SPTGLUEService, SPTNavigationFeature, SPTNetworkService, SPTOnDemandService, SPTPerformanceMetricsService, SPTPlayerFeature, SPTPlaylistExtenderService, SPTPlaylistPlatformService, SPTSessionService, SPTShelfService, SPTSortingFilteringService, SPTUIPresentationService;

@interface SPTFreeTierPlaylistUIService : NSObject <SPTFeatureFlagSignalObserver, SPTService>
{
    id <SPTFreeTierAllSongsService> _allSongsService;
    id <SPTAssistedCurationUIService> _assistedCurationUIService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTContainerService> _containerService;
    id <SPTContainerUIService> _containerUIService;
    id <SPContextMenuFeature> _contextMenuService;
    id <SPTCoreService> _coreService;
    id <SPTFormatListPlatformService> _formatListPlatformService;
    id <SPTFreeTierPlaylistService> _freeTierPlaylistService;
    id <SPTGLUEService> _glueService;
    id <SPTNavigationFeature> _navigationService;
    id <SPTNetworkService> _networkService;
    id <SPTOnDemandService> _onDemandService;
    id <SPTPlayerFeature> _playerService;
    id <SPTFreeTierPreCurationService> _preCurationService;
    id <SPTFreeTierRecommendationsService> _recommendationsService;
    id <SPTAdsService> _adsService;
    id <SPTFreeTierEducationService> _educationService;
    id <SPTPerformanceMetricsService> _performanceMetricsService;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTFreeTierCreatePlaylistService> _createPlaylistService;
    id <PlaylistFeature> _playListFeature;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTUIPresentationService> _presentationService;
    id <SPTSessionService> _sessionService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTShelfService> _shelfService;
    id <SPTPlaylistExtenderService> _playlistExtenderFeature;
    id <SPTSortingFilteringService> _sortingFilteringService;
    id <SPTFormatListPlatformRegistration> _formatRegistryHandlerRegistration;
    id <GaiaFeature> _gaiaFeature;
    id <SPTBrowsePlatformService> _browsePlatformService;
    id <SPTBrowseRedirectButtonProvider> _browseRedirectButtonProvider;
    id <SPTFeatureFlagSignal> _freeTierPlaylistFeatureEnabledSignal;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> freeTierPlaylistFeatureEnabledSignal; // @synthesize freeTierPlaylistFeatureEnabledSignal=_freeTierPlaylistFeatureEnabledSignal;
@property(retain, nonatomic) id <SPTBrowseRedirectButtonProvider> browseRedirectButtonProvider; // @synthesize browseRedirectButtonProvider=_browseRedirectButtonProvider;
@property(nonatomic) __weak id <SPTBrowsePlatformService> browsePlatformService; // @synthesize browsePlatformService=_browsePlatformService;
@property(nonatomic) __weak id <GaiaFeature> gaiaFeature; // @synthesize gaiaFeature=_gaiaFeature;
@property(retain, nonatomic) id <SPTFormatListPlatformRegistration> formatRegistryHandlerRegistration; // @synthesize formatRegistryHandlerRegistration=_formatRegistryHandlerRegistration;
@property(nonatomic) __weak id <SPTSortingFilteringService> sortingFilteringService; // @synthesize sortingFilteringService=_sortingFilteringService;
@property(nonatomic) __weak id <SPTPlaylistExtenderService> playlistExtenderFeature; // @synthesize playlistExtenderFeature=_playlistExtenderFeature;
@property(nonatomic) __weak id <SPTShelfService> shelfService; // @synthesize shelfService=_shelfService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <PlaylistFeature> playListFeature; // @synthesize playListFeature=_playListFeature;
@property(nonatomic) __weak id <SPTFreeTierCreatePlaylistService> createPlaylistService; // @synthesize createPlaylistService=_createPlaylistService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <SPTPerformanceMetricsService> performanceMetricsService; // @synthesize performanceMetricsService=_performanceMetricsService;
@property(nonatomic) __weak id <SPTFreeTierEducationService> educationService; // @synthesize educationService=_educationService;
@property(nonatomic) __weak id <SPTAdsService> adsService; // @synthesize adsService=_adsService;
@property(nonatomic) __weak id <SPTFreeTierRecommendationsService> recommendationsService; // @synthesize recommendationsService=_recommendationsService;
@property(nonatomic) __weak id <SPTFreeTierPreCurationService> preCurationService; // @synthesize preCurationService=_preCurationService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTNavigationFeature> navigationService; // @synthesize navigationService=_navigationService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTFreeTierPlaylistService> freeTierPlaylistService; // @synthesize freeTierPlaylistService=_freeTierPlaylistService;
@property(nonatomic) __weak id <SPTFormatListPlatformService> formatListPlatformService; // @synthesize formatListPlatformService=_formatListPlatformService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuService; // @synthesize contextMenuService=_contextMenuService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTAssistedCurationUIService> assistedCurationUIService; // @synthesize assistedCurationUIService=_assistedCurationUIService;
@property(nonatomic) __weak id <SPTFreeTierAllSongsService> allSongsService; // @synthesize allSongsService=_allSongsService;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (id)allSongsDataSourceForURL:(id)arg1 formatListType:(id)arg2;
- (id)providerFooterProviderForPlaylistURL:(id)arg1 context:(id)arg2;
- (id)provideLoggerForURI:(id)arg1;
- (id)provideSponsoredViewModelForURL:(id)arg1;
- (id)providePlaylistEditViewControllerForURL:(id)arg1;
- (id)providePlaylistSearchViewControllerWithViewModel:(id)arg1;
- (id)providePlaylistViewControllerForURL:(id)arg1 withContext:(id)arg2 formatListType:(id)arg3;
- (void)unregisterPage;
- (void)registerPage;
- (void)registerEditPlaylistAction;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

