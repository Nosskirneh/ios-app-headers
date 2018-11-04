//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTGoogleMapsDeepLinkObserver.h"
#import "SPTGoogleMapsFeatureFlagManagerObserver.h"
#import "SPTGoogleMapsService.h"

@class NSString, SPTAllocationContext, SPTGoogleMapsFeatureFlagManager, SPTGoogleMapsLogger, SPTGoogleMapsPresenter;

@interface SPTGoogleMapsServiceImplementation : NSObject <SPTGoogleMapsFeatureFlagManagerObserver, SPTGoogleMapsDeepLinkObserver, SPTGoogleMapsService>
{
    SPTGoogleMapsFeatureFlagManager *_featureFlagManager;
    id <SPTContainerService> _containerService;
    id <SPTBannerFeature> _bannerService;
    id <SPTGLUEService> _glueService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTURIDispatchService> _uriDispatchService;
    SPTGoogleMapsPresenter *_presenter;
    SPTGoogleMapsLogger *_logger;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTGoogleMapsLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTGoogleMapsPresenter *presenter; // @synthesize presenter=_presenter;
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

