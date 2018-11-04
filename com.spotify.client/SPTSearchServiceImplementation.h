//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTSearchService.h"

@class EXP_HUBComponentDefaults, EXP_HUBComponentRegistry, NSString, SPTAllocationContext, SPTSearch2RequestParametersProvider, SPTSearchHubsRegistration;

@interface SPTSearchServiceImplementation : NSObject <SPTSearchService>
{
    SPTSearch2RequestParametersProvider *_searchRequestParametersProvider;
    id <SPTSearch2FancyRecentsDataSourceProviding> _fancyRecentsDataSourceProvider;
    id <SPTSessionService> _clientSessionService;
    id <SPTNetworkService> _networkFeature;
    id <SPTPlayerFeature> _playerService;
    id <SPContextMenuFeature> _contextMenu;
    id <SPTShelfService> _shelfService;
    id <SPTPodcastFeature> _podcastFeature;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTNavigationFeature> _navigationFeature;
    id <SPTGLUEService> _glueService;
    id <SPTContainerService> _containerService;
    id <EXP_SPTHubFrameworkService> _hubFrameworkService;
    id <SPTSettingsFeature> _settingsService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTURIDispatchService> _uriDispatchService;
    id <SPTVoiceService> _voiceService;
    id <SPTFreeTierService> _freeTierService;
    id <SPTOnDemandService> _onDemandService;
    id <SPTExplicitContentService> _explicitContentService;
    id <SPTPerformanceMetricsService> _performanceMetricsService;
    id <SPTScannablesService> _scannablesService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTResolver> _cosmosRouter;
    EXP_HUBComponentRegistry *_componentRegistry;
    EXP_HUBComponentDefaults *_componentDefaults;
    SPTSearchHubsRegistration *_hubsRegistration;
    id <SPTSearch2UserTierProviding> _userTierProvider;
    id <EXP_SPTHubsRendererFactory> _hubsRendererFactory;
    id <SPTHugsFactory> _hugsFactory;
    id <SPTSearchABTestSource> _searchTestManager;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTSearchABTestSource> searchTestManager; // @synthesize searchTestManager=_searchTestManager;
@property(retain, nonatomic) id <SPTHugsFactory> hugsFactory; // @synthesize hugsFactory=_hugsFactory;
@property(retain, nonatomic) id <EXP_SPTHubsRendererFactory> hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
@property(retain, nonatomic) id <SPTSearch2UserTierProviding> userTierProvider; // @synthesize userTierProvider=_userTierProvider;
@property(retain, nonatomic) SPTSearchHubsRegistration *hubsRegistration; // @synthesize hubsRegistration=_hubsRegistration;
@property(retain, nonatomic) EXP_HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
@property(retain, nonatomic) EXP_HUBComponentRegistry *componentRegistry; // @synthesize componentRegistry=_componentRegistry;
@property(retain, nonatomic) id <SPTResolver> cosmosRouter; // @synthesize cosmosRouter=_cosmosRouter;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTScannablesService> scannablesService; // @synthesize scannablesService=_scannablesService;
@property(nonatomic) __weak id <SPTPerformanceMetricsService> performanceMetricsService; // @synthesize performanceMetricsService=_performanceMetricsService;
@property(nonatomic) __weak id <SPTExplicitContentService> explicitContentService; // @synthesize explicitContentService=_explicitContentService;
@property(nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTVoiceService> voiceService; // @synthesize voiceService=_voiceService;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsService; // @synthesize settingsService=_settingsService;
@property(nonatomic) __weak id <EXP_SPTHubFrameworkService> hubFrameworkService; // @synthesize hubFrameworkService=_hubFrameworkService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTNavigationFeature> navigationFeature; // @synthesize navigationFeature=_navigationFeature;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <SPTPodcastFeature> podcastFeature; // @synthesize podcastFeature=_podcastFeature;
@property(nonatomic) __weak id <SPTShelfService> shelfService; // @synthesize shelfService=_shelfService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenu; // @synthesize contextMenu=_contextMenu;
@property(nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (id)makeAutocompleteViewControllerWithConfiguration:(id)arg1;
- (id)makeViewModelProviderWithConfiguration:(id)arg1;
- (id)makeDefaultSearchRequestParameters;
@property(readonly, nonatomic) SPTSearch2RequestParametersProvider *searchRequestParametersProvider; // @synthesize searchRequestParametersProvider=_searchRequestParametersProvider;
- (id)makeEmptyStatePropertiesProviderWithOfflineSearchEnabled:(_Bool)arg1;
- (id)makeConfiguration;
- (id)makeViewControllerDependencies;
- (id)makeRootViewControllerWithConfiguration:(id)arg1;
- (id)makeViewControllerWithConfiguration:(id)arg1;
- (id)provideFeatureSettingsItemFactory;
- (id)provideLinkDispatcher;
- (id)provideLocalSettings;
- (id)createSPTPlayerWithReferrerIdentifier:(id)arg1;
- (unsigned long long)entityVerionForPodcastFeature:(id)arg1;
- (id)provideSearchViewControllerForURL:(id)arg1 context:(id)arg2;
- (void)registerSearchInPageRegistry:(id)arg1;
- (CDUnknownBlockType)searchURLpredicateIncludingRootView:(_Bool)arg1;
- (void)unload;
- (void)loadNonNFT;
- (void)load;
@property(readonly, nonatomic) id <SPTSearch2FancyRecentsDataSourceProviding> fancyRecentsDataSourceProvider; // @synthesize fancyRecentsDataSourceProvider=_fancyRecentsDataSourceProvider;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

