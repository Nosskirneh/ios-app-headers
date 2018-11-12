//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTSearch2UserTierProviding-Protocol.h"

@class NSString;
@protocol SPTFeatureFlagSignal;

@interface SPTSearch2UserTierProvider : NSObject <SPTFeatureFlagSignalObserver, SPTSearch2UserTierProviding>
{
    id <SPTFeatureFlagSignal> _freeTierFeatureFlagSignal;
    long long _freeTierFeatureFlagState;
}

@property(nonatomic) long long freeTierFeatureFlagState; // @synthesize freeTierFeatureFlagState=_freeTierFeatureFlagState;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> freeTierFeatureFlagSignal; // @synthesize freeTierFeatureFlagSignal=_freeTierFeatureFlagSignal;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
@property(readonly, nonatomic) unsigned long long userTier;
- (id)initWithFreeTierService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

