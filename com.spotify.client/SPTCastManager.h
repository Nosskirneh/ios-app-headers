//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GCKDiscoveryManagerListener-Protocol.h"
#import "GCKLoggerDelegate-Protocol.h"
#import "GCKSessionManagerListener-Protocol.h"
#import "NSCopying-Protocol.h"
#import "SPTCastCustomChannelDelegate-Protocol.h"
#import "SPTConnectLoginStateObserver-Protocol.h"
#import "SPTGaiaDeviceStateManagerObserver-Protocol.h"

@class GCKCastContext, GCKDevice, NSDate, NSHashTable, NSMutableArray, NSString, SPTCastCustomChannel, SPTCastReceiverAppIDManager, SPTGaiaDeviceManager;
@protocol SPTProductState;

@interface SPTCastManager : NSObject <GCKDiscoveryManagerListener, GCKSessionManagerListener, GCKLoggerDelegate, SPTConnectLoginStateObserver, SPTCastCustomChannelDelegate, SPTGaiaDeviceStateManagerObserver, NSCopying>
{
    float _volume;
    id <SPTProductState> _productState;
    GCKCastContext *_castContext;
    SPTGaiaDeviceManager *_deviceManager;
    SPTCastReceiverAppIDManager *_receiverAppManager;
    GCKDevice *_deviceToConnectAfterDisconnection;
    SPTCastCustomChannel *_castCustomChannel;
    NSHashTable *_observers;
    NSDate *_lastVolumeSetDate;
    NSMutableArray *_devices;
}

+ (id)parseResponse:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSMutableArray *devices; // @synthesize devices=_devices;
@property(retain, nonatomic) NSDate *lastVolumeSetDate; // @synthesize lastVolumeSetDate=_lastVolumeSetDate;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) SPTCastCustomChannel *castCustomChannel; // @synthesize castCustomChannel=_castCustomChannel;
@property(retain, nonatomic) GCKDevice *deviceToConnectAfterDisconnection; // @synthesize deviceToConnectAfterDisconnection=_deviceToConnectAfterDisconnection;
@property(retain, nonatomic) SPTCastReceiverAppIDManager *receiverAppManager; // @synthesize receiverAppManager=_receiverAppManager;
@property(retain, nonatomic) SPTGaiaDeviceManager *deviceManager; // @synthesize deviceManager=_deviceManager;
@property(retain, nonatomic) GCKCastContext *castContext; // @synthesize castContext=_castContext;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(nonatomic) float volume; // @synthesize volume=_volume;
- (void).cxx_destruct;
- (void)disconnectCastFromDevice;
@property(readonly, nonatomic) GCKDevice *connectedCastDevice;
- (void)connectToDevice:(id)arg1;
- (id)castDeviceWithIdentifier:(id)arg1;
- (void)connectToCastDeviceWithId:(id)arg1;
- (void)notifyObserversConnectivityUpdated;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)isCastDeviceConnected:(id)arg1;
- (_Bool)isLoginAlreadyPerformed;
- (id)prependCast:(id)arg1;
- (_Bool)isGaiaDevice:(id)arg1 sameAsCastDevice:(id)arg2;
- (void)deviceStateManager:(id)arg1 device:(id)arg2 volumeDidChange:(float)arg3;
- (void)deviceStateManager:(id)arg1 activeDeviceDidChange:(id)arg2;
- (void)loadDummyMedia;
- (id)castDiscoveredDeviceFromGCKDevice:(id)arg1;
- (void)removeDeviceFromCore:(id)arg1;
- (void)injectDeviceToCore:(id)arg1;
- (void)removeCastDevice:(id)arg1;
- (void)addCastDevice:(id)arg1;
- (void)connectLogout:(id)arg1;
- (void)connectLoginStatusDidChange:(id)arg1 username:(id)arg2 blob:(id)arg3 clientKey:(id)arg4 tokenType:(id)arg5;
- (void)logFromFunction:(const char *)arg1 message:(id)arg2;
- (void)logMessage:(id)arg1 fromFunction:(id)arg2;
- (void)destroyMessageChannel;
- (void)createMessageChannel;
- (void)createChannels;
- (void)sessionManager:(id)arg1 didResumeCastSession:(id)arg2;
- (void)sessionManager:(id)arg1 didSuspendCastSession:(id)arg2 withReason:(long long)arg3;
- (void)sessionManager:(id)arg1 didEndCastSession:(id)arg2 withError:(id)arg3;
- (void)sessionManager:(id)arg1 willEndSession:(id)arg2;
- (void)sessionManager:(id)arg1 didFailToStartCastSession:(id)arg2 withError:(id)arg3;
- (void)sessionManager:(id)arg1 didStartCastSession:(id)arg2;
- (void)payloadReceived:(id)arg1;
- (void)didUpdateDeviceList;
- (void)sessionManager:(id)arg1 castSession:(id)arg2 didReceiveDeviceVolume:(float)arg3 muted:(_Bool)arg4;
- (void)notifyVolumeChanged;
- (float)getVolume;
- (void)volumeDown;
- (void)volumeUp;
- (id)castModelName:(id)arg1;
- (long long)deviceTypeForGaiaDevice:(id)arg1;
- (id)getCastDeviceList;
- (_Bool)isConnectedCastDevice:(id)arg1;
- (_Bool)isGaiaDeviceCast:(id)arg1;
- (_Bool)isCastSessionActive;
- (void)stopScanning;
- (void)startScanning;
- (void)stopScanningInternal;
- (void)startScanningInternal;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)tearDown;
- (void)setupDeviceManager;
- (void)setupCastContext;
- (void)dealloc;
- (id)initWithProductState:(id)arg1 castContext:(id)arg2 deviceManager:(id)arg3 receiverAppManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

