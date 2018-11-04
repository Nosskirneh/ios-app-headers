//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTNetworkConnectivityControllerObserver.h"
#import "SPTOfflineModeStateObserver.h"

@class NSString, SPTNetworkConnectivityController;

@interface SPTCanvasNetworkStateObserver : NSObject <SPTNetworkConnectivityControllerObserver, SPTOfflineModeStateObserver>
{
    _Bool _enabled;
    id <SPTCanvasNetworkStateObserverDelegate> _delegate;
    SPTNetworkConnectivityController *_connectivityController;
    id <SPTOfflineModeState> _offlineNotifier;
}

@property(readonly, nonatomic) __weak id <SPTOfflineModeState> offlineNotifier; // @synthesize offlineNotifier=_offlineNotifier;
@property(readonly, nonatomic) SPTNetworkConnectivityController *connectivityController; // @synthesize connectivityController=_connectivityController;
@property(nonatomic) __weak id <SPTCanvasNetworkStateObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)networkConnectivityController:(id)arg1 didChangeConnectionType:(long long)arg2 oldConnectionType:(long long)arg3;
- (void)networkConnectivityController:(id)arg1 didChangeAllowSyncOver3G:(_Bool)arg2;
- (void)networkConnectivityController:(id)arg1 didChangeForcedOffline:(_Bool)arg2;
- (void)dealloc;
- (void)removeObservers;
- (void)addObservers;
- (id)initWithConnectivityController:(id)arg1 offlineNotifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

