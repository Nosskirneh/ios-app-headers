//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAdsBaseService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol CosmosFeature, SPTAdsBaseCosmosBridge, SPTAdsBaseGlobalSettingsController, SPTAdsBaseMovementLogger, SPTAdsBaseRegistry, SPTResolver;

@interface SPTAdsBaseServiceImplementation : NSObject <SPTAdsBaseService>
{
    id <CosmosFeature> _cosmosFeature;
    id <SPTResolver> _adsBaseResolver;
    id <SPTAdsBaseCosmosBridge> _adsBaseCosmosBridge;
    id <SPTAdsBaseMovementLogger> _adsBaseMovementLogger;
    id <SPTAdsBaseRegistry> _adsBaseRegistry;
    id <SPTAdsBaseGlobalSettingsController> _adsBaseSettingsController;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTAdsBaseGlobalSettingsController> adsBaseSettingsController; // @synthesize adsBaseSettingsController=_adsBaseSettingsController;
@property(retain, nonatomic) id <SPTAdsBaseRegistry> adsBaseRegistry; // @synthesize adsBaseRegistry=_adsBaseRegistry;
@property(retain, nonatomic) id <SPTAdsBaseMovementLogger> adsBaseMovementLogger; // @synthesize adsBaseMovementLogger=_adsBaseMovementLogger;
@property(retain, nonatomic) id <SPTAdsBaseCosmosBridge> adsBaseCosmosBridge; // @synthesize adsBaseCosmosBridge=_adsBaseCosmosBridge;
@property(retain, nonatomic) id <SPTResolver> adsBaseResolver; // @synthesize adsBaseResolver=_adsBaseResolver;
@property(nonatomic) __weak id <CosmosFeature> cosmosFeature; // @synthesize cosmosFeature=_cosmosFeature;
- (void).cxx_destruct;
- (id)provideAdsSettingsController;
- (id)provideAdRegistry;
- (id)provideAdsMovementLogger;
- (id)createResolverForView:(id)arg1;
- (id)provideAdsResolver;
- (id)provideAdsCosmosBridge;
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

