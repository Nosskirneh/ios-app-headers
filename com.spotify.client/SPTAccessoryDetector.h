//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAudioSessionRouteDescription, NSSet, NSTimer, SPTAccessoryManagerLogging;

@interface SPTAccessoryDetector : NSObject
{
    _Bool _observing;
    _Bool _audioSessionInterrupted;
    id <SPTAccessoryCategorizer> _categorizer;
    id <SPTAccessoryStateManager> _accessoryStateManager;
    SPTAccessoryManagerLogging *_logger;
    AVAudioSessionRouteDescription *_currentRoute;
    NSSet *_pendingAccessories;
    NSTimer *_accessoryCollectionTimer;
}

@property(retain, nonatomic) NSTimer *accessoryCollectionTimer; // @synthesize accessoryCollectionTimer=_accessoryCollectionTimer;
@property(retain, nonatomic) NSSet *pendingAccessories; // @synthesize pendingAccessories=_pendingAccessories;
@property(retain, nonatomic) AVAudioSessionRouteDescription *currentRoute; // @synthesize currentRoute=_currentRoute;
@property(nonatomic, getter=isAudioSessionInterrupted) _Bool audioSessionInterrupted; // @synthesize audioSessionInterrupted=_audioSessionInterrupted;
@property(nonatomic, getter=isObserving) _Bool observing; // @synthesize observing=_observing;
@property(readonly, nonatomic) SPTAccessoryManagerLogging *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTAccessoryStateManager> accessoryStateManager; // @synthesize accessoryStateManager=_accessoryStateManager;
@property(readonly, nonatomic) id <SPTAccessoryCategorizer> categorizer; // @synthesize categorizer=_categorizer;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)updateWithAudioRoute:(id)arg1;
- (void)audioSessionWasInterrupted:(id)arg1;
- (void)audioRouteChanged:(id)arg1;
- (void)accessoryDidDisconnect:(id)arg1;
- (void)accessoryDidConnect:(id)arg1;
- (_Bool)audioOutputPortIsEligibleAsAccessory:(id)arg1;
- (void)removeAccessoriesForPortIdentifiers:(id)arg1;
- (void)removeAccessoryForExternalAccessory:(id)arg1;
- (void)accessoryCollectionTimerFired:(id)arg1;
- (void)collectAccessoryChangeAndCategorizeAudioPorts:(id)arg1;
- (void)removePendingAccessory:(id)arg1;
- (void)addExternalAccessoryAsPending:(id)arg1;
- (id)findRecentPendingAccessory;
- (void)attemptCategorizingAndAddingAccessory:(id)arg1 audioPort:(id)arg2;
- (void)manuallyUpdateCurrentState;
- (void)endObservingAccessories;
- (void)beginObservingAccessories;
- (void)dealloc;
- (id)initWithCategorizer:(id)arg1 accessoryStateManager:(id)arg2 logger:(id)arg3;

@end

