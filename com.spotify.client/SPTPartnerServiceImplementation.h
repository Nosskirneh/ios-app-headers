//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPartnerService-Protocol.h"
#import "SPTPartnerTestManagerObserver-Protocol.h"

@class NSString, SPTAllocationContext, SPTPartnerIntegrationStateLoader, SPTPartnerNavigationBannerCoordinator;
@protocol SPTAuthService, SPTBannerFeature, SPTContainerService, SPTContainerUIService, SPTDrivingStateDetectionService, SPTFeatureFlaggingService, SPTLogCenter, SPTNetworkService, SPTNowPlayingService, SPTPageRegistrationToken, SPTPartnerIntegrationRegistry, SPTPartnerTestManager, SPTSessionService, SPTSettingsFeature, SPTURIDispatchService;

@interface SPTPartnerServiceImplementation : NSObject <SPTPartnerTestManagerObserver, SPTPartnerService>
{
    id <SPTContainerService> _containerService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTSessionService> _sessionService;
    id <SPTSettingsFeature> _settingsService;
    id <SPTNetworkService> _networkService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTDrivingStateDetectionService> _drivingDetectionService;
    id <SPTBannerFeature> _bannerService;
    id <SPTURIDispatchService> _uriDispatchService;
    id <SPTAuthService> _authService;
    id <SPTNowPlayingService> _nowPlayingService;
    id <SPTPartnerIntegrationRegistry> _partnerIntegrationRegistry;
    id <SPTPartnerTestManager> _testManager;
    SPTPartnerIntegrationStateLoader *_partnerIntegrationStateLoader;
    SPTPartnerNavigationBannerCoordinator *_navigationBannerCoordinator;
    id <SPTPageRegistrationToken> _settingsPageRegistrationToken;
    id <SPTLogCenter> _logCenter;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(retain, nonatomic) id <SPTPageRegistrationToken> settingsPageRegistrationToken; // @synthesize settingsPageRegistrationToken=_settingsPageRegistrationToken;
@property(retain, nonatomic) SPTPartnerNavigationBannerCoordinator *navigationBannerCoordinator; // @synthesize navigationBannerCoordinator=_navigationBannerCoordinator;
@property(retain, nonatomic) SPTPartnerIntegrationStateLoader *partnerIntegrationStateLoader; // @synthesize partnerIntegrationStateLoader=_partnerIntegrationStateLoader;
@property(retain, nonatomic) id <SPTPartnerTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTPartnerIntegrationRegistry> partnerIntegrationRegistry; // @synthesize partnerIntegrationRegistry=_partnerIntegrationRegistry;
@property(readonly, nonatomic) __weak id <SPTNowPlayingService> nowPlayingService; // @synthesize nowPlayingService=_nowPlayingService;
@property(readonly, nonatomic) __weak id <SPTAuthService> authService; // @synthesize authService=_authService;
@property(readonly, nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(readonly, nonatomic) __weak id <SPTBannerFeature> bannerService; // @synthesize bannerService=_bannerService;
@property(readonly, nonatomic) __weak id <SPTDrivingStateDetectionService> drivingDetectionService; // @synthesize drivingDetectionService=_drivingDetectionService;
@property(readonly, nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(readonly, nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(readonly, nonatomic) __weak id <SPTSettingsFeature> settingsService; // @synthesize settingsService=_settingsService;
@property(readonly, nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(readonly, nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(readonly, nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (void)partnerTestManager:(id)arg1 didUpdateEnabledState:(_Bool)arg2;
- (id)provideTestManager;
- (id)providePartnerIntegrationRegistry;
- (id)provideActiveSessionBannerViewWithViewModel:(id)arg1;
- (id)provideLogger;
- (id)providePartnerSettingsPageForURI:(id)arg1 context:(id)arg2;
- (void)disable;
- (void)enable;
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

