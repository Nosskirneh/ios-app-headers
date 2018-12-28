//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Player.h"

#import "GPMAsyncPlayerDelegate-Protocol.h"

@class NSString;
@protocol GPMAsyncPlayer, GPMPlayerItem;

@interface LocalPlayer : Player <GPMAsyncPlayerDelegate>
{
    id <GPMAsyncPlayer> _player;
    _Bool _bufferingCompleteNotificationSent;
    _Bool _unknownErrorOccurred;
    _Bool _playerIsPlaying;
    double _playerCurrentTime;
    id <GPMPlayerItem> _currentItem;
    id <GPMPlayerItem> _nextItem;
    double _bufferedMediaTime;
    double _currentBufferingWindow;
    id <GPMPlayerItem> _currentItemShadow;
    id <GPMPlayerItem> _nextItemShadow;
    double _currentTimeShadow;
    float _volumeShadow;
    unsigned long long _shadowPlayState;
    _Bool _isBuffering;
}

@property(nonatomic) _Bool isBuffering; // @synthesize isBuffering=_isBuffering;
- (void).cxx_destruct;
- (void)cleanupLoadingState;
- (_Bool)canPlayItem:(id)arg1 error:(id *)arg2;
- (void)stuckInBufferingState;
- (void)resumePlaybackIfPossible;
- (void)canStreamMusicDidChange:(id)arg1;
- (void)audioPlayer:(id)arg1 receivedBufferingEvent:(unsigned long long)arg2 bufferedMediaTime:(double)arg3;
- (void)audioPlayer:(id)arg1 readyToPlayItem:(id)arg2 bufferedMediaTime:(double)arg3 trackFetchData:(id)arg4;
- (void)audioPlayer:(id)arg1 didReceivePlayStatusChangeToIsPlaying:(_Bool)arg2 playbackError:(id)arg3;
- (void)audioPlayer:(id)arg1 finishedPlayingItem:(id)arg2 willMoveToItem:(id)arg3;
- (void)audioPlayer:(id)arg1 currentItemDidChange:(id)arg2 bufferedMediaTime:(double)arg3;
- (void)audioPlayer:(id)arg1 item:(id)arg2 currentTimeChanged:(CDStruct_1b6d18a9)arg3;
- (void)setVolume:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)clearWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopWithWillPlayGapless:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)pauseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)playFrom:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)playWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)advanceToNextWithWillPlayGapless:(_Bool)arg1 explicitPlay:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isCurrentAssetFullyBuffered;
- (_Bool)isLocal;
- (_Bool)isPlaying;
- (double)remainingTime;
- (double)duration;
- (void)setCurrentTime:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (double)currentTime;
- (void)setNextPlayerAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setCurrentPlayerAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)cleanupAudioPlayer;
- (_Bool)makeAudioPlayer;
- (void)dealloc;
- (id)initWithExpectedPlaybackState:(long long)arg1 audioSessionManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

