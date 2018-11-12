//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTFeatureFlagSignal-Protocol.h"

@class NSString, SPTObserverManager;

@interface SPTFeatureFlagSignalImplementation : NSObject <SPTFeatureFlagSignal>
{
    long long _state;
    SPTObserverManager *_observerManager;
}

+ (id)stateToBool:(long long)arg1;
+ (id)descriptionForState:(long long)arg1;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
- (void).cxx_destruct;
- (void)logExposure;
- (void)setStateInternal:(long long)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

