//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTAudioPlayerMediaClockObserver;

@protocol SPTAudioPlayerMediaClock <NSObject>
@property(readonly, nonatomic) _Bool trackingPosition;
@property(readonly, nonatomic) float playbackSpeed;
@property(readonly, nonatomic) NSURL *audioTrackURI;
- (void)removeVideoPlaybackEventObserver:(id <SPTAudioPlayerMediaClockObserver>)arg1;
- (void)addVideoPlaybackEventObserver:(id <SPTAudioPlayerMediaClockObserver>)arg1;
- (double)currentPosition;
@end

