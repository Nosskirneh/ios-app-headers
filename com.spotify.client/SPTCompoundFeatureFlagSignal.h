//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTFeatureFlagSignalImplementation.h"

#import "SPTFeatureFlagSignalObserver-Protocol.h"

@class NSMapTable, NSString;

@interface SPTCompoundFeatureFlagSignal : SPTFeatureFlagSignalImplementation <SPTFeatureFlagSignalObserver>
{
    NSMapTable *_signals;
}

@property(readonly, nonatomic) NSMapTable *signals; // @synthesize signals=_signals;
- (void).cxx_destruct;
- (void)logExposure;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (long long)compoundStateForStates:(id)arg1;
- (id)initWithObservedSignals:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

