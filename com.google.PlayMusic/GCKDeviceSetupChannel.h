//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKCastChannel.h"

#import "GCKRequestTrackerDelegate-Protocol.h"

@class GCKRequestTracker, NSString;
@protocol GCKDeviceSetupChannelDelegate;

__attribute__((visibility("hidden")))
@interface GCKDeviceSetupChannel : GCKCastChannel <GCKRequestTrackerDelegate>
{
    GCKRequestTracker *_deviceConfigurationRequestTracker;
    id <GCKDeviceSetupChannelDelegate> _delegate;
}

@property(nonatomic) __weak id <GCKDeviceSetupChannelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)requestTracker:(id)arg1 didReplace:(long long)arg2;
- (void)requestTracker:(id)arg1 didTimeOut:(long long)arg2;
- (void)didReceiveTextMessage:(id)arg1;
- (long long)requestDeviceConfiguration;
- (id)init;
- (id)initWithNamespace:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

