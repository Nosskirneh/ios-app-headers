//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVPlayerLayer, NSString, _TtC8Playback11MediaStream;
@protocol PlayerDelegate, _TtP8Features13PlayQueueItem_;

@protocol Player <NSObject>
@property(readonly, nonatomic) AVPlayerLayer *layer;
@property(readonly, nonatomic) _Bool canKeepUpWithBuffer;
@property(readonly, nonatomic) double progressDuration;
@property(readonly, nonatomic) double bufferDuration;
@property(readonly, nonatomic) double fullDuration;
@property(readonly, nonatomic) double playableDuration;
@property(readonly, nonatomic) unsigned long long currentPlayState;
@property(readonly, nonatomic) _Bool isPlayingOffline;
@property(readonly, nonatomic) _Bool canPreloadItem;
@property(readonly, nonatomic) unsigned long long playerType;
@property(readonly, nonatomic) NSString *playerName;
@property(readonly, nonatomic) id <_TtP8Features13PlayQueueItem_> item;
@property(nonatomic) __weak id <PlayerDelegate> delegate;
- (void)pause;
- (void)seekToTime:(double)arg1;
- (void)play;
- (void)prepareToPlay;

@optional
- (void)stop;
- (void)openItem:(id <_TtP8Features13PlayQueueItem_>)arg1 stream:(_TtC8Playback11MediaStream *)arg2;
- (void)preloadItem:(id <_TtP8Features13PlayQueueItem_>)arg1 stream:(_TtC8Playback11MediaStream *)arg2;
@end

