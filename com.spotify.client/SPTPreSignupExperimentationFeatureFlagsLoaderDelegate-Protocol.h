//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTPreSignupExperimentationFeatureFlags, SPTPreSignupExperimentationFeatureFlagsLoader;

@protocol SPTPreSignupExperimentationFeatureFlagsLoaderDelegate <NSObject>
- (void)featureFlagsLoader:(id <SPTPreSignupExperimentationFeatureFlagsLoader>)arg1 didLoadFeatureFlags:(id <SPTPreSignupExperimentationFeatureFlags>)arg2;
- (void)featureFlagsLoaderDidFailToLoadFeatureFlags:(id <SPTPreSignupExperimentationFeatureFlagsLoader>)arg1;
@end

