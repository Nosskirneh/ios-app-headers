//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FlipperContextDelegate-Protocol.h"
#import "Player-Protocol.h"
#import "VolumeAdjustable-Protocol.h"

@class AVPlayerLayer, AudioController, AudioErrorEventTagger, FlipperAudioPerformanceEventTagger, FlipperContext, NSString, NSURL, StreamURLFormatter, _TtC8Playback11MediaStream;
@protocol PlayerDelegate, _TtP8Features13PlayQueueItem_, _TtP8Features19OfflineKeyProviding_, _TtP8Features21OfflineItemLocalizing_;

@interface FlipperPlayer : NSObject <FlipperContextDelegate, Player, VolumeAdjustable>
{
    _Bool _atomicIsPlayingOffline;
    _Bool _isStopped;
    _Bool _isSeeking;
    _Bool _isPreparing;
    id <PlayerDelegate> delegate;
    AVPlayerLayer *layer;
    FlipperContext *_flipperContext;
    NSURL *_trackURL;
    _TtC8Playback11MediaStream *_stream;
    id <_TtP8Features13PlayQueueItem_> _atomicItem;
    unsigned long long _atomicPlayState;
    double _time;
    StreamURLFormatter *_streamURLFormatter;
    FlipperAudioPerformanceEventTagger *_performanceTagger;
    id <_TtP8Features21OfflineItemLocalizing_> _offlineItemLocator;
    AudioErrorEventTagger *_errorTagger;
    AudioController *_audioController;
    id <_TtP8Features19OfflineKeyProviding_> _offlineKeyProvider;
}

@property _Bool isPreparing; // @synthesize isPreparing=_isPreparing;
@property _Bool isSeeking; // @synthesize isSeeking=_isSeeking;
@property _Bool isStopped; // @synthesize isStopped=_isStopped;
@property(readonly, nonatomic) id <_TtP8Features19OfflineKeyProviding_> offlineKeyProvider; // @synthesize offlineKeyProvider=_offlineKeyProvider;
@property(readonly, nonatomic) AudioController *audioController; // @synthesize audioController=_audioController;
@property(readonly, nonatomic) AudioErrorEventTagger *errorTagger; // @synthesize errorTagger=_errorTagger;
@property(readonly, nonatomic) id <_TtP8Features21OfflineItemLocalizing_> offlineItemLocator; // @synthesize offlineItemLocator=_offlineItemLocator;
@property(readonly, nonatomic) FlipperAudioPerformanceEventTagger *performanceTagger; // @synthesize performanceTagger=_performanceTagger;
@property(readonly, nonatomic) StreamURLFormatter *streamURLFormatter; // @synthesize streamURLFormatter=_streamURLFormatter;
@property double time; // @synthesize time=_time;
@property unsigned long long atomicPlayState; // @synthesize atomicPlayState=_atomicPlayState;
@property _Bool atomicIsPlayingOffline; // @synthesize atomicIsPlayingOffline=_atomicIsPlayingOffline;
@property(retain) id <_TtP8Features13PlayQueueItem_> atomicItem; // @synthesize atomicItem=_atomicItem;
@property(retain) _TtC8Playback11MediaStream *stream; // @synthesize stream=_stream;
@property(retain) NSURL *trackURL; // @synthesize trackURL=_trackURL;
@property(readonly, nonatomic) FlipperContext *flipperContext; // @synthesize flipperContext=_flipperContext;
@property(readonly, nonatomic) AVPlayerLayer *layer; // @synthesize layer;
@property(nonatomic) __weak id <PlayerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)notifyListenersOfPlayerStateTransitionChange:(id)arg1;
- (void)notifyListenersOfPlayerStateChange:(unsigned long long)arg1;
- (void)notifyListenersOfProgressChange:(double)arg1;
- (_Bool)isItemAvailableOffline:(id)arg1;
- (void)playerTriggeredPerformanceEventWithVersion:(id)arg1 attributes:(id)arg2;
- (id)playerStateTransitionForFlipperPlayerState:(int)arg1 withReason:(int)arg2;
- (id)playableURLForItem:(id)arg1 stream:(id)arg2;
- (_Bool)isCurrentTrackEqualToTrackURL:(id)arg1;
- (_Bool)shouldNotPropagateProgressUpdate;
- (void)stateDidTransition:(id)arg1;
- (void)playerDidProgress:(double)arg1 withDuration:(double)arg2 forURL:(id)arg3;
- (void)playerChangedState:(int)arg1 forReason:(int)arg2 forURL:(id)arg3 error:(int)arg4;
- (void)playerError:(id)arg1 sourceFile:(id)arg2 line:(long long)arg3 errorString:(id)arg4 url:(id)arg5 diagnostics:(id)arg6;
- (void)setVolume:(double)arg1;
@property(readonly, nonatomic) _Bool isPlayingOffline;
@property(readonly, nonatomic) id <_TtP8Features13PlayQueueItem_> item;
@property(readonly, nonatomic) NSString *playerName;
@property(readonly, nonatomic) _Bool canKeepUpWithBuffer;
@property(readonly, nonatomic) double progressDuration;
@property(readonly, nonatomic) double bufferDuration;
@property(readonly, nonatomic) unsigned long long currentPlayState;
@property(readonly, nonatomic) double fullDuration;
@property(readonly, nonatomic) double playableDuration;
- (void)preloadItem:(id)arg1 stream:(id)arg2;
- (void)openItem:(id)arg1 stream:(id)arg2;
- (void)pause;
- (void)stop;
- (void)seekToTime:(double)arg1;
- (void)play;
- (void)prepareToPlay;
@property(readonly, nonatomic) _Bool canPreloadItem;
@property(readonly, nonatomic) unsigned long long playerType;
- (void)dealloc;
- (void)destroy;
- (id)initWithInitialItem:(id)arg1 urlFormatter:(id)arg2 flipperContextFactory:(id)arg3 performanceTagger:(id)arg4 errorTagger:(id)arg5 offlineItemLocator:(id)arg6 accessQueue:(id)arg7 audioController:(id)arg8 offlineKeyProvider:(id)arg9;
- (id)initWithInitialItem:(id)arg1 streamURLFormatter:(id)arg2;
- (id)dateFormatter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
