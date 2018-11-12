//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTSocialListeningService-Protocol.h"

@class NSString, SPTAllocationContext, SPTSocialListeningTestManagerImplementation;
@protocol SPTFeatureFlaggingService;

@interface SPTSocialListeningServiceImplementation : NSObject <SPTSocialListeningService>
{
    id <SPTFeatureFlaggingService> _featureFlagService;
    SPTSocialListeningTestManagerImplementation *_testManager;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTSocialListeningTestManagerImplementation *testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlagService; // @synthesize featureFlagService=_featureFlagService;
- (void).cxx_destruct;
- (void)dummyMethod;
- (id)provideTestManager;
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

