//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLegacyFeatureFlagObserver-Protocol.h"
#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTAbbaService, SPTBMWCarAPIFeature, SPTExternalIntegrationPlatformService, SPTLegacyFeatureFlag, SPTSessionService;

@interface SPTBMWCarAPILoginSessionFeatureImplementation : NSObject <SPTLegacyFeatureFlagObserver, SPTService>
{
    id <SPTBMWCarAPIFeature> _bmwFeature;
    id <SPTExternalIntegrationPlatformService> _externalIntegrationPlatformService;
    id <SPTAbbaService> _abbaService;
    id <SPTSessionService> _clientSessionService;
    id <SPTLegacyFeatureFlag> _bmwFeatureFlag;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTLegacyFeatureFlag> bmwFeatureFlag; // @synthesize bmwFeatureFlag=_bmwFeatureFlag;
@property(readonly, nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(readonly, nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationPlatformService> externalIntegrationPlatformService; // @synthesize externalIntegrationPlatformService=_externalIntegrationPlatformService;
@property(readonly, nonatomic) __weak id <SPTBMWCarAPIFeature> bmwFeature; // @synthesize bmwFeature=_bmwFeature;
- (void).cxx_destruct;
- (void)disable;
- (void)enable;
- (void)handleBMWFeatureFlagStateChange;
- (void)featureFlag:(id)arg1 enabledStateDidChange:(_Bool)arg2;
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

