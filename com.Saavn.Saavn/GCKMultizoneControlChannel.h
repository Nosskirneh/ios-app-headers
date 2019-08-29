//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKCastChannel.h"

#import "GCKRequestTrackerDelegate-Protocol.h"

@class GCKMultizoneStatus, GCKRequestTracker, NSMutableArray, NSString;
@protocol GCKMultizoneControlChannelDelegate;

@interface GCKMultizoneControlChannel : GCKCastChannel <GCKRequestTrackerDelegate>
{
    long long _internalStatusRequestID;
    GCKRequestTracker *_getStatusRequestTracker;
    GCKRequestTracker *_setDeviceVolumeRequestTracker;
    GCKRequestTracker *_setDeviceMutedRequestTracker;
    NSMutableArray *_requestTrackers;
    id <GCKMultizoneControlChannelDelegate> _delegate;
    GCKMultizoneStatus *_multizoneStatus;
}

@property(retain, nonatomic) GCKMultizoneStatus *multizoneStatus; // @synthesize multizoneStatus=_multizoneStatus;
@property(nonatomic) __weak id <GCKMultizoneControlChannelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)requestTracker:(id)arg1 didReplace:(long long)arg2;
- (void)requestTracker:(id)arg1 didTimeOut:(long long)arg2;
- (void)notifyDeviceRemoved:(id)arg1;
- (void)notifyDeviceUpdated:(id)arg1;
- (void)notifyDeviceAdded:(id)arg1;
- (void)notifyrequestDidFailWithID:(long long)arg1 error:(id)arg2;
- (void)notifyStatusReceived;
- (void)didReceiveTextMessage:(id)arg1;
- (long long)setDeviceMuted:(_Bool)arg1 forDevice:(id)arg2;
- (long long)setDeviceVolume:(float)arg1 forDevice:(id)arg2;
- (long long)requestMultizoneStatus;
- (void)clearAllTrackers;
- (void)dealloc;
- (id)init;
- (id)initWithNamespace:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

