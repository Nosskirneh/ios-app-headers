//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTGaiaDeviceStateManagerObserver.h"
#import "SPTWatchPlatformPublisher.h"

@class NSString, SPTGaiaDeviceManager;

@interface SPTWatchPlatformConnectStatePublisher : NSObject <SPTGaiaDeviceStateManagerObserver, SPTWatchPlatformPublisher>
{
    id <SPTWatchConnectivityPubSubMessageQueue> _pubSubMessageQueue;
    SPTGaiaDeviceManager *_gaiaDeviceManager;
}

@property(readonly, nonatomic) __weak SPTGaiaDeviceManager *gaiaDeviceManager; // @synthesize gaiaDeviceManager=_gaiaDeviceManager;
@property(readonly, nonatomic) __weak id <SPTWatchConnectivityPubSubMessageQueue> pubSubMessageQueue; // @synthesize pubSubMessageQueue=_pubSubMessageQueue;
- (void).cxx_destruct;
- (void)deviceStateManager:(id)arg1 activeDeviceDidChange:(id)arg2;
- (void)deviceStateManager:(id)arg1 availableDevicesDidChange:(id)arg2;
- (void)handlePublisherEvent:(long long)arg1;
- (void)publishState;
- (id)initWithPubSubMessageQueue:(id)arg1 gaiaDeviceManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

