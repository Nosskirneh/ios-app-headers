//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTBrowseTestManager-Protocol.h"

@class NSString;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal;

@interface SPTBrowseTestManagerImplementation : NSObject <SPTBrowseTestManager>
{
    _Bool playableHeroCardEnabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureFlagSignal> _playableHeroCardSignal;
}

@property(readonly, nonatomic) id <SPTFeatureFlagSignal> playableHeroCardSignal; // @synthesize playableHeroCardSignal=_playableHeroCardSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(nonatomic, getter=isPlayableHeroCardEnabled) _Bool playableHeroCardEnabled; // @synthesize playableHeroCardEnabled;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupHeroCardQuickActionSignal;
- (id)initWithFeatureFlagFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

