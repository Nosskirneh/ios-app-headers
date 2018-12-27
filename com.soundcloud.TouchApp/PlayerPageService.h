//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PlaybackService;

@interface PlayerPageService : NSObject
{
    PlaybackService *_playbackService;
}

@property(readonly, nonatomic) PlaybackService *playbackService; // @synthesize playbackService=_playbackService;
- (void).cxx_destruct;
- (_Bool)hasMoreTracks;
- (id)playQueueFailureSignal;
- (id)playQueueChangedSignal;
- (id)nextPlayQueueItemChangedSignal;
- (id)previousPlayQueueItemSignal;
- (id)nextPlayQueueItemSignal;
- (void)rewind;
- (void)pause;
- (void)play;
- (void)moveToItem:(id)arg1 withInteraction:(unsigned long long)arg2;
- (void)moveToPreviousItemWithInteraction:(unsigned long long)arg1;
- (void)moveToNextItemWithInteraction:(unsigned long long)arg1;
- (_Bool)shouldMoveToPreviousInsteadOfRestartingCurrentItem;
- (id)playQueueItemBefore:(id)arg1;
- (id)playQueueItemAfter:(id)arg1;
- (id)currentPlayQueueItem;
- (id)taggingContext;
- (id)initWithPlaybackService:(id)arg1;
- (id)init;

@end

