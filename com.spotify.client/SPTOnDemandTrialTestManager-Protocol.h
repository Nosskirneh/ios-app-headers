//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTFeatureFlagSignal;

@protocol SPTOnDemandTrialTestManager <NSObject>
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> onDemandUserPolicySignal;
- (_Bool)shouldSuppressEndOfTrialDialog;
- (_Bool)isInTrial;
- (_Bool)isFeatureEnabled;
@end

