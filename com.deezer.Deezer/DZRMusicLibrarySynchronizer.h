//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DZRFileDownloadersSchedulerObserver-Protocol.h"

@class DZRDownloadableIndexer, DZRFileDownloadersScheduler, DZRMusicLibraryCache, DZRMusicLibraryRegistrer, DZRObservationNotifier, DZRPlaybackPreferences, DZRSynchronizerOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface DZRMusicLibrarySynchronizer : NSObject <DZRFileDownloadersSchedulerObserver>
{
    DZRSynchronizerOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_callbacksQueue;
    DZRObservationNotifier *_notifier;
    DZRMusicLibraryRegistrer *_registrer;
    DZRDownloadableIndexer *_indexer;
    DZRFileDownloadersScheduler *_scheduler;
    DZRMusicLibraryCache *_cache;
    DZRPlaybackPreferences *_preferences;
}

@property(retain, nonatomic) DZRPlaybackPreferences *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) DZRMusicLibraryCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) DZRFileDownloadersScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(retain, nonatomic) DZRDownloadableIndexer *indexer; // @synthesize indexer=_indexer;
@property(retain, nonatomic) DZRMusicLibraryRegistrer *registrer; // @synthesize registrer=_registrer;
@property(retain, nonatomic) DZRObservationNotifier *notifier; // @synthesize notifier=_notifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbacksQueue; // @synthesize callbacksQueue=_callbacksQueue;
@property(retain, nonatomic) DZRSynchronizerOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (_Bool)hasSmartCachedPlayable:(id)arg1;
- (id)allSmartCachedPlayables;
- (id)getRandomSelectionOfDownloadedTracks:(unsigned long long)arg1;
- (id)playablesWithIndexedDownloadablesAmong:(id)arg1;
- (void)availablePlayablesAmongPlayables:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registeredCollectionsWithAvailablePlayablesAmongCollections:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)availablePlayablesIDsForRegisteredCollection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registeredCollectionsAmongCollections:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)numberOfObjectsAvailableFromCollection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)availableDownloadableForObject:(id)arg1 fromCollection:(id)arg2 minimumQualityLevel:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_firstAvailableDownloadableAmong:(id)arg1 collectionID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)isObjectAvailableForOfflineMode:(id)arg1 fromCollection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)isCollectionWithUniqueIDRegisteredForSynchronization:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stateForCollectionAndCollectionTracks:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)knowsCollectionsRegisteredForSynchronization:(CDUnknownBlockType)arg1;
- (void)scheduler:(id)arg1 didEndDownloaderWithEnding:(id)arg2;
- (void)scheduler:(id)arg1 didDownloadMoreBytes:(unsigned long long)arg2 forDownloadadble:(id)arg3 collectionID:(id)arg4 streamable:(_Bool)arg5 currentFileSize:(unsigned long long)arg6 expectedSize:(unsigned long long)arg7 bytesPerSecond:(unsigned long long)arg8;
- (void)scheduler:(id)arg1 didEnqueueDownloaderForDownloadadble:(id)arg2 streamable:(_Bool)arg3;
- (void)deleteAllQualityForObjectsFromCollection:(id)arg1;
- (void)downloadMissingObjectsAmong:(id)arg1 fromCollection:(id)arg2 qualityLevel:(long long)arg3;
- (void)downloadObjectsFromCollection:(id)arg1 qualityLevel:(long long)arg2;
- (void)checkIndexerConsistencyForDownloadable:(id)arg1 playable:(id)arg2 collection:(id)arg3;
- (void)clearOfflineCache:(CDUnknownBlockType)arg1;
- (void)offlineCacheStorageDetails:(CDUnknownBlockType)arg1;
- (void)deleteAllQualityForObject:(id)arg1 fromCollection:(id)arg2;
- (void)downloadPlayable:(id)arg1 fromCollection:(id)arg2 qualityLevel:(long long)arg3;
- (void)unregisterAllCollectionsAndStopSynchronization;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)operationQueueCancellationRules;
- (void)dispose;
- (id)initWithRegistrer:(id)arg1 indexer:(id)arg2 scheduler:(id)arg3 cache:(id)arg4 preferences:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

