//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ForceSyncingService-Protocol.h"

@class EntityCollectionBatchedSyncFactory, NSString, RACDisposable, RACScheduler, RecentlyPlayedSyncFactory, SyncCenter;
@protocol Fetcher;

@interface RecentlyPlayedSyncingService : NSObject <ForceSyncingService>
{
    SyncCenter *_syncCenter;
    RecentlyPlayedSyncFactory *_syncFactory;
    id <Fetcher> _trackFetcher;
    id <Fetcher> _contextFetcher;
    EntityCollectionBatchedSyncFactory *_entityCollectionSyncFactory;
    RACScheduler *_scheduler;
    RACDisposable *_fetchDisposable;
}

@property(retain, nonatomic) RACDisposable *fetchDisposable; // @synthesize fetchDisposable=_fetchDisposable;
@property(readonly, nonatomic) RACScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) EntityCollectionBatchedSyncFactory *entityCollectionSyncFactory; // @synthesize entityCollectionSyncFactory=_entityCollectionSyncFactory;
@property(readonly, nonatomic) id <Fetcher> contextFetcher; // @synthesize contextFetcher=_contextFetcher;
@property(readonly, nonatomic) id <Fetcher> trackFetcher; // @synthesize trackFetcher=_trackFetcher;
@property(readonly, nonatomic) RecentlyPlayedSyncFactory *syncFactory; // @synthesize syncFactory=_syncFactory;
@property(readonly, nonatomic) SyncCenter *syncCenter; // @synthesize syncCenter=_syncCenter;
- (void).cxx_destruct;
- (id)groupUrnsByTypeFromRecentlyPlayed:(id)arg1;
- (id)queueFetchRelatedEntitesForRecentlyPlayed:(id)arg1;
- (id)syncForUnsyncedTracks:(id)arg1 unsyncedContexts:(id)arg2;
- (_Bool)shouldPostTracks:(id)arg1 contexts:(id)arg2;
- (id)updatedRecentlyPlayedSignalWithRecentlyPlayed:(id)arg1;
- (id)fetchRecentlyPlayedSignal;
- (id)postUnsyncedRecentlyPlayedSignal;
- (id)syncSignal;
- (void)forceSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncWithCompletion:(CDUnknownBlockType)arg1;
- (void)postUnsyncedRecentlyPlayed;
- (id)initWithSyncCenter:(id)arg1 syncFactory:(id)arg2 trackFetcherFactory:(id)arg3 contextFetcherFactory:(id)arg4 entityCollectionSyncFactory:(id)arg5 scheduler:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
