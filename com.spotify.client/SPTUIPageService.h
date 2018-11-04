//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeatureFlagSignalObserver.h"
#import "SPTService.h"

@class NSString, SPTAllocationContext;

@interface SPTUIPageService : NSObject <SPTService, SPTFeatureFlagSignalObserver>
{
    id <SPTContainerService> _containerService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTFeatureFlagSignal> _masterEnabledSignal;
    id <SPTPageRegistrationToken> _UIPageServicePageRegistrationToken;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTPageRegistrationToken> UIPageServicePageRegistrationToken; // @synthesize UIPageServicePageRegistrationToken=_UIPageServicePageRegistrationToken;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> masterEnabledSignal; // @synthesize masterEnabledSignal=_masterEnabledSignal;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (void)unregisterUIPageServicePage;
- (void)registerUIPageServicePage;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)pageWasNavigatedTo:(id)arg1 forURI:(id)arg2 queryParameters:(id)arg3;
- (void)configureMasterFeatureFlag:(id)arg1;
- (id)buildMasterFeatureFlag;
- (id)provideViewControllerForURI:(id)arg1 context:(id)arg2;
- (_Bool)claimsURI:(id)arg1;
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
