//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGoogleMapsDeepLinkObserver-Protocol.h"
#import "SPTGoogleMapsFeatureFlagManagerObserver-Protocol.h"
#import "SPTGoogleMapsService-Protocol.h"

@class NSString, SPTAllocationContext, SPTGoogleMapsFeatureFlagManager, SPTGoogleMapsLogger, SPTGoogleMapsPartnerIntegration, SPTGoogleMapsPresenter;
@protocol SPTBannerFeature, SPTContainerService, SPTFeatureFlaggingService, SPTGLUEService, SPTNowPlayingPlatformService, SPTNowPlayingService, SPTPartnerService, SPTURIDispatchService;

@interface SPTGoogleMapsServiceImplementation : NSObject <SPTGoogleMapsFeatureFlagManagerObserver, SPTGoogleMapsDeepLinkObserver, SPTGoogleMapsService>
{
    SPTGoogleMapsFeatureFlagManager *_featureFlagManager;
    id <SPTContainerService> _containerService;
    id <SPTBannerFeature> _bannerService;
    id <SPTGLUEService> _glueService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTURIDispatchService> _uriDispatchService;
    id <SPTPartnerService> _partnerService;
    id <SPTNowPlayingService> _nowPlayingService;
    id <SPTNowPlayingPlatformService> _nowPlayingPlatformService;
    SPTGoogleMapsPresenter *_presenter;
    SPTGoogleMapsLogger *_logger;
    SPTGoogleMapsPartnerIntegration *_partnerIntegration;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTGoogleMapsPartnerIntegration *partnerIntegration; // @synthesize partnerIntegration=_partnerIntegration;
@property(retain, nonatomic) SPTGoogleMapsLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTGoogleMapsPresenter *presenter; // @synthesize presenter=_presenter;
@property(readonly, nonatomic) __weak id <SPTNowPlayingPlatformService> nowPlayingPlatformService; // @synthesize nowPlayingPlatformService=_nowPlayingPlatformService;
@property(readonly, nonatomic) __weak id <SPTNowPlayingService> nowPlayingService; // @synthesize nowPlayingService=_nowPlayingService;
@property(readonly, nonatomic) __weak id <SPTPartnerService> partnerService; // @synthesize partnerService=_partnerService;
@property(readonly, nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(readonly, nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(readonly, nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(readonly, nonatomic) __weak id <SPTBannerFeature> bannerService; // @synthesize bannerService=_bannerService;
@property(readonly, nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(retain, nonatomic) SPTGoogleMapsFeatureFlagManager *featureFlagManager; // @synthesize featureFlagManager=_featureFlagManager;
- (void).cxx_destruct;
- (void)applicationDidLaunchFromGoogleMapsDeepLink;
- (void)googleMapsFeatureFlagManager:(id)arg1 didUpdateEnabled:(_Bool)arg2;
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

