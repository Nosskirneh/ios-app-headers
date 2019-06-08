//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKCastChannel.h"

#import "GCKRequestTrackerDelegate-Protocol.h"

@class GCKRequestTracker, NSString;
@protocol GCKDiscoveryChannelDelegate;

@interface GCKDiscoveryChannel : GCKCastChannel <GCKRequestTrackerDelegate>
{
    GCKRequestTracker *_deviceInfoRequestTracker;
    id <GCKDiscoveryChannelDelegate> _delegate;
}

@property(nonatomic) __weak id <GCKDiscoveryChannelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)requestTracker:(id)arg1 didReplace:(long long)arg2;
- (void)requestTracker:(id)arg1 didTimeOut:(long long)arg2;
- (void)notifyFailToReceiveDeviceConfigurationWithID:(long long)arg1 error:(id)arg2;
- (void)notifyDidReceiveDeviceInformation:(id)arg1 requestID:(long long)arg2;
- (void)didReceiveTextMessage:(id)arg1;
- (long long)requestDeviceInfo;
- (id)init;
- (id)initWithNamespace:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

