//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPSessionObserver-Protocol.h"
#import "SPTOfflineModeStateObserver-Protocol.h"
#import "SPTThirdPartyTrackerBroadcaster-Protocol.h"

@class NSMutableSet, NSString, SPCore, SPSession;
@protocol SPTOfflineModeState;

@interface SPTTrackerBroadcaster : NSObject <SPSessionObserver, SPTOfflineModeStateObserver, SPTThirdPartyTrackerBroadcaster>
{
    _Bool _enableUserTracker;
    _Bool _userLogin;
    NSString *trackerUserID;
    NSMutableSet *_trackers;
    id <SPTOfflineModeState> _offlineModeState;
    SPSession *_session;
    SPCore *_core;
    long long _lastLoginMode;
}

@property(nonatomic) long long lastLoginMode; // @synthesize lastLoginMode=_lastLoginMode;
@property(nonatomic) __weak SPCore *core; // @synthesize core=_core;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) NSMutableSet *trackers; // @synthesize trackers=_trackers;
@property(nonatomic, getter=didUserLogin) _Bool userLogin; // @synthesize userLogin=_userLogin;
@property(readonly, nonatomic) NSString *trackerUserID; // @synthesize trackerUserID;
@property(readonly, nonatomic, getter=shouldEnableUserTracker) _Bool enableUserTracker; // @synthesize enableUserTracker=_enableUserTracker;
- (void).cxx_destruct;
- (void)trackAppWillOpenURL:(id)arg1;
- (void)sessionLoginModeChanged:(id)arg1;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)setOfflineMode:(_Bool)arg1;
- (void)userDidReconnect;
- (void)userWillLogout;
- (void)userDidLogout;
- (void)userDidLoginWithProductState:(id)arg1;
- (void)handleNotificationWithResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleNotification:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setPushNotificationsDeviceToken:(id)arg1;
- (void)didFailToRegisterForRemoteNotificationsWithError:(id)arg1;
- (void)handleIncomingRemoteNotification:(id)arg1;
- (void)coreSessionChanged:(id)arg1;
- (void)trackAppDidLaunch;
- (void)removeTracker:(id)arg1;
- (void)addTracker:(id)arg1;
- (void)removeSessionObservers;
- (void)dealloc;
- (id)initWithTrackers:(id)arg1 core:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

