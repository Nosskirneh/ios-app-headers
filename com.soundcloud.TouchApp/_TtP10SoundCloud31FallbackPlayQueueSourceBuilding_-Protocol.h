//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, Urn;
@protocol _TtP8Features13PlayQueueItem_, _TtP8Playback15PlayQueueSource_;

@protocol _TtP10SoundCloud31FallbackPlayQueueSourceBuilding_
- (void)playQueueSourceWithTrackUrn:(Urn *)arg1 completion:(void (^)(id <_TtP8Playback15PlayQueueSource_>))arg2;
- (id <_TtP8Playback15PlayQueueSource_>)playQueueSourceWithPlaceholder:(id <_TtP8Features13PlayQueueItem_>)arg1 tracks:(NSArray *)arg2;
@end
