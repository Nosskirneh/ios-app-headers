//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKCastChannel.h"

#import "GCKRequestTrackerDelegate-Protocol.h"

@class GCKError, GCKMediaStatus, GCKRequestTracker, NSMutableArray, NSString;
@protocol GCKMediaControlChannelAdInfoParser, GCKMediaControlChannelDelegate;

@interface GCKMediaControlChannel : GCKCastChannel <GCKRequestTrackerDelegate>
{
    double _streamPositionUpdatedTime;
    long long _internalStatusRequestID;
    GCKRequestTracker *_loadRequestTracker;
    GCKRequestTracker *_pauseRequestTracker;
    GCKRequestTracker *_playRequestTracker;
    GCKRequestTracker *_stopRequestTracker;
    GCKRequestTracker *_statusRequestTracker;
    GCKRequestTracker *_volumeRequestTracker;
    GCKRequestTracker *_muteRequestTracker;
    GCKRequestTracker *_seekRequestTracker;
    GCKRequestTracker *_trackStyleRequestTracker;
    GCKRequestTracker *_activeTracksRequestTracker;
    GCKRequestTracker *_queueInsertRequestTracker;
    GCKRequestTracker *_queueUpdateRequestTracker;
    GCKRequestTracker *_queueRemoveRequestTracker;
    GCKRequestTracker *_queueReorderRequestTracker;
    GCKRequestTracker *_queueJumpRequestTracker;
    NSMutableArray *_requestTrackers;
    double _lastMediaStatusUpdateTime;
    _Bool _receivedFirstStatusUpdate;
    GCKMediaStatus *_mediaStatus;
    GCKError *_lastError;
    id <GCKMediaControlChannelDelegate> _delegate;
    id <GCKMediaControlChannelAdInfoParser> _adInfoParser;
}

+ (id)createErrorWithCode:(long long)arg1 JSONObject:(id)arg2;
@property(nonatomic) __weak id <GCKMediaControlChannelAdInfoParser> adInfoParser; // @synthesize adInfoParser=_adInfoParser;
@property(nonatomic) __weak id <GCKMediaControlChannelDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) GCKError *lastError; // @synthesize lastError=_lastError;
@property(retain, nonatomic) GCKMediaStatus *mediaStatus; // @synthesize mediaStatus=_mediaStatus;
- (void).cxx_destruct;
- (void)requestTracker:(id)arg1 didCancel:(long long)arg2;
- (void)requestTracker:(id)arg1 didReplace:(long long)arg2;
- (void)requestTracker:(id)arg1 didTimeOut:(long long)arg2;
- (void)didDisconnect;
- (void)didConnect;
- (id)queueItemArrayToJSON:(id)arg1;
- (id)sanitizeIDArray:(id)arg1;
- (id)mediaSessionID;
- (void)notifyDidCancelRequestWithID:(long long)arg1;
- (void)notifyDidReplaceRequestWithID:(long long)arg1;
- (void)notifyRequestDidFailWithID:(long long)arg1 error:(id)arg2;
- (void)notifyRequestDidCompleteWithID:(long long)arg1;
- (void)notifyPreloadStatusUpdated;
- (void)notifyQueueUpdated;
- (void)notifyMetadataUpdated;
- (void)notifyStatusUpdated;
- (void)notifyMediaLoadFailedWithError:(id)arg1;
- (void)notifyMediaLoadCompletedWithSessionID:(long long)arg1;
- (void)processMediaStatus:(id)arg1 requestID:(long long)arg2;
- (void)didReceiveTextMessage:(id)arg1;
- (_Bool)cancelRequestWithID:(long long)arg1;
@property(readonly, nonatomic) double timeSinceLastMediaStatusUpdate;
- (double)approximateStreamPosition;
- (long long)requestStatus;
- (long long)setStreamMuted:(_Bool)arg1 customData:(id)arg2;
- (long long)setStreamMuted:(_Bool)arg1;
- (long long)setStreamVolume:(float)arg1 customData:(id)arg2;
- (long long)setStreamVolume:(float)arg1;
- (long long)queueSetRepeatMode:(long long)arg1;
- (long long)queueJumpBy:(long long)arg1;
- (long long)queuePreviousItem;
- (long long)queueNextItem;
- (long long)queueJumpToItemWithID:(unsigned long long)arg1 playPosition:(double)arg2 customData:(id)arg3;
- (long long)queueJumpToItemWithID:(unsigned long long)arg1 customData:(id)arg2;
- (long long)queueJumpToItemWithID:(unsigned long long)arg1;
- (long long)queueMoveItemWithID:(unsigned long long)arg1 beforeItemWithID:(unsigned long long)arg2;
- (long long)queueReorderItemsWithIDs:(id)arg1 insertBeforeItemWithID:(unsigned long long)arg2 customData:(id)arg3;
- (long long)queueReorderItemsWithIDs:(id)arg1 insertBeforeItemWithID:(unsigned long long)arg2;
- (long long)queueRemoveItemWithID:(unsigned long long)arg1;
- (long long)queueRemoveItemsWithIDs:(id)arg1 customData:(id)arg2;
- (long long)queueRemoveItemsWithIDs:(id)arg1;
- (long long)queueUpdateItems:(id)arg1 customData:(id)arg2;
- (long long)queueUpdateItems:(id)arg1;
- (long long)queueInsertAndPlayItem:(id)arg1 beforeItemWithID:(unsigned long long)arg2 playPosition:(double)arg3 customData:(id)arg4;
- (long long)queueInsertAndPlayItem:(id)arg1 beforeItemWithID:(unsigned long long)arg2;
- (long long)queueInsertItem:(id)arg1 beforeItemWithID:(unsigned long long)arg2;
- (long long)queueInsertItems:(id)arg1 beforeItemWithID:(unsigned long long)arg2 withJump:(_Bool)arg3 playPosition:(double)arg4 customData:(id)arg5;
- (long long)queueInsertItems:(id)arg1 beforeItemWithID:(unsigned long long)arg2 customData:(id)arg3;
- (long long)queueInsertItems:(id)arg1 beforeItemWithID:(unsigned long long)arg2;
- (long long)queueLoadItems:(id)arg1 startIndex:(unsigned long long)arg2 playPosition:(double)arg3 repeatMode:(long long)arg4 customData:(id)arg5;
- (long long)queueLoadItems:(id)arg1 startIndex:(unsigned long long)arg2 repeatMode:(long long)arg3 customData:(id)arg4;
- (long long)queueLoadItems:(id)arg1 startIndex:(unsigned long long)arg2 repeatMode:(long long)arg3;
- (long long)seekToTimeInterval:(double)arg1 resumeState:(long long)arg2 customData:(id)arg3;
- (long long)seekToTimeInterval:(double)arg1 resumeState:(long long)arg2;
- (long long)seekToTimeInterval:(double)arg1;
- (long long)playWithCustomData:(id)arg1;
- (long long)play;
- (long long)stopWithCustomData:(id)arg1;
- (long long)stop;
- (long long)pauseWithCustomData:(id)arg1;
- (long long)pause;
- (long long)setTextTrackStyle:(id)arg1;
- (long long)setActiveTrackIDs:(id)arg1;
- (long long)loadMedia:(id)arg1 autoplay:(_Bool)arg2 playPosition:(double)arg3 activeTrackIDs:(id)arg4 customData:(id)arg5;
- (long long)loadMedia:(id)arg1 autoplay:(_Bool)arg2 playPosition:(double)arg3 activeTrackIDs:(id)arg4;
- (long long)loadMedia:(id)arg1 autoplay:(_Bool)arg2 playPosition:(double)arg3 customData:(id)arg4;
- (long long)loadMedia:(id)arg1 autoplay:(_Bool)arg2 playPosition:(double)arg3;
- (long long)loadMedia:(id)arg1 autoplay:(_Bool)arg2;
- (long long)loadMedia:(id)arg1;
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

