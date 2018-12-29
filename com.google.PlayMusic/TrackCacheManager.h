//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CacheManager.h"

@class PersistenceModel;

@interface TrackCacheManager : CacheManager
{
    BOOL _notifyUpdateRequested;
    PersistenceModel *_persistenceModel;
}

- (void).cxx_destruct;
- (id)decryptedPathForCacheID:(id)arg1;
- (void)clearDecryptedData;
- (id)checkThatFilesArePlayable:(id)arg1;
- (id)oneTimeCheckThatFilesArePlayable:(id)arg1;
- (id)cacheIDFromFileURL:(id)arg1;
- (void)notifyTrackCacheUpdated;
- (void)clearCacheForOwner:(long long)arg1;
- (void)clearCache;
- (void)clearOrphanedCacheEntries;
- (id)evictionCandidatesForSize:(unsigned long long)arg1 owner:(long long)arg2;
- (_Bool)shouldEvictWhenCacheFullForOwner:(long long)arg1;
- (_Bool)deleteEntryForCachedID:(id)arg1;
- (_Bool)commitCacheEntry:(id)arg1;
- (_Bool)hasEntryForCachedID:(id)arg1 quality:(long long)arg2;
- (void)persistentTrackCacheEntryForCacheID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)tempCacheEntryForCacheID:(id)arg1 size:(unsigned long long)arg2 owner:(long long)arg3 quality:(long long)arg4 codec:(long long)arg5;
- (id)tempCacheEntryForCacheID:(id)arg1 size:(unsigned long long)arg2 owner:(long long)arg3;
- (_Bool)hasEntryForCachedID:(id)arg1;
- (unsigned long long)totalSizeOfCacheForOwner:(long long)arg1;
- (id)initWithPersistenceModel:(id)arg1;

@end
