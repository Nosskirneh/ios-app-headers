//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"

@class NSString, SPTObserverManager;
@protocol SPTFeatureFlagSignal;

@interface SPTDrivingJumpstartTestManager : NSObject <SPTFeatureFlagSignalObserver>
{
    _Bool _jumpstartEnabled;
    id <SPTFeatureFlagSignal> _jumpstartForegroundRolloutSignal;
    SPTObserverManager *_observers;
}

@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> jumpstartForegroundRolloutSignal; // @synthesize jumpstartForegroundRolloutSignal=_jumpstartForegroundRolloutSignal;
@property(nonatomic) _Bool jumpstartEnabled; // @synthesize jumpstartEnabled=_jumpstartEnabled;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)dealloc;
- (id)initWithFeatureFlagFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

