//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTNowPlayingTrackMetadataQueue, SPTNowPlayingTrackPosition, SPTStatefulPlayer;

@interface SPTNowPlayingPlaybackController : NSObject
{
    SPTNowPlayingTrackPosition *_trackPosition;
    SPTStatefulPlayer *_player;
    id <SPTAdsManager> _adsManager;
    SPTNowPlayingTrackMetadataQueue *_trackMetadataQueue;
}

@property(readonly, nonatomic) SPTNowPlayingTrackMetadataQueue *trackMetadataQueue; // @synthesize trackMetadataQueue=_trackMetadataQueue;
@property(readonly, nonatomic) id <SPTAdsManager> adsManager; // @synthesize adsManager=_adsManager;
@property(readonly, nonatomic) SPTStatefulPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) SPTNowPlayingTrackPosition *trackPosition; // @synthesize trackPosition=_trackPosition;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool seekingAllowed;
@property(readonly, nonatomic) _Bool disallowTogglingRepeat;
@property(readonly, nonatomic) _Bool disallowTogglingShuffle;
@property(readonly, nonatomic) unsigned long long toggleShuffleBehaviour;
@property(readonly, nonatomic) _Bool disallowResuming;
@property(readonly, nonatomic) _Bool disallowPausing;
- (unsigned long long)skipToNextTrackBehaviorWhileDragging:(_Bool)arg1;
- (_Bool)canSkipNext;
- (unsigned long long)skipToPreviousTrackBehaviorWhileDragging:(_Bool)arg1;
- (void)toggleRepeatMode;
@property(nonatomic) unsigned long long repeatMode;
- (void)setGlobalShuffleMode:(_Bool)arg1;
@property(readonly, nonatomic, getter=isShuffling) _Bool shuffling;
- (void)seekBackwardBySeconds:(double)arg1;
- (void)seekForwardBySeconds:(double)arg1;
- (void)skipToPreviousWhileDragging:(_Bool)arg1;
- (void)skipToNextWhileDragging:(_Bool)arg1;
- (_Bool)disallowSkippingToPreviousTrackWhileDragging:(_Bool)arg1;
- (_Bool)disallowSkippingToNextTrackWhileDragging:(_Bool)arg1;
@property(nonatomic, getter=isPaused) _Bool paused;
- (_Bool)shouldShowSkippingNextUpsell;
- (_Bool)canShowSkippingNextUpsell;
- (_Bool)previousButtonWouldSeekNotSkip;
- (id)initWithPlayer:(id)arg1 trackPosition:(id)arg2 adsManager:(id)arg3 trackMetadataQueue:(id)arg4;

@end

