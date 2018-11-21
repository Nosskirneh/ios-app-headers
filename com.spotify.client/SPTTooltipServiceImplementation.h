//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTService-Protocol.h"
#import "SPTTooltipService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTFeatureFlagSignal, SPTFeatureFlaggingService, SPTFreeTierService;

@interface SPTTooltipServiceImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTService, SPTTooltipService>
{
    id <SPTFreeTierService> _freeTierService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTFeatureFlagSignal> _legacyTooltipSeviceEnabledSignal;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> legacyTooltipSeviceEnabledSignal; // @synthesize legacyTooltipSeviceEnabledSignal=_legacyTooltipSeviceEnabledSignal;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (id)provideLegacyTooltipServiceEnabledSignal;
- (id)provideTooltipPresentationManager;
- (void)disableTooltipService;
- (void)enableTooltipService;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

