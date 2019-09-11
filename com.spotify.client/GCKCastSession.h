//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKSession.h"

#import "GCKCastDeviceControllerInternalDelegate-Protocol.h"
#import "GCKDiscoveryManagerListener-Protocol.h"

@class GCKAnalyticsEventLogger, GCKApplicationMetadata, GCKBWeakListenerList, GCKCastDeviceController, GCKCastOptions, GCKDevice, GCKDiscoveryManager, GCKError, GCKPlaybackSession, GCKSessionEndpoint, NSDictionary, NSMutableArray, NSSet, NSString;

@interface GCKCastSession : GCKSession <GCKCastDeviceControllerInternalDelegate, GCKDiscoveryManagerListener>
{
    GCKAnalyticsEventLogger *_analyticsEventLogger;
    GCKDiscoveryManager *_discoveryManager;
    GCKCastOptions *_castOptions;
    NSMutableArray *_remoteClients;
    GCKBWeakListenerList *_deviceStatusListenerList;
    NSSet *_namespaces;
    GCKError *_sessionError;
    NSString *_sessionIDToJoin;
    _Bool _joinCurrentApp;
    GCKDevice *_pendingEndpointDevice;
    GCKPlaybackSession *_lastValidPlaybackSession;
    NSDictionary *_transferableDevices;
    NSDictionary *_expandableDevices;
    NSString *_applicationID;
    long long _sessionType;
    GCKCastDeviceController *_deviceController;
    long long _state;
    GCKSessionEndpoint *_endpoint;
    GCKDevice *_oldDevice;
}

+ (id)selectApplicationIDFromCastOptions:(id)arg1 sessionOptions:(struct NSDictionary *)arg2;
@property(readonly, nonatomic) GCKDevice *oldDevice; // @synthesize oldDevice=_oldDevice;
@property(readonly, nonatomic) GCKSessionEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) GCKCastDeviceController *deviceController; // @synthesize deviceController=_deviceController;
@property(nonatomic) long long sessionType; // @synthesize sessionType=_sessionType;
@property(readonly, nonatomic) NSString *applicationID; // @synthesize applicationID=_applicationID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)notifyDidUpdateTransferableDevices:(id)arg1;
- (void)notifyDidUpdateExpandableDevices:(id)arg1;
- (void)didUpdateDeviceList;
- (void)deviceController:(id)arg1 failedToMoveToDevices:(id)arg2 error:(id)arg3;
- (void)deviceController:(id)arg1 didUpdateToEndpoint:(id)arg2 withFailedToMoveEndpointDeviceIDs:(id)arg3;
- (void)deviceController:(id)arg1 didUpdateDevice:(id)arg2;
- (void)deviceController:(id)arg1 didRemoveMultizoneDeviceWithID:(id)arg2;
- (void)deviceController:(id)arg1 didUpdateMultizoneDevice:(id)arg2;
- (void)deviceController:(id)arg1 didAddMultizoneDevice:(id)arg2;
- (void)deviceController:(id)arg1 didReceiveMultizoneStatus:(id)arg2;
- (void)deviceController:(id)arg1 didReceiveApplicationStatusText:(id)arg2;
- (void)deviceController:(id)arg1 didReceiveApplicationMetadata:(id)arg2;
- (void)deviceController:(id)arg1 didReceiveStandbyStatus:(long long)arg2;
- (void)deviceController:(id)arg1 didReceiveActiveInputStatus:(long long)arg2;
- (void)deviceController:(id)arg1 volumeDidChangeToLevel:(float)arg2 isMuted:(_Bool)arg3;
- (void)deviceController:(id)arg1 didDisconnectFromApplicationWithError:(id)arg2;
- (void)deviceController:(id)arg1 didFailToConnectToApplicationWithError:(id)arg2;
- (void)deviceController:(id)arg1 didConnectToApplication:(id)arg2 sessionID:(id)arg3 launchedApplication:(_Bool)arg4;
- (void)deviceController:(id)arg1 didResumeConnectionWithRejoin:(_Bool)arg2;
- (void)deviceController:(id)arg1 didDisconnectWithError:(id)arg2 willTryToReconnect:(_Bool)arg3;
- (void)deviceController:(id)arg1 didFailToConnectWithError:(id)arg2;
- (void)deviceControllerDidConnect:(id)arg1;
- (void)removeDeviceStatusListener:(id)arg1;
- (void)addDeviceStatusListener:(id)arg1;
- (void)disconnectRemoteClients;
- (void)reconnectRemoteClients;
- (void)connectRemoteClientsForNamespaces:(id)arg1;
- (_Bool)removeChannel:(id)arg1;
- (_Bool)addChannel:(id)arg1;
- (id)traits;
- (float)deviceVolumeIncrement;
- (id)device;
@property(readonly, copy, nonatomic) GCKApplicationMetadata *applicationMetadata;
@property(readonly, nonatomic) long long standbyStatus;
@property(readonly, nonatomic) long long activeInputStatus;
- (void)startMovingToDevice:(id)arg1;
- (void)connectToNewDevice:(id)arg1;
- (void)notifyDidStartWithSessionID:(id)arg1;
- (id)joinOptionsFromSessionOptions;
- (void)finishResuming:(id)arg1;
- (void)startOrResumeWithSessionID:(id)arg1 applicationID:(id)arg2;
- (id)buildDeviceControllerWithDevice:(id)arg1 clientPackageName:(id)arg2 reconnectStrategy:(id)arg3;
- (Class)findClientTypeForNamespace:(id)arg1;
- (id)findClientInstanceOfType:(Class)arg1;
- (id)deviceStatuses;
- (id)connectedCastDevices;
- (void)updateTransferableDevices;
- (id)transferableDevices;
- (void)updateExpandableDevices;
- (void)updateStreamTransferLists;
- (id)expandableDevices;
- (id)remoteMediaClient;
- (id)updateSessionToDevices:(id)arg1;
- (id)requestMultizoneStatus;
- (id)setDeviceMuted:(_Bool)arg1 forMultizoneDevice:(id)arg2;
- (id)setDeviceVolume:(float)arg1 forMultizoneDevice:(id)arg2;
- (id)setDeviceMuted:(_Bool)arg1;
- (id)setDeviceVolume:(float)arg1;
- (void)suspendWithReason:(long long)arg1;
- (void)endWithAction:(long long)arg1;
- (void)joinAnyApplication;
- (void)resume;
- (void)start;
- (id)initWithDevice:(id)arg1 sessionID:(id)arg2 sessionOptions:(struct NSDictionary *)arg3 castOptions:(id)arg4 analyticsEventLogger:(id)arg5 discoveryManager:(id)arg6;
- (id)initWithDevice:(id)arg1 sessionID:(id)arg2 sessionOptions:(struct NSDictionary *)arg3 castOptions:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

