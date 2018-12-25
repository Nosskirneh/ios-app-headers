//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSDate, NSMutableDictionary, NSString;

@interface YTOfflineGELEventController : NSObject
{
    NSString *_lastGELHeartbeatVideoID;
    NSDate *_lastGELHeartbeatTime;
    NSMutableDictionary *_GELEntryCache;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)offlineGELEventDataSource;
- (_Bool)shouldDropHeartbeatEventWithVideoID:(id)arg1;
- (void)removeVideoID:(id)arg1;
- (void)reset;
- (void)getGELOfflineVideoCacheEntryWithVideoID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (void)logEventWithVideoID:(id)arg1 status:(int)arg2;
- (id)getOfflineTransferStatusChangedWithVideoID:(id)arg1 entry:(id)arg2 status:(int)arg3;
- (void)logOffliningFailedEventWithVideoID:(id)arg1 forceIsAd:(_Bool)arg2 failureReason:(int)arg3;
- (id)currentDate;
- (_Bool)enableGelLogging;
- (void)sendGelEvent:(CDUnknownBlockType)arg1 fieldNumber:(int)arg2;
- (void)removeVideoIDFromIsAdCache:(id)arg1;
- (void)resetIsAdCache;
- (void)clearHeartbeat;
- (void)logOffliningDeletedEventWithVideoID:(id)arg1;
- (void)logOffliningRetriedEventWithVideoID:(id)arg1 didMarkForRetry:(_Bool)arg2;
- (void)logOffliningCancelledEventWithVideoID:(id)arg1;
- (void)logOffliningSuspendedEventWithVideoID:(id)arg1;
- (void)logOffliningSuspendedEventWithVideoID:(id)arg1 pendingState:(unsigned int)arg2;
- (void)logOffliningHeartbeatEventWithVideoID:(id)arg1 fetchedBytes:(long long)arg2;
- (void)logAdOffliningFailedEventWithVideoID:(id)arg1 failureReason:(int)arg2;
- (void)logOffliningFailedEventWithVideoID:(id)arg1 failureReason:(int)arg2;
- (void)logOffliningPausedEventWithVideo:(id)arg1;
- (void)logOffliningSuccessEventWithVideoID:(id)arg1 fetchedBytes:(long long)arg2;
- (void)logOffliningStartEventsWithVideoID:(id)arg1;
- (void)logAddedToOfflineQueueEventWithVideoID:(id)arg1;
- (id)init;

@end

