//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GCKCastDeviceConnectorDelegate-Protocol.h"
#import "GCKDeviceSetupChannelDelegate-Protocol.h"
#import "GCKDiscoveryChannelDelegate-Protocol.h"
#import "GCKMultizoneControlChannelDelegate-Protocol.h"
#import "GCKReceiverControlChannelDelegate-Protocol.h"

@class GCKApplicationMetadata, GCKCastDeviceConnector, GCKDevice, GCKDeviceSetupChannel, GCKDiscoveryChannel, GCKJoinOptions, GCKLaunchOptions, GCKMultizoneControlChannel, GCKReceiverControlChannel, GCKRequest, NSMutableDictionary, NSString;
@protocol GCKCastDeviceControllerDelegate;

@interface GCKCastDeviceController : NSObject <GCKCastDeviceConnectorDelegate, GCKReceiverControlChannelDelegate, GCKDeviceSetupChannelDelegate, GCKMultizoneControlChannelDelegate, GCKDiscoveryChannelDelegate>
{
    GCKCastDeviceConnector *_connector;
    GCKReceiverControlChannel *_receiverControlChannel;
    GCKDeviceSetupChannel *_deviceSetupChannel;
    GCKMultizoneControlChannel *_multizoneControlChannel;
    GCKDiscoveryChannel *_discoveryChannel;
    NSString *_applicationIDToLaunch;
    NSString *_applicationIDToJoin;
    NSString *_sessionIDToJoin;
    GCKLaunchOptions *_launchOptionsIfJoinFails;
    GCKJoinOptions *_joinOptions;
    NSString *_pausedAppID;
    NSString *_pausedSessionID;
    long long _statusRequestID;
    long long _loggingSessionID;
    _Bool _disableAnalyticsLogging;
    NSMutableDictionary *_requests;
    _Bool _shouldLaunchIfJoinFails;
    _Bool _suspensionNotified;
    long long _stopAppRequestID;
    GCKRequest *_stopRequest;
    long long _joinAppRequestID;
    GCKRequest *_joinRequest;
    long long _launchAppRequestID;
    GCKRequest *_launchRequest;
    _Bool _isReconnecting;
    _Bool _deviceMuted;
    float _deviceVolume;
    long long _applicationConnectionState;
    id <GCKCastDeviceControllerDelegate> _delegate;
    long long _activeInputStatus;
    long long _standbyStatus;
    NSString *_applicationSessionID;
    GCKApplicationMetadata *_applicationMetadata;
    NSString *_applicationStatusText;
    long long _hashedDeviceID;
}

@property(readonly, nonatomic) long long hashedDeviceID; // @synthesize hashedDeviceID=_hashedDeviceID;
@property(copy, nonatomic) NSString *applicationStatusText; // @synthesize applicationStatusText=_applicationStatusText;
@property(copy, nonatomic) GCKApplicationMetadata *applicationMetadata; // @synthesize applicationMetadata=_applicationMetadata;
@property(copy, nonatomic) NSString *applicationSessionID; // @synthesize applicationSessionID=_applicationSessionID;
@property(nonatomic) long long standbyStatus; // @synthesize standbyStatus=_standbyStatus;
@property(nonatomic) long long activeInputStatus; // @synthesize activeInputStatus=_activeInputStatus;
@property(nonatomic) _Bool deviceMuted; // @synthesize deviceMuted=_deviceMuted;
@property(nonatomic) float deviceVolume; // @synthesize deviceVolume=_deviceVolume;
@property(nonatomic) __weak id <GCKCastDeviceControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isReconnecting; // @synthesize isReconnecting=_isReconnecting;
@property(nonatomic) long long applicationConnectionState; // @synthesize applicationConnectionState=_applicationConnectionState;
- (void).cxx_destruct;
- (void)notifyDidReceiveAppDeviceID:(id)arg1 certificate:(id)arg2 signedData:(id)arg3 forApplicationID:(id)arg4;
- (void)notifyDidRemoveMultizoneDevice:(id)arg1;
- (void)notifyDidUpdateMultizoneDevice:(id)arg1;
- (void)notifyDidAddMultizoneDevice:(id)arg1;
- (void)notifyDidReceiveMultizoneStatus:(id)arg1;
- (void)notifyDidReceiveDeviceInformation:(id)arg1;
- (void)notifyDidReceiveDeviceConfiguration:(id)arg1;
- (void)notifyDidUpdateStatus;
- (void)notifyDidReceiveAppAvailability:(id)arg1;
- (void)notifyDidReceiveStandbyStatus:(long long)arg1;
- (void)notifyDidReceiveActiveInputStatus:(long long)arg1;
- (void)notifyVolumeDidChangeToLevel:(float)arg1 isMuted:(_Bool)arg2;
- (void)notifyDidReceiveApplicationStatusText:(id)arg1;
- (void)notifyDidReceiveApplicationMetadata:(id)arg1;
- (void)notifyDidDisconnectFromApplicationWithError:(id)arg1;
- (void)notifyDidFailToConnectToApplicationWithError:(id)arg1;
- (void)notifyDidConnectToApplication:(id)arg1 withSessionID:(id)arg2 launchedApplication:(_Bool)arg3;
- (void)notifyConnectionResumedWithJoinedState:(_Bool)arg1;
- (void)notifyDidPairWithGuestModeDevice:(id)arg1;
- (void)notifyConnectionSuspendedWithReason:(long long)arg1;
- (void)notifyDidDisconnectWithError:(id)arg1;
- (void)notifyDidFailToConnectWithError:(id)arg1;
- (void)notifyDidConnect;
- (void)multizoneControlChannel:(id)arg1 didUpdateDevice:(id)arg2;
- (void)multizoneControlChannel:(id)arg1 didRemoveDeviceWithID:(id)arg2;
- (void)multizoneControlChannel:(id)arg1 didAddDevice:(id)arg2;
- (void)multizoneControlChannel:(id)arg1 requestDidFailWithID:(long long)arg2 error:(id)arg3;
- (void)multizoneControlChannel:(id)arg1 didReceiveMultizoneStatus:(id)arg2 requestID:(long long)arg3;
- (void)deviceDiscoveryChannel:(id)arg1 didFailToReceiveDeviceConfigurationWithID:(long long)arg2 error:(id)arg3;
- (void)deviceDiscoveryChannel:(id)arg1 didReceiveDeviceInformation:(id)arg2 requestID:(long long)arg3;
- (void)deviceSetupChannel:(id)arg1 requestWithID:(long long)arg2 didFailWithError:(id)arg3;
- (void)deviceSetupChannel:(id)arg1 didApplySetupOptionsForRequestID:(long long)arg2;
- (void)deviceSetupChannel:(id)arg1 didReceiveAppDeviceID:(id)arg2 certificate:(id)arg3 signedData:(id)arg4 forAppID:(id)arg5 requestID:(long long)arg6;
- (void)deviceSetupChannel:(id)arg1 didReceiveDeviceConfiguration:(id)arg2 requestID:(long long)arg3;
- (void)receiverControlChannel:(id)arg1 didReplaceRequestWithID:(long long)arg2;
- (void)receiverControlChannel:(id)arg1 requestDidFailWithID:(long long)arg2 error:(id)arg3;
- (void)receiverControlChannel:(id)arg1 didReceiveAppAvailability:(id)arg2 requestID:(long long)arg3;
- (void)receiverControlChannel:(id)arg1 didReceiveActiveInputStatus:(long long)arg2;
- (void)receiverControlChannel:(id)arg1 volumeDidChangeToLevel:(float)arg2 isMuted:(_Bool)arg3;
- (void)receiverControlChannel:(id)arg1 didReceiveReceiverStatus:(id)arg2 applicationStatus:(id)arg3 requestID:(long long)arg4;
- (void)receiverControlChannelDidStopApplication:(id)arg1;
- (void)receiverControlChannel:(id)arg1 didFailToLaunchApplicationWithError:(id)arg2;
- (void)receiverControlChannel:(id)arg1 didLaunchApplication:(id)arg2;
- (void)deviceConnector:(id)arg1 didPairWithGuestModeDevice:(id)arg2;
- (void)deviceConnectorDidDisconnectOnAppBackgrounded:(id)arg1;
- (void)deviceConnector:(id)arg1 didDisconnectWithError:(id)arg2 willTryToReconnect:(_Bool)arg3;
- (void)deviceConnectorDidDisconnect:(id)arg1;
- (void)deviceConnector:(id)arg1 didFailToConnectWithError:(id)arg2 willTryToReconnect:(_Bool)arg3;
- (void)deviceConnectorDidConnect:(id)arg1;
- (void)deviceConnectorWillConnect:(id)arg1;
- (id)createDiscoveryChannel;
- (id)createMultizoneControlChannel;
- (id)createDeviceSetupChannel;
- (id)createReceiverControlChannel;
- (id)applyDeviceSetupOptions:(id)arg1;
- (id)requestAppDeviceIDForApplicationID:(id)arg1;
- (id)setDeviceMuted:(_Bool)arg1 forMultizoneDevice:(id)arg2;
- (id)setDeviceVolume:(float)arg1 forMultizoneDevice:(id)arg2;
- (id)requestMultizoneStatus;
- (id)changeMuted:(_Bool)arg1;
- (id)changeVolume:(float)arg1;
- (id)stopApplicationWithSessionID:(id)arg1;
- (id)stopApplication;
- (_Bool)leaveApplication;
- (id)joinApplicationInternalUnchecked:(id)arg1 sessionID:(id)arg2 joinOptions:(id)arg3;
- (id)joinApplication:(id)arg1 sessionID:(id)arg2 joinOptions:(id)arg3;
- (id)joinApplication:(id)arg1 sessionID:(id)arg2;
- (id)joinApplication:(id)arg1;
- (id)launchApplication:(id)arg1 withLaunchOptions:(id)arg2;
- (id)launchApplication:(id)arg1;
- (_Bool)updateApplicationMetadata:(id)arg1;
- (void)clearDeviceState;
- (void)disconnectFromApplicationAndNotifyWithError:(id)arg1;
- (void)connectAndNotifyDidConnectToApplication:(id)arg1 launchedApplication:(_Bool)arg2;
- (_Bool)connectToApplication:(id)arg1 connectionType:(long long)arg2;
- (_Bool)clearStopStateWithError:(id)arg1;
- (_Bool)clearStopState;
- (_Bool)clearJoinStateWithError:(id)arg1;
- (_Bool)clearJoinState;
- (_Bool)clearLaunchStateWithError:(id)arg1;
- (_Bool)clearLaunchState;
- (id)startDiscoveryChannelRequestUsingBlock:(CDUnknownBlockType)arg1;
- (id)startMultizoneControlChannelRequestUsingBlock:(CDUnknownBlockType)arg1;
- (id)startDeviceSetupChannelRequestUsingBlock:(CDUnknownBlockType)arg1;
- (id)startReceiverControlChannelRequestUsingBlock:(CDUnknownBlockType)arg1;
- (long long)generateRequestID;
- (id)requestAvailabilityForAppIDs:(id)arg1;
- (id)requestDeviceInformation;
- (id)requestDeviceConfiguration;
- (id)requestDeviceStatus;
- (_Bool)removeChannel:(id)arg1;
- (_Bool)addChannel:(id)arg1;
- (void)disconnectWithLeave:(_Bool)arg1;
- (void)disconnect;
- (void)connect;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) GCKDevice *device;
@property(nonatomic) double reconnectTimeout;
@property(readonly, nonatomic) long long connectionState;
- (void)dealloc;
- (id)initWithConnector:(id)arg1;
- (id)initWithDevice:(id)arg1 clientPackageName:(id)arg2 ignoreAppStateNotifications:(_Bool)arg3 reconnectStrategy:(id)arg4 disableAnalyticsLogging:(_Bool)arg5;
- (id)initWithDevice:(id)arg1 clientPackageName:(id)arg2 ignoreAppStateNotifications:(_Bool)arg3 reconnectStrategy:(id)arg4;
- (id)initWithDevice:(id)arg1 clientPackageName:(id)arg2 ignoreAppStateNotifications:(_Bool)arg3;
- (id)initWithDevice:(id)arg1 clientPackageName:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
