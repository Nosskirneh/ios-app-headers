//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCKDiscoveryManagerListener-Protocol.h"
#import "GCKRemoteMediaClientListener-Protocol.h"
#import "GCKSessionManagerListener-Protocol.h"

@class NSArray, NSString, RHPlayableItem, RHPlayerControllerSequenceAlgorithm;
@protocol _TtP7Napster22AbstractPlayerDelegate_, _TtP7Napster24PlayerManagerCoordinator_;

@interface _TtC7Napster17GoogleCastManager : NSObject <GCKSessionManagerListener, GCKRemoteMediaClientListener, GCKDiscoveryManagerListener>
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: playerManager
    // Error parsing type: , name: bitrate
    // Error parsing type: , name: audioFormat
    // Error parsing type: , name: repeatMode
    // Error parsing type: , name: userScrubbing
    // Error parsing type: , name: desiredSeekPosition
    // Error parsing type: , name: equalizerPresets
    // Error parsing type: , name: state
    // Error parsing type: , name: playheadPosition
    // Error parsing type: , name: playbackDuration
    // Error parsing type: , name: playheadTimer
    // Error parsing type: , name: storedEvent
    // Error parsing type: , name: currentTrackDuration
    // Error parsing type: , name: playedTime
    // Error parsing type: , name: sequencer
    // Error parsing type: , name: swapSequencer
    // Error parsing type: , name: endlessSequencerInitialization
    // Error parsing type: , name: currentContentID
    // Error parsing type: , name: communicationChannel
    // Error parsing type: , name: downloadsController
    // Error parsing type: , name: accountController
    // Error parsing type: , name: reachabilityService
    // Error parsing type: , name: notificationCenter
    // Error parsing type: , name: trackMediaDeferred
    // Error parsing type: , name: clientPackageName.storage
    // Error parsing type: , name: silentAudioPlayer
}

+ (_Bool)isLinked;
+ (_Bool)isAvailable;
+ (id)currentDeviceName;
+ (void)setApplicationID:(id)arg1;
+ (id)applicationID;
+ (id)ConnectionStatusUpdated;
+ (id)DeviceListUpdated;
- (void).cxx_destruct;
- (void)playheadTimerTic;
- (void)didUpdateDeviceList;
- (void)remoteMediaClient:(id)arg1 didUpdateMediaStatus:(id)arg2;
- (void)sessionManager:(id)arg1 didEndCastSession:(id)arg2 withError:(id)arg3;
- (void)sessionManager:(id)arg1 willEndCastSession:(id)arg2;
- (void)sessionManager:(id)arg1 didResumeCastSession:(id)arg2;
- (void)sessionManager:(id)arg1 didSuspendCastSession:(id)arg2 withReason:(long long)arg3;
- (void)sessionManager:(id)arg1 didStartCastSession:(id)arg2;
- (_Bool)shouldSendPlaybackEvents;
@property(nonatomic, readonly) float currentProviderCacheProgress;
- (void)enterStoppedStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearState;
- (double)maximumAvailableFor:(double)arg1;
- (double)seekTo:(double)arg1;
- (void)skipAtBeginning;
- (void)skipPrevious;
- (void)skipNext;
- (void)deactivateWhenDone:(CDUnknownBlockType)arg1;
- (void)activate;
- (void)pause;
- (void)play;
- (id)performNewPlaybackWithRequestContext:(id)arg1 reachabilityService:(id)arg2 accountController:(id)arg3 downloadsController:(id)arg4 notificationCenter:(id)arg5 repeatMode:(long long)arg6;
- (void)setCurrentEqualizerWithNumber:(id)arg1;
- (void)dealloc;
- (id)init;
@property(nonatomic, retain) RHPlayerControllerSequenceAlgorithm *swapSequencer; // @synthesize swapSequencer;
@property(nonatomic) double playheadPosition; // @synthesize playheadPosition;
@property(nonatomic) long long state; // @synthesize state;
@property(nonatomic, readonly) RHPlayableItem *afterNextItem;
@property(nonatomic, readonly) RHPlayableItem *nextItem;
@property(nonatomic, readonly) RHPlayableItem *currentItem;
@property(nonatomic, readonly) RHPlayableItem *previousItem;
@property(nonatomic, readonly) RHPlayableItem *beforePreviousItem;
@property(nonatomic, copy) NSArray *equalizerPresets; // @synthesize equalizerPresets;
@property(nonatomic) _Bool userScrubbing; // @synthesize userScrubbing;
@property(nonatomic) long long repeatMode; // @synthesize repeatMode;
@property(nonatomic) _Bool shuffleMode;
@property(nonatomic, copy) NSString *audioFormat; // @synthesize audioFormat;
@property(nonatomic) long long bitrate; // @synthesize bitrate;
@property(nonatomic) __weak id <_TtP7Napster24PlayerManagerCoordinator_> playerManager; // @synthesize playerManager;
@property(nonatomic) __weak id <_TtP7Napster22AbstractPlayerDelegate_> delegate; // @synthesize delegate;

@end

