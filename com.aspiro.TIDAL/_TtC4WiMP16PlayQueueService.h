//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface _TtC4WiMP16PlayQueueService : NSObject
{
    // Error parsing type: , name: currentQueueCopy
    // Error parsing type: , name: currentQueueType
    // Error parsing type: , name: lastPosition
    // Error parsing type: , name: delegate
}

+ (id)sharedInstance;
- (CDUnknownBlockType).cxx_destruct;
- (void)reportProgress;
- (long long)getActivesTotalCount;
- (id)getPlayQueueItemUuidsFromCurrentIndex;
- (void)removeItemAtIndex:(long long)arg1;
- (void)clearQueueAndStopPlayback;
- (id)dictionaryForCurrentItem;
- (void)setPositionAndPlay:(long long)arg1;
- (long long)currentPosition;
- (void)playVideoById:(long long)arg1;
- (void)playTrackById:(long long)arg1;
- (void)playRadioTracks:(id)arg1 startImmediately:(_Bool)arg2;
- (_Bool)playWithLightItems:(id)arg1 dynamicPageKey:(id)arg2 keepFirst:(_Bool)arg3;
- (_Bool)playMediaItems:(id)arg1 playlistUuid:(id)arg2 keepFirst:(_Bool)arg3 usingShuffle:(_Bool)arg4;
- (_Bool)playMediaItems:(id)arg1 usingShuffle:(_Bool)arg2 playlistUuid:(id)arg3;
- (_Bool)playMediaItems:(id)arg1 playlistUuid:(id)arg2;
- (void)playCurrentItem;
- (void)addMediaItemsToActiveQueueAsLast:(id)arg1;
- (void)addMediaItemsToActiveQueueAsNext:(id)arg1;
- (void)moveItemFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (id)itemAtIndex:(long long)arg1;
- (_Bool)canSkipForwards;
- (id)currentItem;
- (_Bool)queueIsEmpty;
- (long long)itemsCount;
- (void)switchToQueue:(long long)arg1;
- (void)loadCurrentQueue;
- (void)saveCurrentQueue;
- (id)init;

@end

