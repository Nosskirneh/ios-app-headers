//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@class NSString;
@protocol SPTAbbaFeatureFlags, SPTLegacyFeatureFlag, SPTLocalSettings;

@protocol SPTAbbaService <SPTService>
- (id <SPTLegacyFeatureFlag>)provideFeatureFlagWithName:(NSString *)arg1 enabledGroup:(NSString *)arg2 localSettings:(id <SPTLocalSettings>)arg3;
- (id <SPTAbbaFeatureFlags>)provideFeatureFlags;
@end

