//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTStatefulPlayerPlaybackControlsObserver-Protocol.h"
#import "SPTStatefulPlayerQueueObserver-Protocol.h"
#import "SPTStatefulPlayerTrackPositionObserver-Protocol.h"

@class NSHashTable, NSString, SPTPlayerRestrictions, SPTPlayerState, SPTStatefulPlayerPlaybackControls, SPTStatefulPlayerQueue, SPTStatefulPlayerTrackPosition;
@protocol SPTPlayer;

@interface SPTStatefulPlayer : NSObject <SPTStatefulPlayerPlaybackControlsObserver, SPTStatefulPlayerQueueObserver, SPTStatefulPlayerTrackPositionObserver>
{
    SPTPlayerState *_playerState;
    NSHashTable *_observers;
    SPTStatefulPlayerQueue *_queue;
    SPTStatefulPlayerTrackPosition *_trackPosition;
    SPTStatefulPlayerPlaybackControls *_playbackControls;
    SPTPlayerRestrictions *_restrictions;
    id <SPTPlayer> _player;
}

@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) SPTPlayerRestrictions *restrictions; // @synthesize restrictions=_restrictions;
@property(retain, nonatomic) SPTStatefulPlayerPlaybackControls *playbackControls; // @synthesize playbackControls=_playbackControls;
@property(retain, nonatomic) SPTStatefulPlayerTrackPosition *trackPosition; // @synthesize trackPosition=_trackPosition;
@property(retain, nonatomic) SPTStatefulPlayerQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) SPTPlayerState *playerState; // @synthesize playerState=_playerState;
- (void).cxx_destruct;
- (void)playbackControlsDidChange:(id)arg1;
- (void)setRepeatingTrack:(_Bool)arg1;
- (_Bool)isRepeatingTrack;
- (void)setRepeatingContext:(_Bool)arg1;
- (_Bool)isRepeatingContext;
- (void)setShufflingContext:(_Bool)arg1;
- (_Bool)isShufflingContext;
- (void)setPaused:(_Bool)arg1;
- (_Bool)isPaused;
- (void)stop;
- (void)trackPositionDidChange:(id)arg1;
- (_Bool)isLoading;
- (void)seekTo:(double)arg1;
- (_Bool)disallowSeekingAlways;
- (_Bool)disallowSeeking;
- (float)playbackSpeed;
- (double)duration;
- (double)position;
- (void)playerQueue:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (_Bool)disallowPeekingAtRelativeIndex:(long long)arg1;
- (_Bool)disallowSkippingToRelativeIndex:(long long)arg1;
- (id)queuedTrackAtRelativeIndex:(long long)arg1;
- (void)skipToPreviousTrack;
- (void)skipToNextTrack;
- (_Bool)isQueueInSync;
- (id)playingTrack;
- (id)currentTrack;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

