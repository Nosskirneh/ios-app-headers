//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPSessionObserver-Protocol.h"
#import "SPTIncognitoModeHandlerObserver-Protocol.h"

@class NSString, SPCore, SPSession, SPTIncognitoModeHandler, SPTNetworkConnectivityController;
@protocol SPTAlertController, SPTLogCenter;

@interface SPTSessionObserver : NSObject <SPSessionObserver, SPTIncognitoModeHandlerObserver>
{
    SPTNetworkConnectivityController *_networkConnectivityController;
    SPCore *_core;
    SPSession *_session;
    SPTIncognitoModeHandler *_incognitoModeHandler;
    id <SPTLogCenter> _logCenter;
    id <SPTAlertController> _alertController;
}

@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(nonatomic) __weak SPTIncognitoModeHandler *incognitoModeHandler; // @synthesize incognitoModeHandler=_incognitoModeHandler;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
@property(nonatomic) __weak SPCore *core; // @synthesize core=_core;
@property(retain, nonatomic) SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
- (void).cxx_destruct;
- (void)syncErrorNotEnoughSpaceOnDevice;
- (void)logOfflineErrorAlertUIImpressionWithTargetUri:(id)arg1 impressionType:(id)arg2;
- (void)session:(id)arg1 offlineSyncError:(id)arg2;
- (void)session:(id)arg1 autoUpdateWithURL:(id)arg2;
- (void)incognitoModeHandler:(id)arg1 incognitoModeChangedByTimeout:(_Bool)arg2;
- (void)tryToDisableOfflineMode;
- (void)applicationStateChanged:(id)arg1;
- (void)updateApplicationState;
- (void)dealloc;
- (id)initWithCore:(id)arg1 session:(id)arg2 incognitoModeHandler:(id)arg3 withLogCenter:(id)arg4 networkConnectivityController:(id)arg5 alertController:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

