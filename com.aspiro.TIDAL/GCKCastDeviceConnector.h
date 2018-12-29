//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GCKCastChannelMessageSink-Protocol.h"
#import "GCKCastSecureSocketDelegate-Protocol.h"
#import "GCKDeviceAuthChannelDelegate-Protocol.h"
#import "GCKGuestModePairingViewControllerDelegate-Protocol.h"
#import "GCKHeartbeatChannelDelegate-Protocol.h"
#import "GCKProximityInfoChannelDelegate-Protocol.h"

@class GCKCastSecureSocket, GCKClientCertificate, GCKConnectionControlChannel, GCKDevice, GCKDeviceAuthChannel, GCKError, GCKGuestModePairingViewController, GCKHeartbeatChannel, GCKProximityInfoChannel, GCKReconnectStrategy, GNSAudioModem, NSMutableDictionary, NSString, NSTimer;
@protocol GCKCastDeviceConnectorDelegate, GNSAudioModemOperation;

@interface GCKCastDeviceConnector : NSObject <GCKGuestModePairingViewControllerDelegate, GCKProximityInfoChannelDelegate, GCKCastSecureSocketDelegate, GCKDeviceAuthChannelDelegate, GCKHeartbeatChannelDelegate, GCKCastChannelMessageSink>
{
    NSString *_clientPackageName;
    NSString *_sourceID;
    NSMutableDictionary *_channels;
    GCKCastSecureSocket *_socket;
    long long _nextRequestID;
    double _inactivityTimeout;
    _Bool _isRegisteredForAppStateNotifications;
    _Bool _ignoreAppStateNotifications;
    GCKError *_disconnectionError;
    NSTimer *_reconnectTimer;
    _Bool _wasConnected;
    _Bool _connectionSuspended;
    _Bool _reconnectAfterDisconnected;
    GCKClientCertificate *_clientCertificate;
    GCKReconnectStrategy *_reconnectStrategy;
    GCKGuestModePairingViewController *_guestModeDialog;
    GNSAudioModem *_audioModem;
    id <GNSAudioModemOperation> _audioTokenListenOperation;
    _Bool _isReconnecting;
    long long _connectionState;
    GCKDevice *_device;
    id <GCKCastDeviceConnectorDelegate> _delegate;
    NSString *_currentDestinationID;
    GCKConnectionControlChannel *_connectionControlChannel;
    GCKDeviceAuthChannel *_deviceAuthChannel;
    GCKHeartbeatChannel *_heartbeatChannel;
    GCKProximityInfoChannel *_proximityInfoChannel;
}

@property(retain, nonatomic) GCKProximityInfoChannel *proximityInfoChannel; // @synthesize proximityInfoChannel=_proximityInfoChannel;
@property(retain, nonatomic) GCKHeartbeatChannel *heartbeatChannel; // @synthesize heartbeatChannel=_heartbeatChannel;
@property(retain, nonatomic) GCKDeviceAuthChannel *deviceAuthChannel; // @synthesize deviceAuthChannel=_deviceAuthChannel;
@property(retain, nonatomic) GCKConnectionControlChannel *connectionControlChannel; // @synthesize connectionControlChannel=_connectionControlChannel;
@property(copy, nonatomic) NSString *currentDestinationID; // @synthesize currentDestinationID=_currentDestinationID;
@property(nonatomic) __weak id <GCKCastDeviceConnectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) GCKDevice *device; // @synthesize device=_device;
@property(nonatomic) _Bool isReconnecting; // @synthesize isReconnecting=_isReconnecting;
@property(nonatomic) long long connectionState; // @synthesize connectionState=_connectionState;
- (void).cxx_destruct;
- (void)onCancelled;
- (void)onListenStopped;
- (void)continueListenStarted;
- (void)onListenStarted;
- (void)onPINAvailable:(id)arg1;
- (void)notifyDidDisconnectOnAppBackgrounded;
- (void)notifyDidDisconnectWithError:(id)arg1 willTryToReconnect:(_Bool)arg2;
- (void)notifyDidDisconnect;
- (void)notifyDidFailToConnectWithError:(id)arg1 willTryToReconnect:(_Bool)arg2;
- (void)notifyDidConnect;
- (void)notifyWillConnect;
- (void)proximityInfoChannel:(id)arg1 didFailToReceiveProximityInfoWithError:(id)arg2;
- (void)proximityInfoChannel:(id)arg1 didReceiveProximityInfo:(id)arg2;
- (void)heartbeatChannelDidTimeout:(id)arg1;
- (void)deviceAuthChannel:(id)arg1 didFailToAuthenticateWithError:(id)arg2;
- (void)deviceAuthChannelDidAuthenticate:(id)arg1;
- (void)handleConnectionError:(id)arg1;
- (void)castSocket:(id)arg1 didDisconnectWithError:(id)arg2;
- (void)castSocket:(id)arg1 didReceiveMessage:(id)arg2;
- (void)castSocket:(id)arg1 didFailToConnectWithError:(id)arg2;
- (void)castSocket:(id)arg1 didConnectWithPeerSecTrust:(struct __SecTrust *)arg2;
- (void)finishConnecting;
- (long long)generateRequestID;
- (long long)sendBinaryMessage:(id)arg1 withNamespace:(id)arg2;
- (long long)sendBinaryMessage:(id)arg1 withNamespace:(id)arg2 toDestinationID:(id)arg3;
- (long long)sendTextMessage:(id)arg1 withNamespace:(id)arg2;
- (long long)sendTextMessage:(id)arg1 withNamespace:(id)arg2 toDestinationID:(id)arg3;
- (void)clearReconnectState;
- (void)reconnectTimerDidFire:(id)arg1;
- (_Bool)scheduleReconnect;
@property(nonatomic) double reconnectTimeout;
- (_Bool)isInForeground;
- (_Bool)isInBackground;
- (_Bool)disconnectFromCurrentDestination;
- (_Bool)connectToDestination:(id)arg1 connectionType:(long long)arg2;
- (void)disconnectNonInternalChannels;
- (void)disconnectChannel:(id)arg1;
- (void)connectChannelsForNamespaces:(id)arg1;
- (void)connectChannel:(id)arg1;
- (void)disconnectInternalUnchecked;
- (void)disconnectWithError:(id)arg1;
- (void)showPairingDialog;
- (void)connectVisibleDeviceWithPin:(id)arg1 pinType:(int)arg2;
- (void)connectGuestModeWithPin:(id)arg1 pinType:(int)arg2;
- (void)connectInternalUnchecked;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)unregisterForAppStateNotifications;
- (void)registerForAppStateNotifications;
- (id)createConnectionControlChannel;
- (id)createDeviceAuthChannelForDevice:(id)arg1;
- (id)createSocket;
- (long long)sendMessageWithNamespace:(id)arg1 toDestinationID:(id)arg2 stringPayload:(id)arg3 binaryPayload:(id)arg4;
- (_Bool)removeChannel:(id)arg1;
- (_Bool)addChannel:(id)arg1 autoConnect:(_Bool)arg2;
- (void)disconnect;
- (void)connect;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 clientPackageName:(id)arg2 ignoreAppStateNotifications:(_Bool)arg3 reconnectStrategy:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
