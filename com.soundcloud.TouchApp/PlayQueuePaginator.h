//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, SyncCenter, UserSettings;
@protocol OS_dispatch_queue;

@interface PlayQueuePaginator : NSObject
{
    _Bool _isPaginating;
    _Bool _didAutoplayRelatedTracks;
    NSMutableArray *_queueSyncs;
    UserSettings *_userSettings;
    SyncCenter *_syncCenter;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic) _Bool didAutoplayRelatedTracks; // @synthesize didAutoplayRelatedTracks=_didAutoplayRelatedTracks;
@property(readonly, nonatomic) SyncCenter *syncCenter; // @synthesize syncCenter=_syncCenter;
@property(readonly, nonatomic) UserSettings *userSettings; // @synthesize userSettings=_userSettings;
@property(readonly, nonatomic) NSMutableArray *queueSyncs; // @synthesize queueSyncs=_queueSyncs;
- (void).cxx_destruct;
- (void)configureRelatedTracksPaginationWithSeedTrack:(id)arg1;
- (id)paginateWithSync:(id)arg1;
- (id)paginateFirstSync;
- (_Bool)canPaginateRelatedTracks;
@property(nonatomic) _Bool isPaginating; // @synthesize isPaginating=_isPaginating;
- (_Bool)canPaginate;
- (id)paginateWithEndOfQueueUrn:(id)arg1;
- (id)initWithSyncs:(id)arg1 userSettings:(id)arg2 syncCenter:(id)arg3 serialQueue:(id)arg4;
- (id)initWithQueueSyncs:(id)arg1;

@end
