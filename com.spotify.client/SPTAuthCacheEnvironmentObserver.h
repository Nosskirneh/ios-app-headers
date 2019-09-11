//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAuthTestManagerObserver-Protocol.h"
#import "SPTNetworkConnectivityControllerObserver-Protocol.h"

@class NSNotificationCenter, NSString, SPTAuthCache, SPTNetworkConnectivityController;
@protocol SPTAuthController, SPTAuthTestManager;

@interface SPTAuthCacheEnvironmentObserver : NSObject <SPTNetworkConnectivityControllerObserver, SPTAuthTestManagerObserver>
{
    SPTNetworkConnectivityController *_networkConnectivityController;
    id <SPTAuthController> _authController;
    SPTAuthCache *_authCache;
    id <SPTAuthTestManager> _testManager;
    NSNotificationCenter *_notificationCenter;
}

@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(nonatomic) __weak id <SPTAuthTestManager> testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak SPTAuthCache *authCache; // @synthesize authCache=_authCache;
@property(nonatomic) __weak id <SPTAuthController> authController; // @synthesize authController=_authController;
@property(nonatomic) __weak SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
- (void).cxx_destruct;
- (void)authTestManager:(id)arg1 didUpdateEnabledState:(_Bool)arg2;
- (void)networkConnectivityController:(id)arg1 didChangeConnectionType:(long long)arg2 oldConnectionType:(long long)arg3;
- (void)networkConnectivityController:(id)arg1 didChangeForcedOffline:(_Bool)arg2;
- (void)didReceiveWillLogOutNotification:(id)arg1;
- (void)dealloc;
- (void)authenticateCachedEntities:(id)arg1;
- (id)initWithCache:(id)arg1 authController:(id)arg2 networkConnectivityController:(id)arg3 testManager:(id)arg4 notificationCenter:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

