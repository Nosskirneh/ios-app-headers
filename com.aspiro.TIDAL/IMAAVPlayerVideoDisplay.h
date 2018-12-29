//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMAAdPlayerViewDelegate-Protocol.h"
#import "IMAVideoDisplay-Protocol.h"

@class AVAsset, AVPlayer, AVPlayerItem, IMAAVPlayerContentPlayhead, IMAAdPlayerView, IMASettings, NSArray, NSString;
@protocol IMAVideoDisplayDelegate;

@interface IMAAVPlayerVideoDisplay : NSObject <IMAAdPlayerViewDelegate, IMAVideoDisplay>
{
    _Bool _started;
    _Bool _playRequested;
    _Bool _shouldResumeAdPlayback;
    _Bool _pausedDueToBuffering;
    id <IMAVideoDisplayDelegate> delegate;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    NSArray *_subtitles;
    IMASettings *_settings;
    IMAAdPlayerView *_playerView;
    AVAsset *_asset;
    IMAAVPlayerContentPlayhead *_contentPlayhead;
    AVPlayerItem *_contentPlayerItem;
    id _adPlaybackTimeObserver;
    double _bufferedMediaTime;
}

+ (double)secondsWithCMTime:(CDStruct_1b6d18a9)arg1;
@property(nonatomic, getter=isPausedDueToBuffering) _Bool pausedDueToBuffering; // @synthesize pausedDueToBuffering=_pausedDueToBuffering;
@property(nonatomic) _Bool shouldResumeAdPlayback; // @synthesize shouldResumeAdPlayback=_shouldResumeAdPlayback;
@property(nonatomic) double bufferedMediaTime; // @synthesize bufferedMediaTime=_bufferedMediaTime;
@property(retain, nonatomic) id adPlaybackTimeObserver; // @synthesize adPlaybackTimeObserver=_adPlaybackTimeObserver;
@property(retain, nonatomic) AVPlayerItem *contentPlayerItem; // @synthesize contentPlayerItem=_contentPlayerItem;
@property(retain, nonatomic) IMAAVPlayerContentPlayhead *contentPlayhead; // @synthesize contentPlayhead=_contentPlayhead;
@property(nonatomic, getter=isPlayRequested) _Bool playRequested; // @synthesize playRequested=_playRequested;
@property(nonatomic, getter=isStarted) _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) IMAAdPlayerView *playerView; // @synthesize playerView=_playerView;
@property(copy, nonatomic) IMASettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) NSArray *subtitles; // @synthesize subtitles=_subtitles;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) __weak id <IMAVideoDisplayDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)pauseAd;
- (void)playAd;
- (void)bufferedMediaTimeFromLoadedTimeRanges:(id)arg1;
- (void)setNowPlayingInfo;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
@property(readonly, nonatomic) double totalMediaTime;
@property(readonly, nonatomic) double currentMediaTime;
- (_Bool)adPlayerViewIsPlaying:(id)arg1;
- (void)adPlayerViewDidRequestPauseRequest:(id)arg1;
- (void)adPlayerViewDidRequestPlayRequest:(id)arg1;
- (void)reset;
- (void)pause;
- (void)play;
- (void)loadUrl:(id)arg1;
- (void)loadStream:(id)arg1 withSubtitles:(id)arg2;
- (void)audioHardwareRouteChanged:(id)arg1;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)reportPlaybackStatus;
- (void)attemptToResumePlayback;
- (void)playerItemPlaybackBufferEmptyDidChange;
- (void)playerItemTimedMetadataDidChange;
- (void)playerItemStatusDidChange;
- (void)playerItemLoadedTimeRangesDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)playerItemPlaybackStalled:(id)arg1;
- (void)playerItemDidFinishPlaying:(id)arg1;
- (void)setAndObservePlayerItem:(id)arg1;
- (void)stopTracking;
- (void)startTracking;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;
- (id)initWithAVPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

