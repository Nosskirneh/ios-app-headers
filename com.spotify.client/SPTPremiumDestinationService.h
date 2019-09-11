//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTUIPageService.h"

@class SPTPersistentCache, SPTPremiumDestinationHubManager, SPTPremiumDestinationSettingsPageBuilder, SPTUpsellAccountLogger;
@protocol NSObject, SPTAccountService, SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTFeatureSettingsItemFactory, SPTFreeTierService, SPTGLUEService, SPTHubFrameworkService, SPTLogCenter, SPTMandatoryPremiumTrialService, SPTNavigationFeature, SPTNavigationListProvider, SPTNetworkService, SPTPremiumDestinationExperiments, SPTSessionService, SPTSettingsFeature, SPTURIDispatchService;

@interface SPTPremiumDestinationService : SPTUIPageService
{
    _Bool _freeTierEnabled;
    id <SPTAccountService> _accountService;
    id <SPTSessionService> _clientSessionService;
    id <SPTNavigationFeature> _navigationService;
    id <SPTFreeTierService> _freeTierService;
    id <SPTGLUEService> _glueService;
    id <SPTHubFrameworkService> _hubFrameworkService;
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTMandatoryPremiumTrialService> _mandatoryPremiumTrialService;
    id <SPTNetworkService> _networkService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTLogCenter> _logCenter;
    SPTUpsellAccountLogger *_accountLogger;
    id <SPTFeatureFlagSignal> _freeTierFeatureFlagSignal;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTPremiumDestinationExperiments> _experiments;
    SPTPremiumDestinationHubManager *_hubManager;
    id <SPTNavigationListProvider> _navigationListProvider;
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
    SPTPremiumDestinationSettingsPageBuilder *_settingsPageFactory;
    SPTPersistentCache *_persistentCache;
    id <NSObject> _clearPersistentCacheOnLogoutToken;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <NSObject> clearPersistentCacheOnLogoutToken; // @synthesize clearPersistentCacheOnLogoutToken=_clearPersistentCacheOnLogoutToken;
@property(retain, nonatomic) SPTPersistentCache *persistentCache; // @synthesize persistentCache=_persistentCache;
@property(retain, nonatomic) SPTPremiumDestinationSettingsPageBuilder *settingsPageFactory; // @synthesize settingsPageFactory=_settingsPageFactory;
@property(retain, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
@property(retain, nonatomic) id <SPTNavigationListProvider> navigationListProvider; // @synthesize navigationListProvider=_navigationListProvider;
@property(retain, nonatomic) SPTPremiumDestinationHubManager *hubManager; // @synthesize hubManager=_hubManager;
@property(retain, nonatomic) id <SPTPremiumDestinationExperiments> experiments; // @synthesize experiments=_experiments;
@property(retain, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(nonatomic) _Bool freeTierEnabled; // @synthesize freeTierEnabled=_freeTierEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> freeTierFeatureFlagSignal; // @synthesize freeTierFeatureFlagSignal=_freeTierFeatureFlagSignal;
@property(retain, nonatomic) SPTUpsellAccountLogger *accountLogger; // @synthesize accountLogger=_accountLogger;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTMandatoryPremiumTrialService> mandatoryPremiumTrialService; // @synthesize mandatoryPremiumTrialService=_mandatoryPremiumTrialService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTHubFrameworkService> hubFrameworkService; // @synthesize hubFrameworkService=_hubFrameworkService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTNavigationFeature> navigationService; // @synthesize navigationService=_navigationService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTAccountService> accountService; // @synthesize accountService=_accountService;
- (void).cxx_destruct;
- (id)providePremiumDestinationGLUETheme;
- (id)providePremiumDestinationHubManagerConfiguration;
- (id)providePremiumDestinationHubComponentsFactory;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (id)providePersistentCache;
- (id)provideLegacyPremiumDestinationViewControllerForViewURI:(id)arg1 context:(id)arg2;
- (id)provideHubsPremiumDestinationViewControllerWithURI:(id)arg1 context:(id)arg2;
- (void)configureMasterFeatureFlag:(id)arg1;
- (id)provideViewControllerForURI:(id)arg1 context:(id)arg2;
- (_Bool)claimsURI:(id)arg1;
- (void)loadHubManager;
- (void)loadSettingsPage;
- (void)loadNavigationListProviders;
- (void)loadExperiments;
- (void)loadFreeTierFeatureFlagSignal;
- (void)loadLoggers;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

@end

