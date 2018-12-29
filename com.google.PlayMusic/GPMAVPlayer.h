//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GPMAsyncPlayer-Protocol.h"

@class AVQueuePlayer, GPMAVPlayerItemWrapper, GPMOperationQueue, NSString;
@protocol GPMAsyncPlayerDelegate;

@interface GPMAVPlayer : NSObject <GPMAsyncPlayer>
{
    id <GPMAsyncPlayerDelegate> _delegate;
    GPMOperationQueue *_delegateQueue;
    AVQueuePlayer *_audioPlayer;
    id _periodicTimeObserver;
    _Bool _suppressNotifications;
    GPMAVPlayerItemWrapper *_currentItemWrapper;
    GPMAVPlayerItemWrapper *_nextItemWrapper;
}

- (void).cxx_destruct;
- (void)removeNotifications:(id)arg1;
- (void)registerNotifications:(id)arg1;
- (void)removeNextItem;
- (void)removeAllItems;
- (double)bufferedMediaTimeFromLoadedTimeRanges;
- (id)trackFetchDataForCurrentItem;
- (_Bool)moveToNextItemWrapper;
- (void)audioPlayerDidFailToFinishPlaying:(id)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setVolume:(float)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)clearWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resetWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stopWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)playFromStartTime:(double)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)pauseWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)playWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setCurrentTime:(double)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)advanceToNextWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setNextItem:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setCurrentItem:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setPeriodicTimeObserverInterval:(CDStruct_1b6d18a9)arg1;
- (_Bool)cleanupAudioPlayer;
- (_Bool)makeAudioPlayer;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
