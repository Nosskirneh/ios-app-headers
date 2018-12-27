//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class Urn;
@protocol _TtP8Features13PlayQueueItem_;

@protocol _TtP8Features17PlaybackServicing_
@property(readonly, nonatomic) double progressDuration;
@property(readonly, nonatomic) unsigned long long playState;
@property(readonly, nonatomic) id <_TtP8Features13PlayQueueItem_> nextPlayQueueItem;
@property(readonly, nonatomic) id <_TtP8Features13PlayQueueItem_> previousPlayQueueItem;
@property(readonly, nonatomic) id <_TtP8Features13PlayQueueItem_> currentPlayQueueItem;
- (double)progressForItem:(Urn *)arg1;
- (void)seekToTime:(double)arg1;
- (_Bool)isItemPlaying:(Urn *)arg1;
- (void)skipBackwards;
- (void)skipForwards;
- (void)pause;
- (void)play;
@end

