//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError;
@protocol PlayQueueManager, _TtP8Features13PlayQueueItem_;

@protocol PlayQueueManagerDelegate
- (void)playQueueManager:(id <PlayQueueManager>)arg1 didFailWithError:(NSError *)arg2;
- (void)playQueueManagerDidChangePlayQueue:(id <PlayQueueManager>)arg1;
- (void)playQueueManager:(id <PlayQueueManager>)arg1 nextItemDidChange:(id <_TtP8Features13PlayQueueItem_>)arg2;
@end
