//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTLegacyFeatureFlagObserver;

@protocol SPTLegacyFeatureFlag <NSObject>
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, copy, nonatomic) NSString *featureFlagKey;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
- (void)removeObserver:(id <SPTLegacyFeatureFlagObserver>)arg1;
- (void)addObserver:(id <SPTLegacyFeatureFlagObserver>)arg1;
- (void)stop;
- (void)start;
@end

