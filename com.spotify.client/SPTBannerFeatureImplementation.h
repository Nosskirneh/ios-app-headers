//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTBannerFeature-Protocol.h"

@class NSString, SPTAllocationContext, SPTBannerPresentationManagerImplementation, SPTBannerSettingsManager;
@protocol SPTContainerService, SPTContainerUIService, SPTFeatureFlaggingService;

@interface SPTBannerFeatureImplementation : NSObject <SPTBannerFeature>
{
    id <SPTContainerService> _containerService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTContainerUIService> _containerUIService;
    SPTBannerPresentationManagerImplementation *_bannerPresentationManager;
    SPTBannerSettingsManager *_bannerSettingsManager;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTBannerSettingsManager *bannerSettingsManager; // @synthesize bannerSettingsManager=_bannerSettingsManager;
@property(retain, nonatomic) SPTBannerPresentationManagerImplementation *bannerPresentationManager; // @synthesize bannerPresentationManager=_bannerPresentationManager;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)provideBannerPresentationManager;
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

