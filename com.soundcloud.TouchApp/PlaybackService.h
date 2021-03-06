//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PlayQueueManagerDelegate-Protocol.h"
#import "PlayQueueSkipInteracting-Protocol.h"
#import "PlaybackAnalysable-Protocol.h"
#import "PlayerDelegate-Protocol.h"

@class AVPlayerLayer, NSArray, NSNotificationCenter, NSString, PlaybackCheckpointObserver, RACReplaySubject, RACSubject, TaggingContext, Urn, _TtC8Playback28PlaybackStateWriteRepository, _TtC8Playback29PlaybackServiceTaggingContext;
@protocol PlayQueueManager, Player, Player><_TtP8Playback7Fadable_><_TtP8Playback10Resettable_, _TtP4Core9Reachable_, _TtP8Features12SkipBlocking_, _TtP8Features13PlayQueueItem_, _TtP8Features19QueueAdsInteracting_, _TtP8Features23AppPerformanceProfiling_, _TtP8Features23RecentlyPlayedObserving_, _TtP8Playback10Resettable_, _TtP8Playback7Fadable_;

@interface PlaybackService : NSObject <PlaybackAnalysable, PlayQueueManagerDelegate, PlayerDelegate, PlayQueueSkipInteracting>
{
    _Bool _repeatCurrentTrack;
    Urn *_origin;
    id <_TtP8Features13PlayQueueItem_> _currentPlayQueueItem;
    unsigned long long _currentPlayQueueInteraction;
    id <PlayQueueManager> _playQueueManager;
    _TtC8Playback29PlaybackServiceTaggingContext *_serviceTaggingContext;
    PlaybackCheckpointObserver *_checkpointObserver;
    NSNotificationCenter *_notificationCenter;
    id <_TtP8Features19QueueAdsInteracting_> _queueAdsInteractor;
    id <_TtP4Core9Reachable_> _reachability;
    RACReplaySubject *_currentPlayQueueItemSubject;
    RACSubject *_nextPlayQueueItemSubject;
    RACSubject *_previousPlayQueueItemSubject;
    RACSubject *_progressSubject;
    RACSubject *_playStateSubject;
    RACSubject *_playStateTransitionSubject;
    RACSubject *_updatePlayQueueSubject;
    id <_TtP8Features12SkipBlocking_> _skipBlocker;
    id <_TtP8Features23RecentlyPlayedObserving_> _recentlyPlayedObserver;
    id <Player><_TtP8Playback7Fadable_><_TtP8Playback10Resettable_> _defaultPlayer;
    id <_TtP8Playback7Fadable_> _fadable;
    id <_TtP8Playback10Resettable_> _playerStateResetter;
    id <Player> _player;
    id <_TtP8Features13PlayQueueItem_> _placeholder;
    unsigned long long _playState;
    id <_TtP8Features23AppPerformanceProfiling_> _appPerformanceProfiler;
    _TtC8Playback28PlaybackStateWriteRepository *_stateWriter;
    RACSubject *_nextPlayQueueItemChangedSubject;
    RACSubject *_playQueueFailureSubject;
    RACSubject *_playQueueChangedSubject;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) RACSubject *playQueueChangedSubject; // @synthesize playQueueChangedSubject=_playQueueChangedSubject;
@property(readonly, nonatomic) RACSubject *playQueueFailureSubject; // @synthesize playQueueFailureSubject=_playQueueFailureSubject;
@property(readonly, nonatomic) RACSubject *nextPlayQueueItemChangedSubject; // @synthesize nextPlayQueueItemChangedSubject=_nextPlayQueueItemChangedSubject;
@property(readonly, nonatomic) _TtC8Playback28PlaybackStateWriteRepository *stateWriter; // @synthesize stateWriter=_stateWriter;
@property(readonly, nonatomic) id <_TtP8Features23AppPerformanceProfiling_> appPerformanceProfiler; // @synthesize appPerformanceProfiler=_appPerformanceProfiler;
@property(nonatomic) unsigned long long playState; // @synthesize playState=_playState;
@property(retain, nonatomic) id <_TtP8Features13PlayQueueItem_> placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) id <Player> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <_TtP8Playback10Resettable_> playerStateResetter; // @synthesize playerStateResetter=_playerStateResetter;
@property(readonly, nonatomic) id <_TtP8Playback7Fadable_> fadable; // @synthesize fadable=_fadable;
@property(readonly, nonatomic) id <Player><_TtP8Playback7Fadable_><_TtP8Playback10Resettable_> defaultPlayer; // @synthesize defaultPlayer=_defaultPlayer;
@property(readonly, nonatomic) id <_TtP8Features23RecentlyPlayedObserving_> recentlyPlayedObserver; // @synthesize recentlyPlayedObserver=_recentlyPlayedObserver;
@property(readonly, nonatomic) id <_TtP8Features12SkipBlocking_> skipBlocker; // @synthesize skipBlocker=_skipBlocker;
@property(readonly, nonatomic) RACSubject *updatePlayQueueSubject; // @synthesize updatePlayQueueSubject=_updatePlayQueueSubject;
@property(readonly, nonatomic) RACSubject *playStateTransitionSubject; // @synthesize playStateTransitionSubject=_playStateTransitionSubject;
@property(readonly, nonatomic) RACSubject *playStateSubject; // @synthesize playStateSubject=_playStateSubject;
@property(readonly, nonatomic) RACSubject *progressSubject; // @synthesize progressSubject=_progressSubject;
@property(readonly, nonatomic) RACSubject *previousPlayQueueItemSubject; // @synthesize previousPlayQueueItemSubject=_previousPlayQueueItemSubject;
@property(readonly, nonatomic) RACSubject *nextPlayQueueItemSubject; // @synthesize nextPlayQueueItemSubject=_nextPlayQueueItemSubject;
@property(readonly, nonatomic) RACReplaySubject *currentPlayQueueItemSubject; // @synthesize currentPlayQueueItemSubject=_currentPlayQueueItemSubject;
@property(readonly, nonatomic) id <_TtP4Core9Reachable_> reachability; // @synthesize reachability=_reachability;
@property(readonly, nonatomic) id <_TtP8Features19QueueAdsInteracting_> queueAdsInteractor; // @synthesize queueAdsInteractor=_queueAdsInteractor;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) PlaybackCheckpointObserver *checkpointObserver; // @synthesize checkpointObserver=_checkpointObserver;
@property(nonatomic, getter=willRepeatCurrentTrack) _Bool repeatCurrentTrack; // @synthesize repeatCurrentTrack=_repeatCurrentTrack;
@property(retain, nonatomic) _TtC8Playback29PlaybackServiceTaggingContext *serviceTaggingContext; // @synthesize serviceTaggingContext=_serviceTaggingContext;
@property(retain, nonatomic) id <PlayQueueManager> playQueueManager; // @synthesize playQueueManager=_playQueueManager;
@property(nonatomic) unsigned long long currentPlayQueueInteraction; // @synthesize currentPlayQueueInteraction=_currentPlayQueueInteraction;
@property(retain, nonatomic) id <_TtP8Features13PlayQueueItem_> currentPlayQueueItem; // @synthesize currentPlayQueueItem=_currentPlayQueueItem;
@property(retain, nonatomic) Urn *origin; // @synthesize origin=_origin;
- (void).cxx_destruct;
- (_Bool)shouldRepeatCurrentTrackWithState:(unsigned long long)arg1;
- (void)audioRouteChanged:(id)arg1;
- (void)postPlayQueueChangedNotification;
- (_Bool)isItemAd:(id)arg1;
- (_Bool)currentItemIsAdType;
- (_Bool)isInitialItemCurrent;
- (_Bool)isPlayingStation;
- (_Bool)shouldSkipBlockedTrackInStation;
- (_Bool)isExactInstancePlaying:(id)arg1;
- (void)autoskip;
- (void)autoskipToNextTrack;
- (_Bool)shouldAutoskipWithState:(unsigned long long)arg1;
- (_Bool)shouldConcealItemsAroundItem:(id)arg1;
- (_Bool)isCurrentTrackBlocked;
- (void)preloadItemAfterItem:(id)arg1;
- (void)playItem:(id)arg1 withInteraction:(unsigned long long)arg2;
- (void)playerDidStartPlaying;
- (void)resetState;
- (void)updatePlayQueueManager:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)playablePlayQueueItemBefore:(id)arg1;
- (id)playablePlayQueueItemAfter:(id)arg1;
- (id)previousItemWithInteraction:(unsigned long long)arg1;
- (id)nextItemWithInteraction:(unsigned long long)arg1;
- (void)trackMediaErrorIfNecessary;
- (void)resetAdsForCurrentItem;
- (void)loadQueueWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)player:(id)arg1 didTransitionToState:(id)arg2;
- (void)player:(id)arg1 didEnterState:(unsigned long long)arg2;
- (void)player:(id)arg1 didProgressToDuration:(double)arg2;
- (void)playQueueManager:(id)arg1 didFailWithError:(id)arg2;
- (void)playQueueManagerDidChangePlayQueue:(id)arg1;
- (void)playQueueManager:(id)arg1 nextItemDidChange:(id)arg2;
- (void)jumpToItem:(id)arg1 withInteraction:(unsigned long long)arg2;
- (void)moveToPreviousItemWithInteraction:(unsigned long long)arg1;
- (void)moveToNextItemWithInteraction:(unsigned long long)arg1;
- (void)handleMediaServerReset;
- (void)fadeOut;
- (void)pause;
- (void)rewind;
- (void)seekToTime:(double)arg1;
- (void)play;
- (void)reset;
@property(readonly, nonatomic) NSString *playerName;
- (double)progressForItem:(id)arg1;
- (_Bool)isItemPlaying:(id)arg1;
- (_Bool)isPlayingFromLocalStorage;
- (_Bool)shouldDisablePlayWithInteraction:(unsigned long long)arg1 applicationState:(long long)arg2;
- (_Bool)shouldMoveToPreviousInsteadOfRestartingCurrentItem;
@property(readonly, nonatomic) _Bool shouldPreventSkipping;
- (id)progressSignal;
- (id)playStateTransitionSignal;
- (id)playStateSignal;
- (id)playQueueFailureSignal;
- (id)playQueueChangedSignal;
- (id)nextPlayQueueItemChangedSignal;
- (id)playQueueDataSourceDisposedSignal;
- (id)previousPlayQueueItemSignal;
- (id)currentPlayQueueItemSignal;
- (id)nextPlayQueueItemSignal;
- (void)moveToItem:(id)arg1 withInteraction:(unsigned long long)arg2;
- (id)playQueueItemBefore:(id)arg1;
- (id)playQueueItemAfter:(id)arg1;
- (void)restoreQueueWithConfiguration:(id)arg1;
- (void)playQueueWithPlaybackConfiguration:(id)arg1;
- (void)loadQueueWithPlaybackConfiguration:(id)arg1;
@property(readonly, nonatomic) AVPlayerLayer *playerLayer;
- (_Bool)isStartingANewQueueForInteraction:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *items;
@property(readonly, nonatomic) _Bool isPlayingLastTrack;
@property(readonly, nonatomic) double fullDuration;
@property(readonly, nonatomic) double playableDuration;
@property(readonly, nonatomic) double progressDuration;
@property(readonly, nonatomic) double bufferDuration;
@property(readonly, copy, nonatomic) NSString *playbackItemDidChangeNotificationUserInfoKey;
@property(readonly, copy, nonatomic) NSString *playbackItemDidChangeNotificationName;
- (void)writePlayQueueState;
@property(readonly, nonatomic) unsigned long long currentPlayState;
- (id)initWithPlayerFactory:(id)arg1 notificationCenter:(id)arg2 reachability:(id)arg3 retrier:(id)arg4 stateUpdater:(id)arg5 progressSubject:(id)arg6 updatePlayQueueSubject:(id)arg7 queueAdsInteractor:(id)arg8 skipBlocker:(id)arg9 fader:(id)arg10 checkpointObserver:(id)arg11 recentlyPlayedObserver:(id)arg12 playQueueChangedSubject:(id)arg13 playQueueFailureSubject:(id)arg14 nextPlayQueueItemChangedSubject:(id)arg15 appPerformanceProfiler:(id)arg16 stateWriter:(id)arg17;
@property(nonatomic, readonly) TaggingContext *taggingContext;

@end

