//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAccessoryStateObserver.h"
#import "SPTAdContextManagerObserver.h"
#import "SPTAdFocusManagerObserver.h"
#import "SPTAdMovementObserver.h"

@class NSString, SPTAdContextManager, SPTAdCosmosBridge, SPTAdFocusManager, SPTAdMovementLogger;

@interface SPTAdStateLogger : NSObject <SPTAdContextManagerObserver, SPTAccessoryStateObserver, SPTAdFocusManagerObserver, SPTAdMovementObserver>
{
    SPTAdContextManager *_adContextManager;
    SPTAdCosmosBridge *_cosmosBridge;
    id <SPTAccessoryStateManager> _accessoryStateManager;
    SPTAdFocusManager *_adFocusManager;
    SPTAdMovementLogger *_movementLogger;
}

@property(nonatomic) __weak SPTAdMovementLogger *movementLogger; // @synthesize movementLogger=_movementLogger;
@property(nonatomic) __weak SPTAdFocusManager *adFocusManager; // @synthesize adFocusManager=_adFocusManager;
@property(nonatomic) __weak id <SPTAccessoryStateManager> accessoryStateManager; // @synthesize accessoryStateManager=_accessoryStateManager;
@property(nonatomic) __weak SPTAdCosmosBridge *cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
@property(nonatomic) __weak SPTAdContextManager *adContextManager; // @synthesize adContextManager=_adContextManager;
- (void).cxx_destruct;
- (void)passAccessoryStateToCosmos;
- (id)convertSPTAccessoryToJsonWithObj:(id)arg1;
- (void)didReceiveDeviceMotionUpdate:(_Bool)arg1;
- (void)accessoryStateManager:(id)arg1 accessoryDidDisconnect:(id)arg2;
- (void)accessoryStateManager:(id)arg1 accessoryDidConnect:(id)arg2;
- (void)adFocusManagerDidResignActive:(id)arg1;
- (void)adFocusManagerDidBecomeActive:(id)arg1;
- (void)adContextManager:(id)arg1 didChangeNavigationContext:(id)arg2 fromNavigationContext:(id)arg3;
- (void)removeDeviceMovementObserver;
- (void)addDeviceMovementObserver;
- (void)removeActiveConnectedDeviceChangeObserver;
- (void)addActiveConnectedDeviceChangeObserver;
- (void)removeFocusChangeObserver;
- (void)addFocusChangeObserver;
- (void)removeViewURIChangeObserver;
- (void)addViewURIChangeObserver;
- (void)dealloc;
- (void)removeStateChangeObservers;
- (void)addStateChangeObservers;
- (void)initState;
- (void)stopMonitoringStateChanges;
- (void)startMonitoringStateChanges;
- (id)initWithContextManager:(id)arg1 accessoryStateManager:(id)arg2 adFocusManager:(id)arg3 cosmosBridge:(id)arg4 movementLogger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
