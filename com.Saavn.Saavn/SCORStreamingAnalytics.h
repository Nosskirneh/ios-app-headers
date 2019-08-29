//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCORStreamingAnalyticsProtocol-Protocol.h"
#import "SCORStreamingDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString, SCORStreamingPlaybackSession;

@interface SCORStreamingAnalytics : NSObject <SCORStreamingDelegate, SCORStreamingAnalyticsProtocol>
{
    long long _state;
    struct StreamingAnalytics *_streamingAnalytics;
    OwnedArray_4ea96a44 *_listeners;
}

@property(nonatomic) OwnedArray_4ea96a44 *listeners; // @synthesize listeners=_listeners;
@property(nonatomic) struct StreamingAnalytics *streamingAnalytics; // @synthesize streamingAnalytics=_streamingAnalytics;
@property long long state; // @synthesize state=_state;
- (void)waitForNonDelayedTasks;
- (void)onStateChanged:(long long)arg1 newState:(long long)arg2 eventLabels:(id)arg3 timeDelta:(double)arg4;
- (_Bool)notifyChangeCDN:(id)arg1 labels:(id)arg2;
- (_Bool)notifyChangeCDN:(id)arg1 position:(long long)arg2;
- (_Bool)notifyChangeCDN:(id)arg1 withPosition:(long long)arg2 labels:(id)arg3;
- (_Bool)notifyChangeCDN:(id)arg1;
- (_Bool)notifyChangeSubtitleTrack:(id)arg1 labels:(id)arg2;
- (_Bool)notifyChangeSubtitleTrack:(id)arg1 position:(long long)arg2;
- (_Bool)notifyChangeSubtitleTrack:(id)arg1 withPosition:(long long)arg2 labels:(id)arg3;
- (_Bool)notifyChangeSubtitleTrack:(id)arg1;
- (_Bool)notifyChangeVideoTrack:(id)arg1 labels:(id)arg2;
- (_Bool)notifyChangeVideoTrack:(id)arg1 position:(long long)arg2;
- (_Bool)notifyChangeVideoTrack:(id)arg1 withPosition:(long long)arg2 labels:(id)arg3;
- (_Bool)notifyChangeVideoTrack:(id)arg1;
- (_Bool)notifyChangeAudioTrack:(id)arg1 labels:(id)arg2;
- (_Bool)notifyChangeAudioTrack:(id)arg1 position:(long long)arg2;
- (_Bool)notifyChangeAudioTrack:(id)arg1 withPosition:(long long)arg2 labels:(id)arg3;
- (_Bool)notifyChangeAudioTrack:(id)arg1;
- (_Bool)notifyChangeWindowState:(id)arg1 labels:(id)arg2;
- (_Bool)notifyChangeWindowState:(id)arg1 position:(long long)arg2;
- (_Bool)notifyChangeWindowState:(id)arg1 withPosition:(long long)arg2 labels:(id)arg3;
- (_Bool)notifyChangeWindowState:(id)arg1;
- (_Bool)notifyChangeVolume:(long long)arg1 labels:(id)arg2;
- (_Bool)notifyChangeVolume:(long long)arg1 position:(long long)arg2;
- (_Bool)notifyChangeVolume:(long long)arg1 withPosition:(long long)arg2 labels:(id)arg3;
- (_Bool)notifyChangeVolume:(long long)arg1;
- (_Bool)notifyChangePlaybackRate:(long long)arg1 labels:(id)arg2;
- (_Bool)notifyChangePlaybackRate:(long long)arg1 position:(long long)arg2;
- (_Bool)notifyChangePlaybackRate:(long long)arg1 withPosition:(long long)arg2 labels:(id)arg3;
- (_Bool)notifyChangePlaybackRate:(long long)arg1;
- (_Bool)notifyChangeBitrate:(long long)arg1 labels:(id)arg2;
- (_Bool)notifyChangeBitrate:(long long)arg1 position:(long long)arg2;
- (_Bool)notifyChangeBitrate:(long long)arg1 position:(long long)arg2 labels:(id)arg3;
- (_Bool)notifyChangeBitrate:(long long)arg1;
- (_Bool)notifyDRMDenyWithLabels:(id)arg1;
- (_Bool)notifyDRMDenyWithPosition:(long long)arg1;
- (_Bool)notifyDRMDenyWithPosition:(long long)arg1 labels:(id)arg2;
- (_Bool)notifyDRMDeny;
- (_Bool)notifyDRMApproveWithLabels:(id)arg1;
- (_Bool)notifyDRMApproveWithPosition:(long long)arg1;
- (_Bool)notifyDRMApproveWithPosition:(long long)arg1 labels:(id)arg2;
- (_Bool)notifyDRMApprove;
- (_Bool)notifyDRMFailWithLabels:(id)arg1;
- (_Bool)notifyDRMFailWithPosition:(long long)arg1;
- (_Bool)notifyDRMFailWithPosition:(long long)arg1 labels:(id)arg2;
- (_Bool)notifyDRMFail;
- (_Bool)notifyTransferPlaybackWithLabels:(id)arg1;
- (_Bool)notifyTransferPlaybackWithPosition:(long long)arg1;
- (_Bool)notifyTransferPlaybackWithPosition:(long long)arg1 labels:(id)arg2;
- (_Bool)notifyTransferPlayback;
- (_Bool)notifyErrorWithLabels:(id)arg1;
- (_Bool)notifyErrorWithPosition:(long long)arg1;
- (_Bool)notifyErrorWithPosition:(long long)arg1 labels:(id)arg2;
- (_Bool)notifyError;
- (_Bool)notifyCallToActionWithLabels:(id)arg1;
- (_Bool)notifyCallToActionWithPosition:(long long)arg1;
- (_Bool)notifyCallToActionWithPosition:(long long)arg1 labels:(id)arg2;
- (_Bool)notifyCallToAction;
- (_Bool)notifyCustomEventWithLabels:(id)arg1;
- (_Bool)notifyCustomEventWithPosition:(long long)arg1;
- (_Bool)notifyCustomEventWithPosition:(long long)arg1 labels:(id)arg2;
- (_Bool)notifyCustomEvent;
- (_Bool)notifySkipAdWithLabels:(id)arg1;
- (_Bool)notifySkipAdWithPosition:(long long)arg1;
- (_Bool)notifySkipAdWithPosition:(long long)arg1 labels:(id)arg2;
- (_Bool)notifySkipAd;
- (_Bool)notifySeekStartWithLabels:(id)arg1;
- (_Bool)notifySeekStartWithPosition:(long long)arg1;
- (_Bool)notifySeekStartWithPosition:(long long)arg1 labels:(id)arg2;
- (_Bool)notifySeekStart;
- (_Bool)notifyEngageWithLabels:(id)arg1;
- (_Bool)notifyEngageWithPosition:(long long)arg1;
- (_Bool)notifyEngageWithPosition:(long long)arg1 labels:(id)arg2;
- (_Bool)notifyEngage;
- (_Bool)notifyLoadWithLabels:(id)arg1;
- (_Bool)notifyLoadWithPosition:(long long)arg1;
- (_Bool)notifyLoadWithPosition:(long long)arg1 labels:(id)arg2;
- (_Bool)notifyLoad;
- (_Bool)notifyBufferStopWithLabels:(id)arg1;
- (_Bool)notifyBufferStopWithPosition:(long long)arg1;
- (_Bool)notifyBufferStopWithPosition:(long long)arg1 labels:(id)arg2;
- (_Bool)notifyBufferStop;
- (_Bool)notifyBufferStartWithLabels:(id)arg1;
- (_Bool)notifyBufferStartWithPosition:(long long)arg1;
- (_Bool)notifyBufferStartWithPosition:(long long)arg1 labels:(id)arg2;
- (_Bool)notifyBufferStart;
- (_Bool)notifyEndWithLabels:(id)arg1;
- (_Bool)notifyEndWithPosition:(long long)arg1;
- (_Bool)notifyEndWithPosition:(long long)arg1 labels:(id)arg2;
- (_Bool)notifyEnd;
- (_Bool)notifyPauseWithLabels:(id)arg1;
- (_Bool)notifyPauseWithPosition:(long long)arg1;
- (_Bool)notifyPauseWithPosition:(long long)arg1 labels:(id)arg2;
- (_Bool)notifyPause;
- (_Bool)notifyPlayWithLabels:(id)arg1;
- (_Bool)notifyPlayWithPosition:(long long)arg1;
- (_Bool)notifyPlayWithPosition:(long long)arg1 labels:(id)arg2;
- (_Bool)notifyPlay;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)setDVRWindowOffset:(long long)arg1;
- (void)setDVRWindowLength:(long long)arg1;
@property(copy, nonatomic) NSArray *heartbeatIntervals;
@property(nonatomic) double loadTimeOffset;
@property(nonatomic) double keepAliveInterval;
@property(nonatomic) double pauseOnBufferingInterval;
@property(nonatomic) double throttlingDelay;
@property(nonatomic) double playbackIntervalMergeTolerance;
@property(nonatomic) _Bool throttlingEnabled;
@property(nonatomic) _Bool pauseOnBufferingEnabled;
- (void)createPlaybackSessionWithLabels:(id)arg1;
- (void)createPlaybackSession;
@property(readonly) SCORStreamingPlaybackSession *playbackSession;
- (void)reset;
@property(readonly) NSDictionary *labels;
- (_Bool)containsLabel:(id)arg1;
- (id)valueForLabel:(id)arg1;
- (void)setLabels:(id)arg1;
- (void)setLabelWithName:(id)arg1 value:(id)arg2;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

